/* MeshLibrary::get_last_unused_item_id() const */int MeshLibrary::get_last_unused_item_id(MeshLibrary *this) {
   long lVar1;
   code *pcVar2;
   long lVar3;
   if (*(int*)( this + 0x250 ) == 0) {
      return *(int*)( this + 0x250 );
   }

   if (*(long*)( this + 0x240 ) != 0) {
      lVar1 = *(long*)( *(long*)( this + 0x240 ) + 0x10 );
      if (lVar1 != *(long*)( this + 0x248 )) {
         do {
            lVar3 = lVar1;
            lVar1 = *(long*)( lVar3 + 8 );
         }
 while ( *(long*)( this + 0x248 ) != lVar1 );
         return *(int*)( lVar3 + 0x30 ) + 1;
      }

   }

   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* CowData<int>::_copy_on_write() [clone .isra.0] */void CowData<int>::_copy_on_write(CowData<int> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   __n = lVar2 * 4;
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
      puVar4[1] = lVar2;
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
/* MeshLibrary::find_item_by_name(String const&) const */undefined4 MeshLibrary::find_item_by_name(MeshLibrary *this, String *param_1) {
   long lVar1;
   char cVar2;
   long lVar3;
   if (*(long*)( this + 0x240 ) == 0) {
      return 0xffffffff;
   }

   lVar1 = *(long*)( *(long*)( this + 0x240 ) + 0x10 );
   if (*(long*)( this + 0x248 ) != lVar1) {
      do {
         lVar3 = lVar1;
         lVar1 = *(long*)( lVar3 + 0x10 );
      }
 while ( *(long*)( this + 0x248 ) != *(long*)( lVar3 + 0x10 ) );
      cVar2 = String::operator ==((String*)( lVar3 + 0x38 ), param_1);
      while (true) {
         if (cVar2 != '\0') {
            return *(undefined4*)( lVar3 + 0x30 );
         }

         lVar3 = *(long*)( lVar3 + 0x20 );
         if (lVar3 == 0) break;
         cVar2 = String::operator ==((String*)( lVar3 + 0x38 ), param_1);
      }
;
   }

   return 0xffffffff;
}
/* CowData<int>::_ref(CowData<int> const&) [clone .part.0] */void CowData<int>::_ref(CowData<int> *this, CowData *param_1) {
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
/* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */void List<PropertyInfo,DefaultAllocator>::push_back(List<PropertyInfo,DefaultAllocator> *this, PropertyInfo *param_1) {
   long *plVar1;
   long lVar2;
   undefined4 *puVar3;
   undefined1(*pauVar4)[16];
   if (*(long*)this == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])this = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar3 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   lVar2 = *(long*)( param_1 + 8 );
   *puVar3 = 0;
   puVar3[6] = 0;
   puVar3[10] = 6;
   *(undefined8*)( puVar3 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
   *puVar3 = *(undefined4*)param_1;
   if (lVar2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)( param_1 + 8 ));
   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)( param_1 + 0x10 ));
   puVar3[6] = *(undefined4*)( param_1 + 0x18 );
   if (*(long*)( puVar3 + 8 ) != *(long*)( param_1 + 0x20 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)( param_1 + 0x20 ));
   }

   puVar3[10] = *(undefined4*)( param_1 + 0x28 );
   plVar1 = *(long**)this;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar3 + 0xc ) = 0;
   *(long**)( puVar3 + 0x10 ) = plVar1;
   *(long*)( puVar3 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar3;
   }

   plVar1[1] = (long)puVar3;
   if (*plVar1 != 0) {
      *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
      return;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   *plVar1 = (long)puVar3;
   return;
}
/* MeshLibrary::has_item(int) const */undefined8 MeshLibrary::has_item(MeshLibrary *this, int param_1) {
   long lVar1;
   lVar1 = *(long*)( this + 0x240 );
   if (lVar1 != 0) {
      while (lVar1 = *(long*)( lVar1 + 0x10 ),*(long*)( this + 0x248 ) != lVar1) {
         while (*(int*)( lVar1 + 0x30 ) <= param_1) {
            if (param_1 <= *(int*)( lVar1 + 0x30 )) {
               return 1;
            }

            lVar1 = *(long*)( lVar1 + 8 );
            if (*(long*)( this + 0x248 ) == lVar1) {
               return 0;
            }

         }
;
      }
;
   }

   return 0;
}
/* MeshLibrary::MeshLibrary() */void MeshLibrary::MeshLibrary(MeshLibrary *this) {
   Resource::Resource((Resource*)this);
   *(undefined8*)( this + 0x240 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_0011bb50;
   *(undefined4*)( this + 0x250 ) = 0;
   *(undefined8**)( this + 0x248 ) = &_GlobalNilClass::_nil;
   return;
}
/* MeshLibrary::get_item_name(int) const */StrRange *MeshLibrary::get_item_name(int param_1) {
   long lVar1;
   code *pcVar2;
   long lVar3;
   int in_EDX;
   long in_RSI;
   long lVar4;
   undefined4 in_register_0000003c;
   StrRange *this;
   long in_FS_OFFSET;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   this(StrRange * CONCAT44(in_register_0000003c, param_1));
   lVar1 = *(long*)( in_RSI + 0x248 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 0x240 ) != 0) {
      lVar4 = *(long*)( *(long*)( in_RSI + 0x240 ) + 0x10 );
      for (lVar3 = lVar4; lVar1 != lVar3; lVar3 = *(long*)( lVar3 + 0x10 )) {
         while (*(int*)( lVar3 + 0x30 ) <= in_EDX) {
            if (in_EDX <= *(int*)( lVar3 + 0x30 )) goto LAB_00100601;
            lVar3 = *(long*)( lVar3 + 8 );
            if (lVar1 == lVar3) goto LAB_00100515;
         }
;
      }

   }

   LAB_00100515:local_50 = 0;
   local_48 = &_LC21;
   local_40 = 2;
   String::parse_latin1((StrRange*)&local_50);
   itos((long)local_60);
   operator+((char *)
   local_58,(String*)"Requested for nonexistent MeshLibrary item \'";
   String::operator +((String*)&local_48, (String*)local_58);
   _err_print_error("get_item_name", "scene/resources/3d/mesh_library.cpp", 0xd8, "Condition \"!item_map.has(p_item)\" is true. Returning: \"\"", (String*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref(local_58);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   *(undefined8*)this = 0;
   local_40 = 0;
   local_48 = &_LC10;
   String::parse_latin1(this);
   LAB_0010065b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
   LAB_00100601:if (in_EDX < *(int*)( lVar4 + 0x30 )) {
      lVar4 = *(long*)( lVar4 + 0x10 );
   }
 else {
      if (in_EDX <= *(int*)( lVar4 + 0x30 )) {
         *(undefined8*)this = 0;
         if (*(long*)( lVar4 + 0x38 ) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)this, (CowData*)( lVar4 + 0x38 ));
         }

         goto LAB_0010065b;
      }

      lVar4 = *(long*)( lVar4 + 8 );
   }

   if (lVar1 == lVar4) {
      _err_print_error("operator[]", "./core/templates/rb_map.h", 0x2a8, "FATAL: Condition \"!e\" is true.", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   goto LAB_00100601;
}
/* MeshLibrary::get_item_mesh(int) const */long *MeshLibrary::get_item_mesh(int param_1) {
   long lVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   long lVar5;
   int in_EDX;
   long in_RSI;
   undefined4 in_register_0000003c;
   long *plVar6;
   long in_FS_OFFSET;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   plVar6 = (long*)CONCAT44(in_register_0000003c, param_1);
   lVar1 = *(long*)( in_RSI + 0x248 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 0x240 ) != 0) {
      lVar5 = *(long*)( *(long*)( in_RSI + 0x240 ) + 0x10 );
      for (lVar4 = lVar5; lVar1 != lVar4; lVar4 = *(long*)( lVar4 + 0x10 )) {
         while (*(int*)( lVar4 + 0x30 ) <= in_EDX) {
            if (in_EDX <= *(int*)( lVar4 + 0x30 )) goto LAB_001007d9;
            lVar4 = *(long*)( lVar4 + 8 );
            if (lVar1 == lVar4) goto LAB_001006e5;
         }
;
      }

   }

   LAB_001006e5:local_50 = 0;
   local_48 = &_LC21;
   local_40 = 2;
   String::parse_latin1((StrRange*)&local_50);
   itos((long)local_60);
   operator+((char *)
   local_58,(String*)"Requested for nonexistent MeshLibrary item \'";
   String::operator +((String*)&local_48, (String*)local_58);
   _err_print_error("get_item_mesh", "scene/resources/3d/mesh_library.cpp", 0xdd, "Condition \"!item_map.has(p_item)\" is true. Returning: Ref<Mesh>()", (String*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref(local_58);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   *plVar6 = 0;
   LAB_001007a8:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return plVar6;
   LAB_001007d9:if (in_EDX < *(int*)( lVar5 + 0x30 )) {
      lVar5 = *(long*)( lVar5 + 0x10 );
   }
 else {
      if (in_EDX <= *(int*)( lVar5 + 0x30 )) {
         *plVar6 = 0;
         if (*(long*)( lVar5 + 0x40 ) != 0) {
            *plVar6 = *(long*)( lVar5 + 0x40 );
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
               *plVar6 = 0;
            }

         }

         goto LAB_001007a8;
      }

      lVar5 = *(long*)( lVar5 + 8 );
   }

   if (lVar1 == lVar5) {
      _err_print_error("operator[]", "./core/templates/rb_map.h", 0x2a8, "FATAL: Condition \"!e\" is true.", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   goto LAB_001007d9;
}
/* MeshLibrary::get_item_mesh_transform(int) const */undefined1(*)[16];MeshLibrary::get_item_mesh_transform(int param_1) {
   long lVar1;
   code *pcVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   uint uVar8;
   long lVar9;
   long lVar10;
   int in_EDX;
   long in_RSI;
   undefined4 in_register_0000003c;
   undefined1(*pauVar11)[16];
   long in_FS_OFFSET;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   pauVar11 = (undefined1(*) [16])CONCAT44(in_register_0000003c, param_1);
   lVar1 = *(long*)( in_RSI + 0x248 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 0x240 ) != 0) {
      lVar10 = *(long*)( *(long*)( in_RSI + 0x240 ) + 0x10 );
      for (lVar9 = lVar10; lVar1 != lVar9; lVar9 = *(long*)( lVar9 + 0x10 )) {
         while (*(int*)( lVar9 + 0x30 ) <= in_EDX) {
            if (in_EDX <= *(int*)( lVar9 + 0x30 )) goto LAB_001009a1;
            lVar9 = *(long*)( lVar9 + 8 );
            if (lVar1 == lVar9) goto LAB_001008b5;
         }
;
      }

   }

   LAB_001008b5:local_50 = 0;
   local_48 = &_LC21;
   local_40 = 2;
   String::parse_latin1((StrRange*)&local_50);
   itos((long)local_60);
   operator+((char *)
   local_58,(String*)"Requested for nonexistent MeshLibrary item \'";
   String::operator +((String*)&local_48, (String*)local_58);
   _err_print_error("get_item_mesh_transform", "scene/resources/3d/mesh_library.cpp", 0xe2, "Condition \"!item_map.has(p_item)\" is true. Returning: Transform3D()", (String*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref(local_58);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   uVar8 = _LC33;
   *(undefined4*)pauVar11[2] = 0x3f800000;
   *(undefined8*)( pauVar11[2] + 4 ) = 0;
   *(undefined4*)( pauVar11[2] + 0xc ) = 0;
   *pauVar11 = ZEXT416(uVar8);
   pauVar11[1] = ZEXT416(uVar8);
   LAB_001009fb:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pauVar11;
   LAB_001009a1:if (in_EDX < *(int*)( lVar10 + 0x30 )) {
      lVar10 = *(long*)( lVar10 + 0x10 );
   }
 else {
      if (in_EDX <= *(int*)( lVar10 + 0x30 )) {
         uVar3 = *(undefined8*)( lVar10 + 0x50 );
         uVar4 = *(undefined8*)( lVar10 + 0x58 );
         uVar5 = *(undefined8*)( lVar10 + 0x60 );
         uVar6 = *(undefined8*)( lVar10 + 0x68 );
         uVar7 = *(undefined8*)( lVar10 + 0x70 );
         *(undefined8*)*pauVar11 = *(undefined8*)( lVar10 + 0x48 );
         *(undefined8*)( *pauVar11 + 8 ) = uVar3;
         *(undefined8*)pauVar11[1] = uVar4;
         *(undefined8*)( pauVar11[1] + 8 ) = uVar5;
         *(undefined8*)pauVar11[2] = uVar6;
         *(undefined8*)( pauVar11[2] + 8 ) = uVar7;
         goto LAB_001009fb;
      }

      lVar10 = *(long*)( lVar10 + 8 );
   }

   if (lVar1 == lVar10) {
      _err_print_error("operator[]", "./core/templates/rb_map.h", 0x2a8, "FATAL: Condition \"!e\" is true.", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   goto LAB_001009a1;
}
/* MeshLibrary::get_item_mesh_cast_shadow(int) const */undefined4 MeshLibrary::get_item_mesh_cast_shadow(MeshLibrary *this, int param_1) {
   long lVar1;
   code *pcVar2;
   undefined4 uVar3;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   lVar1 = *(long*)( this + 0x248 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x240 ) != 0) {
      lVar5 = *(long*)( *(long*)( this + 0x240 ) + 0x10 );
      for (lVar4 = lVar5; lVar1 != lVar4; lVar4 = *(long*)( lVar4 + 0x10 )) {
         while (*(int*)( lVar4 + 0x30 ) <= param_1) {
            if (param_1 <= *(int*)( lVar4 + 0x30 )) goto LAB_00100b49;
            lVar4 = *(long*)( lVar4 + 8 );
            if (lVar1 == lVar4) goto LAB_00100a7d;
         }
;
      }

   }

   LAB_00100a7d:local_50 = 0;
   local_48 = &_LC21;
   local_40 = 2;
   String::parse_latin1((StrRange*)&local_50);
   itos((long)local_60);
   operator+((char *)
   local_58,(String*)"Requested for nonexistent MeshLibrary item \'";
   String::operator +((String*)&local_48, (String*)local_58);
   _err_print_error("get_item_mesh_cast_shadow", "scene/resources/3d/mesh_library.cpp", 0xe7, "Condition \"!item_map.has(p_item)\" is true. Returning: RenderingServer::ShadowCastingSetting::SHADOW_CASTING_SETTING_ON", (String*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref(local_58);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   uVar3 = 1;
   LAB_00100b8b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
   LAB_00100b49:if (param_1 < *(int*)( lVar5 + 0x30 )) {
      lVar5 = *(long*)( lVar5 + 0x10 );
   }
 else {
      if (param_1 <= *(int*)( lVar5 + 0x30 )) {
         uVar3 = *(undefined4*)( lVar5 + 0x78 );
         goto LAB_00100b8b;
      }

      lVar5 = *(long*)( lVar5 + 8 );
   }

   if (lVar1 == lVar5) {
      _err_print_error("operator[]", "./core/templates/rb_map.h", 0x2a8, "FATAL: Condition \"!e\" is true.", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   goto LAB_00100b49;
}
/* MeshLibrary::get_item_navigation_mesh(int) const */long *MeshLibrary::get_item_navigation_mesh(int param_1) {
   long lVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   long lVar5;
   int in_EDX;
   long in_RSI;
   undefined4 in_register_0000003c;
   long *plVar6;
   long in_FS_OFFSET;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   plVar6 = (long*)CONCAT44(in_register_0000003c, param_1);
   lVar1 = *(long*)( in_RSI + 0x248 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 0x240 ) != 0) {
      lVar5 = *(long*)( *(long*)( in_RSI + 0x240 ) + 0x10 );
      for (lVar4 = lVar5; lVar1 != lVar4; lVar4 = *(long*)( lVar4 + 0x10 )) {
         while (*(int*)( lVar4 + 0x30 ) <= in_EDX) {
            if (in_EDX <= *(int*)( lVar4 + 0x30 )) goto LAB_00100d09;
            lVar4 = *(long*)( lVar4 + 8 );
            if (lVar1 == lVar4) goto LAB_00100c15;
         }
;
      }

   }

   LAB_00100c15:local_50 = 0;
   local_48 = &_LC21;
   local_40 = 2;
   String::parse_latin1((StrRange*)&local_50);
   itos((long)local_60);
   operator+((char *)
   local_58,(String*)"Requested for nonexistent MeshLibrary item \'";
   String::operator +((String*)&local_48, (String*)local_58);
   _err_print_error("get_item_navigation_mesh", "scene/resources/3d/mesh_library.cpp", 0xf1, "Condition \"!item_map.has(p_item)\" is true. Returning: Ref<NavigationMesh>()", (String*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref(local_58);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   *plVar6 = 0;
   LAB_00100cd8:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return plVar6;
   LAB_00100d09:if (in_EDX < *(int*)( lVar5 + 0x30 )) {
      lVar5 = *(long*)( lVar5 + 0x10 );
   }
 else {
      if (in_EDX <= *(int*)( lVar5 + 0x30 )) {
         *plVar6 = 0;
         if (*(long*)( lVar5 + 0x98 ) != 0) {
            *plVar6 = *(long*)( lVar5 + 0x98 );
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
               *plVar6 = 0;
            }

         }

         goto LAB_00100cd8;
      }

      lVar5 = *(long*)( lVar5 + 8 );
   }

   if (lVar1 == lVar5) {
      _err_print_error("operator[]", "./core/templates/rb_map.h", 0x2a8, "FATAL: Condition \"!e\" is true.", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   goto LAB_00100d09;
}
/* MeshLibrary::get_item_navigation_mesh_transform(int) const */undefined1(*)[16];MeshLibrary::get_item_navigation_mesh_transform(int param_1) {
   long lVar1;
   code *pcVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   uint uVar8;
   long lVar9;
   long lVar10;
   int in_EDX;
   long in_RSI;
   undefined4 in_register_0000003c;
   undefined1(*pauVar11)[16];
   long in_FS_OFFSET;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   pauVar11 = (undefined1(*) [16])CONCAT44(in_register_0000003c, param_1);
   lVar1 = *(long*)( in_RSI + 0x248 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 0x240 ) != 0) {
      lVar10 = *(long*)( *(long*)( in_RSI + 0x240 ) + 0x10 );
      for (lVar9 = lVar10; lVar1 != lVar9; lVar9 = *(long*)( lVar9 + 0x10 )) {
         while (*(int*)( lVar9 + 0x30 ) <= in_EDX) {
            if (in_EDX <= *(int*)( lVar9 + 0x30 )) goto LAB_00100ee1;
            lVar9 = *(long*)( lVar9 + 8 );
            if (lVar1 == lVar9) goto LAB_00100df5;
         }
;
      }

   }

   LAB_00100df5:local_50 = 0;
   local_48 = &_LC21;
   local_40 = 2;
   String::parse_latin1((StrRange*)&local_50);
   itos((long)local_60);
   operator+((char *)
   local_58,(String*)"Requested for nonexistent MeshLibrary item \'";
   String::operator +((String*)&local_48, (String*)local_58);
   _err_print_error("get_item_navigation_mesh_transform", "scene/resources/3d/mesh_library.cpp", 0xf6, "Condition \"!item_map.has(p_item)\" is true. Returning: Transform3D()", (String*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref(local_58);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   uVar8 = _LC33;
   *(undefined4*)pauVar11[2] = 0x3f800000;
   *(undefined8*)( pauVar11[2] + 4 ) = 0;
   *(undefined4*)( pauVar11[2] + 0xc ) = 0;
   *pauVar11 = ZEXT416(uVar8);
   pauVar11[1] = ZEXT416(uVar8);
   LAB_00100f44:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pauVar11;
   LAB_00100ee1:if (in_EDX < *(int*)( lVar10 + 0x30 )) {
      lVar10 = *(long*)( lVar10 + 0x10 );
   }
 else {
      if (in_EDX <= *(int*)( lVar10 + 0x30 )) {
         uVar3 = *(undefined8*)( lVar10 + 0xa8 );
         uVar4 = *(undefined8*)( lVar10 + 0xb0 );
         uVar5 = *(undefined8*)( lVar10 + 0xb8 );
         uVar6 = *(undefined8*)( lVar10 + 0xc0 );
         uVar7 = *(undefined8*)( lVar10 + 200 );
         *(undefined8*)*pauVar11 = *(undefined8*)( lVar10 + 0xa0 );
         *(undefined8*)( *pauVar11 + 8 ) = uVar3;
         *(undefined8*)pauVar11[1] = uVar4;
         *(undefined8*)( pauVar11[1] + 8 ) = uVar5;
         *(undefined8*)pauVar11[2] = uVar6;
         *(undefined8*)( pauVar11[2] + 8 ) = uVar7;
         goto LAB_00100f44;
      }

      lVar10 = *(long*)( lVar10 + 8 );
   }

   if (lVar1 == lVar10) {
      _err_print_error("operator[]", "./core/templates/rb_map.h", 0x2a8, "FATAL: Condition \"!e\" is true.", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   goto LAB_00100ee1;
}
/* MeshLibrary::get_item_navigation_layers(int) const */undefined4 MeshLibrary::get_item_navigation_layers(MeshLibrary *this, int param_1) {
   long lVar1;
   code *pcVar2;
   undefined4 uVar3;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   lVar1 = *(long*)( this + 0x248 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x240 ) != 0) {
      lVar5 = *(long*)( *(long*)( this + 0x240 ) + 0x10 );
      for (lVar4 = lVar5; lVar1 != lVar4; lVar4 = *(long*)( lVar4 + 0x10 )) {
         while (*(int*)( lVar4 + 0x30 ) <= param_1) {
            if (param_1 <= *(int*)( lVar4 + 0x30 )) goto LAB_00101099;
            lVar4 = *(long*)( lVar4 + 8 );
            if (lVar1 == lVar4) goto LAB_00100fcd;
         }
;
      }

   }

   LAB_00100fcd:local_50 = 0;
   local_48 = &_LC21;
   local_40 = 2;
   String::parse_latin1((StrRange*)&local_50);
   itos((long)local_60);
   operator+((char *)
   local_58,(String*)"Requested for nonexistent MeshLibrary item \'";
   String::operator +((String*)&local_48, (String*)local_58);
   _err_print_error("get_item_navigation_layers", "scene/resources/3d/mesh_library.cpp", 0xfb, "Condition \"!item_map.has(p_item)\" is true. Returning: 0", (String*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref(local_58);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   uVar3 = 0;
   LAB_001010de:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
   LAB_00101099:if (param_1 < *(int*)( lVar5 + 0x30 )) {
      lVar5 = *(long*)( lVar5 + 0x10 );
   }
 else {
      if (param_1 <= *(int*)( lVar5 + 0x30 )) {
         uVar3 = *(undefined4*)( lVar5 + 0xd0 );
         goto LAB_001010de;
      }

      lVar5 = *(long*)( lVar5 + 8 );
   }

   if (lVar1 == lVar5) {
      _err_print_error("operator[]", "./core/templates/rb_map.h", 0x2a8, "FATAL: Condition \"!e\" is true.", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   goto LAB_00101099;
}
/* MeshLibrary::get_item_preview(int) const */long *MeshLibrary::get_item_preview(int param_1) {
   long lVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   long lVar5;
   int in_EDX;
   long in_RSI;
   undefined4 in_register_0000003c;
   long *plVar6;
   long in_FS_OFFSET;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   plVar6 = (long*)CONCAT44(in_register_0000003c, param_1);
   lVar1 = *(long*)( in_RSI + 0x248 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 0x240 ) != 0) {
      lVar5 = *(long*)( *(long*)( in_RSI + 0x240 ) + 0x10 );
      for (lVar4 = lVar5; lVar1 != lVar4; lVar4 = *(long*)( lVar4 + 0x10 )) {
         while (*(int*)( lVar4 + 0x30 ) <= in_EDX) {
            if (in_EDX <= *(int*)( lVar4 + 0x30 )) goto LAB_00101259;
            lVar4 = *(long*)( lVar4 + 8 );
            if (lVar1 == lVar4) goto LAB_00101165;
         }
;
      }

   }

   LAB_00101165:local_50 = 0;
   local_48 = &_LC21;
   local_40 = 2;
   String::parse_latin1((StrRange*)&local_50);
   itos((long)local_60);
   operator+((char *)
   local_58,(String*)"Requested for nonexistent MeshLibrary item \'";
   String::operator +((String*)&local_48, (String*)local_58);
   _err_print_error("get_item_preview", "scene/resources/3d/mesh_library.cpp", 0x100, "Condition \"!item_map.has(p_item)\" is true. Returning: Ref<Texture2D>()", (String*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref(local_58);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   *plVar6 = 0;
   LAB_00101228:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return plVar6;
   LAB_00101259:if (in_EDX < *(int*)( lVar5 + 0x30 )) {
      lVar5 = *(long*)( lVar5 + 0x10 );
   }
 else {
      if (in_EDX <= *(int*)( lVar5 + 0x30 )) {
         *plVar6 = 0;
         if (*(long*)( lVar5 + 0x90 ) != 0) {
            *plVar6 = *(long*)( lVar5 + 0x90 );
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
               *plVar6 = 0;
            }

         }

         goto LAB_00101228;
      }

      lVar5 = *(long*)( lVar5 + 8 );
   }

   if (lVar1 == lVar5) {
      _err_print_error("operator[]", "./core/templates/rb_map.h", 0x2a8, "FATAL: Condition \"!e\" is true.", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   goto LAB_00101259;
}
/* MeshLibrary::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */void MeshLibrary::_get_property_list(MeshLibrary *this, List *param_1) {
   long lVar1;
   long *plVar2;
   undefined4 *puVar3;
   undefined1(*pauVar4)[16];
   long in_FS_OFFSET;
   long local_b8;
   String local_a8[8];
   undefined8 local_a0;
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
   if (( *(long*)( this + 0x240 ) != 0 ) && ( lVar1 = *(long*)( *(long*)( this + 0x240 ) + 0x10 ) * (long*)( this + 0x248 ) != lVar1 )) {
      do {
         local_b8 = lVar1;
         lVar1 = *(long*)( local_b8 + 0x10 );
      }
 while ( *(long*)( this + 0x248 ) != *(long*)( local_b8 + 0x10 ) );
      do {
         local_80 = 0;
         local_78 = "%s/%d/";
         local_70 = 6;
         String::parse_latin1((StrRange*)&local_80);
         vformat<char_const*,int>(local_a8, (char*)&local_80, 0x108194);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         local_78 = "";
         local_88 = 0;
         local_90 = 0;
         local_70 = 0;
         String::parse_latin1((StrRange*)&local_90);
         local_78 = "name";
         local_a0 = 0;
         local_70 = 4;
         String::parse_latin1((StrRange*)&local_a0);
         String::operator +((String*)&local_98, local_a8);
         local_78 = (char*)CONCAT44(local_78._4_4_, 4);
         local_70 = 0;
         if (local_98 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
         }

         local_68 = 0;
         local_60 = 0;
         local_58 = 0;
         if (local_90 == 0) {
            LAB_00102963:local_50 = 6;
            StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
            lVar1 = *(long*)param_1;
         }
 else {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
            local_50 = 6;
            if (local_60 != 0x11) goto LAB_00102963;
            StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
            if (local_68 == local_80) {
               if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
                  StringName::unref();
               }

            }
 else {
               StringName::unref();
               local_68 = local_80;
            }

            lVar1 = *(long*)param_1;
         }

         if (lVar1 == 0) {
            pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])param_1 = pauVar4;
            *(undefined4*)pauVar4[1] = 0;
            *pauVar4 = (undefined1[16])0x0;
         }

         puVar3 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
         *(undefined8*)( puVar3 + 8 ) = 0;
         *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
         *puVar3 = 0;
         puVar3[6] = 0;
         puVar3[10] = 6;
         *(undefined8*)( puVar3 + 0x10 ) = 0;
         *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
         *puVar3 = local_78._0_4_;
         if (local_70 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)&local_70);
         }

         StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_68);
         puVar3[6] = local_60;
         if (*(long*)( puVar3 + 8 ) != local_58) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
         }

         puVar3[10] = local_50;
         plVar2 = *(long**)param_1;
         lVar1 = plVar2[1];
         *(undefined8*)( puVar3 + 0xc ) = 0;
         *(long**)( puVar3 + 0x10 ) = plVar2;
         *(long*)( puVar3 + 0xe ) = lVar1;
         if (lVar1 != 0) {
            *(undefined4**)( lVar1 + 0x30 ) = puVar3;
         }

         plVar2[1] = (long)puVar3;
         if (*plVar2 == 0) {
            *plVar2 = (long)puVar3;
         }

         *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
            StringName::unref();
         }

         local_88 = 0;
         local_78 = "Mesh";
         local_90 = 0;
         local_70 = 4;
         String::parse_latin1((StrRange*)&local_90);
         local_78 = "mesh";
         local_a0 = 0;
         local_70 = 4;
         String::parse_latin1((StrRange*)&local_a0);
         String::operator +((String*)&local_98, local_a8);
         local_78 = (char*)CONCAT44(local_78._4_4_, 0x18);
         local_70 = 0;
         if (local_98 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
         }

         local_68 = 0;
         local_60 = 0x11;
         local_58 = 0;
         if (local_90 == 0) {
            LAB_001027de:local_50 = 6;
            StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
            if (local_68 == local_80) {
               if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
                  StringName::unref();
               }

            }
 else {
               StringName::unref();
               local_68 = local_80;
            }

         }
 else {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
            local_50 = 6;
            if (local_60 == 0x11) goto LAB_001027de;
            StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
         }

         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
            StringName::unref();
         }

         local_88 = 0;
         local_78 = "suffix:m";
         local_90 = 0;
         local_70 = 8;
         String::parse_latin1((StrRange*)&local_90);
         local_78 = "mesh_transform";
         local_a0 = 0;
         local_70 = 0xe;
         String::parse_latin1((StrRange*)&local_a0);
         String::operator +((String*)&local_98, local_a8);
         local_78 = (char*)CONCAT44(local_78._4_4_, 0x12);
         local_70 = 0;
         if (local_98 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
         }

         local_68 = 0;
         local_60 = 0;
         local_58 = 0;
         if (local_90 == 0) {
            LAB_001029b3:local_50 = 6;
            StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
            lVar1 = *(long*)param_1;
         }
 else {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
            local_50 = 6;
            if (local_60 != 0x11) goto LAB_001029b3;
            StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
            if (local_68 == local_80) {
               if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
                  StringName::unref();
               }

            }
 else {
               StringName::unref();
               local_68 = local_80;
            }

            lVar1 = *(long*)param_1;
         }

         if (lVar1 == 0) {
            pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])param_1 = pauVar4;
            *(undefined4*)pauVar4[1] = 0;
            *pauVar4 = (undefined1[16])0x0;
         }

         puVar3 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
         *(undefined8*)( puVar3 + 8 ) = 0;
         *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
         *puVar3 = 0;
         puVar3[6] = 0;
         puVar3[10] = 6;
         *(undefined8*)( puVar3 + 0x10 ) = 0;
         *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
         *puVar3 = local_78._0_4_;
         if (local_70 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)&local_70);
         }

         StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_68);
         puVar3[6] = local_60;
         if (*(long*)( puVar3 + 8 ) != local_58) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
         }

         puVar3[10] = local_50;
         plVar2 = *(long**)param_1;
         lVar1 = plVar2[1];
         *(undefined8*)( puVar3 + 0xc ) = 0;
         *(long**)( puVar3 + 0x10 ) = plVar2;
         *(long*)( puVar3 + 0xe ) = lVar1;
         if (lVar1 != 0) {
            *(undefined4**)( lVar1 + 0x30 ) = puVar3;
         }

         plVar2[1] = (long)puVar3;
         if (*plVar2 == 0) {
            *plVar2 = (long)puVar3;
         }

         *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
            StringName::unref();
         }

         local_88 = 0;
         local_78 = "Off,On,Double-Sided,Shadows Only";
         local_90 = 0;
         local_70 = 0x20;
         String::parse_latin1((StrRange*)&local_90);
         local_78 = "mesh_cast_shadow";
         local_a0 = 0;
         local_70 = 0x10;
         String::parse_latin1((StrRange*)&local_a0);
         String::operator +((String*)&local_98, local_a8);
         local_78 = (char*)CONCAT44(local_78._4_4_, 2);
         local_70 = 0;
         if (local_98 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
         }

         local_68 = 0;
         local_60 = 2;
         local_58 = 0;
         if (local_90 == 0) {
            LAB_00102913:local_50 = 6;
            StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
            lVar1 = *(long*)param_1;
         }
 else {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
            local_50 = 6;
            if (local_60 != 0x11) goto LAB_00102913;
            StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
            if (local_68 == local_80) {
               if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
                  StringName::unref();
               }

            }
 else {
               StringName::unref();
               local_68 = local_80;
            }

            lVar1 = *(long*)param_1;
         }

         if (lVar1 == 0) {
            pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])param_1 = pauVar4;
            *(undefined4*)pauVar4[1] = 0;
            *pauVar4 = (undefined1[16])0x0;
         }

         puVar3 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
         *(undefined8*)( puVar3 + 8 ) = 0;
         *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
         *puVar3 = 0;
         puVar3[6] = 0;
         puVar3[10] = 6;
         *(undefined8*)( puVar3 + 0x10 ) = 0;
         *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
         *puVar3 = local_78._0_4_;
         if (local_70 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)&local_70);
         }

         StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_68);
         puVar3[6] = local_60;
         if (*(long*)( puVar3 + 8 ) != local_58) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
         }

         puVar3[10] = local_50;
         plVar2 = *(long**)param_1;
         lVar1 = plVar2[1];
         *(undefined8*)( puVar3 + 0xc ) = 0;
         *(long**)( puVar3 + 0x10 ) = plVar2;
         *(long*)( puVar3 + 0xe ) = lVar1;
         if (lVar1 != 0) {
            *(undefined4**)( lVar1 + 0x30 ) = puVar3;
         }

         plVar2[1] = (long)puVar3;
         if (*plVar2 == 0) {
            *plVar2 = (long)puVar3;
         }

         *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
            StringName::unref();
         }

         local_88 = 0;
         local_78 = "";
         local_90 = 0;
         local_70 = 0;
         String::parse_latin1((StrRange*)&local_90);
         local_78 = "shapes";
         local_a0 = 0;
         local_70 = 6;
         String::parse_latin1((StrRange*)&local_a0);
         String::operator +((String*)&local_98, local_a8);
         local_78 = (char*)CONCAT44(local_78._4_4_, 0x1c);
         local_70 = 0;
         if (local_98 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
         }

         local_68 = 0;
         local_60 = 0;
         local_58 = 0;
         if (local_90 == 0) {
            LAB_001028c3:local_50 = 6;
            StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
            lVar1 = *(long*)param_1;
         }
 else {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
            local_50 = 6;
            if (local_60 != 0x11) goto LAB_001028c3;
            StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
            if (local_68 == local_80) {
               if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
                  StringName::unref();
               }

            }
 else {
               StringName::unref();
               local_68 = local_80;
            }

            lVar1 = *(long*)param_1;
         }

         if (lVar1 == 0) {
            pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])param_1 = pauVar4;
            *(undefined4*)pauVar4[1] = 0;
            *pauVar4 = (undefined1[16])0x0;
         }

         puVar3 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
         *(undefined8*)( puVar3 + 8 ) = 0;
         *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
         *puVar3 = 0;
         puVar3[6] = 0;
         puVar3[10] = 6;
         *(undefined8*)( puVar3 + 0x10 ) = 0;
         *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
         *puVar3 = local_78._0_4_;
         if (local_70 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)&local_70);
         }

         StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_68);
         puVar3[6] = local_60;
         if (*(long*)( puVar3 + 8 ) != local_58) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
         }

         puVar3[10] = local_50;
         plVar2 = *(long**)param_1;
         lVar1 = plVar2[1];
         *(undefined8*)( puVar3 + 0xc ) = 0;
         *(long**)( puVar3 + 0x10 ) = plVar2;
         *(long*)( puVar3 + 0xe ) = lVar1;
         if (lVar1 != 0) {
            *(undefined4**)( lVar1 + 0x30 ) = puVar3;
         }

         plVar2[1] = (long)puVar3;
         if (*plVar2 == 0) {
            *plVar2 = (long)puVar3;
         }

         *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
            StringName::unref();
         }

         local_88 = 0;
         local_78 = "NavigationMesh";
         local_90 = 0;
         local_70 = 0xe;
         String::parse_latin1((StrRange*)&local_90);
         local_78 = "navigation_mesh";
         local_a0 = 0;
         local_70 = 0xf;
         String::parse_latin1((StrRange*)&local_a0);
         String::operator +((String*)&local_98, local_a8);
         local_78 = (char*)CONCAT44(local_78._4_4_, 0x18);
         local_70 = 0;
         if (local_98 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
         }

         local_68 = 0;
         local_60 = 0x11;
         local_58 = 0;
         if (local_90 == 0) {
            LAB_00102a7b:local_50 = 6;
            StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
            if (local_68 == local_80) {
               if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
                  StringName::unref();
               }

               goto LAB_00101c19;
            }

            StringName::unref();
            lVar1 = *(long*)param_1;
            local_68 = local_80;
         }
 else {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
            local_50 = 6;
            if (local_60 == 0x11) goto LAB_00102a7b;
            StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
            LAB_00101c19:lVar1 = *(long*)param_1;
         }

         if (lVar1 == 0) {
            pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])param_1 = pauVar4;
            *(undefined4*)pauVar4[1] = 0;
            *pauVar4 = (undefined1[16])0x0;
         }

         puVar3 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
         *(undefined8*)( puVar3 + 8 ) = 0;
         *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
         *puVar3 = 0;
         puVar3[6] = 0;
         puVar3[10] = 6;
         *(undefined8*)( puVar3 + 0x10 ) = 0;
         *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
         *puVar3 = local_78._0_4_;
         if (local_70 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)&local_70);
         }

         StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_68);
         puVar3[6] = local_60;
         if (*(long*)( puVar3 + 8 ) != local_58) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
         }

         puVar3[10] = local_50;
         plVar2 = *(long**)param_1;
         lVar1 = plVar2[1];
         *(undefined8*)( puVar3 + 0xc ) = 0;
         *(long**)( puVar3 + 0x10 ) = plVar2;
         *(long*)( puVar3 + 0xe ) = lVar1;
         if (lVar1 != 0) {
            *(undefined4**)( lVar1 + 0x30 ) = puVar3;
         }

         plVar2[1] = (long)puVar3;
         if (*plVar2 == 0) {
            *plVar2 = (long)puVar3;
         }

         *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
            StringName::unref();
         }

         local_88 = 0;
         local_78 = "suffix:m";
         local_90 = 0;
         local_70 = 8;
         String::parse_latin1((StrRange*)&local_90);
         local_78 = "navigation_mesh_transform";
         local_a0 = 0;
         local_70 = 0x19;
         String::parse_latin1((StrRange*)&local_a0);
         String::operator +((String*)&local_98, local_a8);
         local_78 = (char*)CONCAT44(local_78._4_4_, 0x12);
         local_70 = 0;
         if (local_98 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
         }

         local_68 = 0;
         local_60 = 0;
         local_58 = 0;
         if (local_90 == 0) {
            LAB_00102873:local_50 = 6;
            StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
            lVar1 = *(long*)param_1;
         }
 else {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
            local_50 = 6;
            if (local_60 != 0x11) goto LAB_00102873;
            StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
            if (local_68 == local_80) {
               if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
                  StringName::unref();
               }

            }
 else {
               StringName::unref();
               local_68 = local_80;
            }

            lVar1 = *(long*)param_1;
         }

         if (lVar1 == 0) {
            pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])param_1 = pauVar4;
            *(undefined4*)pauVar4[1] = 0;
            *pauVar4 = (undefined1[16])0x0;
         }

         puVar3 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
         *(undefined8*)( puVar3 + 8 ) = 0;
         *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
         *puVar3 = 0;
         puVar3[6] = 0;
         puVar3[10] = 6;
         *(undefined8*)( puVar3 + 0x10 ) = 0;
         *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
         *puVar3 = local_78._0_4_;
         if (local_70 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)&local_70);
         }

         StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_68);
         puVar3[6] = local_60;
         if (*(long*)( puVar3 + 8 ) != local_58) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
         }

         puVar3[10] = local_50;
         plVar2 = *(long**)param_1;
         lVar1 = plVar2[1];
         *(undefined8*)( puVar3 + 0xc ) = 0;
         *(long**)( puVar3 + 0x10 ) = plVar2;
         *(long*)( puVar3 + 0xe ) = lVar1;
         if (lVar1 != 0) {
            *(undefined4**)( lVar1 + 0x30 ) = puVar3;
         }

         plVar2[1] = (long)puVar3;
         if (*plVar2 == 0) {
            *plVar2 = (long)puVar3;
         }

         *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
            StringName::unref();
         }

         local_88 = 0;
         local_78 = "";
         local_90 = 0;
         local_70 = 0;
         String::parse_latin1((StrRange*)&local_90);
         local_78 = "navigation_layers";
         local_a0 = 0;
         local_70 = 0x11;
         String::parse_latin1((StrRange*)&local_a0);
         String::operator +((String*)&local_98, local_a8);
         local_78 = (char*)CONCAT44(local_78._4_4_, 2);
         local_70 = 0;
         if (local_98 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
         }

         local_68 = 0;
         local_60 = 0xc;
         local_58 = 0;
         if (local_90 == 0) {
            LAB_00102823:local_50 = 6;
            StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
            lVar1 = *(long*)param_1;
         }
 else {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
            local_50 = 6;
            if (local_60 != 0x11) goto LAB_00102823;
            StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
            if (local_68 == local_80) {
               if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
                  StringName::unref();
               }

            }
 else {
               StringName::unref();
               local_68 = local_80;
            }

            lVar1 = *(long*)param_1;
         }

         if (lVar1 == 0) {
            pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])param_1 = pauVar4;
            *(undefined4*)pauVar4[1] = 0;
            *pauVar4 = (undefined1[16])0x0;
         }

         puVar3 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
         *(undefined8*)( puVar3 + 8 ) = 0;
         *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
         *puVar3 = 0;
         puVar3[6] = 0;
         puVar3[10] = 6;
         *(undefined8*)( puVar3 + 0x10 ) = 0;
         *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
         *puVar3 = local_78._0_4_;
         if (local_70 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)&local_70);
         }

         StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_68);
         puVar3[6] = local_60;
         if (*(long*)( puVar3 + 8 ) != local_58) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
         }

         puVar3[10] = local_50;
         plVar2 = *(long**)param_1;
         lVar1 = plVar2[1];
         *(undefined8*)( puVar3 + 0xc ) = 0;
         *(long**)( puVar3 + 0x10 ) = plVar2;
         *(long*)( puVar3 + 0xe ) = lVar1;
         if (lVar1 != 0) {
            *(undefined4**)( lVar1 + 0x30 ) = puVar3;
         }

         plVar2[1] = (long)puVar3;
         if (*plVar2 == 0) {
            *plVar2 = (long)puVar3;
         }

         *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
            StringName::unref();
         }

         local_88 = 0;
         local_78 = "Texture2D";
         local_90 = 0;
         local_70 = 9;
         String::parse_latin1((StrRange*)&local_90);
         local_78 = "preview";
         local_a0 = 0;
         local_70 = 7;
         String::parse_latin1((StrRange*)&local_a0);
         String::operator +((String*)&local_98, local_a8);
         local_78 = (char*)CONCAT44(local_78._4_4_, 0x18);
         local_70 = 0;
         if (local_98 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
         }

         local_68 = 0;
         local_60 = 0x11;
         local_58 = 0;
         if (local_90 == 0) {
            LAB_00102a03:local_50 = 6;
            StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
            if (local_68 == local_80) {
               if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
                  StringName::unref();
               }

               goto LAB_001022fa;
            }

            StringName::unref();
            lVar1 = *(long*)param_1;
            local_68 = local_80;
         }
 else {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
            local_50 = 6;
            if (local_60 == 0x11) goto LAB_00102a03;
            StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
            LAB_001022fa:lVar1 = *(long*)param_1;
         }

         if (lVar1 == 0) {
            pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])param_1 = pauVar4;
            *(undefined4*)pauVar4[1] = 0;
            *pauVar4 = (undefined1[16])0x0;
         }

         puVar3 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
         *(undefined8*)( puVar3 + 8 ) = 0;
         *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
         *puVar3 = 0;
         puVar3[6] = 0;
         puVar3[10] = 6;
         *(undefined8*)( puVar3 + 0x10 ) = 0;
         *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
         *puVar3 = local_78._0_4_;
         if (local_70 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)&local_70);
         }

         StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_68);
         puVar3[6] = local_60;
         if (*(long*)( puVar3 + 8 ) != local_58) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
         }

         puVar3[10] = local_50;
         plVar2 = *(long**)param_1;
         lVar1 = plVar2[1];
         *(undefined8*)( puVar3 + 0xc ) = 0;
         *(long**)( puVar3 + 0x10 ) = plVar2;
         *(long*)( puVar3 + 0xe ) = lVar1;
         if (lVar1 != 0) {
            *(undefined4**)( lVar1 + 0x30 ) = puVar3;
         }

         plVar2[1] = (long)puVar3;
         if (*plVar2 == 0) {
            *plVar2 = (long)puVar3;
         }

         *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
         local_b8 = *(long*)( local_b8 + 0x20 );
      }
 while ( local_b8 != 0 );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MeshLibrary::_bind_methods() */void MeshLibrary::_bind_methods(void) {
   MethodBind *pMVar1;
   uint uVar2;
   long in_FS_OFFSET;
   MethodDefinition local_1a8[32];
   undefined *local_188;
   undefined8 local_180;
   undefined *local_178;
   char *pcStack_170;
   undefined8 local_168;
   undefined *local_158;
   char *pcStack_150;
   undefined8 local_148;
   undefined *local_138;
   char *pcStack_130;
   undefined8 local_128;
   undefined *local_118;
   char *pcStack_110;
   undefined8 local_108;
   undefined *local_f8;
   char *pcStack_f0;
   undefined8 local_e8;
   undefined *local_d8;
   char *pcStack_d0;
   undefined8 local_c8;
   undefined *local_b8;
   char *pcStack_b0;
   undefined8 local_a8;
   undefined *local_98;
   undefined *puStack_90;
   undefined8 local_88;
   undefined *local_78;
   undefined *puStack_70;
   undefined8 local_68;
   undefined **local_58;
   undefined1 auStack_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = &local_188;
   local_180 = 0;
   local_188 = &_LC62;
   uVar2 = ( uint ) & local_58;
   D_METHODP((char*)local_1a8, (char***)"create_item", uVar2);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar1 = create_method_bind<MeshLibrary,int>(create_item);
   ClassDB::bind_methodfi(1, pMVar1, false, local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_1a8);
   local_68 = 0;
   local_78 = &_LC62;
   puStack_70 = &_LC48;
   auStack_50._0_8_ = &puStack_70;
   local_58 = &local_78;
   D_METHODP((char*)local_1a8, (char***)"set_item_name", uVar2);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar1 = create_method_bind<MeshLibrary,int,String_const&>(set_item_name);
   ClassDB::bind_methodfi(1, pMVar1, false, local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_1a8);
   local_88 = 0;
   local_98 = &_LC62;
   puStack_90 = &_LC50;
   auStack_50._0_8_ = &puStack_90;
   local_58 = &local_98;
   D_METHODP((char*)local_1a8, (char***)"set_item_mesh", uVar2);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar1 = create_method_bind<MeshLibrary,int,Ref<Mesh>const&>(set_item_mesh);
   ClassDB::bind_methodfi(1, pMVar1, false, local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_1a8);
   local_a8 = 0;
   local_b8 = &_LC62;
   pcStack_b0 = "mesh_transform";
   auStack_50._0_8_ = &pcStack_b0;
   local_58 = &local_b8;
   D_METHODP((char*)local_1a8, (char***)"set_item_mesh_transform", uVar2);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar1 = create_method_bind<MeshLibrary,int,Transform3D_const&>(set_item_mesh_transform);
   ClassDB::bind_methodfi(1, pMVar1, false, local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_1a8);
   local_c8 = 0;
   local_d8 = &_LC62;
   pcStack_d0 = "shadow_casting_setting";
   auStack_50._0_8_ = &pcStack_d0;
   local_58 = &local_d8;
   D_METHODP((char*)local_1a8, (char***)"set_item_mesh_cast_shadow", uVar2);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar1 = create_method_bind<MeshLibrary,int,RenderingServer::ShadowCastingSetting>(set_item_mesh_cast_shadow);
   ClassDB::bind_methodfi(1, pMVar1, false, local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_1a8);
   local_e8 = 0;
   local_f8 = &_LC62;
   pcStack_f0 = "navigation_mesh";
   auStack_50._0_8_ = &pcStack_f0;
   local_58 = &local_f8;
   D_METHODP((char*)local_1a8, (char***)"set_item_navigation_mesh", uVar2);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar1 = create_method_bind<MeshLibrary,int,Ref<NavigationMesh>const&>(set_item_navigation_mesh);
   ClassDB::bind_methodfi(1, pMVar1, false, local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_1a8);
   local_108 = 0;
   local_118 = &_LC62;
   pcStack_110 = "navigation_mesh";
   auStack_50._0_8_ = &pcStack_110;
   local_58 = &local_118;
   D_METHODP((char*)local_1a8, (char***)"set_item_navigation_mesh_transform", uVar2);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar1 = create_method_bind<MeshLibrary,int,Transform3D_const&>(set_item_navigation_mesh_transform);
   ClassDB::bind_methodfi(1, pMVar1, false, local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_1a8);
   local_128 = 0;
   local_138 = &_LC62;
   pcStack_130 = "navigation_layers";
   auStack_50._0_8_ = &pcStack_130;
   local_58 = &local_138;
   D_METHODP((char*)local_1a8, (char***)"set_item_navigation_layers", uVar2);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar1 = create_method_bind<MeshLibrary,int,unsigned_int>(set_item_navigation_layers);
   ClassDB::bind_methodfi(1, pMVar1, false, local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_1a8);
   local_148 = 0;
   local_158 = &_LC62;
   pcStack_150 = "shapes";
   auStack_50._0_8_ = &pcStack_150;
   local_58 = &local_158;
   D_METHODP((char*)local_1a8, (char***)"set_item_shapes", uVar2);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar1 = create_method_bind<MeshLibrary,int,Array_const&>(_set_item_shapes);
   ClassDB::bind_methodfi(1, pMVar1, false, local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_1a8);
   local_168 = 0;
   local_178 = &_LC62;
   pcStack_170 = "texture";
   auStack_50._0_8_ = &pcStack_170;
   local_58 = &local_178;
   D_METHODP((char*)local_1a8, (char***)"set_item_preview", uVar2);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar1 = create_method_bind<MeshLibrary,int,Ref<Texture2D>const&>(set_item_preview);
   ClassDB::bind_methodfi(1, pMVar1, false, local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_1a8);
   local_78 = &_LC62;
   puStack_70 = (undefined*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)local_1a8, (char***)"get_item_name", uVar2);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar1 = create_method_bind<MeshLibrary,String,int>(get_item_name);
   ClassDB::bind_methodfi(1, pMVar1, false, local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_1a8);
   local_78 = &_LC62;
   puStack_70 = (undefined*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)local_1a8, (char***)"get_item_mesh", uVar2);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar1 = create_method_bind<MeshLibrary,Ref<Mesh>,int>(get_item_mesh);
   ClassDB::bind_methodfi(1, pMVar1, false, local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_1a8);
   local_78 = &_LC62;
   puStack_70 = (undefined*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)local_1a8, (char***)"get_item_mesh_transform", uVar2);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar1 = create_method_bind<MeshLibrary,Transform3D,int>(get_item_mesh_transform);
   ClassDB::bind_methodfi(1, pMVar1, false, local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_1a8);
   local_78 = &_LC62;
   puStack_70 = (undefined*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)local_1a8, (char***)"get_item_mesh_cast_shadow", uVar2);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar1 = create_method_bind<MeshLibrary,RenderingServer::ShadowCastingSetting,int>(get_item_mesh_cast_shadow);
   ClassDB::bind_methodfi(1, pMVar1, false, local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_1a8);
   local_78 = &_LC62;
   puStack_70 = (undefined*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)local_1a8, (char***)"get_item_navigation_mesh", uVar2);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar1 = create_method_bind<MeshLibrary,Ref<NavigationMesh>,int>(get_item_navigation_mesh);
   ClassDB::bind_methodfi(1, pMVar1, false, local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_1a8);
   local_78 = &_LC62;
   puStack_70 = (undefined*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)local_1a8, (char***)"get_item_navigation_mesh_transform", uVar2);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar1 = create_method_bind<MeshLibrary,Transform3D,int>(get_item_navigation_mesh_transform);
   ClassDB::bind_methodfi(1, pMVar1, false, local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_1a8);
   local_78 = &_LC62;
   puStack_70 = (undefined*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)local_1a8, (char***)"get_item_navigation_layers", uVar2);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar1 = create_method_bind<MeshLibrary,unsigned_int,int>(get_item_navigation_layers);
   ClassDB::bind_methodfi(1, pMVar1, false, local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_1a8);
   local_78 = &_LC62;
   puStack_70 = (undefined*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)local_1a8, (char***)"get_item_shapes", uVar2);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar1 = create_method_bind<MeshLibrary,Array,int>(_get_item_shapes);
   ClassDB::bind_methodfi(1, pMVar1, false, local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_1a8);
   local_78 = &_LC62;
   puStack_70 = (undefined*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)local_1a8, (char***)"get_item_preview", uVar2);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar1 = create_method_bind<MeshLibrary,Ref<Texture2D>,int>(get_item_preview);
   ClassDB::bind_methodfi(1, pMVar1, false, local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_1a8);
   local_78 = &_LC62;
   puStack_70 = (undefined*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)local_1a8, (char***)"remove_item", uVar2);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar1 = create_method_bind<MeshLibrary,int>(remove_item);
   ClassDB::bind_methodfi(1, pMVar1, false, local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_1a8);
   local_78 = &_LC48;
   puStack_70 = (undefined*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)local_1a8, (char***)"find_item_by_name", uVar2);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar1 = create_method_bind<MeshLibrary,int,String_const&>(find_item_by_name);
   ClassDB::bind_methodfi(1, pMVar1, false, local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_1a8);
   D_METHODP((char*)local_1a8, (char***)"clear", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar1 = create_method_bind<MeshLibrary>(clear);
   ClassDB::bind_methodfi(1, pMVar1, false, local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_1a8);
   D_METHODP((char*)local_1a8, (char***)"get_item_list", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar1 = create_method_bind<MeshLibrary,Vector<int>>(get_item_list);
   ClassDB::bind_methodfi(1, pMVar1, false, local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_1a8);
   D_METHODP((char*)local_1a8, (char***)"get_last_unused_item_id", 0);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar1 = create_method_bind<MeshLibrary,int>(get_last_unused_item_id);
   ClassDB::bind_methodfi(1, pMVar1, false, local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_1a8);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MeshLibrary::get_item_list() const */void MeshLibrary::get_item_list(void) {
   undefined4 uVar1;
   code *pcVar2;
   undefined8 *puVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long in_RSI;
   long in_RDI;
   ulong uVar7;
   lVar5 = (long)*(int*)( in_RSI + 0x250 );
   *(undefined8*)( in_RDI + 8 ) = 0;
   if (lVar5 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
   }
 else if (lVar5 != 0) {
      CowData<int>::_copy_on_write((CowData<int>*)( in_RDI + 8 ));
      uVar7 = lVar5 * 4 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      puVar3 = (undefined8*)Memory::alloc_static(( uVar7 | uVar7 >> 0x20 ) + 0x11, false);
      if (puVar3 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
      }
 else {
         *puVar3 = 1;
         *(undefined8**)( in_RDI + 8 ) = puVar3 + 2;
         puVar3[1] = lVar5;
      }

   }

   if (*(long*)( in_RSI + 0x240 ) != 0) {
      lVar5 = *(long*)( *(long*)( in_RSI + 0x240 ) + 0x10 );
      if (lVar5 != *(long*)( in_RSI + 0x248 )) {
         do {
            lVar4 = lVar5;
            lVar5 = *(long*)( lVar4 + 0x10 );
         }
 while ( *(long*)( in_RSI + 0x248 ) != *(long*)( lVar4 + 0x10 ) );
         lVar5 = *(long*)( in_RDI + 8 );
         lVar6 = 0;
         do {
            uVar1 = *(undefined4*)( lVar4 + 0x30 );
            if (lVar5 == 0) {
               lVar5 = 0;
               LAB_00103f8b:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar6, lVar5, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            lVar5 = *(long*)( lVar5 + -8 );
            if (lVar5 <= lVar6) goto LAB_00103f8b;
            CowData<int>::_copy_on_write((CowData<int>*)( in_RDI + 8 ));
            lVar5 = *(long*)( in_RDI + 8 );
            lVar4 = *(long*)( lVar4 + 0x20 );
            *(undefined4*)( lVar5 + lVar6 * 4 ) = uVar1;
            lVar6 = lVar6 + 1;
         }
 while ( lVar4 != 0 );
      }

   }

   return;
}
/* CowData<MeshLibrary::ShapeData>::_ref(CowData<MeshLibrary::ShapeData> const&) [clone .part.0] */void CowData<MeshLibrary::ShapeData>::_ref(CowData<MeshLibrary::ShapeData> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   _unref(this);
   if (*(long*)param_1 != 0) {
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
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
/* MeshLibrary::get_item_shapes(int) const */long MeshLibrary::get_item_shapes(int param_1) {
   long lVar1;
   code *pcVar2;
   long lVar3;
   int in_EDX;
   long in_RSI;
   long lVar4;
   undefined4 in_register_0000003c;
   long lVar5;
   long in_FS_OFFSET;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   lVar5 = CONCAT44(in_register_0000003c, param_1);
   lVar1 = *(long*)( in_RSI + 0x248 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 0x240 ) != 0) {
      lVar4 = *(long*)( *(long*)( in_RSI + 0x240 ) + 0x10 );
      for (lVar3 = lVar4; lVar1 != lVar3; lVar3 = *(long*)( lVar3 + 0x10 )) {
         while (*(int*)( lVar3 + 0x30 ) <= in_EDX) {
            if (in_EDX <= *(int*)( lVar3 + 0x30 )) goto LAB_001041c1;
            lVar3 = *(long*)( lVar3 + 8 );
            if (lVar1 == lVar3) goto LAB_001040f5;
         }
;
      }

   }

   LAB_001040f5:local_50 = 0;
   local_48 = &_LC21;
   local_40 = 2;
   String::parse_latin1((StrRange*)&local_50);
   itos((long)local_60);
   operator+((char *)
   local_58,(String*)"Requested for nonexistent MeshLibrary item \'";
   String::operator +((String*)&local_48, (String*)local_58);
   _err_print_error("get_item_shapes", "scene/resources/3d/mesh_library.cpp", 0xec, "Condition \"!item_map.has(p_item)\" is true. Returning: Vector<ShapeData>()", (String*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref(local_58);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   *(undefined8*)( lVar5 + 8 ) = 0;
   LAB_00104222:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return lVar5;
   LAB_001041c1:if (in_EDX < *(int*)( lVar4 + 0x30 )) {
      lVar4 = *(long*)( lVar4 + 0x10 );
   }
 else {
      if (in_EDX <= *(int*)( lVar4 + 0x30 )) {
         *(undefined8*)( lVar5 + 8 ) = 0;
         if (*(long*)( lVar4 + 0x88 ) != 0) {
            CowData<MeshLibrary::ShapeData>::_ref((CowData<MeshLibrary::ShapeData>*)( lVar5 + 8 ), (CowData*)( lVar4 + 0x88 ));
         }

         goto LAB_00104222;
      }

      lVar4 = *(long*)( lVar4 + 8 );
   }

   if (lVar1 == lVar4) {
      _err_print_error("operator[]", "./core/templates/rb_map.h", 0x2a8, "FATAL: Condition \"!e\" is true.", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   goto LAB_001041c1;
}
/* MeshLibrary::_get_item_shapes(int) const */Array *MeshLibrary::_get_item_shapes(int param_1) {
   code *pcVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   Array *this;
   Transform3D *pTVar3;
   long in_FS_OFFSET;
   undefined1 auStack_68[8];
   long local_60;
   int local_58[6];
   long local_40;
   this(Array * CONCAT44(in_register_0000003c, param_1));
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   get_item_shapes((int)auStack_68);
   Array::Array(this);
   if (local_60 != 0) {
      pTVar3 = (Transform3D*)( local_60 + 8 );
      for (lVar2 = 0; lVar2 < *(long*)( local_60 + -8 ); lVar2 = lVar2 + 1) {
         Variant::Variant((Variant*)local_58, *(Object**)( pTVar3 + -8 ));
         Array::push_back((Variant*)this);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (*(long*)( local_60 + -8 ) <= lVar2) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar2, *(long*)( local_60 + -8 ), "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }

         Variant::Variant((Variant*)local_58, pTVar3);
         Array::push_back((Variant*)this);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         pTVar3 = pTVar3 + 0x38;
      }

   }

   CowData<MeshLibrary::ShapeData>::_unref((CowData<MeshLibrary::ShapeData>*)&local_60);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MeshLibrary::_get(StringName const&, Variant&) const */char MeshLibrary::_get(MeshLibrary *this, StringName *param_1, Variant *param_2) {
   Object *pOVar1;
   char cVar2;
   int iVar3;
   uint uVar4;
   long lVar5;
   int iVar6;
   wchar32 wVar7;
   long in_FS_OFFSET;
   Transform3D *local_c0;
   undefined8 local_b8;
   String local_b0[8];
   Object *local_a8;
   size_t local_a0;
   int local_98[8];
   int local_78[2];
   undefined8 local_70;
   undefined8 uStack_68;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar5 = *(long*)param_1;
   if (lVar5 != 0) {
      pOVar1 = *(Object**)( lVar5 + 8 );
      local_b8 = 0;
      if (pOVar1 != (Object*)0x0) {
         local_a0 = strlen((char*)pOVar1);
         local_a8 = pOVar1;
         String::parse_latin1((StrRange*)&local_b8);
         goto LAB_00104425;
      }

      if (*(long*)( lVar5 + 0x10 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)( lVar5 + 0x10 ));
         goto LAB_00104425;
      }

   }

   local_b8 = 0;
   LAB_00104425:iVar6 = (int)(CowData<char32_t>*)&local_b8;
   wVar7 = (wchar32)(CowData<char32_t>*)&local_a8;
   String::get_slicec(wVar7, iVar6);
   iVar3 = String::to_int();
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   lVar5 = *(long*)( this + 0x240 );
   if (lVar5 != 0) {
      while (lVar5 = *(long*)( lVar5 + 0x10 ),*(long*)( this + 0x248 ) != lVar5) {
         while (*(int*)( lVar5 + 0x30 ) <= iVar3) {
            if (iVar3 <= *(int*)( lVar5 + 0x30 )) {
               String::get_slicec((wchar32)local_b0, iVar6);
               cVar2 = String::operator ==(local_b0, "name");
               if (cVar2 == '\0') {
                  cVar2 = String::operator ==(local_b0, "mesh");
                  if (cVar2 != '\0') {
                     get_item_mesh(wVar7);
                     pOVar1 = local_a8;
                     Variant::Variant((Variant*)local_78, local_a8);
                     Variant::operator =(param_2, (Variant*)local_78);
                     if (Variant::needs_deinit[local_78[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (( ( pOVar1 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
                     Memory::free_static(pOVar1, false);
                  }

                  goto LAB_0010456d;
               }

               cVar2 = String::operator ==(local_b0, "mesh_transform");
               if (cVar2 != '\0') {
                  get_item_mesh_transform((int)local_78);
                  LAB_001046da:local_c0 = (Transform3D*)local_78;
                  Variant::Variant((Variant*)local_98, local_c0);
                  Variant::operator =(param_2, (Variant*)local_98);
                  cVar2 = Variant::needs_deinit[local_98[0]];
                  joined_r0x00104707:if (cVar2 != '\0') {
                     Variant::_clear_internal();
                  }

                  goto LAB_0010456d;
               }

               cVar2 = String::operator ==(local_b0, "mesh_cast_shadow");
               if (cVar2 != '\0') {
                  iVar3 = get_item_mesh_cast_shadow(this, iVar3);
                  Variant::Variant((Variant*)local_78, iVar3);
                  LAB_00104694:Variant::operator =(param_2, (Variant*)local_78);
                  cVar2 = Variant::needs_deinit[local_78[0]];
                  goto joined_r0x00104707;
               }

               cVar2 = String::operator ==(local_b0, "shapes");
               if (cVar2 != '\0') {
                  _get_item_shapes(wVar7);
                  Variant::Variant((Variant*)local_78, (Array*)&local_a8);
                  Variant::operator =(param_2, (Variant*)local_78);
                  if (Variant::needs_deinit[local_78[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  Array::~Array((Array*)&local_a8);
                  goto LAB_0010456d;
               }

               cVar2 = String::operator ==(local_b0, "navigation_mesh");
               if (cVar2 != '\0') {
                  LAB_00104826:get_item_navigation_mesh(wVar7);
                  Variant::Variant((Variant*)local_78, local_a8);
                  Variant::operator =(param_2, (Variant*)local_78);
                  if (Variant::needs_deinit[local_78[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  Ref<NavigationMesh>::unref((Ref<NavigationMesh>*)&local_a8);
                  goto LAB_0010456d;
               }

               cVar2 = String::operator ==(local_b0, "navigation_mesh_transform");
               if (cVar2 != '\0') {
                  LAB_00104870:get_item_navigation_mesh_transform((int)local_78);
                  goto LAB_001046da;
               }

               cVar2 = String::operator ==(local_b0, "navmesh");
               if (cVar2 != '\0') goto LAB_00104826;
               cVar2 = String::operator ==(local_b0, "navmesh_transform");
               if (cVar2 != '\0') goto LAB_00104870;
               cVar2 = String::operator ==(local_b0, "navigation_layers");
               if (cVar2 != '\0') {
                  uVar4 = get_item_navigation_layers(this, iVar3);
                  Variant::Variant((Variant*)local_78, uVar4);
                  goto LAB_00104694;
               }

               cVar2 = String::operator ==(local_b0, "preview");
               if (cVar2 != '\0') {
                  get_item_preview(wVar7);
                  Variant::Variant((Variant*)local_78, local_a8);
                  Variant::operator =(param_2, (Variant*)local_78);
                  if (Variant::needs_deinit[local_78[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  Ref<Texture2D>::unref((Ref<Texture2D>*)&local_a8);
                  goto LAB_0010456d;
               }

            }
 else {
               get_item_name(wVar7);
               Variant::Variant((Variant*)local_78, (String*)&local_a8);
               if (Variant::needs_deinit[*(int*)param_2] != '\0') {
                  Variant::_clear_internal();
               }

               *(int*)param_2 = local_78[0];
               *(undefined8*)( param_2 + 8 ) = local_70;
               *(undefined8*)( param_2 + 0x10 ) = uStack_68;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
               LAB_0010456d:cVar2 = '\x01';
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)local_b0);
            goto LAB_0010457a;
         }
;
         lVar5 = *(long*)( lVar5 + 8 );
         if (*(long*)( this + 0x248 ) == lVar5) goto LAB_0010447a;
      }
;
   }

}
LAB_0010447a:_err_print_error(&_LC88, "scene/resources/3d/mesh_library.cpp", 0x67, "Condition \"!item_map.has(idx)\" is true. Returning: false", 0, 0);cVar2 = '\0';LAB_0010457a:CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return cVar2;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* CowData<MeshLibrary::ShapeData>::_copy_on_write() [clone .isra.0] */void CowData<MeshLibrary::ShapeData>::_copy_on_write(CowData<MeshLibrary::ShapeData> *this) {
   long lVar1;
   code *pcVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   char cVar8;
   undefined8 *puVar9;
   long *plVar10;
   ulong uVar11;
   long *plVar12;
   long lVar13;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar11 = 0x10;
   if (lVar1 * 0x38 != 0) {
      uVar11 = lVar1 * 0x38 - 1;
      uVar11 = uVar11 | uVar11 >> 1;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      uVar11 = ( uVar11 | uVar11 >> 0x20 ) + 0x11;
   }

   puVar9 = (undefined8*)Memory::alloc_static(uVar11, false);
   if (puVar9 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   lVar13 = 0;
   *puVar9 = 1;
   puVar9[1] = lVar1;
   plVar10 = puVar9 + 2;
   if (lVar1 != 0) {
      do {
         plVar12 = (long*)( (long)plVar10 + *(long*)this + ( -0x10 - (long)puVar9 ) );
         *plVar10 = 0;
         if (*plVar12 != 0) {
            *plVar10 = *plVar12;
            cVar8 = RefCounted::reference();
            if (cVar8 == '\0') {
               *plVar10 = 0;
            }

         }

         lVar3 = plVar12[2];
         lVar4 = plVar12[3];
         lVar5 = plVar12[4];
         lVar13 = lVar13 + 1;
         lVar6 = plVar12[5];
         lVar7 = plVar12[6];
         plVar10[1] = plVar12[1];
         plVar10[2] = lVar3;
         plVar10[3] = lVar4;
         plVar10[4] = lVar5;
         plVar10[5] = lVar6;
         plVar10[6] = lVar7;
         plVar10 = plVar10 + 7;
      }
 while ( lVar1 != lVar13 );
   }

   _unref(this);
   *(undefined8**)this = puVar9 + 2;
   return;
}
/* MeshLibrary::create_item(int) */void MeshLibrary::create_item(MeshLibrary *this, int param_1) {
   Object *pOVar1;
   char cVar2;
   CowData<char32_t> *this_00;
   long lVar3;
   undefined8 *puVar4;
   long in_FS_OFFSET;
   int local_cc;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined1 local_b8[16];
   undefined1 local_a8[16];
   uint local_98;
   undefined4 uStack_94;
   undefined8 uStack_90;
   undefined4 local_88;
   undefined1 local_60[16];
   undefined1 local_50[16];
   uint local_40;
   undefined4 uStack_3c;
   undefined8 uStack_38;
   undefined4 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_cc = param_1;
   if (param_1 < 0) {
      _err_print_error("create_item", "scene/resources/3d/mesh_library.cpp", 0x99, "Condition \"p_item < 0\" is true.", 0, 0);
   }
 else {
      lVar3 = *(long*)( this + 0x240 );
      if (lVar3 != 0) {
         while (lVar3 = *(long*)( lVar3 + 0x10 ),*(long*)( this + 0x248 ) != lVar3) {
            while (*(int*)( lVar3 + 0x30 ) <= param_1) {
               if (param_1 <= *(int*)( lVar3 + 0x30 )) {
                  _err_print_error("create_item", "scene/resources/3d/mesh_library.cpp", 0x9a, "Condition \"item_map.has(p_item)\" is true.", 0, 0);
                  goto LAB_00104c7e;
               }

               lVar3 = *(long*)( lVar3 + 8 );
               if (*(long*)( this + 0x248 ) == lVar3) goto LAB_00104b0d;
            }
;
         }
;
      }

      LAB_00104b0d:puVar4 = &local_c0;
      for (lVar3 = 0x13; lVar3 != 0; lVar3 = lVar3 + -1) {
         *puVar4 = 0;
         puVar4 = puVar4 + 1;
      }

      local_c8 = 0;
      local_88 = 1;
      local_30 = 1;
      local_b8 = ZEXT416(_LC33);
      local_a8 = ZEXT416(_LC33);
      local_98 = _LC33;
      local_60 = ZEXT416(_LC33);
      local_50 = ZEXT416(_LC33);
      local_40 = _LC33;
      this_00 = (CowData<char32_t>*)RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::operator []((RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>*)( this + 0x240 ), &local_cc);
      if (*(long*)this_00 != 0) {
         CowData<char32_t>::_unref(this_00);
         *(undefined8*)this_00 = 0;
      }

      pOVar1 = *(Object**)( this_00 + 8 );
      if (pOVar1 != (Object*)0x0) {
         *(undefined8*)( this_00 + 8 ) = 0;
         cVar2 = RefCounted::unreference();
         if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

      *(undefined4*)( this_00 + 0x40 ) = 1;
      *(undefined8*)( this_00 + 0x10 ) = local_b8._0_8_;
      *(undefined8*)( this_00 + 0x18 ) = local_b8._8_8_;
      *(undefined8*)( this_00 + 0x20 ) = local_a8._0_8_;
      *(undefined8*)( this_00 + 0x28 ) = local_a8._8_8_;
      *(ulong*)( this_00 + 0x30 ) = CONCAT44(uStack_94, local_98);
      *(undefined8*)( this_00 + 0x38 ) = uStack_90;
      if (*(long*)( this_00 + 0x50 ) != 0) {
         CowData<MeshLibrary::ShapeData>::_unref((CowData<MeshLibrary::ShapeData>*)( this_00 + 0x50 ));
         *(undefined8*)( this_00 + 0x50 ) = 0;
      }

      pOVar1 = *(Object**)( this_00 + 0x58 );
      if (pOVar1 != (Object*)0x0) {
         *(undefined8*)( this_00 + 0x58 ) = 0;
         cVar2 = RefCounted::unreference();
         if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

      pOVar1 = *(Object**)( this_00 + 0x60 );
      if (pOVar1 != (Object*)0x0) {
         *(undefined8*)( this_00 + 0x60 ) = 0;
         cVar2 = RefCounted::unreference();
         if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

      *(undefined4*)( this_00 + 0x98 ) = 1;
      *(undefined8*)( this_00 + 0x68 ) = local_60._0_8_;
      *(undefined8*)( this_00 + 0x70 ) = local_60._8_8_;
      *(undefined8*)( this_00 + 0x78 ) = local_50._0_8_;
      *(undefined8*)( this_00 + 0x80 ) = local_50._8_8_;
      *(ulong*)( this_00 + 0x88 ) = CONCAT44(uStack_3c, local_40);
      *(undefined8*)( this_00 + 0x90 ) = uStack_38;
      Item::~Item((Item*)&local_c8);
      Resource::emit_changed();
      Object::notify_property_list_changed();
   }

   LAB_00104c7e:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MeshLibrary::set_item_navigation_layers(int, unsigned int) */void MeshLibrary::set_item_navigation_layers(MeshLibrary *this, int param_1, uint param_2) {
   long lVar1;
   long lVar2;
   long lVar3;
   undefined8 *puVar4;
   long in_FS_OFFSET;
   int local_10c[3];
   CowData<char32_t> local_100[8];
   CowData<char32_t> local_f8[8];
   undefined8 local_f0;
   undefined *local_e8;
   undefined8 local_e0;
   undefined8 local_d8;
   undefined8 local_d0;
   undefined1 local_c8[16];
   undefined1 local_b8[16];
   uint local_a8;
   undefined4 local_98;
   undefined1 local_70[16];
   undefined1 local_60[16];
   uint local_50;
   undefined4 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = *(long*)( this + 0x248 );
   local_10c[0] = param_1;
   if (*(long*)( this + 0x240 ) != 0) {
      lVar1 = *(long*)( *(long*)( this + 0x240 ) + 0x10 );
      for (lVar3 = lVar1; lVar2 != lVar3; lVar3 = *(long*)( lVar3 + 8 )) {
         while (param_1 < *(int*)( lVar3 + 0x30 )) {
            lVar3 = *(long*)( lVar3 + 0x10 );
            if (lVar2 == lVar3) goto LAB_00104e05;
         }
;
         if (param_1 <= *(int*)( lVar3 + 0x30 )) goto LAB_00104ec9;
      }

   }

   LAB_00104e05:local_f0 = 0;
   local_e8 = &_LC21;
   local_e0 = 2;
   String::parse_latin1((StrRange*)&local_f0);
   itos((long)local_100);
   operator+((char *)
   local_f8,(String*)"Requested for nonexistent MeshLibrary item \'";
   String::operator +((String*)&local_e8, (String*)local_f8);
   _err_print_error("set_item_navigation_layers", "scene/resources/3d/mesh_library.cpp", 0xcc, "Condition \"!item_map.has(p_item)\" is true.", (String*)&local_e8, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref(local_f8);
   CowData<char32_t>::_unref(local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   goto LAB_00104f78;
   LAB_00104ec9:do {
      if (param_1 < *(int*)( lVar1 + 0x30 )) {
         lVar1 = *(long*)( lVar1 + 0x10 );
      }
 else {
         if (param_1 <= *(int*)( lVar1 + 0x30 )) goto LAB_00104f69;
         lVar1 = *(long*)( lVar1 + 8 );
      }

   }
 while ( lVar2 != lVar1 );
   puVar4 = &local_d0;
   for (lVar2 = 0x13; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
   }

   local_c8 = ZEXT416(_LC33);
   local_d8 = 0;
   local_98 = 1;
   local_40 = 1;
   local_b8 = ZEXT416(_LC33);
   local_a8 = _LC33;
   local_70 = ZEXT416(_LC33);
   local_60 = ZEXT416(_LC33);
   local_50 = _LC33;
   lVar1 = RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::_insert((RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>*)( this + 0x240 ), local_10c, (Item*)&local_d8);
   Item::~Item((Item*)&local_d8);
   LAB_00104f69:*(uint*)( lVar1 + 0xd0 ) = param_2;
   Resource::emit_changed();
   LAB_00104f78:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MeshLibrary::set_item_mesh_cast_shadow(int, RenderingServer::ShadowCastingSetting) */void MeshLibrary::set_item_mesh_cast_shadow(MeshLibrary *this, int param_1, undefined4 param_3) {
   long lVar1;
   long lVar2;
   long lVar3;
   undefined8 *puVar4;
   long in_FS_OFFSET;
   int local_10c[3];
   CowData<char32_t> local_100[8];
   CowData<char32_t> local_f8[8];
   undefined8 local_f0;
   undefined *local_e8;
   undefined8 local_e0;
   undefined8 local_d8;
   undefined8 local_d0;
   undefined1 local_c8[16];
   undefined1 local_b8[16];
   uint local_a8;
   undefined4 local_98;
   undefined1 local_70[16];
   undefined1 local_60[16];
   uint local_50;
   undefined4 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = *(long*)( this + 0x248 );
   local_10c[0] = param_1;
   if (*(long*)( this + 0x240 ) != 0) {
      lVar1 = *(long*)( *(long*)( this + 0x240 ) + 0x10 );
      for (lVar3 = lVar1; lVar2 != lVar3; lVar3 = *(long*)( lVar3 + 8 )) {
         while (param_1 < *(int*)( lVar3 + 0x30 )) {
            lVar3 = *(long*)( lVar3 + 0x10 );
            if (lVar2 == lVar3) goto LAB_00105015;
         }
;
         if (param_1 <= *(int*)( lVar3 + 0x30 )) goto LAB_001050d9;
      }

   }

   LAB_00105015:local_f0 = 0;
   local_e8 = &_LC21;
   local_e0 = 2;
   String::parse_latin1((StrRange*)&local_f0);
   itos((long)local_100);
   operator+((char *)
   local_f8,(String*)"Requested for nonexistent MeshLibrary item \'";
   String::operator +((String*)&local_e8, (String*)local_f8);
   _err_print_error("set_item_mesh_cast_shadow", "scene/resources/3d/mesh_library.cpp", 0xb3, "Condition \"!item_map.has(p_item)\" is true.", (String*)&local_e8, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref(local_f8);
   CowData<char32_t>::_unref(local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   goto LAB_00105185;
   LAB_001050d9:do {
      if (param_1 < *(int*)( lVar1 + 0x30 )) {
         lVar1 = *(long*)( lVar1 + 0x10 );
      }
 else {
         if (param_1 <= *(int*)( lVar1 + 0x30 )) goto LAB_00105179;
         lVar1 = *(long*)( lVar1 + 8 );
      }

   }
 while ( lVar2 != lVar1 );
   puVar4 = &local_d0;
   for (lVar2 = 0x13; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
   }

   local_c8 = ZEXT416(_LC33);
   local_d8 = 0;
   local_98 = 1;
   local_40 = 1;
   local_b8 = ZEXT416(_LC33);
   local_a8 = _LC33;
   local_70 = ZEXT416(_LC33);
   local_60 = ZEXT416(_LC33);
   local_50 = _LC33;
   lVar1 = RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::_insert((RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>*)( this + 0x240 ), local_10c, (Item*)&local_d8);
   Item::~Item((Item*)&local_d8);
   LAB_00105179:*(undefined4*)( lVar1 + 0x78 ) = param_3;
   Resource::emit_changed();
   LAB_00105185:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MeshLibrary::set_item_navigation_mesh_transform(int, Transform3D const&) */void MeshLibrary::set_item_navigation_mesh_transform(MeshLibrary *this, int param_1, Transform3D *param_2) {
   undefined8 uVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   undefined8 *puVar5;
   long in_FS_OFFSET;
   int local_10c[3];
   CowData<char32_t> local_100[8];
   CowData<char32_t> local_f8[8];
   undefined8 local_f0;
   undefined *local_e8;
   undefined8 local_e0;
   undefined8 local_d8;
   undefined8 local_d0;
   undefined1 local_c8[16];
   undefined1 local_b8[16];
   uint local_a8;
   undefined4 local_98;
   undefined1 local_70[16];
   undefined1 local_60[16];
   uint local_50;
   undefined4 local_40;
   long local_30;
   lVar4 = *(long*)( this + 0x248 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_10c[0] = param_1;
   if (*(long*)( this + 0x240 ) != 0) {
      lVar3 = *(long*)( *(long*)( this + 0x240 ) + 0x10 );
      for (lVar2 = lVar3; lVar4 != lVar2; lVar2 = *(long*)( lVar2 + 8 )) {
         while (param_1 < *(int*)( lVar2 + 0x30 )) {
            lVar2 = *(long*)( lVar2 + 0x10 );
            if (lVar4 == lVar2) goto LAB_0010521d;
         }
;
         if (param_1 <= *(int*)( lVar2 + 0x30 )) goto LAB_001052e9;
      }

   }

   LAB_0010521d:local_f0 = 0;
   local_e8 = &_LC21;
   local_e0 = 2;
   String::parse_latin1((StrRange*)&local_f0);
   itos((long)local_100);
   operator+((char *)
   local_f8,(String*)"Requested for nonexistent MeshLibrary item \'";
   String::operator +((String*)&local_e8, (String*)local_f8);
   _err_print_error("set_item_navigation_mesh_transform", "scene/resources/3d/mesh_library.cpp", 0xc6, "Condition \"!item_map.has(p_item)\" is true.", (String*)&local_e8, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref(local_f8);
   CowData<char32_t>::_unref(local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   goto LAB_001053b8;
   LAB_001052e9:do {
      if (param_1 < *(int*)( lVar3 + 0x30 )) {
         lVar3 = *(long*)( lVar3 + 0x10 );
      }
 else {
         if (param_1 <= *(int*)( lVar3 + 0x30 )) goto LAB_00105389;
         lVar3 = *(long*)( lVar3 + 8 );
      }

   }
 while ( lVar4 != lVar3 );
   puVar5 = &local_d0;
   for (lVar4 = 0x13; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
   }

   local_c8 = ZEXT416(_LC33);
   local_d8 = 0;
   local_98 = 1;
   local_40 = 1;
   local_b8 = ZEXT416(_LC33);
   local_a8 = _LC33;
   local_70 = ZEXT416(_LC33);
   local_60 = ZEXT416(_LC33);
   local_50 = _LC33;
   lVar3 = RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::_insert((RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>*)( this + 0x240 ), local_10c, (Item*)&local_d8);
   Item::~Item((Item*)&local_d8);
   LAB_00105389:uVar1 = *(undefined8*)( param_2 + 8 );
   *(undefined8*)( lVar3 + 0xa0 ) = *(undefined8*)param_2;
   *(undefined8*)( lVar3 + 0xa8 ) = uVar1;
   uVar1 = *(undefined8*)( param_2 + 0x18 );
   *(undefined8*)( lVar3 + 0xb0 ) = *(undefined8*)( param_2 + 0x10 );
   *(undefined8*)( lVar3 + 0xb8 ) = uVar1;
   uVar1 = *(undefined8*)( param_2 + 0x28 );
   *(undefined8*)( lVar3 + 0xc0 ) = *(undefined8*)( param_2 + 0x20 );
   *(undefined8*)( lVar3 + 200 ) = uVar1;
   Resource::emit_changed();
   LAB_001053b8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MeshLibrary::set_item_mesh_transform(int, Transform3D const&) */void MeshLibrary::set_item_mesh_transform(MeshLibrary *this, int param_1, Transform3D *param_2) {
   undefined8 uVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   undefined8 *puVar5;
   long in_FS_OFFSET;
   int local_10c[3];
   CowData<char32_t> local_100[8];
   CowData<char32_t> local_f8[8];
   undefined8 local_f0;
   undefined *local_e8;
   undefined8 local_e0;
   undefined8 local_d8;
   undefined8 local_d0;
   undefined1 local_c8[16];
   undefined1 local_b8[16];
   uint local_a8;
   undefined4 local_98;
   undefined1 local_70[16];
   undefined1 local_60[16];
   uint local_50;
   undefined4 local_40;
   long local_30;
   lVar4 = *(long*)( this + 0x248 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_10c[0] = param_1;
   if (*(long*)( this + 0x240 ) != 0) {
      lVar3 = *(long*)( *(long*)( this + 0x240 ) + 0x10 );
      for (lVar2 = lVar3; lVar4 != lVar2; lVar2 = *(long*)( lVar2 + 8 )) {
         while (param_1 < *(int*)( lVar2 + 0x30 )) {
            lVar2 = *(long*)( lVar2 + 0x10 );
            if (lVar4 == lVar2) goto LAB_0010544d;
         }
;
         if (param_1 <= *(int*)( lVar2 + 0x30 )) goto LAB_00105519;
      }

   }

   LAB_0010544d:local_f0 = 0;
   local_e8 = &_LC21;
   local_e0 = 2;
   String::parse_latin1((StrRange*)&local_f0);
   itos((long)local_100);
   operator+((char *)
   local_f8,(String*)"Requested for nonexistent MeshLibrary item \'";
   String::operator +((String*)&local_e8, (String*)local_f8);
   _err_print_error("set_item_mesh_transform", "scene/resources/3d/mesh_library.cpp", 0xad, "Condition \"!item_map.has(p_item)\" is true.", (String*)&local_e8, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref(local_f8);
   CowData<char32_t>::_unref(local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   goto LAB_001055df;
   LAB_00105519:do {
      if (param_1 < *(int*)( lVar3 + 0x30 )) {
         lVar3 = *(long*)( lVar3 + 0x10 );
      }
 else {
         if (param_1 <= *(int*)( lVar3 + 0x30 )) goto LAB_001055b9;
         lVar3 = *(long*)( lVar3 + 8 );
      }

   }
 while ( lVar4 != lVar3 );
   puVar5 = &local_d0;
   for (lVar4 = 0x13; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
   }

   local_c8 = ZEXT416(_LC33);
   local_d8 = 0;
   local_98 = 1;
   local_40 = 1;
   local_b8 = ZEXT416(_LC33);
   local_a8 = _LC33;
   local_70 = ZEXT416(_LC33);
   local_60 = ZEXT416(_LC33);
   local_50 = _LC33;
   lVar3 = RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::_insert((RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>*)( this + 0x240 ), local_10c, (Item*)&local_d8);
   Item::~Item((Item*)&local_d8);
   LAB_001055b9:uVar1 = *(undefined8*)( param_2 + 8 );
   *(undefined8*)( lVar3 + 0x48 ) = *(undefined8*)param_2;
   *(undefined8*)( lVar3 + 0x50 ) = uVar1;
   uVar1 = *(undefined8*)( param_2 + 0x18 );
   *(undefined8*)( lVar3 + 0x58 ) = *(undefined8*)( param_2 + 0x10 );
   *(undefined8*)( lVar3 + 0x60 ) = uVar1;
   uVar1 = *(undefined8*)( param_2 + 0x28 );
   *(undefined8*)( lVar3 + 0x68 ) = *(undefined8*)( param_2 + 0x20 );
   *(undefined8*)( lVar3 + 0x70 ) = uVar1;
   Resource::emit_changed();
   LAB_001055df:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MeshLibrary::set_item_name(int, String const&) */void MeshLibrary::set_item_name(MeshLibrary *this, int param_1, String *param_2) {
   long lVar1;
   long lVar2;
   long lVar3;
   undefined8 *puVar4;
   long in_FS_OFFSET;
   int local_10c[3];
   CowData<char32_t> local_100[8];
   CowData<char32_t> local_f8[8];
   undefined8 local_f0;
   undefined *local_e8;
   undefined8 local_e0;
   undefined8 local_d8;
   undefined8 local_d0;
   undefined1 local_c8[16];
   undefined1 local_b8[16];
   uint local_a8;
   undefined4 local_98;
   undefined1 local_70[16];
   undefined1 local_60[16];
   uint local_50;
   undefined4 local_40;
   long local_30;
   lVar3 = *(long*)( this + 0x248 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_10c[0] = param_1;
   if (*(long*)( this + 0x240 ) != 0) {
      lVar2 = *(long*)( *(long*)( this + 0x240 ) + 0x10 );
      for (lVar1 = lVar2; lVar3 != lVar1; lVar1 = *(long*)( lVar1 + 8 )) {
         while (param_1 < *(int*)( lVar1 + 0x30 )) {
            lVar1 = *(long*)( lVar1 + 0x10 );
            if (lVar3 == lVar1) goto LAB_0010567d;
         }
;
         if (param_1 <= *(int*)( lVar1 + 0x30 )) goto LAB_00105749;
      }

   }

   LAB_0010567d:local_f0 = 0;
   local_e8 = &_LC21;
   local_e0 = 2;
   String::parse_latin1((StrRange*)&local_f0);
   itos((long)local_100);
   operator+((char *)
   local_f8,(String*)"Requested for nonexistent MeshLibrary item \'";
   String::operator +((String*)&local_e8, (String*)local_f8);
   _err_print_error("set_item_name", "scene/resources/3d/mesh_library.cpp", 0xa1, "Condition \"!item_map.has(p_item)\" is true.", (String*)&local_e8, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref(local_f8);
   CowData<char32_t>::_unref(local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   goto LAB_00105807;
   LAB_00105749:do {
      if (param_1 < *(int*)( lVar2 + 0x30 )) {
         lVar2 = *(long*)( lVar2 + 0x10 );
      }
 else {
         if (param_1 <= *(int*)( lVar2 + 0x30 )) goto LAB_001057e9;
         lVar2 = *(long*)( lVar2 + 8 );
      }

   }
 while ( lVar3 != lVar2 );
   puVar4 = &local_d0;
   for (lVar3 = 0x13; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
   }

   local_c8 = ZEXT416(_LC33);
   local_d8 = 0;
   local_98 = 1;
   local_40 = 1;
   local_b8 = ZEXT416(_LC33);
   local_a8 = _LC33;
   local_70 = ZEXT416(_LC33);
   local_60 = ZEXT416(_LC33);
   local_50 = _LC33;
   lVar2 = RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::_insert((RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>*)( this + 0x240 ), local_10c, (Item*)&local_d8);
   Item::~Item((Item*)&local_d8);
   LAB_001057e9:if (*(long*)( lVar2 + 0x38 ) != *(long*)param_2) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( lVar2 + 0x38 ), (CowData*)param_2);
   }

   Resource::emit_changed();
   LAB_00105807:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MeshLibrary::set_item_shapes(int, Vector<MeshLibrary::ShapeData> const&) */void MeshLibrary::set_item_shapes(MeshLibrary *this, int param_1, Vector *param_2) {
   long lVar1;
   long lVar2;
   long lVar3;
   undefined8 *puVar4;
   long in_FS_OFFSET;
   int local_10c[3];
   CowData<char32_t> local_100[8];
   CowData<char32_t> local_f8[8];
   undefined8 local_f0;
   undefined *local_e8;
   undefined8 local_e0;
   undefined8 local_d8;
   undefined8 local_d0;
   undefined1 local_c8[16];
   undefined1 local_b8[16];
   uint local_a8;
   undefined4 local_98;
   undefined1 local_70[16];
   undefined1 local_60[16];
   uint local_50;
   undefined4 local_40;
   long local_30;
   lVar3 = *(long*)( this + 0x248 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_10c[0] = param_1;
   if (*(long*)( this + 0x240 ) != 0) {
      lVar2 = *(long*)( *(long*)( this + 0x240 ) + 0x10 );
      for (lVar1 = lVar2; lVar3 != lVar1; lVar1 = *(long*)( lVar1 + 8 )) {
         while (param_1 < *(int*)( lVar1 + 0x30 )) {
            lVar1 = *(long*)( lVar1 + 0x10 );
            if (lVar3 == lVar1) goto LAB_0010589d;
         }
;
         if (param_1 <= *(int*)( lVar1 + 0x30 )) goto LAB_00105969;
      }

   }

   LAB_0010589d:local_f0 = 0;
   local_e8 = &_LC21;
   local_e0 = 2;
   String::parse_latin1((StrRange*)&local_f0);
   itos((long)local_100);
   operator+((char *)
   local_f8,(String*)"Requested for nonexistent MeshLibrary item \'";
   String::operator +((String*)&local_e8, (String*)local_f8);
   _err_print_error("set_item_shapes", "scene/resources/3d/mesh_library.cpp", 0xb9, "Condition \"!item_map.has(p_item)\" is true.", (String*)&local_e8, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref(local_f8);
   CowData<char32_t>::_unref(local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   goto LAB_00105a36;
   LAB_00105969:do {
      if (param_1 < *(int*)( lVar2 + 0x30 )) {
         lVar2 = *(long*)( lVar2 + 0x10 );
      }
 else {
         if (param_1 <= *(int*)( lVar2 + 0x30 )) goto LAB_00105a09;
         lVar2 = *(long*)( lVar2 + 8 );
      }

   }
 while ( lVar3 != lVar2 );
   puVar4 = &local_d0;
   for (lVar3 = 0x13; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
   }

   local_c8 = ZEXT416(_LC33);
   local_d8 = 0;
   local_98 = 1;
   local_40 = 1;
   local_b8 = ZEXT416(_LC33);
   local_a8 = _LC33;
   local_70 = ZEXT416(_LC33);
   local_60 = ZEXT416(_LC33);
   local_50 = _LC33;
   lVar2 = RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::_insert((RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>*)( this + 0x240 ), local_10c, (Item*)&local_d8);
   Item::~Item((Item*)&local_d8);
   LAB_00105a09:if (*(long*)( lVar2 + 0x88 ) != *(long*)( param_2 + 8 )) {
      CowData<MeshLibrary::ShapeData>::_ref((CowData<MeshLibrary::ShapeData>*)( lVar2 + 0x88 ), (CowData*)( param_2 + 8 ));
   }

   Resource::emit_changed();
   Object::notify_property_list_changed();
   LAB_00105a36:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MeshLibrary::set_item_mesh(int, Ref<Mesh> const&) */void MeshLibrary::set_item_mesh(MeshLibrary *this, int param_1, Ref *param_2) {
   Object *pOVar1;
   Object *pOVar2;
   char cVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   undefined8 *puVar7;
   long in_FS_OFFSET;
   int local_10c[3];
   CowData<char32_t> local_100[8];
   CowData<char32_t> local_f8[8];
   undefined8 local_f0;
   undefined *local_e8;
   undefined8 local_e0;
   undefined8 local_d8;
   undefined8 local_d0;
   undefined1 local_c8[16];
   undefined1 local_b8[16];
   uint local_a8;
   undefined4 local_98;
   undefined1 local_70[16];
   undefined1 local_60[16];
   uint local_50;
   undefined4 local_40;
   long local_30;
   lVar6 = *(long*)( this + 0x248 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_10c[0] = param_1;
   if (*(long*)( this + 0x240 ) != 0) {
      lVar5 = *(long*)( *(long*)( this + 0x240 ) + 0x10 );
      for (lVar4 = lVar5; lVar6 != lVar4; lVar4 = *(long*)( lVar4 + 8 )) {
         while (param_1 < *(int*)( lVar4 + 0x30 )) {
            lVar4 = *(long*)( lVar4 + 0x10 );
            if (lVar6 == lVar4) goto LAB_00105acd;
         }
;
         if (param_1 <= *(int*)( lVar4 + 0x30 )) goto LAB_00105b99;
      }

   }

   LAB_00105acd:local_f0 = 0;
   local_e8 = &_LC21;
   local_e0 = 2;
   String::parse_latin1((StrRange*)&local_f0);
   itos((long)local_100);
   operator+((char *)
   local_f8,(String*)"Requested for nonexistent MeshLibrary item \'";
   String::operator +((String*)&local_e8, (String*)local_f8);
   _err_print_error("set_item_mesh", "scene/resources/3d/mesh_library.cpp", 0xa7, "Condition \"!item_map.has(p_item)\" is true.", (String*)&local_e8, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref(local_f8);
   CowData<char32_t>::_unref(local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   goto LAB_00105c79;
   LAB_00105b99:do {
      if (param_1 < *(int*)( lVar5 + 0x30 )) {
         lVar5 = *(long*)( lVar5 + 0x10 );
      }
 else {
         if (param_1 <= *(int*)( lVar5 + 0x30 )) goto LAB_00105c39;
         lVar5 = *(long*)( lVar5 + 8 );
      }

   }
 while ( lVar6 != lVar5 );
   puVar7 = &local_d0;
   for (lVar6 = 0x13; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
   }

   local_c8 = ZEXT416(_LC33);
   local_d8 = 0;
   local_98 = 1;
   local_40 = 1;
   local_b8 = ZEXT416(_LC33);
   local_a8 = _LC33;
   local_70 = ZEXT416(_LC33);
   local_60 = ZEXT416(_LC33);
   local_50 = _LC33;
   lVar5 = RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::_insert((RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>*)( this + 0x240 ), local_10c, (Item*)&local_d8);
   Item::~Item((Item*)&local_d8);
   LAB_00105c39:pOVar1 = *(Object**)param_2;
   pOVar2 = *(Object**)( lVar5 + 0x40 );
   if (pOVar1 != pOVar2) {
      *(Object**)( lVar5 + 0x40 ) = pOVar1;
      if (( pOVar1 != (Object*)0x0 ) && ( cVar3 = cVar3 == '\0' )) {
         *(undefined8*)( lVar5 + 0x40 ) = 0;
      }

      if (( ( pOVar2 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
      Memory::free_static(pOVar2, false);
   }

}
Resource::emit_changed();LAB_00105c79:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* MeshLibrary::set_item_preview(int, Ref<Texture2D> const&) */void MeshLibrary::set_item_preview(MeshLibrary *this, int param_1, Ref *param_2) {
   Object *pOVar1;
   Object *pOVar2;
   char cVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   undefined8 *puVar7;
   long in_FS_OFFSET;
   int local_10c[3];
   CowData<char32_t> local_100[8];
   CowData<char32_t> local_f8[8];
   undefined8 local_f0;
   undefined *local_e8;
   undefined8 local_e0;
   undefined8 local_d8;
   undefined8 local_d0;
   undefined1 local_c8[16];
   undefined1 local_b8[16];
   uint local_a8;
   undefined4 local_98;
   undefined1 local_70[16];
   undefined1 local_60[16];
   uint local_50;
   undefined4 local_40;
   long local_30;
   lVar6 = *(long*)( this + 0x248 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_10c[0] = param_1;
   if (*(long*)( this + 0x240 ) != 0) {
      lVar5 = *(long*)( *(long*)( this + 0x240 ) + 0x10 );
      for (lVar4 = lVar5; lVar6 != lVar4; lVar4 = *(long*)( lVar4 + 8 )) {
         while (param_1 < *(int*)( lVar4 + 0x30 )) {
            lVar4 = *(long*)( lVar4 + 0x10 );
            if (lVar6 == lVar4) goto LAB_00105d3d;
         }
;
         if (param_1 <= *(int*)( lVar4 + 0x30 )) goto LAB_00105e09;
      }

   }

   LAB_00105d3d:local_f0 = 0;
   local_e8 = &_LC21;
   local_e0 = 2;
   String::parse_latin1((StrRange*)&local_f0);
   itos((long)local_100);
   operator+((char *)
   local_f8,(String*)"Requested for nonexistent MeshLibrary item \'";
   String::operator +((String*)&local_e8, (String*)local_f8);
   _err_print_error("set_item_preview", "scene/resources/3d/mesh_library.cpp", 0xd2, "Condition \"!item_map.has(p_item)\" is true.", (String*)&local_e8, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref(local_f8);
   CowData<char32_t>::_unref(local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   goto LAB_00105ef2;
   LAB_00105e09:do {
      if (param_1 < *(int*)( lVar5 + 0x30 )) {
         lVar5 = *(long*)( lVar5 + 0x10 );
      }
 else {
         if (param_1 <= *(int*)( lVar5 + 0x30 )) goto LAB_00105ea9;
         lVar5 = *(long*)( lVar5 + 8 );
      }

   }
 while ( lVar6 != lVar5 );
   puVar7 = &local_d0;
   for (lVar6 = 0x13; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
   }

   local_c8 = ZEXT416(_LC33);
   local_d8 = 0;
   local_98 = 1;
   local_40 = 1;
   local_b8 = ZEXT416(_LC33);
   local_a8 = _LC33;
   local_70 = ZEXT416(_LC33);
   local_60 = ZEXT416(_LC33);
   local_50 = _LC33;
   lVar5 = RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::_insert((RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>*)( this + 0x240 ), local_10c, (Item*)&local_d8);
   Item::~Item((Item*)&local_d8);
   LAB_00105ea9:pOVar1 = *(Object**)param_2;
   pOVar2 = *(Object**)( lVar5 + 0x90 );
   if (pOVar1 != pOVar2) {
      *(Object**)( lVar5 + 0x90 ) = pOVar1;
      if (( pOVar1 != (Object*)0x0 ) && ( cVar3 = cVar3 == '\0' )) {
         *(undefined8*)( lVar5 + 0x90 ) = 0;
      }

      if (( ( pOVar2 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
      Memory::free_static(pOVar2, false);
   }

}
Resource::emit_changed();LAB_00105ef2:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* MeshLibrary::set_item_navigation_mesh(int, Ref<NavigationMesh> const&) */void MeshLibrary::set_item_navigation_mesh(MeshLibrary *this, int param_1, Ref *param_2) {
   Object *pOVar1;
   Object *pOVar2;
   char cVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   undefined8 *puVar7;
   long in_FS_OFFSET;
   int local_10c[3];
   CowData<char32_t> local_100[8];
   CowData<char32_t> local_f8[8];
   undefined8 local_f0;
   undefined *local_e8;
   undefined8 local_e0;
   undefined8 local_d8;
   undefined8 local_d0;
   undefined1 local_c8[16];
   undefined1 local_b8[16];
   uint local_a8;
   undefined4 local_98;
   undefined1 local_70[16];
   undefined1 local_60[16];
   uint local_50;
   undefined4 local_40;
   long local_30;
   lVar6 = *(long*)( this + 0x248 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_10c[0] = param_1;
   if (*(long*)( this + 0x240 ) != 0) {
      lVar5 = *(long*)( *(long*)( this + 0x240 ) + 0x10 );
      for (lVar4 = lVar5; lVar6 != lVar4; lVar4 = *(long*)( lVar4 + 8 )) {
         while (param_1 < *(int*)( lVar4 + 0x30 )) {
            lVar4 = *(long*)( lVar4 + 0x10 );
            if (lVar6 == lVar4) goto LAB_00105fbd;
         }
;
         if (param_1 <= *(int*)( lVar4 + 0x30 )) goto LAB_00106089;
      }

   }

   LAB_00105fbd:local_f0 = 0;
   local_e8 = &_LC21;
   local_e0 = 2;
   String::parse_latin1((StrRange*)&local_f0);
   itos((long)local_100);
   operator+((char *)
   local_f8,(String*)"Requested for nonexistent MeshLibrary item \'";
   String::operator +((String*)&local_e8, (String*)local_f8);
   _err_print_error("set_item_navigation_mesh", "scene/resources/3d/mesh_library.cpp", 0xc0, "Condition \"!item_map.has(p_item)\" is true.", (String*)&local_e8, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref(local_f8);
   CowData<char32_t>::_unref(local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   goto LAB_00106172;
   LAB_00106089:do {
      if (param_1 < *(int*)( lVar5 + 0x30 )) {
         lVar5 = *(long*)( lVar5 + 0x10 );
      }
 else {
         if (param_1 <= *(int*)( lVar5 + 0x30 )) goto LAB_00106129;
         lVar5 = *(long*)( lVar5 + 8 );
      }

   }
 while ( lVar6 != lVar5 );
   puVar7 = &local_d0;
   for (lVar6 = 0x13; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
   }

   local_c8 = ZEXT416(_LC33);
   local_d8 = 0;
   local_98 = 1;
   local_40 = 1;
   local_b8 = ZEXT416(_LC33);
   local_a8 = _LC33;
   local_70 = ZEXT416(_LC33);
   local_60 = ZEXT416(_LC33);
   local_50 = _LC33;
   lVar5 = RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::_insert((RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>*)( this + 0x240 ), local_10c, (Item*)&local_d8);
   Item::~Item((Item*)&local_d8);
   LAB_00106129:pOVar1 = *(Object**)param_2;
   pOVar2 = *(Object**)( lVar5 + 0x98 );
   if (pOVar1 != pOVar2) {
      *(Object**)( lVar5 + 0x98 ) = pOVar1;
      if (( pOVar1 != (Object*)0x0 ) && ( cVar3 = cVar3 == '\0' )) {
         *(undefined8*)( lVar5 + 0x98 ) = 0;
      }

      if (( ( pOVar2 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
      Memory::free_static(pOVar2, false);
   }

}
Resource::emit_changed();LAB_00106172:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* MeshLibrary::remove_item(int) */void MeshLibrary::remove_item(MeshLibrary *this, int param_1) {
   Element *pEVar1;
   Element *pEVar2;
   Element *pEVar3;
   long in_FS_OFFSET;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   pEVar1 = *(Element**)( this + 0x248 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x240 ) != 0) {
      pEVar3 = *(Element**)( *(long*)( this + 0x240 ) + 0x10 );
      for (pEVar2 = pEVar3; pEVar1 != pEVar2; pEVar2 = *(Element**)( pEVar2 + 8 )) {
         while (param_1 < *(int*)( pEVar2 + 0x30 )) {
            pEVar2 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar1 == pEVar2) goto LAB_00106235;
         }
;
         if (param_1 <= *(int*)( pEVar2 + 0x30 )) goto LAB_00106319;
      }

   }

   LAB_00106235:local_50 = 0;
   local_48 = &_LC21;
   local_40 = 2;
   String::parse_latin1((StrRange*)&local_50);
   itos((long)local_60);
   operator+((char *)
   local_58,(String*)"Requested for nonexistent MeshLibrary item \'";
   String::operator +((String*)&local_48, (String*)local_58);
   _err_print_error("remove_item", "scene/resources/3d/mesh_library.cpp", 0x109, "Condition \"!item_map.has(p_item)\" is true.", (String*)&local_48, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref(local_58);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   goto LAB_0010638c;
   LAB_00106319:do {
      if (param_1 < *(int*)( pEVar3 + 0x30 )) {
         pEVar3 = *(Element**)( pEVar3 + 0x10 );
      }
 else {
         if (param_1 <= *(int*)( pEVar3 + 0x30 )) {
            RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::_erase((RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>*)( this + 0x240 ), pEVar3);
            if (( *(int*)( this + 0x250 ) == 0 ) && ( *(Element**)( this + 0x240 ) != (Element*)0x0 )) {
               memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(*(Element**)( this + 0x240 ));
               *(undefined8*)( this + 0x240 ) = 0;
            }

            break;
         }

         pEVar3 = *(Element**)( pEVar3 + 8 );
      }

   }
 while ( pEVar1 != pEVar3 );
   Object::notify_property_list_changed();
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      Resource::emit_changed();
      return;
   }

   LAB_0010638c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MeshLibrary::clear() */void MeshLibrary::clear(MeshLibrary *this) {
   RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::clear((RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>*)( this + 0x240 ));
   Object::notify_property_list_changed();
   Resource::emit_changed();
   return;
}
/* MeshLibrary::~MeshLibrary() */void MeshLibrary::~MeshLibrary(MeshLibrary *this) {
   void *pvVar1;
   Object *pOVar2;
   char cVar3;
   *(undefined***)this = &PTR__initialize_classv_0011bb50;
   RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::clear((RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>*)( this + 0x240 ));
   pvVar1 = *(void**)( this + 0x240 );
   if (pvVar1 != (void*)0x0) {
      if (*(long*)( (long)pvVar1 + 0x98 ) != 0) {
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            pOVar2 = *(Object**)( (long)pvVar1 + 0x98 );
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

      }

      if (*(long*)( (long)pvVar1 + 0x90 ) != 0) {
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            pOVar2 = *(Object**)( (long)pvVar1 + 0x90 );
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

      }

      CowData<MeshLibrary::ShapeData>::_unref((CowData<MeshLibrary::ShapeData>*)( (long)pvVar1 + 0x88 ));
      if (*(long*)( (long)pvVar1 + 0x40 ) != 0) {
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            pOVar2 = *(Object**)( (long)pvVar1 + 0x40 );
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 0x38 ));
      Memory::free_static(pvVar1, false);
   }

   Resource::~Resource((Resource*)this);
   return;
}
/* MeshLibrary::reset_state() */void MeshLibrary::reset_state(MeshLibrary *this) {
   RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::clear((RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>*)( this + 0x240 ));
   Object::notify_property_list_changed();
   Resource::emit_changed();
   return;
}
/* MeshLibrary::~MeshLibrary() */void MeshLibrary::~MeshLibrary(MeshLibrary *this) {
   void *pvVar1;
   Object *pOVar2;
   char cVar3;
   *(undefined***)this = &PTR__initialize_classv_0011bb50;
   RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::clear((RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>*)( this + 0x240 ));
   pvVar1 = *(void**)( this + 0x240 );
   if (pvVar1 != (void*)0x0) {
      if (*(long*)( (long)pvVar1 + 0x98 ) != 0) {
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            pOVar2 = *(Object**)( (long)pvVar1 + 0x98 );
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

      }

      if (*(long*)( (long)pvVar1 + 0x90 ) != 0) {
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            pOVar2 = *(Object**)( (long)pvVar1 + 0x90 );
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

      }

      CowData<MeshLibrary::ShapeData>::_unref((CowData<MeshLibrary::ShapeData>*)( (long)pvVar1 + 0x88 ));
      if (*(long*)( (long)pvVar1 + 0x40 ) != 0) {
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            pOVar2 = *(Object**)( (long)pvVar1 + 0x40 );
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 0x38 ));
      Memory::free_static(pvVar1, false);
   }

   Resource::~Resource((Resource*)this);
   operator_delete(this, 600);
   return;
}
/* Vector<MeshLibrary::ShapeData>::push_back(MeshLibrary::ShapeData) [clone .isra.0] */void Vector<MeshLibrary::ShapeData>::push_back(Vector<MeshLibrary::ShapeData> *this, long *param_2) {
   long *plVar1;
   Object *pOVar2;
   Object *pOVar3;
   char cVar4;
   int iVar5;
   long lVar6;
   long lVar7;
   if (*(long*)( this + 8 ) == 0) {
      lVar6 = 1;
   }
 else {
      lVar6 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar5 = CowData<MeshLibrary::ShapeData>::resize<false>((CowData<MeshLibrary::ShapeData>*)( this + 8 ), lVar6);
   if (iVar5 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar7 = -1;
         lVar6 = 0;
      }
 else {
         lVar6 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar7 = lVar6 + -1;
         if (-1 < lVar7) {
            CowData<MeshLibrary::ShapeData>::_copy_on_write((CowData<MeshLibrary::ShapeData>*)( this + 8 ));
            pOVar2 = (Object*)*param_2;
            plVar1 = (long*)( *(long*)( this + 8 ) + lVar7 * 0x38 );
            pOVar3 = (Object*)*plVar1;
            if (pOVar2 != pOVar3) {
               *plVar1 = (long)pOVar2;
               if (( pOVar2 != (Object*)0x0 ) && ( cVar4 = cVar4 == '\0' )) {
                  *plVar1 = 0;
               }

               if (( ( pOVar3 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
               Memory::free_static(pOVar3, false);
            }

         }

         for (int i = 0; i < 3; i++) {
            lVar6 = param_2[( 2*i + 2 )];
            plVar1[( 2*i + 1 )] = param_2[( 2*i + 1 )];
            plVar1[( 2*i + 2 )] = lVar6;
         }

         return;
      }

   }

   _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar7, lVar6, "p_index", "size()", "", false, false);
   return;
}
_err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);return;}/* MeshLibrary::_set_item_shapes(int, Array const&) */void MeshLibrary::_set_item_shapes(MeshLibrary *this, int param_1, Array *param_2) {
   undefined1 auVar1[16];
   int iVar2;
   char cVar3;
   uint uVar4;
   long lVar5;
   Object *pOVar6;
   BoxShape3D *this_00;
   Variant *pVVar7;
   Object *pOVar8;
   int iVar9;
   uint uVar10;
   int iVar11;
   int iVar12;
   long in_FS_OFFSET;
   Vector *local_148;
   Variant local_128[60];
   int local_ec;
   Array local_e8[8];
   CowData<char32_t> local_e0[8];
   CowData<char32_t> local_d8[8];
   undefined8 local_d0;
   undefined *local_c8;
   undefined8 local_c0;
   int local_b8[2];
   ulong local_b0;
   undefined8 uStack_a8;
   undefined8 local_a0;
   undefined8 uStack_98;
   undefined8 local_90;
   undefined8 uStack_88;
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined4 local_58;
   undefined4 local_54;
   undefined4 uStack_50;
   undefined4 uStack_4c;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_ec = param_1;
   Array::Array(local_e8, param_2);
   uVar4 = Array::size();
   iVar2 = local_ec;
   iVar11 = (int)local_e8;
   uVar10 = uVar4;
   if (( uVar4 & 1 ) == 0) {
      LAB_00106998:local_c0 = 0;
      if (0 < (int)uVar10) {
         iVar9 = 1;
         iVar12 = ( uVar10 - 1 & 0xfffffffe ) + 3;
         do {
            while (true) {
               Array::operator [](iVar11);
               lVar5 = Variant::get_validated_object();
               if (( ( lVar5 != 0 ) && ( pOVar6 = (Object*)__dynamic_cast(lVar5, &Object::typeinfo, &Shape3D::typeinfo, 0) ),pOVar6 != (Object*)0x0 )) &&( cVar3 = cVar3 != '\0' );
               Array::operator [](iVar11);
               Variant::operator_cast_to_Transform3D(local_128);
               LAB_00106a07:iVar9 = iVar9 + 2;
               if (iVar12 == iVar9) goto LAB_00106b18;
            }
;
            Array::operator [](iVar11);
            Variant::operator_cast_to_Transform3D((Variant*)&local_b0);
            local_78._0_8_ = pOVar6;
            cVar3 = RefCounted::reference();
            local_58 = (undefined4)uStack_98;
            local_54 = ( undefined4 )((ulong)uStack_98 >> 0x20);
            uStack_50 = (undefined4)local_90;
            uStack_4c = ( undefined4 )((ulong)local_90 >> 0x20);
            if (cVar3 == '\0') {
               auVar1._8_8_ = 0;
               auVar1._0_8_ = local_b0;
               local_78 = auVar1 << 0x40;
               local_68._8_8_ = local_a0;
               local_68._0_8_ = uStack_a8;
               uStack_48 = uStack_88;
               Vector<MeshLibrary::ShapeData>::push_back((Vector<MeshLibrary::ShapeData>*)&local_c8);
            }
 else {
               local_78._8_8_ = local_b0;
               local_68._8_8_ = local_a0;
               local_68._0_8_ = uStack_a8;
               uStack_48 = uStack_88;
               Vector<MeshLibrary::ShapeData>::push_back((Vector<MeshLibrary::ShapeData>*)&local_c8);
               cVar3 = RefCounted::unreference();
               if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
                  ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                  Memory::free_static(pOVar6, false);
               }

            }

            cVar3 = RefCounted::unreference();
            if (( cVar3 == '\0' ) || ( cVar3 = cVar3 == '\0' )) goto LAB_00106a07;
            iVar9 = iVar9 + 2;
            ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
            Memory::free_static(pOVar6, false);
         }
 while ( iVar12 != iVar9 );
      }

      LAB_00106b18:local_148 = (Vector*)&local_c8;
      set_item_shapes(this, iVar2, local_148);
      CowData<MeshLibrary::ShapeData>::_unref((CowData<MeshLibrary::ShapeData>*)&local_c0);
      Array::~Array(local_e8);
   }
 else {
      lVar5 = *(long*)( this + 0x240 );
      if (lVar5 != 0) {
         while (lVar5 = *(long*)( lVar5 + 0x10 ),*(long*)( this + 0x248 ) != lVar5) {
            while (*(int*)( lVar5 + 0x30 ) <= local_ec) {
               if (local_ec <= *(int*)( lVar5 + 0x30 )) {
                  lVar5 = RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::operator []((RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>*)( this + 0x240 ), &local_ec);
                  if (*(long*)( lVar5 + 0x50 ) == 0) {
                     iVar9 = 0;
                  }
 else {
                     iVar9 = (int)*(undefined8*)( *(long*)( lVar5 + 0x50 ) + -8 ) * 2;
                  }

                  uVar10 = uVar4 - 1;
                  if (iVar9 < (int)uVar4) {
                     Array::operator [](iVar11);
                     lVar5 = Variant::get_validated_object();
                     if (( ( lVar5 == 0 ) || ( pOVar6 = (Object*)__dynamic_cast(lVar5, &Object::typeinfo, &Shape3D::typeinfo, 0) ),pOVar6 == (Object*)0x0 )) {
                        this_00 = (BoxShape3D*)operator_new(0x280, "");
                        BoxShape3D::BoxShape3D(this_00);
                        postinitialize_handler((Object*)this_00);
                        cVar3 = RefCounted::init_ref();
                        if (cVar3 == '\0') {
                           Variant::Variant((Variant*)local_78, (Object*)0x0);
                           pVVar7 = (Variant*)Array::operator [](iVar11);
                           Variant::operator =(pVVar7, (Variant*)local_78);
                           if (Variant::needs_deinit[(int)local_78._0_4_] == '\0') {
                              LAB_00106cef:pOVar6 = (Object*)0x0;
                           }
 else {
                              pOVar6 = (Object*)0x0;
                              Variant::_clear_internal();
                           }

                        }
 else {
                           cVar3 = RefCounted::reference();
                           pOVar8 = (Object*)0x0;
                           if (cVar3 != '\0') {
                              pOVar8 = (Object*)this_00;
                           }

                           cVar3 = RefCounted::unreference();
                           if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)this_00) ),cVar3 != '\0') {
                              ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
                              Memory::free_static(this_00, false);
                           }

                           Variant::Variant((Variant*)local_78, pOVar8);
                           pVVar7 = (Variant*)Array::operator [](iVar11);
                           Variant::operator =(pVVar7, (Variant*)local_78);
                           if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
                              Variant::_clear_internal();
                           }

                           if (( ( pOVar8 == (Object*)0x0 ) || ( cVar3 = RefCounted::unreference() ),cVar3 == '\0' )) goto LAB_00106cef;
                           ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
                           pOVar6 = (Object*)0x0;
                           Memory::free_static(pOVar8, false);
                        }

                     }

                     local_58 = 0x3f800000;
                     local_78 = ZEXT416(_LC33);
                     local_68 = ZEXT416(_LC33);
                     local_54 = 0;
                     uStack_50 = 0;
                     uStack_4c = 0;
                     Variant::Variant((Variant*)local_b8, (Transform3D*)local_78);
                     Array::push_back((Variant*)local_e8);
                     if (Variant::needs_deinit[local_b8[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     uVar10 = uVar4 + 1;
                     if (( ( pOVar6 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);
                     Memory::free_static(pOVar6, false);
                  }

               }
 else {
                  Array::resize(iVar11);
               }

               goto LAB_00106998;
            }
;
            lVar5 = *(long*)( lVar5 + 8 );
            if (*(long*)( this + 0x248 ) == lVar5) goto LAB_001068be;
         }
;
      }

   }

   LAB_001068be:local_d0 = 0;
   local_c8 = &_LC21;
   local_c0 = 2;
   String::parse_latin1((StrRange*)&local_d0);
   itos((long)local_e0);
   operator+((char *)
   local_d8,(String*)"Requested for nonexistent MeshLibrary item \'";
   String::operator +((String*)&local_c8, (String*)local_d8);
   _err_print_error("_set_item_shapes", "scene/resources/3d/mesh_library.cpp", 0x135, "Condition \"!item_map.has(p_item)\" is true.", (String*)&local_c8, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref(local_d8);
   CowData<char32_t>::_unref(local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   Array::~Array(local_e8);
}
if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* MeshLibrary::_set(StringName const&, Variant const&) */undefined4 MeshLibrary::_set(MeshLibrary *this, StringName *param_1, Variant *param_2) {
   char cVar1;
   undefined4 uVar2;
   int iVar3;
   int iVar4;
   uint uVar5;
   long lVar6;
   Object *pOVar7;
   long in_FS_OFFSET;
   undefined8 local_e0;
   String local_d8[8];
   undefined8 local_d0;
   Object *local_c8;
   size_t local_c0;
   long local_b8;
   undefined1 local_b0[16];
   undefined1 local_a0[16];
   undefined4 local_90;
   undefined4 uStack_8c;
   undefined4 uStack_88;
   undefined4 uStack_84;
   long local_78;
   undefined8 local_70;
   undefined8 uStack_68;
   undefined8 local_60;
   undefined8 uStack_58;
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   lVar6 = *(long*)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar6 == 0) {
      local_e0 = 0;
   }
 else {
      pOVar7 = *(Object**)( lVar6 + 8 );
      local_e0 = 0;
      if (pOVar7 == (Object*)0x0) {
         if (*(long*)( lVar6 + 0x10 ) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_e0, (CowData*)( lVar6 + 0x10 ));
         }

      }
 else {
         local_c0 = strlen((char*)pOVar7);
         local_c8 = pOVar7;
         String::parse_latin1((StrRange*)&local_e0);
      }

   }

   uVar2 = String::begins_with((char*)&local_e0);
   if ((char)uVar2 == '\0') goto LAB_00106f75;
   iVar4 = (int)(CowData<char32_t>*)&local_e0;
   String::get_slicec((wchar32)(CowData<char32_t>*)&local_c8, iVar4);
   iVar3 = String::to_int();
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   String::get_slicec((wchar32)local_d8, iVar4);
   lVar6 = *(long*)( this + 0x240 );
   if (lVar6 != 0) {
      while (lVar6 = *(long*)( lVar6 + 0x10 ),*(long*)( this + 0x248 ) != lVar6) {
         while (*(int*)( lVar6 + 0x30 ) <= iVar3) {
            if (iVar3 <= *(int*)( lVar6 + 0x30 )) goto LAB_00107055;
            lVar6 = *(long*)( lVar6 + 8 );
            if (*(long*)( this + 0x248 ) == lVar6) goto LAB_0010704a;
         }
;
      }
;
   }

   LAB_0010704a:create_item(this, iVar3);
   LAB_00107055:cVar1 = String::operator ==(local_d8, "name");
   if (cVar1 == '\0') {
      cVar1 = String::operator ==(local_d8, "mesh");
      if (cVar1 == '\0') {
         cVar1 = String::operator ==(local_d8, "mesh_transform");
         if (cVar1 == '\0') {
            cVar1 = String::operator ==(local_d8, "mesh_cast_shadow");
            if (cVar1 == '\0') {
               cVar1 = String::operator ==(local_d8, "shape");
               if (cVar1 == '\0') {
                  cVar1 = String::operator ==(local_d8, "shapes");
                  if (cVar1 == '\0') {
                     cVar1 = String::operator ==(local_d8, "preview");
                     if (cVar1 == '\0') {
                        cVar1 = String::operator ==(local_d8, "navigation_mesh");
                        if (cVar1 == '\0') {
                           cVar1 = String::operator ==(local_d8, "navigation_mesh_transform");
                           if (cVar1 == '\0') {
                              cVar1 = String::operator ==(local_d8, "navmesh");
                              if (cVar1 != '\0') goto LAB_00107445;
                              cVar1 = String::operator ==(local_d8, "navmesh_transform");
                              if (cVar1 == '\0') {
                                 cVar1 = String::operator ==(local_d8, "navigation_layers");
                                 if (cVar1 == '\0') {
                                    uVar2 = 0;
                                 }
 else {
                                    uVar5 = Variant::operator_cast_to_unsigned_int(param_2);
                                    set_item_navigation_layers(this, iVar3, uVar5);
                                 }

                                 goto LAB_00107221;
                              }

                           }

                           Variant::operator_cast_to_Transform3D((Variant*)&local_78);
                           set_item_navigation_mesh_transform(this, iVar3, (Transform3D*)&local_78);
                        }
 else {
                           LAB_00107445:local_c8 = (Object*)0x0;
                           Ref<NavigationMesh>::operator =((Ref<NavigationMesh>*)&local_c8, param_2);
                           set_item_navigation_mesh(this, iVar3, (Ref*)&local_c8);
                           Ref<NavigationMesh>::unref((Ref<NavigationMesh>*)&local_c8);
                        }

                     }
 else {
                        local_c8 = (Object*)0x0;
                        Ref<Texture2D>::operator =((Ref<Texture2D>*)&local_c8, param_2);
                        set_item_preview(this, iVar3, (Ref*)&local_c8);
                        Ref<Texture2D>::unref((Ref<Texture2D>*)&local_c8);
                     }

                  }
 else {
                     Variant::operator_cast_to_Array((Variant*)&local_c8);
                     _set_item_shapes(this, iVar3, (Array*)&local_c8);
                     Array::~Array((Array*)&local_c8);
                  }

               }
 else {
                  local_c0 = 0;
                  local_b8 = 0;
                  local_90 = 0x3f800000;
                  uStack_8c = 0;
                  uStack_88 = 0;
                  uStack_84 = 0;
                  local_b0 = ZEXT416(_LC33);
                  local_a0 = ZEXT416(_LC33);
                  Ref<Shape3D>::operator =((Ref<Shape3D>*)&local_b8, param_2);
                  local_78 = 0;
                  if (local_b8 != 0) {
                     local_d0 = 0;
                     local_78 = local_b8;
                     cVar1 = RefCounted::reference();
                     if (cVar1 == '\0') {
                        local_78 = 0;
                     }

                     Ref<Shape3D>::unref((Ref<Shape3D>*)&local_d0);
                  }

                  local_50 = CONCAT44(uStack_8c, local_90);
                  uStack_48 = CONCAT44(uStack_84, uStack_88);
                  local_70 = local_b0._0_8_;
                  uStack_68 = local_b0._8_8_;
                  local_60 = local_a0._0_8_;
                  uStack_58 = local_a0._8_8_;
                  Vector<MeshLibrary::ShapeData>::push_back((Vector<MeshLibrary::ShapeData>*)&local_c8, (Ref<Shape3D>*)&local_78);
                  Ref<Shape3D>::unref((Ref<Shape3D>*)&local_78);
                  set_item_shapes(this, iVar3, (Vector*)&local_c8);
                  Ref<Shape3D>::unref((Ref<Shape3D>*)&local_b8);
                  CowData<MeshLibrary::ShapeData>::_unref((CowData<MeshLibrary::ShapeData>*)&local_c0);
               }

            }
 else {
               iVar4 = Variant::operator_cast_to_int(param_2);
               if (iVar4 == 2) {
                  set_item_mesh_cast_shadow(this, iVar3, 2);
               }
 else if (iVar4 < 3) {
                  if (iVar4 == 0) {
                     set_item_mesh_cast_shadow(this, iVar3, 0);
                  }
 else {
                     LAB_001073c1:set_item_mesh_cast_shadow(this, iVar3, 1);
                  }

               }
 else {
                  if (iVar4 != 3) goto LAB_001073c1;
                  set_item_mesh_cast_shadow(this, iVar3, 3);
               }

            }

         }
 else {
            Variant::operator_cast_to_Transform3D((Variant*)&local_78);
            set_item_mesh_transform(this, iVar3, (Transform3D*)&local_78);
         }

      }
 else {
         local_c8 = (Object*)0x0;
         lVar6 = Variant::get_validated_object();
         if (lVar6 != 0) {
            pOVar7 = (Object*)__dynamic_cast(lVar6, &Object::typeinfo, &Mesh::typeinfo, 0);
            if (pOVar7 != (Object*)0x0) {
               local_c8 = pOVar7;
               cVar1 = RefCounted::reference();
               if (cVar1 != '\0') {
                  set_item_mesh(this, iVar3, (Ref*)&local_c8);
                  cVar1 = RefCounted::unreference();
                  if (cVar1 != '\0') {
                     cVar1 = predelete_handler(pOVar7);
                     if (cVar1 != '\0') {
                        ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
                        Memory::free_static(pOVar7, false);
                     }

                  }

                  goto LAB_00107221;
               }

               local_c8 = (Object*)0x0;
            }

         }

         set_item_mesh(this, iVar3, (Ref*)&local_c8);
      }

   }
 else {
      Variant::operator_cast_to_String((Variant*)&local_c8);
      set_item_name(this, iVar3, (String*)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   }

   LAB_00107221:CowData<char32_t>::_unref((CowData<char32_t>*)local_d8);
   LAB_00106f75:CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}
/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
}
/* MeshLibrary::is_class_ptr(void*) const */uint MeshLibrary::is_class_ptr(MeshLibrary *this, void *param_1) {
   return (uint)CONCAT71(0x11c5, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11c4, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11c5, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11c5, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* MeshLibrary::_validate_propertyv(PropertyInfo&) const */void MeshLibrary::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* MeshLibrary::_property_can_revertv(StringName const&) const */undefined8 MeshLibrary::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* MeshLibrary::_property_get_revertv(StringName const&, Variant&) const */undefined8 MeshLibrary::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* MeshLibrary::_notificationv(int, bool) */void MeshLibrary::_notificationv(int param_1, bool param_2) {
   return;
}
/* MethodBindTRC<int>::_gen_argument_type(int) const */undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<int>::get_argument_meta(int) const */uint MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}
/* MethodBindTRC<Vector<int>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Vector<int>>::_gen_argument_type(int param_1) {
   return 0x1e;
}
/* MethodBindTRC<Vector<int>>::get_argument_meta(int) const */undefined8 MethodBindTRC<Vector<int>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<>::_gen_argument_type(int) const */undefined8 MethodBindT<>::_gen_argument_type(int param_1) {
   return 0;
}
/* MethodBindT<>::_gen_argument_type_info(int) const */undefined8 MethodBindT<>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   *(undefined4*)CONCAT44(in_register_0000003c, param_1) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x18 ) = 0;
   *(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0x20 ) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x28 ) = 6;
   *(undefined1(*) [16])( CONCAT44(in_register_0000003c, param_1) + 8 ) = (undefined1[16])0x0;
   return CONCAT44(in_register_0000003c, param_1);
}
/* MethodBindT<>::get_argument_meta(int) const */undefined8 MethodBindT<>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<int, String const&>::_gen_argument_type(int) const */char MethodBindTRC<int,String_const&>::_gen_argument_type(MethodBindTRC<int,String_const&> *this, int param_1) {
   return ( -(param_1 == 0) & 2U ) + 2;
}
/* MethodBindTRC<int, String const&>::get_argument_meta(int) const */uint MethodBindTRC<int,String_const&>::get_argument_meta(MethodBindTRC<int,String_const&> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}
/* MethodBindTRC<Ref<Texture2D>, int>::_gen_argument_type(int) const */int MethodBindTRC<Ref<Texture2D>,int>::_gen_argument_type(MethodBindTRC<Ref<Texture2D>,int> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xffffffea ) + 0x18;
}
/* MethodBindTRC<Ref<Texture2D>, int>::get_argument_meta(int) const */byte MethodBindTRC<Ref<Texture2D>,int>::get_argument_meta(MethodBindTRC<Ref<Texture2D>,int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindTRC<Array, int>::_gen_argument_type(int) const */int MethodBindTRC<Array,int>::_gen_argument_type(MethodBindTRC<Array,int> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xffffffe6 ) + 0x1c;
}
/* MethodBindTRC<Array, int>::get_argument_meta(int) const */byte MethodBindTRC<Array,int>::get_argument_meta(MethodBindTRC<Array,int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindTRC<unsigned int, int>::_gen_argument_type(int) const */undefined8 MethodBindTRC<unsigned_int,int>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<unsigned int, int>::get_argument_meta(int) const */byte MethodBindTRC<unsigned_int,int>::get_argument_meta(MethodBindTRC<unsigned_int,int> *this, int param_1) {
   if (-1 < param_1) {
      return -(param_1 == 0) & 3;
   }

   return 7;
}
/* MethodBindTRC<Ref<NavigationMesh>, int>::_gen_argument_type(int) const */int MethodBindTRC<Ref<NavigationMesh>,int>::_gen_argument_type(MethodBindTRC<Ref<NavigationMesh>,int> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xffffffea ) + 0x18;
}
/* MethodBindTRC<Ref<NavigationMesh>, int>::get_argument_meta(int) const */byte MethodBindTRC<Ref<NavigationMesh>,int>::get_argument_meta(MethodBindTRC<Ref<NavigationMesh>,int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindTRC<RenderingServer::ShadowCastingSetting, int>::_gen_argument_type(int) const */undefined8 MethodBindTRC<RenderingServer::ShadowCastingSetting,int>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<RenderingServer::ShadowCastingSetting, int>::get_argument_meta(int) const */byte MethodBindTRC<RenderingServer::ShadowCastingSetting,int>::get_argument_meta(MethodBindTRC<RenderingServer::ShadowCastingSetting,int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindTRC<Transform3D, int>::_gen_argument_type(int) const */int MethodBindTRC<Transform3D,int>::_gen_argument_type(MethodBindTRC<Transform3D,int> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xfffffff0 ) + 0x12;
}
/* MethodBindTRC<Transform3D, int>::get_argument_meta(int) const */byte MethodBindTRC<Transform3D,int>::get_argument_meta(MethodBindTRC<Transform3D,int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindTRC<Ref<Mesh>, int>::_gen_argument_type(int) const */int MethodBindTRC<Ref<Mesh>,int>::_gen_argument_type(MethodBindTRC<Ref<Mesh>,int> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xffffffea ) + 0x18;
}
/* MethodBindTRC<Ref<Mesh>, int>::get_argument_meta(int) const */byte MethodBindTRC<Ref<Mesh>,int>::get_argument_meta(MethodBindTRC<Ref<Mesh>,int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindTRC<String, int>::_gen_argument_type(int) const */int MethodBindTRC<String,int>::_gen_argument_type(MethodBindTRC<String,int> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xfffffffe ) + 4;
}
/* MethodBindTRC<String, int>::get_argument_meta(int) const */byte MethodBindTRC<String,int>::get_argument_meta(MethodBindTRC<String,int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindT<int, Ref<Texture2D> const&>::_gen_argument_type(int) const */int MethodBindT<int,Ref<Texture2D>const&>::_gen_argument_type(MethodBindT<int,Ref<Texture2D>const&> *this, int param_1) {
   int iVar1;
   iVar1 = 0;
   if ((uint)param_1 < 2) {
      iVar1 = ( -(uint)(param_1 == 0) & 0xffffffea ) + 0x18;
   }

   return iVar1;
}
/* MethodBindT<int, Ref<Texture2D> const&>::get_argument_meta(int) const */byte MethodBindT<int,Ref<Texture2D>const&>::get_argument_meta(MethodBindT<int,Ref<Texture2D>const&> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindT<int, Array const&>::_gen_argument_type(int) const */int MethodBindT<int,Array_const&>::_gen_argument_type(MethodBindT<int,Array_const&> *this, int param_1) {
   int iVar1;
   iVar1 = 0;
   if ((uint)param_1 < 2) {
      iVar1 = ( -(uint)(param_1 == 0) & 0xffffffe6 ) + 0x1c;
   }

   return iVar1;
}
/* MethodBindT<int, Array const&>::get_argument_meta(int) const */byte MethodBindT<int,Array_const&>::get_argument_meta(MethodBindT<int,Array_const&> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindT<int, unsigned int>::_gen_argument_type(int) const */char MethodBindT<int,unsigned_int>::_gen_argument_type(MethodBindT<int,unsigned_int> *this, int param_1) {
   return ( (uint)param_1 < 2 ) * '\x02';
}
/* MethodBindT<int, unsigned int>::get_argument_meta(int) const */undefined8 MethodBindT<int,unsigned_int>::get_argument_meta(MethodBindT<int,unsigned_int> *this, int param_1) {
   undefined8 uVar1;
   uVar1 = 3;
   if (( param_1 != 0 ) && ( uVar1 = param_1 != 1 )) {
      uVar1 = 0;
   }

   return uVar1;
}
/* MethodBindT<int, Ref<NavigationMesh> const&>::_gen_argument_type(int) const */int MethodBindT<int,Ref<NavigationMesh>const&>::_gen_argument_type(MethodBindT<int,Ref<NavigationMesh>const&> *this, int param_1) {
   int iVar1;
   iVar1 = 0;
   if ((uint)param_1 < 2) {
      iVar1 = ( -(uint)(param_1 == 0) & 0xffffffea ) + 0x18;
   }

   return iVar1;
}
/* MethodBindT<int, Ref<NavigationMesh> const&>::get_argument_meta(int) const */byte MethodBindT<int,Ref<NavigationMesh>const&>::get_argument_meta(MethodBindT<int,Ref<NavigationMesh>const&> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindT<int, RenderingServer::ShadowCastingSetting>::_gen_argument_type(int) const */char MethodBindT<int,RenderingServer::ShadowCastingSetting>::_gen_argument_type(MethodBindT<int,RenderingServer::ShadowCastingSetting> *this, int param_1) {
   return ( (uint)param_1 < 2 ) * '\x02';
}
/* MethodBindT<int, RenderingServer::ShadowCastingSetting>::get_argument_meta(int) const */byte MethodBindT<int,RenderingServer::ShadowCastingSetting>::get_argument_meta(MethodBindT<int,RenderingServer::ShadowCastingSetting> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindT<int, Transform3D const&>::_gen_argument_type(int) const */int MethodBindT<int,Transform3D_const&>::_gen_argument_type(MethodBindT<int,Transform3D_const&> *this, int param_1) {
   int iVar1;
   iVar1 = 0;
   if ((uint)param_1 < 2) {
      iVar1 = ( -(uint)(param_1 == 0) & 0xfffffff0 ) + 0x12;
   }

   return iVar1;
}
/* MethodBindT<int, Transform3D const&>::get_argument_meta(int) const */byte MethodBindT<int,Transform3D_const&>::get_argument_meta(MethodBindT<int,Transform3D_const&> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindT<int, Ref<Mesh> const&>::_gen_argument_type(int) const */int MethodBindT<int,Ref<Mesh>const&>::_gen_argument_type(MethodBindT<int,Ref<Mesh>const&> *this, int param_1) {
   int iVar1;
   iVar1 = 0;
   if ((uint)param_1 < 2) {
      iVar1 = ( -(uint)(param_1 == 0) & 0xffffffea ) + 0x18;
   }

   return iVar1;
}
/* MethodBindT<int, Ref<Mesh> const&>::get_argument_meta(int) const */byte MethodBindT<int,Ref<Mesh>const&>::get_argument_meta(MethodBindT<int,Ref<Mesh>const&> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindT<int, String const&>::_gen_argument_type(int) const */int MethodBindT<int,String_const&>::_gen_argument_type(MethodBindT<int,String_const&> *this, int param_1) {
   int iVar1;
   iVar1 = 0;
   if ((uint)param_1 < 2) {
      iVar1 = ( -(uint)(param_1 == 0) & 0xfffffffe ) + 4;
   }

   return iVar1;
}
/* MethodBindT<int, String const&>::get_argument_meta(int) const */byte MethodBindT<int,String_const&>::get_argument_meta(MethodBindT<int,String_const&> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindT<int>::_gen_argument_type(int) const */char MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<int>::get_argument_meta(int) const */byte MethodBindT<int>::get_argument_meta(MethodBindT<int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindT<int, String const&>::~MethodBindT() */void MethodBindT<int,String_const&>::~MethodBindT(MethodBindT<int,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011bd88;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int, String const&>::~MethodBindT() */void MethodBindT<int,String_const&>::~MethodBindT(MethodBindT<int,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011bd88;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int, Ref<Mesh> const&>::~MethodBindT() */void MethodBindT<int,Ref<Mesh>const&>::~MethodBindT(MethodBindT<int,Ref<Mesh>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011bde8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int, Ref<Mesh> const&>::~MethodBindT() */void MethodBindT<int,Ref<Mesh>const&>::~MethodBindT(MethodBindT<int,Ref<Mesh>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011bde8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int, RenderingServer::ShadowCastingSetting>::~MethodBindT() */void MethodBindT<int,RenderingServer::ShadowCastingSetting>::~MethodBindT(MethodBindT<int,RenderingServer::ShadowCastingSetting> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011bea8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int, RenderingServer::ShadowCastingSetting>::~MethodBindT() */void MethodBindT<int,RenderingServer::ShadowCastingSetting>::~MethodBindT(MethodBindT<int,RenderingServer::ShadowCastingSetting> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011bea8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int, Ref<NavigationMesh> const&>::~MethodBindT() */void MethodBindT<int,Ref<NavigationMesh>const&>::~MethodBindT(MethodBindT<int,Ref<NavigationMesh>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011bf08;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int, Ref<NavigationMesh> const&>::~MethodBindT() */void MethodBindT<int,Ref<NavigationMesh>const&>::~MethodBindT(MethodBindT<int,Ref<NavigationMesh>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011bf08;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int, Transform3D const&>::~MethodBindT() */void MethodBindT<int,Transform3D_const&>::~MethodBindT(MethodBindT<int,Transform3D_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011be48;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int, Transform3D const&>::~MethodBindT() */void MethodBindT<int,Transform3D_const&>::~MethodBindT(MethodBindT<int,Transform3D_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011be48;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int, unsigned int>::~MethodBindT() */void MethodBindT<int,unsigned_int>::~MethodBindT(MethodBindT<int,unsigned_int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011bf68;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int, unsigned int>::~MethodBindT() */void MethodBindT<int,unsigned_int>::~MethodBindT(MethodBindT<int,unsigned_int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011bf68;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int, Array const&>::~MethodBindT() */void MethodBindT<int,Array_const&>::~MethodBindT(MethodBindT<int,Array_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011bfc8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int, Array const&>::~MethodBindT() */void MethodBindT<int,Array_const&>::~MethodBindT(MethodBindT<int,Array_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011bfc8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int, Ref<Texture2D> const&>::~MethodBindT() */void MethodBindT<int,Ref<Texture2D>const&>::~MethodBindT(MethodBindT<int,Ref<Texture2D>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c028;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int, Ref<Texture2D> const&>::~MethodBindT() */void MethodBindT<int,Ref<Texture2D>const&>::~MethodBindT(MethodBindT<int,Ref<Texture2D>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c028;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<String, int>::~MethodBindTRC() */void MethodBindTRC<String,int>::~MethodBindTRC(MethodBindTRC<String,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c088;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<String, int>::~MethodBindTRC() */void MethodBindTRC<String,int>::~MethodBindTRC(MethodBindTRC<String,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c088;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Ref<Mesh>, int>::~MethodBindTRC() */void MethodBindTRC<Ref<Mesh>,int>::~MethodBindTRC(MethodBindTRC<Ref<Mesh>,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c0e8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Ref<Mesh>, int>::~MethodBindTRC() */void MethodBindTRC<Ref<Mesh>,int>::~MethodBindTRC(MethodBindTRC<Ref<Mesh>,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c0e8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<RenderingServer::ShadowCastingSetting, int>::~MethodBindTRC() */void MethodBindTRC<RenderingServer::ShadowCastingSetting,int>::~MethodBindTRC(MethodBindTRC<RenderingServer::ShadowCastingSetting,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c1a8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<RenderingServer::ShadowCastingSetting, int>::~MethodBindTRC() */void MethodBindTRC<RenderingServer::ShadowCastingSetting,int>::~MethodBindTRC(MethodBindTRC<RenderingServer::ShadowCastingSetting,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c1a8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Ref<NavigationMesh>, int>::~MethodBindTRC() */void MethodBindTRC<Ref<NavigationMesh>,int>::~MethodBindTRC(MethodBindTRC<Ref<NavigationMesh>,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c208;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Ref<NavigationMesh>, int>::~MethodBindTRC() */void MethodBindTRC<Ref<NavigationMesh>,int>::~MethodBindTRC(MethodBindTRC<Ref<NavigationMesh>,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c208;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Transform3D, int>::~MethodBindTRC() */void MethodBindTRC<Transform3D,int>::~MethodBindTRC(MethodBindTRC<Transform3D,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c148;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Transform3D, int>::~MethodBindTRC() */void MethodBindTRC<Transform3D,int>::~MethodBindTRC(MethodBindTRC<Transform3D,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c148;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<unsigned int, int>::~MethodBindTRC() */void MethodBindTRC<unsigned_int,int>::~MethodBindTRC(MethodBindTRC<unsigned_int,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c268;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<unsigned int, int>::~MethodBindTRC() */void MethodBindTRC<unsigned_int,int>::~MethodBindTRC(MethodBindTRC<unsigned_int,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c268;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Array, int>::~MethodBindTRC() */void MethodBindTRC<Array,int>::~MethodBindTRC(MethodBindTRC<Array,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c2c8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Array, int>::~MethodBindTRC() */void MethodBindTRC<Array,int>::~MethodBindTRC(MethodBindTRC<Array,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c2c8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Ref<Texture2D>, int>::~MethodBindTRC() */void MethodBindTRC<Ref<Texture2D>,int>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c328;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Ref<Texture2D>, int>::~MethodBindTRC() */void MethodBindTRC<Ref<Texture2D>,int>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c328;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011bd28;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011bd28;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<int, String const&>::~MethodBindTRC() */void MethodBindTRC<int,String_const&>::~MethodBindTRC(MethodBindTRC<int,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c388;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<int, String const&>::~MethodBindTRC() */void MethodBindTRC<int,String_const&>::~MethodBindTRC(MethodBindTRC<int,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c388;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c3e8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c3e8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Vector<int>>::~MethodBindTRC() */void MethodBindTRC<Vector<int>>::~MethodBindTRC(MethodBindTRC<Vector<int>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c448;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Vector<int>>::~MethodBindTRC() */void MethodBindTRC<Vector<int>>::~MethodBindTRC(MethodBindTRC<Vector<int>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c448;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c4a8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c4a8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MeshLibrary::get_last_unused_item_id() const [clone .cold] */void MeshLibrary::get_last_unused_item_id(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<int>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<MeshLibrary::ShapeData>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<MeshLibrary::ShapeData>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* RBMap<int, MeshLibrary::Item, Comparator<int>, DefaultAllocator>::_set_color(RBMap<int,
   MeshLibrary::Item, Comparator<int>, DefaultAllocator>::Element*, int) [clone .part.0] */void RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::_set_color(Element *param_1, int param_2) {
   _err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
   return;
}
/* MeshLibrary::get_base_extension() const */MeshLibrary * __thiscall MeshLibrary::get_base_extension(MeshLibrary *this){
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
/* MeshLibrary::_get_class_namev() const */undefined8 *MeshLibrary::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00108483:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00108483;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "MeshLibrary");
         goto LAB_001084ee;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "MeshLibrary");
   LAB_001084ee:return &_get_class_namev();
}
/* MeshLibrary::get_class() const */void MeshLibrary::get_class(void) {
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
/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */void Variant::operator =(Variant *this, Variant *param_1) {
   undefined8 uVar1;
   if (this != param_1) {
      if (needs_deinit[*(int*)this] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)this = 0;
      *(undefined4*)this = *(undefined4*)param_1;
      uVar1 = *(undefined8*)( param_1 + 0x10 );
      *(undefined8*)( this + 8 ) = *(undefined8*)( param_1 + 8 );
      *(undefined8*)( this + 0x10 ) = uVar1;
      *(undefined4*)param_1 = 0;
      return;
   }

   return;
}
/* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)( this + 0x20 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x20 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x20 );
         *(undefined8*)( this + 0x20 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x10 ) != 0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 8 );
         *(undefined8*)( this + 8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */void PropertyInfo::PropertyInfo(PropertyInfo *this, undefined4 param_2, CowData *param_3, int param_4, CowData *param_5, undefined4 param_6, StringName *param_7) {
   long lVar1;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 8 ) = 0;
   lVar1 = *(long*)param_3;
   *(undefined4*)this = param_2;
   if (lVar1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 8 ), param_3);
   }

   *(undefined8*)( this + 0x20 ) = 0;
   lVar1 = *(long*)param_5;
   *(undefined8*)( this + 0x10 ) = 0;
   *(int*)( this + 0x18 ) = param_4;
   if (lVar1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), param_5);
      param_4 = *(int*)( this + 0x18 );
   }

   *(undefined4*)( this + 0x28 ) = param_6;
   if (param_4 == 0x11) {
      StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
      if (*(long*)( this + 0x10 ) == local_48) {
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(long*)( this + 0x10 ) = local_48;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      StringName::operator =((StringName*)( this + 0x10 ), param_7);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodDefinition::~MethodDefinition() */void MethodDefinition::~MethodDefinition(MethodDefinition *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   long lVar5;
   if (*(long*)( this + 0x10 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x10 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x10 );
         if (plVar1 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = plVar1[-1];
         *(undefined8*)( this + 0x10 ) = 0;
         if (lVar2 != 0) {
            lVar5 = 0;
            plVar4 = plVar1;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar4 != 0 )) {
                  StringName::unref();
               }

               lVar5 = lVar5 + 1;
               plVar4 = plVar4 + 1;
            }
 while ( lVar2 != lVar5 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }

   return;
}
/* Ref<Shape3D>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */void Ref<Shape3D>::operator =(Ref<Shape3D> *this, Variant *param_1) {
   Object *pOVar1;
   char cVar2;
   Object *pOVar3;
   pOVar3 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)this;
   if (pOVar1 == pOVar3) {
      return;
   }

   if (pOVar3 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
   }
 else {
      pOVar3 = (Object*)__dynamic_cast(pOVar3, &Object::typeinfo, &Shape3D::typeinfo, 0);
      if (pOVar1 == pOVar3) {
         return;
      }

      *(Object**)this = pOVar3;
      if (( pOVar3 != (Object*)0x0 ) && ( cVar2 = cVar2 == '\0' )) {
         *(undefined8*)this = 0;
      }

      if (pOVar1 == (Object*)0x0) {
         return;
      }

   }

   cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
      ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
      Memory::free_static(pOVar1, false);
      return;
   }

   return;
}
/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) {
      *(undefined8*)this = 0;
      return;
   }

   lVar2 = *(long*)this;
   *(undefined8*)this = 0;
   Memory::free_static((void*)( lVar2 + -0x10 ), false);
   return;
}
/* MethodBindTRC<Vector<int>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Vector<int>>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC10;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *puVar1 = 0x1e;
   puVar1[6] = 0;
   *(undefined8*)( puVar1 + 8 ) = 0;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar1[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar1 + 8 ), (CowData*)&local_58);
      puVar1[10] = 6;
      if (puVar1[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar1 + 8 ), false);
         if (*(undefined**)( puVar1 + 4 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar1 + 4 ) = local_48;
         }

         goto LAB_00108ac5;
      }

   }

   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_50);
   LAB_00108ac5:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x00108d10) *//* String vformat<char const*, int>(String const&, char const* const, int const) */String *vformat<char_const*,int>(String *param_1, char *param_2, int param_3) {
   Variant *pVVar1;
   Variant *pVVar2;
   int in_ECX;
   undefined4 in_register_00000014;
   int iVar3;
   long in_FS_OFFSET;
   Array local_d8[8];
   undefined8 local_d0[9];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_88, (char*)CONCAT44(in_register_00000014, param_3));
   Variant::Variant(local_70, in_ECX);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, (bool*)param_2);
   *(undefined8*)param_1 = local_d0[0];
   local_d0[0] = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_d0);
   pVVar2 = (Variant*)local_40;
   Array::~Array(local_d8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* godot::details::enum_qualified_name_to_class_info_name(String const&) */details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1){
   long *plVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   long *plVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   undefined8 local_60;
   char local_58[8];
   long *local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   String::split(local_58, SUB81(param_1, 0), 0x108e9f);
   if (( local_50 != (long*)0x0 ) && ( 2 < local_50[-1] )) {
      local_60 = 0;
      local_48 = &_LC11;
      local_40 = 1;
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == (long*)0x0) {
         lVar7 = 0;
         lVar6 = -2;
      }
 else {
         lVar7 = local_50[-1];
         lVar6 = lVar7 + -2;
         if (-1 < lVar6) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar6 ));
            String::operator +((String*)this, (String*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            goto LAB_00108f5a;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar7, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   local_60 = 0;
   local_48 = &_LC11;
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)this);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_00108f5a:plVar4 = local_50;
   if (local_50 != (long*)0x0) {
      LOCK();
      plVar5 = local_50 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_50 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar7 = local_50[-1];
         local_50 = (long*)0x0;
         if (lVar7 != 0) {
            lVar6 = 0;
            plVar5 = plVar4;
            do {
               if (*plVar5 != 0) {
                  LOCK();
                  plVar1 = (long*)( *plVar5 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar2 = *plVar5;
                     *plVar5 = 0;
                     Memory::free_static((void*)( lVar2 + -0x10 ), false);
                  }

               }

               lVar6 = lVar6 + 1;
               plVar5 = plVar5 + 1;
            }
 while ( lVar7 != lVar6 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   char *pcVar4;
   long lVar5;
   char cVar6;
   long lVar7;
   undefined8 uVar8;
   long in_FS_OFFSET;
   bool bVar9;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar5 = *(long*)( lVar2 + 0x20 );
      if (lVar5 == 0) {
         local_60 = 0;
      }
 else {
         pcVar4 = *(char**)( lVar5 + 8 );
         local_60 = 0;
         if (pcVar4 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
            if (*(long*)( lVar5 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_0010960f;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar3 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar3 + 1;
                     lVar7 = lVar3;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar7 != -1) {
                  local_60 = *(long*)( lVar5 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010960f:cVar6 = String::operator ==(param_1, (String*)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_001096c3;
   }

   cVar6 = String::operator ==(param_1, "RefCounted");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar5 = *(long*)( lVar2 + 0x20 );
         if (lVar5 == 0) {
            local_60 = 0;
         }
 else {
            pcVar4 = *(char**)( lVar5 + 8 );
            local_60 = 0;
            if (pcVar4 == (char*)0x0) {
               if (*(long*)( lVar5 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar4);
               local_58 = pcVar4;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar6 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar6 != '\0') goto LAB_001096c3;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar8 = String::operator ==(param_1, "Object");
         return uVar8;
      }

   }
 else {
      LAB_001096c3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Resource::is_class(String const&) const */undefined8 Resource::is_class(Resource *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_0010984f;
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

      LAB_0010984f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00109903;
   }

   cVar5 = String::operator ==(param_1, "Resource");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00109903:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MeshLibrary::is_class(String const&) const */undefined8 MeshLibrary::is_class(MeshLibrary *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_001099cf;
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

      LAB_001099cf:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00109a83;
   }

   cVar5 = String::operator ==(param_1, "MeshLibrary");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = Resource::is_class((Resource*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00109a83:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Resource::initialize_class() [clone .part.0] */void Resource::initialize_class(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
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

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      if ((code*)PTR__bind_methods_00122008 != RefCounted::_bind_methods) {
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

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   if ((code*)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
      Resource::_bind_methods();
   }

   initialize_class()::initialized =
   1;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTRC<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<int>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC10;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *puVar1 = 2;
   puVar1[6] = 0;
   *(undefined8*)( puVar1 + 8 ) = 0;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar1[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar1 + 8 ), (CowData*)&local_58);
      puVar1[10] = 6;
      if (puVar1[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar1 + 8 ), false);
         if (*(undefined**)( puVar1 + 4 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar1 + 4 ) = local_48;
         }

         goto LAB_00109e15;
      }

   }

   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_50);
   LAB_00109e15:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
   undefined7 in_register_00000031;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = "RefCounted";
   local_88 = 0;
   local_90 = 0;
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
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_00109fdc;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00109fdc:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "RefCounted", false);
   ClassDB::get_property_list((StringName*)&local_78, (List*)CONCAT71(in_register_00000031, param_2), true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Resource::_get_property_listv(Resource *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
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
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0010a241;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010a241:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
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
/* MeshLibrary::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void MeshLibrary::_get_property_listv(MeshLibrary *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "MeshLibrary";
   local_70 = 0xb;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "MeshLibrary";
   local_98 = 0;
   local_70 = 0xb;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0010a4f1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010a4f1:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "MeshLibrary", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   _get_property_list(this, param_1);
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
/* Ref<Shape3D>::unref() */void Ref<Shape3D>::unref(Ref<Shape3D> *this) {
   Object *pOVar1;
   char cVar2;
   if (*(long*)this != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)this;
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            *(undefined8*)this = 0;
            return;
         }

      }

   }

   *(undefined8*)this = 0;
   return;
}
/* Ref<Texture2D>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */void Ref<Texture2D>::operator =(Ref<Texture2D> *this, Variant *param_1) {
   Object *pOVar1;
   char cVar2;
   Object *pOVar3;
   pOVar3 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)this;
   if (pOVar1 == pOVar3) {
      return;
   }

   if (pOVar3 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
   }
 else {
      pOVar3 = (Object*)__dynamic_cast(pOVar3, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar1 == pOVar3) {
         return;
      }

      *(Object**)this = pOVar3;
      if (( pOVar3 != (Object*)0x0 ) && ( cVar2 = cVar2 == '\0' )) {
         *(undefined8*)this = 0;
      }

      if (pOVar1 == (Object*)0x0) {
         return;
      }

   }

   cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
      ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
      Memory::free_static(pOVar1, false);
      return;
   }

   return;
}
/* Ref<Texture2D>::unref() */void Ref<Texture2D>::unref(Ref<Texture2D> *this) {
   Object *pOVar1;
   char cVar2;
   if (*(long*)this != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)this;
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            *(undefined8*)this = 0;
            return;
         }

      }

   }

   *(undefined8*)this = 0;
   return;
}
/* Ref<NavigationMesh>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */void Ref<NavigationMesh>::operator =(Ref<NavigationMesh> *this, Variant *param_1) {
   Object *pOVar1;
   char cVar2;
   Object *pOVar3;
   pOVar3 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)this;
   if (pOVar1 == pOVar3) {
      return;
   }

   if (pOVar3 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
   }
 else {
      pOVar3 = (Object*)__dynamic_cast(pOVar3, &Object::typeinfo, &NavigationMesh::typeinfo, 0);
      if (pOVar1 == pOVar3) {
         return;
      }

      *(Object**)this = pOVar3;
      if (( pOVar3 != (Object*)0x0 ) && ( cVar2 = cVar2 == '\0' )) {
         *(undefined8*)this = 0;
      }

      if (pOVar1 == (Object*)0x0) {
         return;
      }

   }

   cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
      ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
      Memory::free_static(pOVar1, false);
      return;
   }

   return;
}
/* Ref<NavigationMesh>::unref() */void Ref<NavigationMesh>::unref(Ref<NavigationMesh> *this) {
   Object *pOVar1;
   char cVar2;
   if (*(long*)this != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)this;
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            *(undefined8*)this = 0;
            return;
         }

      }

   }

   *(undefined8*)this = 0;
   return;
}
/* MethodBind* create_method_bind<MeshLibrary, int>(void (MeshLibrary::*)(int)) */MethodBind *create_method_bind<MeshLibrary,int>(_func_void_int *param_1) {
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
   *(_func_void_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011bd28;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "MeshLibrary";
   local_30 = 0xb;
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
/* MethodBind* create_method_bind<MeshLibrary, int, String const&>(void (MeshLibrary::*)(int, String
   const&)) */MethodBind *create_method_bind<MeshLibrary,int,String_const&>(_func_void_int_String_ptr *param_1) {
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
   *(_func_void_int_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011bd88;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "MeshLibrary";
   local_30 = 0xb;
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
/* MethodBind* create_method_bind<MeshLibrary, int, Ref<Mesh> const&>(void (MeshLibrary::*)(int,
   Ref<Mesh> const&)) */MethodBind *create_method_bind<MeshLibrary,int,Ref<Mesh>const&>(_func_void_int_Ref_ptr *param_1) {
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
   *(_func_void_int_Ref_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011bde8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "MeshLibrary";
   local_30 = 0xb;
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
/* MethodBind* create_method_bind<MeshLibrary, int, Transform3D const&>(void (MeshLibrary::*)(int,
   Transform3D const&)) */MethodBind *create_method_bind<MeshLibrary,int,Transform3D_const&>(_func_void_int_Transform3D_ptr *param_1) {
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
   *(_func_void_int_Transform3D_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011be48;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "MeshLibrary";
   local_30 = 0xb;
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
/* MethodBind* create_method_bind<MeshLibrary, int, RenderingServer::ShadowCastingSetting>(void
   (MeshLibrary::*)(int, RenderingServer::ShadowCastingSetting)) */MethodBind *create_method_bind<MeshLibrary,int,RenderingServer::ShadowCastingSetting>(_func_void_int_ShadowCastingSetting *param_1) {
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
   *(_func_void_int_ShadowCastingSetting**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011bea8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "MeshLibrary";
   local_30 = 0xb;
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
/* MethodBind* create_method_bind<MeshLibrary, int, Ref<NavigationMesh> const&>(void
   (MeshLibrary::*)(int, Ref<NavigationMesh> const&)) */MethodBind *create_method_bind<MeshLibrary,int,Ref<NavigationMesh>const&>(_func_void_int_Ref_ptr *param_1) {
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
   *(_func_void_int_Ref_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011bf08;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "MeshLibrary";
   local_30 = 0xb;
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
/* MethodBind* create_method_bind<MeshLibrary, int, unsigned int>(void (MeshLibrary::*)(int,
   unsigned int)) */MethodBind *create_method_bind<MeshLibrary,int,unsigned_int>(_func_void_int_uint *param_1) {
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
   *(_func_void_int_uint**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011bf68;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "MeshLibrary";
   local_30 = 0xb;
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
/* MethodBind* create_method_bind<MeshLibrary, int, Array const&>(void (MeshLibrary::*)(int, Array
   const&)) */MethodBind *create_method_bind<MeshLibrary,int,Array_const&>(_func_void_int_Array_ptr *param_1) {
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
   *(_func_void_int_Array_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011bfc8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "MeshLibrary";
   local_30 = 0xb;
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
/* MethodBind* create_method_bind<MeshLibrary, int, Ref<Texture2D> const&>(void
   (MeshLibrary::*)(int, Ref<Texture2D> const&)) */MethodBind *create_method_bind<MeshLibrary,int,Ref<Texture2D>const&>(_func_void_int_Ref_ptr *param_1) {
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
   *(_func_void_int_Ref_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011c028;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "MeshLibrary";
   local_30 = 0xb;
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
/* MethodBind* create_method_bind<MeshLibrary, String, int>(String (MeshLibrary::*)(int) const) */MethodBind *create_method_bind<MeshLibrary,String,int>(_func_String_int *param_1) {
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
   *(_func_String_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011c088;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "MeshLibrary";
   local_30 = 0xb;
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
/* MethodBind* create_method_bind<MeshLibrary, Ref<Mesh>, int>(Ref<Mesh> (MeshLibrary::*)(int)
   const) */MethodBind *create_method_bind<MeshLibrary,Ref<Mesh>,int>(_func_Ref_int *param_1) {
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
   *(_func_Ref_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011c0e8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "MeshLibrary";
   local_30 = 0xb;
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
/* MethodBind* create_method_bind<MeshLibrary, Transform3D, int>(Transform3D (MeshLibrary::*)(int)
   const) */MethodBind *create_method_bind<MeshLibrary,Transform3D,int>(_func_Transform3D_int *param_1) {
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
   *(_func_Transform3D_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011c148;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "MeshLibrary";
   local_30 = 0xb;
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
/* MethodBind* create_method_bind<MeshLibrary, RenderingServer::ShadowCastingSetting,
   int>(RenderingServer::ShadowCastingSetting (MeshLibrary::*)(int) const) */MethodBind *create_method_bind<MeshLibrary,RenderingServer::ShadowCastingSetting,int>(_func_ShadowCastingSetting_int *param_1) {
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
   *(_func_ShadowCastingSetting_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011c1a8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "MeshLibrary";
   local_30 = 0xb;
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
/* MethodBind* create_method_bind<MeshLibrary, Ref<NavigationMesh>, int>(Ref<NavigationMesh>
   (MeshLibrary::*)(int) const) */MethodBind *create_method_bind<MeshLibrary,Ref<NavigationMesh>,int>(_func_Ref_int *param_1) {
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
   *(_func_Ref_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011c208;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "MeshLibrary";
   local_30 = 0xb;
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
/* MethodBind* create_method_bind<MeshLibrary, unsigned int, int>(unsigned int (MeshLibrary::*)(int)
   const) */MethodBind *create_method_bind<MeshLibrary,unsigned_int,int>(_func_uint_int *param_1) {
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
   *(_func_uint_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011c268;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "MeshLibrary";
   local_30 = 0xb;
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
/* MethodBind* create_method_bind<MeshLibrary, Array, int>(Array (MeshLibrary::*)(int) const) */MethodBind *create_method_bind<MeshLibrary,Array,int>(_func_Array_int *param_1) {
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
   *(_func_Array_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011c2c8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "MeshLibrary";
   local_30 = 0xb;
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
/* MethodBind* create_method_bind<MeshLibrary, Ref<Texture2D>, int>(Ref<Texture2D>
   (MeshLibrary::*)(int) const) */MethodBind *create_method_bind<MeshLibrary,Ref<Texture2D>,int>(_func_Ref_int *param_1) {
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
   *(_func_Ref_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011c328;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "MeshLibrary";
   local_30 = 0xb;
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
/* MethodBind* create_method_bind<MeshLibrary, int, String const&>(int (MeshLibrary::*)(String
   const&) const) */MethodBind *create_method_bind<MeshLibrary,int,String_const&>(_func_int_String_ptr *param_1) {
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
   *(_func_int_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011c388;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "MeshLibrary";
   local_30 = 0xb;
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
/* MethodBind* create_method_bind<MeshLibrary>(void (MeshLibrary::*)()) */MethodBind *create_method_bind<MeshLibrary>(_func_void *param_1) {
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
   *(_func_void**)( this + 0x58 ) = param_1;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   *(undefined***)this = &PTR__gen_argument_type_0011c3e8;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "MeshLibrary";
   local_30 = 0xb;
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
/* MethodBind* create_method_bind<MeshLibrary, Vector<int>>(Vector<int> (MeshLibrary::*)() const) */MethodBind *create_method_bind<MeshLibrary,Vector<int>>(_func_Vector *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011c448;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "MeshLibrary";
   local_30 = 0xb;
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
/* MethodBind* create_method_bind<MeshLibrary, int>(int (MeshLibrary::*)() const) */MethodBind *create_method_bind<MeshLibrary,int>(_func_int *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011c4a8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "MeshLibrary";
   local_30 = 0xb;
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
/* MeshLibrary::_initialize_classv() */void MeshLibrary::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (Resource::initialize_class() == '\0') {
         Resource::initialize_class();
      }

      local_58 = 0;
      local_40 = 8;
      local_48 = "Resource";
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "MeshLibrary";
      local_60 = 0;
      local_40 = 0xb;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      _bind_methods();
      initialize_class()::initialized =
      '\x01';
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<int>::_realloc(long) */undefined8 CowData<int>::_realloc(CowData<int> *this, long param_1) {
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
/* CowData<MeshLibrary::ShapeData>::_unref() */void CowData<MeshLibrary::ShapeData>::_unref(CowData<MeshLibrary::ShapeData> *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   code *pcVar4;
   char cVar5;
   long *plVar6;
   long lVar7;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) {
      *(undefined8*)this = 0;
      return;
   }

   plVar1 = *(long**)this;
   if (plVar1 == (long*)0x0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   lVar2 = plVar1[-1];
   *(undefined8*)this = 0;
   if (lVar2 != 0) {
      lVar7 = 0;
      plVar6 = plVar1;
      LAB_0010c3fd:do {
         if (*plVar6 != 0) {
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
               pOVar3 = (Object*)*plVar6;
               cVar5 = predelete_handler(pOVar3);
               if (cVar5 != '\0') {
                  lVar7 = lVar7 + 1;
                  plVar6 = plVar6 + 7;
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
                  if (lVar2 == lVar7) break;
                  goto LAB_0010c3fd;
               }

            }

         }

         lVar7 = lVar7 + 1;
         plVar6 = plVar6 + 7;
      }
 while ( lVar2 != lVar7 );
   }

   Memory::free_static(plVar1 + -2, false);
   return;
}
/* MeshLibrary::Item::~Item() */void MeshLibrary::Item::~Item(Item *this) {
   Object *pOVar1;
   char cVar2;
   if (*(long*)( this + 0x60 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x60 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0x58 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x58 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   CowData<MeshLibrary::ShapeData>::_unref((CowData<MeshLibrary::ShapeData>*)( this + 0x50 ));
   if (*(long*)( this + 8 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 8 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            CowData<char32_t>::_unref((CowData<char32_t>*)this);
            return;
         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* MeshLibrary::_getv(StringName const&, Variant&) const */void MeshLibrary::_getv(MeshLibrary *this, StringName *param_1, Variant *param_2) {
   _get(this, param_1, param_2);
   return;
}
/* MeshLibrary::Item::Item(MeshLibrary::Item const&) */void MeshLibrary::Item::Item(Item *this, Item *param_1) {
   undefined4 uVar1;
   long lVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   char cVar9;
   *(undefined8*)this = 0;
   if (*(long*)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)this, (CowData*)param_1);
   }

   *(undefined8*)( this + 8 ) = 0;
   if (*(long*)( param_1 + 8 ) != 0) {
      *(long*)( this + 8 ) = *(long*)( param_1 + 8 );
      cVar9 = RefCounted::reference();
      if (cVar9 == '\0') {
         *(undefined8*)( this + 8 ) = 0;
      }

   }

   uVar3 = *(undefined8*)( param_1 + 0x10 );
   uVar4 = *(undefined8*)( param_1 + 0x18 );
   uVar5 = *(undefined8*)( param_1 + 0x20 );
   uVar6 = *(undefined8*)( param_1 + 0x28 );
   uVar7 = *(undefined8*)( param_1 + 0x30 );
   uVar8 = *(undefined8*)( param_1 + 0x38 );
   uVar1 = *(undefined4*)( param_1 + 0x40 );
   *(undefined8*)( this + 0x50 ) = 0;
   lVar2 = *(long*)( param_1 + 0x50 );
   *(undefined8*)( this + 0x10 ) = uVar3;
   *(undefined8*)( this + 0x18 ) = uVar4;
   *(undefined4*)( this + 0x40 ) = uVar1;
   *(undefined8*)( this + 0x20 ) = uVar5;
   *(undefined8*)( this + 0x28 ) = uVar6;
   *(undefined8*)( this + 0x30 ) = uVar7;
   *(undefined8*)( this + 0x38 ) = uVar8;
   if (lVar2 != 0) {
      CowData<MeshLibrary::ShapeData>::_ref((CowData<MeshLibrary::ShapeData>*)( this + 0x50 ), (CowData*)( param_1 + 0x50 ));
   }

   *(undefined8*)( this + 0x58 ) = 0;
   if (*(long*)( param_1 + 0x58 ) != 0) {
      *(long*)( this + 0x58 ) = *(long*)( param_1 + 0x58 );
      cVar9 = RefCounted::reference();
      if (cVar9 == '\0') {
         *(undefined8*)( this + 0x58 ) = 0;
      }

   }

   *(undefined8*)( this + 0x60 ) = 0;
   if (*(long*)( param_1 + 0x60 ) != 0) {
      *(long*)( this + 0x60 ) = *(long*)( param_1 + 0x60 );
      cVar9 = RefCounted::reference();
      if (cVar9 == '\0') {
         *(undefined8*)( this + 0x60 ) = 0;
      }

   }

   uVar3 = *(undefined8*)( param_1 + 0x70 );
   uVar4 = *(undefined8*)( param_1 + 0x78 );
   uVar5 = *(undefined8*)( param_1 + 0x80 );
   uVar6 = *(undefined8*)( param_1 + 0x88 );
   uVar7 = *(undefined8*)( param_1 + 0x90 );
   uVar1 = *(undefined4*)( param_1 + 0x98 );
   *(undefined8*)( this + 0x68 ) = *(undefined8*)( param_1 + 0x68 );
   *(undefined8*)( this + 0x70 ) = uVar3;
   *(undefined4*)( this + 0x98 ) = uVar1;
   *(undefined8*)( this + 0x78 ) = uVar4;
   *(undefined8*)( this + 0x80 ) = uVar5;
   *(undefined8*)( this + 0x88 ) = uVar6;
   *(undefined8*)( this + 0x90 ) = uVar7;
   return;
}
/* RBMap<int, MeshLibrary::Item, Comparator<int>, DefaultAllocator>::_Data::_create_root() */void RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::_Data::_create_root(_Data *this) {
   undefined8 uVar1;
   char cVar2;
   undefined4 *puVar3;
   long lVar4;
   Object **ppOVar5;
   long in_FS_OFFSET;
   byte bVar6;
   undefined8 local_178;
   Object *local_170;
   undefined1 local_168[16];
   undefined1 local_158[16];
   uint local_148;
   undefined4 local_138;
   CowData<MeshLibrary::ShapeData> local_128[24];
   undefined1 local_110[16];
   undefined1 local_100[16];
   uint local_f0;
   undefined4 local_e0;
   undefined4 local_d8;
   Item local_d0[8];
   Object *local_c8;
   CowData<MeshLibrary::ShapeData> local_80[8];
   Object *local_78;
   Object *local_70;
   long local_30;
   bVar6 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar3 = (undefined4*)operator_new(0xd8, DefaultAllocator::alloc);
   local_178 = 0;
   ppOVar5 = &local_170;
   for (lVar4 = 0x13; lVar4 != 0; lVar4 = lVar4 + -1) {
      *ppOVar5 = (Object*)0x0;
      ppOVar5 = ppOVar5 + (ulong)bVar6 * -2 + 1;
   }

   local_168 = ZEXT416(_LC33);
   local_148 = _LC33;
   local_f0 = _LC33;
   local_138 = 1;
   local_e0 = 1;
   local_d8 = 0;
   local_158 = local_168;
   local_110 = local_168;
   local_100 = local_168;
   MeshLibrary::Item::Item(local_d0, (Item*)&local_178);
   *puVar3 = 0;
   *(undefined8*)( puVar3 + 10 ) = 0;
   puVar3[0xc] = local_d8;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar3 + 6 ) = (undefined1[16])0x0;
   MeshLibrary::Item::Item((Item*)( puVar3 + 0xe ), local_d0);
   *(undefined4**)this = puVar3;
   if (local_70 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_70);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)local_70 + 0x140 ) )(local_70);
            Memory::free_static(local_70, false);
         }

      }

   }

   if (local_78 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_78);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)local_78 + 0x140 ) )(local_78);
            Memory::free_static(local_78, false);
         }

      }

   }

   CowData<MeshLibrary::ShapeData>::_unref(local_80);
   if (local_c8 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_c8);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)local_c8 + 0x140 ) )(local_c8);
            Memory::free_static(local_c8, false);
         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_d0);
   CowData<MeshLibrary::ShapeData>::_unref(local_128);
   if (local_170 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_170);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)local_170 + 0x140 ) )(local_170);
            Memory::free_static(local_170, false);
         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   uVar1 = *(undefined8*)( this + 8 );
   puVar3 = *(undefined4**)this;
   *puVar3 = 1;
   *(undefined8*)( puVar3 + 6 ) = uVar1;
   *(undefined8*)( puVar3 + 2 ) = uVar1;
   *(undefined8*)( puVar3 + 4 ) = uVar1;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RBMap<int, MeshLibrary::Item, Comparator<int>, DefaultAllocator>::_insert(int const&,
   MeshLibrary::Item const&) */int *__thiscallRBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::_insert(RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator> *this, int *param_1, Item *param_2) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   Object *pOVar5;
   Object *pOVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   char cVar9;
   int *piVar10;
   int *piVar11;
   int *piVar12;
   int *piVar13;
   int *piVar14;
   int *piVar15;
   int *piVar16;
   int *piVar17;
   long in_FS_OFFSET;
   bool bVar18;
   Item local_e0[160];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   piVar16 = *(int**)this;
   if (*(int**)( piVar16 + 4 ) != *(int**)( this + 8 )) {
      piVar17 = *(int**)( piVar16 + 4 );
      do {
         piVar16 = piVar17;
         if (*param_1 < piVar16[0xc]) {
            piVar17 = *(int**)( piVar16 + 4 );
         }
 else {
            if (*param_1 <= piVar16[0xc]) {
               if (*(long*)( piVar16 + 0xe ) != *(long*)param_2) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( piVar16 + 0xe ), (CowData*)param_2);
               }

               pOVar5 = *(Object**)( param_2 + 8 );
               pOVar6 = *(Object**)( piVar16 + 0x10 );
               if (pOVar5 != pOVar6) {
                  *(Object**)( piVar16 + 0x10 ) = pOVar5;
                  if (( pOVar5 != (Object*)0x0 ) && ( cVar9 = cVar9 == '\0' )) {
                     piVar16[0x10] = 0;
                     piVar16[0x11] = 0;
                  }

                  if (( ( pOVar6 != (Object*)0x0 ) && ( cVar9 = RefCounted::unreference() ),cVar9 != '\0' )) &&( cVar9 = cVar9 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);
                  Memory::free_static(pOVar6, false);
               }

            }

            uVar7 = *(undefined8*)( param_2 + 0x18 );
            iVar1 = *(int*)( param_2 + 0x40 );
            *(undefined8*)( piVar16 + 0x12 ) = *(undefined8*)( param_2 + 0x10 );
            *(undefined8*)( piVar16 + 0x14 ) = uVar7;
            uVar7 = *(undefined8*)( param_2 + 0x28 );
            *(undefined8*)( piVar16 + 0x16 ) = *(undefined8*)( param_2 + 0x20 );
            *(undefined8*)( piVar16 + 0x18 ) = uVar7;
            uVar7 = *(undefined8*)( param_2 + 0x30 );
            uVar8 = *(undefined8*)( param_2 + 0x38 );
            piVar16[0x1e] = iVar1;
            lVar2 = *(long*)( param_2 + 0x50 );
            *(undefined8*)( piVar16 + 0x1a ) = uVar7;
            *(undefined8*)( piVar16 + 0x1c ) = uVar8;
            if (*(long*)( piVar16 + 0x22 ) != lVar2) {
               CowData<MeshLibrary::ShapeData>::_ref((CowData<MeshLibrary::ShapeData>*)( piVar16 + 0x22 ), (CowData*)( param_2 + 0x50 ));
            }

            pOVar5 = *(Object**)( param_2 + 0x58 );
            pOVar6 = *(Object**)( piVar16 + 0x24 );
            if (pOVar5 != pOVar6) {
               *(Object**)( piVar16 + 0x24 ) = pOVar5;
               if (( pOVar5 != (Object*)0x0 ) && ( cVar9 = cVar9 == '\0' )) {
                  piVar16[0x24] = 0;
                  piVar16[0x25] = 0;
               }

               if (( ( pOVar6 != (Object*)0x0 ) && ( cVar9 = RefCounted::unreference() ),cVar9 != '\0' )) &&( cVar9 = cVar9 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);
               Memory::free_static(pOVar6, false);
            }

         }

         pOVar5 = *(Object**)( param_2 + 0x60 );
         pOVar6 = *(Object**)( piVar16 + 0x26 );
         if (pOVar5 != pOVar6) {
            *(Object**)( piVar16 + 0x26 ) = pOVar5;
            if (( pOVar5 != (Object*)0x0 ) && ( cVar9 = cVar9 == '\0' )) {
               piVar16[0x26] = 0;
               piVar16[0x27] = 0;
            }

            if (( ( pOVar6 != (Object*)0x0 ) && ( cVar9 = RefCounted::unreference() ),cVar9 != '\0' )) &&( cVar9 = cVar9 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);
            Memory::free_static(pOVar6, false);
         }

      }
 while ( piVar17 != *(int**)( this + 8 ) );
   }

   piVar10 = (int*)operator_new(0xd8, DefaultAllocator::alloc);
   iVar1 = *param_1;
   MeshLibrary::Item::Item(local_e0, param_2);
   *piVar10 = 0;
   piVar10[0xc] = iVar1;
   piVar10[10] = 0;
   piVar10[0xb] = 0;
   *(undefined1(*) [16])( piVar10 + 2 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( piVar10 + 6 ) = (undefined1[16])0x0;
   MeshLibrary::Item::Item((Item*)( piVar10 + 0xe ), local_e0);
   MeshLibrary::Item::~Item(local_e0);
   *(int**)( piVar10 + 6 ) = piVar16;
   piVar17 = *(int**)( this + 8 );
   *(int**)( piVar10 + 2 ) = piVar17;
   *(int**)( piVar10 + 4 ) = piVar17;
   if (( *(int**)this == piVar16 ) || ( *param_1 < piVar16[0xc] )) {
      *(int**)( piVar16 + 4 ) = piVar10;
      piVar15 = *(int**)( this + 8 );
      piVar13 = *(int**)( piVar10 + 4 );
      piVar14 = *(int**)this;
      if (piVar17 == piVar15) {
         piVar12 = piVar16;
         piVar11 = piVar16;
         if (piVar10 == *(int**)( piVar16 + 2 )) goto LAB_0010cbe8;
         goto LAB_0010cbf5;
      }

      LAB_0010cbc0:do {
         piVar12 = piVar17;
         piVar17 = *(int**)( piVar12 + 4 );
      }
 while ( piVar15 != *(int**)( piVar12 + 4 ) );
   }
 else {
      *(int**)( piVar16 + 2 ) = piVar10;
      piVar12 = *(int**)( piVar10 + 2 );
      piVar15 = *(int**)( this + 8 );
      piVar14 = *(int**)this;
      piVar11 = piVar16;
      piVar13 = piVar17;
      if (piVar15 == piVar12) {
         LAB_0010cbe8:do {
            piVar12 = *(int**)( piVar11 + 6 );
            bVar18 = *(int**)( piVar12 + 2 ) == piVar11;
            piVar11 = piVar12;
         }
 while ( bVar18 );
         LAB_0010cbf5:if (piVar14 == piVar12) {
            piVar12 = (int*)0x0;
         }

      }
 else {
         piVar17 = *(int**)( piVar12 + 4 );
         if (piVar15 != *(int**)( piVar12 + 4 )) goto LAB_0010cbc0;
      }

   }

   *(int**)( piVar10 + 8 ) = piVar12;
   piVar17 = *(int**)this;
   if (*(int**)( this + 8 ) == piVar13) {
      piVar13 = piVar10;
      piVar15 = piVar16;
      piVar14 = piVar16;
      if (piVar10 == *(int**)( piVar16 + 4 )) {
         do {
            piVar15 = *(int**)( piVar14 + 6 );
            bVar18 = *(int**)( piVar15 + 4 ) == piVar14;
            piVar13 = piVar14;
            piVar14 = piVar15;
         }
 while ( bVar18 );
      }

      if (piVar17 != piVar13) goto LAB_0010ca8c;
      piVar10[10] = 0;
      piVar10[0xb] = 0;
      if (piVar12 == (int*)0x0) goto LAB_0010caa6;
      LAB_0010ca95:*(int**)( piVar12 + 10 ) = piVar10;
      piVar15 = *(int**)( piVar10 + 10 );
      if (piVar15 == (int*)0x0) goto LAB_0010caa6;
   }
 else {
      do {
         piVar15 = piVar13;
         piVar13 = *(int**)( piVar15 + 2 );
      }
 while ( *(int**)( this + 8 ) != *(int**)( piVar15 + 2 ) );
      LAB_0010ca8c:*(int**)( piVar10 + 10 ) = piVar15;
      if (piVar12 != (int*)0x0) goto LAB_0010ca95;
   }

   *(int**)( piVar15 + 8 ) = piVar10;
   LAB_0010caa6:iVar1 = *piVar16;
   *(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + 1;
   piVar15 = piVar10;
   if (iVar1 == 0) {
      do {
         while (true) {
            piVar17 = *(int**)( piVar16 + 6 );
            piVar13 = *(int**)( piVar17 + 4 );
            piVar14 = piVar16;
            if (piVar13 == piVar16) break;
            if (*piVar13 == 0) goto LAB_0010cb3a;
            if (*(int**)( piVar16 + 4 ) == piVar15) {
               lVar2 = *(long*)( this + 8 );
               lVar3 = *(long*)( piVar15 + 2 );
               *(long*)( piVar16 + 4 ) = lVar3;
               piVar13 = piVar17;
               if (lVar2 != lVar3) {
                  *(int**)( lVar3 + 0x18 ) = piVar16;
                  piVar13 = *(int**)( piVar16 + 6 );
               }

               *(int**)( piVar15 + 6 ) = piVar13;
               if (*(int**)( piVar13 + 2 ) == piVar16) {
                  *(int**)( piVar13 + 2 ) = piVar15;
               }
 else {
                  *(int**)( piVar13 + 4 ) = piVar15;
               }

               *(int**)( piVar15 + 2 ) = piVar16;
               *(int**)( piVar16 + 6 ) = piVar15;
               piVar13 = *(int**)( this + 8 );
               *piVar15 = 1;
               piVar14 = piVar15;
               if (piVar17 == piVar13) goto LAB_0010cce8;
               LAB_0010cade:*piVar17 = 0;
               piVar15 = piVar16;
            }
 else {
               piVar13 = *(int**)( this + 8 );
               *piVar16 = 1;
               piVar16 = piVar15;
               if (piVar17 != piVar13) goto LAB_0010cade;
               LAB_0010cce8:_err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
               piVar15 = piVar16;
            }

            lVar2 = *(long*)( piVar17 + 2 );
            lVar3 = *(long*)( this + 8 );
            lVar4 = *(long*)( lVar2 + 0x10 );
            *(long*)( piVar17 + 2 ) = lVar4;
            if (lVar3 != lVar4) {
               *(int**)( lVar4 + 0x18 ) = piVar17;
            }

            lVar3 = *(long*)( piVar17 + 6 );
            *(long*)( lVar2 + 0x18 ) = lVar3;
            if (piVar17 == *(int**)( lVar3 + 0x10 )) {
               *(long*)( lVar3 + 0x10 ) = lVar2;
            }
 else {
               *(long*)( lVar3 + 8 ) = lVar2;
            }

            *(int**)( lVar2 + 0x10 ) = piVar17;
            *(long*)( piVar17 + 6 ) = lVar2;
            LAB_0010cb1d:piVar16 = piVar14;
            if (*piVar14 != 0) goto LAB_0010cb68;
         }
;
         piVar13 = *(int**)( piVar17 + 2 );
         if (*piVar13 != 0) {
            if (*(int**)( piVar16 + 2 ) == piVar15) {
               lVar2 = *(long*)( this + 8 );
               lVar3 = *(long*)( piVar15 + 4 );
               *(long*)( piVar16 + 2 ) = lVar3;
               if (lVar2 == lVar3) {
                  *(int**)( piVar15 + 6 ) = piVar17;
                  piVar13 = piVar17;
                  LAB_0010d004:*(int**)( piVar13 + 4 ) = piVar15;
               }
 else {
                  *(int**)( lVar3 + 0x18 ) = piVar16;
                  piVar13 = *(int**)( piVar16 + 6 );
                  *(int**)( piVar15 + 6 ) = piVar13;
                  if (*(int**)( piVar13 + 4 ) == piVar16) goto LAB_0010d004;
                  *(int**)( piVar13 + 2 ) = piVar15;
               }

               *(int**)( piVar15 + 4 ) = piVar16;
               *(int**)( piVar16 + 6 ) = piVar15;
               piVar14 = piVar15;
               piVar15 = piVar16;
            }

            piVar16 = *(int**)( this + 8 );
            *piVar14 = 1;
            if (piVar17 == piVar16) {
               _err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
            }
 else {
               *piVar17 = 0;
            }

            lVar2 = *(long*)( piVar17 + 4 );
            lVar3 = *(long*)( this + 8 );
            lVar4 = *(long*)( lVar2 + 8 );
            *(long*)( piVar17 + 4 ) = lVar4;
            if (lVar3 != lVar4) {
               *(int**)( lVar4 + 0x18 ) = piVar17;
            }

            lVar3 = *(long*)( piVar17 + 6 );
            *(long*)( lVar2 + 0x18 ) = lVar3;
            if (piVar17 == *(int**)( lVar3 + 8 )) {
               *(long*)( lVar3 + 8 ) = lVar2;
            }
 else {
               *(long*)( lVar3 + 0x10 ) = lVar2;
            }

            *(int**)( lVar2 + 8 ) = piVar17;
            *(long*)( piVar17 + 6 ) = lVar2;
            goto LAB_0010cb1d;
         }

         LAB_0010cb3a:piVar15 = *(int**)( this + 8 );
         *piVar16 = 1;
         *piVar13 = 1;
         if (piVar17 == piVar15) {
            _err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         }
 else {
            *piVar17 = 0;
         }

         piVar16 = *(int**)( piVar17 + 6 );
         piVar15 = piVar17;
      }
 while ( **(int**)( piVar17 + 6 ) == 0 );
      LAB_0010cb68:piVar17 = *(int**)this;
   }

   **(undefined4**)( piVar17 + 4 ) = 1;
   piVar16 = piVar10;
   LAB_0010cb76:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return piVar16;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RBMap<int, MeshLibrary::Item, Comparator<int>, DefaultAllocator>::operator[](int const&) */long RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::operator [](RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator> *this, int *param_1) {
   long lVar1;
   long lVar2;
   undefined8 *puVar3;
   long in_FS_OFFSET;
   byte bVar4;
   undefined8 local_d8;
   undefined8 local_d0;
   undefined1 local_c8[16];
   undefined1 local_b8[16];
   uint local_a8;
   undefined4 local_98;
   undefined1 local_70[16];
   undefined1 local_60[16];
   uint local_50;
   undefined4 local_40;
   long local_30;
   bVar4 = 0;
   lVar2 = *(long*)this;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar2 == 0) {
      _Data::_create_root((_Data*)this);
      lVar2 = *(long*)this;
      if (lVar2 == 0) goto LAB_0010d07f;
   }

   for (lVar1 = *(long*)( lVar2 + 0x10 ); *(long*)( this + 8 ) != lVar1; lVar1 = *(long*)( lVar1 + 8 )) {
      while (*param_1 < *(int*)( lVar1 + 0x30 )) {
         lVar1 = *(long*)( lVar1 + 0x10 );
         if (*(long*)( this + 8 ) == lVar1) goto LAB_0010d07f;
      }
;
      if (*param_1 <= *(int*)( lVar1 + 0x30 )) goto LAB_0010d0fd;
   }

   LAB_0010d07f:local_d8 = 0;
   puVar3 = &local_d0;
   for (lVar1 = 0x13; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
   }

   local_98 = 1;
   local_40 = 1;
   local_c8 = ZEXT416(_LC33);
   local_b8 = ZEXT416(_LC33);
   local_a8 = _LC33;
   local_70 = ZEXT416(_LC33);
   local_60 = ZEXT416(_LC33);
   local_50 = _LC33;
   if (lVar2 == 0) {
      _Data::_create_root((_Data*)this);
   }

   lVar1 = _insert(this, param_1, (Item*)&local_d8);
   MeshLibrary::Item::~Item((Item*)&local_d8);
   LAB_0010d0fd:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return lVar1 + 0x38;
}
/* WARNING: Type propagation algorithm not settling *//* RBMap<int, MeshLibrary::Item, Comparator<int>, DefaultAllocator>::_erase_fix_rb(RBMap<int,
   MeshLibrary::Item, Comparator<int>, DefaultAllocator>::Element*) */void RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::_erase_fix_rb(RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator> *this, Element *param_1) {
   int iVar1;
   Element *pEVar2;
   long lVar3;
   long lVar4;
   undefined4 *puVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   Element *pEVar9;
   int iVar10;
   char *pcVar11;
   char *pcVar12;
   pEVar8 = *(Element**)( this + 8 );
   pEVar2 = *(Element**)( *(long*)this + 0x10 );
   pEVar9 = *(Element**)( param_1 + 0x18 );
   pcVar12 = (char*)this;
   pcVar11 = (char*)param_1;
   pEVar7 = pEVar8;
   do {
      pEVar6 = pEVar9;
      if (pEVar2 == pEVar7) {
         LAB_0010d290:iVar10 = *(int*)pEVar8;
         joined_r0x0010d353:if (iVar10 != 1) {
            _err_print_error("_erase_fix_rb", "./core/templates/rb_map.h", 0x202, "Condition \"_data._nil->color != BLACK\" is true.", 0, 0);
            return;
         }

         return;
      }

      pEVar9 = param_1;
      if (*(int*)param_1 != 0) {
         LAB_0010d239:iVar10 = (int)pcVar11;
         pEVar7 = *(Element**)( pEVar9 + 0x10 );
         if (*(int*)pEVar7 == 1) goto LAB_0010d246;
         LAB_0010d2f0:if (pEVar9 != *(Element**)( pEVar6 + 8 )) {
            iVar1 = *(int*)pEVar6;
            pEVar7 = pEVar9;
            goto joined_r0x0010d2ff;
         }

         if (**(int**)( pEVar9 + 8 ) == 1) {
            *(int*)pEVar7 = 1;
            if (pEVar9 == pEVar8) {
               _set_color((Element*)pcVar12, iVar10);
               pEVar8 = *(Element**)( this + 8 );
               pEVar7 = *(Element**)( pEVar9 + 0x10 );
            }
 else {
               *(int*)pEVar9 = 0;
            }

            pEVar2 = *(Element**)( pEVar7 + 8 );
            *(Element**)( pEVar9 + 0x10 ) = pEVar2;
            if (pEVar2 != pEVar8) {
               *(Element**)( pEVar2 + 0x18 ) = pEVar9;
            }

            lVar3 = *(long*)( pEVar9 + 0x18 );
            *(long*)( pEVar7 + 0x18 ) = lVar3;
            if (pEVar9 == *(Element**)( lVar3 + 8 )) {
               *(Element**)( lVar3 + 8 ) = pEVar7;
            }
 else {
               *(Element**)( lVar3 + 0x10 ) = pEVar7;
            }

            *(Element**)( pEVar7 + 8 ) = pEVar9;
            *(Element**)( pEVar9 + 0x18 ) = pEVar7;
            pEVar9 = pEVar7;
         }

         LAB_0010d4e1:if (( pEVar9 == pEVar8 ) && ( *(int*)pEVar6 == 0 )) {
            _set_color((Element*)pcVar12, iVar10);
            pEVar8 = *(Element**)( this + 8 );
         }
 else {
            *(int*)pEVar9 = *(int*)pEVar6;
         }

         puVar5 = *(undefined4**)( pEVar9 + 8 );
         *(int*)pEVar6 = 1;
         *puVar5 = 1;
         lVar3 = *(long*)( pEVar6 + 8 );
         pEVar2 = *(Element**)( lVar3 + 0x10 );
         *(Element**)( pEVar6 + 8 ) = pEVar2;
         if (pEVar2 != pEVar8) {
            *(Element**)( pEVar2 + 0x18 ) = pEVar6;
         }

         lVar4 = *(long*)( pEVar6 + 0x18 );
         *(long*)( lVar3 + 0x18 ) = lVar4;
         if (pEVar6 == *(Element**)( lVar4 + 0x10 )) {
            *(long*)( lVar4 + 0x10 ) = lVar3;
         }
 else {
            *(long*)( lVar4 + 8 ) = lVar3;
         }

         *(Element**)( lVar3 + 0x10 ) = pEVar6;
         *(long*)( pEVar6 + 0x18 ) = lVar3;
         goto LAB_0010d290;
      }

      *(int*)param_1 = 1;
      if (pEVar6 == pEVar8) {
         pcVar11 = "./core/templates/rb_map.h";
         pcVar12 = "_set_color";
         _err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         pEVar8 = *(Element**)( this + 8 );
      }
 else {
         *(int*)pEVar6 = 0;
      }

      iVar10 = (int)pcVar11;
      if (*(Element**)( pEVar6 + 8 ) != param_1) {
         lVar3 = *(long*)( pEVar6 + 0x10 );
         pEVar9 = *(Element**)( param_1 + 8 );
         pEVar7 = *(Element**)( lVar3 + 8 );
         *(Element**)( pEVar6 + 0x10 ) = pEVar7;
         if (pEVar7 != pEVar8) {
            *(Element**)( pEVar7 + 0x18 ) = pEVar6;
         }

         lVar4 = *(long*)( pEVar6 + 0x18 );
         *(long*)( lVar3 + 0x18 ) = lVar4;
         if (pEVar6 == *(Element**)( lVar4 + 8 )) {
            *(long*)( lVar4 + 8 ) = lVar3;
         }
 else {
            *(long*)( lVar4 + 0x10 ) = lVar3;
         }

         *(Element**)( lVar3 + 8 ) = pEVar6;
         *(long*)( pEVar6 + 0x18 ) = lVar3;
         goto LAB_0010d239;
      }

      pEVar9 = *(Element**)( param_1 + 0x10 );
      *(Element**)( pEVar6 + 8 ) = pEVar9;
      if (pEVar9 != pEVar8) {
         *(Element**)( pEVar9 + 0x18 ) = pEVar6;
      }

      lVar3 = *(long*)( pEVar6 + 0x18 );
      *(long*)( param_1 + 0x18 ) = lVar3;
      if (pEVar6 == *(Element**)( lVar3 + 0x10 )) {
         *(Element**)( lVar3 + 0x10 ) = param_1;
      }
 else {
         *(Element**)( lVar3 + 8 ) = param_1;
      }

      *(Element**)( param_1 + 0x10 ) = pEVar6;
      *(Element**)( pEVar6 + 0x18 ) = param_1;
      pEVar7 = *(Element**)( pEVar9 + 0x10 );
      if (*(int*)pEVar7 != 1) goto LAB_0010d2f0;
      LAB_0010d246:iVar10 = (int)pcVar11;
      pEVar7 = *(Element**)( pEVar9 + 8 );
      if (*(int*)pEVar7 != 1) {
         if (*(Element**)( pEVar6 + 8 ) == pEVar9) goto LAB_0010d4e1;
         *(int*)pEVar7 = 1;
         if (pEVar9 == pEVar8) {
            iVar10 = 0x108054;
            pcVar12 = "_set_color";
            _err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
            pEVar8 = *(Element**)( this + 8 );
            pEVar7 = *(Element**)( pEVar9 + 8 );
         }
 else {
            *(int*)pEVar9 = 0;
         }

         pEVar2 = *(Element**)( pEVar7 + 0x10 );
         *(Element**)( pEVar9 + 8 ) = pEVar2;
         if (pEVar2 != pEVar8) {
            *(Element**)( pEVar2 + 0x18 ) = pEVar9;
         }

         lVar3 = *(long*)( pEVar9 + 0x18 );
         *(long*)( pEVar7 + 0x18 ) = lVar3;
         if (pEVar9 == *(Element**)( lVar3 + 0x10 )) {
            *(Element**)( lVar3 + 0x10 ) = pEVar7;
         }
 else {
            *(Element**)( lVar3 + 8 ) = pEVar7;
         }

         *(Element**)( pEVar7 + 0x10 ) = pEVar9;
         *(Element**)( pEVar9 + 0x18 ) = pEVar7;
         iVar1 = *(int*)pEVar6;
         joined_r0x0010d2ff:if (( iVar1 == 0 ) && ( pEVar7 == pEVar8 )) {
            _set_color((Element*)pcVar12, iVar10);
            pEVar8 = *(Element**)( this + 8 );
         }
 else {
            *(int*)pEVar7 = iVar1;
         }

         puVar5 = *(undefined4**)( pEVar7 + 0x10 );
         *(int*)pEVar6 = 1;
         *puVar5 = 1;
         lVar3 = *(long*)( pEVar6 + 0x10 );
         pEVar2 = *(Element**)( lVar3 + 8 );
         *(Element**)( pEVar6 + 0x10 ) = pEVar2;
         if (pEVar2 != pEVar8) {
            *(Element**)( pEVar2 + 0x18 ) = pEVar6;
         }

         lVar4 = *(long*)( pEVar6 + 0x18 );
         *(long*)( lVar3 + 0x18 ) = lVar4;
         if (pEVar6 == *(Element**)( lVar4 + 8 )) {
            *(long*)( lVar4 + 8 ) = lVar3;
         }
 else {
            *(long*)( lVar4 + 0x10 ) = lVar3;
         }

         iVar10 = *(int*)pEVar8;
         *(Element**)( lVar3 + 8 ) = pEVar6;
         *(long*)( pEVar6 + 0x18 ) = lVar3;
         goto joined_r0x0010d353;
      }

      if (pEVar9 == pEVar8) {
         pcVar11 = "./core/templates/rb_map.h";
         pcVar12 = "_set_color";
         _err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         iVar10 = *(int*)pEVar6;
         pEVar8 = *(Element**)( this + 8 );
      }
 else {
         *(int*)pEVar9 = 0;
         iVar10 = *(int*)pEVar6;
      }

      if (iVar10 == 0) {
         *(int*)pEVar6 = 1;
         goto LAB_0010d290;
      }

      pEVar9 = *(Element**)( pEVar6 + 0x18 );
      param_1 = *(Element**)( pEVar9 + 0x10 );
      pEVar7 = pEVar6;
      if (param_1 == pEVar6) {
         param_1 = *(Element**)( pEVar9 + 8 );
      }

   }
 while ( true );
}
/* RBMap<int, MeshLibrary::Item, Comparator<int>, DefaultAllocator>::_erase(RBMap<int,
   MeshLibrary::Item, Comparator<int>, DefaultAllocator>::Element*) */void RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::_erase(RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator> *this, Element *param_1) {
   int *piVar1;
   Element *pEVar2;
   Element *pEVar3;
   Object *pOVar4;
   char cVar5;
   int *piVar6;
   char *pcVar7;
   long lVar8;
   undefined8 uVar9;
   Element *pEVar10;
   Element *pEVar11;
   piVar6 = *(int**)( param_1 + 0x10 );
   piVar1 = *(int**)( this + 8 );
   pEVar10 = param_1;
   if (piVar6 == piVar1) {
      LAB_0010d7a8:lVar8 = *(long*)( pEVar10 + 0x18 );
      piVar6 = *(int**)( pEVar10 + 8 );
      pEVar11 = *(Element**)( lVar8 + 0x10 );
      if (pEVar11 == pEVar10) goto LAB_0010d7bd;
      LAB_0010d66d:*(int**)( lVar8 + 8 ) = piVar6;
   }
 else {
      if (piVar1 != *(int**)( param_1 + 8 )) {
         pEVar10 = *(Element**)( param_1 + 0x20 );
         piVar6 = *(int**)( pEVar10 + 0x10 );
         if (piVar1 == piVar6) goto LAB_0010d7a8;
      }

      lVar8 = *(long*)( pEVar10 + 0x18 );
      pEVar11 = *(Element**)( lVar8 + 0x10 );
      if (pEVar11 != pEVar10) goto LAB_0010d66d;
      LAB_0010d7bd:*(int**)( lVar8 + 0x10 ) = piVar6;
      pEVar11 = *(Element**)( lVar8 + 8 );
   }

   if (*piVar6 == 0) {
      *(long*)( piVar6 + 6 ) = lVar8;
      *piVar6 = 1;
   }
 else if (( *(int*)pEVar10 == 1 ) && ( lVar8 != *(long*)this )) {
      _erase_fix_rb(this, pEVar11);
   }

   if (param_1 != pEVar10) {
      pEVar11 = *(Element**)( this + 8 );
      if (pEVar11 == pEVar10) {
         uVar9 = 0x21a;
         pcVar7 = "Condition \"rp == _data._nil\" is true.";
         goto LAB_0010d8a2;
      }

      uVar9 = *(undefined8*)( param_1 + 0x10 );
      pEVar2 = *(Element**)( param_1 + 0x10 );
      pEVar3 = *(Element**)( param_1 + 8 );
      *(undefined8*)( pEVar10 + 8 ) = *(undefined8*)( param_1 + 8 );
      *(undefined8*)( pEVar10 + 0x10 ) = uVar9;
      *(undefined8*)( pEVar10 + 0x18 ) = *(undefined8*)( param_1 + 0x18 );
      *(int*)pEVar10 = *(int*)param_1;
      if (pEVar11 != pEVar2) {
         *(Element**)( pEVar2 + 0x18 ) = pEVar10;
      }

      if (pEVar11 != pEVar3) {
         *(Element**)( pEVar3 + 0x18 ) = pEVar10;
      }

      lVar8 = *(long*)( param_1 + 0x18 );
      if (*(Element**)( lVar8 + 0x10 ) == param_1) {
         *(Element**)( lVar8 + 0x10 ) = pEVar10;
      }
 else {
         *(Element**)( lVar8 + 8 ) = pEVar10;
      }

   }

   lVar8 = *(long*)( param_1 + 0x20 );
   if (lVar8 != 0) {
      *(undefined8*)( lVar8 + 0x28 ) = *(undefined8*)( param_1 + 0x28 );
   }

   if (*(long*)( param_1 + 0x28 ) != 0) {
      *(long*)( *(long*)( param_1 + 0x28 ) + 0x20 ) = lVar8;
   }

   if (( *(long*)( param_1 + 0x98 ) == 0 ) || ( cVar5 = cVar5 == '\0' )) {
      LAB_0010d711:lVar8 = *(long*)( param_1 + 0x90 );
   }
 else {
      pOVar4 = *(Object**)( param_1 + 0x98 );
      cVar5 = predelete_handler(pOVar4);
      if (cVar5 == '\0') goto LAB_0010d711;
      ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
      Memory::free_static(pOVar4, false);
      lVar8 = *(long*)( param_1 + 0x90 );
   }

   if (( lVar8 != 0 ) && ( cVar5 = cVar5 != '\0' )) {
      pOVar4 = *(Object**)( param_1 + 0x90 );
      cVar5 = predelete_handler(pOVar4);
      if (cVar5 != '\0') {
         ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
         Memory::free_static(pOVar4, false);
      }

   }

   CowData<MeshLibrary::ShapeData>::_unref((CowData<MeshLibrary::ShapeData>*)( param_1 + 0x88 ));
   if (( *(long*)( param_1 + 0x40 ) != 0 ) && ( cVar5 = cVar5 != '\0' )) {
      pOVar4 = *(Object**)( param_1 + 0x40 );
      cVar5 = predelete_handler(pOVar4);
      if (cVar5 != '\0') {
         ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
         Memory::free_static(pOVar4, false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x38 ));
   Memory::free_static(param_1, false);
   *(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + -1;
   if (**(int**)( this + 8 ) != 0) {
      return;
   }

   uVar9 = 0x237;
   pcVar7 = "Condition \"_data._nil->color == RED\" is true.";
   LAB_0010d8a2:_err_print_error("_erase", "./core/templates/rb_map.h", uVar9, pcVar7, 0, 0);
   return;
}
/* void memdelete_allocator<RBMap<int, MeshLibrary::Item, Comparator<int>,
   DefaultAllocator>::Element, DefaultAllocator>(RBMap<int, MeshLibrary::Item, Comparator<int>,
   DefaultAllocator>::Element*) */void memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(Element *param_1) {
   Object *pOVar1;
   char cVar2;
   if (*(long*)( param_1 + 0x98 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( param_1 + 0x98 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( param_1 + 0x90 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( param_1 + 0x90 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   CowData<MeshLibrary::ShapeData>::_unref((CowData<MeshLibrary::ShapeData>*)( param_1 + 0x88 ));
   if (*(long*)( param_1 + 0x40 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( param_1 + 0x40 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x38 ));
   Memory::free_static(param_1, false);
   return;
}
/* RBMap<int, MeshLibrary::Item, Comparator<int>, DefaultAllocator>::_cleanup_tree(RBMap<int,
   MeshLibrary::Item, Comparator<int>, DefaultAllocator>::Element*) [clone .part.0] */void RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::_cleanup_tree(RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator> *this, Element *param_1) {
   Element *pEVar1;
   Element *pEVar2;
   Element *pEVar3;
   Element *pEVar4;
   Element *pEVar5;
   Element *pEVar6;
   pEVar1 = *(Element**)( param_1 + 0x10 );
   pEVar2 = *(Element**)( this + 8 );
   if (pEVar1 != pEVar2) {
      pEVar3 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar3 + 0x10 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (pEVar4 != *(Element**)( pEVar6 + 8 )) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar6);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar5 + 8 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar2 + 0x10 );
               if (pEVar6 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar2);
            }

            memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar5);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar3 + 8 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar6);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar6);
            }

            memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar2);
         }

         memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar3);
         pEVar3 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar6);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar6);
            }

            memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar5);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar2 + 8 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar6);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar6);
            }

            memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar5);
         }

         memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar2);
      }

      memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar1);
      pEVar2 = *(Element**)( this + 8 );
   }

   pEVar1 = *(Element**)( param_1 + 8 );
   if (pEVar1 != pEVar2) {
      pEVar3 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar3 + 0x10 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar6);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar5 + 8 );
            if (pEVar2 != pEVar6) {
               if (*(Element**)( pEVar2 + 0x10 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 0x10 ));
                  pEVar6 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar2);
            }

            memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar5);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar3 + 8 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar6);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar6);
            }

            memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar2);
         }

         memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar3);
         pEVar3 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar6);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar6);
            }

            memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar5);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar2 + 8 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar6);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar6);
            }

            memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar5);
         }

         memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar2);
      }

      memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar1);
   }

   memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(param_1);
   return;
}
/* RBMap<int, MeshLibrary::Item, Comparator<int>, DefaultAllocator>::clear() */void RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::clear(RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator> *this) {
   Element *pEVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   Element *pEVar5;
   Element *pEVar6;
   Element *pEVar7;
   void *pvVar8;
   Element *pEVar9;
   Element *pEVar10;
   pvVar8 = *(void**)this;
   if (pvVar8 != (void*)0x0) {
      pEVar1 = *(Element**)( (long)pvVar8 + 0x10 );
      pEVar6 = *(Element**)( this + 8 );
      if (pEVar1 != pEVar6) {
         pEVar7 = *(Element**)( pEVar1 + 0x10 );
         if (pEVar6 != pEVar7) {
            pEVar10 = *(Element**)( pEVar7 + 0x10 );
            if (pEVar6 != pEVar10) {
               pEVar9 = *(Element**)( pEVar10 + 0x10 );
               if (pEVar6 != pEVar9) {
                  _cleanup_tree(this, pEVar9);
                  pEVar9 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar10 + 8 ) != pEVar9) {
                  _cleanup_tree(this, *(Element**)( pEVar10 + 8 ));
               }

               memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar10);
               pEVar10 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar7 + 8 );
            if (pEVar6 != pEVar10) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar10) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar10 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar10) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar6);
            }

            memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar7);
            pEVar7 = *(Element**)( this + 8 );
         }

         pEVar6 = *(Element**)( pEVar1 + 8 );
         if (pEVar6 != pEVar7) {
            pEVar10 = *(Element**)( pEVar6 + 0x10 );
            if (pEVar10 != pEVar7) {
               pEVar9 = *(Element**)( pEVar10 + 0x10 );
               if (pEVar9 != pEVar7) {
                  if (*(Element**)( pEVar9 + 0x10 ) != pEVar7) {
                     _cleanup_tree(this, *(Element**)( pEVar9 + 0x10 ));
                     pEVar7 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar9 + 8 ) != pEVar7) {
                     _cleanup_tree(this, *(Element**)( pEVar9 + 8 ));
                  }

                  memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar9);
                  pEVar7 = *(Element**)( this + 8 );
               }

               if (pEVar7 != *(Element**)( pEVar10 + 8 )) {
                  _cleanup_tree(this, *(Element**)( pEVar10 + 8 ));
               }

               memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar10);
               pEVar7 = *(Element**)( this + 8 );
            }

            pEVar10 = *(Element**)( pEVar6 + 8 );
            if (pEVar7 != pEVar10) {
               pEVar9 = *(Element**)( pEVar10 + 0x10 );
               if (pEVar7 != pEVar9) {
                  _cleanup_tree(this, pEVar9);
                  pEVar9 = *(Element**)( this + 8 );
               }

               pEVar7 = *(Element**)( pEVar10 + 8 );
               if (pEVar9 != pEVar7) {
                  pEVar5 = *(Element**)( pEVar7 + 0x10 );
                  if (pEVar9 != pEVar5) {
                     _cleanup_tree(this, pEVar5);
                     pEVar5 = *(Element**)( this + 8 );
                  }

                  if (pEVar5 != *(Element**)( pEVar7 + 8 )) {
                     _cleanup_tree(this, *(Element**)( pEVar7 + 8 ));
                  }

                  memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar7);
               }

               memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar10);
            }

            memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar6);
         }

         memdelete_allocator<RBMap<int,MeshLibrary::Item,Comparator<int>,DefaultAllocator>::Element,DefaultAllocator>(pEVar1);
         pvVar8 = *(void**)this;
         pEVar6 = *(Element**)( this + 8 );
      }

      lVar2 = *(long*)( (long)pvVar8 + 0x98 );
      *(Element**)( (long)pvVar8 + 0x10 ) = pEVar6;
      *(undefined4*)( this + 0x10 ) = 0;
      if (lVar2 != 0) {
         cVar4 = RefCounted::unreference();
         if (cVar4 != '\0') {
            pOVar3 = *(Object**)( (long)pvVar8 + 0x98 );
            cVar4 = predelete_handler(pOVar3);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
               Memory::free_static(pOVar3, false);
            }

         }

      }

      if (*(long*)( (long)pvVar8 + 0x90 ) != 0) {
         cVar4 = RefCounted::unreference();
         if (cVar4 != '\0') {
            pOVar3 = *(Object**)( (long)pvVar8 + 0x90 );
            cVar4 = predelete_handler(pOVar3);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
               Memory::free_static(pOVar3, false);
            }

         }

      }

      CowData<MeshLibrary::ShapeData>::_unref((CowData<MeshLibrary::ShapeData>*)( (long)pvVar8 + 0x88 ));
      if (*(long*)( (long)pvVar8 + 0x40 ) != 0) {
         cVar4 = RefCounted::unreference();
         if (cVar4 != '\0') {
            pOVar3 = *(Object**)( (long)pvVar8 + 0x40 );
            cVar4 = predelete_handler(pOVar3);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
               Memory::free_static(pOVar3, false);
            }

         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar8 + 0x38 ));
      Memory::free_static(pvVar8, false);
      *(undefined8*)this = 0;
   }

   return;
}
/* CowData<MeshLibrary::ShapeData>::_realloc(long) */undefined8 CowData<MeshLibrary::ShapeData>::_realloc(CowData<MeshLibrary::ShapeData> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<MeshLibrary::ShapeData>::resize<false>(long) */undefined8 CowData<MeshLibrary::ShapeData>::resize<false>(CowData<MeshLibrary::ShapeData> *this, long param_1) {
   Object *pOVar1;
   code *pcVar2;
   uint uVar3;
   char cVar4;
   long lVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   long lVar9;
   undefined8 *puVar10;
   long lVar11;
   ulong uVar12;
   long lVar13;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar9 = 0;
      lVar11 = 0;
   }
 else {
      lVar9 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar9) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar11 = lVar9 * 0x38;
      if (lVar11 != 0) {
         uVar12 = lVar11 - 1U | lVar11 - 1U >> 1;
         uVar12 = uVar12 | uVar12 >> 2;
         uVar12 = uVar12 | uVar12 >> 4;
         uVar12 = uVar12 | uVar12 >> 8;
         uVar12 = uVar12 | uVar12 >> 0x10;
         lVar11 = ( uVar12 | uVar12 >> 0x20 ) + 1;
      }

   }

   lVar13 = param_1 * 0x38;
   if (lVar13 == 0) {
      LAB_0010e6e0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar12 = lVar13 - 1U >> 1 | lVar13 - 1U;
   uVar12 = uVar12 | uVar12 >> 2;
   uVar12 = uVar12 | uVar12 >> 4;
   uVar12 = uVar12 | uVar12 >> 8;
   uVar12 = uVar12 | uVar12 >> 0x10;
   uVar12 = uVar12 | uVar12 >> 0x20;
   lVar5 = uVar12 + 1;
   if (lVar5 == 0) goto LAB_0010e6e0;
   if (param_1 <= lVar9) {
      lVar9 = *(long*)this;
      uVar12 = param_1;
      while (lVar9 != 0) {
         if (*(ulong*)( lVar9 + -8 ) <= uVar12) {
            LAB_0010e512:if (lVar5 != lVar11) {
               uVar6 = _realloc(this, lVar5);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               lVar9 = *(long*)this;
               if (lVar9 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }

            *(long*)( lVar9 + -8 ) = param_1;
            return 0;
         }

         while (*(long*)( lVar9 + lVar13 ) == 0) {
            uVar12 = uVar12 + 1;
            lVar13 = lVar13 + 0x38;
            if (*(ulong*)( lVar9 + -8 ) <= uVar12) goto LAB_0010e512;
         }
;
         cVar4 = RefCounted::unreference();
         if (cVar4 != '\0') {
            pOVar1 = *(Object**)( lVar9 + lVar13 );
            cVar4 = predelete_handler(pOVar1);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

         uVar12 = uVar12 + 1;
         lVar13 = lVar13 + 0x38;
         lVar9 = *(long*)this;
      }
;
      goto LAB_0010e736;
   }

   if (lVar5 == lVar11) {
      LAB_0010e655:puVar10 = *(undefined8**)this;
      if (puVar10 == (undefined8*)0x0) {
         LAB_0010e736:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar9 = puVar10[-1];
      if (param_1 <= lVar9) goto LAB_0010e634;
   }
 else {
      if (lVar9 != 0) {
         uVar6 = _realloc(this, lVar5);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

         goto LAB_0010e655;
      }

      puVar7 = (undefined8*)Memory::alloc_static(uVar12 + 0x11, false);
      if (puVar7 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar10 = puVar7 + 2;
      *puVar7 = 1;
      puVar7[1] = 0;
      *(undefined8**)this = puVar10;
      lVar9 = 0;
   }

   uVar3 = _LC33;
   puVar7 = puVar10 + lVar9 * 7;
   do {
      *puVar7 = 0;
      puVar8 = puVar7 + 7;
      *(undefined1(*) [16])( puVar7 + 1 ) = ZEXT416(uVar3);
      *(undefined1(*) [16])( puVar7 + 3 ) = ZEXT416(uVar3);
      *(uint*)( puVar7 + 5 ) = uVar3;
      *(undefined8*)( (long)puVar7 + 0x2c ) = 0;
      *(undefined4*)( (long)puVar7 + 0x34 ) = 0;
      puVar7 = puVar8;
   }
 while ( puVar8 != puVar10 + param_1 * 7 );
   LAB_0010e634:puVar10[-1] = param_1;
   return 0;
}
/* MeshLibrary::_setv(StringName const&, Variant const&) */void MeshLibrary::_setv(MeshLibrary *this, StringName *param_1, Variant *param_2) {
   _set(this, param_1, param_2);
   return;
}
/* WARNING: Removing unreachable block (ram,0x0010e878) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
   local_c0[0] = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_c0);
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
   int iVar2;
   long *plVar4;
   undefined4 in_register_00000014;
   long *plVar5;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   Variant *pVVar3;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }

      }
 else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
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
         _err_print_error(&_LC111, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010ebf0;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar3 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar3 & 1 ) != 0) {
            pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
         }

         iVar2 = ( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, iVar2);
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

   LAB_0010ebf0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<int>::validated_call(MethodBindTRC<int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   int iVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
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
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010ee94;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(long*)( param_3 + 8 ) = (long)iVar1;
   LAB_0010ee94:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this, Object *param_1, void **param_2, void *param_3) {
   int iVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
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
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010f053;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(long*)param_3 = (long)iVar1;
   LAB_0010f053:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector<int>>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Vector<int>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   Variant *pVVar3;
   long *plVar4;
   undefined4 in_register_00000014;
   long *plVar5;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   char *local_58;
   long local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }

      }
 else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
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
         _err_print_error(&_LC111, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010f2c0;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar3 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar3 & 1 ) != 0) {
            pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
         }

         ( *(code*)pVVar3 )((Vector*)&local_58);
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
            plVar5 = (long*)( local_50 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
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

   LAB_0010f2c0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector<int>>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Vector<int>>::validated_call(MethodBindTRC<Vector<int>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   code *pcVar2;
   long *plVar3;
   Variant **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Variant **local_48;
   long local_40[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Variant**)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Variant**)0x10ea48;
         local_40[0] = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010f52b;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar2 = *(code**)( pcVar2 + (long)param_2 + -1 );
   }

   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (*(long*)( *(long*)( param_3 + 8 ) + 0x18 ) != local_40[0]) {
      CowData<int>::_ref((CowData<int>*)( *(long*)( param_3 + 8 ) + 0x18 ), (CowData*)local_40);
   }

   lVar1 = local_40[0];
   if (local_40[0] != 0) {
      LOCK();
      plVar3 = (long*)( local_40[0] + -0x10 );
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
         local_40[0] = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   LAB_0010f52b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector<int>>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Vector<int>>::ptrcall(MethodBindTRC<Vector<int>> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   code *pcVar2;
   long *plVar3;
   void **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   void **local_48;
   long local_40[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (void**)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (void**)0x10ea48;
         local_40[0] = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010f727;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar2 = *(code**)( pcVar2 + (long)param_2 + -1 );
   }

   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (*(long*)( (long)param_3 + 8 ) != local_40[0]) {
      CowData<int>::_ref((CowData<int>*)( (long)param_3 + 8 ), (CowData*)local_40);
   }

   lVar1 = local_40[0];
   if (local_40[0] != 0) {
      LOCK();
      plVar3 = (long*)( local_40[0] + -0x10 );
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
         local_40[0] = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   LAB_0010f727:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   long *plVar4;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar4[1] == 0) {
         plVar3 = (long*)plVar4[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
         }

      }
 else {
         plVar3 = (long*)( plVar4[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC111, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010f9b0;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar2 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar2 & 1 ) != 0) {
            pVVar2 = *(Variant**)( pVVar2 + *(long*)( (long)plVar4 + (long)pVVar1 ) + -1 );
         }

         ( *(code*)pVVar2 )();
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

   LAB_0010f9b0:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0010fd2f;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0010fbd6. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0010fd2f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */void MethodBindT<>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0010feef;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0010fd96. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0010feef:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<int, String const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<int,String_const&>::validated_call(MethodBindTRC<int,String_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   int iVar1;
   code *pcVar2;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010ff4b;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
   *(long*)( param_3 + 8 ) = (long)iVar1;
   LAB_0010ff4b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int, String const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<int,String_const&>::ptrcall(MethodBindTRC<int,String_const&> *this, Object *param_1, void **param_2, void *param_3) {
   int iVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00110128;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *param_2);
   *(long*)param_3 = (long)iVar1;
   LAB_00110128:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Array, int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Array,int>::validated_call(MethodBindTRC<Array,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011031f;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )((Array*)&local_48, param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ));
   Array::operator =((Array*)( param_3 + 8 ), (Array*)&local_48);
   Array::~Array((Array*)&local_48);
   LAB_0011031f:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Array, int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Array,int>::ptrcall(MethodBindTRC<Array,int> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011050d;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   ( *pcVar1 )((Array*)&local_48, param_1 + *(long*)( this + 0x60 ), **param_2);
   Array::operator =((Array*)param_3, (Array*)&local_48);
   Array::~Array((Array*)&local_48);
   LAB_0011050d:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<unsigned int, int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<unsigned_int,int>::validated_call(MethodBindTRC<unsigned_int,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   uint uVar1;
   code *pcVar2;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001106eb;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ));
   *(ulong*)( param_3 + 8 ) = (ulong)uVar1;
   LAB_001106eb:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<unsigned int, int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<unsigned_int,int>::ptrcall(MethodBindTRC<unsigned_int,int> *this, Object *param_1, void **param_2, void *param_3) {
   uint uVar1;
   code *pcVar2;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001108ca;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), **param_2);
   *(ulong*)param_3 = (ulong)uVar1;
   LAB_001108ca:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<RenderingServer::ShadowCastingSetting, int>::validated_call(Object*, Variant
   const**, Variant*) const */void MethodBindTRC<RenderingServer::ShadowCastingSetting,int>::validated_call(MethodBindTRC<RenderingServer::ShadowCastingSetting,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   uint uVar1;
   code *pcVar2;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00110aab;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ));
   *(ulong*)( param_3 + 8 ) = (ulong)uVar1;
   LAB_00110aab:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<RenderingServer::ShadowCastingSetting, int>::ptrcall(Object*, void const**, void*)
   const */void MethodBindTRC<RenderingServer::ShadowCastingSetting,int>::ptrcall(MethodBindTRC<RenderingServer::ShadowCastingSetting,int> *this, Object *param_1, void **param_2, void *param_3) {
   uint uVar1;
   code *pcVar2;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00110c8a;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), **param_2);
   *(ulong*)param_3 = (ulong)uVar1;
   LAB_00110c8a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Transform3D, int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Transform3D,int>::validated_call(MethodBindTRC<Transform3D,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   undefined8 *puVar1;
   code *pcVar2;
   long *plVar3;
   long in_FS_OFFSET;
   long local_88;
   undefined8 local_80;
   char *local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_78, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_78 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_80 = 0;
         local_70 = 0x35;
         String::parse_latin1((StrRange*)&local_80);
         vformat<StringName>((StringName*)&local_78, (StrRange*)&local_80, &local_88);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_78, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
            StringName::unref();
         }

         goto LAB_00110e8a;
      }

      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar2 )(&local_68, param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ));
   puVar1 = *(undefined8**)( param_3 + 8 );
   *puVar1 = local_68;
   puVar1[1] = uStack_60;
   puVar1[2] = local_58;
   puVar1[3] = uStack_50;
   puVar1[4] = local_48;
   puVar1[5] = uStack_40;
   LAB_00110e8a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Transform3D, int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Transform3D,int>::ptrcall(MethodBindTRC<Transform3D,int> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   long local_88;
   undefined8 local_80;
   char *local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_78, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_78 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_80 = 0;
         local_70 = 0x35;
         String::parse_latin1((StrRange*)&local_80);
         vformat<StringName>((StringName*)&local_78, (StrRange*)&local_80, &local_88);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_78, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
            StringName::unref();
         }

         goto LAB_00111087;
      }

      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   ( *pcVar1 )(&local_68, param_1 + *(long*)( this + 0x60 ), **param_2);
   *(undefined8*)param_3 = local_68;
   *(undefined8*)( (long)param_3 + 8 ) = uStack_60;
   *(undefined8*)( (long)param_3 + 0x10 ) = local_58;
   *(undefined8*)( (long)param_3 + 0x18 ) = uStack_50;
   *(undefined8*)( (long)param_3 + 0x20 ) = local_48;
   *(undefined8*)( (long)param_3 + 0x28 ) = uStack_40;
   LAB_00111087:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String, int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<String,int>::validated_call(MethodBindTRC<String,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((CowData<char32_t>*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00111292;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )((CowData<char32_t>*)&local_48, param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ));
   if (*(char**)( param_3 + 8 ) != local_48) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_3 + 8 ), (CowData*)&local_48);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   LAB_00111292:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String, int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<String,int>::ptrcall(MethodBindTRC<String,int> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((CowData<char32_t>*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00111480;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   ( *pcVar1 )((CowData<char32_t>*)&local_48, param_1 + *(long*)( this + 0x60 ), **param_2);
   /* WARNING: Load size is inaccurate */
   if (*param_3 != local_48) {
      CowData<char32_t>::_ref((CowData<char32_t>*)param_3, (CowData*)&local_48);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   LAB_00111480:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, Array const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<int,Array_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_001117bf;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00111669. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ), *(long*)( param_3 + 8 ) + 8);
      return;
   }

   LAB_001117bf:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<int, Array const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<int,Array_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_001119a9;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Load size is inaccurate */
      /* WARNING: Could not recover jumptable at 0x00111832. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3, *(undefined8*)( (long)param_3 + 8 ));
      return;
   }

   LAB_001119a9:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<int, unsigned int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<int,unsigned_int>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00111b89;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00111a13. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ), *(undefined4*)( *(long*)( param_3 + 8 ) + 8 ));
      return;
   }

   LAB_00111b89:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<int, unsigned int>::ptrcall(Object*, void const**, void*) const */void MethodBindT<int,unsigned_int>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00111d69;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Load size is inaccurate */
      /* WARNING: Could not recover jumptable at 0x00111bf1. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3, **(undefined4**)( (long)param_3 + 8 ));
      return;
   }

   LAB_00111d69:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<int, RenderingServer::ShadowCastingSetting>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindT<int,RenderingServer::ShadowCastingSetting>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00111f49;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00111dd3. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ), *(undefined4*)( *(long*)( param_3 + 8 ) + 8 ));
      return;
   }

   LAB_00111f49:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<int, RenderingServer::ShadowCastingSetting>::ptrcall(Object*, void const**, void*)
   const */void MethodBindT<int,RenderingServer::ShadowCastingSetting>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00112129;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Load size is inaccurate */
      /* WARNING: Could not recover jumptable at 0x00111fb1. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3, **(undefined4**)( (long)param_3 + 8 ));
      return;
   }

   LAB_00112129:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<int, Transform3D const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<int,Transform3D_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00112311;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00112197. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ), *(undefined8*)( *(long*)( param_3 + 8 ) + 8 ));
      return;
   }

   LAB_00112311:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<int, Transform3D const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<int,Transform3D_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_001124f9;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Load size is inaccurate */
      /* WARNING: Could not recover jumptable at 0x00112382. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3, *(undefined8*)( (long)param_3 + 8 ));
      return;
   }

   LAB_001124f9:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<int, String const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<int,String_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_001126bf;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00112569. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ), *(long*)( param_3 + 8 ) + 8);
      return;
   }

   LAB_001126bf:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<int, String const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<int,String_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_001128a9;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Load size is inaccurate */
      /* WARNING: Could not recover jumptable at 0x00112732. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3, *(undefined8*)( (long)param_3 + 8 ));
      return;
   }

   LAB_001128a9:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<int>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00112a81;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0011290c. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00112a81:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */void MethodBindT<int>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00112c61;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00112aeb. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_00112c61:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<Ref<Texture2D>, int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Ref<Texture2D>,int>::ptrcall(MethodBindTRC<Ref<Texture2D>,int> *this, Object *param_1, void **param_2, void *param_3) {
   char cVar1;
   code *pcVar2;
   Object *pOVar3;
   long *plVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Object *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Object*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Object*)0x10ea48;
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00112d29;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), **param_2);
   if (local_48 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 == (Object*)0x0) goto LAB_00112d29;
      *(undefined8*)param_3 = 0;
      goto LAB_00112d71;
   }

   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_00112d71;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar5 != (Object*)0x0) {
            LAB_00112d71:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (local_48 == (Object*)0x0) goto LAB_00112d29;
      }

   }

   cVar1 = RefCounted::unreference();
   pOVar5 = local_48;
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_48);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
         Memory::free_static(pOVar5, false);
      }

   }

   LAB_00112d29:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<NavigationMesh>, int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Ref<NavigationMesh>,int>::ptrcall(MethodBindTRC<Ref<NavigationMesh>,int> *this, Object *param_1, void **param_2, void *param_3) {
   char cVar1;
   code *pcVar2;
   Object *pOVar3;
   long *plVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Object *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Object*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Object*)0x10ea48;
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00113009;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), **param_2);
   if (local_48 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 == (Object*)0x0) goto LAB_00113009;
      *(undefined8*)param_3 = 0;
      goto LAB_00113051;
   }

   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_00113051;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar5 != (Object*)0x0) {
            LAB_00113051:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (local_48 == (Object*)0x0) goto LAB_00113009;
      }

   }

   cVar1 = RefCounted::unreference();
   pOVar5 = local_48;
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_48);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
         Memory::free_static(pOVar5, false);
      }

   }

   LAB_00113009:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Mesh>, int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Ref<Mesh>,int>::ptrcall(MethodBindTRC<Ref<Mesh>,int> *this, Object *param_1, void **param_2, void *param_3) {
   char cVar1;
   code *pcVar2;
   Object *pOVar3;
   long *plVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Object *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Object*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Object*)0x10ea48;
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001132e9;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), **param_2);
   if (local_48 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 == (Object*)0x0) goto LAB_001132e9;
      *(undefined8*)param_3 = 0;
      goto LAB_00113331;
   }

   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_00113331;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar5 != (Object*)0x0) {
            LAB_00113331:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (local_48 == (Object*)0x0) goto LAB_001132e9;
      }

   }

   cVar1 = RefCounted::unreference();
   pOVar5 = local_48;
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_48);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
         Memory::free_static(pOVar5, false);
      }

   }

   LAB_001132e9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, Ref<Texture2D> const&>::validated_call(Object*, Variant const**, Variant*) const
    */void MethodBindT<int,Ref<Texture2D>const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   Object *pOVar4;
   Variant *pVVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   Object *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar5 = param_2[0x23];
         if (pVVar5 == (Variant*)0x0) {
            pVVar5 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar5 = param_2[1] + 0x20;
      }

      if (local_68 == (Object*)*(long*)pVVar5) {
         if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = (Object*)0x10ea48;
         local_60 = 0x35;
         local_70 = 0;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00113619;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar6 = *(code**)( param_1 + 0x58 );
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar6 & 1 ) != 0) {
      pcVar6 = *(code**)( pcVar6 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   Variant::Variant((Variant*)local_58, *(Object**)( *(long*)( param_3 + 8 ) + 0x10 ));
   local_68 = (Object*)0x0;
   pOVar4 = (Object*)Variant::get_validated_object();
   pOVar2 = local_68;
   if (pOVar4 != local_68) {
      if (pOVar4 == (Object*)0x0) {
         if (local_68 != (Object*)0x0) {
            local_68 = (Object*)0x0;
            LAB_001135d0:cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

         }

      }
 else {
         pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &Texture2D::typeinfo, 0);
         if (pOVar2 != pOVar4) {
            local_68 = pOVar4;
            if (pOVar4 != (Object*)0x0) {
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  local_68 = (Object*)0x0;
               }

            }

            if (pOVar2 != (Object*)0x0) goto LAB_001135d0;
         }

      }

   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   ( *pcVar6 )((long*)( (long)param_2 + lVar1 ), *(undefined4*)( *(long*)param_3 + 8 ), (StringName*)&local_68);
   if (local_68 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_68;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_68);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_00113619:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, Ref<Texture2D> const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<int,Ref<Texture2D>const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Object *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar4 = (long*)param_2[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar4 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (Object*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Object*)0x10ea48;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001138c8;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar5 = *(code**)( param_1 + 0x58 );
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar5 & 1 ) != 0) {
      pcVar5 = *(code**)( pcVar5 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   if (( *(long**)( (long)param_3 + 8 ) == (long*)0x0 ) || ( local_48 = (Object*)**(long**)( (long)param_3 + 8 ) ),local_48 == (Object*)0x0) {
      LAB_0011389d:local_48 = (Object*)0x0;
   }
 else {
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') goto LAB_0011389d;
   }

   /* WARNING: Load size is inaccurate */
   ( *pcVar5 )((long*)( (long)param_2 + lVar1 ), **param_3, (StringName*)&local_48);
   if (local_48 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_48;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_48);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_001138c8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, Ref<NavigationMesh> const&>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindT<int,Ref<NavigationMesh>const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   Object *pOVar4;
   Variant *pVVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   Object *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar5 = param_2[0x23];
         if (pVVar5 == (Variant*)0x0) {
            pVVar5 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar5 = param_2[1] + 0x20;
      }

      if (local_68 == (Object*)*(long*)pVVar5) {
         if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = (Object*)0x10ea48;
         local_60 = 0x35;
         local_70 = 0;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00113b69;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar6 = *(code**)( param_1 + 0x58 );
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar6 & 1 ) != 0) {
      pcVar6 = *(code**)( pcVar6 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   Variant::Variant((Variant*)local_58, *(Object**)( *(long*)( param_3 + 8 ) + 0x10 ));
   local_68 = (Object*)0x0;
   pOVar4 = (Object*)Variant::get_validated_object();
   pOVar2 = local_68;
   if (pOVar4 != local_68) {
      if (pOVar4 == (Object*)0x0) {
         if (local_68 != (Object*)0x0) {
            local_68 = (Object*)0x0;
            LAB_00113b20:cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

         }

      }
 else {
         pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &NavigationMesh::typeinfo, 0);
         if (pOVar2 != pOVar4) {
            local_68 = pOVar4;
            if (pOVar4 != (Object*)0x0) {
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  local_68 = (Object*)0x0;
               }

            }

            if (pOVar2 != (Object*)0x0) goto LAB_00113b20;
         }

      }

   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   ( *pcVar6 )((long*)( (long)param_2 + lVar1 ), *(undefined4*)( *(long*)param_3 + 8 ), (StringName*)&local_68);
   if (local_68 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_68;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_68);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_00113b69:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, Ref<NavigationMesh> const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<int,Ref<NavigationMesh>const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Object *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar4 = (long*)param_2[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar4 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (Object*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Object*)0x10ea48;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00113e18;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar5 = *(code**)( param_1 + 0x58 );
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar5 & 1 ) != 0) {
      pcVar5 = *(code**)( pcVar5 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   if (( *(long**)( (long)param_3 + 8 ) == (long*)0x0 ) || ( local_48 = (Object*)**(long**)( (long)param_3 + 8 ) ),local_48 == (Object*)0x0) {
      LAB_00113ded:local_48 = (Object*)0x0;
   }
 else {
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') goto LAB_00113ded;
   }

   /* WARNING: Load size is inaccurate */
   ( *pcVar5 )((long*)( (long)param_2 + lVar1 ), **param_3, (StringName*)&local_48);
   if (local_48 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_48;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_48);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_00113e18:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, Ref<Mesh> const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<int,Ref<Mesh>const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   Object *pOVar4;
   Variant *pVVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   Object *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar5 = param_2[0x23];
         if (pVVar5 == (Variant*)0x0) {
            pVVar5 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar5 = param_2[1] + 0x20;
      }

      if (local_68 == (Object*)*(long*)pVVar5) {
         if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = (Object*)0x10ea48;
         local_60 = 0x35;
         local_70 = 0;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_001140b9;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar6 = *(code**)( param_1 + 0x58 );
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar6 & 1 ) != 0) {
      pcVar6 = *(code**)( pcVar6 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   Variant::Variant((Variant*)local_58, *(Object**)( *(long*)( param_3 + 8 ) + 0x10 ));
   local_68 = (Object*)0x0;
   pOVar4 = (Object*)Variant::get_validated_object();
   pOVar2 = local_68;
   if (pOVar4 != local_68) {
      if (pOVar4 == (Object*)0x0) {
         if (local_68 != (Object*)0x0) {
            local_68 = (Object*)0x0;
            LAB_00114070:cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

         }

      }
 else {
         pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &Mesh::typeinfo, 0);
         if (pOVar2 != pOVar4) {
            local_68 = pOVar4;
            if (pOVar4 != (Object*)0x0) {
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  local_68 = (Object*)0x0;
               }

            }

            if (pOVar2 != (Object*)0x0) goto LAB_00114070;
         }

      }

   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   ( *pcVar6 )((long*)( (long)param_2 + lVar1 ), *(undefined4*)( *(long*)param_3 + 8 ), (StringName*)&local_68);
   if (local_68 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_68;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_68);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_001140b9:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, Ref<Mesh> const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<int,Ref<Mesh>const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Object *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar4 = (long*)param_2[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar4 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (Object*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Object*)0x10ea48;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00114368;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar5 = *(code**)( param_1 + 0x58 );
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar5 & 1 ) != 0) {
      pcVar5 = *(code**)( pcVar5 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   if (( *(long**)( (long)param_3 + 8 ) == (long*)0x0 ) || ( local_48 = (Object*)**(long**)( (long)param_3 + 8 ) ),local_48 == (Object*)0x0) {
      LAB_0011433d:local_48 = (Object*)0x0;
   }
 else {
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') goto LAB_0011433d;
   }

   /* WARNING: Load size is inaccurate */
   ( *pcVar5 )((long*)( (long)param_2 + lVar1 ), **param_3, (StringName*)&local_48);
   if (local_48 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_48;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_48);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_00114368:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int, String const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTRC<int,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
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
   long local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
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
         _err_print_error(&_LC111, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00114638;
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
         if (in_R8D != 1) goto LAB_00114680;
         LAB_00114670:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00114680:uVar7 = 4;
            goto LAB_0011462d;
         }

         if (in_R8D == 1) goto LAB_00114670;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 4);
      uVar4 = _LC116;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_String((Variant*)&local_68);
      iVar6 = ( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_68);
      Variant::Variant((Variant*)local_58, iVar6);
      Variant::operator =((Variant*)param_1, (Variant*)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   }
 else {
      uVar7 = 3;
      LAB_0011462d:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_00114638:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<String, int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<String,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
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
   long local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
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
         _err_print_error(&_LC111, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_001149c8;
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
         if (in_R8D != 1) goto LAB_00114a10;
         LAB_00114a00:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00114a10:uVar7 = 4;
            goto LAB_001149bd;
         }

         if (in_R8D == 1) goto LAB_00114a00;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 2);
      uVar4 = _LC118;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      iVar6 = Variant::operator_cast_to_int(pVVar11);
      ( *(code*)pVVar12 )((CowData<char32_t>*)&local_68, (Variant*)( (long)plVar10 + (long)pVVar1 ), iVar6);
      Variant::Variant((Variant*)local_58, (String*)&local_68);
      Variant::operator =((Variant*)param_1, (Variant*)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   }
 else {
      uVar7 = 3;
      LAB_001149bd:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_001149c8:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<Ref<Mesh>, int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Ref<Mesh>,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   Object *pOVar5;
   char cVar6;
   int iVar7;
   undefined4 uVar8;
   long *plVar9;
   long lVar10;
   undefined4 in_register_00000014;
   long *plVar11;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar12;
   Variant *pVVar13;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   Object *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_58 == (Object*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = (Object*)0x10ea48;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC111, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00114d90;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar12 = param_2[5];
      if (pVVar12 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00114dd0;
         LAB_00114dc0:pVVar12 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar12 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00114dd0:uVar8 = 4;
            goto LAB_00114d85;
         }

         if (in_R8D == 1) goto LAB_00114dc0;
         lVar10 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar10) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar12 = pVVar12 + lVar10 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar13 & 1 ) != 0) {
         pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
      }

      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar12, 2);
      uVar4 = _LC118;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      iVar7 = Variant::operator_cast_to_int(pVVar12);
      ( *(code*)pVVar13 )(&local_58, (Variant*)( (long)plVar11 + (long)pVVar1 ), iVar7);
      Variant::Variant((Variant*)local_48, local_58);
      Variant::operator =((Variant*)param_1, (Variant*)local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_58 != (Object*)0x0) {
         cVar6 = RefCounted::unreference();
         pOVar5 = local_58;
         if (cVar6 != '\0') {
            cVar6 = predelete_handler(local_58);
            if (cVar6 != '\0') {
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
            }

         }

      }

   }
 else {
      uVar8 = 3;
      LAB_00114d85:*in_R9 = uVar8;
      in_R9[2] = 1;
   }

   LAB_00114d90:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<RenderingServer::ShadowCastingSetting, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<RenderingServer::ShadowCastingSetting,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
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
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC111, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00115120;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00115160;
         LAB_00115150:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00115160:uVar7 = 4;
            goto LAB_00115115;
         }

         if (in_R8D == 1) goto LAB_00115150;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 2);
      uVar4 = _LC118;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      iVar6 = Variant::operator_cast_to_int(pVVar11);
      iVar6 = ( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), iVar6);
      Variant::Variant((Variant*)local_48, iVar6);
      Variant::operator =((Variant*)param_1, (Variant*)local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

   }
 else {
      uVar7 = 3;
      LAB_00115115:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_00115120:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<NavigationMesh>, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<Ref<NavigationMesh>,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   Object *pOVar5;
   char cVar6;
   int iVar7;
   undefined4 uVar8;
   long *plVar9;
   long lVar10;
   undefined4 in_register_00000014;
   long *plVar11;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar12;
   Variant *pVVar13;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   Object *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_58 == (Object*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = (Object*)0x10ea48;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC111, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001154a0;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar12 = param_2[5];
      if (pVVar12 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_001154e0;
         LAB_001154d0:pVVar12 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar12 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_001154e0:uVar8 = 4;
            goto LAB_00115495;
         }

         if (in_R8D == 1) goto LAB_001154d0;
         lVar10 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar10) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar12 = pVVar12 + lVar10 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar13 & 1 ) != 0) {
         pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
      }

      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar12, 2);
      uVar4 = _LC118;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      iVar7 = Variant::operator_cast_to_int(pVVar12);
      ( *(code*)pVVar13 )(&local_58, (Variant*)( (long)plVar11 + (long)pVVar1 ), iVar7);
      Variant::Variant((Variant*)local_48, local_58);
      Variant::operator =((Variant*)param_1, (Variant*)local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_58 != (Object*)0x0) {
         cVar6 = RefCounted::unreference();
         pOVar5 = local_58;
         if (cVar6 != '\0') {
            cVar6 = predelete_handler(local_58);
            if (cVar6 != '\0') {
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
            }

         }

      }

   }
 else {
      uVar8 = 3;
      LAB_00115495:*in_R9 = uVar8;
      in_R9[2] = 1;
   }

   LAB_001154a0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Transform3D, int>::call(Object*, Variant const**, int, Callable::CallError&) const
    */Object *MethodBindTRC<Transform3D,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
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
   long local_a8;
   undefined8 local_a0;
   char *local_98;
   undefined8 local_90;
   int local_88[8];
   Transform3D local_68[56];
   long local_30;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_98, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
      }

      if (local_98 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_a0 = 0;
         local_90 = 0x35;
         String::parse_latin1((StrRange*)&local_a0);
         vformat<StringName>((StringName*)&local_98, (StrRange*)&local_a0, &local_a8);
         _err_print_error(&_LC111, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_98, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
            StringName::unref();
         }

         goto LAB_00115840;
      }

      if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00115890;
         LAB_00115880:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00115890:uVar7 = 4;
            goto LAB_00115835;
         }

         if (in_R8D == 1) goto LAB_00115880;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 2);
      uVar4 = _LC118;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      iVar6 = Variant::operator_cast_to_int(pVVar11);
      ( *(code*)pVVar12 )(local_68, (Variant*)( (long)plVar10 + (long)pVVar1 ), iVar6);
      Variant::Variant((Variant*)local_88, local_68);
      Variant::operator =((Variant*)param_1, (Variant*)local_88);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
         Variant::_clear_internal();
      }

   }
 else {
      uVar7 = 3;
      LAB_00115835:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_00115840:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<unsigned int, int>::call(Object*, Variant const**, int, Callable::CallError&) const
    */Object *MethodBindTRC<unsigned_int,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   uint uVar7;
   undefined4 uVar8;
   long *plVar9;
   long lVar10;
   undefined4 in_register_00000014;
   long *plVar11;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar12;
   Variant *pVVar13;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC111, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00115ba0;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar12 = param_2[5];
      if (pVVar12 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00115be0;
         LAB_00115bd0:pVVar12 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar12 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00115be0:uVar8 = 4;
            goto LAB_00115b95;
         }

         if (in_R8D == 1) goto LAB_00115bd0;
         lVar10 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar10) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar12 = pVVar12 + lVar10 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar13 & 1 ) != 0) {
         pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar12, 2);
      uVar4 = _LC118;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      iVar6 = Variant::operator_cast_to_int(pVVar12);
      uVar7 = ( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ), iVar6);
      Variant::Variant((Variant*)local_48, uVar7);
      Variant::operator =((Variant*)param_1, (Variant*)local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

   }
 else {
      uVar8 = 3;
      LAB_00115b95:*in_R9 = uVar8;
      in_R9[2] = 1;
   }

   LAB_00115ba0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Array, int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Array,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
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
   long local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
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
         _err_print_error(&_LC111, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00115ee8;
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
         if (in_R8D != 1) goto LAB_00115f30;
         LAB_00115f20:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00115f30:uVar7 = 4;
            goto LAB_00115edd;
         }

         if (in_R8D == 1) goto LAB_00115f20;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 2);
      uVar4 = _LC118;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      iVar6 = Variant::operator_cast_to_int(pVVar11);
      ( *(code*)pVVar12 )((Array*)&local_68, (Variant*)( (long)plVar10 + (long)pVVar1 ), iVar6);
      Variant::Variant((Variant*)local_58, (Array*)&local_68);
      Variant::operator =((Variant*)param_1, (Variant*)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Array::~Array((Array*)&local_68);
   }
 else {
      uVar7 = 3;
      LAB_00115edd:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_00115ee8:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<Ref<Texture2D>, int>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTRC<Ref<Texture2D>,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   Object *pOVar5;
   char cVar6;
   int iVar7;
   undefined4 uVar8;
   long *plVar9;
   long lVar10;
   undefined4 in_register_00000014;
   long *plVar11;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar12;
   Variant *pVVar13;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   Object *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_58 == (Object*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = (Object*)0x10ea48;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC111, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001162b0;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar12 = param_2[5];
      if (pVVar12 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_001162f0;
         LAB_001162e0:pVVar12 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar12 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_001162f0:uVar8 = 4;
            goto LAB_001162a5;
         }

         if (in_R8D == 1) goto LAB_001162e0;
         lVar10 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar10) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar12 = pVVar12 + lVar10 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar13 & 1 ) != 0) {
         pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
      }

      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar12, 2);
      uVar4 = _LC118;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      iVar7 = Variant::operator_cast_to_int(pVVar12);
      ( *(code*)pVVar13 )(&local_58, (Variant*)( (long)plVar11 + (long)pVVar1 ), iVar7);
      Variant::Variant((Variant*)local_48, local_58);
      Variant::operator =((Variant*)param_1, (Variant*)local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_58 != (Object*)0x0) {
         cVar6 = RefCounted::unreference();
         pOVar5 = local_58;
         if (cVar6 != '\0') {
            cVar6 = predelete_handler(local_58);
            if (cVar6 != '\0') {
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
            }

         }

      }

   }
 else {
      uVar8 = 3;
      LAB_001162a5:*in_R9 = uVar8;
      in_R9[2] = 1;
   }

   LAB_001162b0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Texture2D>, int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Ref<Texture2D>,int>::validated_call(MethodBindTRC<Ref<Texture2D>,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Object *pOVar1;
   char cVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   long local_58;
   Object *local_50;
   char *local_48;
   Object *local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = (Object*)0x0;
         local_40 = (Object*)0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011657c;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar3 )(&local_50, param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ));
   if (local_50 == (Object*)0x0) {
      Variant::ObjData::unref();
   }
 else {
      local_48 = *(char**)( local_50 + 0x60 );
      local_40 = local_50;
      Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
   }

   if (local_50 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_50;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_50);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   LAB_0011657c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<NavigationMesh>, int>::validated_call(Object*, Variant const**, Variant*) const
    */void MethodBindTRC<Ref<NavigationMesh>,int>::validated_call(MethodBindTRC<Ref<NavigationMesh>,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Object *pOVar1;
   char cVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   long local_58;
   Object *local_50;
   char *local_48;
   Object *local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = (Object*)0x0;
         local_40 = (Object*)0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001167cc;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar3 )(&local_50, param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ));
   if (local_50 == (Object*)0x0) {
      Variant::ObjData::unref();
   }
 else {
      local_48 = *(char**)( local_50 + 0x60 );
      local_40 = local_50;
      Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
   }

   if (local_50 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_50;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_50);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   LAB_001167cc:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Mesh>, int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Ref<Mesh>,int>::validated_call(MethodBindTRC<Ref<Mesh>,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Object *pOVar1;
   char cVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   long local_58;
   Object *local_50;
   char *local_48;
   Object *local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = (Object*)0x0;
         local_40 = (Object*)0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00116a1c;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar3 )(&local_50, param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ));
   if (local_50 == (Object*)0x0) {
      Variant::ObjData::unref();
   }
 else {
      local_48 = *(char**)( local_50 + 0x60 );
      local_40 = local_50;
      Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
   }

   if (local_50 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_50;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_50);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   LAB_00116a1c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x00116e19) *//* WARNING: Removing unreachable block (ram,0x00116e21) *//* WARNING: Removing unreachable block (ram,0x00116e31) *//* WARNING: Removing unreachable block (ram,0x00116e41) *//* void call_with_variant_args_dv<__UnexistingClass, int, Ref<Texture2D> const&>(__UnexistingClass*,
   void (__UnexistingClass::*)(int, Ref<Texture2D> const&), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,int,Ref<Texture2D>const&>(__UnexistingClass *param_1, _func_void_int_Ref_ptr *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   undefined4 uVar7;
   long lVar8;
   Object *pOVar9;
   undefined4 in_register_0000000c;
   long *plVar10;
   long lVar11;
   uint uVar12;
   int iVar13;
   Variant *this;
   undefined4 *puVar14;
   long in_FS_OFFSET;
   long in_stack_00000008;
   Object *local_38;
   plVar10 = (long*)CONCAT44(in_register_0000000c, param_4);
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar12 = (uint)param_5;
   if (uVar12 < 3) {
      lVar8 = *(long*)( in_stack_00000008 + 8 );
      iVar6 = 2 - uVar12;
      if (lVar8 == 0) {
         if (iVar6 != 0) goto LAB_00116db0;
         this(Variant * ) * plVar10;
         LAB_00116dfd:puVar14 = (undefined4*)plVar10[1];
      }
 else {
         lVar2 = *(long*)( lVar8 + -8 );
         iVar13 = (int)lVar2;
         if (iVar13 < iVar6) {
            LAB_00116db0:uVar7 = 4;
            goto LAB_00116db5;
         }

         if (uVar12 == 0) {
            lVar11 = (long)( iVar13 + -2 );
            if (lVar2 <= lVar11) goto LAB_00116e68;
            this(Variant * )(lVar8 + lVar11 * 0x18);
         }
 else {
            this(Variant * ) * plVar10;
            if (uVar12 == 2) goto LAB_00116dfd;
         }

         lVar11 = (long)(int)( ( uVar12 ^ 1 ) + ( iVar13 - iVar6 ) );
         if (lVar2 <= lVar11) {
            LAB_00116e68:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar11, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         puVar14 = (undefined4*)( lVar8 + lVar11 * 0x18 );
      }

      *(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_int_Ref_ptr**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*puVar14);
      uVar4 = _LC119;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      local_38 = (Object*)0x0;
      lVar8 = Variant::get_validated_object();
      if (( ( ( lVar8 != 0 ) && ( lVar8 != 0 ) ) && ( pOVar9 = (Object*)__dynamic_cast(lVar8, &Object::typeinfo, &Texture2D::typeinfo, 0) ),pOVar9 != (Object*)0x0 )) {
         local_38 = (Object*)0x0;
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
      uVar4 = _LC118;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      iVar6 = Variant::operator_cast_to_int(this);
      ( *param_2 )((int)( param_1 + (long)param_3 ), (Ref*)iVar6);
      if (( ( local_38 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)local_38 + 0x140 ))(local_38);
      Memory::free_static(local_38, false);
   }

}
else{uVar7 = 3;LAB_00116db5:*(undefined4*)param_6 = uVar7;*(undefined4*)( param_6 + 8 ) = 2;}if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* MethodBindT<int, Ref<Texture2D> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<int,Ref<Texture2D>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long *plVar1;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var2;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var2 + 8 ) == 0) {
         plVar1 = *(long**)( p_Var2 + 0x118 );
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
         }

      }
 else {
         plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC111, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00116f06;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int,Ref<Texture2D>const&>(p_Var2, (_func_void_int_Ref_ptr*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00116f06:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, int, Array const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, Array const&), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,int,Array_const&>(__UnexistingClass *param_1, _func_void_int_Array_ptr *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   undefined4 uVar7;
   undefined4 in_register_0000000c;
   long *plVar8;
   long lVar9;
   Variant *this;
   uint uVar10;
   int iVar11;
   undefined4 *puVar12;
   long in_FS_OFFSET;
   long in_stack_00000008;
   Variant aVStack_48[8];
   long local_40;
   plVar8 = (long*)CONCAT44(in_register_0000000c, param_4);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar10 = (uint)param_5;
   if (uVar10 < 3) {
      lVar1 = *(long*)( in_stack_00000008 + 8 );
      iVar6 = 2 - uVar10;
      if (lVar1 == 0) {
         if (iVar6 != 0) goto LAB_00117210;
         this(Variant * ) * plVar8;
         LAB_0011725d:puVar12 = (undefined4*)plVar8[1];
      }
 else {
         lVar2 = *(long*)( lVar1 + -8 );
         iVar11 = (int)lVar2;
         if (iVar11 < iVar6) {
            LAB_00117210:uVar7 = 4;
            goto LAB_00117215;
         }

         if (uVar10 == 0) {
            lVar9 = (long)( iVar11 + -2 );
            if (lVar2 <= lVar9) goto LAB_00117278;
            this(Variant * )(lVar1 + lVar9 * 0x18);
         }
 else {
            this(Variant * ) * plVar8;
            if (uVar10 == 2) goto LAB_0011725d;
         }

         lVar9 = (long)(int)( ( uVar10 ^ 1 ) + ( iVar11 - iVar6 ) );
         if (lVar2 <= lVar9) {
            LAB_00117278:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         puVar12 = (undefined4*)( lVar1 + lVar9 * 0x18 );
      }

      *(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_int_Array_ptr**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*puVar12, 0x1c);
      uVar4 = _LC120;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      Variant::operator_cast_to_Array(aVStack_48);
      cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
      uVar4 = _LC118;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      iVar6 = Variant::operator_cast_to_int(this);
      ( *param_2 )((int)( param_1 + (long)param_3 ), (Array*)iVar6);
      Array::~Array((Array*)aVStack_48);
   }
 else {
      uVar7 = 3;
      LAB_00117215:*(undefined4*)param_6 = uVar7;
      *(undefined4*)( param_6 + 8 ) = 2;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, Array const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */Object *MethodBindT<int,Array_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long *plVar1;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var2;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var2 + 8 ) == 0) {
         plVar1 = *(long**)( p_Var2 + 0x118 );
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
         }

      }
 else {
         plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC111, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00117316;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int,Array_const&>(p_Var2, (_func_void_int_Array_ptr*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00117316:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, int, unsigned int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, unsigned int), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,int,unsigned_int>(__UnexistingClass *param_1, _func_void_int_uint *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   uint uVar7;
   undefined4 uVar8;
   undefined4 in_register_0000000c;
   long *plVar9;
   long lVar10;
   Variant *this;
   int iVar11;
   Variant *this_00;
   long in_stack_00000008;
   plVar9 = (long*)CONCAT44(in_register_0000000c, param_4);
   uVar7 = (uint)param_5;
   if (2 < uVar7) {
      uVar8 = 3;
      goto LAB_0011760d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   iVar6 = 2 - uVar7;
   if (lVar1 == 0) {
      if (iVar6 == 0) {
         this(Variant * ) * plVar9;
         LAB_0011763d:this_00 = (Variant*)plVar9[1];
         goto LAB_00117575;
      }

   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      iVar11 = (int)lVar2;
      if (iVar6 <= iVar11) {
         if (uVar7 == 0) {
            lVar10 = (long)( iVar11 + -2 );
            if (lVar2 <= lVar10) goto LAB_00117658;
            this(Variant * )(lVar1 + lVar10 * 0x18);
         }
 else {
            this(Variant * ) * plVar9;
            if (uVar7 == 2) goto LAB_0011763d;
         }

         lVar10 = (long)(int)( ( uVar7 ^ 1 ) + ( iVar11 - iVar6 ) );
         if (lVar2 <= lVar10) {
            LAB_00117658:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this_00 = (Variant*)( lVar1 + lVar10 * 0x18 );
         LAB_00117575:*(undefined4*)param_6 = 0;
         if (( (ulong)param_2 & 1 ) != 0) {
            param_2 = *(_func_void_int_uint**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
         }

         cVar5 = Variant::can_convert_strict(*(undefined4*)this_00, 2);
         uVar4 = _LC121;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }

         Variant::operator_cast_to_unsigned_int(this_00);
         cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
         uVar4 = _LC118;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }

         uVar7 = Variant::operator_cast_to_int(this);
         /* WARNING: Could not recover jumptable at 0x001175fb. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *param_2 )((int)( param_1 + (long)param_3 ), uVar7);
         return;
      }

   }

   uVar8 = 4;
   LAB_0011760d:*(undefined4*)param_6 = uVar8;
   *(undefined4*)( param_6 + 8 ) = 2;
   return;
}
/* MethodBindT<int, unsigned int>::call(Object*, Variant const**, int, Callable::CallError&) const
    */Object *MethodBindT<int,unsigned_int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long *plVar1;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var2;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var2 + 8 ) == 0) {
         plVar1 = *(long**)( p_Var2 + 0x118 );
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
         }

      }
 else {
         plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC111, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_001176f6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int,unsigned_int>(p_Var2, (_func_void_int_uint*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_001176f6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x00117af9) *//* WARNING: Removing unreachable block (ram,0x00117b01) *//* WARNING: Removing unreachable block (ram,0x00117b11) *//* WARNING: Removing unreachable block (ram,0x00117b21) *//* void call_with_variant_args_dv<__UnexistingClass, int, Ref<NavigationMesh>
   const&>(__UnexistingClass*, void (__UnexistingClass::*)(int, Ref<NavigationMesh> const&), Variant
   const**, int, Callable::CallError&, Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,int,Ref<NavigationMesh>const&>(__UnexistingClass *param_1, _func_void_int_Ref_ptr *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   undefined4 uVar7;
   long lVar8;
   Object *pOVar9;
   undefined4 in_register_0000000c;
   long *plVar10;
   long lVar11;
   uint uVar12;
   int iVar13;
   Variant *this;
   undefined4 *puVar14;
   long in_FS_OFFSET;
   long in_stack_00000008;
   Object *local_38;
   plVar10 = (long*)CONCAT44(in_register_0000000c, param_4);
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar12 = (uint)param_5;
   if (uVar12 < 3) {
      lVar8 = *(long*)( in_stack_00000008 + 8 );
      iVar6 = 2 - uVar12;
      if (lVar8 == 0) {
         if (iVar6 != 0) goto LAB_00117a90;
         this(Variant * ) * plVar10;
         LAB_00117add:puVar14 = (undefined4*)plVar10[1];
      }
 else {
         lVar2 = *(long*)( lVar8 + -8 );
         iVar13 = (int)lVar2;
         if (iVar13 < iVar6) {
            LAB_00117a90:uVar7 = 4;
            goto LAB_00117a95;
         }

         if (uVar12 == 0) {
            lVar11 = (long)( iVar13 + -2 );
            if (lVar2 <= lVar11) goto LAB_00117b48;
            this(Variant * )(lVar8 + lVar11 * 0x18);
         }
 else {
            this(Variant * ) * plVar10;
            if (uVar12 == 2) goto LAB_00117add;
         }

         lVar11 = (long)(int)( ( uVar12 ^ 1 ) + ( iVar13 - iVar6 ) );
         if (lVar2 <= lVar11) {
            LAB_00117b48:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar11, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         puVar14 = (undefined4*)( lVar8 + lVar11 * 0x18 );
      }

      *(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_int_Ref_ptr**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*puVar14);
      uVar4 = _LC119;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      local_38 = (Object*)0x0;
      lVar8 = Variant::get_validated_object();
      if (( ( ( lVar8 != 0 ) && ( lVar8 != 0 ) ) && ( pOVar9 = (Object*)__dynamic_cast(lVar8, &Object::typeinfo, &NavigationMesh::typeinfo, 0) ),pOVar9 != (Object*)0x0 )) {
         local_38 = (Object*)0x0;
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
      uVar4 = _LC118;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      iVar6 = Variant::operator_cast_to_int(this);
      ( *param_2 )((int)( param_1 + (long)param_3 ), (Ref*)iVar6);
      if (( ( local_38 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)local_38 + 0x140 ))(local_38);
      Memory::free_static(local_38, false);
   }

}
else{uVar7 = 3;LAB_00117a95:*(undefined4*)param_6 = uVar7;*(undefined4*)( param_6 + 8 ) = 2;}if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* MethodBindT<int, Ref<NavigationMesh> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<int,Ref<NavigationMesh>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long *plVar1;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var2;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var2 + 8 ) == 0) {
         plVar1 = *(long**)( p_Var2 + 0x118 );
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
         }

      }
 else {
         plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC111, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00117be6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int,Ref<NavigationMesh>const&>(p_Var2, (_func_void_int_Ref_ptr*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00117be6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, int,
   RenderingServer::ShadowCastingSetting>(__UnexistingClass*, void (__UnexistingClass::*)(int,
   RenderingServer::ShadowCastingSetting), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,int,RenderingServer::ShadowCastingSetting>(__UnexistingClass *param_1, _func_void_int_ShadowCastingSetting *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   undefined4 uVar7;
   undefined4 in_register_0000000c;
   long *plVar8;
   long lVar9;
   Variant *this;
   uint uVar10;
   int iVar11;
   Variant *this_00;
   long in_stack_00000008;
   plVar8 = (long*)CONCAT44(in_register_0000000c, param_4);
   uVar10 = (uint)param_5;
   if (2 < uVar10) {
      uVar7 = 3;
      goto LAB_00117edd;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   iVar6 = 2 - uVar10;
   if (lVar1 == 0) {
      if (iVar6 == 0) {
         this(Variant * ) * plVar8;
         LAB_00117f0d:this_00 = (Variant*)plVar8[1];
         goto LAB_00117e45;
      }

   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      iVar11 = (int)lVar2;
      if (iVar6 <= iVar11) {
         if (uVar10 == 0) {
            lVar9 = (long)( iVar11 + -2 );
            if (lVar2 <= lVar9) goto LAB_00117f28;
            this(Variant * )(lVar1 + lVar9 * 0x18);
         }
 else {
            this(Variant * ) * plVar8;
            if (uVar10 == 2) goto LAB_00117f0d;
         }

         lVar9 = (long)(int)( ( uVar10 ^ 1 ) + ( iVar11 - iVar6 ) );
         if (lVar2 <= lVar9) {
            LAB_00117f28:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this_00 = (Variant*)( lVar1 + lVar9 * 0x18 );
         LAB_00117e45:*(undefined4*)param_6 = 0;
         if (( (ulong)param_2 & 1 ) != 0) {
            param_2 = *(_func_void_int_ShadowCastingSetting**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
         }

         cVar5 = Variant::can_convert_strict(*(undefined4*)this_00, 2);
         uVar4 = _LC121;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }

         Variant::operator_cast_to_long(this_00);
         cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
         uVar4 = _LC118;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }

         iVar6 = Variant::operator_cast_to_int(this);
         /* WARNING: Could not recover jumptable at 0x00117ecb. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *param_2 )((int)( param_1 + (long)param_3 ), (char)iVar6);
         return;
      }

   }

   uVar7 = 4;
   LAB_00117edd:*(undefined4*)param_6 = uVar7;
   *(undefined4*)( param_6 + 8 ) = 2;
   return;
}
/* MethodBindT<int, RenderingServer::ShadowCastingSetting>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<int,RenderingServer::ShadowCastingSetting>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long *plVar1;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var2;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var2 + 8 ) == 0) {
         plVar1 = *(long**)( p_Var2 + 0x118 );
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
         }

      }
 else {
         plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC111, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00117fc6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int,RenderingServer::ShadowCastingSetting>(p_Var2, (_func_void_int_ShadowCastingSetting*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00117fc6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, int, Transform3D const&>(__UnexistingClass*,
   void (__UnexistingClass::*)(int, Transform3D const&), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,int,Transform3D_const&>(__UnexistingClass *param_1, _func_void_int_Transform3D_ptr *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   undefined4 uVar7;
   undefined4 in_register_0000000c;
   long *plVar8;
   long lVar9;
   Variant *this;
   uint uVar10;
   int iVar11;
   undefined4 *puVar12;
   long in_FS_OFFSET;
   long in_stack_00000008;
   Variant aVStack_78[56];
   long local_40;
   plVar8 = (long*)CONCAT44(in_register_0000000c, param_4);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar10 = (uint)param_5;
   if (uVar10 < 3) {
      lVar1 = *(long*)( in_stack_00000008 + 8 );
      iVar6 = 2 - uVar10;
      if (lVar1 == 0) {
         if (iVar6 != 0) goto LAB_001182c8;
         this(Variant * ) * plVar8;
         LAB_0011831d:puVar12 = (undefined4*)plVar8[1];
      }
 else {
         lVar2 = *(long*)( lVar1 + -8 );
         iVar11 = (int)lVar2;
         if (iVar11 < iVar6) {
            LAB_001182c8:uVar7 = 4;
            goto LAB_001182cd;
         }

         if (uVar10 == 0) {
            lVar9 = (long)( iVar11 + -2 );
            if (lVar2 <= lVar9) goto LAB_00118338;
            this(Variant * )(lVar1 + lVar9 * 0x18);
         }
 else {
            this(Variant * ) * plVar8;
            if (uVar10 == 2) goto LAB_0011831d;
         }

         lVar9 = (long)(int)( ( uVar10 ^ 1 ) + ( iVar11 - iVar6 ) );
         if (lVar2 <= lVar9) {
            LAB_00118338:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         puVar12 = (undefined4*)( lVar1 + lVar9 * 0x18 );
      }

      *(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_int_Transform3D_ptr**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*puVar12, 0x12);
      uVar4 = _LC122;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      Variant::operator_cast_to_Transform3D(aVStack_78);
      cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
      uVar4 = _LC118;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      iVar6 = Variant::operator_cast_to_int(this);
      ( *param_2 )((int)( param_1 + (long)param_3 ), (Transform3D*)iVar6);
   }
 else {
      uVar7 = 3;
      LAB_001182cd:*(undefined4*)param_6 = uVar7;
      *(undefined4*)( param_6 + 8 ) = 2;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, Transform3D const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindT<int,Transform3D_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long *plVar1;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var2;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var2 + 8 ) == 0) {
         plVar1 = *(long**)( p_Var2 + 0x118 );
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
         }

      }
 else {
         plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC111, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_001183d6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int,Transform3D_const&>(p_Var2, (_func_void_int_Transform3D_ptr*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_001183d6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x001187d9) *//* WARNING: Removing unreachable block (ram,0x001187e1) *//* WARNING: Removing unreachable block (ram,0x001187f1) *//* WARNING: Removing unreachable block (ram,0x00118801) *//* void call_with_variant_args_dv<__UnexistingClass, int, Ref<Mesh> const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, Ref<Mesh> const&), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,int,Ref<Mesh>const&>(__UnexistingClass *param_1, _func_void_int_Ref_ptr *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   undefined4 uVar7;
   long lVar8;
   Object *pOVar9;
   undefined4 in_register_0000000c;
   long *plVar10;
   long lVar11;
   uint uVar12;
   int iVar13;
   Variant *this;
   undefined4 *puVar14;
   long in_FS_OFFSET;
   long in_stack_00000008;
   Object *local_38;
   plVar10 = (long*)CONCAT44(in_register_0000000c, param_4);
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar12 = (uint)param_5;
   if (uVar12 < 3) {
      lVar8 = *(long*)( in_stack_00000008 + 8 );
      iVar6 = 2 - uVar12;
      if (lVar8 == 0) {
         if (iVar6 != 0) goto LAB_00118770;
         this(Variant * ) * plVar10;
         LAB_001187bd:puVar14 = (undefined4*)plVar10[1];
      }
 else {
         lVar2 = *(long*)( lVar8 + -8 );
         iVar13 = (int)lVar2;
         if (iVar13 < iVar6) {
            LAB_00118770:uVar7 = 4;
            goto LAB_00118775;
         }

         if (uVar12 == 0) {
            lVar11 = (long)( iVar13 + -2 );
            if (lVar2 <= lVar11) goto LAB_00118828;
            this(Variant * )(lVar8 + lVar11 * 0x18);
         }
 else {
            this(Variant * ) * plVar10;
            if (uVar12 == 2) goto LAB_001187bd;
         }

         lVar11 = (long)(int)( ( uVar12 ^ 1 ) + ( iVar13 - iVar6 ) );
         if (lVar2 <= lVar11) {
            LAB_00118828:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar11, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         puVar14 = (undefined4*)( lVar8 + lVar11 * 0x18 );
      }

      *(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_int_Ref_ptr**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*puVar14);
      uVar4 = _LC119;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      local_38 = (Object*)0x0;
      lVar8 = Variant::get_validated_object();
      if (( ( ( lVar8 != 0 ) && ( lVar8 != 0 ) ) && ( pOVar9 = (Object*)__dynamic_cast(lVar8, &Object::typeinfo, &Mesh::typeinfo, 0) ),pOVar9 != (Object*)0x0 )) {
         local_38 = (Object*)0x0;
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
      uVar4 = _LC118;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      iVar6 = Variant::operator_cast_to_int(this);
      ( *param_2 )((int)( param_1 + (long)param_3 ), (Ref*)iVar6);
      if (( ( local_38 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)local_38 + 0x140 ))(local_38);
      Memory::free_static(local_38, false);
   }

}
else{uVar7 = 3;LAB_00118775:*(undefined4*)param_6 = uVar7;*(undefined4*)( param_6 + 8 ) = 2;}if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* MethodBindT<int, Ref<Mesh> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindT<int,Ref<Mesh>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long *plVar1;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var2;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var2 + 8 ) == 0) {
         plVar1 = *(long**)( p_Var2 + 0x118 );
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
         }

      }
 else {
         plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC111, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_001188c6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int,Ref<Mesh>const&>(p_Var2, (_func_void_int_Ref_ptr*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_001188c6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, int, String const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, String const&), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,int,String_const&>(__UnexistingClass *param_1, _func_void_int_String_ptr *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   undefined4 uVar7;
   undefined4 in_register_0000000c;
   long *plVar8;
   long lVar9;
   Variant *this;
   uint uVar10;
   int iVar11;
   undefined4 *puVar12;
   long in_FS_OFFSET;
   long in_stack_00000008;
   Variant aVStack_48[8];
   long local_40;
   plVar8 = (long*)CONCAT44(in_register_0000000c, param_4);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar10 = (uint)param_5;
   if (uVar10 < 3) {
      lVar1 = *(long*)( in_stack_00000008 + 8 );
      iVar6 = 2 - uVar10;
      if (lVar1 == 0) {
         if (iVar6 != 0) goto LAB_00118bd0;
         this(Variant * ) * plVar8;
         LAB_00118c1d:puVar12 = (undefined4*)plVar8[1];
      }
 else {
         lVar2 = *(long*)( lVar1 + -8 );
         iVar11 = (int)lVar2;
         if (iVar11 < iVar6) {
            LAB_00118bd0:uVar7 = 4;
            goto LAB_00118bd5;
         }

         if (uVar10 == 0) {
            lVar9 = (long)( iVar11 + -2 );
            if (lVar2 <= lVar9) goto LAB_00118c38;
            this(Variant * )(lVar1 + lVar9 * 0x18);
         }
 else {
            this(Variant * ) * plVar8;
            if (uVar10 == 2) goto LAB_00118c1d;
         }

         lVar9 = (long)(int)( ( uVar10 ^ 1 ) + ( iVar11 - iVar6 ) );
         if (lVar2 <= lVar9) {
            LAB_00118c38:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         puVar12 = (undefined4*)( lVar1 + lVar9 * 0x18 );
      }

      *(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_int_String_ptr**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*puVar12, 4);
      uVar4 = _LC123;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      Variant::operator_cast_to_String(aVStack_48);
      cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
      uVar4 = _LC118;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      iVar6 = Variant::operator_cast_to_int(this);
      ( *param_2 )((int)( param_1 + (long)param_3 ), (String*)iVar6);
      CowData<char32_t>::_unref((CowData<char32_t>*)aVStack_48);
   }
 else {
      uVar7 = 3;
      LAB_00118bd5:*(undefined4*)param_6 = uVar7;
      *(undefined4*)( param_6 + 8 ) = 2;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, String const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */Object *MethodBindT<int,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long *plVar1;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var2;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var2 + 8 ) == 0) {
         plVar1 = *(long**)( p_Var2 + 0x118 );
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
         }

      }
 else {
         plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC111, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00118cd6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int,String_const&>(p_Var2, (_func_void_int_String_ptr*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00118cd6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */void call_with_variant_args_dv<__UnexistingClass,int>(__UnexistingClass *param_1, _func_void_int *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   undefined4 in_register_0000000c;
   long lVar7;
   uint uVar8;
   Variant *this;
   long in_stack_00000008;
   uVar8 = (uint)param_5;
   if (1 < uVar8) {
      uVar6 = 3;
      goto LAB_00118f9d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_00119000;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_00119000:uVar6 = 4;
         LAB_00118f9d:*(undefined4*)param_6 = uVar6;
         *(undefined4*)( param_6 + 8 ) = 1;
         return;
      }

      if (uVar8 != 1) {
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this(Variant * )(lVar1 + lVar7 * 0x18);
         goto LAB_00118f1b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_00118f1b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_int**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC118;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_int(this);
   /* WARNING: Could not recover jumptable at 0x00118f76. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((int)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long *plVar1;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var2;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var2 + 8 ) == 0) {
         plVar1 = *(long**)( p_Var2 + 0x118 );
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
         }

      }
 else {
         plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC111, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00119066;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int>(p_Var2, (_func_void_int*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00119066:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<String_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   undefined *local_78;
   long local_70;
   long local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = *param_2;
   if (iVar2 == param_1) {
      local_80 = 0;
      local_88 = 0;
      local_78 = &_LC10;
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_88);
      local_90 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 4, (CowData<char32_t>*)&local_90, 0, (StrRange*)&local_88, 6, &local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      *(undefined4*)param_3 = local_78._0_4_;
      if (*(long*)( param_3 + 8 ) != local_70) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
         lVar1 = local_70;
         local_70 = 0;
         *(long*)( param_3 + 8 ) = lVar1;
      }

      if (*(long*)( param_3 + 0x10 ) != local_68) {
         StringName::unref();
         lVar1 = local_68;
         local_68 = 0;
         *(long*)( param_3 + 0x10 ) = lVar1;
      }

      *(undefined4*)( param_3 + 0x18 ) = local_60;
      if (*(long*)( param_3 + 0x20 ) != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( param_3 + 0x20 ) = lVar1;
      }

      *(undefined4*)( param_3 + 0x28 ) = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
      iVar2 = *param_2;
   }

   *param_2 = iVar2 + 1;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int, String const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<int,String_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   undefined8 uVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_80;
   long local_78;
   ulong local_70;
   undefined *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX == 0) {
      local_68 = (undefined*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      local_60 = (undefined1[16])0x0;
      call_get_argument_type_info_helper<String_const&>(0, (int*)&local_70, (PropertyInfo*)&local_68);
      uVar3 = local_60._0_8_;
      uVar4 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar5 = local_68._0_4_;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
      *(undefined8*)( puVar5 + 4 ) = uVar4;
      puVar5[6] = (undefined4)local_50;
      *(undefined8*)( puVar5 + 8 ) = local_48;
      puVar5[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_00119488;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = &_LC10;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar5 = 2;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar5[10] = 6;
      LAB_0011956f:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_70);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
      puVar5[10] = 6;
      if (puVar5[6] != 0x11) goto LAB_0011956f;
      StringName::StringName((StringName*)&local_68, (String*)( puVar5 + 8 ), false);
      if (*(undefined**)( puVar5 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar5 + 4 ) = local_68;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_00119488:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<int>(int param_1, int *param_2, PropertyInfo *param_3) {
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   undefined *local_78;
   long local_70;
   long local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = *param_2;
   if (iVar2 == param_1) {
      local_80 = 0;
      local_88 = 0;
      local_78 = &_LC10;
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_88);
      local_90 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 2, (CowData<char32_t>*)&local_90, 0, (StrRange*)&local_88, 6, &local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      *(undefined4*)param_3 = local_78._0_4_;
      if (*(long*)( param_3 + 8 ) != local_70) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
         lVar1 = local_70;
         local_70 = 0;
         *(long*)( param_3 + 8 ) = lVar1;
      }

      if (*(long*)( param_3 + 0x10 ) != local_68) {
         StringName::unref();
         lVar1 = local_68;
         local_68 = 0;
         *(long*)( param_3 + 0x10 ) = lVar1;
      }

      *(undefined4*)( param_3 + 0x18 ) = local_60;
      if (*(long*)( param_3 + 0x20 ) != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( param_3 + 0x20 ) = lVar1;
      }

      *(undefined4*)( param_3 + 0x28 ) = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
      iVar2 = *param_2;
   }

   *param_2 = iVar2 + 1;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, String const&>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<int,String_const&>::_gen_argument_type_info(int param_1) {
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar1;
   long in_FS_OFFSET;
   int local_24;
   long local_20;
   pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar1 = 0;
   *(undefined4*)( pPVar1 + 0x18 ) = 0;
   *(undefined8*)( pPVar1 + 0x20 ) = 0;
   *(undefined4*)( pPVar1 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
   local_24 = 0;
   call_get_argument_type_info_helper<int>(in_EDX, &local_24, pPVar1);
   call_get_argument_type_info_helper<String_const&>(in_EDX, &local_24, pPVar1);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String, int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<String,int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   undefined8 uVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_80;
   long local_78;
   ulong local_70;
   undefined *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX == 0) {
      local_68 = (undefined*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      local_60 = (undefined1[16])0x0;
      call_get_argument_type_info_helper<int>(0, (int*)&local_70, (PropertyInfo*)&local_68);
      uVar3 = local_60._0_8_;
      uVar4 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar5 = local_68._0_4_;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
      *(undefined8*)( puVar5 + 4 ) = uVar4;
      puVar5[6] = (undefined4)local_50;
      *(undefined8*)( puVar5 + 8 ) = local_48;
      puVar5[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_001198b8;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = &_LC10;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar5 = 4;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar5[10] = 6;
      LAB_0011999f:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_70);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
      puVar5[10] = 6;
      if (puVar5[6] != 0x11) goto LAB_0011999f;
      StringName::StringName((StringName*)&local_68, (String*)( puVar5 + 8 ), false);
      if (*(undefined**)( puVar5 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar5 + 4 ) = local_68;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_001198b8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Mesh>, int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<Mesh>,int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_80;
   long local_78;
   ulong local_70;
   undefined *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX == 0) {
      local_68 = (undefined*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      local_60 = (undefined1[16])0x0;
      call_get_argument_type_info_helper<int>(0, (int*)&local_70, (PropertyInfo*)&local_68);
      uVar2 = local_60._0_8_;
      uVar3 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar4 = local_68._0_4_;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
      *(undefined8*)( puVar4 + 4 ) = uVar3;
      puVar4[6] = (undefined4)local_50;
      *(undefined8*)( puVar4 + 8 ) = local_48;
      puVar4[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_00119ab8;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = &_LC49;
   local_60._8_8_ = local_60._0_8_;
   local_60._0_8_ = 4;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar4 = 0x18;
   puVar4[6] = 0x11;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar4[10] = 6;
      LAB_00119bb7:StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
      if (*(undefined**)( puVar4 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar4 + 4 ) = local_68;
      }

   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_78);
      puVar4[10] = 6;
      if (puVar4[6] == 0x11) goto LAB_00119bb7;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_70);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_00119ab8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<RenderingServer::ShadowCastingSetting, int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<RenderingServer::ShadowCastingSetting,int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_88;
   undefined8 local_80;
   undefined8 local_78;
   int local_70[2];
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
      local_70[0] = 0;
      local_60 = (undefined1[16])0x0;
      call_get_argument_type_info_helper<int>(0, local_70, (PropertyInfo*)&local_68);
      uVar2 = local_60._0_8_;
      uVar3 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar4 = local_68._0_4_;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
      *(undefined8*)( puVar4 + 4 ) = uVar3;
      puVar4[6] = (undefined4)local_50;
      *(undefined8*)( puVar4 + 8 ) = local_48;
      puVar4[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   }
 else {
      local_78 = 0;
      local_68 = "RenderingServer::ShadowCastingSetting";
      local_60._8_8_ = local_60._0_8_;
      local_60._0_8_ = 0x25;
      String::parse_latin1((StrRange*)&local_78);
      godot::details::enum_qualified_name_to_class_info_name((details*)local_70, (String*)&local_78);
      StringName::StringName((StringName*)&local_68, (String*)local_70, false);
      *puVar4 = 2;
      puVar4[6] = 0;
      *(undefined8*)( puVar4 + 8 ) = 0;
      puVar4[10] = 0x10006;
      *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
      local_80 = 0;
      local_88 = 0;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<NavigationMesh>, int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<NavigationMesh>,int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_80;
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
      call_get_argument_type_info_helper<int>(0, (int*)&local_70, (PropertyInfo*)&local_68);
      uVar2 = local_60._0_8_;
      uVar3 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar4 = local_68._0_4_;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
      *(undefined8*)( puVar4 + 4 ) = uVar3;
      puVar4[6] = (undefined4)local_50;
      *(undefined8*)( puVar4 + 8 ) = local_48;
      puVar4[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_00119e98;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = "NavigationMesh";
   local_60._8_8_ = local_60._0_8_;
   local_60._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar4 = 0x18;
   puVar4[6] = 0x11;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar4[10] = 6;
      LAB_00119f97:StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
      if (*(char**)( puVar4 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(char**)( puVar4 + 4 ) = local_68;
      }

   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_78);
      puVar4[10] = 6;
      if (puVar4[6] == 0x11) goto LAB_00119f97;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_70);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_00119e98:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Transform3D, int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Transform3D,int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   undefined8 uVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_80;
   long local_78;
   ulong local_70;
   undefined *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX == 0) {
      local_68 = (undefined*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      local_60 = (undefined1[16])0x0;
      call_get_argument_type_info_helper<int>(0, (int*)&local_70, (PropertyInfo*)&local_68);
      uVar3 = local_60._0_8_;
      uVar4 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar5 = local_68._0_4_;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
      *(undefined8*)( puVar5 + 4 ) = uVar4;
      puVar5[6] = (undefined4)local_50;
      *(undefined8*)( puVar5 + 8 ) = local_48;
      puVar5[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_0011a098;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = &_LC10;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar5 = 0x12;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar5[10] = 6;
      LAB_0011a17f:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_70);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
      puVar5[10] = 6;
      if (puVar5[6] != 0x11) goto LAB_0011a17f;
      StringName::StringName((StringName*)&local_68, (String*)( puVar5 + 8 ), false);
      if (*(undefined**)( puVar5 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar5 + 4 ) = local_68;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_0011a098:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<unsigned int, int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<unsigned_int,int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   undefined8 uVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_80;
   long local_78;
   ulong local_70;
   undefined *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX == 0) {
      local_68 = (undefined*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      local_60 = (undefined1[16])0x0;
      call_get_argument_type_info_helper<int>(0, (int*)&local_70, (PropertyInfo*)&local_68);
      uVar3 = local_60._0_8_;
      uVar4 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar5 = local_68._0_4_;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
      *(undefined8*)( puVar5 + 4 ) = uVar4;
      puVar5[6] = (undefined4)local_50;
      *(undefined8*)( puVar5 + 8 ) = local_48;
      puVar5[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_0011a298;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = &_LC10;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar5 = 2;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar5[10] = 6;
      LAB_0011a37f:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_70);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
      puVar5[10] = 6;
      if (puVar5[6] != 0x11) goto LAB_0011a37f;
      StringName::StringName((StringName*)&local_68, (String*)( puVar5 + 8 ), false);
      if (*(undefined**)( puVar5 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar5 + 4 ) = local_68;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_0011a298:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Array, int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Array,int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   undefined8 uVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_80;
   long local_78;
   ulong local_70;
   undefined *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX == 0) {
      local_68 = (undefined*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      local_60 = (undefined1[16])0x0;
      call_get_argument_type_info_helper<int>(0, (int*)&local_70, (PropertyInfo*)&local_68);
      uVar3 = local_60._0_8_;
      uVar4 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar5 = local_68._0_4_;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
      *(undefined8*)( puVar5 + 4 ) = uVar4;
      puVar5[6] = (undefined4)local_50;
      *(undefined8*)( puVar5 + 8 ) = local_48;
      puVar5[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_0011a498;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = &_LC10;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar5 = 0x1c;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar5[10] = 6;
      LAB_0011a57f:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_70);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
      puVar5[10] = 6;
      if (puVar5[6] != 0x11) goto LAB_0011a57f;
      StringName::StringName((StringName*)&local_68, (String*)( puVar5 + 8 ), false);
      if (*(undefined**)( puVar5 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar5 + 4 ) = local_68;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_0011a498:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Texture2D>, int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<Texture2D>,int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_80;
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
      call_get_argument_type_info_helper<int>(0, (int*)&local_70, (PropertyInfo*)&local_68);
      uVar2 = local_60._0_8_;
      uVar3 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar4 = local_68._0_4_;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
      *(undefined8*)( puVar4 + 4 ) = uVar3;
      puVar4[6] = (undefined4)local_50;
      *(undefined8*)( puVar4 + 8 ) = local_48;
      puVar4[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_0011a698;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = "Texture2D";
   local_60._8_8_ = local_60._0_8_;
   local_60._0_8_ = 9;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar4 = 0x18;
   puVar4[6] = 0x11;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar4[10] = 6;
      LAB_0011a797:StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
      if (*(char**)( puVar4 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(char**)( puVar4 + 4 ) = local_68;
      }

   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_78);
      puVar4[10] = 6;
      if (puVar4[6] == 0x11) goto LAB_0011a797;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_70);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_0011a698:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<int>::_gen_argument_type_info(int param_1) {
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar1;
   long in_FS_OFFSET;
   int local_14;
   long local_10;
   pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar1 = 0;
   *(undefined4*)( pPVar1 + 0x18 ) = 0;
   *(undefined8*)( pPVar1 + 0x20 ) = 0;
   *(undefined4*)( pPVar1 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
   local_14 = 0;
   call_get_argument_type_info_helper<int>(in_EDX, &local_14, pPVar1);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, Array const&>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<int,Array_const&>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar2;
   long in_FS_OFFSET;
   int local_84;
   undefined8 local_80;
   undefined8 local_78;
   long local_70;
   undefined *local_68;
   long local_60;
   long local_58;
   undefined4 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   pPVar2 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar2 = 0;
   *(undefined4*)( pPVar2 + 0x18 ) = 0;
   *(undefined8*)( pPVar2 + 0x20 ) = 0;
   *(undefined4*)( pPVar2 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar2 + 8 ) = (undefined1[16])0x0;
   local_84 = 0;
   call_get_argument_type_info_helper<int>(in_EDX, &local_84, pPVar2);
   if (in_EDX == local_84) {
      local_70 = 0;
      local_78 = 0;
      local_68 = &_LC10;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_78);
      local_80 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 0x1c, (CowData<char32_t>*)&local_80, 0, (StrRange*)&local_78, 6, &local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      *(undefined4*)pPVar2 = local_68._0_4_;
      if (*(long*)( pPVar2 + 8 ) != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar2 + 8 ));
         lVar1 = local_60;
         local_60 = 0;
         *(long*)( pPVar2 + 8 ) = lVar1;
      }

      if (*(long*)( pPVar2 + 0x10 ) != local_58) {
         StringName::unref();
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( pPVar2 + 0x10 ) = lVar1;
      }

      *(undefined4*)( pPVar2 + 0x18 ) = local_50;
      if (*(long*)( pPVar2 + 0x20 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar2 + 0x20 ));
         lVar1 = local_48;
         local_48 = 0;
         *(long*)( pPVar2 + 0x20 ) = lVar1;
      }

      *(undefined4*)( pPVar2 + 0x28 ) = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, unsigned int>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<int,unsigned_int>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar2;
   long in_FS_OFFSET;
   int local_84;
   undefined8 local_80;
   undefined8 local_78;
   long local_70;
   undefined *local_68;
   long local_60;
   long local_58;
   undefined4 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   pPVar2 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar2 = 0;
   *(undefined4*)( pPVar2 + 0x18 ) = 0;
   *(undefined8*)( pPVar2 + 0x20 ) = 0;
   *(undefined4*)( pPVar2 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar2 + 8 ) = (undefined1[16])0x0;
   local_84 = 0;
   call_get_argument_type_info_helper<int>(in_EDX, &local_84, pPVar2);
   if (in_EDX == local_84) {
      local_70 = 0;
      local_78 = 0;
      local_68 = &_LC10;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_78);
      local_80 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 2, (CowData<char32_t>*)&local_80, 0, (StrRange*)&local_78, 6, &local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      *(undefined4*)pPVar2 = local_68._0_4_;
      if (*(long*)( pPVar2 + 8 ) != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar2 + 8 ));
         lVar1 = local_60;
         local_60 = 0;
         *(long*)( pPVar2 + 8 ) = lVar1;
      }

      if (*(long*)( pPVar2 + 0x10 ) != local_58) {
         StringName::unref();
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( pPVar2 + 0x10 ) = lVar1;
      }

      *(undefined4*)( pPVar2 + 0x18 ) = local_50;
      if (*(long*)( pPVar2 + 0x20 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar2 + 0x20 ));
         lVar1 = local_48;
         local_48 = 0;
         *(long*)( pPVar2 + 0x20 ) = lVar1;
      }

      *(undefined4*)( pPVar2 + 0x28 ) = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, RenderingServer::ShadowCastingSetting>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<int,RenderingServer::ShadowCastingSetting>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar2;
   long in_FS_OFFSET;
   int local_a4;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   details local_88[8];
   long local_80;
   char *local_78;
   long local_70;
   long local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   pPVar2 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar2 = 0;
   *(undefined4*)( pPVar2 + 0x18 ) = 0;
   *(undefined8*)( pPVar2 + 0x20 ) = 0;
   *(undefined4*)( pPVar2 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar2 + 8 ) = (undefined1[16])0x0;
   local_a4 = 0;
   call_get_argument_type_info_helper<int>(in_EDX, &local_a4, pPVar2);
   if (in_EDX == local_a4) {
      local_90 = 0;
      local_70 = 0x25;
      local_78 = "RenderingServer::ShadowCastingSetting";
      String::parse_latin1((StrRange*)&local_90);
      godot::details::enum_qualified_name_to_class_info_name(local_88, (String*)&local_90);
      StringName::StringName((StringName*)&local_80, (String*)local_88, false);
      local_98 = 0;
      local_a0 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 2, (CowData<char32_t>*)&local_a0, 0, (CowData<char32_t>*)&local_98, 0x10006, (StringName*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      *(undefined4*)pPVar2 = local_78._0_4_;
      if (*(long*)( pPVar2 + 8 ) != local_70) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar2 + 8 ));
         lVar1 = local_70;
         local_70 = 0;
         *(long*)( pPVar2 + 8 ) = lVar1;
      }

      if (*(long*)( pPVar2 + 0x10 ) != local_68) {
         StringName::unref();
         lVar1 = local_68;
         local_68 = 0;
         *(long*)( pPVar2 + 0x10 ) = lVar1;
      }

      *(undefined4*)( pPVar2 + 0x18 ) = local_60;
      if (*(long*)( pPVar2 + 0x20 ) != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar2 + 0x20 ));
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( pPVar2 + 0x20 ) = lVar1;
      }

      *(undefined4*)( pPVar2 + 0x28 ) = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, Transform3D const&>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<int,Transform3D_const&>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar2;
   long in_FS_OFFSET;
   int local_84;
   undefined8 local_80;
   undefined8 local_78;
   long local_70;
   undefined *local_68;
   long local_60;
   long local_58;
   undefined4 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   pPVar2 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar2 = 0;
   *(undefined4*)( pPVar2 + 0x18 ) = 0;
   *(undefined8*)( pPVar2 + 0x20 ) = 0;
   *(undefined4*)( pPVar2 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar2 + 8 ) = (undefined1[16])0x0;
   local_84 = 0;
   call_get_argument_type_info_helper<int>(in_EDX, &local_84, pPVar2);
   if (in_EDX == local_84) {
      local_70 = 0;
      local_78 = 0;
      local_68 = &_LC10;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_78);
      local_80 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 0x12, (CowData<char32_t>*)&local_80, 0, (StrRange*)&local_78, 6, &local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      *(undefined4*)pPVar2 = local_68._0_4_;
      if (*(long*)( pPVar2 + 8 ) != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar2 + 8 ));
         lVar1 = local_60;
         local_60 = 0;
         *(long*)( pPVar2 + 8 ) = lVar1;
      }

      if (*(long*)( pPVar2 + 0x10 ) != local_58) {
         StringName::unref();
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( pPVar2 + 0x10 ) = lVar1;
      }

      *(undefined4*)( pPVar2 + 0x18 ) = local_50;
      if (*(long*)( pPVar2 + 0x20 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar2 + 0x20 ));
         lVar1 = local_48;
         local_48 = 0;
         *(long*)( pPVar2 + 0x20 ) = lVar1;
      }

      *(undefined4*)( pPVar2 + 0x28 ) = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, Ref<Texture2D> const&>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<int,Ref<Texture2D>const&>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar2;
   long in_FS_OFFSET;
   int local_84;
   undefined8 local_80;
   undefined8 local_78;
   long local_70;
   char *local_68;
   long local_60;
   long local_58;
   undefined4 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   pPVar2 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar2 = 0;
   *(undefined4*)( pPVar2 + 0x18 ) = 0;
   *(undefined8*)( pPVar2 + 0x20 ) = 0;
   *(undefined4*)( pPVar2 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar2 + 8 ) = (undefined1[16])0x0;
   local_84 = 0;
   call_get_argument_type_info_helper<int>(in_EDX, &local_84, pPVar2);
   if (in_EDX == local_84) {
      local_70 = 0;
      local_78 = 0;
      local_68 = "Texture2D";
      local_60 = 9;
      String::parse_latin1((StrRange*)&local_78);
      local_80 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 0x18, (CowData<char32_t>*)&local_80, 0x11, (StrRange*)&local_78, 6, &local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      *(undefined4*)pPVar2 = local_68._0_4_;
      if (*(long*)( pPVar2 + 8 ) != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar2 + 8 ));
         lVar1 = local_60;
         local_60 = 0;
         *(long*)( pPVar2 + 8 ) = lVar1;
      }

      if (*(long*)( pPVar2 + 0x10 ) != local_58) {
         StringName::unref();
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( pPVar2 + 0x10 ) = lVar1;
      }

      *(undefined4*)( pPVar2 + 0x18 ) = local_50;
      if (*(long*)( pPVar2 + 0x20 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar2 + 0x20 ));
         lVar1 = local_48;
         local_48 = 0;
         *(long*)( pPVar2 + 0x20 ) = lVar1;
      }

      *(undefined4*)( pPVar2 + 0x28 ) = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, Ref<NavigationMesh> const&>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<int,Ref<NavigationMesh>const&>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar2;
   long in_FS_OFFSET;
   int local_84;
   undefined8 local_80;
   undefined8 local_78;
   long local_70;
   char *local_68;
   long local_60;
   long local_58;
   undefined4 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   pPVar2 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar2 = 0;
   *(undefined4*)( pPVar2 + 0x18 ) = 0;
   *(undefined8*)( pPVar2 + 0x20 ) = 0;
   *(undefined4*)( pPVar2 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar2 + 8 ) = (undefined1[16])0x0;
   local_84 = 0;
   call_get_argument_type_info_helper<int>(in_EDX, &local_84, pPVar2);
   if (in_EDX == local_84) {
      local_70 = 0;
      local_78 = 0;
      local_68 = "NavigationMesh";
      local_60 = 0xe;
      String::parse_latin1((StrRange*)&local_78);
      local_80 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 0x18, (CowData<char32_t>*)&local_80, 0x11, (StrRange*)&local_78, 6, &local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      *(undefined4*)pPVar2 = local_68._0_4_;
      if (*(long*)( pPVar2 + 8 ) != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar2 + 8 ));
         lVar1 = local_60;
         local_60 = 0;
         *(long*)( pPVar2 + 8 ) = lVar1;
      }

      if (*(long*)( pPVar2 + 0x10 ) != local_58) {
         StringName::unref();
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( pPVar2 + 0x10 ) = lVar1;
      }

      *(undefined4*)( pPVar2 + 0x18 ) = local_50;
      if (*(long*)( pPVar2 + 0x20 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar2 + 0x20 ));
         lVar1 = local_48;
         local_48 = 0;
         *(long*)( pPVar2 + 0x20 ) = lVar1;
      }

      *(undefined4*)( pPVar2 + 0x28 ) = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, Ref<Mesh> const&>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<int,Ref<Mesh>const&>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar2;
   long in_FS_OFFSET;
   int local_84;
   undefined8 local_80;
   undefined8 local_78;
   long local_70;
   undefined *local_68;
   long local_60;
   long local_58;
   undefined4 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   pPVar2 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar2 = 0;
   *(undefined4*)( pPVar2 + 0x18 ) = 0;
   *(undefined8*)( pPVar2 + 0x20 ) = 0;
   *(undefined4*)( pPVar2 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar2 + 8 ) = (undefined1[16])0x0;
   local_84 = 0;
   call_get_argument_type_info_helper<int>(in_EDX, &local_84, pPVar2);
   if (in_EDX == local_84) {
      local_70 = 0;
      local_78 = 0;
      local_68 = &_LC49;
      local_60 = 4;
      String::parse_latin1((StrRange*)&local_78);
      local_80 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 0x18, (CowData<char32_t>*)&local_80, 0x11, (StrRange*)&local_78, 6, &local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      *(undefined4*)pPVar2 = local_68._0_4_;
      if (*(long*)( pPVar2 + 8 ) != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar2 + 8 ));
         lVar1 = local_60;
         local_60 = 0;
         *(long*)( pPVar2 + 8 ) = lVar1;
      }

      if (*(long*)( pPVar2 + 0x10 ) != local_58) {
         StringName::unref();
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( pPVar2 + 0x10 ) = lVar1;
      }

      *(undefined4*)( pPVar2 + 0x18 ) = local_50;
      if (*(long*)( pPVar2 + 0x20 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar2 + 0x20 ));
         lVar1 = local_48;
         local_48 = 0;
         *(long*)( pPVar2 + 0x20 ) = lVar1;
      }

      *(undefined4*)( pPVar2 + 0x28 ) = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* MeshLibrary::Item::Item(MeshLibrary::Item const&) */void MeshLibrary::Item::Item(Item *this, Item *param_1) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MeshLibrary::Item::~Item() */void MeshLibrary::Item::~Item(Item *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodDefinition::~MethodDefinition() */void MethodDefinition::~MethodDefinition(MethodDefinition *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */void PropertyInfo::PropertyInfo(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Vector<int>>::~MethodBindTRC() */void MethodBindTRC<Vector<int>>::~MethodBindTRC(MethodBindTRC<Vector<int>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<int, String const&>::~MethodBindTRC() */void MethodBindTRC<int,String_const&>::~MethodBindTRC(MethodBindTRC<int,String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Ref<Texture2D>, int>::~MethodBindTRC() */void MethodBindTRC<Ref<Texture2D>,int>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Array, int>::~MethodBindTRC() */void MethodBindTRC<Array,int>::~MethodBindTRC(MethodBindTRC<Array,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<unsigned int, int>::~MethodBindTRC() */void MethodBindTRC<unsigned_int,int>::~MethodBindTRC(MethodBindTRC<unsigned_int,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Transform3D, int>::~MethodBindTRC() */void MethodBindTRC<Transform3D,int>::~MethodBindTRC(MethodBindTRC<Transform3D,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Ref<NavigationMesh>, int>::~MethodBindTRC() */void MethodBindTRC<Ref<NavigationMesh>,int>::~MethodBindTRC(MethodBindTRC<Ref<NavigationMesh>,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<RenderingServer::ShadowCastingSetting, int>::~MethodBindTRC() */void MethodBindTRC<RenderingServer::ShadowCastingSetting,int>::~MethodBindTRC(MethodBindTRC<RenderingServer::ShadowCastingSetting,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Ref<Mesh>, int>::~MethodBindTRC() */void MethodBindTRC<Ref<Mesh>,int>::~MethodBindTRC(MethodBindTRC<Ref<Mesh>,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<String, int>::~MethodBindTRC() */void MethodBindTRC<String,int>::~MethodBindTRC(MethodBindTRC<String,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int, Ref<Texture2D> const&>::~MethodBindT() */void MethodBindT<int,Ref<Texture2D>const&>::~MethodBindT(MethodBindT<int,Ref<Texture2D>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int, Array const&>::~MethodBindT() */void MethodBindT<int,Array_const&>::~MethodBindT(MethodBindT<int,Array_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int, unsigned int>::~MethodBindT() */void MethodBindT<int,unsigned_int>::~MethodBindT(MethodBindT<int,unsigned_int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int, Transform3D const&>::~MethodBindT() */void MethodBindT<int,Transform3D_const&>::~MethodBindT(MethodBindT<int,Transform3D_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int, Ref<NavigationMesh> const&>::~MethodBindT() */void MethodBindT<int,Ref<NavigationMesh>const&>::~MethodBindT(MethodBindT<int,Ref<NavigationMesh>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int, RenderingServer::ShadowCastingSetting>::~MethodBindT() */void MethodBindT<int,RenderingServer::ShadowCastingSetting>::~MethodBindT(MethodBindT<int,RenderingServer::ShadowCastingSetting> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int, Ref<Mesh> const&>::~MethodBindT() */void MethodBindT<int,Ref<Mesh>const&>::~MethodBindT(MethodBindT<int,Ref<Mesh>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int, String const&>::~MethodBindT() */void MethodBindT<int,String_const&>::~MethodBindT(MethodBindT<int,String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

