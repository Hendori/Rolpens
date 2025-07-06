/* MovieWriter::add_writer(MovieWriter*) */void MovieWriter::add_writer(MovieWriter *param_1) {
   ulong uVar1;
   uVar1 = (ulong)writer_count;
   if (writer_count != 8) {
      writer_count = writer_count + 1;
      ( &writers )[uVar1] = param_1;
      return;
   }

   _err_print_error("add_writer", "servers/movie_writer/movie_writer.cpp", 0x2b, "Condition \"writer_count == MAX_WRITERS\" is true.", 0, 0);
   return;
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
/* PropertyInfo::TEMPNAMEPLACEHOLDERVALUE(PropertyInfo&&) [clone .isra.0] */void PropertyInfo::operator =(PropertyInfo *this, PropertyInfo *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   lVar3 = *(long*)( param_1 + 8 );
   *(undefined4*)this = *(undefined4*)param_1;
   lVar2 = *(long*)( this + 8 );
   if (lVar2 != lVar3) {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( this + 8 );
            *(undefined8*)( this + 8 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            lVar3 = *(long*)( param_1 + 8 );
         }
 else {
            *(undefined8*)( this + 8 ) = 0;
            lVar3 = *(long*)( param_1 + 8 );
         }

      }

      *(long*)( this + 8 ) = lVar3;
      *(undefined8*)( param_1 + 8 ) = 0;
   }

   if (*(long*)( this + 0x10 ) != *(long*)( param_1 + 0x10 )) {
      StringName::unref();
      *(undefined8*)( this + 0x10 ) = *(undefined8*)( param_1 + 0x10 );
      *(undefined8*)( param_1 + 0x10 ) = 0;
   }

   lVar3 = *(long*)( param_1 + 0x20 );
   *(undefined4*)( this + 0x18 ) = *(undefined4*)( param_1 + 0x18 );
   lVar2 = *(long*)( this + 0x20 );
   if (lVar2 != lVar3) {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( this + 0x20 );
            *(undefined8*)( this + 0x20 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            lVar3 = *(long*)( param_1 + 0x20 );
         }
 else {
            *(undefined8*)( this + 0x20 ) = 0;
            lVar3 = *(long*)( param_1 + 0x20 );
         }

      }

      *(long*)( this + 0x20 ) = lVar3;
      *(undefined8*)( param_1 + 0x20 ) = 0;
   }

   *(undefined4*)( this + 0x28 ) = *(undefined4*)( param_1 + 0x28 );
   return;
}
/* MovieWriter::find_writer_for_file(String const&) */undefined8 MovieWriter::find_writer_for_file(String *param_1) {
   char cVar1;
   ulong uVar2;
   if (-1 < (int)( writer_count - 1U )) {
      uVar2 = ( ulong )(writer_count - 1U);
      do {
         cVar1 = ( **(code**)( *(long*)( &writers )[uVar2] + 0x178 ) )((long*)( &writers )[uVar2], param_1);
         if (cVar1 != '\0') {
            return ( &writers )[(int)uVar2];
         }

         uVar2 = uVar2 - 1;
      }
 while ( -1 < (int)uVar2 );
   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* MovieWriter::end() */void MovieWriter::end(MovieWriter *this) {
   long *plVar1;
   float fVar2;
   long lVar3;
   undefined8 uVar4;
   char *pcVar5;
   char cVar6;
   int iVar7;
   ulong uVar8;
   long lVar9;
   undefined8 uVar10;
   int iVar11;
   int iVar12;
   int iVar13;
   int iVar14;
   long in_FS_OFFSET;
   bool bVar15;
   float fVar16;
   char *local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   long local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *(long*)this + 0x170 ) )();
   Variant::Variant((Variant*)local_58, "----------------");
   stringify_variants((Variant*)&local_68);
   __print_line((String*)&local_68);
   pcVar5 = local_68;
   if (local_68 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar5 + -0x10 ), false);
      }

   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Engine::get_singleton();
   Engine::get_write_movie_path();
   cVar6 = String::is_relative_path();
   if (cVar6 != '\0') {
      ProjectSettings::get_singleton();
      local_78 = (char*)0x0;
      local_60 = 6;
      local_68 = "res://";
      String::parse_latin1((StrRange*)&local_78);
      ProjectSettings::globalize_path((String*)&local_70);
      String::path_join((String*)&local_68);
      if (local_b8 != local_68) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
         local_b8 = local_68;
         local_68 = (char*)0x0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   }

   local_78 = (char*)0x0;
   plVar1 = (long*)( local_b8 + -0x10 );
   if (local_b8 != (char*)0x0) {
      do {
         lVar3 = *plVar1;
         if (lVar3 == 0) goto LAB_0010055f;
         LOCK();
         lVar9 = *plVar1;
         bVar15 = lVar3 == lVar9;
         if (bVar15) {
            *plVar1 = lVar3 + 1;
            lVar9 = lVar3;
         }

         UNLOCK();
      }
 while ( !bVar15 );
      if (lVar9 != -1) {
         local_78 = local_b8;
      }

   }

   LAB_0010055f:local_80 = 0;
   local_68 = "Done recording movie at path: %s";
   local_60 = 0x20;
   String::parse_latin1((StrRange*)&local_80);
   vformat<String>((StrRange*)&local_70, (StrRange*)&local_80, (StrRange*)&local_78);
   Variant::Variant((Variant*)local_58, (String*)&local_70);
   stringify_variants((Variant*)&local_68);
   __print_line((String*)&local_68);
   pcVar5 = local_68;
   if (local_68 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (char*)0x0;
         Memory::free_static(pcVar5 + -0x10, false);
      }

   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   lVar3 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   pcVar5 = local_78;
   if (local_78 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = (char*)0x0;
         Memory::free_static(pcVar5 + -0x10, false);
      }

   }

   Engine::get_singleton();
   uVar8 = Engine::get_frames_drawn();
   iVar7 = (int)( uVar8 / *(ulong*)( this + 0x178 ) );
   iVar12 = (int)(StrRange*)&local_80;
   String::num((double)( iVar7 % 0x3c ), iVar12);
   iVar13 = (int)(StrRange*)&local_78;
   String::pad_zeros(iVar13);
   String::num((double)( ( iVar7 % 0xe10 ) / 0x3c ), (int)&local_90);
   iVar14 = (int)(StrRange*)&local_88;
   String::pad_zeros(iVar14);
   String::num((double)( iVar7 / 0xe10 ), (int)&local_a0);
   iVar7 = (int)&local_98;
   String::pad_zeros(iVar7);
   local_68 = "%s:%s:%s";
   local_70 = 0;
   local_60 = 8;
   String::parse_latin1((StrRange*)&local_70);
   vformat<String,String,String>(&local_b0, (StrRange*)&local_70, &local_98, (StrRange*)&local_88, (StrRange*)&local_78);
   lVar3 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar1 = (long*)( local_a0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

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

   pcVar5 = local_78;
   if (local_78 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = (char*)0x0;
         Memory::free_static(pcVar5 + -0x10, false);
      }

   }

   lVar3 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   Time::get_singleton();
   uVar8 = Time::get_ticks_msec();
   iVar11 = (int)( uVar8 / 1000 );
   String::num((double)( iVar11 % 0x3c ), iVar12);
   String::pad_zeros(iVar13);
   String::num((double)( ( iVar11 % 0xe10 ) / 0x3c ), (int)&local_90);
   String::pad_zeros(iVar14);
   String::num((double)( iVar11 / 0xe10 ), (int)&local_a0);
   String::pad_zeros(iVar7);
   local_68 = "%s:%s:%s";
   local_70 = 0;
   local_60 = 8;
   String::parse_latin1((StrRange*)&local_70);
   vformat<String,String,String>(&local_a8, (StrRange*)&local_70, &local_98, (StrRange*)&local_88, (StrRange*)&local_78);
   lVar3 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar1 = (long*)( local_a0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

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

   pcVar5 = local_78;
   if (local_78 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = (char*)0x0;
         Memory::free_static(pcVar5 + -0x10, false);
      }

   }

   lVar3 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   local_78 = (char*)0x0;
   plVar1 = (long*)( local_a8 + -0x10 );
   if (local_a8 != 0) {
      do {
         lVar3 = *plVar1;
         if (lVar3 == 0) goto LAB_00100ab5;
         LOCK();
         lVar9 = *plVar1;
         bVar15 = lVar3 == lVar9;
         if (bVar15) {
            *plVar1 = lVar3 + 1;
            lVar9 = lVar3;
         }

         UNLOCK();
      }
 while ( !bVar15 );
      if (lVar9 != -1) {
         local_78 = (char*)local_a8;
      }

   }

   LAB_00100ab5:local_80 = 0;
   plVar1 = (long*)( local_b0 + -0x10 );
   if (local_b0 != 0) {
      do {
         lVar3 = *plVar1;
         if (lVar3 == 0) goto LAB_00100aef;
         LOCK();
         lVar9 = *plVar1;
         bVar15 = lVar3 == lVar9;
         if (bVar15) {
            *plVar1 = lVar3 + 1;
            lVar9 = lVar3;
         }

         UNLOCK();
      }
 while ( !bVar15 );
      if (lVar9 != -1) {
         local_80 = local_b0;
      }

   }

   LAB_00100aef:uVar4 = *(undefined8*)( this + 0x178 );
   Engine::get_singleton();
   uVar10 = Engine::get_frames_drawn();
   local_88 = 0;
   local_60 = 0x51;
   local_68 = "%d frames at %d FPS (movie length: %s), recorded in %s (%d%% of real-time speed).";
   String::parse_latin1((StrRange*)&local_88);
   vformat<unsigned_long,unsigned_long,String,String,float>((StrRange*)&local_70, (StrRange*)&local_88, uVar10, uVar4, (StrRange*)&local_80, (StrRange*)&local_78);
   Variant::Variant((Variant*)local_58, (String*)&local_70);
   stringify_variants((Variant*)&local_68);
   __print_line((String*)&local_68);
   pcVar5 = local_68;
   if (local_68 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (char*)0x0;
         Memory::free_static(pcVar5 + -0x10, false);
      }

   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   lVar3 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   pcVar5 = local_78;
   if (local_78 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar5 + -0x10 ), false);
      }

   }

   fVar2 = *(float*)( this + 0x18c );
   Engine::get_singleton();
   uVar8 = Engine::get_frames_drawn();
   local_68 = "CPU time: %.2f seconds (average: %.2f ms/frame)";
   fVar16 = *(float*)( this + 0x18c ) / __LC34;
   local_78 = (char*)0x0;
   local_60 = 0x2f;
   String::parse_latin1((StrRange*)&local_78);
   vformat<float,float>((String*)&local_70, fVar16, fVar2 / (float)uVar8);
   Variant::Variant((Variant*)local_58, (String*)&local_70);
   stringify_variants((Variant*)&local_68);
   __print_line((String*)&local_68);
   pcVar5 = local_68;
   if (local_68 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (char*)0x0;
         Memory::free_static(pcVar5 + -0x10, false);
      }

   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   lVar3 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   pcVar5 = local_78;
   if (local_78 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar5 + -0x10 ), false);
      }

   }

   fVar2 = *(float*)( this + 400 );
   Engine::get_singleton();
   uVar8 = Engine::get_frames_drawn();
   local_68 = "GPU time: %.2f seconds (average: %.2f ms/frame)";
   fVar16 = *(float*)( this + 400 ) / __LC34;
   local_78 = (char*)0x0;
   local_60 = 0x2f;
   String::parse_latin1((StrRange*)&local_78);
   vformat<float,float>((String*)&local_70, fVar16, fVar2 / (float)uVar8);
   Variant::Variant((Variant*)local_58, (String*)&local_70);
   stringify_variants((Variant*)&local_68);
   __print_line((String*)&local_68);
   pcVar5 = local_68;
   if (local_68 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (char*)0x0;
         Memory::free_static(pcVar5 + -0x10, false);
      }

   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   lVar3 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   pcVar5 = local_78;
   if (local_78 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar5 + -0x10 ), false);
      }

   }

   Variant::Variant((Variant*)local_58, "----------------");
   stringify_variants((Variant*)&local_68);
   __print_line((String*)&local_68);
   pcVar5 = local_68;
   if (local_68 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = (char*)0x0;
         Memory::free_static(pcVar5 + -0x10, false);
      }

   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_a8 != 0) {
      LOCK();
      plVar1 = (long*)( local_a8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_a8 + -0x10 ), false);
      }

   }

   if (local_b0 != 0) {
      LOCK();
      plVar1 = (long*)( local_b0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_b0 + -0x10 ), false);
      }

   }

   pcVar5 = local_b8;
   if (local_b8 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_b8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b8 = (char*)0x0;
         Memory::free_static(pcVar5 + -0x10, false);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MovieWriter::begin(Vector2i const&, unsigned int, String const&) */void MovieWriter::begin(MovieWriter *this, Vector2i *param_1, uint param_2, String *param_3) {
   long *plVar1;
   Object *pOVar2;
   code *pcVar3;
   long lVar4;
   undefined8 uVar5;
   Object *pOVar6;
   char cVar7;
   uint uVar8;
   undefined4 uVar9;
   uint uVar10;
   ulong uVar11;
   long lVar12;
   long in_FS_OFFSET;
   Object *local_b0;
   Object *local_a8;
   CowData<char32_t> local_a0[8];
   CowData<char32_t> local_98[8];
   undefined8 local_90;
   String local_88[8];
   CowData<char32_t> local_80[8];
   long local_78;
   long local_70;
   Object *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_70, "application/config/name", false);
   ProjectSettings::get_setting_with_override((StringName*)local_58);
   Variant::operator_cast_to_String((Variant*)&local_68);
   pOVar6 = local_68;
   lVar12 = *(long*)( this + 0x198 );
   if ((Object*)lVar12 == local_68) {
      if (lVar12 != 0) {
         LOCK();
         plVar1 = (long*)( lVar12 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = (Object*)0x0;
            Memory::free_static((void*)( (long)pOVar6 + -0x10 ), false);
         }

      }

   }
 else {
      if (lVar12 != 0) {
         LOCK();
         plVar1 = (long*)( lVar12 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar12 = *(long*)( this + 0x198 );
            *(undefined8*)( this + 0x198 ) = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }

      }

      *(Object**)( this + 0x198 ) = local_68;
   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   local_78 = 0;
   local_68 = (Object*)0x109b98;
   local_60 = 0x36;
   String::parse_latin1((StrRange*)&local_78);
   vformat<unsigned_int>((String*)&local_70, (uint)(StrRange*)&local_78);
   Variant::Variant((Variant*)local_58, (String*)&local_70);
   stringify_variants((Variant*)&local_68);
   __print_line((String*)&local_68);
   pOVar6 = local_68;
   if (local_68 == (Object*)0x0) {
      LAB_001016ce:cVar7 = Variant::needs_deinit[local_58[0]];
   }
 else {
      LOCK();
      pOVar2 = local_68 + -0x10;
      *(long*)pOVar2 = *(long*)pOVar2 + -1;
      UNLOCK();
      if (*(long*)pOVar2 != 0) goto LAB_001016ce;
      local_68 = (Object*)0x0;
      Memory::free_static(pOVar6 + -0x10, false);
      cVar7 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar7 != '\0') {
      Variant::_clear_internal();
   }

   lVar12 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }

   }

   lVar12 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }

   }

   DirAccess::create(&local_b0, 2);
   String::get_basename();
   cVar7 = String::is_relative_path();
   if (cVar7 != '\0') {
      operator+((char *)&
      local_68,(String*)"res://";
      if (local_a8 != local_68) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
         local_a8 = local_68;
         local_68 = (Object*)0x0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   }

   DirAccess::open((String*)&local_68, (CowData<char32_t>*)&local_a8);
   if (( ( local_68 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),pOVar6 = local_68,cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);
   Memory::free_static(pOVar6, false);
}
uVar11 = ( **(code**)( *(long*)local_b0 + 0x1f0 ) )();if ((double)uVar11 < _LC39) {
   ( **(code**)( *(long*)local_b0 + 0x1f0 ) )();
   String::humanize_size(( ulong ) & local_78);
   local_68 = (Object*)0x109bd0;
   local_70 = 0;
   local_60 = 0x82;
   String::parse_latin1((StrRange*)&local_70);
   vformat<String>((Variant*)&local_68, (StringName*)&local_70, (StrRange*)&local_78);
   _err_print_error("begin", "servers/movie_writer/movie_writer.cpp", 0x6f, (Variant*)&local_68, 0, 1);
   pOVar6 = local_68;
   lVar12 = local_70;
   if (local_68 != (Object*)0x0) {
      LOCK();
      pOVar2 = local_68 + -0x10;
      *(long*)pOVar2 = *(long*)pOVar2 + -1;
      UNLOCK();
      if (*(long*)pOVar2 == 0) {
         local_68 = (Object*)0x0;
         Memory::free_static(pOVar6 + -0x10, false);
         lVar12 = local_70;
      }

   }

   lVar4 = local_78;
   local_70 = lVar12;
   if (lVar12 != 0) {
      LOCK();
      plVar1 = (long*)( lVar12 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
         lVar4 = local_78;
      }

   }

   local_78 = lVar4;
   if (lVar4 != 0) {
      LOCK();
      plVar1 = (long*)( lVar4 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

}
*(undefined8*)( this + 0x18c ) = 0;uVar8 = ( **(code**)( *(long*)this + 0x150 ) )(this);uVar5 = AudioDriverDummy::singleton;*(ulong*)( this + 0x180 ) = (ulong)uVar8;AudioDriverDummy::set_mix_rate((int)uVar5);uVar5 = AudioDriverDummy::singleton;uVar9 = ( **(code**)( *(long*)this + 0x158 ) )(this);AudioDriverDummy::set_speaker_mode(uVar5, uVar9);*(ulong*)( this + 0x178 ) = (ulong)param_2;if (*(ulong*)( this + 0x180 ) % (ulong)param_2 != 0) {
   local_70 = 0;
   local_68 = (Object*)0x109c58;
   local_60 = 0x26;
   String::parse_latin1((StrRange*)&local_70);
   itos((long)local_80);
   local_90 = 0;
   local_68 = (Object*)0x109c80;
   local_60 = 0x2b;
   String::parse_latin1((StrRange*)&local_90);
   itos((long)local_a0);
   operator+((char *)
   local_98,(String*)"MovieWriter\'s audio mix rate (";
   String::operator +(local_88, (String*)local_98);
   String::operator +((String*)&local_78, local_88);
   String::operator +((String*)&local_68, (String*)&local_78);
   _err_print_error("begin", "servers/movie_writer/movie_writer.cpp", 0x7a, (Variant*)&local_68, 0, 1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   CowData<char32_t>::_unref(local_98);
   CowData<char32_t>::_unref(local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref(local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
}
uVar8 = AudioDriverDummy::get_channels();*(uint*)( this + 0x188 ) = uVar8;uVar8 = ( uint )(( (ulong)uVar8 * *(long*)( this + 0x180 ) ) / *(ulong*)( this + 0x178 ));if (*(uint*)( this + 0x1a0 ) <= uVar8) {
   if (uVar8 <= *(uint*)( this + 0x1a0 )) goto LAB_00101905;
   if (*(uint*)( this + 0x1a4 ) < uVar8) {
      uVar10 = uVar8 - 1 | uVar8 - 1 >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 >> 4 | uVar10;
      uVar10 = uVar10 >> 8 | uVar10;
      uVar10 = ( uVar10 | uVar10 >> 0x10 ) + 1;
      *(uint*)( this + 0x1a4 ) = uVar10;
      lVar12 = Memory::realloc_static(*(void**)( this + 0x1a8 ), (ulong)uVar10 * 4, false);
      *(long*)( this + 0x1a8 ) = lVar12;
      if (lVar12 == 0) {
         _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

   }

}
*(uint*)( this + 0x1a0 ) = uVar8;LAB_00101905:( **(code**)( *(long*)this + 0x160 ) )(this, param_1, param_2, param_3);pOVar6 = local_a8;if (local_a8 != (Object*)0x0) {
   LOCK();
   pOVar2 = local_a8 + -0x10;
   *(long*)pOVar2 = *(long*)pOVar2 + -1;
   UNLOCK();
   if (*(long*)pOVar2 == 0) {
      local_a8 = (Object*)0x0;
      Memory::free_static(pOVar6 + -0x10, false);
   }

}
if (( ( local_b0 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)local_b0 + 0x140 ))(local_b0);Memory::free_static(local_b0, false);}if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* CowData<String>::_copy_on_write() [clone .isra.0] */void CowData<String>::_copy_on_write(CowData<String> *this) {
   CowData *pCVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   undefined8 *puVar5;
   long lVar6;
   ulong uVar7;
   CowData<char32_t> *this_00;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   if (lVar2 * 8 != 0) {
      uVar7 = lVar2 * 8 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }

   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 != (undefined8*)0x0) {
      lVar6 = 0;
      *puVar5 = 1;
      puVar5[1] = lVar2;
      this_00 = (CowData<char32_t>*)( puVar5 + 2 );
      if (lVar2 != 0) {
         do {
            lVar3 = *(long*)this;
            *(undefined8*)this_00 = 0;
            pCVar1 = (CowData*)( lVar3 + lVar6 * 8 );
            if (*(long*)pCVar1 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar1);
            }

            lVar6 = lVar6 + 1;
            this_00 = this_00 + 8;
         }
 while ( lVar2 != lVar6 );
      }

      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar5 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* Vector<String>::push_back(String) [clone .isra.0] */void Vector<String>::push_back(Vector<String> *this, CowData *param_2) {
   CowData<char32_t> *this_00;
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<String>::resize<false>((CowData<String>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<String>::_copy_on_write((CowData<String>*)( this + 8 ));
            this_00 = (CowData<char32_t>*)( *(long*)( this + 8 ) + lVar3 * 8 );
            if (*(long*)this_00 == *(long*)param_2) {
               return;
            }

            CowData<char32_t>::_ref(this_00, param_2);
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* MovieWriter::get_audio_mix_rate() const */uint MovieWriter::get_audio_mix_rate(MovieWriter *this) {
   char *__s;
   uint uVar1;
   undefined4 uVar2;
   size_t sVar3;
   undefined8 uVar4;
   long lVar5;
   long *plVar6;
   code *pcVar7;
   long in_FS_OFFSET;
   CowData<char32_t> *local_130;
   undefined8 local_128;
   CowData<char32_t> local_120[8];
   undefined8 local_118;
   String local_110[8];
   undefined8 local_108;
   long local_100;
   undefined8 local_f8;
   long local_f0[5];
   uint local_c8;
   undefined4 uStack_c4;
   undefined4 uStack_c0;
   undefined4 uStack_bc;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar6 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar6 != (long*)0x0) {
      local_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar6 + 0x60 ) )((Variant*)local_58, plVar6, this + 0x1b0, 0, 0, &local_c8);
      if (local_c8 == 0) {
         uVar1 = Variant::operator_cast_to_unsigned_int((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_001020e6;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1b8] == (MovieWriter)0x0 )) {
      local_c8 = 0;
      uStack_c4 = 0;
      local_b8 = (undefined1[16])0x0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((String*)&local_c8, "_get_audio_mix_rate");
      local_90 = CONCAT44(local_90._4_4_, 0x8c);
      GetTypeInfo<unsigned_int,void>::get_class_info((GetTypeInfo<unsigned_int,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = CONCAT44(local_70._4_4_, 7);
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar5 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x1c0 ) = 0;
      pcVar7 = *(code**)( lVar5 + 0xd8 );
      if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xd0 ) ),pcVar7 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "MovieWriter");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar5 = local_100 != 0 )) goto LAB_00102594;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_001025a9:lVar5 = *(long*)( this + 8 );
            pcVar7 = *(code**)( lVar5 + 200 );
            if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xc0 ) ),pcVar7 == (code*)0x0) goto LAB_00102452;
            uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x1b0);
            *(undefined8*)( this + 0x1c0 ) = uVar4;
         }
 else {
            lVar5 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_00102594:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar5 == 0) goto LAB_001025a9;
         }

         lVar5 = *(long*)( this + 8 );
      }
 else {
         uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x1b0, uVar2);
         *(undefined8*)( this + 0x1c0 ) = uVar4;
         lVar5 = *(long*)( this + 8 );
      }

      LAB_00102452:if (*(char*)( lVar5 + 0x29 ) != '\0') {
         plVar6 = (long*)operator_new(0x18, "");
         *plVar6 = (long)( this + 0x1c0 );
         plVar6[1] = (long)( this + 0x1b8 );
         plVar6[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar6;
      }

      this[0x1b8] = (MovieWriter)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   }

   pcVar7 = *(code**)( this + 0x1c0 );
   if (pcVar7 == (code*)0x0) {
      if (_gdvirtual__get_audio_mix_rate_call(unsigned_int & ::first_print != '\0') {
         local_f8 = 0;
         local_c8 = 0x109d48;
         uStack_c4 = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_c8 = 0x109fa8;
         uStack_c4 = 0;
         local_108 = 0;
         uStack_c0 = 0x13;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_118 = 0;
         local_c8 = 0x10ded0;
         uStack_c4 = 0;
         uStack_c0 = 2;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_118);
         if (*(code**)( *(long*)this + 0x48 ) == get_class) {
            if (*(long*)( this + 8 ) == 0) {
               local_128 = 0;
               local_c8 = 0x10a1f4;
               uStack_c4 = 0;
               uStack_c0 = 0xb;
               uStack_bc = 0;
               String::parse_latin1((StrRange*)&local_128);
            }
 else {
               lVar5 = *(long*)( *(long*)( this + 8 ) + 0x20 );
               if (lVar5 == 0) {
                  local_128 = 0;
               }
 else {
                  __s = *(char**)( lVar5 + 8 );
                  local_128 = 0;
                  if (__s == (char*)0x0) {
                     if (*(long*)( lVar5 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_128, (CowData*)( lVar5 + 0x10 ));
                     }

                  }
 else {
                     sVar3 = strlen(__s);
                     local_c8 = (uint)__s;
                     uStack_c4 = ( undefined4 )((ulong)__s >> 0x20);
                     uStack_c0 = (undefined4)sVar3;
                     uStack_bc = ( undefined4 )(sVar3 >> 0x20);
                     String::parse_latin1((StrRange*)&local_128);
                  }

               }

            }

         }
 else {
            ( **(code**)( *(long*)this + 0x48 ) )(&local_128, this);
         }

         local_130 = (CowData<char32_t>*)&local_128;
         operator+((char *)
         local_120,(String*)"Required virtual method ";
         String::operator +(local_110, (String*)local_120);
         String::operator +((String*)&local_100, local_110);
         String::operator +((String*)&local_c8, (String*)&local_100);
         _err_print_error("_gdvirtual__get_audio_mix_rate_call", "servers/movie_writer/movie_writer.h", 0x42, (String*)&local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref(local_120);
         CowData<char32_t>::_unref(local_130);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__get_audio_mix_rate_call(unsigned_int&)::first_print =
         '\0';
      }

      uVar1 = 48000;
   }
 else if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( *pcVar7 )(*(undefined8*)( this + 0x10 ), 0, &local_c8);
      uVar1 = local_c8;
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1b0, pcVar7, 0, &local_c8);
      uVar1 = local_c8;
   }

   LAB_001020e6:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar1;
}
/* MovieWriter::get_audio_speaker_mode() const */ulong MovieWriter::get_audio_speaker_mode(MovieWriter *this) {
   char *__s;
   undefined4 uVar1;
   size_t sVar2;
   ulong uVar3;
   undefined8 uVar4;
   long lVar5;
   long *plVar6;
   code *pcVar7;
   long in_FS_OFFSET;
   CowData<char32_t> *local_130;
   undefined8 local_128;
   CowData<char32_t> local_120[8];
   undefined8 local_118;
   String local_110[8];
   undefined8 local_108;
   long local_100;
   undefined8 local_f8;
   long local_f0[5];
   uint local_c8;
   undefined4 uStack_c4;
   undefined4 uStack_c0;
   undefined4 uStack_bc;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   ulong local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar6 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar6 != (long*)0x0) {
      local_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar6 + 0x60 ) )((Variant*)local_58, plVar6, this + 0x1c8, 0, 0, &local_c8);
      if (local_c8 == 0) {
         uVar3 = Variant::operator_cast_to_long((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
            uVar3 = uVar3 & 0xffffffff;
         }

         goto LAB_00102736;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1d0] == (MovieWriter)0x0 )) {
      local_c8 = 0;
      uStack_c4 = 0;
      local_b8 = (undefined1[16])0x0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((String*)&local_c8, "_get_audio_speaker_mode");
      local_90 = CONCAT44(local_90._4_4_, 0x8c);
      GetTypeInfo<AudioServer::SpeakerMode,void>::get_class_info((GetTypeInfo<AudioServer::SpeakerMode,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar5 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x1d8 ) = 0;
      pcVar7 = *(code**)( lVar5 + 0xd8 );
      if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xd0 ) ),pcVar7 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "MovieWriter");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar5 = local_100 != 0 )) goto LAB_00102bf4;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_00102c09:lVar5 = *(long*)( this + 8 );
            pcVar7 = *(code**)( lVar5 + 200 );
            if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xc0 ) ),pcVar7 == (code*)0x0) goto LAB_00102aaa;
            uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x1c8);
            *(undefined8*)( this + 0x1d8 ) = uVar4;
         }
 else {
            lVar5 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_00102bf4:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar5 == 0) goto LAB_00102c09;
         }

         lVar5 = *(long*)( this + 8 );
      }
 else {
         uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x1c8, uVar1);
         *(undefined8*)( this + 0x1d8 ) = uVar4;
         lVar5 = *(long*)( this + 8 );
      }

      LAB_00102aaa:if (*(char*)( lVar5 + 0x29 ) != '\0') {
         plVar6 = (long*)operator_new(0x18, "");
         *plVar6 = (long)( this + 0x1d8 );
         plVar6[1] = (long)( this + 0x1d0 );
         plVar6[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar6;
      }

      this[0x1d0] = (MovieWriter)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   }

   pcVar7 = *(code**)( this + 0x1d8 );
   if (pcVar7 == (code*)0x0) {
      if (_gdvirtual__get_audio_speaker_mode_call(AudioServer::SpeakerMode & ::first_print == '\0') {
         uVar3 = 0;
      }
 else {
         local_f8 = 0;
         local_c8 = 0x109d48;
         uStack_c4 = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_c8 = 0x109fd5;
         uStack_c4 = 0;
         local_108 = 0;
         uStack_c0 = 0x17;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_118 = 0;
         local_c8 = 0x10ded0;
         uStack_c4 = 0;
         uStack_c0 = 2;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_118);
         if (*(code**)( *(long*)this + 0x48 ) == get_class) {
            if (*(long*)( this + 8 ) == 0) {
               local_128 = 0;
               local_c8 = 0x10a1f4;
               uStack_c4 = 0;
               uStack_c0 = 0xb;
               uStack_bc = 0;
               String::parse_latin1((StrRange*)&local_128);
            }
 else {
               lVar5 = *(long*)( *(long*)( this + 8 ) + 0x20 );
               if (lVar5 == 0) {
                  local_128 = 0;
               }
 else {
                  __s = *(char**)( lVar5 + 8 );
                  local_128 = 0;
                  if (__s == (char*)0x0) {
                     if (*(long*)( lVar5 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_128, (CowData*)( lVar5 + 0x10 ));
                     }

                  }
 else {
                     sVar2 = strlen(__s);
                     local_c8 = (uint)__s;
                     uStack_c4 = ( undefined4 )((ulong)__s >> 0x20);
                     uStack_c0 = (undefined4)sVar2;
                     uStack_bc = ( undefined4 )(sVar2 >> 0x20);
                     String::parse_latin1((StrRange*)&local_128);
                  }

               }

            }

         }
 else {
            ( **(code**)( *(long*)this + 0x48 ) )(&local_128, this);
         }

         local_130 = (CowData<char32_t>*)&local_128;
         operator+((char *)
         local_120,(String*)"Required virtual method ";
         String::operator +(local_110, (String*)local_120);
         String::operator +((String*)&local_100, local_110);
         String::operator +((String*)&local_c8, (String*)&local_100);
         _err_print_error("_gdvirtual__get_audio_speaker_mode_call", "servers/movie_writer/movie_writer.h", 0x43, (String*)&local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref(local_120);
         CowData<char32_t>::_unref(local_130);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__get_audio_speaker_mode_call(AudioServer::SpeakerMode&)::first_print =
         '\0';
         uVar3 = 0;
      }

   }
 else if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( *pcVar7 )(*(undefined8*)( this + 0x10 ), 0, &local_c8);
      uVar3 = (ulong)local_c8;
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1c8, pcVar7, 0, &local_c8);
      uVar3 = (ulong)local_c8;
   }

   LAB_00102736:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
/* MovieWriter::write_end() */void MovieWriter::write_end(MovieWriter *this) {
   char *__s;
   undefined4 uVar1;
   size_t sVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   CowData<char32_t> *local_110;
   undefined8 local_108;
   CowData<char32_t> local_100[8];
   undefined8 local_f8;
   String local_f0[8];
   undefined8 local_e8;
   long local_e0;
   undefined8 local_d8;
   long local_d0;
   int local_c8;
   undefined4 uStack_c4;
   undefined4 uStack_c0;
   undefined4 uStack_bc;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar5 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar5 == (long*)0x0) {
      LAB_00102d4b:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x248] == (MovieWriter)0x0 )) {
         local_c8 = 0;
         uStack_c4 = 0;
         local_b8 = (undefined1[16])0x0;
         uStack_c0 = 0;
         uStack_bc = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_98 = 6;
         local_90 = 1;
         local_88 = 0;
         local_78 = 0;
         local_70 = 0;
         local_60 = 0;
         String::parse_latin1((String*)&local_c8, "_write_end");
         local_90 = CONCAT44(local_90._4_4_, 0x88);
         uVar1 = MethodInfo::get_compatibility_hash();
         lVar4 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x250 ) = 0;
         UNRECOVERED_JUMPTABLE = *(code**)( lVar4 + 0xd8 );
         if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar4 + 0xd0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) {
            local_e8 = 0;
            String::parse_latin1((String*)&local_e8, "MovieWriter");
            StringName::StringName((StringName*)&local_e0, (String*)&local_e8, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_d8, (StringName*)&local_e0);
            if (local_d0 == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( lVar4 = local_e0 != 0 )) goto LAB_00103216;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               LAB_0010322b:lVar4 = *(long*)( this + 8 );
               UNRECOVERED_JUMPTABLE = *(code**)( lVar4 + 200 );
               if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar4 + 0xc0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) goto LAB_001030d4;
               uVar3 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x240);
               *(undefined8*)( this + 0x250 ) = uVar3;
            }
 else {
               lVar4 = *(long*)( local_d0 + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                  LAB_00103216:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               if (lVar4 == 0) goto LAB_0010322b;
            }

            lVar4 = *(long*)( this + 8 );
         }
 else {
            uVar3 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x240, uVar1);
            *(undefined8*)( this + 0x250 ) = uVar3;
            lVar4 = *(long*)( this + 8 );
         }

         LAB_001030d4:if (*(char*)( lVar4 + 0x29 ) != '\0') {
            plVar5 = (long*)operator_new(0x18, "");
            *plVar5 = (long)( this + 0x250 );
            plVar5[1] = (long)( this + 0x248 );
            plVar5[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar5;
         }

         this[0x248] = (MovieWriter)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
      }

      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x250 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00102fdc. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( this + 0x10 ), 0, 0);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00102db1. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x240, UNRECOVERED_JUMPTABLE, 0, 0);
            return;
         }

         goto LAB_0010329e;
      }

      if (_gdvirtual__write_end_call() != '\0') {
         local_d8 = 0;
         local_c8 = 0x109d48;
         uStack_c4 = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_d8);
         local_c8 = 0x109fed;
         uStack_c4 = 0;
         local_e8 = 0;
         uStack_c0 = 10;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_e8);
         local_c8 = 0x10ded0;
         uStack_c4 = 0;
         local_f8 = 0;
         uStack_c0 = 2;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         if (*(code**)( *(long*)this + 0x48 ) == get_class) {
            if (*(long*)( this + 8 ) == 0) {
               local_108 = 0;
               local_c8 = 0x10a1f4;
               uStack_c4 = 0;
               uStack_c0 = 0xb;
               uStack_bc = 0;
               String::parse_latin1((StrRange*)&local_108);
            }
 else {
               lVar4 = *(long*)( *(long*)( this + 8 ) + 0x20 );
               if (lVar4 == 0) {
                  local_108 = 0;
               }
 else {
                  __s = *(char**)( lVar4 + 8 );
                  local_108 = 0;
                  if (__s == (char*)0x0) {
                     if (*(long*)( lVar4 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_108, (CowData*)( lVar4 + 0x10 ));
                     }

                  }
 else {
                     sVar2 = strlen(__s);
                     local_c8 = (int)__s;
                     uStack_c4 = ( undefined4 )((ulong)__s >> 0x20);
                     uStack_c0 = (undefined4)sVar2;
                     uStack_bc = ( undefined4 )(sVar2 >> 0x20);
                     String::parse_latin1((StrRange*)&local_108);
                  }

               }

            }

         }
 else {
            ( **(code**)( *(long*)this + 0x48 ) )(&local_108, this);
         }

         local_110 = (CowData<char32_t>*)&local_108;
         operator+((char *)
         local_100,(String*)"Required virtual method ";
         String::operator +(local_f0, (String*)local_100);
         String::operator +((String*)&local_e0, local_f0);
         String::operator +((String*)&local_c8, (String*)&local_e0);
         _err_print_error("_gdvirtual__write_end_call", "servers/movie_writer/movie_writer.h", 0x4a, (String*)&local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_f0);
         CowData<char32_t>::_unref(local_100);
         CowData<char32_t>::_unref(local_110);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
         _gdvirtual__write_end_call()::first_print =
         '\0';
      }

   }
 else {
      local_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar5 + 0x60 ) )(local_58, plVar5, this + 0x240, 0, 0, &local_c8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_c8 != 0) goto LAB_00102d4b;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010329e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MovieWriter::get_supported_extensions(List<String, DefaultAllocator>*) const */void MovieWriter::get_supported_extensions(MovieWriter *this, List *param_1) {
   long lVar1;
   char *__s;
   size_t sVar2;
   undefined4 uVar3;
   CowData<char32_t> *this_00;
   undefined1(*pauVar4)[16];
   undefined8 uVar5;
   long *plVar6;
   code *pcVar7;
   size_t sVar8;
   long lVar9;
   long in_FS_OFFSET;
   CowData<char32_t> *local_140;
   undefined8 local_138;
   CowData<char32_t> local_130[8];
   undefined8 local_128;
   long local_120;
   long local_118;
   long local_110[2];
   size_t local_100;
   int local_f8[2];
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   long lStack_e8;
   int local_e0;
   undefined8 local_d8;
   undefined4 local_d0;
   char *local_c8;
   size_t local_c0;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   ulong local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar6 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_100 = 0;
   if (plVar6 == (long*)0x0) {
      LAB_0010338b:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x200] == (MovieWriter)0x0 )) {
         local_c8 = (char*)0x0;
         local_b8 = (undefined1[16])0x0;
         local_c0 = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_98 = 6;
         local_90 = 1;
         local_88 = 0;
         local_78 = 0;
         local_70 = 0;
         local_60 = 0;
         String::parse_latin1((String*)&local_c8, "_get_supported_extensions");
         local_90 = CONCAT44(local_90._4_4_, 0x8c);
         local_118 = 0;
         local_120 = 0;
         String::parse_latin1((String*)&local_120, "");
         local_128 = 0;
         local_f8[0] = 0x22;
         local_e0 = 0;
         local_d8 = 0;
         uStack_f0 = 0;
         uStack_ec = 0;
         lStack_e8 = 0;
         if (local_120 == 0) {
            LAB_00103ae3:local_d0 = 6;
            StringName::operator =((StringName*)&lStack_e8, (StringName*)&local_118);
         }
 else {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_120);
            local_d0 = 6;
            if (local_e0 != 0x11) goto LAB_00103ae3;
            StringName::StringName((StringName*)local_110, (String*)&local_d8, false);
            if (lStack_e8 == local_110[0]) {
               if (( StringName::configured != '\0' ) && ( local_110[0] != 0 )) {
                  StringName::unref();
               }

            }
 else {
               StringName::unref();
               lStack_e8 = local_110[0];
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
         if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
            StringName::unref();
         }

         PropertyInfo::operator =((PropertyInfo*)&local_c0, (PropertyInfo*)local_f8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_f8);
         local_70 = local_70 & 0xffffffff00000000;
         uVar3 = MethodInfo::get_compatibility_hash();
         *(undefined8*)( this + 0x208 ) = 0;
         lVar9 = *(long*)( this + 8 );
         pcVar7 = *(code**)( lVar9 + 0xd8 );
         if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar9 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar9 + 0xd0 ) ),pcVar7 == (code*)0x0) {
            local_118 = 0;
            String::parse_latin1((String*)&local_118, "MovieWriter");
            StringName::StringName((StringName*)local_110, (String*)&local_118, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_f8, (StringName*)local_110);
            if (CONCAT44(uStack_ec, uStack_f0) == 0) {
               lVar9 = 0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_f0);
               if (StringName::configured != '\0') goto LAB_00103b73;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
               LAB_00103b91:lVar9 = *(long*)( this + 8 );
               pcVar7 = *(code**)( lVar9 + 200 );
               if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar9 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar9 + 0xc0 ) ),pcVar7 == (code*)0x0) goto LAB_001039ed;
               uVar5 = ( *pcVar7 )(*(undefined8*)( lVar9 + 0xa0 ), this + 0x1f8);
               *(undefined8*)( this + 0x208 ) = uVar5;
            }
 else {
               lVar9 = *(long*)( CONCAT44(uStack_ec, uStack_f0) + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_f0);
               if (StringName::configured != '\0') {
                  LAB_00103b73:if (local_110[0] != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
               if (lVar9 == 0) goto LAB_00103b91;
            }

            lVar9 = *(long*)( this + 8 );
         }
 else {
            uVar5 = ( *pcVar7 )(*(undefined8*)( lVar9 + 0xa0 ), this + 0x1f8, uVar3);
            *(undefined8*)( this + 0x208 ) = uVar5;
            lVar9 = *(long*)( this + 8 );
         }

         LAB_001039ed:if (*(char*)( lVar9 + 0x29 ) != '\0') {
            plVar6 = (long*)operator_new(0x18, "");
            *plVar6 = (long)( this + 0x208 );
            plVar6[1] = (long)( this + 0x200 );
            plVar6[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar6;
         }

         this[0x200] = (MovieWriter)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
      }

      pcVar7 = *(code**)( this + 0x208 );
      if (pcVar7 == (code*)0x0) {
         if (_gdvirtual__get_supported_extensions_call(Vector<String> & ::first_print != '\0') {
            local_f8[0] = 0;
            local_f8[1] = 0;
            local_c8 = " must be overridden before calling.";
            local_c0 = 0x23;
            String::parse_latin1((StrRange*)local_f8);
            local_c8 = "_get_supported_extensions";
            local_118 = 0;
            local_c0 = 0x19;
            String::parse_latin1((StrRange*)&local_118);
            local_128 = 0;
            local_c8 = "::";
            local_c0 = 2;
            String::parse_latin1((StrRange*)&local_128);
            if (*(code**)( *(long*)this + 0x48 ) == get_class) {
               if (*(long*)( this + 8 ) == 0) {
                  local_138 = 0;
                  local_c8 = "MovieWriter";
                  local_c0 = 0xb;
                  String::parse_latin1((StrRange*)&local_138);
               }
 else {
                  lVar9 = *(long*)( *(long*)( this + 8 ) + 0x20 );
                  if (lVar9 == 0) {
                     local_138 = 0;
                  }
 else {
                     __s = *(char**)( lVar9 + 8 );
                     local_138 = 0;
                     if (__s == (char*)0x0) {
                        if (*(long*)( lVar9 + 0x10 ) != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_138, (CowData*)( lVar9 + 0x10 ));
                        }

                     }
 else {
                        local_c0 = strlen(__s);
                        local_c8 = __s;
                        String::parse_latin1((StrRange*)&local_138);
                     }

                  }

               }

            }
 else {
               ( **(code**)( *(long*)this + 0x48 ) )(&local_138, this);
            }

            local_140 = (CowData<char32_t>*)&local_138;
            operator+((char *)
            local_130,(String*)"Required virtual method ";
            String::operator +((String*)&local_120, (String*)local_130);
            String::operator +((String*)local_110, (String*)&local_120);
            String::operator +((String*)&local_c8, (String*)local_110);
            _err_print_error("_gdvirtual__get_supported_extensions_call", "servers/movie_writer/movie_writer.h", 0x46, (String*)&local_c8, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
            CowData<char32_t>::_unref(local_130);
            CowData<char32_t>::_unref(local_140);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_f8);
            _gdvirtual__get_supported_extensions_call(Vector<String>&)::first_print =
            '\0';
         }

         goto LAB_001034ea;
      }

      uStack_f0 = 0;
      uStack_ec = 0;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar7 )(*(undefined8*)( this + 0x10 ), 0, local_f8);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1f8, pcVar7, 0, local_f8);
      }

      local_c0 = 0;
      CowData<String>::_ref((CowData<String>*)&local_c0, (CowData*)&uStack_f0);
      sVar2 = local_c0;
      sVar8 = local_100;
      if (local_c0 == 0) {
         CowData<String>::_unref((CowData<String>*)&local_c0);
         CowData<String>::_unref((CowData<String>*)&uStack_f0);
         goto LAB_00103562;
      }

      CowData<String>::_unref((CowData<String>*)&local_100);
      local_100 = sVar2;
      local_c0 = 0;
      CowData<String>::_unref((CowData<String>*)&local_c0);
      CowData<String>::_unref((CowData<String>*)&uStack_f0);
      sVar8 = sVar2;
   }
 else {
      local_f8[0] = 0;
      local_f8[1] = 0;
      uStack_f0 = 0;
      ( **(code**)( *plVar6 + 0x60 ) )(local_58, plVar6, this + 0x1f8, 0, 0, local_f8);
      if (local_f8[0] != 0) {
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010338b;
      }

      Variant::operator_cast_to_Vector((Variant*)&local_c8);
      if (local_c0 == 0) {
         CowData<String>::_unref((CowData<String>*)&local_c0);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_001034ea;
      }

      CowData<String>::_unref((CowData<String>*)&local_100);
      sVar8 = local_c0;
      local_c0 = 0;
      local_100 = sVar8;
      CowData<String>::_unref((CowData<String>*)&local_c0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      LAB_00103562:if (sVar8 == 0) goto LAB_001034ea;
   }

   if (0 < *(long*)( sVar8 - 8 )) {
      lVar9 = 0;
      do {
         if (*(long*)param_1 == 0) {
            pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])param_1 = pauVar4;
            *(undefined4*)pauVar4[1] = 0;
            *pauVar4 = (undefined1[16])0x0;
         }

         this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
         *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
         if (*(long*)( sVar8 + lVar9 * 8 ) != 0) {
            CowData<char32_t>::_ref(this_00, (CowData*)( sVar8 + lVar9 * 8 ));
         }

         plVar6 = *(long**)param_1;
         lVar1 = plVar6[1];
         *(undefined8*)( this_00 + 8 ) = 0;
         *(long**)( this_00 + 0x18 ) = plVar6;
         *(long*)( this_00 + 0x10 ) = lVar1;
         if (lVar1 != 0) {
            *(CowData<char32_t>**)( lVar1 + 8 ) = this_00;
         }

         plVar6[1] = (long)this_00;
         if (*plVar6 == 0) {
            *plVar6 = (long)this_00;
         }

         *(int*)( plVar6 + 2 ) = (int)plVar6[2] + 1;
         lVar9 = lVar9 + 1;
      }
 while ( lVar9 < *(long*)( sVar8 - 8 ) );
   }

   LAB_001034ea:CowData<String>::_unref((CowData<String>*)&local_100);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MovieWriter::add_frame() */void MovieWriter::add_frame(MovieWriter *this) {
   Image *pIVar1;
   code *pcVar2;
   long lVar3;
   long *plVar4;
   Image *pIVar5;
   char cVar6;
   int iVar7;
   ulong uVar8;
   long lVar9;
   undefined8 uVar10;
   long *plVar11;
   undefined8 uVar12;
   long in_FS_OFFSET;
   bool bVar13;
   double dVar14;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   long local_68;
   long local_60;
   Image *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Engine::get_singleton();
   uVar8 = Engine::get_frames_drawn();
   iVar7 = (int)( uVar8 / *(ulong*)( this + 0x178 ) );
   String::num((double)( iVar7 % 0x3c ), (int)(StrRange*)&local_70);
   String::pad_zeros((int)&local_68);
   String::num((double)( ( iVar7 % 0xe10 ) / 0x3c ), (int)&local_80);
   String::pad_zeros((int)&local_78);
   String::num((double)( iVar7 / 0xe10 ), (int)&local_90);
   String::pad_zeros((int)&local_88);
   local_58 = (Image*)0x109f44;
   local_60 = 0;
   local_50 = 8;
   String::parse_latin1((StrRange*)&local_60);
   vformat<String,String,String>(&local_98, (StrRange*)&local_60, &local_88, &local_78, &local_68);
   lVar3 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar11 = (long*)( local_60 + -0x10 );
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar11 = (long*)( local_88 + -0x10 );
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar11 = (long*)( local_90 + -0x10 );
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar11 = (long*)( local_78 + -0x10 );
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar11 = (long*)( local_80 + -0x10 );
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar11 = (long*)( local_68 + -0x10 );
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar11 = (long*)( local_70 + -0x10 );
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   plVar4 = DisplayServer::singleton;
   pcVar2 = *(code**)( *DisplayServer::singleton + 0x510 );
   local_60 = 0;
   plVar11 = (long*)( *(long*)( this + 0x198 ) + -0x10 );
   if (*(long*)( this + 0x198 ) != 0) {
      do {
         lVar3 = *plVar11;
         if (lVar3 == 0) goto LAB_00103ed0;
         LOCK();
         lVar9 = *plVar11;
         bVar13 = lVar3 == lVar9;
         if (bVar13) {
            *plVar11 = lVar3 + 1;
            lVar9 = lVar3;
         }

         UNLOCK();
      }
 while ( !bVar13 );
      if (lVar9 != -1) {
         local_60 = *(long*)( this + 0x198 );
      }

   }

   LAB_00103ed0:local_68 = 0;
   plVar11 = (long*)( local_98 + -0x10 );
   if (local_98 != 0) {
      do {
         lVar3 = *plVar11;
         if (lVar3 == 0) goto LAB_00103f0a;
         LOCK();
         lVar9 = *plVar11;
         bVar13 = lVar3 == lVar9;
         if (bVar13) {
            *plVar11 = lVar3 + 1;
            lVar9 = lVar3;
         }

         UNLOCK();
      }
 while ( !bVar13 );
      if (lVar9 != -1) {
         local_68 = local_98;
      }

   }

   LAB_00103f0a:Engine::get_singleton();
   uVar10 = Engine::get_frames_drawn();
   local_70 = 0;
   local_58 = (Image*)0x109e18;
   local_50 = 0x2d;
   String::parse_latin1((StrRange*)&local_70);
   vformat<unsigned_long,String,String>(&local_58, (StrRange*)&local_70, uVar10, &local_68, (StrRange*)&local_60);
   ( *pcVar2 )(plVar4, &local_58, 0);
   pIVar5 = local_58;
   if (local_58 != (Image*)0x0) {
      LOCK();
      pIVar1 = local_58 + -0x10;
      *(long*)pIVar1 = *(long*)pIVar1 + -1;
      UNLOCK();
      if (*(long*)pIVar1 == 0) {
         local_58 = (Image*)0x0;
         Memory::free_static(pIVar5 + -0x10, false);
      }

   }

   lVar3 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar11 = (long*)( local_70 + -0x10 );
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar11 = (long*)( local_68 + -0x10 );
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar11 = (long*)( local_60 + -0x10 );
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   plVar11 = (long*)RenderingServer::get_singleton();
   uVar10 = ( **(code**)( *plVar11 + 0xb38 ) )(plVar11, 0);
   plVar11 = (long*)RenderingServer::get_singleton();
   uVar12 = ( **(code**)( *plVar11 + 0xa18 ) )(plVar11, uVar10);
   plVar11 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar11 + 0x1c0 ) )(&local_58, plVar11, uVar12);
   plVar11 = (long*)RenderingServer::get_singleton();
   cVar6 = ( **(code**)( *plVar11 + 0xa70 ) )(plVar11, uVar10);
   if (cVar6 != '\0') {
      Image::convert(local_58, 5);
      Image::linear_to_srgb();
   }

   plVar11 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar11 + 0xb20 ) )(plVar11, uVar10, 1);
   plVar11 = (long*)RenderingServer::get_singleton();
   dVar14 = (double)( **(code**)( *plVar11 + 0xb28 ) )(plVar11, uVar10);
   *(float*)( this + 0x18c ) = (float)( (double)*(float*)( this + 0x18c ) + dVar14 );
   plVar11 = (long*)RenderingServer::get_singleton();
   dVar14 = (double)( **(code**)( *plVar11 + 0x1240 ) )(plVar11);
   *(float*)( this + 0x18c ) = (float)( (double)*(float*)( this + 0x18c ) + dVar14 );
   plVar11 = (long*)RenderingServer::get_singleton();
   dVar14 = (double)( **(code**)( *plVar11 + 0xb30 ) )(plVar11, uVar10);
   uVar10 = AudioDriverDummy::singleton;
   *(float*)( this + 400 ) = (float)( (double)*(float*)( this + 400 ) + dVar14 );
   AudioDriverDummy::mix_audio((int)uVar10, (int*)( *(ulong*)( this + 0x180 ) / *(ulong*)( this + 0x178 ) ));
   ( **(code**)( *(long*)this + 0x168 ) )(this, &local_58, *(undefined8*)( this + 0x1a8 ));
   if (( local_58 != (Image*)0x0 ) && ( cVar6 = RefCounted::unreference() ),cVar6 != '\0') {
      memdelete<Image>(local_58);
   }

   if (local_98 != 0) {
      LOCK();
      plVar11 = (long*)( local_98 + -0x10 );
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static((void*)( local_98 + -0x10 ), false);
            return;
         }

         goto LAB_0010432f;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010432f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Vector<int>::push_back(int) [clone .isra.0] */void Vector<int>::push_back(Vector<int> *this, int param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<int>::resize<false>((CowData<int>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<int>::_copy_on_write((CowData<int>*)( this + 8 ));
            *(int*)( *(long*)( this + 8 ) + lVar3 * 4 ) = param_1;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* MovieWriter::_bind_methods() */void MovieWriter::_bind_methods(void) {
   long lVar1;
   code *pcVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined8 uVar20;
   MethodBind *this;
   undefined4 *puVar21;
   long lVar22;
   long *plVar23;
   long in_FS_OFFSET;
   bool bVar24;
   StringName *local_188;
   CowData<char32_t> *local_178;
   long local_148;
   long local_140;
   long local_138;
   long local_130;
   long local_128;
   undefined8 local_120;
   char *local_118;
   undefined1 local_110[16];
   int local_100;
   long local_f8;
   undefined4 local_f0;
   char *local_e8;
   long local_e0;
   undefined1 local_d8[16];
   long local_c8;
   long local_c0;
   undefined8 local_b8;
   undefined8 local_b0;
   undefined1(*local_a8[2])[16];
   undefined8 local_98;
   ulong local_90;
   Vector<int> local_88[8];
   undefined8 local_80;
   char *local_78;
   undefined8 local_70;
   Variant *local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   local_78 = "writer";
   local_58 = (Variant*)&local_78;
   D_METHODP((char*)&local_e8, (char***)"add_writer", (uint)(PropertyInfo*)&local_58);
   StringName::StringName((StringName*)&local_118, "MovieWriter", false);
   local_50 = (undefined1[16])0x0;
   local_58 = (Variant*)0x0;
   this(MethodBind * operator_new(0x60, ""));
   MethodBind::MethodBind(this);
   *(undefined***)this = &PTR__gen_argument_type_0010f3e8;
   *(undefined8*)( this + 0x58 ) = 0x100000;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   MethodBind::_set_static(SUB81(this, 0));
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_118);
   ClassDB::bind_methodfi(1, this, false, (MethodDefinition*)&local_e8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   uVar20 = local_d8._0_8_;
   if ((long*)local_d8._0_8_ != (long*)0x0) {
      LOCK();
      plVar23 = (long*)( local_d8._0_8_ + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         if ((long*)local_d8._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_d8._0_8_ + -8 );
         lVar22 = 0;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_d8._8_8_;
         local_d8 = auVar3 << 0x40;
         plVar23 = (long*)uVar20;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar23 != 0 )) {
                  StringName::unref();
               }

               lVar22 = lVar22 + 1;
               plVar23 = plVar23 + 1;
            }
 while ( lVar1 != lVar22 );
         }

         Memory::free_static((long*)( uVar20 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_d8._0_8_ = 0;
   local_d8._8_8_ = 0;
   local_118 = "_get_audio_mix_rate";
   local_120 = 0;
   local_e8 = (char*)0x0;
   local_e0 = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b8 = 6;
   local_b0 = 1;
   local_a8[0] = (undefined1(*) [16])0x0;
   local_98 = 0;
   local_90 = 0;
   local_80 = 0;
   local_110._0_8_ = 0x13;
   String::parse_latin1((StrRange*)&local_e8);
   local_b0 = CONCAT44(local_b0._4_4_, 0x8c);
   local_148 = 0;
   local_140 = 0;
   local_118 = "";
   auVar16._8_8_ = 0;
   auVar16._0_8_ = local_110._8_8_;
   local_110 = auVar16 << 0x40;
   String::parse_latin1((StrRange*)&local_140);
   local_138 = 0;
   local_118 = (char*)CONCAT44(local_118._4_4_, 2);
   local_100 = 0;
   local_f8 = 0;
   local_110 = (undefined1[16])0x0;
   if (local_140 == 0) {
      LAB_00104818:local_f0 = 6;
      StringName::operator =((StringName*)( local_110 + 8 ), (StringName*)&local_148);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_140);
      local_f0 = 6;
      if (local_100 != 0x11) goto LAB_00104818;
      StringName::StringName((StringName*)&local_130, (String*)&local_f8, false);
      if (local_110._8_8_ == local_130) {
         if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_110._8_8_ = local_130;
      }

   }

   local_188 = (StringName*)( local_110 + 8 );
   local_178 = (CowData<char32_t>*)&local_f8;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   if (( StringName::configured != '\0' ) && ( local_148 != 0 )) {
      StringName::unref();
   }

   local_e0 = CONCAT44(local_e0._4_4_, local_118._0_4_);
   if (local_d8._0_8_ != local_110._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_d8);
      local_d8._0_8_ = local_110._0_8_;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_110._8_8_;
      local_110 = auVar4 << 0x40;
   }

   if (local_d8._8_8_ != local_110._8_8_) {
      StringName::unref();
      local_d8._8_8_ = local_110._8_8_;
      local_110._8_8_ = 0;
   }

   lVar1 = local_f8;
   local_c8 = CONCAT44(local_c8._4_4_, local_100);
   if (local_c0 == local_f8) {
      local_b8 = CONCAT44(local_b8._4_4_, local_f0);
      if (local_f8 != 0) {
         LOCK();
         plVar23 = (long*)( local_f8 + -0x10 );
         *plVar23 = *plVar23 + -1;
         UNLOCK();
         if (*plVar23 == 0) {
            local_f8 = 0;
            Memory::free_static((void*)( lVar1 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
      local_c0 = local_f8;
      local_b8 = CONCAT44(local_b8._4_4_, local_f0);
   }

   if (( StringName::configured != '\0' ) && ( local_110._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar20 = local_110._0_8_;
   if (local_110._0_8_ != 0) {
      LOCK();
      plVar23 = (long*)( local_110._0_8_ + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         auVar10._8_8_ = 0;
         auVar10._0_8_ = local_110._8_8_;
         local_110 = auVar10 << 0x40;
         Memory::free_static((void*)( uVar20 + -0x10 ), false);
      }

   }

   local_90 = CONCAT44(local_90._4_4_, 7);
   local_118 = "MovieWriter";
   local_130 = 0;
   local_110._0_8_ = 0xb;
   String::parse_latin1((StrRange*)&local_130);
   StringName::StringName((StringName*)&local_118, (String*)&local_130, false);
   ClassDB::add_virtual_method((StringName*)&local_118, (MethodInfo*)&local_e8, true, (Vector*)&local_128, false);
   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   MethodInfo::~MethodInfo((MethodInfo*)&local_e8);
   CowData<String>::_unref((CowData<String>*)&local_120);
   local_d8._0_8_ = 0;
   local_d8._8_8_ = 0;
   local_118 = "_get_audio_speaker_mode";
   local_120 = 0;
   local_e8 = (char*)0x0;
   local_e0 = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b8 = 6;
   local_b0 = 1;
   local_a8[0] = (undefined1(*) [16])0x0;
   local_98 = 0;
   local_90 = 0;
   local_80 = 0;
   local_110._0_8_ = 0x17;
   String::parse_latin1((StrRange*)&local_e8);
   local_b0 = CONCAT44(local_b0._4_4_, 0x8c);
   GetTypeInfo<AudioServer::SpeakerMode,void>::get_class_info((GetTypeInfo<AudioServer::SpeakerMode,void>*)&local_118);
   local_e0 = CONCAT44(local_e0._4_4_, local_118._0_4_);
   if (local_d8._0_8_ != local_110._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_d8);
      local_d8._0_8_ = local_110._0_8_;
      local_110._0_8_ = 0;
   }

   if (local_d8._8_8_ != local_110._8_8_) {
      StringName::unref();
      local_d8._8_8_ = local_110._8_8_;
      local_110._8_8_ = 0;
   }

   lVar1 = local_f8;
   local_c8 = CONCAT44(local_c8._4_4_, local_100);
   if (local_c0 == local_f8) {
      local_b8 = CONCAT44(local_b8._4_4_, local_f0);
      if (local_f8 != 0) {
         LOCK();
         plVar23 = (long*)( local_f8 + -0x10 );
         *plVar23 = *plVar23 + -1;
         UNLOCK();
         if (*plVar23 == 0) {
            local_f8 = 0;
            Memory::free_static((void*)( lVar1 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
      local_c0 = local_f8;
      local_b8 = CONCAT44(local_b8._4_4_, local_f0);
   }

   if (( StringName::configured != '\0' ) && ( local_110._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar20 = local_110._0_8_;
   if (local_110._0_8_ != 0) {
      LOCK();
      plVar23 = (long*)( local_110._0_8_ + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         local_110._0_8_ = 0;
         Memory::free_static((void*)( uVar20 + -0x10 ), false);
      }

   }

   local_90 = local_90 & 0xffffffff00000000;
   local_118 = "MovieWriter";
   local_130 = 0;
   local_110._0_8_ = 0xb;
   String::parse_latin1((StrRange*)&local_130);
   StringName::StringName((StringName*)&local_118, (String*)&local_130, false);
   ClassDB::add_virtual_method((StringName*)&local_118, (MethodInfo*)&local_e8, true, (Vector*)&local_128, false);
   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   MethodInfo::~MethodInfo((MethodInfo*)&local_e8);
   CowData<String>::_unref((CowData<String>*)&local_120);
   local_e8 = "path";
   local_120 = 0;
   local_118 = (char*)0x0;
   local_e0 = 4;
   String::parse_latin1((StrRange*)&local_118);
   local_e8 = (char*)0x0;
   plVar23 = (long*)( (long)local_118 + -0x10 );
   if (local_118 != (char*)0x0) {
      do {
         lVar1 = *plVar23;
         if (lVar1 == 0) goto LAB_00104cfc;
         LOCK();
         lVar22 = *plVar23;
         bVar24 = lVar1 == lVar22;
         if (bVar24) {
            *plVar23 = lVar1 + 1;
            lVar22 = lVar1;
         }

         UNLOCK();
      }
 while ( !bVar24 );
      if (lVar22 != -1) {
         local_e8 = local_118;
      }

   }

   LAB_00104cfc:Vector<String>::push_back((Vector<String>*)&local_128, (StrRange*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   local_d8._0_8_ = 0;
   local_d8._8_8_ = 0;
   local_118 = "_handles_file";
   local_e8 = (char*)0x0;
   local_e0 = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b8 = 6;
   local_b0 = 1;
   local_a8[0] = (undefined1(*) [16])0x0;
   local_98 = 0;
   local_90 = 0;
   local_80 = 0;
   local_110._0_8_ = 0xd;
   String::parse_latin1((StrRange*)&local_e8);
   local_b0 = CONCAT44(local_b0._4_4_, 0x8c);
   local_148 = 0;
   local_140 = 0;
   local_118 = "";
   auVar17._8_8_ = 0;
   auVar17._0_8_ = local_110._8_8_;
   local_110 = auVar17 << 0x40;
   String::parse_latin1((StrRange*)&local_140);
   local_138 = 0;
   local_118 = (char*)CONCAT44(local_118._4_4_, 1);
   local_100 = 0;
   local_f8 = 0;
   local_110 = (undefined1[16])0x0;
   if (local_140 == 0) {
      LAB_00104eb3:local_f0 = 6;
      StringName::operator =(local_188, (StringName*)&local_148);
   }
 else {
      CowData<char32_t>::_ref(local_178, (CowData*)&local_140);
      local_f0 = 6;
      if (local_100 != 0x11) goto LAB_00104eb3;
      StringName::StringName((StringName*)&local_130, (String*)local_178, false);
      if (local_110._8_8_ == local_130) {
         if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_110._8_8_ = local_130;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   if (( StringName::configured != '\0' ) && ( local_148 != 0 )) {
      StringName::unref();
   }

   local_e0 = CONCAT44(local_e0._4_4_, local_118._0_4_);
   if (local_d8._0_8_ != local_110._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_d8);
      local_d8._0_8_ = local_110._0_8_;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_110._8_8_;
      local_110 = auVar5 << 0x40;
   }

   if (local_d8._8_8_ != local_110._8_8_) {
      StringName::unref();
      local_d8._8_8_ = local_110._8_8_;
      local_110._8_8_ = 0;
   }

   lVar1 = local_f8;
   local_c8 = CONCAT44(local_c8._4_4_, local_100);
   if (local_c0 == local_f8) {
      local_b8 = CONCAT44(local_b8._4_4_, local_f0);
      if (local_f8 != 0) {
         LOCK();
         plVar23 = (long*)( local_f8 + -0x10 );
         *plVar23 = *plVar23 + -1;
         UNLOCK();
         if (*plVar23 == 0) {
            local_f8 = 0;
            Memory::free_static((void*)( lVar1 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
      local_c0 = local_f8;
      local_b8 = CONCAT44(local_b8._4_4_, local_f0);
   }

   if (( StringName::configured != '\0' ) && ( local_110._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar20 = local_110._0_8_;
   if (local_110._0_8_ != 0) {
      LOCK();
      plVar23 = (long*)( local_110._0_8_ + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         auVar15._8_8_ = 0;
         auVar15._0_8_ = local_110._8_8_;
         local_110 = auVar15 << 0x40;
         Memory::free_static((void*)( uVar20 + -0x10 ), false);
      }

   }

   local_90 = local_90 & 0xffffffff00000000;
   local_148 = 0;
   local_140 = 0;
   local_118 = "";
   auVar18._8_8_ = 0;
   auVar18._0_8_ = local_110._8_8_;
   local_110 = auVar18 << 0x40;
   String::parse_latin1((StrRange*)&local_140);
   local_138 = 0;
   local_118 = (char*)CONCAT44(local_118._4_4_, 4);
   local_100 = 0;
   local_f8 = 0;
   local_110 = (undefined1[16])0x0;
   if (local_140 == 0) {
      LAB_001050eb:local_f0 = 6;
      StringName::operator =(local_188, (StringName*)&local_148);
   }
 else {
      CowData<char32_t>::_ref(local_178, (CowData*)&local_140);
      local_f0 = 6;
      if (local_100 != 0x11) goto LAB_001050eb;
      StringName::StringName((StringName*)&local_130, (String*)local_178, false);
      if (local_110._8_8_ == local_130) {
         if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_110._8_8_ = local_130;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   if (( StringName::configured != '\0' ) && ( local_148 != 0 )) {
      StringName::unref();
   }

   if (local_a8[0] == (undefined1(*) [16])0x0) {
      local_a8[0] = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)local_a8[0][1] = 0;
      *local_a8[0] = (undefined1[16])0x0;
   }

   puVar21 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar21 + 8 ) = 0;
   *(undefined1(*) [16])( puVar21 + 2 ) = (undefined1[16])0x0;
   *puVar21 = 0;
   puVar21[6] = 0;
   puVar21[10] = 6;
   *(undefined8*)( puVar21 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar21 + 0xc ) = (undefined1[16])0x0;
   *puVar21 = local_118._0_4_;
   if (local_110._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar21 + 2 ), (CowData*)local_110);
   }

   StringName::operator =((StringName*)( puVar21 + 4 ), local_188);
   puVar21[6] = local_100;
   if (*(long*)( puVar21 + 8 ) != local_f8) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar21 + 8 ), (CowData*)local_178);
   }

   lVar22 = local_f8;
   puVar21[10] = local_f0;
   lVar1 = *(long*)( *local_a8[0] + 8 );
   *(undefined8*)( puVar21 + 0xc ) = 0;
   *(undefined1(**) [16])( puVar21 + 0x10 ) = local_a8[0];
   *(long*)( puVar21 + 0xe ) = lVar1;
   if (lVar1 != 0) {
      *(undefined4**)( lVar1 + 0x30 ) = puVar21;
   }

   lVar1 = *(long*)*local_a8[0];
   *(undefined4**)( *local_a8[0] + 8 ) = puVar21;
   if (lVar1 == 0) {
      *(undefined4**)*local_a8[0] = puVar21;
   }

   *(int*)local_a8[0][1] = *(int*)local_a8[0][1] + 1;
   if (local_f8 != 0) {
      LOCK();
      plVar23 = (long*)( local_f8 + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         local_f8 = 0;
         Memory::free_static((void*)( lVar22 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_110._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar20 = local_110._0_8_;
   if (local_110._0_8_ != 0) {
      LOCK();
      plVar23 = (long*)( local_110._0_8_ + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         auVar12._8_8_ = 0;
         auVar12._0_8_ = local_110._8_8_;
         local_110 = auVar12 << 0x40;
         Memory::free_static((void*)( uVar20 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_88, 0);
   local_118 = "MovieWriter";
   local_130 = 0;
   local_110._0_8_ = 0xb;
   String::parse_latin1((StrRange*)&local_130);
   StringName::StringName((StringName*)&local_118, (String*)&local_130, false);
   ClassDB::add_virtual_method((StringName*)&local_118, (MethodInfo*)&local_e8, true, (Vector*)&local_128, false);
   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   MethodInfo::~MethodInfo((MethodInfo*)&local_e8);
   CowData<String>::_unref((CowData<String>*)&local_120);
   local_e8 = "movie_size";
   local_120 = 0;
   local_118 = (char*)0x0;
   local_e0 = 10;
   String::parse_latin1((StrRange*)&local_118);
   local_e8 = (char*)0x0;
   plVar23 = (long*)( (long)local_118 + -0x10 );
   if (local_118 != (char*)0x0) {
      do {
         lVar1 = *plVar23;
         if (lVar1 == 0) goto LAB_0010539d;
         LOCK();
         lVar22 = *plVar23;
         bVar24 = lVar1 == lVar22;
         if (bVar24) {
            *plVar23 = lVar1 + 1;
            lVar22 = lVar1;
         }

         UNLOCK();
      }
 while ( !bVar24 );
      if (lVar22 != -1) {
         local_e8 = local_118;
      }

   }

   LAB_0010539d:Vector<String>::push_back((Vector<String>*)&local_128, (StrRange*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   local_e8 = "fps";
   local_138 = 0;
   local_e0 = 3;
   String::parse_latin1((StrRange*)&local_138);
   local_e8 = (char*)0x0;
   plVar23 = (long*)( local_138 + -0x10 );
   if (local_138 != 0) {
      do {
         lVar1 = *plVar23;
         if (lVar1 == 0) goto LAB_00105421;
         LOCK();
         lVar22 = *plVar23;
         bVar24 = lVar1 == lVar22;
         if (bVar24) {
            *plVar23 = lVar1 + 1;
            lVar22 = lVar1;
         }

         UNLOCK();
      }
 while ( !bVar24 );
      if (lVar22 != -1) {
         local_e8 = (char*)local_138;
      }

   }

   LAB_00105421:Vector<String>::push_back((Vector<String>*)&local_128, (StrRange*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   local_e8 = "base_path";
   local_130 = 0;
   local_e0 = 9;
   String::parse_latin1((StrRange*)&local_130);
   local_e8 = (char*)0x0;
   plVar23 = (long*)( local_130 + -0x10 );
   if (local_130 != 0) {
      do {
         lVar1 = *plVar23;
         if (lVar1 == 0) goto LAB_001054a5;
         LOCK();
         lVar22 = *plVar23;
         bVar24 = lVar1 == lVar22;
         if (bVar24) {
            *plVar23 = lVar1 + 1;
            lVar22 = lVar1;
         }

         UNLOCK();
      }
 while ( !bVar24 );
      if (lVar22 != -1) {
         local_e8 = (char*)local_130;
      }

   }

   LAB_001054a5:Vector<String>::push_back((Vector<String>*)&local_128, (StrRange*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   local_d8._0_8_ = 0;
   local_d8._8_8_ = 0;
   local_118 = "_write_begin";
   local_e8 = (char*)0x0;
   local_e0 = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b8 = 6;
   local_b0 = 1;
   local_a8[0] = (undefined1(*) [16])0x0;
   local_98 = 0;
   local_90 = 0;
   local_80 = 0;
   local_110._0_8_ = 0xc;
   String::parse_latin1((StrRange*)&local_e8);
   local_b0 = CONCAT44(local_b0._4_4_, 0x88);
   GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)&local_118);
   local_e0 = CONCAT44(local_e0._4_4_, local_118._0_4_);
   if (local_d8._0_8_ != local_110._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_d8);
      local_d8._0_8_ = local_110._0_8_;
      local_110._0_8_ = 0;
   }

   if (local_d8._8_8_ != local_110._8_8_) {
      StringName::unref();
      local_d8._8_8_ = local_110._8_8_;
      local_110._8_8_ = 0;
   }

   lVar1 = local_f8;
   local_c8 = CONCAT44(local_c8._4_4_, local_100);
   if (local_c0 == local_f8) {
      local_b8 = CONCAT44(local_b8._4_4_, local_f0);
      if (local_f8 != 0) {
         LOCK();
         plVar23 = (long*)( local_f8 + -0x10 );
         *plVar23 = *plVar23 + -1;
         UNLOCK();
         if (*plVar23 == 0) {
            local_f8 = 0;
            Memory::free_static((void*)( lVar1 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
      local_c0 = local_f8;
      local_b8 = CONCAT44(local_b8._4_4_, local_f0);
   }

   if (( StringName::configured != '\0' ) && ( local_110._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar20 = local_110._0_8_;
   if (local_110._0_8_ != 0) {
      LOCK();
      plVar23 = (long*)( local_110._0_8_ + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         local_110._0_8_ = 0;
         Memory::free_static((void*)( uVar20 + -0x10 ), false);
      }

   }

   local_90 = local_90 & 0xffffffff00000000;
   local_148 = 0;
   local_140 = 0;
   local_118 = "";
   auVar19._8_8_ = 0;
   auVar19._0_8_ = local_110._8_8_;
   local_110 = auVar19 << 0x40;
   String::parse_latin1((StrRange*)&local_140);
   local_138 = 0;
   local_118 = (char*)CONCAT44(local_118._4_4_, 6);
   local_100 = 0;
   local_f8 = 0;
   local_110 = (undefined1[16])0x0;
   if (local_140 == 0) {
      LAB_0010578b:local_f0 = 6;
      StringName::operator =(local_188, (StringName*)&local_148);
   }
 else {
      CowData<char32_t>::_ref(local_178, (CowData*)&local_140);
      local_f0 = 6;
      if (local_100 != 0x11) goto LAB_0010578b;
      StringName::StringName((StringName*)&local_130, (String*)local_178, false);
      if (local_110._8_8_ == local_130) {
         if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_110._8_8_ = local_130;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   if (( StringName::configured != '\0' ) && ( local_148 != 0 )) {
      StringName::unref();
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_a8, (PropertyInfo*)&local_118);
   lVar1 = local_f8;
   if (local_f8 != 0) {
      LOCK();
      plVar23 = (long*)( local_f8 + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         local_f8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_110._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar20 = local_110._0_8_;
   if (local_110._0_8_ != 0) {
      LOCK();
      plVar23 = (long*)( local_110._0_8_ + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         auVar11._8_8_ = 0;
         auVar11._0_8_ = local_110._8_8_;
         local_110 = auVar11 << 0x40;
         Memory::free_static((void*)( uVar20 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_88, 0);
   local_148 = 0;
   local_140 = 0;
   local_118 = "";
   auVar6._8_8_ = 0;
   auVar6._0_8_ = local_110._8_8_;
   local_110 = auVar6 << 0x40;
   String::parse_latin1((StrRange*)&local_140);
   local_138 = 0;
   local_118 = (char*)CONCAT44(local_118._4_4_, 2);
   local_100 = 0;
   local_f8 = 0;
   local_110 = (undefined1[16])0x0;
   if (local_140 == 0) {
      LAB_0010591b:local_f0 = 6;
      StringName::operator =(local_188, (StringName*)&local_148);
   }
 else {
      CowData<char32_t>::_ref(local_178, (CowData*)&local_140);
      local_f0 = 6;
      if (local_100 != 0x11) goto LAB_0010591b;
      StringName::StringName((StringName*)&local_130, (String*)local_178, false);
      if (local_110._8_8_ == local_130) {
         if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_110._8_8_ = local_130;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   if (( StringName::configured != '\0' ) && ( local_148 != 0 )) {
      StringName::unref();
   }

   if (local_a8[0] == (undefined1(*) [16])0x0) {
      local_a8[0] = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)local_a8[0][1] = 0;
      *local_a8[0] = (undefined1[16])0x0;
   }

   puVar21 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar21 + 8 ) = 0;
   *(undefined1(*) [16])( puVar21 + 2 ) = (undefined1[16])0x0;
   *puVar21 = 0;
   puVar21[6] = 0;
   puVar21[10] = 6;
   *(undefined8*)( puVar21 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar21 + 0xc ) = (undefined1[16])0x0;
   *puVar21 = local_118._0_4_;
   if (local_110._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar21 + 2 ), (CowData*)local_110);
   }

   StringName::operator =((StringName*)( puVar21 + 4 ), local_188);
   puVar21[6] = local_100;
   if (*(long*)( puVar21 + 8 ) != local_f8) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar21 + 8 ), (CowData*)local_178);
   }

   lVar22 = local_f8;
   puVar21[10] = local_f0;
   lVar1 = *(long*)( *local_a8[0] + 8 );
   *(undefined8*)( puVar21 + 0xc ) = 0;
   *(undefined1(**) [16])( puVar21 + 0x10 ) = local_a8[0];
   *(long*)( puVar21 + 0xe ) = lVar1;
   if (lVar1 != 0) {
      *(undefined4**)( lVar1 + 0x30 ) = puVar21;
   }

   lVar1 = *(long*)*local_a8[0];
   *(undefined4**)( *local_a8[0] + 8 ) = puVar21;
   if (lVar1 == 0) {
      *(undefined4**)*local_a8[0] = puVar21;
   }

   *(int*)local_a8[0][1] = *(int*)local_a8[0][1] + 1;
   if (local_f8 != 0) {
      LOCK();
      plVar23 = (long*)( local_f8 + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         local_f8 = 0;
         Memory::free_static((void*)( lVar22 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_110._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar20 = local_110._0_8_;
   if (local_110._0_8_ != 0) {
      LOCK();
      plVar23 = (long*)( local_110._0_8_ + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         auVar8._8_8_ = 0;
         auVar8._0_8_ = local_110._8_8_;
         local_110 = auVar8 << 0x40;
         Memory::free_static((void*)( uVar20 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_88, 7);
   local_148 = 0;
   local_140 = 0;
   local_118 = "";
   auVar7._8_8_ = 0;
   auVar7._0_8_ = local_110._8_8_;
   local_110 = auVar7 << 0x40;
   String::parse_latin1((StrRange*)&local_140);
   local_138 = 0;
   local_118 = (char*)CONCAT44(local_118._4_4_, 4);
   local_100 = 0;
   local_f8 = 0;
   local_110 = (undefined1[16])0x0;
   if (local_140 == 0) {
      LAB_00105b9b:local_f0 = 6;
      StringName::operator =(local_188, (StringName*)&local_148);
   }
 else {
      CowData<char32_t>::_ref(local_178, (CowData*)&local_140);
      local_f0 = 6;
      if (local_100 != 0x11) goto LAB_00105b9b;
      StringName::StringName((StringName*)&local_130, (String*)local_178, false);
      if (local_110._8_8_ == local_130) {
         if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_110._8_8_ = local_130;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   if (( StringName::configured != '\0' ) && ( local_148 != 0 )) {
      StringName::unref();
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_a8, (PropertyInfo*)&local_118);
   lVar1 = local_f8;
   if (local_f8 != 0) {
      LOCK();
      plVar23 = (long*)( local_f8 + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         local_f8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_110._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar20 = local_110._0_8_;
   if (local_110._0_8_ != 0) {
      LOCK();
      plVar23 = (long*)( local_110._0_8_ + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         auVar9._8_8_ = 0;
         auVar9._0_8_ = local_110._8_8_;
         local_110 = auVar9 << 0x40;
         Memory::free_static((void*)( uVar20 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_88, 0);
   local_118 = "MovieWriter";
   local_130 = 0;
   local_110._0_8_ = 0xb;
   String::parse_latin1((StrRange*)&local_130);
   StringName::StringName((StringName*)&local_118, (String*)&local_130, false);
   ClassDB::add_virtual_method((StringName*)&local_118, (MethodInfo*)&local_e8, true, (Vector*)&local_128, false);
   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   MethodInfo::~MethodInfo((MethodInfo*)&local_e8);
   CowData<String>::_unref((CowData<String>*)&local_120);
   local_e8 = "frame_image";
   local_120 = 0;
   local_118 = (char*)0x0;
   local_e0 = 0xb;
   String::parse_latin1((StrRange*)&local_118);
   local_e8 = (char*)0x0;
   plVar23 = (long*)( (long)local_118 + -0x10 );
   if (local_118 != (char*)0x0) {
      do {
         lVar1 = *plVar23;
         if (lVar1 == 0) goto LAB_00105d49;
         LOCK();
         lVar22 = *plVar23;
         bVar24 = lVar1 == lVar22;
         if (bVar24) {
            *plVar23 = lVar1 + 1;
            lVar22 = lVar1;
         }

         UNLOCK();
      }
 while ( !bVar24 );
      if (lVar22 != -1) {
         local_e8 = local_118;
      }

   }

   LAB_00105d49:Vector<String>::push_back((Vector<String>*)&local_128, (StrRange*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   local_e8 = "audio_frame_block";
   local_130 = 0;
   local_e0 = 0x11;
   String::parse_latin1((StrRange*)&local_130);
   local_e8 = (char*)0x0;
   plVar23 = (long*)( local_130 + -0x10 );
   if (local_130 != 0) {
      do {
         lVar1 = *plVar23;
         if (lVar1 == 0) goto LAB_00105dcd;
         LOCK();
         lVar22 = *plVar23;
         bVar24 = lVar1 == lVar22;
         if (bVar24) {
            *plVar23 = lVar1 + 1;
            lVar22 = lVar1;
         }

         UNLOCK();
      }
 while ( !bVar24 );
      if (lVar22 != -1) {
         local_e8 = (char*)local_130;
      }

   }

   LAB_00105dcd:Vector<String>::push_back((Vector<String>*)&local_128, (StrRange*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   local_d8._0_8_ = 0;
   local_d8._8_8_ = 0;
   local_118 = "_write_frame";
   local_e8 = (char*)0x0;
   local_e0 = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b8 = 6;
   local_b0 = 1;
   local_a8[0] = (undefined1(*) [16])0x0;
   local_98 = 0;
   local_90 = 0;
   local_80 = 0;
   local_110._0_8_ = 0xc;
   String::parse_latin1((StrRange*)&local_e8);
   local_b0 = CONCAT44(local_b0._4_4_, 0x88);
   GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)&local_118);
   local_e0 = CONCAT44(local_e0._4_4_, local_118._0_4_);
   if (local_d8._0_8_ != local_110._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_d8);
      local_d8._0_8_ = local_110._0_8_;
      local_110._0_8_ = 0;
   }

   if (local_d8._8_8_ != local_110._8_8_) {
      StringName::unref();
      local_d8._8_8_ = local_110._8_8_;
      local_110._8_8_ = 0;
   }

   lVar1 = local_f8;
   local_c8 = CONCAT44(local_c8._4_4_, local_100);
   if (local_c0 == local_f8) {
      local_b8 = CONCAT44(local_b8._4_4_, local_f0);
      if (local_f8 != 0) {
         LOCK();
         plVar23 = (long*)( local_f8 + -0x10 );
         *plVar23 = *plVar23 + -1;
         UNLOCK();
         if (*plVar23 == 0) {
            local_f8 = 0;
            Memory::free_static((void*)( lVar1 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
      local_c0 = local_f8;
      local_b8 = CONCAT44(local_b8._4_4_, local_f0);
   }

   if (( StringName::configured != '\0' ) && ( local_110._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar20 = local_110._0_8_;
   if (local_110._0_8_ != 0) {
      LOCK();
      plVar23 = (long*)( local_110._0_8_ + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         local_110._0_8_ = 0;
         Memory::free_static((void*)( uVar20 + -0x10 ), false);
      }

   }

   local_90 = local_90 & 0xffffffff00000000;
   local_148 = 0;
   local_140 = 0;
   local_118 = "Image";
   local_110._0_8_ = 5;
   String::parse_latin1((StrRange*)&local_140);
   local_138 = 0;
   local_118 = (char*)CONCAT44(local_118._4_4_, 0x18);
   local_100 = 0x11;
   local_f8 = 0;
   local_110 = (undefined1[16])0x0;
   if (local_140 == 0) {
      LAB_00107333:local_f0 = 6;
      StringName::StringName((StringName*)&local_130, (String*)local_178, false);
      if (local_110._8_8_ == local_130) {
         if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_110._8_8_ = local_130;
      }

   }
 else {
      CowData<char32_t>::_ref(local_178, (CowData*)&local_140);
      local_f0 = 6;
      if (local_100 == 0x11) goto LAB_00107333;
      StringName::operator =(local_188, (StringName*)&local_148);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   if (( StringName::configured != '\0' ) && ( local_148 != 0 )) {
      StringName::unref();
   }

   if (local_a8[0] == (undefined1(*) [16])0x0) {
      local_a8[0] = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)local_a8[0][1] = 0;
      *local_a8[0] = (undefined1[16])0x0;
   }

   puVar21 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar21 + 8 ) = 0;
   *(undefined1(*) [16])( puVar21 + 2 ) = (undefined1[16])0x0;
   *puVar21 = 0;
   puVar21[6] = 0;
   puVar21[10] = 6;
   *(undefined8*)( puVar21 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar21 + 0xc ) = (undefined1[16])0x0;
   *puVar21 = local_118._0_4_;
   if (local_110._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar21 + 2 ), (CowData*)local_110);
   }

   StringName::operator =((StringName*)( puVar21 + 4 ), local_188);
   puVar21[6] = local_100;
   if (*(long*)( puVar21 + 8 ) != local_f8) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar21 + 8 ), (CowData*)local_178);
   }

   lVar22 = local_f8;
   puVar21[10] = local_f0;
   lVar1 = *(long*)( *local_a8[0] + 8 );
   *(undefined8*)( puVar21 + 0xc ) = 0;
   *(undefined1(**) [16])( puVar21 + 0x10 ) = local_a8[0];
   *(long*)( puVar21 + 0xe ) = lVar1;
   if (lVar1 != 0) {
      *(undefined4**)( lVar1 + 0x30 ) = puVar21;
   }

   lVar1 = *(long*)*local_a8[0];
   *(undefined4**)( *local_a8[0] + 8 ) = puVar21;
   if (lVar1 == 0) {
      *(undefined4**)*local_a8[0] = puVar21;
   }

   *(int*)local_a8[0][1] = *(int*)local_a8[0][1] + 1;
   if (local_f8 != 0) {
      LOCK();
      plVar23 = (long*)( local_f8 + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         local_f8 = 0;
         Memory::free_static((void*)( lVar22 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_110._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar20 = local_110._0_8_;
   if (local_110._0_8_ != 0) {
      LOCK();
      plVar23 = (long*)( local_110._0_8_ + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         auVar14._8_8_ = 0;
         auVar14._0_8_ = local_110._8_8_;
         local_110 = auVar14 << 0x40;
         Memory::free_static((void*)( uVar20 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_88, 0);
   local_148 = 0;
   local_140 = 0;
   local_118 = "const void";
   local_110._0_8_ = 10;
   String::parse_latin1((StrRange*)&local_140);
   local_138 = 0;
   local_118 = (char*)CONCAT44(local_118._4_4_, 2);
   local_100 = 0x1e;
   local_f8 = 0;
   local_110 = (undefined1[16])0x0;
   if (local_140 == 0) {
      LAB_001062e3:local_f0 = 6;
      StringName::operator =(local_188, (StringName*)&local_148);
   }
 else {
      CowData<char32_t>::_ref(local_178, (CowData*)&local_140);
      local_f0 = 6;
      if (local_100 != 0x11) goto LAB_001062e3;
      StringName::StringName((StringName*)&local_130, (String*)local_178, false);
      if (local_110._8_8_ == local_130) {
         if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_110._8_8_ = local_130;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   if (( StringName::configured != '\0' ) && ( local_148 != 0 )) {
      StringName::unref();
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_a8, (PropertyInfo*)&local_118);
   lVar1 = local_f8;
   if (local_f8 != 0) {
      LOCK();
      plVar23 = (long*)( local_f8 + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         local_f8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_110._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar20 = local_110._0_8_;
   if (local_110._0_8_ != 0) {
      LOCK();
      plVar23 = (long*)( local_110._0_8_ + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         auVar13._8_8_ = 0;
         auVar13._0_8_ = local_110._8_8_;
         local_110 = auVar13 << 0x40;
         Memory::free_static((void*)( uVar20 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_88, 0);
   local_118 = "MovieWriter";
   local_130 = 0;
   local_110._0_8_ = 0xb;
   String::parse_latin1((StrRange*)&local_130);
   StringName::StringName((StringName*)&local_118, (String*)&local_130, false);
   ClassDB::add_virtual_method((StringName*)&local_118, (MethodInfo*)&local_e8, true, (Vector*)&local_128, false);
   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   MethodInfo::~MethodInfo((MethodInfo*)&local_e8);
   CowData<String>::_unref((CowData<String>*)&local_120);
   local_d8 = (undefined1[16])0x0;
   local_118 = "_write_end";
   local_120 = 0;
   local_e8 = (char*)0x0;
   local_e0 = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_b8 = 6;
   local_b0 = 1;
   local_a8[0] = (undefined1(*) [16])0x0;
   local_98 = 0;
   local_90 = 0;
   local_80 = 0;
   local_110._0_8_ = 10;
   String::parse_latin1((StrRange*)&local_e8);
   local_118 = "MovieWriter";
   local_b0 = CONCAT44(local_b0._4_4_, 0x88);
   local_130 = 0;
   local_110._0_8_ = 0xb;
   String::parse_latin1((StrRange*)&local_130);
   StringName::StringName((StringName*)&local_118, (String*)&local_130, false);
   ClassDB::add_virtual_method((StringName*)&local_118, (MethodInfo*)&local_e8, true, (Vector*)&local_128, false);
   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   MethodInfo::~MethodInfo((MethodInfo*)&local_e8);
   CowData<String>::_unref((CowData<String>*)&local_120);
   Variant::Variant((Variant*)&local_78, 48000);
   local_e8 = "8000,192000,1,suffix:Hz";
   local_128 = 0;
   local_130 = 0;
   local_e0 = 0x17;
   String::parse_latin1((StrRange*)&local_130);
   local_138 = 0;
   local_e8 = "editor/movie_writer/mix_rate";
   local_e0 = 0x1c;
   String::parse_latin1((StrRange*)&local_138);
   local_e8 = (char*)CONCAT44(local_e8._4_4_, 2);
   local_e0 = 0;
   if (local_138 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_e0, (CowData*)&local_138);
   }

   local_d8._0_12_ = ZEXT412(1) << 0x40;
   local_c8 = 0;
   if (local_130 == 0) {
      local_c0 = CONCAT44(local_c0._4_4_, 6);
      LAB_001066a3:StringName::operator =((StringName*)local_d8, (StringName*)&local_128);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_130);
      local_c0 = CONCAT44(local_c0._4_4_, 6);
      if (local_d8._8_4_ != 0x11) goto LAB_001066a3;
      StringName::StringName((StringName*)&local_118, (String*)&local_c8, false);
      if ((char*)local_d8._0_8_ == local_118) {
         if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_d8._0_8_ = local_118;
      }

   }

   bVar24 = SUB81((Variant*)&local_78, 0);
   _GLOBAL_DEF((PropertyInfo*)&local_58, (Variant*)&local_e8, bVar24, false, false, false);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   lVar1 = local_c8;
   if (local_c8 != 0) {
      LOCK();
      plVar23 = (long*)( local_c8 + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         local_c8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_d8._0_8_ != 0 )) {
      StringName::unref();
   }

   lVar1 = local_e0;
   if (local_e0 != 0) {
      LOCK();
      plVar23 = (long*)( local_e0 + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         local_e0 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   if (( StringName::configured != '\0' ) && ( local_128 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)&local_78, 0);
   local_e8 = "Stereo,3.1,5.1,7.1";
   local_128 = 0;
   local_130 = 0;
   local_e0 = 0x12;
   String::parse_latin1((StrRange*)&local_130);
   local_138 = 0;
   local_e8 = "editor/movie_writer/speaker_mode";
   local_e0 = 0x20;
   String::parse_latin1((StrRange*)&local_138);
   local_e8 = (char*)CONCAT44(local_e8._4_4_, 2);
   local_e0 = 0;
   if (local_138 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_e0, (CowData*)&local_138);
   }

   local_d8._0_12_ = ZEXT412(2) << 0x40;
   local_c8 = 0;
   if (local_130 == 0) {
      local_c0 = CONCAT44(local_c0._4_4_, 6);
      LAB_001068c3:StringName::operator =((StringName*)local_d8, (StringName*)&local_128);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_130);
      local_c0 = CONCAT44(local_c0._4_4_, 6);
      if (local_d8._8_4_ != 0x11) goto LAB_001068c3;
      StringName::StringName((StringName*)&local_118, (String*)&local_c8, false);
      if ((char*)local_d8._0_8_ == local_118) {
         if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_d8._0_8_ = local_118;
      }

   }

   _GLOBAL_DEF((PropertyInfo*)&local_58, (Variant*)&local_e8, bVar24, false, false, false);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   lVar1 = local_c8;
   if (local_c8 != 0) {
      LOCK();
      plVar23 = (long*)( local_c8 + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         local_c8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_d8._0_8_ != 0 )) {
      StringName::unref();
   }

   lVar1 = local_e0;
   if (local_e0 != 0) {
      LOCK();
      plVar23 = (long*)( local_e0 + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         local_e0 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   if (( StringName::configured != '\0' ) && ( local_128 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)&local_78, _LC86);
   local_e8 = "0.01,1.0,0.01";
   local_128 = 0;
   local_130 = 0;
   local_e0 = 0xd;
   String::parse_latin1((StrRange*)&local_130);
   local_138 = 0;
   local_e8 = "editor/movie_writer/mjpeg_quality";
   local_e0 = 0x21;
   String::parse_latin1((StrRange*)&local_138);
   local_e8 = (char*)CONCAT44(local_e8._4_4_, 3);
   local_e0 = 0;
   if (local_138 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_e0, (CowData*)&local_138);
   }

   local_d8._0_12_ = ZEXT412(1) << 0x40;
   local_c8 = 0;
   if (local_130 == 0) {
      local_c0 = CONCAT44(local_c0._4_4_, 6);
      LAB_00106aeb:StringName::operator =((StringName*)local_d8, (StringName*)&local_128);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_130);
      local_c0 = CONCAT44(local_c0._4_4_, 6);
      if (local_d8._8_4_ != 0x11) goto LAB_00106aeb;
      StringName::StringName((StringName*)&local_118, (String*)&local_c8, false);
      if ((char*)local_d8._0_8_ == local_118) {
         if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_d8._0_8_ = local_118;
      }

   }

   _GLOBAL_DEF((PropertyInfo*)&local_58, (Variant*)&local_e8, bVar24, false, false, false);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   lVar1 = local_c8;
   if (local_c8 != 0) {
      LOCK();
      plVar23 = (long*)( local_c8 + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         local_c8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_d8._0_8_ != 0 )) {
      StringName::unref();
   }

   lVar1 = local_e0;
   if (local_e0 != 0) {
      LOCK();
      plVar23 = (long*)( local_e0 + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         local_e0 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   if (( StringName::configured != '\0' ) && ( local_128 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)&local_78, "");
   local_118 = (char*)0x0;
   local_e8 = "editor/movie_writer/movie_file";
   local_e0 = 0x1e;
   String::parse_latin1((StrRange*)&local_118);
   _GLOBAL_DEF((String*)&local_58, (Variant*)&local_118, bVar24, false, false, true);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)&local_78, false);
   local_118 = (char*)0x0;
   local_e8 = "editor/movie_writer/disable_vsync";
   local_e0 = 0x21;
   String::parse_latin1((StrRange*)&local_118);
   _GLOBAL_DEF((String*)&local_58, (Variant*)&local_118, bVar24, false, false, true);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)&local_78, 0x3c);
   local_e8 = "1,300,1,suffix:FPS";
   local_128 = 0;
   local_130 = 0;
   local_e0 = 0x12;
   String::parse_latin1((StrRange*)&local_130);
   local_138 = 0;
   local_e8 = "editor/movie_writer/fps";
   local_e0 = 0x17;
   String::parse_latin1((StrRange*)&local_138);
   local_e8 = (char*)CONCAT44(local_e8._4_4_, 2);
   local_e0 = 0;
   if (local_138 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_e0, (CowData*)&local_138);
   }

   local_d8._0_12_ = ZEXT412(1) << 0x40;
   local_c8 = 0;
   if (local_130 == 0) {
      local_c0 = CONCAT44(local_c0._4_4_, 6);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_130);
      local_c0 = CONCAT44(local_c0._4_4_, 6);
      if (local_d8._8_4_ == 0x11) {
         StringName::StringName((StringName*)&local_118, (String*)&local_c8, false);
         if ((char*)local_d8._0_8_ == local_118) {
            if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_d8._0_8_ = local_118;
         }

         goto LAB_00106e4d;
      }

   }

   StringName::operator =((StringName*)local_d8, (StringName*)&local_128);
   LAB_00106e4d:_GLOBAL_DEF((PropertyInfo*)&local_58, (Variant*)&local_e8, bVar24, false, false, true);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   lVar1 = local_c8;
   if (local_c8 != 0) {
      LOCK();
      plVar23 = (long*)( local_c8 + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         local_c8 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_d8._0_8_ != 0 )) {
      StringName::unref();
   }

   lVar1 = local_e0;
   if (local_e0 != 0) {
      LOCK();
      plVar23 = (long*)( local_e0 + -0x10 );
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
         local_e0 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   if (( StringName::configured != '\0' ) && ( local_128 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MovieWriter::handles_file(String const&) const */bool MovieWriter::handles_file(MovieWriter *this, String *param_1) {
   char *__s;
   undefined4 uVar1;
   long lVar2;
   code *pcVar3;
   size_t sVar4;
   undefined8 uVar5;
   long lVar6;
   long *plVar7;
   long in_FS_OFFSET;
   bool bVar8;
   CowData<char32_t> *local_160;
   undefined8 local_158;
   CowData<char32_t> local_150[8];
   undefined8 local_148;
   String local_140[8];
   undefined8 local_138;
   long local_130;
   undefined8 local_128;
   long local_120[5];
   int local_f8;
   undefined4 uStack_f4;
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8;
   ulong local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   int *local_58[3];
   long local_40;
   plVar7 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar7 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, param_1);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar7 + 0x60 ) )((Variant*)local_58, plVar7, this + 0x1e0, &local_80, 1, &local_f8);
      if (local_f8 == 0) {
         bVar8 = Variant::operator_cast_to_bool((Variant*)local_58);
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00107982;
      }

      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1e8] == (MovieWriter)0x0 )) {
      local_f8 = 0;
      uStack_f4 = 0;
      local_e8 = (undefined1[16])0x0;
      uStack_f0 = 0;
      uStack_ec = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 6;
      local_c0 = 1;
      local_b8[0] = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_90 = 0;
      String::parse_latin1((String*)&local_f8, "_handles_file");
      local_c0 = CONCAT44(local_c0._4_4_, 0x8c);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_128);
      PropertyInfo::operator =((PropertyInfo*)&uStack_f0, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      local_a0 = local_a0 & 0xffffffff00000000;
      GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      Vector<int>::push_back(local_98, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar6 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x1f0 ) = 0;
      pcVar3 = *(code**)( lVar6 + 0xd8 );
      if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xd0 ) ),pcVar3 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "MovieWriter");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120[0] == 0) {
            lVar6 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') goto LAB_00107f60;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_00107f7d:lVar6 = *(long*)( this + 8 );
            pcVar3 = *(code**)( lVar6 + 200 );
            if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xc0 ) ),pcVar3 == (code*)0x0) goto LAB_00107df9;
            uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x1e0);
            *(undefined8*)( this + 0x1f0 ) = uVar5;
         }
 else {
            lVar6 = *(long*)( local_120[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') {
               LAB_00107f60:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar6 == 0) goto LAB_00107f7d;
         }

         lVar6 = *(long*)( this + 8 );
      }
 else {
         uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x1e0, uVar1);
         *(undefined8*)( this + 0x1f0 ) = uVar5;
         lVar6 = *(long*)( this + 8 );
      }

      LAB_00107df9:if (*(char*)( lVar6 + 0x29 ) != '\0') {
         plVar7 = (long*)operator_new(0x18, "");
         *plVar7 = (long)( this + 0x1f0 );
         plVar7[1] = (long)( this + 0x1e8 );
         plVar7[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar7;
      }

      this[0x1e8] = (MovieWriter)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar3 = *(code**)( this + 0x1f0 );
   if (pcVar3 == (code*)0x0) {
      if (_gdvirtual__handles_file_call(String_const & ::first_print != '\0') {
         local_128 = 0;
         local_f8 = 0x109d48;
         uStack_f4 = 0;
         uStack_f0 = 0x23;
         uStack_ec = 0;
         String::parse_latin1((StrRange*)&local_128);
         local_f8 = 0x10a039;
         uStack_f4 = 0;
         local_138 = 0;
         uStack_f0 = 0xd;
         uStack_ec = 0;
         String::parse_latin1((StrRange*)&local_138);
         local_148 = 0;
         local_f8 = 0x10ded0;
         uStack_f4 = 0;
         uStack_f0 = 2;
         uStack_ec = 0;
         String::parse_latin1((StrRange*)&local_148);
         if (*(code**)( *(long*)this + 0x48 ) == get_class) {
            if (*(long*)( this + 8 ) == 0) {
               local_158 = 0;
               local_f8 = 0x10a1f4;
               uStack_f4 = 0;
               uStack_f0 = 0xb;
               uStack_ec = 0;
               String::parse_latin1((StrRange*)&local_158);
            }
 else {
               lVar6 = *(long*)( *(long*)( this + 8 ) + 0x20 );
               if (lVar6 == 0) {
                  local_158 = 0;
               }
 else {
                  __s = *(char**)( lVar6 + 8 );
                  local_158 = 0;
                  if (__s == (char*)0x0) {
                     if (*(long*)( lVar6 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_158, (CowData*)( lVar6 + 0x10 ));
                     }

                  }
 else {
                     sVar4 = strlen(__s);
                     local_f8 = (int)__s;
                     uStack_f4 = ( undefined4 )((ulong)__s >> 0x20);
                     uStack_f0 = (undefined4)sVar4;
                     uStack_ec = ( undefined4 )(sVar4 >> 0x20);
                     String::parse_latin1((StrRange*)&local_158);
                  }

               }

            }

         }
 else {
            ( **(code**)( *(long*)this + 0x48 ) )(&local_158, this);
         }

         local_160 = (CowData<char32_t>*)&local_158;
         operator+((char *)
         local_150,(String*)"Required virtual method ";
         String::operator +(local_140, (String*)local_150);
         String::operator +((String*)&local_130, local_140);
         String::operator +((String*)&local_f8, (String*)&local_130);
         _err_print_error("_gdvirtual__handles_file_call", "servers/movie_writer/movie_writer.h", 0x45, (String*)&local_f8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_140);
         CowData<char32_t>::_unref(local_150);
         CowData<char32_t>::_unref(local_160);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
         _gdvirtual__handles_file_call(String_const&,bool&)::first_print =
         '\0';
      }

      bVar8 = false;
   }
 else {
      local_f8 = 0;
      uStack_f4 = 0;
      if (*(long*)param_1 != 0) {
         plVar7 = (long*)( *(long*)param_1 + -0x10 );
         do {
            lVar6 = *plVar7;
            if (lVar6 == 0) goto LAB_001079e6;
            LOCK();
            lVar2 = *plVar7;
            bVar8 = lVar6 == lVar2;
            if (bVar8) {
               *plVar7 = lVar6 + 1;
               lVar2 = lVar6;
            }

            UNLOCK();
         }
 while ( !bVar8 );
         if (lVar2 != -1) {
            local_f8 = (int)*(undefined8*)param_1;
            uStack_f4 = ( undefined4 )(( ulong ) * (undefined8*)param_1 >> 0x20);
         }

         LAB_001079e6:pcVar3 = *(code**)( this + 0x1f0 );
      }

      local_58[0] = &local_f8;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar3 )(*(undefined8*)( this + 0x10 ), local_58, &local_128);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1e0, pcVar3, local_58, &local_128);
      }

      bVar8 = local_128._0_1_ != (StrRange)0x0;
      if (CONCAT44(uStack_f4, local_f8) != 0) {
         LOCK();
         plVar7 = (long*)( CONCAT44(uStack_f4, local_f8) + -0x10 );
         *plVar7 = *plVar7 + -1;
         UNLOCK();
         if (*plVar7 == 0) {
            lVar6 = CONCAT44(uStack_f4, local_f8);
            local_f8 = 0;
            uStack_f4 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

   }

   LAB_00107982:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar8;
}
/* MovieWriter::write_frame(Ref<Image> const&, int const*) */ulong MovieWriter::write_frame(MovieWriter *this, Ref *param_1, int *param_2) {
   char *__s;
   char cVar1;
   undefined4 uVar2;
   code *pcVar3;
   size_t sVar4;
   undefined8 uVar5;
   long lVar6;
   long *plVar7;
   ulong uVar8;
   long in_FS_OFFSET;
   CowData<char32_t> *local_180;
   undefined8 local_178;
   CowData<char32_t> local_170[8];
   undefined8 local_168;
   String local_160[8];
   undefined8 local_158;
   Image *local_150;
   int *local_148;
   long local_140[5];
   uint local_118;
   undefined4 uStack_114;
   undefined4 uStack_110;
   undefined4 uStack_10c;
   undefined1 local_108[16];
   undefined8 local_f8;
   undefined8 local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined8 local_d8[2];
   undefined8 local_c8;
   ulong local_c0;
   Vector<int> local_b8[8];
   undefined8 local_b0;
   Variant *local_a8;
   Variant *pVStack_a0;
   int local_98[8];
   Image **local_78;
   int **ppiStack_70;
   int local_60[8];
   long local_40;
   plVar7 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar7 != (long*)0x0) {
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      Variant::Variant((Variant*)&local_78, *(Object**)param_1);
      Variant::Variant((Variant*)local_60, (ulong)param_2);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar7 + 0x60 ) )((Variant*)local_98, plVar7, this + 0x228, &local_a8, 2, &local_118);
      if (local_118 == 0) {
         uVar8 = Variant::operator_cast_to_long((Variant*)local_98);
         uVar8 = uVar8 & 0xffffffff;
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00108161;
      }

      if (Variant::needs_deinit[local_98[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_60[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x230] == (MovieWriter)0x0 )) {
      local_118 = 0;
      uStack_114 = 0;
      local_108 = (undefined1[16])0x0;
      uStack_110 = 0;
      uStack_10c = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 6;
      local_e0 = 1;
      local_d8[0] = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b0 = 0;
      String::parse_latin1((String*)&local_118, "_write_frame");
      local_e0 = CONCAT44(local_e0._4_4_, 0x88);
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)&local_148);
      PropertyInfo::operator =((PropertyInfo*)&uStack_110, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      local_c0 = local_c0 & 0xffffffff00000000;
      GetTypeInfo<Ref<Image>const&,void>::get_class_info((GetTypeInfo<Ref<Image>const&,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      GetTypeInfo<GDExtensionConstPtr<int>,void>::get_class_info((GetTypeInfo<GDExtensionConstPtr<int>,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      uVar2 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( this + 0x238 ) = 0;
      lVar6 = *(long*)( this + 8 );
      pcVar3 = *(code**)( lVar6 + 0xd8 );
      if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xd0 ) ),pcVar3 == (code*)0x0) {
         local_158 = 0;
         String::parse_latin1((String*)&local_158, "MovieWriter");
         StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, (StringName*)&local_150);
         if (local_140[0] == 0) {
            lVar6 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') goto LAB_001087a9;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            LAB_001087c8:lVar6 = *(long*)( this + 8 );
            pcVar3 = *(code**)( lVar6 + 200 );
            if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xc0 ) ),pcVar3 == (code*)0x0) goto LAB_00108629;
            uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x228);
            *(undefined8*)( this + 0x238 ) = uVar5;
         }
 else {
            lVar6 = *(long*)( local_140[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') {
               LAB_001087a9:if (local_150 != (Image*)0x0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            if (lVar6 == 0) goto LAB_001087c8;
         }

         lVar6 = *(long*)( this + 8 );
      }
 else {
         uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x228, uVar2);
         *(undefined8*)( this + 0x238 ) = uVar5;
         lVar6 = *(long*)( this + 8 );
      }

      LAB_00108629:if (*(char*)( lVar6 + 0x29 ) != '\0') {
         plVar7 = (long*)operator_new(0x18, "");
         *plVar7 = (long)( this + 0x238 );
         plVar7[1] = (long)( this + 0x230 );
         plVar7[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar7;
      }

      this[0x230] = (MovieWriter)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   }

   pcVar3 = *(code**)( this + 0x238 );
   if (pcVar3 == (code*)0x0) {
      if (_gdvirtual__write_frame_call(Ref < Image > const & GDExtensionConstPtr<int>, Error & ::first_print != '\0') {
         local_148 = (int*)0x0;
         uStack_110 = 0x23;
         uStack_10c = 0;
         local_118 = 0x109d48;
         uStack_114 = 0;
         String::parse_latin1((StrRange*)&local_148);
         local_118 = 0x10a08b;
         uStack_114 = 0;
         local_158 = 0;
         uStack_110 = 0xc;
         uStack_10c = 0;
         String::parse_latin1((StrRange*)&local_158);
         local_118 = 0x10ded0;
         uStack_114 = 0;
         local_168 = 0;
         uStack_110 = 2;
         uStack_10c = 0;
         String::parse_latin1((StrRange*)&local_168);
         if (*(code**)( *(long*)this + 0x48 ) == get_class) {
            if (*(long*)( this + 8 ) == 0) {
               local_178 = 0;
               local_118 = 0x10a1f4;
               uStack_114 = 0;
               uStack_110 = 0xb;
               uStack_10c = 0;
               String::parse_latin1((StrRange*)&local_178);
            }
 else {
               lVar6 = *(long*)( *(long*)( this + 8 ) + 0x20 );
               if (lVar6 == 0) {
                  local_178 = 0;
               }
 else {
                  __s = *(char**)( lVar6 + 8 );
                  local_178 = 0;
                  if (__s == (char*)0x0) {
                     if (*(long*)( lVar6 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_178, (CowData*)( lVar6 + 0x10 ));
                     }

                  }
 else {
                     sVar4 = strlen(__s);
                     local_118 = (uint)__s;
                     uStack_114 = ( undefined4 )((ulong)__s >> 0x20);
                     uStack_110 = (undefined4)sVar4;
                     uStack_10c = ( undefined4 )(sVar4 >> 0x20);
                     String::parse_latin1((StrRange*)&local_178);
                  }

               }

            }

         }
 else {
            ( **(code**)( *(long*)this + 0x48 ) )(&local_178, this);
         }

         local_180 = (CowData<char32_t>*)&local_178;
         operator+((char *)
         local_170,(String*)"Required virtual method ";
         String::operator +(local_160, (String*)local_170);
         String::operator +((String*)&local_150, local_160);
         String::operator +((String*)&local_118, (String*)&local_150);
         _err_print_error("_gdvirtual__write_frame_call", "servers/movie_writer/movie_writer.h", 0x49, (String*)&local_118, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_160);
         CowData<char32_t>::_unref(local_170);
         CowData<char32_t>::_unref(local_180);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
         _gdvirtual__write_frame_call(Ref<Image>const&,GDExtensionConstPtr<int>,Error&)::first_print =
         '\0';
      }

      uVar8 = 3;
   }
 else {
      local_150 = (Image*)0x0;
      if (*(Image**)param_1 != (Image*)0x0) {
         local_150 = *(Image**)param_1;
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            local_150 = (Image*)0x0;
         }

         pcVar3 = *(code**)( this + 0x238 );
      }

      ppiStack_70 = &local_148;
      local_78 = &local_150;
      local_148 = param_2;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar3 )(*(undefined8*)( this + 0x10 ), &local_78, &local_118);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x228, pcVar3, &local_78, &local_118);
      }

      uVar8 = (ulong)local_118;
      if (( local_150 != (Image*)0x0 ) && ( cVar1 = RefCounted::unreference() ),cVar1 != '\0') {
         memdelete<Image>(local_150);
      }

   }

   LAB_00108161:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar8;
}
/* MovieWriter::write_begin(Vector2i const&, unsigned int, String const&) */ulong MovieWriter::write_begin(MovieWriter *this, Vector2i *param_1, uint param_2, String *param_3) {
   Variant *pVVar1;
   char *__s;
   undefined4 uVar2;
   long lVar3;
   code *pcVar4;
   size_t sVar5;
   undefined8 uVar6;
   long lVar7;
   long *plVar8;
   Variant *pVVar9;
   ulong uVar10;
   long in_FS_OFFSET;
   bool bVar11;
   CowData<char32_t> *local_1a8;
   undefined8 local_198;
   CowData<char32_t> local_190[8];
   undefined8 local_188;
   String local_180[8];
   undefined8 local_178;
   ulong local_170;
   undefined8 local_168;
   long local_160[5];
   uint local_138;
   undefined4 uStack_134;
   undefined4 uStack_130;
   undefined4 uStack_12c;
   undefined1 local_128[16];
   undefined8 local_118;
   undefined8 local_110;
   undefined8 local_108;
   undefined8 local_100;
   undefined8 local_f8[2];
   undefined8 local_e8;
   ulong local_e0;
   Vector<int> local_d8[8];
   undefined8 local_d0;
   Variant *local_c8;
   Variant *pVStack_c0;
   Variant *local_b8;
   undefined8 local_a8[4];
   undefined8 *local_88;
   ulong *puStack_80;
   CowData<char32_t> *local_78;
   Variant local_70[24];
   Variant local_58[24];
   long local_40[2];
   plVar8 = *(long**)( this + 0x98 );
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar8 != (long*)0x0) {
      local_138 = 0;
      uStack_134 = 0;
      uStack_130 = 0;
      Variant::Variant((Variant*)&local_88, param_1);
      Variant::Variant(local_70, param_2);
      Variant::Variant(local_58, param_3);
      local_c8 = (Variant*)&local_88;
      pVStack_c0 = local_70;
      local_b8 = local_58;
      ( **(code**)( *plVar8 + 0x60 ) )((Variant*)local_a8, plVar8, this + 0x210, &local_c8, 3, &local_138);
      if (local_138 == 0) {
         uVar10 = Variant::operator_cast_to_long((Variant*)local_a8);
         uVar10 = uVar10 & 0xffffffff;
         if (Variant::needs_deinit[(int)local_a8[0]] != '\0') {
            Variant::_clear_internal();
         }

         pVVar9 = (Variant*)local_40;
         do {
            pVVar1 = pVVar9 + -0x18;
            pVVar9 = pVVar9 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar9 != (Variant*)&local_88 );
         goto LAB_001089df;
      }

      if (Variant::needs_deinit[(int)local_a8[0]] != '\0') {
         Variant::_clear_internal();
      }

      pVVar9 = (Variant*)local_40;
      do {
         pVVar1 = pVVar9 + -0x18;
         pVVar9 = pVVar9 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar9 != (Variant*)&local_88 );
   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x218] == (MovieWriter)0x0 )) {
      local_128 = (undefined1[16])0x0;
      local_138 = 0;
      uStack_134 = 0;
      uStack_130 = 0;
      uStack_12c = 0;
      local_118 = 0;
      local_110 = 0;
      local_108 = 6;
      local_100 = 1;
      local_f8[0] = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d0 = 0;
      String::parse_latin1((String*)&local_138, "_write_begin");
      local_100 = CONCAT44(local_100._4_4_, 0x88);
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)&local_168);
      PropertyInfo::operator =((PropertyInfo*)&uStack_130, (PropertyInfo*)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
      local_e0 = local_e0 & 0xffffffff00000000;
      GetTypeInfo<Vector2i_const&,void>::get_class_info((GetTypeInfo<Vector2i_const&,void>*)&local_168);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_f8, (PropertyInfo*)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
      Vector<int>::push_back(local_d8, 0);
      GetTypeInfo<unsigned_int,void>::get_class_info((GetTypeInfo<unsigned_int,void>*)&local_168);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_f8, (PropertyInfo*)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
      Vector<int>::push_back(local_d8, 7);
      GetTypeInfo<String_const&,void>::get_class_info((GetTypeInfo<String_const&,void>*)&local_168);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_f8, (PropertyInfo*)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
      Vector<int>::push_back(local_d8, 0);
      uVar2 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( this + 0x220 ) = 0;
      lVar7 = *(long*)( this + 8 );
      pcVar4 = *(code**)( lVar7 + 0xd8 );
      if (( ( pcVar4 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar4 = *(code**)( lVar7 + 0xd0 ) ),pcVar4 == (code*)0x0) {
         local_178 = 0;
         String::parse_latin1((String*)&local_178, "MovieWriter");
         StringName::StringName((StringName*)&local_170, (String*)&local_178, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_168, (StringName*)&local_170);
         if (local_160[0] == 0) {
            lVar7 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_160);
            if (StringName::configured != '\0') goto LAB_001090b4;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
         }
 else {
            lVar7 = *(long*)( local_160[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_160);
            if (StringName::configured != '\0') {
               LAB_001090b4:if (local_170 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
            if (lVar7 != 0) {
               lVar7 = *(long*)( this + 8 );
               goto LAB_00108f25;
            }

         }

         lVar7 = *(long*)( this + 8 );
         pcVar4 = *(code**)( lVar7 + 200 );
         if (( ( pcVar4 != (code*)0x0 ) && ( *(long*)( lVar7 + 0xe0 ) != 0 ) ) || ( pcVar4 = *(code**)( lVar7 + 0xc0 ) ),pcVar4 != (code*)0x0) {
            uVar6 = ( *pcVar4 )(*(undefined8*)( lVar7 + 0xa0 ), this + 0x210);
            *(undefined8*)( this + 0x220 ) = uVar6;
            lVar7 = *(long*)( this + 8 );
         }

      }
 else {
         uVar6 = ( *pcVar4 )(*(undefined8*)( lVar7 + 0xa0 ), this + 0x210, uVar2);
         *(undefined8*)( this + 0x220 ) = uVar6;
         lVar7 = *(long*)( this + 8 );
      }

      LAB_00108f25:if (*(char*)( lVar7 + 0x29 ) != '\0') {
         plVar8 = (long*)operator_new(0x18, "");
         *plVar8 = (long)( this + 0x220 );
         plVar8[1] = (long)( this + 0x218 );
         plVar8[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar8;
      }

      this[0x218] = (MovieWriter)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_138);
   }

   pcVar4 = *(code**)( this + 0x220 );
   if (pcVar4 == (code*)0x0) {
      if (_gdvirtual__write_begin_call(Vector2i_const & unsigned_int, String_const & Error & ::first_print != '\0') {
         local_168 = 0;
         local_138 = 0x109d48;
         uStack_134 = 0;
         uStack_130 = 0x23;
         uStack_12c = 0;
         String::parse_latin1((StrRange*)&local_168);
         local_138 = 0x10a060;
         uStack_134 = 0;
         local_178 = 0;
         uStack_130 = 0xc;
         uStack_12c = 0;
         String::parse_latin1((StrRange*)&local_178);
         local_188 = 0;
         local_138 = 0x10ded0;
         uStack_134 = 0;
         uStack_130 = 2;
         uStack_12c = 0;
         String::parse_latin1((StrRange*)&local_188);
         if (*(code**)( *(long*)this + 0x48 ) == get_class) {
            if (*(long*)( this + 8 ) == 0) {
               local_198 = 0;
               local_138 = 0x10a1f4;
               uStack_134 = 0;
               uStack_130 = 0xb;
               uStack_12c = 0;
               String::parse_latin1((StrRange*)&local_198);
            }
 else {
               lVar7 = *(long*)( *(long*)( this + 8 ) + 0x20 );
               if (lVar7 == 0) {
                  local_198 = 0;
               }
 else {
                  __s = *(char**)( lVar7 + 8 );
                  local_198 = 0;
                  if (__s == (char*)0x0) {
                     if (*(long*)( lVar7 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_198, (CowData*)( lVar7 + 0x10 ));
                     }

                  }
 else {
                     sVar5 = strlen(__s);
                     local_138 = (uint)__s;
                     uStack_134 = ( undefined4 )((ulong)__s >> 0x20);
                     uStack_130 = (undefined4)sVar5;
                     uStack_12c = ( undefined4 )(sVar5 >> 0x20);
                     String::parse_latin1((StrRange*)&local_198);
                  }

               }

            }

         }
 else {
            ( **(code**)( *(long*)this + 0x48 ) )(&local_198, this);
         }

         local_1a8 = (CowData<char32_t>*)&local_198;
         operator+((char *)
         local_190,(String*)"Required virtual method ";
         String::operator +(local_180, (String*)local_190);
         String::operator +((String*)&local_170, local_180);
         String::operator +((String*)&local_138, (String*)&local_170);
         _err_print_error("_gdvirtual__write_begin_call", "servers/movie_writer/movie_writer.h", 0x48, (String*)&local_138, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_180);
         CowData<char32_t>::_unref(local_190);
         CowData<char32_t>::_unref(local_1a8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
         _gdvirtual__write_begin_call(Vector2i_const&,unsigned_int,String_const&,Error&)::first_print =
         '\0';
      }

      uVar10 = 3;
   }
 else {
      local_168 = 0;
      local_a8[0] = *(undefined8*)param_1;
      local_170 = (ulong)param_2;
      if (*(long*)param_3 != 0) {
         plVar8 = (long*)( *(long*)param_3 + -0x10 );
         do {
            lVar7 = *plVar8;
            if (lVar7 == 0) goto LAB_00108a5b;
            LOCK();
            lVar3 = *plVar8;
            bVar11 = lVar7 == lVar3;
            if (bVar11) {
               *plVar8 = lVar7 + 1;
               lVar3 = lVar7;
            }

            UNLOCK();
         }
 while ( !bVar11 );
         if (lVar3 != -1) {
            local_168 = *(undefined8*)param_3;
         }

         LAB_00108a5b:pcVar4 = *(code**)( this + 0x220 );
      }

      puStack_80 = &local_170;
      local_88 = local_a8;
      local_78 = (CowData<char32_t>*)&local_168;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar4 )(*(undefined8*)( this + 0x10 ), &local_88, &local_138);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x210, pcVar4, &local_88, &local_138);
      }

      uVar10 = (ulong)local_138;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   }

   LAB_001089df:if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar10;
}
/* MovieWriter::set_extensions_hint() */void MovieWriter::set_extensions_hint(void) {
   long *plVar1;
   String *this;
   long lVar2;
   char *pcVar3;
   char cVar4;
   Element *pEVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   PropertyInfo *pPVar9;
   Element *pEVar10;
   long lVar11;
   long in_FS_OFFSET;
   bool bVar12;
   long local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   Element *local_98;
   Element *local_90;
   int local_88;
   char *local_78;
   long local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = (Element*)0x0;
   local_90 = (Element*)&_GlobalNilClass::_nil;
   local_88 = 0;
   if (writer_count == 0) {
      local_b8 = 0;
   }
 else {
      lVar11 = 0;
      do {
         local_78 = (char*)0x0;
         ( **(code**)( *(long*)( &writers )[lVar11] + 0x180 ) )((long*)( &writers )[lVar11], (List<String,DefaultAllocator>*)&local_78);
         if (local_78 != (char*)0x0) {
            pEVar8 = local_98;
            for (this * (String**)local_78; local_98 = pEVar8,this != (String*)0x0; this * (String**)( this + 8 )) {
               if (pEVar8 == (Element*)0x0) {
                  pEVar8 = (Element*)operator_new(0x38, DefaultAllocator::alloc);
                  *(undefined1(*) [16])( pEVar8 + 0x20 ) = (undefined1[16])0x0;
                  *(undefined8*)( pEVar8 + 0x30 ) = 0;
                  *(undefined4*)pEVar8 = 1;
                  for (int i = 0; i < 3; i++) {
                     *(Element**)( pEVar8 + ( 8*i + 8 ) ) = local_90;
                  }

                  local_98 = pEVar8;
               }
 else {
                  pEVar5 = *(Element**)( pEVar8 + 0x10 );
                  if (*(Element**)( pEVar8 + 0x10 ) != local_90) {
                     do {
                        while (true) {
                           pEVar8 = pEVar5;
                           cVar4 = String::operator <(this, (String*)( pEVar8 + 0x30 ));
                           if (cVar4 != '\0') break;
                           cVar4 = String::operator <((String*)( pEVar8 + 0x30 ), this);
                           if (cVar4 == '\0') goto LAB_001093c6;
                           pEVar5 = *(Element**)( pEVar8 + 8 );
                           if (local_90 == *(Element**)( pEVar8 + 8 )) goto LAB_001092e2;
                        }
;
                        pEVar5 = *(Element**)( pEVar8 + 0x10 );
                     }
 while ( local_90 != *(Element**)( pEVar8 + 0x10 ) );
                  }

               }

               LAB_001092e2:pEVar5 = (Element*)operator_new(0x38, DefaultAllocator::alloc);
               *(undefined1(*) [16])( pEVar5 + 0x20 ) = (undefined1[16])0x0;
               *(undefined8*)( pEVar5 + 0x30 ) = 0;
               lVar2 = *(long*)this;
               *(undefined4*)pEVar5 = 0;
               *(Element**)( pEVar5 + 0x18 ) = pEVar8;
               *(Element**)( pEVar5 + 8 ) = local_90;
               *(Element**)( pEVar5 + 0x10 ) = local_90;
               if (lVar2 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( pEVar5 + 0x30 ), (CowData*)this);
               }

               pEVar10 = pEVar8;
               if (( local_98 == pEVar8 ) || ( cVar4 = String::operator <(this, (String*)( pEVar8 + 0x30 )) ),pEVar10 = local_98,cVar4 != '\0') {
                  *(Element**)( pEVar8 + 0x10 ) = pEVar5;
               }
 else {
                  *(Element**)( pEVar8 + 8 ) = pEVar5;
               }

               pEVar8 = *(Element**)( pEVar5 + 8 );
               pEVar7 = pEVar5;
               if (local_90 == pEVar8) {
                  do {
                     pEVar6 = *(Element**)( pEVar7 + 0x18 );
                     bVar12 = pEVar7 == *(Element**)( pEVar6 + 8 );
                     pEVar7 = pEVar6;
                  }
 while ( bVar12 );
                  if (pEVar6 == pEVar10) {
                     pEVar6 = (Element*)0x0;
                  }

               }
 else {
                  do {
                     pEVar7 = pEVar8 + 0x10;
                     pEVar6 = pEVar8;
                     pEVar8 = *(Element**)pEVar7;
                  }
 while ( local_90 != *(Element**)pEVar7 );
               }

               *(Element**)( pEVar5 + 0x20 ) = pEVar6;
               pEVar7 = *(Element**)( pEVar5 + 0x10 );
               pEVar8 = pEVar5;
               if (local_90 == *(Element**)( pEVar5 + 0x10 )) {
                  do {
                     pEVar7 = pEVar8;
                     pEVar8 = *(Element**)( pEVar7 + 0x18 );
                  }
 while ( pEVar7 == *(Element**)( pEVar8 + 0x10 ) );
                  if (pEVar7 != pEVar10) goto LAB_0010939c;
                  *(undefined8*)( pEVar5 + 0x28 ) = 0;
                  if (pEVar6 != (Element*)0x0) goto LAB_001093a5;
               }
 else {
                  do {
                     pEVar8 = pEVar7;
                     pEVar7 = *(Element**)( pEVar8 + 8 );
                  }
 while ( local_90 != *(Element**)( pEVar8 + 8 ) );
                  LAB_0010939c:*(Element**)( pEVar5 + 0x28 ) = pEVar8;
                  if (pEVar6 != (Element*)0x0) {
                     LAB_001093a5:*(Element**)( pEVar6 + 0x28 ) = pEVar5;
                     pEVar8 = *(Element**)( pEVar5 + 0x28 );
                     if (pEVar8 == (Element*)0x0) goto LAB_001093b6;
                  }

                  *(Element**)( pEVar8 + 0x20 ) = pEVar5;
               }

               LAB_001093b6:local_88 = local_88 + 1;
               RBSet<String,Comparator<String>,DefaultAllocator>::_insert_rb_fix((RBSet<String,Comparator<String>,DefaultAllocator>*)&local_98, pEVar5);
               LAB_001093c6:pEVar8 = local_98;
            }

         }

         lVar11 = lVar11 + 1;
         List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_78);
      }
 while ( (uint)lVar11 < writer_count );
      local_b8 = 0;
      if (( local_98 != (Element*)0x0 ) && ( pEVar8 = *(Element**)( local_98 + 0x10 ) * (Element**)( local_98 + 0x10 ) != local_90 )) {
         do {
            pEVar5 = pEVar8;
            pEVar8 = *(Element**)( pEVar5 + 0x10 );
         }
 while ( local_90 != *(Element**)( pEVar5 + 0x10 ) );
         do {
            cVar4 = String::operator !=((String*)&local_b8, "");
            if (cVar4 != '\0') {
               String::operator +=((String*)&local_b8, ",");
            }

            operator+((char *)&
            local_78,(String*)&_LC102;
            String::operator +=((String*)&local_b8, (String*)&local_78);
            pcVar3 = local_78;
            if (local_78 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( (long)local_78 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_78 = (char*)0x0;
                  Memory::free_static((undefined8*)( (long)pcVar3 + -0x10 ), false);
               }

            }

            pEVar5 = *(Element**)( pEVar5 + 0x20 );
         }
 while ( pEVar5 != (Element*)0x0 );
      }

   }

   pPVar9 = (PropertyInfo*)ProjectSettings::get_singleton();
   local_a8 = 0;
   local_b0 = 0;
   local_78 = "editor/movie_writer/movie_file";
   local_70 = 0x1e;
   String::parse_latin1((StrRange*)&local_b0);
   local_78 = (char*)CONCAT44(local_78._4_4_, 4);
   local_70 = 0;
   if (local_b0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_b0);
   }

   local_68 = 0;
   local_60 = 0x1c;
   local_58 = 0;
   if (local_b8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_b8);
      local_50 = 6;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_a0, (String*)&local_58, false);
         if (local_68 == local_a0) {
            if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_a0;
         }

         goto LAB_0010968b;
      }

   }

   local_50 = 6;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_a8);
   LAB_0010968b:ProjectSettings::set_custom_property_info(pPVar9);
   lVar11 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar11 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   lVar11 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar11 + -0x10 ), false);
      }

   }

   lVar11 = local_b0;
   if (local_b0 != 0) {
      LOCK();
      plVar1 = (long*)( local_b0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b0 = 0;
         Memory::free_static((void*)( lVar11 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }

   lVar11 = local_b8;
   if (local_b8 != 0) {
      LOCK();
      plVar1 = (long*)( local_b8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b8 = 0;
         Memory::free_static((void*)( lVar11 + -0x10 ), false);
      }

   }

   RBSet<String,Comparator<String>,DefaultAllocator>::~RBSet((RBSet<String,Comparator<String>,DefaultAllocator>*)&local_98);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
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
/* MovieWriter::is_class_ptr(void*) const */uint MovieWriter::is_class_ptr(MovieWriter *this, void *param_1) {
   return (uint)CONCAT71(0x10f4, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f4, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* MovieWriter::_getv(StringName const&, Variant&) const */undefined8 MovieWriter::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* MovieWriter::_setv(StringName const&, Variant const&) */undefined8 MovieWriter::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* MovieWriter::_validate_propertyv(PropertyInfo&) const */void MovieWriter::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* MovieWriter::_property_can_revertv(StringName const&) const */undefined8 MovieWriter::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* MovieWriter::_property_get_revertv(StringName const&, Variant&) const */undefined8 MovieWriter::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* MovieWriter::_notificationv(int, bool) */void MovieWriter::_notificationv(int param_1, bool param_2) {
   return;
}
/* MethodBindTS<MovieWriter*>::_gen_argument_type(int) const */byte MethodBindTS<MovieWriter*>::_gen_argument_type(MethodBindTS<MovieWriter*> *this, int param_1) {
   return -(param_1 == 0) & 0x18;
}
/* MethodBindTS<MovieWriter*>::get_argument_meta(int) const */undefined8 MethodBindTS<MovieWriter*>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTS<MovieWriter*>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTS<MovieWriter*>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   /* WARNING: Could not recover jumptable at 0x001099de. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( param_1 + 0x58 ) )(*(undefined8*)( *(long*)param_3 + 0x10 ));
   return;
}
/* MethodBindTS<MovieWriter*>::ptrcall(Object*, void const**, void*) const */void MethodBindTS<MovieWriter*>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   long *plVar1;
   /* WARNING: Load size is inaccurate */
   plVar1 = *param_3;
   if (plVar1 != (long*)0x0) {
      plVar1 = (long*)*plVar1;
   }

   /* WARNING: Could not recover jumptable at 0x00109a03. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( param_1 + 0x58 ) )(plVar1);
   return;
}
/* MethodBindTS<MovieWriter*>::~MethodBindTS() */void MethodBindTS<MovieWriter*>::~MethodBindTS(MethodBindTS<MovieWriter*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010f3e8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTS<MovieWriter*>::~MethodBindTS() */void MethodBindTS<MovieWriter*>::~MethodBindTS(MethodBindTS<MovieWriter*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010f3e8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x60);
   return;
}
/* Image::~Image() */void Image::~Image(Image *this) {
   long *plVar1;
   long lVar2;
   *(code**)this = Memory::free_static;
   if (*(long*)( this + 0x250 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x250 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x250 );
         *(undefined8*)( this + 0x250 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         Resource::~Resource((Resource*)this);
         return;
      }

   }

   Resource::~Resource((Resource*)this);
   return;
}
/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<int>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* MovieWriter::_bind_methods() [clone .cold] */void MovieWriter::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* MovieWriter::_get_class_namev() const */undefined8 *MovieWriter::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010a233:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010a233;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "MovieWriter");
         goto LAB_0010a29e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "MovieWriter");
   LAB_0010a29e:return &_get_class_namev();
}
/* MethodBindTS<MovieWriter*>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTS<MovieWriter*>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   code *pcVar2;
   undefined8 uVar3;
   char cVar4;
   undefined4 uVar5;
   Object *pOVar6;
   Object *pOVar7;
   long lVar8;
   long lVar9;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar10;
   pVVar1 = param_2[0xb];
   if (1 < in_R8D) {
      uVar5 = 3;
      LAB_0010a3cd:*in_R9 = uVar5;
      in_R9[2] = 1;
      goto LAB_0010a3d6;
   }

   pVVar10 = param_2[5];
   if (pVVar10 == (Variant*)0x0) {
      if (in_R8D != 1) goto LAB_0010a440;
      LAB_0010a3c0:pVVar10 = *(Variant**)param_4;
   }
 else {
      lVar8 = *(long*)( pVVar10 + -8 );
      if ((int)lVar8 < (int)( in_R8D ^ 1 )) {
         LAB_0010a440:uVar5 = 4;
         goto LAB_0010a3cd;
      }

      if (in_R8D == 1) goto LAB_0010a3c0;
      lVar9 = (long)( (int)lVar8 + -1 );
      if (lVar8 <= lVar9) {
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar8, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      pVVar10 = pVVar10 + lVar9 * 0x18;
   }

   *in_R9 = 0;
   cVar4 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0x18);
   if (cVar4 == '\0') {
      LAB_0010a36f:uVar3 = _LC12;
      *in_R9 = 2;
      *(undefined8*)( in_R9 + 1 ) = uVar3;
   }
 else {
      pOVar6 = Variant::operator_cast_to_Object_(pVVar10);
      pOVar7 = Variant::operator_cast_to_Object_(pVVar10);
      if (( ( pOVar7 == (Object*)0x0 ) || ( lVar8 = __dynamic_cast(pOVar7, &Object::typeinfo, &MovieWriter::typeinfo, 0) ),lVar8 == 0 )) goto LAB_0010a36f;
   }

   pOVar6 = Variant::operator_cast_to_Object_(pVVar10);
   if (pOVar6 != (Object*)0x0) {
      pOVar6 = (Object*)__dynamic_cast(pOVar6, &Object::typeinfo, &MovieWriter::typeinfo, 0);
   }

   ( *(code*)pVVar1 )(pOVar6);
   LAB_0010a3d6:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   return param_1;
}
/* MovieWriter::get_class() const */void MovieWriter::get_class(void) {
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
/* MovieWriter::~MovieWriter() */void MovieWriter::~MovieWriter(MovieWriter *this) {
   long *plVar1;
   long lVar2;
   bool bVar3;
   bVar3 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_0010f250;
   if (bVar3) {
      if (*(long*)( this + 0x240 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a667;
      }

      if (*(long*)( this + 0x228 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a667;
      }

      if (*(long*)( this + 0x210 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a667;
      }

      if (*(long*)( this + 0x1f8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a667;
      }

      if (*(long*)( this + 0x1e0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a667;
      }

      if (*(long*)( this + 0x1c8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a667;
      }

      if (*(long*)( this + 0x1b0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010a667:if (*(void**)( this + 0x1a8 ) != (void*)0x0) {
      if (*(int*)( this + 0x1a0 ) != 0) {
         *(undefined4*)( this + 0x1a0 ) = 0;
      }

      Memory::free_static(*(void**)( this + 0x1a8 ), false);
   }

   if (*(long*)( this + 0x198 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x198 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x198 );
         *(undefined8*)( this + 0x198 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         Object::~Object((Object*)this);
         return;
      }

   }

   Object::~Object((Object*)this);
   return;
}
/* MovieWriter::~MovieWriter() */void MovieWriter::~MovieWriter(MovieWriter *this) {
   ~MovieWriter(this)
   ;;
   operator_delete(this, 600);
   return;
}
/* MovieWriter::is_class(String const&) const */undefined8 MovieWriter::is_class(MovieWriter *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_0010a77f;
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

      LAB_0010a77f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010a833;
   }

   cVar6 = String::operator ==(param_1, "MovieWriter");
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
                     if (lVar5 == 0) goto LAB_0010a8e3;
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

         LAB_0010a8e3:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_0010a833;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_0010a833:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MovieWriter::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void MovieWriter::_get_property_listv(List *param_1, bool param_2) {
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
   local_78 = "MovieWriter";
   local_70 = 0xb;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "MovieWriter";
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
   if (local_90 == 0) {
      LAB_0010ab08:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010ab08;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x0010ab26;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x0010ab26:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "MovieWriter", false);
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
/* String::parse_latin1(char const*) */void String::parse_latin1(String *this, char *param_1) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != (char*)0x0) {
      strlen(param_1);
   }

   String::parse_latin1((StrRange*)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* GetTypeInfo<bool, void>::get_class_info() */GetTypeInfo<bool,void> * __thiscall
GetTypeInfo<bool,void>::get_class_info(GetTypeInfo<bool,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC10;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 1;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
         if (*(undefined**)( this + 0x10 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010afac;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010afac:local_58 = lVar2;
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
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<unsigned int, void>::get_class_info() */GetTypeInfo<unsigned_int,void> * __thiscall
GetTypeInfo<unsigned_int,void>::get_class_info(GetTypeInfo<unsigned_int,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC10;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
         if (*(undefined**)( this + 0x10 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010b12c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010b12c:local_58 = lVar2;
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
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<String const&, void>::get_class_info() */GetTypeInfo<String_const&,void> * __thiscall
GetTypeInfo<String_const&,void>::get_class_info(GetTypeInfo<String_const&,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC10;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 4;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
         if (*(undefined**)( this + 0x10 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010b2ac;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010b2ac:local_58 = lVar2;
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
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<Vector2i const&, void>::get_class_info() */GetTypeInfo<Vector2i_const&,void> * __thiscall
GetTypeInfo<Vector2i_const&,void>::get_class_info(GetTypeInfo<Vector2i_const&,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC10;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 6;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
         if (*(undefined**)( this + 0x10 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010b42c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010b42c:local_58 = lVar2;
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
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Image::~Image() */void Image::~Image(Image *this) {
   long *plVar1;
   long lVar2;
   *(code**)this = Memory::free_static;
   if (*(long*)( this + 0x250 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x250 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x250 );
         *(undefined8*)( this + 0x250 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x268);
   return;
}
/* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   long *plVar1;
   void *pvVar2;
   long lVar3;
   long lVar4;
   long *plVar5;
   plVar5 = *(long**)this;
   if (plVar5 == (long*)0x0) {
      return;
   }

   do {
      pvVar2 = (void*)*plVar5;
      if (pvVar2 == (void*)0x0) {
         if ((int)plVar5[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(long**)( (long)pvVar2 + 0x40 ) == plVar5) {
         lVar4 = *(long*)( (long)pvVar2 + 0x30 );
         lVar3 = *(long*)( (long)pvVar2 + 0x38 );
         *plVar5 = lVar4;
         if (pvVar2 == (void*)plVar5[1]) {
            plVar5[1] = lVar3;
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x30 ) = lVar4;
            lVar4 = *(long*)( (long)pvVar2 + 0x30 );
         }

         if (lVar4 != 0) {
            *(long*)( lVar4 + 0x38 ) = lVar3;
         }

         if (*(long*)( (long)pvVar2 + 0x20 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)pvVar2 + 0x20 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar4 = *(long*)( (long)pvVar2 + 0x20 );
               *(undefined8*)( (long)pvVar2 + 0x20 ) = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar2 + 0x10 ) != 0 )) {
            StringName::unref();
         }

         if (*(long*)( (long)pvVar2 + 8 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)pvVar2 + 8 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar4 = *(long*)( (long)pvVar2 + 8 );
               *(undefined8*)( (long)pvVar2 + 8 ) = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         Memory::free_static(pvVar2, false);
         *(int*)( plVar5 + 2 ) = (int)plVar5[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar5 = *(long**)this;
   }
 while ( (int)plVar5[2] != 0 );
   Memory::free_static(plVar5, false);
   return;
}
/* MethodInfo::~MethodInfo() */void MethodInfo::~MethodInfo(MethodInfo *this) {
   long *plVar1;
   int *piVar2;
   long lVar3;
   code *pcVar4;
   int *piVar5;
   long lVar6;
   if (*(long*)( this + 0x68 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x68 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x68 );
         *(undefined8*)( this + 0x68 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x50 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x50 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         piVar2 = *(int**)( this + 0x50 );
         if (piVar2 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar3 = *(long*)( piVar2 + -2 );
         *(undefined8*)( this + 0x50 ) = 0;
         if (lVar3 != 0) {
            lVar6 = 0;
            piVar5 = piVar2;
            do {
               if (Variant::needs_deinit[*piVar5] != '\0') {
                  Variant::_clear_internal();
               }

               lVar6 = lVar6 + 1;
               piVar5 = piVar5 + 6;
            }
 while ( lVar3 != lVar6 );
         }

         Memory::free_static(piVar2 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)( this + 0x40 ));
   if (*(long*)( this + 0x28 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x28 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x28 );
         *(undefined8*)( this + 0x28 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x18 ) != 0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 0x10 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x10 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x10 );
         *(undefined8*)( this + 0x10 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* List<String, DefaultAllocator>::~List() */void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   long *plVar5;
   plVar5 = *(long**)this;
   if (plVar5 == (long*)0x0) {
      return;
   }

   do {
      plVar2 = (long*)*plVar5;
      if (plVar2 == (long*)0x0) {
         if ((int)plVar5[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if ((long*)plVar2[3] == plVar5) {
         lVar4 = plVar2[1];
         lVar3 = plVar2[2];
         *plVar5 = lVar4;
         if (plVar2 == (long*)plVar5[1]) {
            plVar5[1] = lVar3;
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 8 ) = lVar4;
            lVar4 = plVar2[1];
         }

         if (lVar4 != 0) {
            *(long*)( lVar4 + 0x10 ) = lVar3;
         }

         if (*plVar2 != 0) {
            LOCK();
            plVar1 = (long*)( *plVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar4 = *plVar2;
               *plVar2 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         Memory::free_static(plVar2, false);
         *(int*)( plVar5 + 2 ) = (int)plVar5[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar5 = *(long**)this;
   }
 while ( (int)plVar5[2] != 0 );
   Memory::free_static(plVar5, false);
   return;
}
/* GetTypeInfo<Ref<Image> const&, void>::get_class_info() */GetTypeInfo<Ref<Image>const&,void> * __thiscall
GetTypeInfo<Ref<Image>const&,void>::get_class_info(GetTypeInfo<Ref<Image>const&,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = "Image";
   local_40 = 5;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 0x18;
   *(undefined4*)( this + 0x18 ) = 0x11;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) != 0x11) {
         StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
         goto LAB_0010ba60;
      }

   }

   StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
   if (*(char**)( this + 0x10 ) == local_48) {
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      *(char**)( this + 0x10 ) = local_48;
   }

   LAB_0010ba60:lVar2 = local_58;
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

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<GDExtensionConstPtr<int>, void>::get_class_info() */GetTypeInfo<GDExtensionConstPtr<int>,void> * __thiscall
GetTypeInfo<GDExtensionConstPtr<int>,void>::get_class_info
          (GetTypeInfo<GDExtensionConstPtr<int>,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = "const void";
   local_40 = 10;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0x1e;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
         if (*(char**)( this + 0x10 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(char**)( this + 0x10 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010bc8c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010bc8c:local_58 = lVar2;
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
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* WARNING: Removing unreachable block (ram,0x0010bea8) *//* WARNING: Removing unreachable block (ram,0x0010c03d) *//* WARNING: Removing unreachable block (ram,0x0010c049) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
   Variant *this;
   int iVar1;
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
   iVar1 = (int)local_c8;
   Array::resize(iVar1);
   this(Variant * Array::operator [](iVar1));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, param_2);
   *param_1 = local_c0[0];
   Array::~Array(local_c8);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x0010c1b8) *//* WARNING: Removing unreachable block (ram,0x0010c34d) *//* WARNING: Removing unreachable block (ram,0x0010c359) *//* String vformat<unsigned int>(String const&, unsigned int const) */String *vformat<unsigned_int>(String *param_1, uint param_2) {
   Variant *this;
   uint in_EDX;
   undefined4 in_register_00000034;
   int iVar1;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, in_EDX);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar1 = (int)local_c8;
   Array::resize(iVar1);
   this(Variant * Array::operator [](iVar1));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, (bool*)CONCAT44(in_register_00000034, param_2));
   *(undefined8*)param_1 = local_c0[0];
   Array::~Array(local_c8);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x0010c500) *//* WARNING: Removing unreachable block (ram,0x0010c695) *//* WARNING: Removing unreachable block (ram,0x0010c6a1) *//* String vformat<String, String, String>(String const&, String const, String const, String const)
    */undefined8 *vformat<String,String,String>(undefined8 *param_1, bool *param_2, String *param_3, String *param_4, String *param_5) {
   Variant *pVVar1;
   Variant *pVVar2;
   int iVar3;
   int iVar4;
   long in_FS_OFFSET;
   Array local_f8[8];
   undefined8 local_f0[9];
   Variant local_a8[24];
   Variant local_90[24];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_a8, param_3);
   iVar4 = 0;
   Variant::Variant(local_90, param_4);
   Variant::Variant(local_78, param_5);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_f8);
   iVar3 = (int)local_f8;
   Array::resize(iVar3);
   pVVar2 = local_a8;
   do {
      iVar4 = iVar4 + 1;
      pVVar1 = (Variant*)Array::operator [](iVar3);
      Variant::operator =(pVVar1, pVVar2);
      pVVar2 = pVVar2 + 0x18;
   }
 while ( iVar4 != 3 );
   String::sprintf((Array*)local_f0, param_2);
   *param_1 = local_f0[0];
   pVVar2 = local_48;
   Array::~Array(local_f8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_a8 );
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x0010c830) *//* WARNING: Removing unreachable block (ram,0x0010c9c5) *//* WARNING: Removing unreachable block (ram,0x0010c9d1) *//* String vformat<unsigned long, String, String>(String const&, unsigned long const, String const,
   String const) */undefined8 *vformat<unsigned_long,String,String>(undefined8 *param_1, bool *param_2, ulong param_3, String *param_4, String *param_5) {
   Variant *pVVar1;
   Variant *pVVar2;
   int iVar3;
   int iVar4;
   long in_FS_OFFSET;
   Array local_f8[8];
   undefined8 local_f0[9];
   Variant local_a8[24];
   Variant local_90[24];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_a8, param_3);
   iVar4 = 0;
   Variant::Variant(local_90, param_4);
   Variant::Variant(local_78, param_5);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_f8);
   iVar3 = (int)local_f8;
   Array::resize(iVar3);
   pVVar2 = local_a8;
   do {
      iVar4 = iVar4 + 1;
      pVVar1 = (Variant*)Array::operator [](iVar3);
      Variant::operator =(pVVar1, pVVar2);
      pVVar2 = pVVar2 + 0x18;
   }
 while ( iVar4 != 3 );
   String::sprintf((Array*)local_f0, param_2);
   *param_1 = local_f0[0];
   pVVar2 = local_48;
   Array::~Array(local_f8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_a8 );
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x0010cb98) *//* WARNING: Removing unreachable block (ram,0x0010cd2d) *//* WARNING: Removing unreachable block (ram,0x0010cd39) *//* String vformat<unsigned long, unsigned long, String, String, float>(String const&, unsigned long
   const, unsigned long const, String const, String const, float const) */undefined8 *vformat<unsigned_long,unsigned_long,String,String,float>(float param_1_00, undefined8 *param_1, bool *param_2, ulong param_3, ulong param_5, String *param_6, String *param_7) {
   Variant *pVVar1;
   Variant *pVVar2;
   int iVar3;
   int iVar4;
   long in_FS_OFFSET;
   Array local_128[8];
   undefined8 local_120[9];
   Variant local_d8[24];
   Variant local_c0[24];
   Variant local_a8[24];
   Variant local_90[24];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_d8, param_3);
   Variant::Variant(local_c0, param_5);
   iVar4 = 0;
   Variant::Variant(local_a8, param_6);
   Variant::Variant(local_90, param_7);
   Variant::Variant(local_78, param_1_00);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_128);
   iVar3 = (int)local_128;
   Array::resize(iVar3);
   pVVar2 = local_d8;
   do {
      iVar4 = iVar4 + 1;
      pVVar1 = (Variant*)Array::operator [](iVar3);
      Variant::operator =(pVVar1, pVVar2);
      pVVar2 = pVVar2 + 0x18;
   }
 while ( iVar4 != 5 );
   String::sprintf((Array*)local_120, param_2);
   *param_1 = local_120[0];
   pVVar2 = local_48;
   Array::~Array(local_128);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_d8 );
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x0010cec0) *//* WARNING: Removing unreachable block (ram,0x0010d055) *//* WARNING: Removing unreachable block (ram,0x0010d061) *//* String vformat<float, float>(String const&, float const, float const) */String *vformat<float,float>(String *param_1, float param_2, float param_3) {
   Variant *pVVar1;
   Variant *pVVar2;
   bool *in_RSI;
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
   Variant::Variant(local_88, param_2);
   Variant::Variant(local_70, param_3);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, in_RSI);
   *(undefined8*)param_1 = local_d0[0];
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
/* RBSet<String, Comparator<String>, DefaultAllocator>::_cleanup_tree(RBSet<String,
   Comparator<String>, DefaultAllocator>::Element*) [clone .part.0] */void RBSet<String,Comparator<String>,DefaultAllocator>::_cleanup_tree(RBSet<String,Comparator<String>,DefaultAllocator> *this, Element *param_1) {
   long *plVar1;
   Element *pEVar2;
   long lVar3;
   Element *pEVar4;
   Element *pEVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   pEVar2 = *(Element**)( param_1 + 0x10 );
   pEVar5 = *(Element**)( this + 8 );
   if (pEVar2 != pEVar5) {
      pEVar6 = *(Element**)( pEVar2 + 0x10 );
      if (pEVar5 != pEVar6) {
         pEVar8 = *(Element**)( pEVar6 + 0x10 );
         if (pEVar5 != pEVar8) {
            pEVar4 = *(Element**)( pEVar8 + 0x10 );
            if (pEVar5 != pEVar4) {
               pEVar7 = *(Element**)( pEVar4 + 0x10 );
               if (pEVar5 != pEVar7) {
                  _cleanup_tree(this, pEVar7);
                  pEVar7 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar4 + 8 ) != pEVar7) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar4 + 0x30 ));
               Memory::free_static(pEVar4, false);
               pEVar4 = *(Element**)( this + 8 );
            }

            pEVar5 = *(Element**)( pEVar8 + 8 );
            if (pEVar5 != pEVar4) {
               if (*(Element**)( pEVar5 + 0x10 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar5 + 0x10 ));
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar5 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar5 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
               Memory::free_static(pEVar5, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar8 + 0x30 ));
            Memory::free_static(pEVar8, false);
            pEVar8 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar6 + 8 );
         if (pEVar5 != pEVar8) {
            pEVar4 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar8 != pEVar4) {
               pEVar7 = *(Element**)( pEVar4 + 0x10 );
               if (pEVar8 != pEVar7) {
                  _cleanup_tree(this, pEVar7);
                  pEVar7 = *(Element**)( this + 8 );
               }

               if (pEVar7 != *(Element**)( pEVar4 + 8 )) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar4 + 0x30 ));
               Memory::free_static(pEVar4, false);
               pEVar4 = *(Element**)( this + 8 );
            }

            pEVar8 = *(Element**)( pEVar5 + 8 );
            if (pEVar8 != pEVar4) {
               pEVar7 = *(Element**)( pEVar8 + 0x10 );
               if (pEVar4 != pEVar7) {
                  _cleanup_tree(this, pEVar7);
                  pEVar7 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar8 + 8 ) != pEVar7) {
                  _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar8 + 0x30 ));
               Memory::free_static(pEVar8, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
            Memory::free_static(pEVar5, false);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
         Memory::free_static(pEVar6, false);
         pEVar6 = *(Element**)( this + 8 );
      }

      pEVar5 = *(Element**)( pEVar2 + 8 );
      if (pEVar5 != pEVar6) {
         pEVar8 = *(Element**)( pEVar5 + 0x10 );
         if (pEVar8 != pEVar6) {
            pEVar4 = *(Element**)( pEVar8 + 0x10 );
            if (pEVar4 != pEVar6) {
               pEVar7 = *(Element**)( pEVar4 + 0x10 );
               if (pEVar6 != pEVar7) {
                  _cleanup_tree(this, pEVar7);
                  pEVar7 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar4 + 8 ) != pEVar7) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar4 + 0x30 ));
               Memory::free_static(pEVar4, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar4 = *(Element**)( pEVar8 + 8 );
            if (pEVar4 != pEVar6) {
               if (*(Element**)( pEVar4 + 0x10 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 0x10 ));
                  pEVar6 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar4 + 8 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar4 + 0x30 ));
               Memory::free_static(pEVar4, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar8 + 0x30 ));
            Memory::free_static(pEVar8, false);
            pEVar6 = *(Element**)( this + 8 );
         }

         pEVar8 = *(Element**)( pEVar5 + 8 );
         if (pEVar8 != pEVar6) {
            pEVar4 = *(Element**)( pEVar8 + 0x10 );
            if (pEVar4 != pEVar6) {
               if (*(Element**)( pEVar4 + 0x10 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 0x10 ));
                  pEVar6 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar4 + 8 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar4 + 0x30 ));
               Memory::free_static(pEVar4, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar4 = *(Element**)( pEVar8 + 8 );
            if (pEVar4 != pEVar6) {
               if (*(Element**)( pEVar4 + 0x10 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 0x10 ));
                  pEVar6 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar4 + 8 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar4 + 0x30 ));
               Memory::free_static(pEVar4, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar8 + 0x30 ));
            Memory::free_static(pEVar8, false);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
         Memory::free_static(pEVar5, false);
      }

      if (*(long*)( pEVar2 + 0x30 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( pEVar2 + 0x30 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( pEVar2 + 0x30 );
            *(undefined8*)( pEVar2 + 0x30 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      Memory::free_static(pEVar2, false);
      pEVar5 = *(Element**)( this + 8 );
   }

   pEVar2 = *(Element**)( param_1 + 8 );
   if (pEVar2 != pEVar5) {
      pEVar6 = *(Element**)( pEVar2 + 0x10 );
      if (pEVar6 != pEVar5) {
         pEVar8 = *(Element**)( pEVar6 + 0x10 );
         if (pEVar8 != pEVar5) {
            pEVar4 = *(Element**)( pEVar8 + 0x10 );
            if (pEVar4 != pEVar5) {
               if (*(Element**)( pEVar4 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar4 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar4 + 0x30 ));
               Memory::free_static(pEVar4, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar4 = *(Element**)( pEVar8 + 8 );
            if (pEVar4 != pEVar5) {
               if (*(Element**)( pEVar4 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar4 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar4 + 0x30 ));
               Memory::free_static(pEVar4, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar8 + 0x30 ));
            Memory::free_static(pEVar8, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar8 = *(Element**)( pEVar6 + 8 );
         if (pEVar5 != pEVar8) {
            pEVar4 = *(Element**)( pEVar8 + 0x10 );
            if (pEVar5 != pEVar4) {
               pEVar7 = *(Element**)( pEVar4 + 0x10 );
               if (pEVar5 != pEVar7) {
                  _cleanup_tree(this, pEVar7);
                  pEVar7 = *(Element**)( this + 8 );
               }

               if (pEVar7 != *(Element**)( pEVar4 + 8 )) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar4 + 0x30 ));
               Memory::free_static(pEVar4, false);
               pEVar4 = *(Element**)( this + 8 );
            }

            pEVar5 = *(Element**)( pEVar8 + 8 );
            if (pEVar5 != pEVar4) {
               if (*(Element**)( pEVar5 + 0x10 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar5 + 0x10 ));
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar5 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar5 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
               Memory::free_static(pEVar5, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar8 + 0x30 ));
            Memory::free_static(pEVar8, false);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
         Memory::free_static(pEVar6, false);
         pEVar5 = *(Element**)( this + 8 );
      }

      pEVar6 = *(Element**)( pEVar2 + 8 );
      if (pEVar6 != pEVar5) {
         pEVar8 = *(Element**)( pEVar6 + 0x10 );
         if (pEVar8 != pEVar5) {
            pEVar4 = *(Element**)( pEVar8 + 0x10 );
            if (pEVar4 != pEVar5) {
               if (*(Element**)( pEVar4 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar4 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar4 + 0x30 ));
               Memory::free_static(pEVar4, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar4 = *(Element**)( pEVar8 + 8 );
            if (pEVar4 != pEVar5) {
               if (*(Element**)( pEVar4 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar4 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar4 + 0x30 ));
               Memory::free_static(pEVar4, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar8 + 0x30 ));
            Memory::free_static(pEVar8, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar8 = *(Element**)( pEVar6 + 8 );
         if (pEVar8 != pEVar5) {
            pEVar4 = *(Element**)( pEVar8 + 0x10 );
            if (pEVar4 != pEVar5) {
               if (*(Element**)( pEVar4 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar4 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar4 + 0x30 ));
               Memory::free_static(pEVar4, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar4 = *(Element**)( pEVar8 + 8 );
            if (pEVar4 != pEVar5) {
               if (*(Element**)( pEVar4 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar4 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar4 + 0x30 ));
               Memory::free_static(pEVar4, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar8 + 0x30 ));
            Memory::free_static(pEVar8, false);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
         Memory::free_static(pEVar6, false);
      }

      if (*(long*)( pEVar2 + 0x30 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( pEVar2 + 0x30 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( pEVar2 + 0x30 );
            *(undefined8*)( pEVar2 + 0x30 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      Memory::free_static(pEVar2, false);
   }

   if (*(long*)( param_1 + 0x30 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( param_1 + 0x30 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( param_1 + 0x30 );
         *(undefined8*)( param_1 + 0x30 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   Memory::free_static(param_1, false);
   return;
}
/* RBSet<String, Comparator<String>, DefaultAllocator>::~RBSet() */void RBSet<String,Comparator<String>,DefaultAllocator>::~RBSet(RBSet<String,Comparator<String>,DefaultAllocator> *this) {
   long *plVar1;
   Element *pEVar2;
   long lVar3;
   Element *pEVar4;
   Element *pEVar5;
   void *pvVar6;
   Element *pEVar7;
   Element *pEVar8;
   Element *pEVar9;
   pvVar6 = *(void**)this;
   if (pvVar6 == (void*)0x0) {
      return;
   }

   pEVar2 = *(Element**)( (long)pvVar6 + 0x10 );
   pEVar4 = *(Element**)( this + 8 );
   if (pEVar2 == pEVar4) goto LAB_0010dac8;
   pEVar5 = *(Element**)( pEVar2 + 0x10 );
   if (pEVar4 != pEVar5) {
      pEVar8 = *(Element**)( pEVar5 + 0x10 );
      if (pEVar4 != pEVar8) {
         pEVar9 = *(Element**)( pEVar8 + 0x10 );
         if (pEVar4 != pEVar9) {
            pEVar7 = *(Element**)( pEVar9 + 0x10 );
            if (pEVar4 != pEVar7) {
               _cleanup_tree(this, pEVar7);
               pEVar7 = *(Element**)( this + 8 );
            }

            if (*(Element**)( pEVar9 + 8 ) != pEVar7) {
               _cleanup_tree(this, *(Element**)( pEVar9 + 8 ));
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar9 + 0x30 ));
            Memory::free_static(pEVar9, false);
            pEVar9 = *(Element**)( this + 8 );
         }

         pEVar4 = *(Element**)( pEVar8 + 8 );
         if (pEVar4 != pEVar9) {
            if (*(Element**)( pEVar4 + 0x10 ) != pEVar9) {
               _cleanup_tree(this, *(Element**)( pEVar4 + 0x10 ));
               pEVar9 = *(Element**)( this + 8 );
            }

            if (*(Element**)( pEVar4 + 8 ) != pEVar9) {
               _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar4 + 0x30 ));
            Memory::free_static(pEVar4, false);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar8 + 0x30 ));
         Memory::free_static(pEVar8, false);
         pEVar8 = *(Element**)( this + 8 );
      }

      pEVar4 = *(Element**)( pEVar5 + 8 );
      if (pEVar4 != pEVar8) {
         if (*(Element**)( pEVar4 + 0x10 ) != pEVar8) {
            _cleanup_tree(this, *(Element**)( pEVar4 + 0x10 ));
            pEVar8 = *(Element**)( this + 8 );
         }

         if (*(Element**)( pEVar4 + 8 ) != pEVar8) {
            _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
         }

         if (*(long*)( pEVar4 + 0x30 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( pEVar4 + 0x30 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( pEVar4 + 0x30 );
               *(undefined8*)( pEVar4 + 0x30 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         Memory::free_static(pEVar4, false);
      }

      if (*(long*)( pEVar5 + 0x30 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( pEVar5 + 0x30 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( pEVar5 + 0x30 );
            *(undefined8*)( pEVar5 + 0x30 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            Memory::free_static(pEVar5, false);
            pEVar5 = *(Element**)( this + 8 );
            goto LAB_0010d9a0;
         }

      }

      Memory::free_static(pEVar5, false);
      pEVar5 = *(Element**)( this + 8 );
   }

   LAB_0010d9a0:pEVar4 = *(Element**)( pEVar2 + 8 );
   if (pEVar4 != pEVar5) {
      pEVar8 = *(Element**)( pEVar4 + 0x10 );
      if (pEVar8 != pEVar5) {
         if (*(Element**)( pEVar8 + 0x10 ) != pEVar5) {
            _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar9 = *(Element**)( pEVar8 + 8 );
         if (pEVar9 != pEVar5) {
            if (*(Element**)( pEVar9 + 0x10 ) != pEVar5) {
               _cleanup_tree(this, *(Element**)( pEVar9 + 0x10 ));
               pEVar5 = *(Element**)( this + 8 );
            }

            if (*(Element**)( pEVar9 + 8 ) != pEVar5) {
               _cleanup_tree(this, *(Element**)( pEVar9 + 8 ));
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar9 + 0x30 ));
            Memory::free_static(pEVar9, false);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar8 + 0x30 ));
         Memory::free_static(pEVar8, false);
         pEVar5 = *(Element**)( this + 8 );
      }

      pEVar8 = *(Element**)( pEVar4 + 8 );
      if (pEVar8 != pEVar5) {
         if (*(Element**)( pEVar8 + 0x10 ) != pEVar5) {
            _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
            pEVar5 = *(Element**)( this + 8 );
         }

         if (*(Element**)( pEVar8 + 8 ) != pEVar5) {
            _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
         }

         if (*(long*)( pEVar8 + 0x30 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( pEVar8 + 0x30 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( pEVar8 + 0x30 );
               *(undefined8*)( pEVar8 + 0x30 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         Memory::free_static(pEVar8, false);
      }

      if (*(long*)( pEVar4 + 0x30 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( pEVar4 + 0x30 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( pEVar4 + 0x30 );
            *(undefined8*)( pEVar4 + 0x30 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            Memory::free_static(pEVar4, false);
            goto LAB_0010daa5;
         }

      }

      Memory::free_static(pEVar4, false);
   }

   LAB_0010daa5:if (*(long*)( pEVar2 + 0x30 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( pEVar2 + 0x30 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( pEVar2 + 0x30 );
         *(undefined8*)( pEVar2 + 0x30 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   Memory::free_static(pEVar2, false);
   pvVar6 = *(void**)this;
   pEVar4 = *(Element**)( this + 8 );
   LAB_0010dac8:*(Element**)( (long)pvVar6 + 0x10 ) = pEVar4;
   lVar3 = *(long*)( (long)pvVar6 + 0x30 );
   *(undefined4*)( this + 0x10 ) = 0;
   if (lVar3 != 0) {
      LOCK();
      plVar1 = (long*)( lVar3 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( (long)pvVar6 + 0x30 );
         *(undefined8*)( (long)pvVar6 + 0x30 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   Memory::free_static(pvVar6, false);
   return;
}
/* MethodBindTS<MovieWriter*>::_gen_argument_type_info(int) const */undefined4 *MethodBindTS<MovieWriter*>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   char *local_58;
   long local_50;
   long local_48;
   undefined4 local_40;
   long local_38;
   undefined4 local_30;
   long local_20;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar4 = 0;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 6;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_68 = 0;
      local_58 = "MovieWriter";
      local_50 = 0xb;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = (char*)CONCAT44(local_58._4_4_, 0x18);
      local_50 = 0;
      StringName::StringName((StringName*)&local_48, (StringName*)&local_60);
      local_40 = 0;
      local_38 = 0;
      local_30 = 6;
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

      *puVar4 = local_58._0_4_;
      if (*(long*)( puVar4 + 2 ) != local_50) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 2 ));
         lVar2 = local_50;
         local_50 = 0;
         *(long*)( puVar4 + 2 ) = lVar2;
      }

      if (*(long*)( puVar4 + 4 ) != local_48) {
         StringName::unref();
         lVar2 = local_48;
         local_48 = 0;
         *(long*)( puVar4 + 4 ) = lVar2;
      }

      lVar3 = local_38;
      puVar4[6] = local_40;
      lVar2 = *(long*)( puVar4 + 8 );
      if (lVar2 == local_38) {
         puVar4[10] = local_30;
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_38 = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
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
               lVar2 = *(long*)( puVar4 + 8 );
               *(undefined8*)( puVar4 + 8 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         *(long*)( puVar4 + 8 ) = local_38;
         puVar4[10] = local_30;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
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

   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar4;
}
/* CowData<String>::_unref() */void CowData<String>::_unref(CowData<String> *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long *plVar6;
   long lVar7;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      plVar1 = *(long**)this;
      if (plVar1 != (long*)0x0) {
         lVar3 = plVar1[-1];
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar7 = 0;
            plVar6 = plVar1;
            do {
               if (*plVar6 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar6 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = *plVar6;
                     *plVar6 = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar3 != lVar7 );
         }

         Memory::free_static(plVar1 + -2, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* GetTypeInfo<Error, void>::get_class_info() */GetTypeInfo<Error,void> * __thiscall
GetTypeInfo<Error,void>::get_class_info(GetTypeInfo<Error,void> *this){
   long *plVar1;
   code *pcVar2;
   char *pcVar3;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60;
   char local_58[8];
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   local_48 = "Error";
   local_40 = 5;
   String::parse_latin1((StrRange*)&local_70);
   String::split(local_58, SUB81((StrRange*)&local_70, 0), 0x10ded0);
   if (( local_50 != 0 ) && ( 2 < *(long*)( local_50 + -8 ) )) {
      local_60 = 0;
      local_40 = 1;
      local_48 = ".";
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == 0) {
         lVar4 = -2;
         lVar5 = 0;
      }
 else {
         lVar5 = *(long*)( local_50 + -8 );
         lVar4 = lVar5 + -2;
         if (-1 < lVar4) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar4 * 8 ));
            String::operator +((String*)&local_68, (String*)&local_48);
            pcVar3 = local_48;
            lVar5 = local_60;
            if (local_48 != (undefined*)0x0) {
               LOCK();
               plVar1 = (long*)( local_48 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_48 = (undefined*)0x0;
                  Memory::free_static(pcVar3 + -0x10, false);
                  lVar5 = local_60;
               }

            }

            goto joined_r0x0010dfb3;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar4, lVar5, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   local_60 = 0;
   local_48 = ".";
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)&local_68);
   lVar5 = local_60;
   joined_r0x0010dfb3:local_60 = lVar5;
   if (lVar5 != 0) {
      LOCK();
      plVar1 = (long*)( lVar5 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   CowData<String>::_unref((CowData<String>*)&local_50);
   StringName::StringName((StringName*)&local_48, (String*)&local_68, false);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0x10006;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
      StringName::unref();
   }

   lVar5 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   lVar5 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* CowData<String>::_ref(CowData<String> const&) */void CowData<String>::_ref(CowData<String> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   if (*(long*)this == *(long*)param_1) {
      return;
   }

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
/* GetTypeInfo<AudioServer::SpeakerMode, void>::get_class_info() */GetTypeInfo<AudioServer::SpeakerMode,void> * __thiscall
GetTypeInfo<AudioServer::SpeakerMode,void>::get_class_info
          (GetTypeInfo<AudioServer::SpeakerMode,void> *this){
   long *plVar1;
   code *pcVar2;
   char *pcVar3;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60;
   char local_58[8];
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   local_48 = "AudioServer::SpeakerMode";
   local_40 = 0x18;
   String::parse_latin1((StrRange*)&local_70);
   String::split(local_58, SUB81((StrRange*)&local_70, 0), 0x10ded0);
   if (( local_50 != 0 ) && ( 2 < *(long*)( local_50 + -8 ) )) {
      local_60 = 0;
      local_40 = 1;
      local_48 = ".";
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == 0) {
         lVar4 = -2;
         lVar5 = 0;
      }
 else {
         lVar5 = *(long*)( local_50 + -8 );
         lVar4 = lVar5 + -2;
         if (-1 < lVar4) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar4 * 8 ));
            String::operator +((String*)&local_68, (String*)&local_48);
            pcVar3 = local_48;
            lVar5 = local_60;
            if (local_48 != (undefined*)0x0) {
               LOCK();
               plVar1 = (long*)( local_48 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_48 = (undefined*)0x0;
                  Memory::free_static(pcVar3 + -0x10, false);
                  lVar5 = local_60;
               }

            }

            goto joined_r0x0010e323;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar4, lVar5, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   local_60 = 0;
   local_48 = ".";
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)&local_68);
   lVar5 = local_60;
   joined_r0x0010e323:local_60 = lVar5;
   if (lVar5 != 0) {
      LOCK();
      plVar1 = (long*)( lVar5 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   CowData<String>::_unref((CowData<String>*)&local_50);
   StringName::StringName((StringName*)&local_48, (String*)&local_68, false);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0x10006;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
      StringName::unref();
   }

   lVar5 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   lVar5 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* CowData<String>::_realloc(long) */undefined8 CowData<String>::_realloc(CowData<String> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<String>::resize<false>(long) */undefined8 CowData<String>::resize<false>(CowData<String> *this, long param_1) {
   long *plVar1;
   long *plVar2;
   code *pcVar3;
   undefined8 uVar4;
   undefined8 *puVar5;
   long lVar6;
   long lVar7;
   ulong uVar8;
   undefined8 *puVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar6 = 0;
      lVar7 = 0;
   }
 else {
      lVar6 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar6) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar7 = lVar6 * 8;
      if (lVar7 != 0) {
         uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
         uVar8 = uVar8 | uVar8 >> 2;
         uVar8 = uVar8 | uVar8 >> 4;
         uVar8 = uVar8 | uVar8 >> 8;
         uVar8 = uVar8 | uVar8 >> 0x10;
         lVar7 = ( uVar8 | uVar8 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_0010e8d0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar8 = param_1 * 8 - 1;
   uVar8 = uVar8 >> 1 | uVar8;
   uVar8 = uVar8 | uVar8 >> 2;
   uVar8 = uVar8 | uVar8 >> 4;
   uVar8 = uVar8 | uVar8 >> 8;
   uVar8 = uVar8 | uVar8 >> 0x10;
   uVar8 = uVar8 | uVar8 >> 0x20;
   lVar10 = uVar8 + 1;
   if (lVar10 == 0) goto LAB_0010e8d0;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_0010e7a9:if (lVar10 != lVar7) {
               uVar4 = _realloc(this, lVar10);
               if ((int)uVar4 != 0) {
                  return uVar4;
               }

               lVar6 = *(long*)this;
               if (lVar6 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

            }

            *(long*)( lVar6 + -8 ) = param_1;
            return 0;
         }

         while (true) {
            plVar2 = (long*)( lVar6 + uVar8 * 8 );
            if (*plVar2 != 0) break;
            uVar8 = uVar8 + 1;
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_0010e7a9;
         }
;
         LOCK();
         plVar1 = (long*)( *plVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar6 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

         uVar8 = uVar8 + 1;
         lVar6 = *(long*)this;
      }
;
      goto LAB_0010e926;
   }

   if (lVar10 == lVar7) {
      LAB_0010e84f:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_0010e926:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_0010e83a;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_0010e84f;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar8 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar9 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar9;
      lVar6 = 0;
   }

   memset(puVar9 + lVar6, 0, ( param_1 - lVar6 ) * 8);
   LAB_0010e83a:puVar9[-1] = param_1;
   return 0;
}
/* CowData<unsigned int>::_unref() */void CowData<unsigned_int>::_unref(CowData<unsigned_int> *this) {
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
/* void memdelete<Image>(Image*) */void memdelete<Image>(Image *param_1) {
   long *plVar1;
   long lVar2;
   char cVar3;
   cVar3 = predelete_handler((Object*)param_1);
   if (cVar3 == '\0') {
      return;
   }

   if (*(code**)( *(long*)param_1 + 0x140 ) == Image::~Image) {
      *(code**)param_1 = Memory::free_static;
      if (*(long*)( param_1 + 0x250 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( param_1 + 0x250 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( param_1 + 0x250 );
            *(undefined8*)( param_1 + 0x250 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      Resource::~Resource((Resource*)param_1);
      Memory::free_static(param_1, false);
      return;
   }

   ( **(code**)( *(long*)param_1 + 0x140 ) )(param_1);
   Memory::free_static(param_1, false);
   return;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<int>::resize<false>(long) */undefined8 CowData<int>::resize<false>(CowData<int> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   long lVar8;
   long lVar9;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar9 = 0;
      lVar3 = 0;
   }
 else {
      lVar9 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar9) {
         return 0;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return 0;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return 0;
      }

      _copy_on_write(this);
      lVar3 = lVar9 * 4;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 4 == 0) {
      LAB_0010ec90:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 4 - 1;
   uVar4 = uVar4 | uVar4 >> 1;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar8 = uVar4 + 1;
   if (lVar8 == 0) goto LAB_0010ec90;
   if (lVar9 < param_1) {
      if (lVar8 != lVar3) {
         if (lVar9 == 0) {
            puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               return 6;
            }

            puVar7 = puVar5 + 2;
            *puVar5 = 1;
            puVar5[1] = 0;
            *(undefined8**)this = puVar7;
            goto LAB_0010eba1;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_0010eba1:puVar7[-1] = param_1;
         return 0;
      }

   }
 else {
      if (( lVar8 != lVar3 ) && ( uVar6 = _realloc(this, lVar8) ),(int)uVar6 != 0) {
         return uVar6;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

   }

   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* MovieWriter::_initialize_classv() */void MovieWriter::_initialize_classv(void) {
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
      local_38 = "MovieWriter";
      local_50 = 0;
      local_30 = 0xb;
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
            _bind_methods();
            initialize_class()::initialized = '\x01';
        goto LAB_0010ed15
            ;;
         }

      }

      _bind_methods();
      initialize_class() {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* RBSet<String, Comparator<String>, DefaultAllocator>::_insert_rb_fix(RBSet<String,
   Comparator<String>, DefaultAllocator>::Element*) */
   void RBSet<String,Comparator<String>,DefaultAllocator>::_insert_rb_fix(RBSet<String,Comparator<String>,DefaultAllocator> *this, Element *param_1) {
      int iVar1;
      long lVar2;
      long lVar3;
      long lVar4;
      Element *pEVar5;
      Element *pEVar6;
      Element *pEVar7;
      Element *pEVar8;
      iVar1 = *(int*)*(Element**)( param_1 + 0x18 );
      pEVar7 = *(Element**)( param_1 + 0x18 );
      do {
         while (true) {
            pEVar8 = pEVar7;
            if (iVar1 != 0) {
               **(undefined4**)( *(long*)this + 0x10 ) = 1;
               return;
            }

            pEVar5 = *(Element**)( pEVar8 + 0x18 );
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            pEVar7 = pEVar8;
            if (pEVar6 == pEVar8) break;
            if (*(int*)pEVar6 == 0) goto LAB_0010ef8d;
            if (*(Element**)( pEVar8 + 0x10 ) == param_1) {
               lVar2 = *(long*)( this + 8 );
               lVar3 = *(long*)( param_1 + 8 );
               *(long*)( pEVar8 + 0x10 ) = lVar3;
               pEVar7 = pEVar5;
               if (lVar2 != lVar3) {
                  *(Element**)( lVar3 + 0x18 ) = pEVar8;
                  pEVar7 = *(Element**)( pEVar8 + 0x18 );
               }

               *(Element**)( param_1 + 0x18 ) = pEVar7;
               if (pEVar8 == *(Element**)( pEVar7 + 8 )) {
                  *(Element**)( pEVar7 + 8 ) = param_1;
               }
 else {
                  *(Element**)( pEVar7 + 0x10 ) = param_1;
               }

               *(Element**)( param_1 + 8 ) = pEVar8;
               *(Element**)( pEVar8 + 0x18 ) = param_1;
               pEVar6 = *(Element**)( this + 8 );
               *(int*)param_1 = 1;
               pEVar7 = param_1;
               if (pEVar5 == pEVar6) goto LAB_0010f0b0;
               LAB_0010ef36:*(int*)pEVar5 = 0;
            }
 else {
               pEVar6 = *(Element**)( this + 8 );
               *(int*)pEVar8 = 1;
               pEVar8 = param_1;
               if (pEVar5 != pEVar6) goto LAB_0010ef36;
               LAB_0010f0b0:_err_print_error("_set_color", "./core/templates/rb_set.h", 0xd0, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
            }

            lVar2 = *(long*)( pEVar5 + 8 );
            lVar3 = *(long*)( this + 8 );
            lVar4 = *(long*)( lVar2 + 0x10 );
            *(long*)( pEVar5 + 8 ) = lVar4;
            if (lVar3 != lVar4) {
               *(Element**)( lVar4 + 0x18 ) = pEVar5;
            }

            lVar3 = *(long*)( pEVar5 + 0x18 );
            *(long*)( lVar2 + 0x18 ) = lVar3;
            if (pEVar5 == *(Element**)( lVar3 + 0x10 )) {
               *(long*)( lVar3 + 0x10 ) = lVar2;
            }
 else {
               *(long*)( lVar3 + 8 ) = lVar2;
            }

            *(Element**)( lVar2 + 0x10 ) = pEVar5;
            *(long*)( pEVar5 + 0x18 ) = lVar2;
            LAB_0010ef73:iVar1 = *(int*)pEVar7;
            param_1 = pEVar8;
         }
;
         pEVar6 = *(Element**)( pEVar5 + 8 );
         if (*(int*)pEVar6 != 0) {
            if (*(Element**)( pEVar8 + 8 ) == param_1) {
               lVar2 = *(long*)( this + 8 );
               lVar3 = *(long*)( param_1 + 0x10 );
               *(long*)( pEVar8 + 8 ) = lVar3;
               if (lVar2 == lVar3) {
                  *(Element**)( param_1 + 0x18 ) = pEVar5;
                  pEVar7 = pEVar5;
                  LAB_0010f1a2:*(Element**)( pEVar7 + 0x10 ) = param_1;
               }
 else {
                  *(Element**)( lVar3 + 0x18 ) = pEVar8;
                  pEVar7 = *(Element**)( pEVar8 + 0x18 );
                  *(Element**)( param_1 + 0x18 ) = pEVar7;
                  if (pEVar8 == *(Element**)( pEVar7 + 0x10 )) goto LAB_0010f1a2;
                  *(Element**)( pEVar7 + 8 ) = param_1;
               }

               *(Element**)( param_1 + 0x10 ) = pEVar8;
               *(Element**)( pEVar8 + 0x18 ) = param_1;
               pEVar6 = *(Element**)( this + 8 );
               *(int*)param_1 = 1;
               pEVar7 = param_1;
               if (pEVar5 == pEVar6) goto LAB_0010f170;
               LAB_0010f000:*(int*)pEVar5 = 0;
            }
 else {
               pEVar6 = *(Element**)( this + 8 );
               *(int*)pEVar8 = 1;
               pEVar8 = param_1;
               if (pEVar5 != pEVar6) goto LAB_0010f000;
               LAB_0010f170:_err_print_error("_set_color", "./core/templates/rb_set.h", 0xd0, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
            }

            lVar2 = *(long*)( pEVar5 + 0x10 );
            lVar3 = *(long*)( this + 8 );
            lVar4 = *(long*)( lVar2 + 8 );
            *(long*)( pEVar5 + 0x10 ) = lVar4;
            if (lVar3 != lVar4) {
               *(Element**)( lVar4 + 0x18 ) = pEVar5;
            }

            lVar3 = *(long*)( pEVar5 + 0x18 );
            *(long*)( lVar2 + 0x18 ) = lVar3;
            if (pEVar5 == *(Element**)( lVar3 + 8 )) {
               *(long*)( lVar3 + 8 ) = lVar2;
            }
 else {
               *(long*)( lVar3 + 0x10 ) = lVar2;
            }

            *(Element**)( lVar2 + 8 ) = pEVar5;
            *(long*)( pEVar5 + 0x18 ) = lVar2;
            goto LAB_0010ef73;
         }

         LAB_0010ef8d:pEVar7 = *(Element**)( this + 8 );
         *(int*)pEVar8 = 1;
         *(int*)pEVar6 = 1;
         if (pEVar5 == pEVar7) {
            _err_print_error("_set_color", "./core/templates/rb_set.h", 0xd0, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         }
 else {
            *(int*)pEVar5 = 0;
         }

         iVar1 = *(int*)*(Element**)( pEVar5 + 0x18 );
         pEVar7 = *(Element**)( pEVar5 + 0x18 );
         param_1 = pEVar5;
      }
 while ( true );
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* RBSet<String, Comparator<String>, DefaultAllocator>::~RBSet() */
   void RBSet<String,Comparator<String>,DefaultAllocator>::~RBSet(RBSet<String,Comparator<String>,DefaultAllocator> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* List<String, DefaultAllocator>::~List() */
   void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodInfo::~MethodInfo() */
   void MethodInfo::~MethodInfo(MethodInfo *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* List<PropertyInfo, DefaultAllocator>::~List() */
   void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* PropertyInfo::~PropertyInfo() */
   void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MovieWriter::~MovieWriter() */
   void MovieWriter::~MovieWriter(MovieWriter *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* Image::~Image() */
   void Image::~Image(Image *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTS<MovieWriter*>::~MethodBindTS() */
   void MethodBindTS<MovieWriter*>::~MethodBindTS(MethodBindTS<MovieWriter*> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* StringName::~StringName() */
   void StringName::~StringName(StringName *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

}

