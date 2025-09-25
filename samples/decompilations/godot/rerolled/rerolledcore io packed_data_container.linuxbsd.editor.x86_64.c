/* CowData<unsigned char>::_ref(CowData<unsigned char> const&) [clone .part.0] */void CowData<unsigned_char>::_ref(CowData<unsigned_char> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
 else {
         *(undefined8*)this = 0;
      }

   }

   plVar1 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 != 0) {
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) {
            return;
         }

         LOCK();
         lVar3 = *plVar1;
         bVar4 = lVar2 == lVar3;
         if (bVar4) {
            *plVar1 = lVar2 + 1;
            lVar3 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }

   }

   return;
}
/* PackedDataContainer::_get_data() const */void PackedDataContainer::_get_data(void) {
   long in_RSI;
   long in_RDI;
   *(undefined8*)( in_RDI + 8 ) = 0;
   if (*(long*)( in_RSI + 0x248 ) != 0) {
      CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( in_RDI + 8 ), (CowData*)( in_RSI + 0x248 ));
   }

   return;
}
/* PackedDataContainer::_set_data(Vector<unsigned char> const&) */void PackedDataContainer::_set_data(PackedDataContainer *this, Vector *param_1) {
   undefined4 uVar1;
   long lVar2;
   lVar2 = *(long*)( param_1 + 8 );
   if (*(long*)( this + 0x248 ) != lVar2) {
      CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( this + 0x248 ), (CowData*)( param_1 + 8 ));
      lVar2 = *(long*)( this + 0x248 );
   }

   if (lVar2 == 0) {
      uVar1 = 0;
   }
 else {
      uVar1 = *(undefined4*)( lVar2 + -8 );
   }

   *(undefined4*)( this + 0x250 ) = uVar1;
   return;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
 else {
         *(undefined8*)this = 0;
      }

   }

   plVar1 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 != 0) {
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) {
            return;
         }

         LOCK();
         lVar3 = *plVar1;
         bVar4 = lVar2 == lVar3;
         if (bVar4) {
            *plVar1 = lVar2 + 1;
            lVar3 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }

   }

   return;
}
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */void CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this) {
   long *plVar1;
   size_t __n;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   __n = *(size_t*)( *(long*)this + -8 );
   uVar5 = 0x10;
   if (__n != 0) {
      uVar5 = __n - 1 | __n - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = 1;
      puVar4[1] = __n;
      memcpy(puVar4 + 2, *(void**)this, __n);
      if (*(long*)this != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)this + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined8**)this = puVar4 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* PackedDataContainer::_get_at_ofs(unsigned int, unsigned char const*, bool&) const */Variant *PackedDataContainer::_get_at_ofs(uint param_1, uchar *param_2, bool *param_3) {
   uchar *puVar1;
   byte *pbVar2;
   Object *pOVar3;
   char cVar4;
   int iVar5;
   long lVar6;
   RefCounted *this;
   long in_RCX;
   uint uVar7;
   undefined4 in_register_0000003c;
   Variant *this_00;
   undefined1 *in_R8;
   long in_FS_OFFSET;
   int local_48[2];
   undefined1 local_40[16];
   long local_30;
   this_00 = (Variant*)CONCAT44(in_register_0000003c, param_1);
   iVar5 = (int)param_3;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( param_2 + 0x248 ) == 0) {
      uVar7 = 0;
   }
 else {
      uVar7 = *(uint*)( *(long*)( param_2 + 0x248 ) + -8 );
   }

   if (uVar7 < iVar5 + 4U) {
      _err_print_error("_get_at_ofs", "core/io/packed_data_container.cpp", 0x66, "Condition \"p_ofs + 4 > (uint32_t)data.size()\" is true. Returning: Variant()", 0, 0);
      *(undefined4*)this_00 = 0;
      *(undefined1(*) [16])( this_00 + 8 ) = (undefined1[16])0x0;
      goto LAB_0010033c;
   }

   uVar7 = 0;
   puVar1 = (uchar*)( in_RCX + ( (ulong)param_3 & 0xffffffff ) );
   lVar6 = 0;
   do {
      pbVar2 = puVar1 + lVar6;
      cVar4 = (char)lVar6;
      lVar6 = lVar6 + 1;
      uVar7 = uVar7 | ( uint ) * pbVar2 << ( cVar4 * '\b' & 0x1fU );
   }
 while ( lVar6 != 4 );
   if (uVar7 < 0xfffffffe) {
      local_48[0] = 0;
      local_48[1] = 0;
      local_40 = (undefined1[16])0x0;
      iVar5 = decode_variant((Variant*)local_48, puVar1, *(int*)( param_2 + 0x250 ) - iVar5, (int*)0x0, false, 0);
      if (iVar5 == 0) {
         *(int*)this_00 = local_48[0];
         *(undefined8*)( this_00 + 8 ) = local_40._0_8_;
         *(undefined8*)( this_00 + 0x10 ) = local_40._8_8_;
      }
 else {
         *in_R8 = 1;
         _err_print_error("_get_at_ofs", "core/io/packed_data_container.cpp", 0x76, "Condition \"err != OK\" is true. Returning: Variant()", "Error when trying to decode Variant.", 0, 0);
         *(undefined4*)this_00 = 0;
         cVar4 = Variant::needs_deinit[local_48[0]];
         *(undefined1(*) [16])( this_00 + 8 ) = (undefined1[16])0x0;
         if (cVar4 != '\0') {
            Variant::_clear_internal();
         }

      }

      goto LAB_0010033c;
   }

   this(RefCounted * operator_new(0x188, ""));
   RefCounted::RefCounted(this);
   *(undefined4*)( this + 0x17c ) = 0;
   *(undefined***)this = &PTR__initialize_classv_0010d1d8;
   *(undefined8*)( this + 0x180 ) = 0;
   postinitialize_handler((Object*)this);
   cVar4 = RefCounted::init_ref();
   if (cVar4 == '\0') {
      this(RefCounted * 0x0);
   }

   cVar4 = RefCounted::init_ref();
   pOVar3 = *(Object**)( (Object*)this + 0x180 );
   if (cVar4 == '\0') {
      if (pOVar3 != (Object*)0x0) {
         *(undefined8*)( (Object*)this + 0x180 ) = 0;
         cVar4 = RefCounted::unreference();
         if (cVar4 != '\0') {
            param_2 = (uchar*)0x0;
            cVar4 = predelete_handler(pOVar3);
            if (cVar4 != '\0') goto LAB_001005a7;
         }

      }

      *(int*)( (Object*)this + 0x17c ) = iVar5;
      Variant::Variant(this_00, (Object*)this);
   }
 else {
      if ((Object*)param_2 == pOVar3) {
         LAB_0010047c:*(int*)( (Object*)this + 0x17c ) = iVar5;
         Variant::Variant(this_00, (Object*)this);
      }
 else {
         *(uchar**)( (Object*)this + 0x180 ) = param_2;
         cVar4 = RefCounted::reference();
         if (cVar4 == '\0') {
            *(undefined8*)( (Object*)this + 0x180 ) = 0;
         }

         if (( ( pOVar3 == (Object*)0x0 ) || ( cVar4 = RefCounted::unreference() ),cVar4 == '\0' )) goto LAB_0010047c;
         LAB_001005a7:( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
         Memory::free_static(pOVar3, false);
         *(int*)( (Object*)this + 0x17c ) = iVar5;
         Variant::Variant(this_00, (Object*)this);
         if ((Object*)param_2 == (Object*)0x0) goto LAB_001003fc;
      }

      cVar4 = RefCounted::unreference();
      if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler((Object*)param_2) ),cVar4 != '\0') {
         ( **(code**)( *(long*)param_2 + 0x140 ) )(param_2);
         Memory::free_static(param_2, false);
      }

   }

   LAB_001003fc:cVar4 = RefCounted::unreference();
   if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler((Object*)this) ),cVar4 != '\0') {
      ( **(code**)( *(long*)this + 0x140 ) )(this);
      Memory::free_static(this, false);
   }

   LAB_0010033c:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this_00;
}
/* PackedDataContainer::_type_at_ofs(unsigned int) const */uint PackedDataContainer::_type_at_ofs(PackedDataContainer *this, uint param_1) {
   byte *pbVar1;
   long lVar2;
   char cVar3;
   long lVar4;
   uint uVar5;
   lVar2 = *(long*)( this + 0x248 );
   if (lVar2 == 0) {
      if (param_1 == 0xfffffffc) {
         _err_print_error("_type_at_ofs", "core/io/packed_data_container.cpp", 0x7f, "Parameter \"rd\" is null.", 0, 0);
         return 0;
      }

   }
 else if (param_1 + 4 <= *(uint*)( lVar2 + -8 )) {
      lVar4 = 0;
      uVar5 = 0;
      do {
         pbVar1 = (byte*)( lVar2 + (ulong)param_1 + lVar4 );
         cVar3 = (char)lVar4;
         lVar4 = lVar4 + 1;
         uVar5 = uVar5 | ( uint ) * pbVar1 << ( cVar3 * '\b' & 0x1fU );
      }
 while ( lVar4 != 4 );
      return uVar5;
   }

   _err_print_error("_type_at_ofs", "core/io/packed_data_container.cpp", 0x7d, "Condition \"p_ofs + 4 > (uint32_t)data.size()\" is true. Returning: 0", 0, 0);
   return 0;
}
/* PackedDataContainer::_size(unsigned int) const */uint PackedDataContainer::_size(PackedDataContainer *this, uint param_1) {
   byte *pbVar1;
   byte bVar2;
   char cVar3;
   long lVar4;
   ulong uVar5;
   long lVar6;
   uint uVar7;
   lVar6 = *(long*)( this + 0x248 );
   if (lVar6 == 0) {
      if (param_1 == 0xfffffffc) {
         _err_print_error("_size", "core/io/packed_data_container.cpp", 0x89, "Parameter \"rd\" is null.", 0, 0);
         return 0;
      }

   }
 else if (param_1 + 4 <= *(uint*)( lVar6 + -8 )) {
      uVar7 = 0;
      lVar6 = (ulong)param_1 + lVar6;
      lVar4 = 0;
      do {
         pbVar1 = (byte*)( lVar6 + lVar4 );
         cVar3 = (char)lVar4;
         lVar4 = lVar4 + 1;
         bVar2 = cVar3 * '\b' & 0x1f;
         uVar7 = uVar7 | ( uint ) * pbVar1 << bVar2;
      }
 while ( lVar4 != 4 );
      if (uVar7 != 0xfffffffe) {
         if (uVar7 == 0xffffffff) {
            uVar5 = ( ulong )(uint)(0 << bVar2);
            uVar7 = 0;
            do {
               pbVar1 = (byte*)( lVar6 + 4 + uVar5 );
               cVar3 = (char)uVar5;
               uVar5 = uVar5 + 1;
               uVar7 = uVar7 | ( uint ) * pbVar1 << ( cVar3 * '\b' & 0x1fU );
            }
 while ( uVar5 != 4 );
            return uVar7;
         }

         return 0xffffffff;
      }

      uVar5 = ( ulong )(uint)(0 << bVar2);
      uVar7 = 0;
      do {
         pbVar1 = (byte*)( lVar6 + 4 + uVar5 );
         cVar3 = (char)uVar5;
         uVar5 = uVar5 + 1;
         uVar7 = uVar7 | ( uint ) * pbVar1 << ( cVar3 * '\b' & 0x1fU );
      }
 while ( uVar5 != 4 );
      return uVar7;
   }

   _err_print_error("_size", "core/io/packed_data_container.cpp", 0x87, "Condition \"p_ofs + 4 > (uint32_t)data.size()\" is true. Returning: 0", 0, 0);
   return 0;
}
/* PackedDataContainer::size() const */void PackedDataContainer::size(PackedDataContainer *this) {
   _size(this, 0);
   return;
}
/* PackedDataContainer::_iter_init_ofs(Array const&, unsigned int) */Array *PackedDataContainer::_iter_init_ofs(Array *param_1, uint param_2) {
   int iVar1;
   Variant *pVVar2;
   uint in_ECX;
   Array *in_RDX;
   undefined4 in_register_00000034;
   long in_FS_OFFSET;
   Array local_50[8];
   int local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array(local_50, in_RDX);
   iVar1 = _size((PackedDataContainer*)CONCAT44(in_register_00000034, param_2), in_ECX);
   if (iVar1 != 0) {
      iVar1 = Array::size();
      if (iVar1 == 1) {
         Variant::Variant((Variant*)local_48, 0);
         pVVar2 = (Variant*)Array::operator []((int)local_50);
         if (pVVar2 == (Variant*)local_48) {
            if (Variant::needs_deinit[local_48[0]] != '\0') {
               Variant::_clear_internal();
            }

         }
 else {
            if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar2 = 0;
            *(int*)pVVar2 = local_48[0];
            *(undefined8*)( pVVar2 + 8 ) = local_40;
            *(undefined8*)( pVVar2 + 0x10 ) = uStack_38;
         }

         Variant::Variant((Variant*)param_1, true);
         goto LAB_0010083d;
      }

   }

   Variant::Variant((Variant*)param_1, false);
   LAB_0010083d:Array::~Array(local_50);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PackedDataContainer::_iter_init(Array const&) */PackedDataContainer * __thiscall
PackedDataContainer::_iter_init(PackedDataContainer *this,Array *param_1){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   _iter_init_ofs((Array*)this, (uint)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PackedDataContainerRef::_iter_init(Array const&) */PackedDataContainerRef * __thiscall
PackedDataContainerRef::_iter_init(PackedDataContainerRef *this,Array *param_1){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   PackedDataContainer::_iter_init_ofs((Array*)this, ( uint ) * (undefined8*)( param_1 + 0x180 ));
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PackedDataContainer::_iter_next_ofs(Array const&, unsigned int) */Array *PackedDataContainer::_iter_next_ofs(Array *param_1, uint param_2) {
   int iVar1;
   int iVar2;
   Variant *pVVar3;
   uint in_ECX;
   Array *in_RDX;
   undefined4 in_register_00000034;
   int iVar4;
   long in_FS_OFFSET;
   Array local_60[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array(local_60, in_RDX);
   iVar1 = _size((PackedDataContainer*)CONCAT44(in_register_00000034, param_2), in_ECX);
   iVar2 = Array::size();
   if (iVar2 == 1) {
      iVar4 = (int)local_60;
      pVVar3 = (Variant*)Array::operator [](iVar4);
      iVar2 = Variant::operator_cast_to_int(pVVar3);
      if (( -1 < iVar2 ) && ( iVar2 < iVar1 )) {
         Variant::Variant((Variant*)local_58, iVar2 + 1);
         pVVar3 = (Variant*)Array::operator [](iVar4);
         if (pVVar3 == (Variant*)local_58) {
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

         }
 else {
            if (Variant::needs_deinit[*(int*)pVVar3] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar3 = 0;
            *(int*)pVVar3 = local_58[0];
            *(undefined8*)( pVVar3 + 8 ) = local_50;
            *(undefined8*)( pVVar3 + 0x10 ) = uStack_48;
         }

         Variant::Variant((Variant*)param_1, iVar1 != iVar2 + 1);
         goto LAB_00100a00;
      }

   }

   Variant::Variant((Variant*)param_1, false);
   LAB_00100a00:Array::~Array(local_60);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PackedDataContainer::_iter_next(Array const&) */PackedDataContainer * __thiscall
PackedDataContainer::_iter_next(PackedDataContainer *this,Array *param_1){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   _iter_next_ofs((Array*)this, (uint)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PackedDataContainerRef::_iter_next(Array const&) */PackedDataContainerRef * __thiscall
PackedDataContainerRef::_iter_next(PackedDataContainerRef *this,Array *param_1){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   PackedDataContainer::_iter_next_ofs((Array*)this, ( uint ) * (undefined8*)( param_1 + 0x180 ));
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PackedDataContainerRef::size() const */void PackedDataContainerRef::size(PackedDataContainerRef *this) {
   PackedDataContainer::_size(*(PackedDataContainer**)( this + 0x180 ), *(uint*)( this + 0x17c ));
   return;
}
/* PackedDataContainer::_iter_get_ofs(Variant const&, unsigned int) */Variant *PackedDataContainer::_iter_get_ofs(Variant *param_1, uint param_2) {
   byte *pbVar1;
   long lVar2;
   long lVar3;
   byte bVar4;
   char cVar5;
   int iVar6;
   int iVar7;
   uint in_ECX;
   Variant *in_RDX;
   long lVar8;
   undefined4 in_register_00000034;
   PackedDataContainer *this;
   uint uVar9;
   ulong uVar10;
   long in_FS_OFFSET;
   this(PackedDataContainer * CONCAT44(in_register_00000034, param_2));
   uVar10 = (ulong)in_ECX;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar6 = _size(this, in_ECX);
   iVar7 = Variant::operator_cast_to_int(in_RDX);
   if (( iVar7 < 0 ) || ( iVar6 <= iVar7 )) {
      LAB_00100c9d:*(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   }
 else {
      lVar3 = *(long*)( this + 0x248 );
      lVar8 = 0;
      uVar9 = 0;
      do {
         pbVar1 = (byte*)( lVar3 + uVar10 + lVar8 );
         cVar5 = (char)lVar8;
         lVar8 = lVar8 + 1;
         bVar4 = cVar5 * '\b' & 0x1f;
         uVar9 = uVar9 | ( uint ) * pbVar1 << bVar4;
      }
 while ( lVar8 != 4 );
      if (uVar9 == 0xfffffffe) {
         uVar9 = 0 << bVar4;
         lVar8 = 0;
         do {
            pbVar1 = (byte*)( uVar10 + 8 + (long)( iVar7 << 2 ) + lVar3 + lVar8 );
            cVar5 = (char)lVar8;
            lVar8 = lVar8 + 1;
            uVar9 = uVar9 | ( uint ) * pbVar1 << ( cVar5 * '\b' & 0x1fU );
         }
 while ( lVar8 != 4 );
      }
 else {
         if (uVar9 != 0xffffffff) {
            _err_print_error("_iter_get_ofs", "core/io/packed_data_container.cpp", 0x61, "Method/function failed. Returning: Variant()", 0, 0);
            goto LAB_00100c9d;
         }

         uVar9 = 0 << bVar4;
         lVar8 = 0;
         do {
            pbVar1 = (byte*)( uVar10 + 0xc + (long)( iVar7 * 0xc ) + lVar3 + lVar8 );
            cVar5 = (char)lVar8;
            lVar8 = lVar8 + 1;
            uVar9 = uVar9 | ( uint ) * pbVar1 << ( cVar5 * '\b' & 0x1fU );
         }
 while ( lVar8 != 4 );
      }

      _get_at_ofs((uint)param_1, (uchar*)this, (bool*)(ulong)uVar9);
   }

   if (lVar2 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* PackedDataContainer::_iter_get(Variant const&) */PackedDataContainer * __thiscall
PackedDataContainer::_iter_get(PackedDataContainer *this,Variant *param_1){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   _iter_get_ofs((Variant*)this, (uint)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PackedDataContainerRef::_iter_get(Variant const&) */PackedDataContainerRef * __thiscall
PackedDataContainerRef::_iter_get(PackedDataContainerRef *this,Variant *param_1){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   PackedDataContainer::_iter_get_ofs((Variant*)this, ( uint ) * (undefined8*)( param_1 + 0x180 ));
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PackedDataContainer::_key_at_ofs(unsigned int, Variant const&, bool&) const */undefined4 *PackedDataContainer::_key_at_ofs(uint param_1, Variant *param_2, bool *param_3) {
   byte *pbVar1;
   long lVar2;
   byte bVar3;
   bool bVar4;
   char cVar5;
   int iVar6;
   long lVar7;
   Variant *in_RCX;
   char *pcVar8;
   undefined8 uVar9;
   uint uVar10;
   uint uVar11;
   undefined4 in_register_0000003c;
   undefined4 *puVar12;
   uint uVar13;
   char *in_R8;
   uint uVar14;
   ulong uVar15;
   long in_FS_OFFSET;
   int local_58[6];
   long local_40;
   puVar12 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   lVar2 = *(long*)( param_2 + 0x248 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar2 == 0) {
      if ((int)param_3 != -4) goto LAB_00100f08;
      *in_R8 = '\x01';
      uVar9 = 0x9e;
      pcVar8 = "Parameter \"rd\" is null.";
   }
 else {
      if ((int)param_3 + 4U <= *(uint*)( lVar2 + -8 )) {
         lVar7 = 0;
         uVar13 = 0;
         lVar2 = lVar2 + ( (ulong)param_3 & 0xffffffff );
         do {
            pbVar1 = (byte*)( lVar2 + lVar7 );
            cVar5 = (char)lVar7;
            lVar7 = lVar7 + 1;
            uVar13 = uVar13 | ( uint ) * pbVar1 << ( cVar5 * '\b' & 0x1fU );
         }
 while ( lVar7 != 4 );
         if (uVar13 == 0xfffffffe) {
            if (*(int*)in_RCX - 2U < 2) {
               iVar6 = Variant::operator_cast_to_int(in_RCX);
               lVar7 = 0;
               uVar13 = 0;
               do {
                  pbVar1 = (byte*)( lVar2 + 4 + lVar7 );
                  cVar5 = (char)lVar7;
                  lVar7 = lVar7 + 1;
                  bVar3 = cVar5 * '\b' & 0x1f;
                  uVar13 = uVar13 | ( uint ) * pbVar1 << bVar3;
               }
 while ( lVar7 != 4 );
               if (( -1 < iVar6 ) && ( iVar6 < (int)uVar13 )) {
                  uVar13 = 0 << bVar3;
                  lVar7 = 0;
                  do {
                     pbVar1 = (byte*)( lVar2 + 8 + (long)( iVar6 << 2 ) + lVar7 );
                     cVar5 = (char)lVar7;
                     lVar7 = lVar7 + 1;
                     uVar13 = uVar13 | ( uint ) * pbVar1 << ( cVar5 * '\b' & 0x1fU );
                  }
 while ( lVar7 != 4 );
                  _get_at_ofs(param_1, (uchar*)param_2, (bool*)(ulong)uVar13);
                  goto LAB_00100e44;
               }

            }

         }
 else if (uVar13 == 0xffffffff) {
            uVar13 = Variant::hash();
            uVar14 = 0;
            lVar7 = 0;
            do {
               pbVar1 = (byte*)( lVar2 + 4 + lVar7 );
               cVar5 = (char)lVar7;
               lVar7 = lVar7 + 1;
               uVar14 = uVar14 | ( uint ) * pbVar1 << ( cVar5 * '\b' & 0x1fU );
            }
 while ( lVar7 != 4 );
            if (uVar14 != 0) {
               uVar10 = 0;
               bVar4 = false;
               do {
                  uVar11 = 0;
                  uVar15 = ( ulong )(uVar10 * 0xc);
                  lVar7 = 0;
                  do {
                     pbVar1 = (byte*)( lVar2 + 8 + uVar15 + lVar7 );
                     cVar5 = (char)lVar7;
                     lVar7 = lVar7 + 1;
                     uVar11 = uVar11 | ( uint ) * pbVar1 << ( cVar5 * '\b' & 0x1fU );
                  }
 while ( lVar7 != 4 );
                  if (uVar13 == uVar11) {
                     lVar7 = 0;
                     uVar11 = 0;
                     do {
                        pbVar1 = (byte*)( lVar2 + 0xc + uVar15 + lVar7 );
                        cVar5 = (char)lVar7;
                        lVar7 = lVar7 + 1;
                        uVar11 = uVar11 | ( uint ) * pbVar1 << ( cVar5 * '\b' & 0x1fU );
                     }
 while ( lVar7 != 4 );
                     _get_at_ofs((uint)(Variant*)local_58, (uchar*)param_2, (bool*)(ulong)uVar11);
                     if (*in_R8 != '\0') {
                        *puVar12 = 0;
                        *(undefined1(*) [16])( puVar12 + 2 ) = (undefined1[16])0x0;
                        goto LAB_00101104;
                     }

                     cVar5 = Variant::operator ==((Variant*)local_58, in_RCX);
                     if (cVar5 != '\0') {
                        lVar7 = 0;
                        uVar13 = 0;
                        do {
                           pbVar1 = (byte*)( lVar2 + 0x10 + uVar15 + lVar7 );
                           cVar5 = (char)lVar7;
                           lVar7 = lVar7 + 1;
                           uVar13 = uVar13 | ( uint ) * pbVar1 << ( cVar5 * '\b' & 0x1fU );
                        }
 while ( lVar7 != 4 );
                        _get_at_ofs(param_1, (uchar*)param_2, (bool*)(ulong)uVar13);
                        LAB_00101104:if (Variant::needs_deinit[local_58[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        goto LAB_00100e44;
                     }

                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     bVar4 = true;
                  }
 else if (bVar4) break;
                  uVar10 = uVar10 + 1;
               }
 while ( uVar10 != uVar14 );
            }

         }

         *in_R8 = '\x01';
         *puVar12 = 0;
         *(undefined1(*) [16])( puVar12 + 2 ) = (undefined1[16])0x0;
         goto LAB_00100e44;
      }

      LAB_00100f08:uVar9 = 0x9a;
      pcVar8 = "Condition \"p_ofs + 4 > (uint32_t)data.size()\" is true. Returning: Variant()";
   }

   _err_print_error("_key_at_ofs", "core/io/packed_data_container.cpp", uVar9, pcVar8, 0, 0);
   *puVar12 = 0;
   *(undefined1(*) [16])( puVar12 + 2 ) = (undefined1[16])0x0;
   LAB_00100e44:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar12;
}
/* WARNING: Removing unreachable block (ram,0x001011e0) *//* WARNING: Removing unreachable block (ram,0x00101203) *//* PackedDataContainer::getvar(Variant const&, bool*) const */Variant *PackedDataContainer::getvar(Variant *param_1, bool *param_2) {
   undefined1 *in_RCX;
   long in_FS_OFFSET;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   _key_at_ofs((uint)local_48, (Variant*)param_2, (bool*)0x0);
   if (in_RCX != (undefined1*)0x0) {
      *in_RCX = 1;
   }

   *(undefined4*)param_1 = local_48[0];
   *(undefined8*)( param_1 + 8 ) = local_40;
   *(undefined8*)( param_1 + 0x10 ) = uStack_38;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* PackedDataContainerRef::getvar(Variant const&, bool*) const */Variant *PackedDataContainerRef::getvar(Variant *param_1, bool *param_2) {
   long lVar1;
   undefined1 *in_RCX;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   PackedDataContainer::_key_at_ofs((uint)param_1, *(Variant**)( param_2 + 0x180 ), (bool*)( ulong ) * (uint*)( param_2 + 0x17c ));
   if (in_RCX != (undefined1*)0x0) {
      *in_RCX = 1;
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PackedDataContainerRef::_bind_methods() */void PackedDataContainerRef::_bind_methods(void) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   MethodBind *pMVar4;
   long *plVar5;
   long lVar6;
   long in_FS_OFFSET;
   long local_90;
   char *local_88;
   undefined8 local_80;
   long local_78[2];
   long *local_68;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   D_METHODP((char*)local_78, (char***)&_LC46, 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar4 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar4);
   *(undefined***)pMVar4 = &PTR__gen_argument_type_0010d518;
   *(code**)( pMVar4 + 0x58 ) = size;
   *(undefined8*)( pMVar4 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar4, 0));
   MethodBind::_set_const(SUB81(pMVar4, 0));
   MethodBind::_generate_argument_types((int)pMVar4);
   *(undefined4*)( pMVar4 + 0x34 ) = 0;
   local_90 = 0;
   local_88 = "PackedDataContainerRef";
   local_80 = 0x16;
   String::parse_latin1((StrRange*)&local_90);
   StringName::StringName((StringName*)&local_88, (String*)&local_90, false);
   StringName::operator =((StringName*)( pMVar4 + 0x18 ), (StringName*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)local_78, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_68;
   if (local_68 != (long*)0x0) {
      LOCK();
      plVar5 = local_68 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_68 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_68[-1];
         local_68 = (long*)0x0;
         if (lVar2 != 0) {
            lVar6 = 0;
            plVar5 = plVar1;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar5 != 0 )) {
                  StringName::unref();
               }

               lVar6 = lVar6 + 1;
               plVar5 = plVar5 + 1;
            }
 while ( lVar2 != lVar6 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_78[0] != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)local_78, (char***)"_iter_init", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar4 = create_method_bind<PackedDataContainerRef,Variant,Array_const&>(_iter_init);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)local_78, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_68;
   if (local_68 != (long*)0x0) {
      LOCK();
      plVar5 = local_68 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_68 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_68[-1];
         local_68 = (long*)0x0;
         if (lVar2 != 0) {
            lVar6 = 0;
            plVar5 = plVar1;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar5 != 0 )) {
                  StringName::unref();
               }

               lVar6 = lVar6 + 1;
               plVar5 = plVar5 + 1;
            }
 while ( lVar2 != lVar6 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_78[0] != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)local_78, (char***)"_iter_get", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar4 = create_method_bind<PackedDataContainerRef,Variant,Variant_const&>(_iter_get);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)local_78, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_68;
   if (local_68 != (long*)0x0) {
      LOCK();
      plVar5 = local_68 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_68 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_68[-1];
         local_68 = (long*)0x0;
         if (lVar2 != 0) {
            lVar6 = 0;
            plVar5 = plVar1;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar5 != 0 )) {
                  StringName::unref();
               }

               lVar6 = lVar6 + 1;
               plVar5 = plVar5 + 1;
            }
 while ( lVar2 != lVar6 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_78[0] != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)local_78, (char***)"_iter_next", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar4 = create_method_bind<PackedDataContainerRef,Variant,Array_const&>(_iter_next);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)local_78, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_68;
   if (local_68 != (long*)0x0) {
      LOCK();
      plVar5 = local_68 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_68 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_68[-1];
         local_68 = (long*)0x0;
         if (lVar2 != 0) {
            lVar6 = 0;
            plVar5 = plVar1;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar5 != 0 )) {
                  StringName::unref();
               }

               lVar6 = lVar6 + 1;
               plVar5 = plVar5 + 1;
            }
 while ( lVar2 != lVar6 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_78[0] != 0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */void CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this, long param_1) {
   CowData<unsigned_char> *pCVar1;
   long *plVar2;
   long lVar3;
   int iVar4;
   ulong uVar5;
   CowData<unsigned_char> *pCVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   CowData<unsigned_char> *pCVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      LAB_00101956:lVar10 = 0;
      pCVar6 = (CowData<unsigned_char>*)0x0;
   }
 else {
      lVar10 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar10) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar2 = (long*)( lVar3 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      if (lVar10 == 0) goto LAB_00101956;
      uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar6 = (CowData<unsigned_char>*)( ( uVar5 | uVar5 >> 0x20 ) + 1 );
   }

   uVar5 = param_1 - 1U | param_1 - 1U >> 1;
   uVar5 = uVar5 | uVar5 >> 2;
   uVar5 = uVar5 | uVar5 >> 4;
   uVar5 = uVar5 | uVar5 >> 8;
   uVar5 = uVar5 | uVar5 >> 0x10;
   pCVar9 = (CowData<unsigned_char>*)( uVar5 | uVar5 >> 0x20 );
   pCVar1 = pCVar9 + 1;
   if (param_1 <= lVar10) {
      if (( pCVar1 != pCVar6 ) && ( iVar4 = iVar4 != 0 )) {
         return;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return;
      }

      FUN_001050dc();
      return;
   }

   if (pCVar1 != pCVar6) {
      if (lVar10 == 0) {
         puVar7 = (undefined8*)Memory::alloc_static(( ulong )(pCVar9 + 0x11), false);
         if (puVar7 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            return;
         }

         puVar8 = puVar7 + 2;
         *puVar7 = 1;
         puVar7[1] = 0;
         *(undefined8**)this = puVar8;
         goto LAB_001018ac;
      }

      pCVar9 = this;
      iVar4 = _realloc(this, (long)pCVar1);
      if (iVar4 != 0) {
         return;
      }

   }

   puVar8 = *(undefined8**)this;
   if (puVar8 == (undefined8*)0x0) {
      resize<false>((long)pCVar9);
      return;
   }

   LAB_001018ac:puVar8[-1] = param_1;
   return;
}
/* PackedDataContainer::_pack(Variant const&, Vector<unsigned char>&, HashMap<String, unsigned int,
   HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, unsigned int> > >&) */ulong PackedDataContainer::_pack(PackedDataContainer *this, Variant *param_1, Vector *param_2, HashMap *param_3) {
   CowData<unsigned_char> *pCVar1;
   undefined1 *puVar2;
   undefined1(*pauVar3)[16];
   undefined8 uVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   code *pcVar13;
   char cVar14;
   uint uVar15;
   undefined4 uVar16;
   uint uVar17;
   uint uVar18;
   ulong uVar19;
   undefined1 *puVar20;
   undefined1(*pauVar21)[16];
   Variant *pVVar22;
   undefined4 *puVar23;
   uint *puVar24;
   long lVar25;
   int iVar26;
   long lVar27;
   ulong uVar28;
   long lVar29;
   uint uVar30;
   long in_FS_OFFSET;
   List<PackedDataContainer::DictKey,DefaultAllocator> *local_c0;
   ulong local_b8;
   Variant local_80[8];
   long *local_78;
   undefined1(*local_70)[16];
   int local_68[2];
   int local_60[8];
   long local_40;
   uVar17 = *(uint*)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (uVar17 < 0x19) {
      uVar19 = 1L << ( (byte)uVar17 & 0x3f );
      if (( uVar19 & 0x67caaf ) == 0) {
         if (( uVar19 & 0x1800000 ) != 0) {
            local_68[0] = 0;
            local_68[1] = 0;
            for (int i = 0; i < 4; i++) {
               local_60[i] = 0;
            }

            uVar17 = _pack(this, (Variant*)local_68, param_2, param_3);
            local_b8 = (ulong)uVar17;
            if (Variant::needs_deinit[local_68[0]] != '\0') {
               Variant::_clear_internal();
            }

            goto LAB_00101e35;
         }

         if (uVar17 != 4) goto LAB_00101e68;
         Variant::operator_cast_to_String((Variant*)&local_70);
         if (( *(long*)( param_3 + 8 ) != 0 ) && ( *(int*)( param_3 + 0x2c ) != 0 )) {
            uVar17 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_3 + 0x28 ) * 4 );
            lVar25 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_3 + 0x28 ) * 8 );
            uVar15 = String::hash();
            uVar19 = CONCAT44(0, uVar17);
            lVar29 = *(long*)( param_3 + 0x10 );
            uVar18 = 1;
            if (uVar15 != 0) {
               uVar18 = uVar15;
            }

            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar18 * lVar25;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar19;
            lVar27 = SUB168(auVar5 * auVar9, 8);
            uVar15 = *(uint*)( lVar29 + lVar27 * 4 );
            iVar26 = SUB164(auVar5 * auVar9, 8);
            if (uVar15 != 0) {
               uVar30 = 0;
               do {
                  if (uVar18 == uVar15) {
                     cVar14 = String::operator ==((String*)( *(long*)( *(long*)( param_3 + 8 ) + lVar27 * 8 ) + 0x10 ), (String*)&local_70);
                     if (cVar14 != '\0') {
                        puVar24 = (uint*)HashMap<String,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,unsigned_int>>>::operator []((HashMap<String,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,unsigned_int>>>*)param_3, (String*)&local_70);
                        pauVar21 = local_70;
                        local_b8 = ( ulong ) * puVar24;
                        if (local_70 != (undefined1(*) [16])0x0) {
                           LOCK();
                           pauVar3 = local_70 + -1;
                           *(long*)*pauVar3 = *(long*)*pauVar3 + -1;
                           UNLOCK();
                           if (*(long*)*pauVar3 == 0) {
                              local_70 = (undefined1(*) [16])0x0;
                              Memory::free_static(pauVar21 + -1, false);
                           }

                        }

                        goto LAB_00101e35;
                     }

                     lVar29 = *(long*)( param_3 + 0x10 );
                  }

                  uVar30 = uVar30 + 1;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = ( ulong )(iVar26 + 1) * lVar25;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = uVar19;
                  lVar27 = SUB168(auVar6 * auVar10, 8);
                  uVar15 = *(uint*)( lVar29 + lVar27 * 4 );
                  iVar26 = SUB164(auVar6 * auVar10, 8);
               }
 while ( ( uVar15 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar15 * lVar25,auVar11._8_8_ = 0,auVar11._0_8_ = uVar19,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar17 + iVar26 ) - SUB164(auVar7 * auVar11, 8)) * lVar25,auVar12._8_8_ = 0,auVar12._0_8_ = uVar19,uVar30 <= SUB164(auVar8 * auVar12, 8) );
            }

         }

         local_c0 = (List<PackedDataContainer::DictKey,DefaultAllocator>*)&local_70;
         if (*(long*)( param_2 + 8 ) == 0) {
            uVar16 = 0;
         }
 else {
            uVar16 = *(undefined4*)( *(long*)( param_2 + 8 ) + -8 );
         }

         puVar23 = (undefined4*)HashMap<String,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,unsigned_int>>>::operator []((HashMap<String,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,unsigned_int>>>*)param_3, (String*)local_c0);
         pauVar21 = local_70;
         *puVar23 = uVar16;
         if (local_70 != (undefined1(*) [16])0x0) {
            LOCK();
            pauVar3 = local_70 + -1;
            *(long*)*pauVar3 = *(long*)*pauVar3 + -1;
            UNLOCK();
            if (*(long*)*pauVar3 == 0) {
               local_70 = (undefined1(*) [16])0x0;
               Memory::free_static(pauVar21 + -1, false);
            }

         }

      }

      LAB_00101daa:local_c0 = (List<PackedDataContainer::DictKey,DefaultAllocator>*)&local_70;
      if (*(long*)( param_2 + 8 ) == 0) {
         local_b8._0_4_ = 0;
         uVar19 = 0;
      }
 else {
         uVar19 = *(ulong*)( *(long*)( param_2 + 8 ) + -8 );
         local_b8._0_4_ = (uint)uVar19;
         uVar19 = uVar19 & 0xffffffff;
      }

      local_b8 = (ulong)(uint)local_b8;
      encode_variant(param_1, (uchar*)0x0, (int*)local_c0, false, 0);
      if (*(long*)( param_2 + 8 ) == 0) {
         lVar25 = 0;
      }
 else {
         lVar25 = *(long*)( *(long*)( param_2 + 8 ) + -8 );
      }

      CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( param_2 + 8 ), (int)local_70 + lVar25);
      if (*(long*)( param_2 + 8 ) == 0) {
         lVar25 = 0;
         LAB_00102229:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, uVar19, lVar25, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar13 = (code*)invalidInstructionException();
         ( *pcVar13 )();
      }

      lVar25 = *(long*)( *(long*)( param_2 + 8 ) + -8 );
      if (lVar25 <= (long)uVar19) goto LAB_00102229;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( param_2 + 8 ));
      encode_variant(param_1, (uchar*)( *(long*)( param_2 + 8 ) + uVar19 ), (int*)local_c0, false, 0);
      goto LAB_00101e35;
   }

   if (uVar17 == 0x1c) {
      Variant::operator_cast_to_Array((Variant*)&local_70);
      if (*(long*)( param_2 + 8 ) == 0) {
         local_b8._0_4_ = 0;
         uVar19 = 0;
         uVar17 = (uint)local_b8;
      }
 else {
         uVar28 = *(ulong*)( *(long*)( param_2 + 8 ) + -8 );
         uVar19 = uVar28 & 0xffffffff;
         uVar17 = (uint)uVar28;
      }

      local_b8 = (ulong)uVar17;
      uVar18 = Array::size();
      if (*(long*)( param_2 + 8 ) == 0) {
         lVar25 = 0;
      }
 else {
         lVar25 = *(long*)( *(long*)( param_2 + 8 ) + -8 );
      }

      pCVar1 = (CowData<unsigned_char>*)( param_2 + 8 );
      CowData<unsigned_char>::resize<false>(pCVar1, lVar25 + 8 + (long)(int)( uVar18 << 2 ));
      if (*(long*)( param_2 + 8 ) != 0) {
         lVar25 = *(long*)( *(long*)( param_2 + 8 ) + -8 );
         if (lVar25 <= (long)uVar19) goto LAB_00102229;
         CowData<unsigned_char>::_copy_on_write(pCVar1);
         uVar15 = 0xfffffffe;
         puVar20 = (undefined1*)( *(long*)( param_2 + 8 ) + uVar19 );
         puVar2 = puVar20 + 4;
         do {
            *puVar20 = (char)uVar15;
            puVar20 = puVar20 + 1;
            uVar15 = uVar15 >> 8;
         }
 while ( puVar2 != puVar20 );
         uVar19 = ( ulong )(uVar17 + 4);
         if (*(long*)( param_2 + 8 ) != 0) {
            lVar25 = *(long*)( *(long*)( param_2 + 8 ) + -8 );
            if ((long)uVar19 < lVar25) {
               CowData<unsigned_char>::_copy_on_write(pCVar1);
               puVar20 = (undefined1*)( *(long*)( param_2 + 8 ) + uVar19 );
               puVar2 = puVar20 + 4;
               uVar15 = uVar18;
               do {
                  *puVar20 = (char)uVar15;
                  puVar20 = puVar20 + 1;
                  uVar15 = uVar15 >> 8;
               }
 while ( puVar2 != puVar20 );
               uVar15 = 0;
               uVar17 = uVar17 + 8;
               if (0 < (int)uVar18) {
                  do {
                     uVar19 = (ulong)uVar17;
                     pVVar22 = (Variant*)Array::operator []((int)(Variant*)&local_70);
                     uVar30 = _pack(this, pVVar22, param_2, param_3);
                     uVar28 = (ulong)uVar30;
                     if (*(long*)( param_2 + 8 ) == 0) goto LAB_0010220b;
                     lVar25 = *(long*)( *(long*)( param_2 + 8 ) + -8 );
                     if (lVar25 <= (long)uVar19) goto LAB_00102229;
                     CowData<unsigned_char>::_copy_on_write(pCVar1);
                     puVar20 = (undefined1*)( *(long*)( param_2 + 8 ) + uVar19 );
                     puVar2 = puVar20 + 4;
                     do {
                        *puVar20 = (char)uVar28;
                        puVar20 = puVar20 + 1;
                        uVar28 = uVar28 >> 8;
                     }
 while ( puVar20 != puVar2 );
                     uVar15 = uVar15 + 1;
                     uVar17 = uVar17 + 4;
                  }
 while ( uVar18 != uVar15 );
               }

               Array::~Array((Array*)&local_70);
               goto LAB_00101e35;
            }

            goto LAB_00102229;
         }

      }

      lVar25 = 0;
      goto LAB_00102229;
   }

   if (0x1c < uVar17) {
      local_b8 = 0;
      if (9 < uVar17 - 0x1d) goto LAB_00101e35;
      goto LAB_00101daa;
   }

   if (uVar17 != 0x1b) {
      LAB_00101e68:local_b8 = 0;
      goto LAB_00101e35;
   }

   Variant::operator_cast_to_Dictionary(local_80);
   if (*(long*)( param_2 + 8 ) == 0) {
      local_b8 = 0;
      uVar19 = 0;
   }
 else {
      uVar19 = *(ulong*)( *(long*)( param_2 + 8 ) + -8 );
      local_b8 = uVar19 & 0xffffffff;
      uVar19 = uVar19 & 0xffffffff;
   }

   uVar17 = Dictionary::size();
   uVar28 = (ulong)uVar17;
   if (*(long*)( param_2 + 8 ) == 0) {
      lVar25 = 0;
   }
 else {
      lVar25 = *(long*)( *(long*)( param_2 + 8 ) + -8 );
   }

   pCVar1 = (CowData<unsigned_char>*)( param_2 + 8 );
   CowData<unsigned_char>::resize<false>(pCVar1, lVar25 + 8 + (long)(int)( uVar17 * 0xc ));
   if (*(long*)( param_2 + 8 ) == 0) {
      lVar25 = 0;
      goto LAB_00102229;
   }

   lVar25 = *(long*)( *(long*)( param_2 + 8 ) + -8 );
   if (lVar25 <= (long)uVar19) goto LAB_00102229;
   CowData<unsigned_char>::_copy_on_write(pCVar1);
   uVar17 = 0xffffffff;
   puVar20 = (undefined1*)( *(long*)( param_2 + 8 ) + uVar19 );
   puVar2 = puVar20 + 4;
   do {
      *puVar20 = (char)uVar17;
      puVar20 = puVar20 + 1;
      uVar17 = uVar17 >> 8;
   }
 while ( puVar20 != puVar2 );
   uVar19 = ( ulong )((uint)local_b8 + 4);
   if (*(long*)( param_2 + 8 ) == 0) {
      lVar25 = 0;
      goto LAB_00102229;
   }

   lVar25 = *(long*)( *(long*)( param_2 + 8 ) + -8 );
   if (lVar25 <= (long)uVar19) goto LAB_00102229;
   CowData<unsigned_char>::_copy_on_write(pCVar1);
   puVar20 = (undefined1*)( *(long*)( param_2 + 8 ) + uVar19 );
   puVar2 = puVar20 + 4;
   do {
      *puVar20 = (char)uVar28;
      puVar20 = puVar20 + 1;
      uVar28 = uVar28 >> 8;
   }
 while ( puVar20 != puVar2 );
   local_78 = (long*)0x0;
   Dictionary::get_key_list((List*)local_80);
   local_70 = (undefined1(*) [16])0x0;
   if (local_78 == (long*)0x0) {
      LAB_00102404:List<PackedDataContainer::DictKey,DefaultAllocator>::sort_custom<Comparator<PackedDataContainer::DictKey>>((List<PackedDataContainer::DictKey,DefaultAllocator>*)&local_70);
   }
 else {
      pVVar22 = (Variant*)*local_78;
      pauVar21 = (undefined1(*) [16])0x0;
      if (pVVar22 == (Variant*)0x0) goto LAB_00102404;
      do {
         for (int i = 0; i < 6; i++) {
            local_60[i] = 0;
         }

         uVar16 = Variant::hash();
         local_68[0] = uVar16;
         Variant::operator =((Variant*)local_60, pVVar22);
         if (pauVar21 == (undefined1(*) [16])0x0) {
            pauVar21 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined4*)pauVar21[1] = 0;
            *pauVar21 = (undefined1[16])0x0;
            local_70 = pauVar21;
         }

         puVar23 = (undefined4*)operator_new(0x38, DefaultAllocator::alloc);
         puVar23[2] = 0;
         *(undefined8*)( puVar23 + 0xc ) = 0;
         *(undefined1(*) [16])( puVar23 + 4 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( puVar23 + 8 ) = (undefined1[16])0x0;
         *puVar23 = local_68[0];
         Variant::operator =((Variant*)( puVar23 + 2 ), (Variant*)local_60);
         uVar4 = *(undefined8*)( *pauVar21 + 8 );
         *(undefined1(**) [16])( puVar23 + 0xc ) = pauVar21;
         *(undefined8*)( puVar23 + 8 ) = 0;
         *(undefined8*)( puVar23 + 10 ) = uVar4;
         if (*(long*)( *pauVar21 + 8 ) != 0) {
            *(undefined4**)( *(long*)( *pauVar21 + 8 ) + 0x20 ) = puVar23;
         }

         lVar25 = *(long*)*pauVar21;
         *(undefined4**)( *pauVar21 + 8 ) = puVar23;
         if (lVar25 == 0) {
            *(undefined4**)*pauVar21 = puVar23;
         }

         *(int*)pauVar21[1] = *(int*)pauVar21[1] + 1;
         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         pVVar22 = *(Variant**)( pVVar22 + 0x18 );
      }
 while ( pVVar22 != (Variant*)0x0 );
      List<PackedDataContainer::DictKey,DefaultAllocator>::sort_custom<Comparator<PackedDataContainer::DictKey>>((List<PackedDataContainer::DictKey,DefaultAllocator>*)&local_70);
      puVar24 = *(uint**)*pauVar21;
      if (puVar24 != (uint*)0x0) {
         uVar17 = (uint)local_b8 + 8;
         do {
            uVar19 = (ulong)uVar17;
            if (*(long*)( param_2 + 8 ) == 0) goto LAB_0010220b;
            lVar25 = *(long*)( *(long*)( param_2 + 8 ) + -8 );
            if (lVar25 <= (long)uVar19) goto LAB_00102229;
            CowData<unsigned_char>::_copy_on_write(pCVar1);
            uVar18 = *puVar24;
            puVar20 = (undefined1*)( *(long*)( param_2 + 8 ) + uVar19 );
            puVar2 = puVar20 + 4;
            do {
               *puVar20 = (char)uVar18;
               puVar20 = puVar20 + 1;
               uVar18 = uVar18 >> 8;
            }
 while ( puVar20 != puVar2 );
            uVar18 = _pack(this, (Variant*)( puVar24 + 2 ), param_2, param_3);
            uVar19 = ( ulong )(uVar17 + 4);
            if (*(long*)( param_2 + 8 ) == 0) goto LAB_0010220b;
            lVar25 = *(long*)( *(long*)( param_2 + 8 ) + -8 );
            if (lVar25 <= (long)uVar19) goto LAB_00102229;
            CowData<unsigned_char>::_copy_on_write(pCVar1);
            puVar20 = (undefined1*)( uVar19 + *(long*)( param_2 + 8 ) );
            puVar2 = puVar20 + 4;
            do {
               *puVar20 = (char)uVar18;
               puVar20 = puVar20 + 1;
               uVar18 = uVar18 >> 8;
            }
 while ( puVar20 != puVar2 );
            uVar19 = ( ulong )(uVar17 + 8);
            pVVar22 = (Variant*)Dictionary::operator [](local_80);
            uVar18 = _pack(this, pVVar22, param_2, param_3);
            if (*(long*)( param_2 + 8 ) == 0) goto LAB_0010220b;
            lVar25 = *(long*)( *(long*)( param_2 + 8 ) + -8 );
            if (lVar25 <= (long)uVar19) goto LAB_00102229;
            CowData<unsigned_char>::_copy_on_write(pCVar1);
            puVar20 = (undefined1*)( *(long*)( param_2 + 8 ) + uVar19 );
            puVar2 = puVar20 + 4;
            do {
               *puVar20 = (char)uVar18;
               puVar20 = puVar20 + 1;
               uVar18 = uVar18 >> 8;
            }
 while ( puVar20 != puVar2 );
            puVar24 = *(uint**)( puVar24 + 8 );
            uVar17 = uVar17 + 0xc;
         }
 while ( puVar24 != (uint*)0x0 );
      }

   }

   local_c0 = (List<PackedDataContainer::DictKey,DefaultAllocator>*)&local_70;
   List<PackedDataContainer::DictKey,DefaultAllocator>::~List(local_c0);
   List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator>*)&local_78);
   Dictionary::~Dictionary((Dictionary*)local_80);
   LAB_00101e35:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_b8;
   LAB_0010220b:lVar25 = 0;
   goto LAB_00102229;
}
/* PackedDataContainer::pack(Variant const&) */undefined8 PackedDataContainer::pack(PackedDataContainer *this, Variant *param_1) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   undefined4 uVar4;
   undefined8 uVar5;
   size_t __n;
   long lVar6;
   void *pvVar7;
   long in_FS_OFFSET;
   Vector aVStack_78[8];
   void *local_70;
   HashMap local_68[8];
   undefined1 local_60[16];
   undefined1 local_50[16];
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (1 < *(int*)param_1 - 0x1bU) {
      _err_print_error(&_LC60, "core/io/packed_data_container.cpp", 0x143, "Condition \"p_data.get_type() != Variant::ARRAY && p_data.get_type() != Variant::DICTIONARY\" is true. Returning: ERR_INVALID_DATA", "PackedDataContainer can pack only Array and Dictionary type.", 0, 0);
      uVar5 = 0x1e;
      goto LAB_00102596;
   }

   local_70 = (void*)0x0;
   local_40 = 2;
   local_60 = (undefined1[16])0x0;
   local_50 = (undefined1[16])0x0;
   _pack(this, param_1, aVStack_78, local_68);
   if (local_70 == (void*)0x0) {
      uVar4 = 0;
      lVar6 = 0;
   }
 else {
      lVar6 = *(long*)( (long)local_70 + -8 );
      uVar4 = (undefined4)lVar6;
   }

   *(undefined4*)( this + 0x250 ) = uVar4;
   CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( this + 0x248 ), lVar6);
   CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( this + 0x248 ));
   if (local_70 == (void*)0x0) {
      __n = 0;
   }
 else {
      __n = *(size_t*)( (long)local_70 + -8 );
   }

   memcpy(*(void**)( this + 0x248 ), local_70, __n);
   if ((void*)local_60._0_8_ != (void*)0x0) {
      pvVar7 = (void*)local_60._0_8_;
      if (local_40._4_4_ != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( local_40 & 0xffffffff ) * 4 );
         if (uVar2 == 0) {
            local_40 = local_40 & 0xffffffff;
            local_50 = (undefined1[16])0x0;
         }
 else {
            lVar6 = 0;
            do {
               if (*(int*)( local_60._8_8_ + lVar6 ) != 0) {
                  pvVar7 = *(void**)( (long)pvVar7 + lVar6 * 2 );
                  *(int*)( local_60._8_8_ + lVar6 ) = 0;
                  if (*(long*)( (long)pvVar7 + 0x10 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar7 + 0x10 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar7 + 0x10 );
                        *(undefined8*)( (long)pvVar7 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar7, false);
                  *(undefined8*)( local_60._0_8_ + lVar6 * 2 ) = 0;
                  pvVar7 = (void*)local_60._0_8_;
               }

               lVar6 = lVar6 + 4;
            }
 while ( lVar6 != (ulong)uVar2 << 2 );
            local_40 = local_40 & 0xffffffff;
            local_50 = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_00102582;
         }

      }

      Memory::free_static(pvVar7, false);
      Memory::free_static((void*)local_60._8_8_, false);
   }

   LAB_00102582:pvVar7 = local_70;
   if (local_70 != (void*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = (void*)0x0;
         Memory::free_static((void*)( (long)pvVar7 + -0x10 ), false);
      }

   }

   uVar5 = 0;
   LAB_00102596:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PackedDataContainer::_bind_methods() */void PackedDataContainer::_bind_methods(void) {
   long *plVar1;
   ulong *puVar2;
   long lVar3;
   ulong uVar4;
   code *pcVar5;
   ulong *puVar6;
   MethodBind *pMVar7;
   ulong *puVar8;
   undefined8 *puVar9;
   long *plVar10;
   ulong uVar11;
   long lVar12;
   size_t __n;
   long in_FS_OFFSET;
   long local_d8;
   long local_d0;
   long local_c8;
   long local_c0;
   long local_b8;
   long local_b0;
   char *local_a8;
   ulong *local_a0;
   char *local_98;
   long local_90;
   long *local_88;
   int local_80;
   long local_78;
   undefined4 local_70;
   char *local_68;
   undefined8 local_60;
   char **local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = 0;
   local_68 = "data";
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"_set_data", ( uint ) & local_58);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar7 = create_method_bind<PackedDataContainer,Vector<unsigned_char>const&>(_set_data);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar10 = local_88 + -2;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }

         lVar3 = local_88[-1];
         lVar12 = 0;
         local_88 = (long*)0x0;
         plVar10 = plVar1;
         if (lVar3 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar10 != 0 )) {
                  StringName::unref();
               }

               lVar12 = lVar12 + 1;
               plVar10 = plVar10 + 1;
            }
 while ( lVar3 != lVar12 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"_get_data", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar7 = create_method_bind<PackedDataContainer,Vector<unsigned_char>>(_get_data);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar10 = local_88 + -2;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }

         lVar3 = local_88[-1];
         lVar12 = 0;
         local_88 = (long*)0x0;
         plVar10 = plVar1;
         if (lVar3 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar10 != 0 )) {
                  StringName::unref();
               }

               lVar12 = lVar12 + 1;
               plVar10 = plVar10 + 1;
            }
 while ( lVar3 != lVar12 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"_iter_init", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar7 = create_method_bind<PackedDataContainer,Variant,Array_const&>(_iter_init);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar10 = local_88 + -2;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }

         lVar3 = local_88[-1];
         lVar12 = 0;
         local_88 = (long*)0x0;
         plVar10 = plVar1;
         if (lVar3 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar10 != 0 )) {
                  StringName::unref();
               }

               lVar12 = lVar12 + 1;
               plVar10 = plVar10 + 1;
            }
 while ( lVar3 != lVar12 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"_iter_get", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar7 = create_method_bind<PackedDataContainer,Variant,Variant_const&>(_iter_get);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar10 = local_88 + -2;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }

         lVar3 = local_88[-1];
         lVar12 = 0;
         local_88 = (long*)0x0;
         plVar10 = plVar1;
         if (lVar3 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar10 != 0 )) {
                  StringName::unref();
               }

               lVar12 = lVar12 + 1;
               plVar10 = plVar10 + 1;
            }
 while ( lVar3 != lVar12 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"_iter_next", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar7 = create_method_bind<PackedDataContainer,Variant,Array_const&>(_iter_next);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar10 = local_88 + -2;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }

         lVar3 = local_88[-1];
         lVar12 = 0;
         local_88 = (long*)0x0;
         plVar10 = plVar1;
         if (lVar3 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar10 != 0 )) {
                  StringName::unref();
               }

               lVar12 = lVar12 + 1;
               plVar10 = plVar10 + 1;
            }
 while ( lVar3 != lVar12 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   local_68 = "value";
   local_60 = 0;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)&_LC60, ( uint ) & local_58);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar7 = create_method_bind<PackedDataContainer,Error,Variant_const&>(pack);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar10 = local_88 + -2;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }

         lVar3 = local_88[-1];
         lVar12 = 0;
         local_88 = (long*)0x0;
         plVar10 = plVar1;
         if (lVar3 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar10 != 0 )) {
                  StringName::unref();
               }

               lVar12 = lVar12 + 1;
               plVar10 = plVar10 + 1;
            }
 while ( lVar3 != lVar12 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)&_LC46, 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar7 = create_method_bind<PackedDataContainer,int>(size);
   ClassDB::bind_methodfi(1, pMVar7, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar10 = local_88 + -2;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }

         lVar3 = local_88[-1];
         lVar12 = 0;
         local_88 = (long*)0x0;
         plVar10 = plVar1;
         if (lVar3 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar10 != 0 )) {
                  StringName::unref();
               }

               lVar12 = lVar12 + 1;
               plVar10 = plVar10 + 1;
            }
 while ( lVar3 != lVar12 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   local_a0 = (ulong*)0x0;
   puVar8 = (ulong*)Memory::alloc_static(0x14, false);
   if (puVar8 == (ulong*)0x0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   }
 else {
      local_a0 = puVar8 + 2;
      *puVar8 = 1;
      puVar8[1] = 1;
      if (1 < *puVar8) {
         if (local_a0 == (ulong*)0x0) {
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }

         uVar4 = puVar8[1];
         uVar11 = 0x10;
         __n = uVar4 * 4;
         if (__n != 0) {
            uVar11 = __n - 1 | __n - 1 >> 1;
            uVar11 = uVar11 | uVar11 >> 2;
            uVar11 = uVar11 | uVar11 >> 4;
            uVar11 = uVar11 | uVar11 >> 8;
            uVar11 = uVar11 | uVar11 >> 0x10;
            uVar11 = ( uVar11 | uVar11 >> 0x20 ) + 0x11;
         }

         puVar9 = (undefined8*)Memory::alloc_static(uVar11, false);
         puVar8 = local_a0;
         if (puVar9 == (undefined8*)0x0) {
            _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
         }
 else {
            puVar2 = puVar9 + 2;
            *puVar9 = 1;
            puVar9[1] = uVar4;
            memcpy(puVar2, local_a0, __n);
            puVar6 = local_a0;
            LOCK();
            puVar8 = puVar8 + -2;
            *puVar8 = *puVar8 - 1;
            UNLOCK();
            local_a0 = puVar2;
            if (*puVar8 == 0) {
               local_a0 = (ulong*)0x0;
               Memory::free_static(puVar6 + -2, false);
               local_a0 = puVar2;
            }

         }

      }

      *(undefined4*)local_a0 = 0x1e;
   }

   StringName::StringName((StringName*)&local_b0, "pack", false);
   local_b8 = 0;
   local_98 = "PackedDataContainer";
   local_90 = 0x13;
   String::parse_latin1((StrRange*)&local_b8);
   StringName::StringName((StringName*)&local_98, (String*)&local_b8, false);
   ClassDB::set_method_error_return_values((StringName*)&local_98, (StringName*)&local_b0, (Vector*)&local_a8);
   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar3 = local_b8;
   if (local_b8 != 0) {
      LOCK();
      plVar1 = (long*)( local_b8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b8 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
      StringName::unref();
   }

   puVar8 = local_a0;
   if (local_a0 != (ulong*)0x0) {
      LOCK();
      puVar2 = local_a0 + -2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if (*puVar2 == 0) {
         local_a0 = (ulong*)0x0;
         Memory::free_static(puVar8 + -2, false);
      }

   }

   _scs_create((char*)&local_b0, true);
   _scs_create((char*)&local_b8, true);
   local_98 = "";
   local_c0 = 0;
   local_c8 = 0;
   local_90 = 0;
   String::parse_latin1((StrRange*)&local_c8);
   local_d0 = 0;
   local_98 = "__data__";
   local_90 = 8;
   String::parse_latin1((StrRange*)&local_d0);
   local_98 = (char*)CONCAT44(local_98._4_4_, 0x1d);
   local_90 = 0;
   if (local_d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)&local_d0);
   }

   local_88 = (long*)0x0;
   local_80 = 0;
   local_78 = 0;
   if (local_c8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)&local_c8);
      local_70 = 10;
      if (local_80 == 0x11) {
         StringName::StringName((StringName*)&local_a8, (String*)&local_78, false);
         if (local_88 == (long*)local_a8) {
            if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_88 = (long*)local_a8;
         }

         goto LAB_00102fcf;
      }

   }

   local_70 = 10;
   StringName::operator =((StringName*)&local_88, (StringName*)&local_c0);
   LAB_00102fcf:local_a8 = "PackedDataContainer";
   local_d8 = 0;
   local_a0 = (ulong*)0x13;
   String::parse_latin1((StrRange*)&local_d8);
   StringName::StringName((StringName*)&local_a8, (String*)&local_d8, false);
   ClassDB::add_property((StringName*)&local_a8, (PropertyInfo*)&local_98, (StringName*)&local_b8, (StringName*)&local_b0, -1);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar3 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar1 = (long*)( local_d8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_88 != (long*)0x0 )) {
      StringName::unref();
   }

   lVar3 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_d0;
   if (local_d0 != 0) {
      LOCK();
      plVar1 = (long*)( local_d0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_d0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_c8;
   if (local_c8 != 0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c8 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( ( ( StringName::configured != '\0' ) && ( ( local_c0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_b0 != 0 )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }

   return;
}
/* Object::get_save_class() const */void Object::get_save_class(void) {
   long lVar1;
   long *in_RSI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *in_RSI + 0x48 ) )();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind::is_valid() const */undefined8 MethodBind::is_valid(void) {
   return 1;
}
/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
}
/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x10d5, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10d5, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* RefCounted::_getv(StringName const&, Variant&) const */undefined8 RefCounted::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_setv(StringName const&, Variant const&) */undefined8 RefCounted::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_validate_propertyv(PropertyInfo&) const */void RefCounted::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* RefCounted::_property_can_revertv(StringName const&) const */undefined8 RefCounted::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */undefined8 RefCounted::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_notificationv(int, bool) */void RefCounted::_notificationv(int param_1, bool param_2) {
   return;
}
/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}
/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
}
/* PackedDataContainer::is_class_ptr(void*) const */uint PackedDataContainer::is_class_ptr(PackedDataContainer *this, void *param_1) {
   return (uint)CONCAT71(0x10d5, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10d5, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10d5, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10d5, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* PackedDataContainer::_getv(StringName const&, Variant&) const */undefined8 PackedDataContainer::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* PackedDataContainer::_setv(StringName const&, Variant const&) */undefined8 PackedDataContainer::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* PackedDataContainer::_validate_propertyv(PropertyInfo&) const */void PackedDataContainer::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* PackedDataContainer::_property_can_revertv(StringName const&) const */undefined8 PackedDataContainer::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* PackedDataContainer::_property_get_revertv(StringName const&, Variant&) const */undefined8 PackedDataContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* PackedDataContainer::_notificationv(int, bool) */void PackedDataContainer::_notificationv(int param_1, bool param_2) {
   return;
}
/* PackedDataContainerRef::is_class_ptr(void*) const */uint PackedDataContainerRef::is_class_ptr(PackedDataContainerRef *this, void *param_1) {
   return (uint)CONCAT71(0x10d5, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10d5, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10d5, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* PackedDataContainerRef::_getv(StringName const&, Variant&) const */undefined8 PackedDataContainerRef::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* PackedDataContainerRef::_setv(StringName const&, Variant const&) */undefined8 PackedDataContainerRef::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* PackedDataContainerRef::_validate_propertyv(PropertyInfo&) const */void PackedDataContainerRef::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* PackedDataContainerRef::_property_can_revertv(StringName const&) const */undefined8 PackedDataContainerRef::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* PackedDataContainerRef::_property_get_revertv(StringName const&, Variant&) const */undefined8 PackedDataContainerRef::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* PackedDataContainerRef::_notificationv(int, bool) */void PackedDataContainerRef::_notificationv(int param_1, bool param_2) {
   return;
}
/* MethodBindTRC<int>::_gen_argument_type(int) const */undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<int>::get_argument_meta(int) const */uint MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}
/* MethodBindTR<Error, Variant const&>::_gen_argument_type(int) const */char MethodBindTR<Error,Variant_const&>::_gen_argument_type(MethodBindTR<Error,Variant_const&> *this, int param_1) {
   return ( param_1 != 0 ) * '\x02';
}
/* MethodBindTR<Error, Variant const&>::get_argument_meta(int) const */undefined8 MethodBindTR<Error,Variant_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<Variant, Variant const&>::_gen_argument_type(int) const */undefined8 MethodBindTR<Variant,Variant_const&>::_gen_argument_type(int param_1) {
   return 0;
}
/* MethodBindTR<Variant, Variant const&>::get_argument_meta(int) const */undefined8 MethodBindTR<Variant,Variant_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<Variant, Array const&>::_gen_argument_type(int) const */byte MethodBindTR<Variant,Array_const&>::_gen_argument_type(MethodBindTR<Variant,Array_const&> *this, int param_1) {
   return -(param_1 == 0) & 0x1c;
}
/* MethodBindTR<Variant, Array const&>::get_argument_meta(int) const */undefined8 MethodBindTR<Variant,Array_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Vector<unsigned char>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Vector<unsigned_char>>::_gen_argument_type(int param_1) {
   return 0x1d;
}
/* MethodBindTRC<Vector<unsigned char>>::get_argument_meta(int) const */undefined8 MethodBindTRC<Vector<unsigned_char>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Vector<unsigned char> const&>::_gen_argument_type(int) const */byte MethodBindT<Vector<unsigned_char>const&>::_gen_argument_type(MethodBindT<Vector<unsigned_char>const&> *this, int param_1) {
   return -(param_1 == 0) & 0x1d;
}
/* MethodBindT<Vector<unsigned char> const&>::get_argument_meta(int) const */undefined8 MethodBindT<Vector<unsigned_char>const&>::get_argument_meta(int param_1) {
   return 0;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0010cea0;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0010cea0;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* MethodBindT<Vector<unsigned char> const&>::~MethodBindT() */void MethodBindT<Vector<unsigned_char>const&>::~MethodBindT(MethodBindT<Vector<unsigned_char>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010d338;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Vector<unsigned char> const&>::~MethodBindT() */void MethodBindT<Vector<unsigned_char>const&>::~MethodBindT(MethodBindT<Vector<unsigned_char>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010d338;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Vector<unsigned char>>::~MethodBindTRC() */void MethodBindTRC<Vector<unsigned_char>>::~MethodBindTRC(MethodBindTRC<Vector<unsigned_char>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010d398;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Vector<unsigned char>>::~MethodBindTRC() */void MethodBindTRC<Vector<unsigned_char>>::~MethodBindTRC(MethodBindTRC<Vector<unsigned_char>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010d398;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Variant, Variant const&>::~MethodBindTR() */void MethodBindTR<Variant,Variant_const&>::~MethodBindTR(MethodBindTR<Variant,Variant_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010d458;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Variant, Variant const&>::~MethodBindTR() */void MethodBindTR<Variant,Variant_const&>::~MethodBindTR(MethodBindTR<Variant,Variant_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010d458;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Variant, Array const&>::~MethodBindTR() */void MethodBindTR<Variant,Array_const&>::~MethodBindTR(MethodBindTR<Variant,Array_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010d3f8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Variant, Array const&>::~MethodBindTR() */void MethodBindTR<Variant,Array_const&>::~MethodBindTR(MethodBindTR<Variant,Array_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010d3f8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Error, Variant const&>::~MethodBindTR() */void MethodBindTR<Error,Variant_const&>::~MethodBindTR(MethodBindTR<Error,Variant_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010d4b8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Error, Variant const&>::~MethodBindTR() */void MethodBindTR<Error,Variant_const&>::~MethodBindTR(MethodBindTR<Error,Variant_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010d4b8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010d518;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010d518;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* PackedDataContainerRef::~PackedDataContainerRef() */void PackedDataContainerRef::~PackedDataContainerRef(PackedDataContainerRef *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__initialize_classv_0010d1d8;
   if (*(long*)( this + 0x180 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x180 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   *(undefined***)this = &PTR__initialize_classv_0010cea0;
   Object::~Object((Object*)this);
   return;
}
/* PackedDataContainerRef::~PackedDataContainerRef() */void PackedDataContainerRef::~PackedDataContainerRef(PackedDataContainerRef *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__initialize_classv_0010d1d8;
   if (*(long*)( this + 0x180 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x180 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   *(undefined***)this = &PTR__initialize_classv_0010cea0;
   Object::~Object((Object*)this);
   operator_delete(this, 0x188);
   return;
}
/* PackedDataContainerRef::_get_class_namev() const */undefined8 *PackedDataContainerRef::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103ac3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103ac3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "PackedDataContainerRef");
         goto LAB_00103b2e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "PackedDataContainerRef");
   LAB_00103b2e:return &_get_class_namev();
}
/* RefCounted::_get_class_namev() const */undefined8 *RefCounted::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103ba3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103ba3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_00103c0e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_00103c0e:return &_get_class_namev();
}
/* PackedDataContainer::_get_class_namev() const */undefined8 *PackedDataContainer::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103c93:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103c93;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "PackedDataContainer");
         goto LAB_00103cfe;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "PackedDataContainer");
   LAB_00103cfe:return &_get_class_namev();
}
/* Resource::get_base_extension() const */Resource * __thiscall Resource::get_base_extension(Resource *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   String::parse_latin1((StrRange*)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SortArray<List<PackedDataContainer::DictKey, DefaultAllocator>::Element*,
   List<PackedDataContainer::DictKey,
   DefaultAllocator>::AuxiliaryComparator<Comparator<PackedDataContainer::DictKey> >,
   true>::introsort(long, long, List<PackedDataContainer::DictKey, DefaultAllocator>::Element**,
   long) const [clone .isra.0] */void SortArray<List<PackedDataContainer::DictKey,DefaultAllocator>::Element*,List<PackedDataContainer::DictKey,DefaultAllocator>::AuxiliaryComparator<Comparator<PackedDataContainer::DictKey>>,true>::introsort(long param_1, long param_2, Element **param_3, long param_4) {
   uint uVar1;
   Element *pEVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   Element **ppEVar6;
   uint uVar7;
   Element **ppEVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   Element *pEVar12;
   uint uVar13;
   Element *pEVar14;
   Element **ppEVar15;
   long lVar16;
   long local_58;
   lVar16 = param_2 - param_1;
   if (lVar16 < 0x11) {
      return;
   }

   if (param_4 == 0) {
      LAB_00103ffd:lVar10 = lVar16 + -2 >> 1;
      lVar11 = lVar10 * 2 + 2;
      ppEVar8 = param_3 + param_1 + lVar10;
      pEVar12 = *ppEVar8;
      lVar5 = lVar10;
      lVar9 = lVar11;
      if (lVar16 <= lVar11) goto LAB_00104105;
      LAB_00104043:do {
         pEVar2 = param_3[param_1 + lVar11];
         pEVar14 = param_3[param_1 + lVar11 + -1];
         lVar3 = lVar11 + -1;
         lVar4 = lVar11;
         ppEVar6 = param_3 + param_1 + lVar11 + -1;
         if (*(uint*)pEVar14 <= *(uint*)pEVar2) {
            lVar4 = lVar11 + 1;
            lVar3 = lVar11;
            pEVar14 = pEVar2;
            ppEVar6 = param_3 + param_1 + lVar11;
         }

         lVar11 = lVar4 * 2;
         param_3[lVar5 + param_1] = pEVar14;
         lVar5 = lVar3;
      }
 while ( lVar16 != lVar11 && SBORROW8(lVar16, lVar11) == lVar16 + lVar4 * -2 < 0 );
      ppEVar15 = ppEVar6;
      if (lVar16 == lVar11) goto LAB_0010410b;
      do {
         lVar11 = lVar9;
         lVar9 = lVar3 + -1;
         if (lVar3 <= lVar10) goto LAB_00104241;
         uVar13 = *(uint*)pEVar12;
         do {
            lVar5 = lVar9 >> 1;
            pEVar2 = param_3[param_1 + lVar5];
            if (uVar13 <= *(uint*)pEVar2) {
               param_3[lVar3 + param_1] = pEVar12;
               goto joined_r0x001040e5;
            }

            param_3[lVar3 + param_1] = pEVar2;
            lVar9 = ( lVar5 + -1 ) - ( lVar5 + -1 >> 0x3f );
            lVar3 = lVar5;
         }
 while ( lVar10 < lVar5 );
         param_3[param_1 + lVar5] = pEVar12;
         joined_r0x001040e5:if (lVar10 == 0) {
            ppEVar8 = param_3 + param_1;
            lVar16 = ( param_2 + -1 ) - param_1;
            goto LAB_00104140;
         }

         while (true) {
            ppEVar8 = ppEVar8 + -1;
            lVar11 = lVar11 + -2;
            lVar10 = lVar10 + -1;
            pEVar12 = *ppEVar8;
            lVar5 = lVar10;
            lVar9 = lVar11;
            if (lVar11 < lVar16) goto LAB_00104043;
            LAB_00104105:lVar9 = lVar11;
            ppEVar15 = ppEVar8;
            ppEVar6 = ppEVar8;
            if (lVar11 == lVar16) break;
            LAB_00104241:*ppEVar6 = pEVar12;
         }
;
         LAB_0010410b:lVar3 = lVar11 + -1;
         ppEVar6 = param_3 + param_1 + lVar3;
         *ppEVar15 = *ppEVar6;
      }
 while ( true );
   }

   lVar11 = param_2;
   local_58 = param_4;
   LAB_00103e51:pEVar12 = param_3[lVar11 + -1];
   local_58 = local_58 + -1;
   uVar13 = *(uint*)pEVar12;
   uVar7 = *(uint*)param_3[param_1];
   uVar1 = *(uint*)param_3[( lVar16 >> 1 ) + param_1];
   if (uVar7 < uVar1) {
      if (uVar1 < uVar13) {
         LAB_00103fd0:pEVar12 = param_3[( lVar16 >> 1 ) + param_1];
         uVar13 = uVar1;
         goto LAB_00103e8f;
      }

      if (uVar7 < uVar13) goto LAB_00103e8f;
   }
 else if (uVar13 <= uVar7) {
      if (uVar1 < uVar13) goto LAB_00103e8f;
      goto LAB_00103fd0;
   }

   pEVar12 = param_3[param_1];
   uVar13 = uVar7;
   LAB_00103e8f:lVar16 = lVar11;
   param_2 = param_1;
   do {
      if (uVar7 < uVar13) {
         if (lVar11 + -1 == param_2) {
            _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
            uVar13 = *(uint*)pEVar12;
            goto LAB_00103ecd;
         }

      }
 else {
         LAB_00103ecd:lVar9 = lVar16 + -1;
         ppEVar8 = param_3 + lVar9;
         if (uVar13 < *(uint*)*ppEVar8) {
            ppEVar6 = param_3 + lVar16 + -2;
            while (param_1 != lVar9) {
               lVar9 = lVar9 + -1;
               ppEVar8 = ppEVar6;
               if (*(uint*)*ppEVar6 <= uVar13) goto LAB_00103f2c;
               ppEVar6 = ppEVar6 + -1;
            }
;
            _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
         }

         LAB_00103f2c:if (lVar9 <= param_2) break;
         pEVar2 = param_3[param_2];
         param_3[param_2] = *ppEVar8;
         uVar13 = *(uint*)pEVar12;
         *ppEVar8 = pEVar2;
         lVar16 = lVar9;
      }

      lVar9 = param_2 + 1;
      param_2 = param_2 + 1;
      uVar7 = *(uint*)param_3[lVar9];
   }
 while ( true );
   introsort(param_2, lVar11, param_3, local_58);
   lVar16 = param_2 - param_1;
   if (lVar16 < 0x11) {
      return;
   }

   lVar11 = param_2;
   if (local_58 == 0) goto LAB_00103ffd;
   goto LAB_00103e51;
   LAB_00104140:pEVar12 = ppEVar8[lVar16];
   ppEVar8[lVar16] = *ppEVar8;
   if (lVar16 < 3) {
      if (lVar16 != 2) {
         *ppEVar8 = pEVar12;
         return;
      }

      lVar11 = param_1 + 1;
      lVar9 = 0;
      lVar16 = 1;
      *ppEVar8 = param_3[lVar11];
      LAB_001041c8:uVar13 = *(uint*)pEVar12;
      while (true) {
         ppEVar6 = param_3 + lVar11;
         pEVar2 = param_3[param_1 + lVar9];
         if (uVar13 <= *(uint*)pEVar2) break;
         *ppEVar6 = pEVar2;
         if (lVar9 == 0) {
            param_3[param_1 + lVar9] = pEVar12;
            goto LAB_00104140;
         }

         lVar11 = param_1 + lVar9;
         lVar9 = ( lVar9 + -1 ) / 2;
      }
;
   }
 else {
      lVar11 = 2;
      lVar9 = 0;
      do {
         pEVar2 = param_3[param_1 + lVar11];
         pEVar14 = param_3[param_1 + lVar11 + -1];
         lVar5 = lVar11 + -1;
         ppEVar6 = param_3 + param_1 + lVar11 + -1;
         lVar10 = lVar11;
         if (*(uint*)pEVar14 <= *(uint*)pEVar2) {
            lVar10 = lVar11 + 1;
            lVar5 = lVar11;
            ppEVar6 = param_3 + param_1 + lVar11;
            pEVar14 = pEVar2;
         }

         lVar11 = lVar10 * 2;
         param_3[lVar9 + param_1] = pEVar14;
         lVar9 = lVar5;
      }
 while ( lVar16 != lVar11 && SBORROW8(lVar16, lVar11) == lVar16 + lVar10 * -2 < 0 );
      if (lVar16 == lVar11) {
         lVar11 = param_1 + lVar16 + -1;
         lVar9 = lVar16 + -2 >> 1;
         *ppEVar6 = param_3[lVar11];
         lVar16 = lVar16 + -1;
         goto LAB_001041c8;
      }

      lVar11 = param_1 + lVar5;
      lVar16 = lVar16 + -1;
      lVar9 = ( lVar5 + -1 ) / 2;
      if (0 < lVar5) goto LAB_001041c8;
   }

   *ppEVar6 = pEVar12;
   goto LAB_00104140;
}
/* PackedDataContainer::~PackedDataContainer() */void PackedDataContainer::~PackedDataContainer(PackedDataContainer *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_0010d000;
   if (*(long*)( this + 0x248 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x248 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x248 );
         *(undefined8*)( this + 0x248 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         Resource::~Resource((Resource*)this);
         return;
      }

   }

   Resource::~Resource((Resource*)this);
   return;
}
/* PackedDataContainer::~PackedDataContainer() */void PackedDataContainer::~PackedDataContainer(PackedDataContainer *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_0010d000;
   if (*(long*)( this + 0x248 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x248 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x248 );
         *(undefined8*)( this + 0x248 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   Resource::~Resource((Resource*)this);
   operator_delete(this, 600);
   return;
}
/* PackedDataContainer::get_class() const */void PackedDataContainer::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI);
   }
 else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }

         }
 else {
            strlen(__s);
            String::parse_latin1(in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PackedDataContainerRef::get_class() const */void PackedDataContainerRef::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI);
   }
 else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }

         }
 else {
            strlen(__s);
            String::parse_latin1(in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::get_class() const */void RefCounted::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI);
   }
 else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }

         }
 else {
            strlen(__s);
            String::parse_latin1(in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
   long lVar5;
   char cVar6;
   undefined8 uVar7;
   long lVar8;
   long in_FS_OFFSET;
   bool bVar9;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_0010462f;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010462f:cVar6 = String::operator ==(param_1, (String*)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_001046e3;
   }

   cVar6 = String::operator ==(param_1, "RefCounted");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_00104793;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_00104793:cVar6 = String::operator ==(param_1, (String*)&local_60);
         lVar4 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (cVar6 != '\0') goto LAB_001046e3;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_001046e3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PackedDataContainerRef::is_class(String const&) const */undefined8 PackedDataContainerRef::is_class(PackedDataContainerRef *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   long lVar4;
   char cVar5;
   long lVar6;
   undefined8 uVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar3 = *(long*)( lVar2 + 0x20 );
      if (lVar3 == 0) {
         local_60 = 0;
      }
 else {
         __s = *(char**)( lVar3 + 8 );
         local_60 = 0;
         if (__s == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_001048bf;
                  LOCK();
                  lVar6 = *plVar1;
                  bVar8 = lVar4 == lVar6;
                  if (bVar8) {
                     *plVar1 = lVar4 + 1;
                     lVar6 = lVar4;
                  }

                  UNLOCK();
               }
 while ( !bVar8 );
               if (lVar6 != -1) {
                  local_60 = *(long*)( lVar3 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_001048bf:cVar5 = String::operator ==(param_1, (String*)&local_60);
      lVar3 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (cVar5 != '\0') goto LAB_00104973;
   }

   cVar5 = String::operator ==(param_1, "PackedDataContainerRef");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00104973:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PackedDataContainer::is_class(String const&) const */undefined8 PackedDataContainer::is_class(PackedDataContainer *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
   long lVar5;
   char cVar6;
   undefined8 uVar7;
   long lVar8;
   long in_FS_OFFSET;
   bool bVar9;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_00104a4f;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_00104a4f:cVar6 = String::operator ==(param_1, (String*)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_00104b03;
   }

   cVar6 = String::operator ==(param_1, "PackedDataContainer");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_00104bc3;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_00104bc3:cVar6 = String::operator ==(param_1, (String*)&local_60);
         lVar4 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (cVar6 != '\0') goto LAB_00104b03;
      }

      cVar6 = String::operator ==(param_1, "Resource");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar7;
         }

         goto LAB_00104c6c;
      }

   }

   LAB_00104b03:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00104c6c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<int>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC9;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 2;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x00104dbc;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00104dbc:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector<unsigned char>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Vector<unsigned_char>>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC9;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x1d;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x00104f3c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00104f3c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* PackedDataContainerRef::_bind_methods() [clone .cold] */void PackedDataContainerRef::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_001050dc(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* PackedDataContainer::_bind_methods() [clone .cold] */void PackedDataContainer::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* RefCounted::_initialize_classv() */void RefCounted::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      Object::initialize_class();
      local_48 = 0;
      local_38 = "Object";
      local_30 = 6;
      String::parse_latin1((StrRange*)&local_48);
      StringName::StringName((StringName*)&local_40, (String*)&local_48, false);
      local_38 = "RefCounted";
      local_50 = 0;
      local_30 = 10;
      String::parse_latin1((StrRange*)&local_50);
      StringName::StringName((StringName*)&local_38, (String*)&local_50, false);
      ClassDB::_add_class2((StringName*)&local_38, (StringName*)&local_40);
      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

      lVar2 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_40 != 0 )) {
         StringName::unref();
      }

      lVar2 = local_48;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
         RefCounted::_bind_methods();
      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
   undefined7 in_register_00000031;
   List *pLVar6;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   long local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   pLVar6 = (List*)CONCAT71(in_register_00000031, param_2);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = 0;
   local_90 = 0;
   local_78 = "RefCounted";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "RefCounted";
   local_98 = 0;
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_00105448:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00105448;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00105466;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x00105466:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])pLVar6 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar5 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   *(undefined8*)( puVar5 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0xc ) = (undefined1[16])0x0;
   *puVar5 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_68);
   puVar5[6] = local_60;
   if (*(long*)( puVar5 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_58);
   }

   lVar3 = local_58;
   puVar5[10] = local_50;
   plVar1 = *(long**)pLVar6;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar5 + 0xc ) = 0;
   *(long**)( puVar5 + 0x10 ) = plVar1;
   *(long*)( puVar5 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar5;
   }

   plVar1[1] = (long)puVar5;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar5;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   lVar2 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "RefCounted", false);
   ClassDB::get_property_list((StringName*)&local_78, pLVar6, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PackedDataContainerRef::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void PackedDataContainerRef::_get_property_listv(PackedDataContainerRef *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   long local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "PackedDataContainerRef";
   local_70 = 0x16;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "PackedDataContainerRef";
   local_98 = 0;
   local_70 = 0x16;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_00105848:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00105848;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00105865;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00105865:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar5 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   *(undefined8*)( puVar5 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0xc ) = (undefined1[16])0x0;
   *puVar5 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_68);
   puVar5[6] = local_60;
   if (*(long*)( puVar5 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_58);
   }

   lVar3 = local_58;
   puVar5[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar5 + 0xc ) = 0;
   *(long**)( puVar5 + 0x10 ) = plVar1;
   *(long*)( puVar5 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar5;
   }

   plVar1[1] = (long)puVar5;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar5;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   lVar2 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "PackedDataContainerRef", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Vector<unsigned char> const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Vector<unsigned_char>const&>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined8 uVar6;
   long lVar7;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar8;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60;
   undefined *local_58;
   undefined1 local_50[16];
   int local_40;
   long local_38;
   undefined4 local_30;
   long local_20;
   puVar8 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar8 = 0;
   puVar8[6] = 0;
   *(undefined8*)( puVar8 + 8 ) = 0;
   puVar8[10] = 6;
   *(undefined1(*) [16])( puVar8 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00105b67;
   local_68 = 0;
   local_58 = &_LC9;
   local_70 = 0;
   auVar3._8_8_ = 0;
   auVar3._0_8_ = local_50._8_8_;
   local_50 = auVar3 << 0x40;
   String::parse_latin1((StrRange*)&local_70);
   local_58 = (undefined*)CONCAT44(local_58._4_4_, 0x1d);
   local_40 = 0;
   local_38 = 0;
   local_50 = (undefined1[16])0x0;
   if (local_70 == 0) {
      LAB_00105c58:local_30 = 6;
      StringName::operator =((StringName*)( local_50 + 8 ), (StringName*)&local_68);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_38, (CowData*)&local_70);
      local_30 = 6;
      if (local_40 != 0x11) goto LAB_00105c58;
      StringName::StringName((StringName*)&local_60, (String*)&local_38, false);
      if (local_50._8_8_ == local_60) {
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_50._8_8_ = local_60;
      }

   }

   lVar2 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   *puVar8 = local_58._0_4_;
   lVar2 = *(long*)( puVar8 + 2 );
   if (lVar2 != local_50._0_8_) {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( puVar8 + 2 );
            *(undefined8*)( puVar8 + 2 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined8*)( puVar8 + 2 ) = local_50._0_8_;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_50._8_8_;
      local_50 = auVar5 << 0x40;
   }

   if (*(long*)( puVar8 + 4 ) != local_50._8_8_) {
      StringName::unref();
      uVar6 = local_50._8_8_;
      local_50._8_8_ = 0;
      *(undefined8*)( puVar8 + 4 ) = uVar6;
   }

   lVar7 = local_38;
   puVar8[6] = local_40;
   lVar2 = *(long*)( puVar8 + 8 );
   if (lVar2 == local_38) {
      puVar8[10] = local_30;
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_38 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

   }
 else {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( puVar8 + 8 );
            *(undefined8*)( puVar8 + 8 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(long*)( puVar8 + 8 ) = local_38;
      puVar8[10] = local_30;
   }

   if (( StringName::configured != '\0' ) && ( local_50._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar6 = local_50._0_8_;
   if (local_50._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_50._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_50._8_8_;
         local_50 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar6 + -0x10 ), false);
      }

   }

   LAB_00105b67:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar8;
}
/* MethodBindTR<Variant, Array const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Variant,Array_const&>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   long lVar6;
   undefined8 uVar7;
   long lVar8;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar9;
   long in_FS_OFFSET;
   long local_a0;
   long local_98;
   long local_90;
   undefined8 local_88;
   undefined1 local_80[16];
   undefined8 local_70;
   long local_68;
   undefined4 local_60;
   undefined *local_58;
   undefined1 local_50[16];
   int local_40;
   long local_38;
   undefined4 local_30;
   long local_20;
   puVar9 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX != 0) {
      *puVar9 = 0;
      puVar9[6] = 0;
      *(undefined8*)( puVar9 + 8 ) = 0;
      puVar9[10] = 0x20006;
      *(undefined1(*) [16])( puVar9 + 2 ) = (undefined1[16])0x0;
      local_58 = (undefined*)0x0;
      StringName::operator =((StringName*)( puVar9 + 4 ), (StringName*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_58 != (undefined*)0x0 )) {
         StringName::unref();
      }

      goto LAB_00105fb7;
   }

   local_88 = 0;
   local_80 = (undefined1[16])0x0;
   local_70 = 0;
   local_68 = 0;
   local_60 = 6;
   local_98 = 0;
   local_a0 = 0;
   local_58 = &_LC9;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_50._8_8_;
   local_50 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_a0);
   local_58 = (undefined*)CONCAT44(local_58._4_4_, 0x1c);
   local_40 = 0;
   local_38 = 0;
   local_50 = (undefined1[16])0x0;
   if (local_a0 == 0) {
      LAB_00105fe8:local_30 = 6;
      StringName::operator =((StringName*)( local_50 + 8 ), (StringName*)&local_98);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_38, (CowData*)&local_a0);
      local_30 = 6;
      if (local_40 != 0x11) goto LAB_00105fe8;
      StringName::StringName((StringName*)&local_90, (String*)&local_38, false);
      if (local_50._8_8_ == local_90) {
         if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_50._8_8_ = local_90;
      }

   }

   lVar6 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar1 = (long*)( local_a0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   local_88 = CONCAT44(local_88._4_4_, local_58._0_4_);
   uVar7 = local_80._0_8_;
   if (local_80._0_8_ != local_50._0_8_) {
      if (local_80._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_80._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_80._8_8_;
            local_80 = auVar3 << 0x40;
            Memory::free_static((void*)( uVar7 + -0x10 ), false);
         }

      }

      local_80._0_8_ = local_50._0_8_;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_50._8_8_;
      local_50 = auVar5 << 0x40;
   }

   if (local_80._8_8_ != local_50._8_8_) {
      StringName::unref();
      uVar7 = local_50._8_8_;
      local_50._8_8_ = 0;
      local_80._8_8_ = uVar7;
   }

   lVar8 = local_38;
   lVar6 = local_68;
   local_70 = CONCAT44(local_70._4_4_, local_40);
   if (local_68 == local_38) {
      local_60 = local_30;
      if (local_68 != 0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_38 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

   }
 else {
      if (local_68 != 0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

      local_68 = local_38;
      local_60 = local_30;
   }

   if (( StringName::configured != '\0' ) && ( local_50._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar7 = local_50._0_8_;
   if (local_50._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_50._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_50._8_8_;
         local_50 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar7 + -0x10 ), false);
      }

   }

   *puVar9 = (undefined4)local_88;
   *(undefined8*)( puVar9 + 2 ) = local_80._0_8_;
   *(undefined8*)( puVar9 + 4 ) = local_80._8_8_;
   puVar9[6] = (undefined4)local_70;
   *(long*)( puVar9 + 8 ) = local_68;
   puVar9[10] = local_60;
   LAB_00105fb7:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar9;
}
/* godot::details::enum_qualified_name_to_class_info_name(String const&) */details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1){
   long *plVar1;
   long *plVar2;
   long lVar3;
   code *pcVar4;
   undefined *puVar5;
   long *plVar6;
   long lVar7;
   long lVar8;
   long in_FS_OFFSET;
   long local_60;
   char local_58[8];
   long *local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   String::split(local_58, SUB81(param_1, 0), 0x1061f8);
   if (( local_50 != (long*)0x0 ) && ( 2 < local_50[-1] )) {
      local_60 = 0;
      local_48 = &_LC15;
      local_40 = 1;
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == (long*)0x0) {
         lVar8 = 0;
         lVar7 = -2;
      }
 else {
         lVar8 = local_50[-1];
         lVar7 = lVar8 + -2;
         if (-1 < lVar7) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar7 ));
            String::operator +((String*)this, (String*)&local_48);
            puVar5 = local_48;
            lVar8 = local_60;
            if (local_48 != (undefined*)0x0) {
               LOCK();
               plVar1 = (long*)( local_48 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_48 = (undefined*)0x0;
                  Memory::free_static(puVar5 + -0x10, false);
                  lVar8 = local_60;
               }

            }

            goto joined_r0x001062aa;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar8, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   local_60 = 0;
   local_48 = &_LC15;
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)this);
   lVar8 = local_60;
   joined_r0x001062aa:local_60 = lVar8;
   if (lVar8 != 0) {
      LOCK();
      plVar1 = (long*)( lVar8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar8 + -0x10 ), false);
      }

   }

   plVar1 = local_50;
   if (local_50 != (long*)0x0) {
      LOCK();
      plVar6 = local_50 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_50 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar8 = local_50[-1];
         local_50 = (long*)0x0;
         if (lVar8 != 0) {
            lVar7 = 0;
            plVar6 = plVar1;
            do {
               if (*plVar6 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar6 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar3 = *plVar6;
                     *plVar6 = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar8 != lVar7 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Resource::_get_property_listv(Resource *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   long local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Resource";
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Resource";
   local_98 = 0;
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_00106608:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00106608;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00106625;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00106625:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar5 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   *(undefined8*)( puVar5 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0xc ) = (undefined1[16])0x0;
   *puVar5 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_68);
   puVar5[6] = local_60;
   if (*(long*)( puVar5 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_58);
   }

   lVar3 = local_58;
   puVar5[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar5 + 0xc ) = 0;
   *(long**)( puVar5 + 0x10 ) = plVar1;
   *(long*)( puVar5 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar5;
   }

   plVar1[1] = (long)puVar5;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar5;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   lVar2 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Resource", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PackedDataContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void PackedDataContainer::_get_property_listv(PackedDataContainer *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   long local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "PackedDataContainer";
   local_70 = 0x13;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "PackedDataContainer";
   local_98 = 0;
   local_70 = 0x13;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_00106a58:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00106a58;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00106a75;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00106a75:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar5 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   *(undefined8*)( puVar5 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0xc ) = (undefined1[16])0x0;
   *puVar5 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_68);
   puVar5[6] = local_60;
   if (*(long*)( puVar5 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_58);
   }

   lVar3 = local_58;
   puVar5[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar5 + 0xc ) = 0;
   *(long**)( puVar5 + 0x10 ) = plVar1;
   *(long*)( puVar5 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar5;
   }

   plVar1[1] = (long)puVar5;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar5;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   lVar2 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "PackedDataContainer", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Resource::_get_property_listv((Resource*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, unsigned int, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, unsigned int> > >::operator[](String const&) */undefined1 * __thiscallHashMap<String,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,unsigned_int>>>::operator [](HashMap<String,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,unsigned_int>>> * this, String * param_1) * plVar1 ;void *pvVar2void *__slong lVar3undefined1 auVar4[16]undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]char cVar36uint uVar37uint uVar38ulong uVar39undefined8 uVar40void *__s_00undefined1(*pauVar41)[16];undefined8 *puVar42void *pvVar43ulong uVar44int iVar45long lVar46long lVar47ulong uVar48undefined8 uVar49uint *puVar50uint uVar51uint uVar52long lVar53uint uVar54uint uVar55undefined1(*pauVar56)[16];undefined1(*pauVar57)[16];long in_FS_OFFSETlong local_58undefined4 local_50long local_40local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );if (*(long*)( this + 8 ) == 0) {
   LAB_00107768:uVar39 = (ulong)uVar55;
   uVar44 = uVar39 * 4;
   uVar48 = uVar39 * 8;
   uVar40 = Memory::alloc_static(uVar44, false);
   *(undefined8*)( this + 0x10 ) = uVar40;
   pvVar43 = (void*)Memory::alloc_static(uVar48, false);
   *(void**)( this + 8 ) = pvVar43;
   if (uVar55 != 0) {
      pvVar2 = *(void**)( this + 0x10 );
      if (( pvVar2 < (void*)( (long)pvVar43 + uVar48 ) ) && ( pvVar43 < (void*)( (long)pvVar2 + uVar44 ) )) {
         uVar44 = 0;
         do {
            *(undefined4*)( (long)pvVar2 + uVar44 * 4 ) = 0;
            *(undefined8*)( (long)pvVar43 + uVar44 * 8 ) = 0;
            uVar44 = uVar44 + 1;
         }
 while ( uVar39 != uVar44 );
         goto LAB_001075fa;
      }

      memset(pvVar2, 0, uVar44);
      memset(pvVar43, 0, uVar48);
      iVar45 = *(int*)( this + 0x2c );
      LAB_001075fe:if (iVar45 != 0) {
         LAB_00107606:uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         uVar52 = String::hash();
         uVar39 = CONCAT44(0, uVar37);
         lVar53 = *(long*)( this + 0x10 );
         uVar38 = 1;
         if (uVar52 != 0) {
            uVar38 = uVar52;
         }

         uVar54 = 0;
         auVar16._8_8_ = 0;
         auVar16._0_8_ = (ulong)uVar38 * lVar3;
         auVar32._8_8_ = 0;
         auVar32._0_8_ = uVar39;
         lVar46 = SUB168(auVar16 * auVar32, 8);
         uVar52 = *(uint*)( lVar53 + lVar46 * 4 );
         uVar51 = SUB164(auVar16 * auVar32, 8);
         if (uVar52 != 0) {
            do {
               if (uVar38 == uVar52) {
                  cVar36 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar46 * 8 ) + 0x10 ), param_1);
                  if (cVar36 != '\0') {
                     pauVar41 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar51 * 8 );
                     *(undefined4*)( pauVar41[1] + 8 ) = 0;
                     goto LAB_001074b3;
                  }

                  lVar53 = *(long*)( this + 0x10 );
               }

               uVar54 = uVar54 + 1;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = ( ulong )(uVar51 + 1) * lVar3;
               auVar33._8_8_ = 0;
               auVar33._0_8_ = uVar39;
               lVar46 = SUB168(auVar17 * auVar33, 8);
               uVar52 = *(uint*)( lVar53 + lVar46 * 4 );
               uVar51 = SUB164(auVar17 * auVar33, 8);
            }
 while ( ( uVar52 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = (ulong)uVar52 * lVar3,auVar34._8_8_ = 0,auVar34._0_8_ = uVar39,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( uVar37 + uVar51 ) - SUB164(auVar18 * auVar34, 8)) * lVar3,auVar35._8_8_ = 0,auVar35._0_8_ = uVar39,uVar54 <= SUB164(auVar19 * auVar35, 8) );
         }

         iVar45 = *(int*)( this + 0x2c );
      }

      uVar39 = (ulong)uVar55;
      goto LAB_001070f4;
   }

   iVar45 = *(int*)( this + 0x2c );
   if (pvVar43 == (void*)0x0) goto LAB_001070f4;
   if (iVar45 != 0) goto LAB_00107606;
   LAB_0010711a:uVar55 = *(uint*)( this + 0x28 );
   if (uVar55 == 0x1c) {
      pauVar41 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_001074b3;
   }

   uVar39 = ( ulong )(uVar55 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar37 = *(uint*)( hash_table_size_primes + (ulong)uVar55 * 4 );
   if (uVar55 + 1 < 2) {
      uVar39 = 2;
   }

   uVar55 = *(uint*)( hash_table_size_primes + uVar39 * 4 );
   uVar48 = (ulong)uVar55;
   *(int*)( this + 0x28 ) = (int)uVar39;
   pvVar43 = *(void**)( this + 8 );
   uVar39 = uVar48 * 4;
   uVar44 = uVar48 * 8;
   pvVar2 = *(void**)( this + 0x10 );
   uVar40 = Memory::alloc_static(uVar39, false);
   *(undefined8*)( this + 0x10 ) = uVar40;
   __s_00 = (void*)Memory::alloc_static(uVar44, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar55 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar44 ) ) && ( __s_00 < (void*)( (long)__s + uVar39 ) )) {
         uVar39 = 0;
         do {
            *(undefined4*)( (long)__s + uVar39 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar39 * 8 ) = 0;
            uVar39 = uVar39 + 1;
         }
 while ( uVar39 != uVar48 );
      }
 else {
         memset(__s, 0, uVar39);
         memset(__s_00, 0, uVar44);
      }

   }

   if (uVar37 != 0) {
      uVar39 = 0;
      do {
         uVar55 = *(uint*)( (long)pvVar2 + uVar39 * 4 );
         if (uVar55 != 0) {
            lVar3 = *(long*)( this + 0x10 );
            uVar51 = 0;
            uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar44 = CONCAT44(0, uVar38);
            lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar55 * lVar53;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar44;
            lVar46 = SUB168(auVar4 * auVar20, 8);
            puVar50 = (uint*)( lVar3 + lVar46 * 4 );
            iVar45 = SUB164(auVar4 * auVar20, 8);
            uVar52 = *puVar50;
            uVar40 = *(undefined8*)( (long)pvVar43 + uVar39 * 8 );
            while (uVar52 != 0) {
               auVar5._8_8_ = 0;
               auVar5._0_8_ = (ulong)uVar52 * lVar53;
               auVar21._8_8_ = 0;
               auVar21._0_8_ = uVar44;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(( uVar38 + iVar45 ) - SUB164(auVar5 * auVar21, 8)) * lVar53;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = uVar44;
               uVar54 = SUB164(auVar6 * auVar22, 8);
               uVar49 = uVar40;
               if (uVar54 < uVar51) {
                  *puVar50 = uVar55;
                  puVar42 = (undefined8*)( (long)__s_00 + lVar46 * 8 );
                  uVar49 = *puVar42;
                  *puVar42 = uVar40;
                  uVar55 = uVar52;
                  uVar51 = uVar54;
               }

               uVar51 = uVar51 + 1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(iVar45 + 1) * lVar53;
               auVar23._8_8_ = 0;
               auVar23._0_8_ = uVar44;
               lVar46 = SUB168(auVar7 * auVar23, 8);
               puVar50 = (uint*)( lVar3 + lVar46 * 4 );
               iVar45 = SUB164(auVar7 * auVar23, 8);
               uVar40 = uVar49;
               uVar52 = *puVar50;
            }
;
            *(undefined8*)( (long)__s_00 + lVar46 * 8 ) = uVar40;
            *puVar50 = uVar55;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar39 = uVar39 + 1;
      }
 while ( uVar37 != uVar39 );
      Memory::free_static(pvVar43, false);
      Memory::free_static(pvVar2, false);
   }

}
 else {
   iVar45 = *(int*)( this + 0x2c );
   uVar39 = CONCAT44(0, uVar55);
   if (iVar45 != 0) {
      lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar38 = String::hash();
      lVar53 = *(long*)( this + 0x10 );
      uVar37 = 1;
      if (uVar38 != 0) {
         uVar37 = uVar38;
      }

      uVar51 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar37 * lVar3;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar39;
      lVar46 = SUB168(auVar12 * auVar28, 8);
      uVar38 = *(uint*)( lVar53 + lVar46 * 4 );
      uVar52 = SUB164(auVar12 * auVar28, 8);
      if (uVar38 != 0) {
         do {
            if (uVar37 == uVar38) {
               cVar36 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar46 * 8 ) + 0x10 ), param_1);
               if (cVar36 != '\0') {
                  pauVar41 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar52 * 8 );
                  goto LAB_001074b3;
               }

               lVar53 = *(long*)( this + 0x10 );
            }

            uVar51 = uVar51 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = ( ulong )(uVar52 + 1) * lVar3;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar39;
            lVar46 = SUB168(auVar13 * auVar29, 8);
            uVar38 = *(uint*)( lVar53 + lVar46 * 4 );
            uVar52 = SUB164(auVar13 * auVar29, 8);
         }
 while ( ( uVar38 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar38 * lVar3,auVar30._8_8_ = 0,auVar30._0_8_ = uVar39,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar52 + uVar55 ) - SUB164(auVar14 * auVar30, 8)) * lVar3,auVar31._8_8_ = 0,auVar31._0_8_ = uVar39,uVar51 <= SUB164(auVar15 * auVar31, 8) );
      }

      uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (*(long*)( this + 8 ) == 0) goto LAB_00107768;
      LAB_001075fa:iVar45 = *(int*)( this + 0x2c );
      goto LAB_001075fe;
   }

   LAB_001070f4:if ((float)uVar39 * __LC31 < (float)( iVar45 + 1 )) goto LAB_0010711a;
}
local_58 = 0;if (*(long*)param_1 == 0) {
   pauVar41 = (undefined1(*) [16])operator_new(0x20, "");
   *(undefined8*)pauVar41[1] = 0;
   *pauVar41 = (undefined1[16])0x0;
   LAB_0010773b:*(undefined4*)( pauVar41[1] + 8 ) = 0;
   LAB_001073a1:puVar42 = *(undefined8**)( this + 0x20 );
   if (puVar42 != (undefined8*)0x0) goto LAB_001073ae;
   LAB_001075d5:*(undefined1(**) [16])( this + 0x18 ) = pauVar41;
}
 else {
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)param_1);
   lVar3 = local_58;
   local_50 = 0;
   pauVar41 = (undefined1(*) [16])operator_new(0x20, "");
   *(undefined8*)pauVar41[1] = 0;
   *(undefined8*)*pauVar41 = 0;
   *(undefined8*)( *pauVar41 + 8 ) = 0;
   if (lVar3 == 0) goto LAB_0010773b;
   CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar41 + 1 ), (CowData*)&local_58);
   *(undefined4*)( pauVar41[1] + 8 ) = 0;
   LOCK();
   plVar1 = (long*)( lVar3 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) goto LAB_001073a1;
   Memory::free_static((void*)( local_58 + -0x10 ), false);
   puVar42 = *(undefined8**)( this + 0x20 );
   if (puVar42 == (undefined8*)0x0) goto LAB_001075d5;
   LAB_001073ae:*puVar42 = pauVar41;
   *(undefined8**)( *pauVar41 + 8 ) = puVar42;
}
*(undefined1(**) [16])( this + 0x20 ) = pauVar41;uVar37 = String::hash();lVar3 = *(long*)( this + 0x10 );uVar55 = 1;if (uVar37 != 0) {
   uVar55 = uVar37;
}
uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar39 = CONCAT44(0, uVar37);lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar8._8_8_ = 0;auVar8._0_8_ = (ulong)uVar55 * lVar53;auVar24._8_8_ = 0;auVar24._0_8_ = uVar39;lVar47 = SUB168(auVar8 * auVar24, 8);lVar46 = *(long*)( this + 8 );puVar50 = (uint*)( lVar3 + lVar47 * 4 );iVar45 = SUB164(auVar8 * auVar24, 8);uVar38 = *puVar50;pauVar57 = pauVar41;if (uVar38 != 0) {
   uVar52 = 0;
   pauVar56 = pauVar41;
   do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar38 * lVar53;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar39;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = ( ulong )(( uVar37 + iVar45 ) - SUB164(auVar9 * auVar25, 8)) * lVar53;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar39;
      uVar51 = SUB164(auVar10 * auVar26, 8);
      pauVar57 = pauVar56;
      if (uVar51 < uVar52) {
         *puVar50 = uVar55;
         puVar42 = (undefined8*)( lVar46 + lVar47 * 8 );
         pauVar57 = (undefined1(*) [16])*puVar42;
         *puVar42 = pauVar56;
         uVar52 = uVar51;
         uVar55 = uVar38;
      }

      uVar52 = uVar52 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(iVar45 + 1) * lVar53;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar39;
      lVar47 = SUB168(auVar11 * auVar27, 8);
      puVar50 = (uint*)( lVar3 + lVar47 * 4 );
      iVar45 = SUB164(auVar11 * auVar27, 8);
      uVar38 = *puVar50;
      pauVar56 = pauVar57;
   }
 while ( uVar38 != 0 );
}
*(undefined1(**) [16])( lVar46 + lVar47 * 8 ) = pauVar57;*puVar50 = uVar55;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_001074b3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return pauVar41[1] + 8;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* List<Variant, DefaultAllocator>::~List() */void List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this) {
   int *piVar1;
   undefined8 *puVar2;
   puVar2 = *(undefined8**)this;
   if (puVar2 == (undefined8*)0x0) {
      return;
   }

   do {
      piVar1 = (int*)*puVar2;
      if (piVar1 == (int*)0x0) {
         if (*(int*)( puVar2 + 2 ) != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(undefined8**)( piVar1 + 10 ) == puVar2) {
         *puVar2 = *(undefined8*)( piVar1 + 6 );
         if (piVar1 == (int*)puVar2[1]) {
            puVar2[1] = *(undefined8*)( piVar1 + 8 );
         }

         if (*(long*)( piVar1 + 8 ) != 0) {
            *(undefined8*)( *(long*)( piVar1 + 8 ) + 0x18 ) = *(undefined8*)( piVar1 + 6 );
         }

         if (*(long*)( piVar1 + 6 ) != 0) {
            *(undefined8*)( *(long*)( piVar1 + 6 ) + 0x20 ) = *(undefined8*)( piVar1 + 8 );
         }

         if (Variant::needs_deinit[*piVar1] != '\0') {
            Variant::_clear_internal();
         }

         Memory::free_static(piVar1, false);
         *(int*)( puVar2 + 2 ) = *(int*)( puVar2 + 2 ) + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      puVar2 = *(undefined8**)this;
   }
 while ( *(int*)( puVar2 + 2 ) != 0 );
   Memory::free_static(puVar2, false);
   return;
}
/* List<PackedDataContainer::DictKey, DefaultAllocator>::~List() */void List<PackedDataContainer::DictKey,DefaultAllocator>::~List(List<PackedDataContainer::DictKey,DefaultAllocator> *this) {
   void *pvVar1;
   undefined8 *puVar2;
   puVar2 = *(undefined8**)this;
   if (puVar2 == (undefined8*)0x0) {
      return;
   }

   do {
      pvVar1 = (void*)*puVar2;
      if (pvVar1 == (void*)0x0) {
         if (*(int*)( puVar2 + 2 ) != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(undefined8**)( (long)pvVar1 + 0x30 ) == puVar2) {
         *puVar2 = *(undefined8*)( (long)pvVar1 + 0x20 );
         if (pvVar1 == (void*)puVar2[1]) {
            puVar2[1] = *(undefined8*)( (long)pvVar1 + 0x28 );
         }

         if (*(long*)( (long)pvVar1 + 0x28 ) != 0) {
            *(undefined8*)( *(long*)( (long)pvVar1 + 0x28 ) + 0x20 ) = *(undefined8*)( (long)pvVar1 + 0x20 );
         }

         if (*(long*)( (long)pvVar1 + 0x20 ) != 0) {
            *(undefined8*)( *(long*)( (long)pvVar1 + 0x20 ) + 0x28 ) = *(undefined8*)( (long)pvVar1 + 0x28 );
         }

         if (Variant::needs_deinit[*(int*)( (long)pvVar1 + 8 )] != '\0') {
            Variant::_clear_internal();
         }

         Memory::free_static(pvVar1, false);
         *(int*)( puVar2 + 2 ) = *(int*)( puVar2 + 2 ) + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      puVar2 = *(undefined8**)this;
   }
 while ( *(int*)( puVar2 + 2 ) != 0 );
   Memory::free_static(puVar2, false);
   return;
}
/* void List<PackedDataContainer::DictKey,
   DefaultAllocator>::sort_custom<Comparator<PackedDataContainer::DictKey> >() */void List<PackedDataContainer::DictKey,DefaultAllocator>::sort_custom<Comparator<PackedDataContainer::DictKey>>(List<PackedDataContainer::DictKey,DefaultAllocator> *this) {
   size_t __n;
   int iVar1;
   uint uVar2;
   undefined8 *puVar3;
   Element *pEVar4;
   Element **__src;
   long lVar5;
   Element *pEVar6;
   Element **ppEVar7;
   Element *pEVar8;
   long lVar9;
   Element *pEVar10;
   Element *pEVar11;
   Element **ppEVar12;
   Element *pEVar13;
   long lVar14;
   Element **local_60;
   if (*(long*)this == 0) {
      return;
   }

   iVar1 = *(int*)( *(long*)this + 0x10 );
   if (iVar1 < 2) {
      return;
   }

   pEVar4 = (Element*)(long)iVar1;
   __src = (Element**)Memory::alloc_static((long)pEVar4 * 8, true);
   if (__src == (Element**)0x0) {
      _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
      local_60 = (Element**)0x8;
   }
 else {
      __src[-1] = pEVar4;
      local_60 = __src + 1;
   }

   if (*(long**)this != (long*)0x0) {
      ppEVar7 = __src;
      for (pEVar13 = (Element*)**(long**)this; pEVar13 != (Element*)0x0; pEVar13 = *(Element**)( pEVar13 + 0x20 )) {
         *ppEVar7 = pEVar13;
         ppEVar7 = ppEVar7 + 1;
      }

   }

   lVar9 = 0;
   pEVar13 = pEVar4;
   do {
      pEVar13 = (Element*)( (long)pEVar13 >> 1 );
      lVar9 = lVar9 + 1;
   }
 while ( pEVar13 != (Element*)0x1 );
   SortArray<List<PackedDataContainer::DictKey,DefaultAllocator>::Element*,List<PackedDataContainer::DictKey,DefaultAllocator>::AuxiliaryComparator<Comparator<PackedDataContainer::DictKey>>,true>::introsort(0, (long)pEVar4, __src, lVar9 * 2);
   if ((long)pEVar4 < 0x11) {
      pEVar13 = (Element*)0x1;
      pEVar8 = *__src;
      do {
         while (true) {
            pEVar6 = __src[(long)pEVar13];
            __n = (long)pEVar13 * 8;
            uVar2 = *(uint*)pEVar6;
            if (uVar2 < *(uint*)pEVar8) break;
            pEVar8 = __src[(long)( pEVar13 + -1 )];
            ppEVar7 = __src + (long)pEVar13;
            pEVar10 = pEVar13 + -1;
            if (uVar2 < *(uint*)pEVar8) {
               do {
                  pEVar11 = pEVar10;
                  if (pEVar11 == (Element*)0x0) {
                     _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                     ppEVar7 = local_60;
                     goto LAB_00107f43;
                  }

                  __src[(long)( pEVar11 + 1 )] = pEVar8;
                  pEVar8 = __src[(long)( pEVar11 + -1 )];
                  pEVar10 = pEVar11 + -1;
               }
 while ( uVar2 < *(uint*)pEVar8 );
               ppEVar7 = __src + (long)pEVar11;
            }

            LAB_00107f43:pEVar13 = pEVar13 + 1;
            *ppEVar7 = pEVar6;
            pEVar6 = *__src;
            pEVar8 = pEVar6;
            if (pEVar4 == pEVar13) goto LAB_00107df0;
         }
;
         pEVar13 = pEVar13 + 1;
         memmove(__src + 1, __src, __n);
         *__src = pEVar6;
         pEVar8 = pEVar6;
      }
 while ( pEVar4 != pEVar13 );
   }
 else {
      ppEVar7 = __src + 1;
      lVar9 = 1;
      do {
         while (true) {
            lVar14 = lVar9;
            pEVar13 = *ppEVar7;
            uVar2 = *(uint*)pEVar13;
            if (uVar2 < *(uint*)*__src) break;
            pEVar8 = ppEVar7[-1];
            lVar9 = lVar14 + -1;
            ppEVar12 = ppEVar7;
            if (uVar2 < *(uint*)pEVar8) {
               do {
                  lVar5 = lVar9;
                  if (lVar5 == 0) {
                     _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                     ppEVar12 = local_60;
                     goto LAB_00107d3f;
                  }

                  __src[lVar5 + 1] = pEVar8;
                  pEVar8 = __src[lVar5 + -1];
                  lVar9 = lVar5 + -1;
               }
 while ( uVar2 < *(uint*)pEVar8 );
               ppEVar12 = __src + lVar5;
            }

            LAB_00107d3f:*ppEVar12 = pEVar13;
            ppEVar7 = ppEVar7 + 1;
            lVar9 = lVar14 + 1;
            if (lVar14 + 1 == 0x10) goto LAB_00107d50;
         }
;
         memmove(__src + 1, __src, lVar14 * 8);
         ppEVar7 = ppEVar7 + 1;
         *__src = pEVar13;
         lVar9 = lVar14 + 1;
      }
 while ( lVar14 + 1 != 0x10 );
      LAB_00107d50:pEVar13 = (Element*)( lVar14 + 1 );
      ppEVar7 = __src + 0x10;
      do {
         pEVar6 = *ppEVar7;
         pEVar10 = ppEVar7[-1];
         pEVar8 = pEVar13 + -1;
         uVar2 = *(uint*)pEVar6;
         ppEVar12 = ppEVar7;
         if (uVar2 < *(uint*)pEVar10) {
            do {
               __src[(long)( pEVar8 + 1 )] = pEVar10;
               pEVar11 = pEVar8 + -1;
               pEVar10 = __src[(long)pEVar11];
               if (*(uint*)pEVar10 <= uVar2) {
                  ppEVar12 = __src + (long)pEVar8;
                  goto LAB_00107dd3;
               }

               pEVar8 = pEVar11;
            }
 while ( pEVar11 != (Element*)0x0 );
            _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
            ppEVar12 = local_60;
         }

         LAB_00107dd3:pEVar13 = pEVar13 + 1;
         *ppEVar12 = pEVar6;
         ppEVar7 = ppEVar7 + 1;
      }
 while ( pEVar4 != pEVar13 );
      pEVar6 = *__src;
   }

   LAB_00107df0:puVar3 = *(undefined8**)this;
   *puVar3 = pEVar6;
   *(undefined8*)( pEVar6 + 0x28 ) = 0;
   *(Element**)( *__src + 0x20 ) = __src[1];
   pEVar13 = __src[(long)( pEVar4 + -1 )];
   puVar3[1] = pEVar13;
   *(Element**)( pEVar13 + 0x28 ) = __src[(long)( pEVar4 + -2 )];
   *(undefined8*)( __src[(long)( pEVar4 + -1 )] + 0x20 ) = 0;
   if (iVar1 != 2) {
      ppEVar7 = __src;
      do {
         ppEVar12 = ppEVar7 + 1;
         *(Element**)( ppEVar7[1] + 0x28 ) = *ppEVar7;
         *(Element**)( *ppEVar12 + 0x20 ) = ppEVar7[2];
         ppEVar7 = ppEVar12;
      }
 while ( ppEVar12 != __src + ( iVar1 - 2 ) );
   }

   Memory::free_static(__src, true);
   return;
}
/* MethodBind* create_method_bind<PackedDataContainer, Vector<unsigned char> const&>(void
   (PackedDataContainer::*)(Vector<unsigned char> const&)) */MethodBind *create_method_bind<PackedDataContainer,Vector<unsigned_char>const&>(_func_void_Vector_ptr *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_Vector_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010d338;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "PackedDataContainer";
   local_30 = 0x13;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<PackedDataContainer, Vector<unsigned char>>(Vector<unsigned char>
   (PackedDataContainer::*)() const) */MethodBind *create_method_bind<PackedDataContainer,Vector<unsigned_char>>(_func_Vector *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Vector**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010d398;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "PackedDataContainer";
   local_30 = 0x13;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<PackedDataContainer, Variant, Array const&>(Variant
   (PackedDataContainer::*)(Array const&)) */MethodBind *create_method_bind<PackedDataContainer,Variant,Array_const&>(_func_Variant_Array_ptr *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Variant_Array_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010d3f8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "PackedDataContainer";
   local_30 = 0x13;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<PackedDataContainer, Variant, Variant const&>(Variant
   (PackedDataContainer::*)(Variant const&)) */MethodBind *create_method_bind<PackedDataContainer,Variant,Variant_const&>(_func_Variant_Variant_ptr *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Variant_Variant_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010d458;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "PackedDataContainer";
   local_30 = 0x13;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<PackedDataContainer, Error, Variant const&>(Error
   (PackedDataContainer::*)(Variant const&)) */MethodBind *create_method_bind<PackedDataContainer,Error,Variant_const&>(_func_Error_Variant_ptr *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Error_Variant_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010d4b8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "PackedDataContainer";
   local_30 = 0x13;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<PackedDataContainer, int>(int (PackedDataContainer::*)() const) */MethodBind *create_method_bind<PackedDataContainer,int>(_func_int *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010d518;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "PackedDataContainer";
   local_30 = 0x13;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<PackedDataContainerRef, Variant, Array const&>(Variant
   (PackedDataContainerRef::*)(Array const&)) */MethodBind *create_method_bind<PackedDataContainerRef,Variant,Array_const&>(_func_Variant_Array_ptr *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Variant_Array_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010d3f8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "PackedDataContainerRef";
   local_30 = 0x16;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<PackedDataContainerRef, Variant, Variant const&>(Variant
   (PackedDataContainerRef::*)(Variant const&)) */MethodBind *create_method_bind<PackedDataContainerRef,Variant,Variant_const&>(_func_Variant_Variant_ptr *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Variant_Variant_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010d458;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "PackedDataContainerRef";
   local_30 = 0x16;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PackedDataContainerRef::_initialize_classv() */void PackedDataContainerRef::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_60;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() != '\0') goto LAB_00108a89;
   if (RefCounted::initialize_class() == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "RefCounted";
      local_60 = 0;
      local_40 = 10;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      lVar2 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      lVar2 = local_58;
      if (local_58 == 0) {
         LAB_00108b9a:if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
            LAB_00108baa:RefCounted::_bind_methods();
         }

      }
 else {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_00108b9a;
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_00108baa;
      }

      RefCounted::initialize_class()::initialized =
      '\x01';
   }

   local_48 = "RefCounted";
   local_58 = 0;
   local_40 = 10;
   String::parse_latin1((StrRange*)&local_58);
   StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
   local_48 = "PackedDataContainerRef";
   local_60 = 0;
   local_40 = 0x16;
   String::parse_latin1((StrRange*)&local_60);
   StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
   ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   lVar2 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   _bind_methods();
   initialize_class()::initialized =
   '\x01';
   LAB_00108a89:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<unsigned char>::_realloc(long) */undefined8 CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* CowData<Error>::_realloc(long) */undefined8 CowData<Error>::_realloc(CowData<Error> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* PackedDataContainer::_initialize_classv() */void PackedDataContainer::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (Resource::initialize_class() == '\0') {
         if (RefCounted::initialize_class() == '\0') {
            Object::initialize_class();
            local_68 = 0;
            local_50 = 6;
            local_58 = "Object";
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "RefCounted";
            local_70 = 0;
            local_50 = 10;
            String::parse_latin1((StrRange*)&local_70);
            StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            lVar2 = local_70;
            if (local_70 != 0) {
               LOCK();
               plVar1 = (long*)( local_70 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_70 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            lVar2 = local_68;
            if (local_68 != 0) {
               LOCK();
               plVar1 = (long*)( local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }

            }

            if ((code*)PTR__bind_methods_00111010 != RefCounted::_bind_methods) {
               RefCounted::_bind_methods();
            }

            RefCounted::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "RefCounted";
         local_68 = 0;
         local_50 = 10;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "Resource";
         local_70 = 0;
         local_50 = 8;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         lVar2 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar1 = (long*)( local_70 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         lVar2 = local_68;
         if (local_68 != 0) {
            LOCK();
            plVar1 = (long*)( local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if ((code*)PTR__bind_methods_00111008 != RefCounted::_bind_methods) {
            Resource::_bind_methods();
         }

         Resource::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "Resource";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "PackedDataContainer";
      local_70 = 0;
      local_50 = 0x13;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

      lVar2 = local_70;
      if (local_70 != 0) {
         LOCK();
         plVar1 = (long*)( local_70 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      lVar2 = local_68;
      if (local_68 != 0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      _bind_methods();
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Removing unreachable block (ram,0x001092b8) *//* WARNING: Removing unreachable block (ram,0x001093e8) *//* WARNING: Removing unreachable block (ram,0x001095b0) *//* WARNING: Removing unreachable block (ram,0x001093f4) *//* WARNING: Removing unreachable block (ram,0x001093fe) *//* WARNING: Removing unreachable block (ram,0x00109590) *//* WARNING: Removing unreachable block (ram,0x0010940a) *//* WARNING: Removing unreachable block (ram,0x00109414) *//* WARNING: Removing unreachable block (ram,0x00109570) *//* WARNING: Removing unreachable block (ram,0x00109420) *//* WARNING: Removing unreachable block (ram,0x0010942a) *//* WARNING: Removing unreachable block (ram,0x00109550) *//* WARNING: Removing unreachable block (ram,0x00109436) *//* WARNING: Removing unreachable block (ram,0x00109440) *//* WARNING: Removing unreachable block (ram,0x00109530) *//* WARNING: Removing unreachable block (ram,0x0010944c) *//* WARNING: Removing unreachable block (ram,0x00109456) *//* WARNING: Removing unreachable block (ram,0x00109510) *//* WARNING: Removing unreachable block (ram,0x00109462) *//* WARNING: Removing unreachable block (ram,0x0010946c) *//* WARNING: Removing unreachable block (ram,0x001094f0) *//* WARNING: Removing unreachable block (ram,0x00109474) *//* WARNING: Removing unreachable block (ram,0x0010948a) *//* WARNING: Removing unreachable block (ram,0x00109496) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
   char cVar1;
   Variant *this;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar2 = (int)local_c8;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, param_2);
   *param_1 = local_c0[0];
   Array::~Array(local_c8);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar1 = Variant::needs_deinit[local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_78[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   char *pcVar3;
   int iVar4;
   long *plVar6;
   undefined4 in_register_00000014;
   long *plVar7;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   Variant *pVVar5;
   plVar7 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar7 != (long*)0x0 ) && ( plVar7[1] != 0 ) ) && ( *(char*)( plVar7[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar7[1] == 0) {
         plVar6 = (long*)plVar7[0x23];
         if (plVar6 == (long*)0x0) {
            plVar6 = (long*)( **(code**)( *plVar7 + 0x40 ) )(plVar7);
         }

      }
 else {
         plVar6 = (long*)( plVar7[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar6) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC78, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         pcVar3 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar7 = (long*)( local_58 + -0x10 );
            *plVar7 = *plVar7 + -1;
            UNLOCK();
            if (*plVar7 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

         lVar2 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar7 = (long*)( local_60 + -0x10 );
            *plVar7 = *plVar7 + -1;
            UNLOCK();
            if (*plVar7 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00109780;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar5 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar5 & 1 ) != 0) {
            pVVar5 = *(Variant**)( pVVar5 + *(long*)( (long)plVar7 + (long)pVVar1 ) + -1 );
         }

         iVar4 = ( *(code*)pVVar5 )();
         Variant::Variant((Variant*)local_48, iVar4);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      }
 else {
         *in_R9 = 4;
         in_R9[2] = 0;
      }

   }
 else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }

   LAB_00109780:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<int>::validated_call(MethodBindTRC<int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   char *pcVar2;
   int iVar3;
   long *plVar5;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar4;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar5 = *(long**)( param_1 + 0x118 );
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar5 = (long*)( local_48 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar5 = (long*)( local_50 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00109a74;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar4 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar4 & 1 ) != 0) {
      pcVar4 = *(code**)( pcVar4 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar3 = ( *pcVar4 )(param_1 + *(long*)( this + 0x60 ));
   *(long*)( param_3 + 8 ) = (long)iVar3;
   LAB_00109a74:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   char *pcVar2;
   int iVar3;
   long *plVar5;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar4;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar5 = *(long**)( param_1 + 0x118 );
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar5 = (long*)( local_48 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar5 = (long*)( local_50 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00109c73;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar4 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar4 & 1 ) != 0) {
      pcVar4 = *(code**)( pcVar4 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar3 = ( *pcVar4 )(param_1 + *(long*)( this + 0x60 ));
   *(long*)param_3 = (long)iVar3;
   LAB_00109c73:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Error, Variant const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTR<Error,Variant_const&>::validated_call(MethodBindTR<Error,Variant_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   char *pcVar2;
   uint uVar3;
   long *plVar5;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar4;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar5 = *(long**)( param_1 + 0x118 );
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar5 = (long*)( local_48 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar5 = (long*)( local_50 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00109e78;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar4 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar4 & 1 ) != 0) {
      pcVar4 = *(code**)( pcVar4 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar3 = ( *pcVar4 )(param_1 + *(long*)( this + 0x60 ), *param_2);
   *(ulong*)( param_3 + 8 ) = (ulong)uVar3;
   LAB_00109e78:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Error, Variant const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<Error,Variant_const&>::ptrcall(MethodBindTR<Error,Variant_const&> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   char *pcVar2;
   uint uVar3;
   long *plVar5;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar4;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar5 = *(long**)( param_1 + 0x118 );
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar5 = (long*)( local_48 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar5 = (long*)( local_50 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010a098;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar4 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar4 & 1 ) != 0) {
      pcVar4 = *(code**)( pcVar4 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar3 = ( *pcVar4 )(param_1 + *(long*)( this + 0x60 ), *param_2);
   *(ulong*)param_3 = (ulong)uVar3;
   LAB_0010a098:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Variant, Variant const&>::validated_call(Object*, Variant const**, Variant*) const
    */void MethodBindTR<Variant,Variant_const&>::validated_call(MethodBindTR<Variant,Variant_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0);
         pcVar2 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar4 = (long*)( local_58 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar4 = (long*)( local_60 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010a2db;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar3 )((Variant*)local_48, param_1 + *(long*)( this + 0x60 ), *param_2);
   Variant::operator =(param_3, (Variant*)local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   LAB_0010a2db:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Variant, Variant const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<Variant,Variant_const&>::ptrcall(MethodBindTR<Variant,Variant_const&> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0);
         pcVar2 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar4 = (long*)( local_58 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar4 = (long*)( local_60 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010a53b;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar3 )((Variant*)local_48, param_1 + *(long*)( this + 0x60 ), *param_2);
   Variant::operator =((Variant*)param_3, (Variant*)local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   LAB_0010a53b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Variant, Array const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTR<Variant,Array_const&>::validated_call(MethodBindTR<Variant,Array_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0);
         pcVar2 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar4 = (long*)( local_58 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar4 = (long*)( local_60 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010a79d;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar3 )((Variant*)local_48, param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
   Variant::operator =(param_3, (Variant*)local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   LAB_0010a79d:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Variant, Array const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<Variant,Array_const&>::ptrcall(MethodBindTR<Variant,Array_const&> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0);
         pcVar2 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar4 = (long*)( local_58 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar4 = (long*)( local_60 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010a9fb;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar3 )((Variant*)local_48, param_1 + *(long*)( this + 0x60 ), *param_2);
   Variant::operator =((Variant*)param_3, (Variant*)local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   LAB_0010a9fb:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector<unsigned char>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTRC<Vector<unsigned_char>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   char *pcVar3;
   Variant *pVVar4;
   long *plVar5;
   undefined4 in_register_00000014;
   long *plVar6;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   char *local_58;
   long local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar6 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar6 != (long*)0x0 ) && ( plVar6[1] != 0 ) ) && ( *(char*)( plVar6[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar6[1] == 0) {
         plVar5 = (long*)plVar6[0x23];
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( *plVar6 + 0x40 ) )(plVar6);
         }

      }
 else {
         plVar5 = (long*)( plVar6[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC78, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         pcVar3 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar6 = (long*)( local_58 + -0x10 );
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

         lVar2 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar6 = (long*)( local_60 + -0x10 );
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010acf0;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar4 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar4 & 1 ) != 0) {
            pVVar4 = *(Variant**)( pVVar4 + *(long*)( (long)plVar6 + (long)pVVar1 ) + -1 );
         }

         ( *(code*)pVVar4 )((Vector*)&local_58);
         Variant::Variant((Variant*)local_48, (Vector*)&local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         lVar2 = local_50;
         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         if (local_50 != 0) {
            LOCK();
            plVar6 = (long*)( local_50 + -0x10 );
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

      }
 else {
         *in_R9 = 4;
         in_R9[2] = 0;
      }

   }
 else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }

   LAB_0010acf0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector<unsigned char>>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Vector<unsigned_char>>::validated_call(MethodBindTRC<Vector<unsigned_char>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Variant **ppVVar1;
   long lVar2;
   Variant **ppVVar3;
   code *pcVar4;
   long *plVar5;
   Variant **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   Variant **local_48;
   long local_40[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar5 = *(long**)( param_1 + 0x118 );
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Variant**)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Variant**)0x1095d8;
         local_40[0] = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         ppVVar3 = local_48;
         if (local_48 != (Variant**)0x0) {
            LOCK();
            ppVVar1 = local_48 + -2;
            *ppVVar1 = *ppVVar1 + -1;
            UNLOCK();
            if (*ppVVar1 == (Variant*)0x0) {
               local_48 = (Variant**)0x0;
               Memory::free_static(ppVVar3 + -2, false);
            }

         }

         lVar2 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar5 = (long*)( local_50 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010afab;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar4 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar4 & 1 ) != 0) {
      param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar4 = *(code**)( pcVar4 + (long)param_2 + -1 );
   }

   ( *pcVar4 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (*(long*)( *(long*)( param_3 + 8 ) + 0x18 ) != local_40[0]) {
      CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( *(long*)( param_3 + 8 ) + 0x18 ), (CowData*)local_40);
   }

   lVar2 = local_40[0];
   if (local_40[0] != 0) {
      LOCK();
      plVar5 = (long*)( local_40[0] + -0x10 );
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         local_40[0] = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   LAB_0010afab:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector<unsigned char>>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Vector<unsigned_char>>::ptrcall(MethodBindTRC<Vector<unsigned_char>> *this, Object *param_1, void **param_2, void *param_3) {
   void **ppvVar1;
   long lVar2;
   void **ppvVar3;
   code *pcVar4;
   long *plVar5;
   void **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   void **local_48;
   long local_40[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar5 = *(long**)( param_1 + 0x118 );
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (void**)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (void**)0x1095d8;
         local_40[0] = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         ppvVar3 = local_48;
         if (local_48 != (void**)0x0) {
            LOCK();
            ppvVar1 = local_48 + -2;
            *ppvVar1 = (void*)( (long)*ppvVar1 + -1 );
            UNLOCK();
            if (*ppvVar1 == (void*)0x0) {
               local_48 = (void**)0x0;
               Memory::free_static(ppvVar3 + -2, false);
            }

         }

         lVar2 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar5 = (long*)( local_50 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010b1e7;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar4 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar4 & 1 ) != 0) {
      param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar4 = *(code**)( pcVar4 + (long)param_2 + -1 );
   }

   ( *pcVar4 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (*(long*)( (long)param_3 + 8 ) != local_40[0]) {
      CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( (long)param_3 + 8 ), (CowData*)local_40);
   }

   lVar2 = local_40[0];
   if (local_40[0] != 0) {
      LOCK();
      plVar5 = (long*)( local_40[0] + -0x10 );
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         local_40[0] = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   LAB_0010b1e7:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Vector<unsigned char> const&>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindT<Vector<unsigned_char>const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar4;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar4 = param_2[0x23];
         if (pVVar4 == (Variant*)0x0) {
            pVVar4 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar4 = param_2[1] + 0x20;
      }

      if (local_38 == *(char**)pVVar4) {
         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0;
         local_30 = 0x35;
         String::parse_latin1((StrRange*)&local_40);
         vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
         pcVar3 = local_38;
         if (local_38 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_38 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_38 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

         lVar2 = local_40;
         if (local_40 != 0) {
            LOCK();
            plVar1 = (long*)( local_40 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_40 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0010b5a5;
      }

      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0010b3ed. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)( *(long*)param_3 + 8 ) + 0x10);
      return;
   }

   LAB_0010b5a5:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Vector<unsigned char> const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Vector<unsigned_char>const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   char *pcVar2;
   code *UNRECOVERED_JUMPTABLE;
   long *plVar3;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar3 = (long*)param_2[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar3 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_38 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0;
         local_30 = 0x35;
         String::parse_latin1((StrRange*)&local_40);
         vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
         pcVar2 = local_38;
         if (local_38 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_38 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_38 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_40;
         if (local_40 != 0) {
            LOCK();
            plVar3 = (long*)( local_40 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_40 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0010b7c5;
      }

      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0010b605. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_0010b7c5:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTR<Variant, Variant const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTR<Variant,Variant_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   char *pcVar4;
   char cVar5;
   undefined4 uVar6;
   long *plVar7;
   long lVar8;
   undefined4 in_register_00000014;
   long *plVar9;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar10;
   Variant *pVVar11;
   long in_FS_OFFSET;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   undefined4 local_68[2];
   undefined8 local_60;
   undefined8 uStack_58;
   int local_48[6];
   long local_30;
   plVar9 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar9 != (long*)0x0 ) && ( plVar9[1] != 0 ) ) && ( *(char*)( plVar9[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_78, (StringName*)( param_2 + 3 ));
      if (plVar9[1] == 0) {
         plVar7 = (long*)plVar9[0x23];
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *plVar9 + 0x40 ) )(plVar9);
         }

      }
 else {
         plVar7 = (long*)( plVar9[1] + 0x20 );
      }

      if (local_78 == (char*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_80 = 0;
         local_70 = 0x35;
         String::parse_latin1((StrRange*)&local_80);
         vformat<StringName>((StringName*)&local_78, (StrRange*)&local_80, &local_88);
         _err_print_error(&_LC78, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_78, 0);
         pcVar4 = local_78;
         if (local_78 != (char*)0x0) {
            LOCK();
            plVar9 = (long*)( local_78 + -0x10 );
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (*plVar9 == 0) {
               local_78 = (char*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
            }

         }

         lVar2 = local_80;
         if (local_80 != 0) {
            LOCK();
            plVar9 = (long*)( local_80 + -0x10 );
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (*plVar9 == 0) {
               local_80 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010b910;
      }

      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar11 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar10 = param_2[5];
      if (pVVar10 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0010b950;
         LAB_0010b940:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0010b950:uVar6 = 4;
            goto LAB_0010b905;
         }

         if (in_R8D == 1) goto LAB_0010b940;
         lVar8 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar8) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar10 = pVVar10 + lVar8 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar11 & 1 ) != 0) {
         pVVar11 = *(Variant**)( pVVar11 + *(long*)( (long)plVar9 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0);
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = 0;
      }

      Variant::Variant((Variant*)local_48, pVVar10);
      ( *(code*)pVVar11 )(local_68, (Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)local_48);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_68[0];
      *(undefined8*)( param_1 + 8 ) = local_60;
      *(undefined8*)( param_1 + 0x10 ) = uStack_58;
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

   }
 else {
      uVar6 = 3;
      LAB_0010b905:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_0010b910:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Error, Variant const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTR<Error,Variant_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   char *pcVar4;
   char cVar5;
   int iVar6;
   undefined4 uVar7;
   long *plVar8;
   long lVar9;
   undefined4 in_register_00000014;
   long *plVar10;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar11;
   Variant *pVVar12;
   long in_FS_OFFSET;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   undefined4 local_68[2];
   undefined8 local_60;
   undefined8 uStack_58;
   int local_48[6];
   long local_30;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_78, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
      }

      if (local_78 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_80 = 0;
         local_70 = 0x35;
         String::parse_latin1((StrRange*)&local_80);
         vformat<StringName>((StringName*)&local_78, (StrRange*)&local_80, &local_88);
         _err_print_error(&_LC78, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_78, 0);
         pcVar4 = local_78;
         if (local_78 != (char*)0x0) {
            LOCK();
            plVar10 = (long*)( local_78 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_78 = (char*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
            }

         }

         lVar2 = local_80;
         if (local_80 != 0) {
            LOCK();
            plVar10 = (long*)( local_80 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_80 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010bce0;
      }

      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0010bd20;
         LAB_0010bd10:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0010bd20:uVar7 = 4;
            goto LAB_0010bcd5;
         }

         if (in_R8D == 1) goto LAB_0010bd10;
         lVar9 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar9) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar11 = pVVar11 + lVar9 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar12 & 1 ) != 0) {
         pVVar12 = *(Variant**)( pVVar12 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 0);
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = 0;
      }

      Variant::Variant((Variant*)local_48, pVVar11);
      iVar6 = ( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)local_48);
      Variant::Variant((Variant*)local_68, iVar6);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_68[0];
      *(undefined8*)( param_1 + 8 ) = local_60;
      *(undefined8*)( param_1 + 0x10 ) = uStack_58;
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

   }
 else {
      uVar7 = 3;
      LAB_0010bcd5:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_0010bce0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Variant, Array const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTR<Variant,Array_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char *pcVar5;
   char cVar6;
   undefined4 uVar7;
   long *plVar8;
   long lVar9;
   undefined4 in_register_00000014;
   long *plVar10;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar11;
   Variant *pVVar12;
   long in_FS_OFFSET;
   long local_78;
   long local_70;
   char *local_68;
   undefined8 local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC78, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0);
         pcVar5 = local_68;
         if (local_68 != (char*)0x0) {
            LOCK();
            plVar10 = (long*)( local_68 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_68 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         lVar2 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar10 = (long*)( local_70 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010c0a0;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0010c0f0;
         LAB_0010c0e0:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0010c0f0:uVar7 = 4;
            goto LAB_0010c095;
         }

         if (in_R8D == 1) goto LAB_0010c0e0;
         lVar9 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar9) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar11 = pVVar11 + lVar9 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar12 & 1 ) != 0) {
         pVVar12 = *(Variant**)( pVVar12 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
      }

      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar11, 0x1c);
      uVar4 = _LC82;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_Array((Variant*)&local_68);
      ( *(code*)pVVar12 )(local_58, (Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_68);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      Array::~Array((Array*)&local_68);
   }
 else {
      uVar7 = 3;
      LAB_0010c095:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_0010c0a0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindT<Vector<unsigned char> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<Vector<unsigned_char>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char *pcVar5;
   char cVar6;
   undefined4 uVar7;
   long *plVar8;
   long lVar9;
   undefined4 in_register_00000014;
   long *plVar10;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar11;
   Variant *pVVar12;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   long local_40;
   long local_30;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC78, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0);
         pcVar5 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar10 = (long*)( local_48 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         lVar2 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar10 = (long*)( local_50 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010c4f0;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0010c540;
         LAB_0010c530:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0010c540:uVar7 = 4;
            goto LAB_0010c4e5;
         }

         if (in_R8D == 1) goto LAB_0010c530;
         lVar9 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar9) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar11 = pVVar11 + lVar9 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar12 & 1 ) != 0) {
         pVVar12 = *(Variant**)( pVVar12 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
      }

      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar11, 0x1d);
      uVar4 = _LC85;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_Vector((Variant*)&local_48);
      ( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ));
      lVar2 = local_40;
      if (local_40 != 0) {
         LOCK();
         plVar10 = (long*)( local_40 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_40 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

   }
 else {
      uVar7 = 3;
      LAB_0010c4e5:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_0010c4f0:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<Variant const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<Variant_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
   long *plVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 uVar5;
   long lVar6;
   int iVar7;
   long in_FS_OFFSET;
   long local_70;
   undefined8 local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar7 = *param_2;
   if (iVar7 == param_1) {
      local_70 = 0;
      local_68 = 0;
      local_40 = 0x20006;
      local_50 = 0;
      local_48 = 0;
      local_60 = (undefined1[16])0x0;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      *(undefined4*)param_3 = (undefined4)local_68;
      lVar2 = *(long*)( param_3 + 8 );
      if (lVar2 != local_60._0_8_) {
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( param_3 + 8 );
               *(undefined8*)( param_3 + 8 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         *(undefined8*)( param_3 + 8 ) = local_60._0_8_;
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_60._8_8_;
         local_60 = auVar4 << 0x40;
      }

      if (*(long*)( param_3 + 0x10 ) != local_60._8_8_) {
         StringName::unref();
         uVar5 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( param_3 + 0x10 ) = uVar5;
      }

      lVar6 = local_48;
      *(undefined4*)( param_3 + 0x18 ) = (undefined4)local_50;
      lVar2 = *(long*)( param_3 + 0x20 );
      if (lVar2 == local_48) {
         *(undefined4*)( param_3 + 0x28 ) = local_40;
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

      }
 else {
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( param_3 + 0x20 );
               *(undefined8*)( param_3 + 0x20 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         *(long*)( param_3 + 0x20 ) = local_48;
         *(undefined4*)( param_3 + 0x28 ) = local_40;
      }

      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }

      uVar5 = local_60._0_8_;
      if (local_60._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_60._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_60._8_8_;
            local_60 = auVar3 << 0x40;
            Memory::free_static((void*)( uVar5 + -0x10 ), false);
         }

      }

      iVar7 = *param_2;
   }

   *param_2 = iVar7 + 1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTR<Variant, Variant const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Variant,Variant_const&>::_gen_argument_type_info(int param_1) {
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   int local_5c;
   long local_58;
   undefined1 local_50[16];
   undefined8 local_40;
   undefined8 local_38;
   undefined4 local_30;
   long local_20;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   if (in_EDX == 0) {
      local_40 = 0;
      local_38 = 0;
      local_30 = 6;
      local_5c = 0;
      local_50 = (undefined1[16])0x0;
      call_get_argument_type_info_helper<Variant_const&>(0, &local_5c, (PropertyInfo*)&local_58);
      *puVar1 = (undefined4)local_58;
      *(undefined8*)( puVar1 + 2 ) = local_50._0_8_;
      *(undefined8*)( puVar1 + 4 ) = local_50._8_8_;
      puVar1[6] = (undefined4)local_40;
      *(undefined8*)( puVar1 + 8 ) = local_38;
      puVar1[10] = local_30;
   }
 else {
      *puVar1 = 0;
      puVar1[6] = 0;
      *(undefined8*)( puVar1 + 8 ) = 0;
      puVar1[10] = 0x20006;
      *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
      StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
         StringName::unref();
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Error, Variant const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Error,Variant_const&>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   ulong uVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   long local_78;
   ulong local_70;
   char *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX == 0) {
      local_68 = (char*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      local_60 = (undefined1[16])0x0;
      call_get_argument_type_info_helper<Variant_const&>(0, (int*)&local_70, (PropertyInfo*)&local_68);
      *puVar4 = local_68._0_4_;
      *(undefined8*)( puVar4 + 2 ) = local_60._0_8_;
      *(undefined8*)( puVar4 + 4 ) = local_60._8_8_;
      puVar4[6] = (undefined4)local_50;
      *(undefined8*)( puVar4 + 8 ) = local_48;
      puVar4[10] = local_40;
   }
 else {
      local_78 = 0;
      local_68 = "Error";
      local_60._8_8_ = local_60._0_8_;
      local_60._0_8_ = 5;
      String::parse_latin1((StrRange*)&local_78);
      godot::details::enum_qualified_name_to_class_info_name((details*)&local_70, (String*)&local_78);
      StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
      *puVar4 = 2;
      puVar4[6] = 0;
      *(undefined8*)( puVar4 + 8 ) = 0;
      puVar4[10] = 0x10006;
      *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_68);
      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

      uVar3 = local_70;
      lVar2 = local_78;
      if (local_70 != 0) {
         LOCK();
         plVar1 = (long*)( local_70 - 0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( uVar3 - 0x10 ), false);
            lVar2 = local_78;
         }

      }

      local_78 = lVar2;
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_78 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar4;
}
/* WARNING: Control flow encountered bad instruction data *//* PackedDataContainer::~PackedDataContainer() */void PackedDataContainer::~PackedDataContainer(PackedDataContainer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PackedDataContainerRef::~PackedDataContainerRef() */void PackedDataContainerRef::~PackedDataContainerRef(PackedDataContainerRef *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Error, Variant const&>::~MethodBindTR() */void MethodBindTR<Error,Variant_const&>::~MethodBindTR(MethodBindTR<Error,Variant_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Variant, Array const&>::~MethodBindTR() */void MethodBindTR<Variant,Array_const&>::~MethodBindTR(MethodBindTR<Variant,Array_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Variant, Variant const&>::~MethodBindTR() */void MethodBindTR<Variant,Variant_const&>::~MethodBindTR(MethodBindTR<Variant,Variant_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Vector<unsigned char>>::~MethodBindTRC() */void MethodBindTRC<Vector<unsigned_char>>::~MethodBindTRC(MethodBindTRC<Vector<unsigned_char>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Vector<unsigned char> const&>::~MethodBindT() */void MethodBindT<Vector<unsigned_char>const&>::~MethodBindT(MethodBindT<Vector<unsigned_char>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<PackedDataContainer::DictKey, DefaultAllocator>::~List() */void List<PackedDataContainer::DictKey,DefaultAllocator>::~List(List<PackedDataContainer::DictKey,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<Variant, DefaultAllocator>::~List() */void List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

