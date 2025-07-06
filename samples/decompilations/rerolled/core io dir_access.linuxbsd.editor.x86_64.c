/* DirAccess::drives_are_shortcuts() */undefined8 DirAccess::drives_are_shortcuts(void) {
   return 0;
}/* DirAccess::get_open_error() */undefined4 DirAccess::get_open_error(void) {
   undefined4 *in_FS_OFFSET;
   return *in_FS_OFFSET;
}/* DirAccess::set_include_navigational(bool) */void DirAccess::set_include_navigational(DirAccess *this, bool param_1) {
   this[0x180] = (DirAccess)param_1;
   return;
}/* DirAccess::get_include_navigational() const */DirAccess DirAccess::get_include_navigational(DirAccess *this) {
   return this[0x180];
}/* DirAccess::set_include_hidden(bool) */void DirAccess::set_include_hidden(DirAccess *this, bool param_1) {
   this[0x181] = (DirAccess)param_1;
   return;
}/* DirAccess::get_include_hidden() const */DirAccess DirAccess::get_include_hidden(DirAccess *this) {
   return this[0x181];
}/* DirAccess::is_case_sensitive(String const&) const */undefined8 DirAccess::is_case_sensitive(String *param_1) {
   return 1;
}/* DirAccess::_get_root_string() const */void DirAccess::_get_root_string(void) {
   long lVar1;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( in_RSI + 0x17c ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI);
   } else if (*(int*)( in_RSI + 0x17c ) == 1) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI);
   } else {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI);
   }
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* DirAccess::_get_next() */void DirAccess::_get_next(void) {
   long *plVar1;
   long lVar2;
   long lVar3;
   char cVar4;
   long *in_RSI;
   String *in_RDI;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *in_RSI + 0x168 ) )();
   lVar2 = *(long*)in_RDI;
   while (( ( lVar2 != 0 && ( 1 < *(uint*)( lVar2 + -8 ) ) ) && ( ( ( (char)in_RSI[0x30] == '\0' && ( ( cVar4 = String::operator ==(in_RDI, ".") ),cVar4 != '\0' || ( cVar4 = String::operator ==(in_RDI, "..") ),cVar4 != '\0' ) ) ) ) || ( ( *(char*)( (long)in_RSI + 0x181 ) == '\0' && ( cVar4 = ( **(code**)( *in_RSI + 0x178 ) )() ),cVar4 != '\0' ) ) )) {
      ( **(code**)( *in_RSI + 0x168 ) )(&local_38);
      lVar3 = local_38;
      lVar2 = *(long*)in_RDI;
      if (lVar2 == local_38) {
         if (local_38 == 0) break;
         LOCK();
         plVar1 = (long*)( local_38 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_38 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }
         lVar2 = *(long*)in_RDI;
      } else {
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)in_RDI;
               *(undefined8*)in_RDI = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
         *(long*)in_RDI = local_38;
         lVar2 = local_38;
      }
   };
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* DirAccess::_get_drive_count() */undefined4 DirAccess::_get_drive_count(void) {
   Object *pOVar1;
   char cVar2;
   undefined4 uVar3;
   long in_FS_OFFSET;
   Object *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (create_func._16_8_ == 0) {
      local_28 = (Object*)0x0;
   } else {
      ( *(code*)create_func._16_8_ )(&local_28);
      if (local_28 != (Object*)0x0) {
         *(undefined4*)( local_28 + 0x17c ) = 2;
      }
   }
   uVar3 = ( **(code**)( *(long*)local_28 + 0x188 ) )();
   if (local_28 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_28;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_28);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }
      }
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* DirAccess::get_drive_name(int) */DirAccess * __thiscall DirAccess::get_drive_name(DirAccess *this,int param_1){
   Object *pOVar1;
   char cVar2;
   long in_FS_OFFSET;
   Object *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (create_func._16_8_ == 0) {
      local_28 = (Object*)0x0;
   } else {
      ( *(code*)create_func._16_8_ )(&local_28);
      if (local_28 != (Object*)0x0) {
         *(undefined4*)( local_28 + 0x17c ) = 2;
      }
   }
   ( **(code**)( *(long*)local_28 + 400 ) )(this, local_28, param_1);
   if (local_28 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_28;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_28);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }
      }
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
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
      } else {
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
      } while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }
   }
   return;
}/* DirAccess::copy_absolute(String const&, String const&, int) */undefined4 DirAccess::copy_absolute(String *param_1, String *param_2, int param_3) {
   long *plVar1;
   Object *pOVar2;
   long lVar3;
   char cVar4;
   undefined4 uVar5;
   long in_FS_OFFSET;
   Object *local_48;
   long local_40;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (create_func._16_8_ == 0) {
      local_48 = (Object*)0x0;
   } else {
      ( *(code*)create_func._16_8_ )(&local_48);
      if (local_48 != (Object*)0x0) {
         *(undefined4*)( local_48 + 0x17c ) = 2;
      }
   }
   ProjectSettings::get_singleton();
   ProjectSettings::globalize_path((String*)&local_40);
   ProjectSettings::get_singleton();
   ProjectSettings::globalize_path((String*)&local_38);
   uVar5 = ( **(code**)( *(long*)local_48 + 0x1f8 ) )(local_48, (String*)&local_40, (String*)&local_38, param_3);
   lVar3 = local_38;
   if (local_38 != 0) {
      LOCK();
      plVar1 = (long*)( local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   if (local_48 != (Object*)0x0) {
      cVar4 = RefCounted::unreference();
      pOVar2 = local_48;
      if (cVar4 != '\0') {
         cVar4 = predelete_handler(local_48);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* SortArray<String, _DefaultComparator<String>, true>::adjust_heap(long, long, long, String,
   String*) const [clone .isra.0] */void SortArray<String,_DefaultComparator<String>,true>::adjust_heap(long param_1, long param_2, long param_3, long *param_4, long param_5) {
   long *plVar1;
   String *pSVar2;
   char cVar3;
   CowData<char32_t> *this;
   CowData<char32_t> *pCVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_68;
   long local_48;
   long local_40;
   lVar7 = param_2 * 2 + 2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = param_2;
   if (lVar7 < param_3) {
      do {
         this(CowData<char32_t> * )(param_5 + ( lVar7 + -1 + param_1 ) * 8);
         pSVar2 = (String*)( param_5 + ( param_1 + lVar7 ) * 8 );
         cVar3 = String::operator <(pSVar2, (String*)this);
         lVar5 = lVar7 + -1;
         lVar6 = lVar7;
         if (cVar3 == '\0') {
            lVar6 = lVar7 + 1;
            this(CowData<char32_t> * pSVar2);
            lVar5 = lVar7;
         }
         pCVar4 = (CowData<char32_t>*)( param_5 + ( local_68 + param_1 ) * 8 );
         if (*(long*)pCVar4 != *(long*)this) {
            CowData<char32_t>::_ref(pCVar4, (CowData*)this);
         }
         lVar7 = lVar6 * 2;
         local_68 = lVar5;
      } while ( lVar7 < param_3 );
   } else {
      this(CowData<char32_t> * )(param_5 + ( param_2 + param_1 ) * 8);
      lVar5 = param_2;
   }
   pCVar4 = this;
   if (param_3 == lVar7) {
      lVar5 = param_3 + -1;
      pCVar4 = (CowData<char32_t>*)( param_5 + ( param_1 + lVar5 ) * 8 );
      if (*(long*)this != *(long*)pCVar4) {
         CowData<char32_t>::_ref(this, (CowData*)pCVar4);
      }
   }
   local_48 = 0;
   plVar1 = (long*)( *param_4 + -0x10 );
   if (*param_4 != 0) {
      do {
         lVar7 = *plVar1;
         if (lVar7 == 0) goto LAB_00100728;
         LOCK();
         lVar6 = *plVar1;
         bVar8 = lVar7 == lVar6;
         if (bVar8) {
            *plVar1 = lVar7 + 1;
            lVar6 = lVar7;
         }
         UNLOCK();
      } while ( !bVar8 );
      if (lVar6 != -1) {
         local_48 = *param_4;
      }
   }
   LAB_00100728:lVar7 = ( lVar5 + -1 ) - ( lVar5 + -1 >> 0x3f );
   while (param_2 < lVar5) {
      lVar6 = lVar7 >> 1;
      pSVar2 = (String*)( param_5 + ( param_1 + lVar6 ) * 8 );
      cVar3 = String::operator <(pSVar2, (String*)&local_48);
      pCVar4 = (CowData<char32_t>*)( param_5 + ( param_1 + lVar5 ) * 8 );
      if (cVar3 == '\0') break;
      if (*(long*)pCVar4 != *(long*)pSVar2) {
         CowData<char32_t>::_ref(pCVar4, (CowData*)pSVar2);
      }
      lVar7 = ( lVar6 + -1 ) - ( lVar6 + -1 >> 0x3f );
      pCVar4 = (CowData<char32_t>*)pSVar2;
      lVar5 = lVar6;
   };
   if (*(long*)pCVar4 != local_48) {
      CowData<char32_t>::_ref(pCVar4, (CowData*)&local_48);
   }
   lVar7 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar7 + -0x10 ), false);
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* DirAccess::_get_root_path() const */void DirAccess::_get_root_path(void) {
   long lVar1;
   long *plVar2;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( in_RSI + 0x17c ) == 0) {
      ProjectSettings::get_singleton();
      ProjectSettings::get_resource_path();
   } else if (*(int*)( in_RSI + 0x17c ) == 1) {
      plVar2 = (long*)OS::get_singleton();
      ( **(code**)( *plVar2 + 0x2a8 ) )();
   } else {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI);
   }
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* DirAccess::get_access_type() const */undefined4 DirAccess::get_access_type(DirAccess *this) {
   return *(undefined4*)( this + 0x17c );
}/* DirAccess::get_current_drive() */int DirAccess::get_current_drive(DirAccess *this) {
   long *plVar1;
   long lVar2;
   char cVar3;
   int iVar4;
   int iVar5;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *(long*)this + 0x1b0 ) )(&local_38, this, 1);
   String::to_lower();
   lVar2 = local_38;
   if (local_38 != 0) {
      LOCK();
      plVar1 = (long*)( local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   iVar5 = 0;
   do {
      iVar4 = ( **(code**)( *(long*)this + 0x188 ) )(this);
      if (iVar4 <= iVar5) {
         iVar5 = 0;
         LAB_00100a2e:lVar2 = local_48;
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
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return iVar5;
         }
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      ( **(code**)( *(long*)this + 400 ) )(&local_38, this, iVar5);
      String::to_lower();
      lVar2 = local_38;
      if (local_38 != 0) {
         LOCK();
         plVar1 = (long*)( local_38 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_38 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }
      }
      cVar3 = String::begins_with((String*)&local_48);
      lVar2 = local_40;
      if (cVar3 != '\0') {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
         goto LAB_00100a2e;
      }
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
      iVar5 = iVar5 + 1;
   } while ( true );
}/* DirAccess::fix_path(String const&) const */String *DirAccess::fix_path(String *param_1) {
   int iVar1;
   char cVar2;
   long lVar3;
   long *plVar4;
   CowData *in_RDX;
   long in_RSI;
   String *this;
   CowData<char32_t> *this_00;
   CowData<char32_t> *pCVar5;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   pCVar5 = (CowData<char32_t>*)&local_58;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = *(int*)( in_RSI + 0x17c );
   if (iVar1 == 1) {
      cVar2 = String::begins_with((char*)in_RDX);
      if (cVar2 != '\0') {
         plVar4 = (long*)OS::get_singleton();
         ( **(code**)( *plVar4 + 0x2a8 ) )(&local_58, plVar4);
         this_00 = (CowData<char32_t>*)&local_58;
         if (( local_58 == 0 ) || ( this_00 = (CowData<char32_t>*)&local_58 * (uint*)( local_58 + -8 ) < 2 )) goto LAB_00100b90;
         this(String * ) & local_50;
         local_50 = 0;
         local_48 = "user:/";
         local_40 = 6;
         String::parse_latin1((StrRange*)this);
         LAB_00100bfa:String::replace_first(param_1, (String*)in_RDX);
         CowData<char32_t>::_unref((CowData<char32_t>*)this);
         this_00 = pCVar5;
         goto LAB_00100ba5;
      }
   } else if (( ( ( iVar1 != 2 ) && ( iVar1 == 0 ) ) && ( lVar3 = ProjectSettings::get_singleton() ),lVar3 != 0 )) {
      ProjectSettings::get_singleton();
      pCVar5 = (CowData<char32_t>*)&local_50;
      ProjectSettings::get_resource_path();
      this_00 = pCVar5;
      if (( local_50 != 0 ) && ( 1 < *(uint*)( local_50 + -8 ) )) {
         this(String * ) & local_48;
         local_48 = (char*)0x0;
         String::parse_latin1(this, "res:/");
         goto LAB_00100bfa;
      }
      LAB_00100b90:String::replace_first((char*)param_1, (char*)in_RDX);
      LAB_00100ba5:CowData<char32_t>::_unref(this_00);
      goto LAB_00100b29;
   }
   *(undefined8*)param_1 = 0;
   if (*(long*)in_RDX != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)param_1, in_RDX);
   }
   LAB_00100b29:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* DirAccess::create(DirAccess::AccessType) */DirAccess * __thiscall DirAccess::create(DirAccess *this,int param_2){
   long *plVar1;
   code *pcVar2;
   long in_FS_OFFSET;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( create_func + (long)param_2 * 8 ) == (code*)0x0) {
      *(undefined8*)this = 0;
   } else {
      ( **(code**)( create_func + (long)param_2 * 8 ) )();
      plVar1 = *(long**)this;
      if (plVar1 != (long*)0x0) {
         *(int*)( (long)plVar1 + 0x17c ) = param_2;
         if (param_2 == 0) {
            pcVar2 = *(code**)( *plVar1 + 0x1a8 );
            local_48 = "res://";
            local_40 = 6;
         } else {
            if (param_2 != 1) goto LAB_00100ca5;
            pcVar2 = *(code**)( *plVar1 + 0x1a8 );
            local_48 = "user://";
            local_40 = 7;
         }
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         ( *pcVar2 )(plVar1, (StrRange*)&local_50);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      }
   }
   LAB_00100ca5:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* DirAccess::create_for_path(String const&) */DirAccess * __thiscall DirAccess::create_for_path(DirAccess *this,String *param_1){
   Object *pOVar1;
   char cVar2;
   Object *pOVar3;
   long in_FS_OFFSET;
   Object *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   cVar2 = String::begins_with((char*)param_1);
   if (cVar2 == '\0') {
      String::begins_with((char*)param_1);
   }
   create((DirAccess*)&local_28);
   pOVar1 = *(Object**)this;
   pOVar3 = pOVar1;
   if (local_28 != pOVar1) {
      *(Object**)this = local_28;
      if (local_28 == (Object*)0x0) {
         if (pOVar1 == (Object*)0x0) goto LAB_00100e06;
         cVar2 = RefCounted::unreference();
      } else {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)this = 0;
         }
         pOVar3 = local_28;
         if (pOVar1 == (Object*)0x0) goto LAB_00100df1;
         cVar2 = RefCounted::unreference();
      }
      pOVar3 = local_28;
      if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar1) ),pOVar3 = local_28,cVar2 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
         pOVar3 = local_28;
      }
   }
   LAB_00100df1:if (( ( pOVar3 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)local_28 + 0x140 ))(local_28);
   Memory::free_static(local_28, false);
}LAB_00100e06:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return this;
}/* WARNING: Subroutine does not return */__stack_chk_fail();}/* DirAccess::make_dir_absolute(String const&) */undefined4 DirAccess::make_dir_absolute(String *param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   char cVar4;
   undefined4 uVar5;
   long lVar6;
   long in_FS_OFFSET;
   bool bVar7;
   Object *local_30;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   create_for_path((DirAccess*)&local_30, param_1);
   local_28 = 0;
   pcVar2 = *(code**)( *(long*)local_30 + 0x1b8 );
   if (*(long*)param_1 != 0) {
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar3 = *plVar1;
         if (lVar3 == 0) goto LAB_00100f3f;
         LOCK();
         lVar6 = *plVar1;
         bVar7 = lVar3 == lVar6;
         if (bVar7) {
            *plVar1 = lVar3 + 1;
            lVar6 = lVar3;
         }
         UNLOCK();
      } while ( !bVar7 );
      if (lVar6 != -1) {
         local_28 = *(long*)param_1;
      }
   }
   LAB_00100f3f:uVar5 = ( *pcVar2 )();
   lVar3 = local_28;
   if (local_28 != 0) {
      LOCK();
      plVar1 = (long*)( local_28 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_28 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   if (( ( local_30 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)local_30 + 0x140 ))(local_30);
   Memory::free_static(local_30, false);
}if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}return uVar5;}/* DirAccess::dir_exists_absolute(String const&) */undefined4 DirAccess::dir_exists_absolute(String *param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   char cVar4;
   undefined4 uVar5;
   long lVar6;
   long in_FS_OFFSET;
   bool bVar7;
   Object *local_30;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   create_for_path((DirAccess*)&local_30, param_1);
   local_28 = 0;
   pcVar2 = *(code**)( *(long*)local_30 + 0x1d8 );
   if (*(long*)param_1 != 0) {
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar3 = *plVar1;
         if (lVar3 == 0) goto LAB_0010104f;
         LOCK();
         lVar6 = *plVar1;
         bVar7 = lVar3 == lVar6;
         if (bVar7) {
            *plVar1 = lVar3 + 1;
            lVar6 = lVar3;
         }
         UNLOCK();
      } while ( !bVar7 );
      if (lVar6 != -1) {
         local_28 = *(long*)param_1;
      }
   }
   LAB_0010104f:uVar5 = ( *pcVar2 )();
   lVar3 = local_28;
   if (local_28 != 0) {
      LOCK();
      plVar1 = (long*)( local_28 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_28 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   if (( ( local_30 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)local_30 + 0x140 ))(local_30);
   Memory::free_static(local_30, false);
}if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}return uVar5;}/* DirAccess::remove_absolute(String const&) */undefined4 DirAccess::remove_absolute(String *param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   char cVar4;
   undefined4 uVar5;
   long lVar6;
   long in_FS_OFFSET;
   bool bVar7;
   Object *local_30;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   create_for_path((DirAccess*)&local_30, param_1);
   local_28 = 0;
   pcVar2 = *(code**)( *(long*)local_30 + 0x208 );
   if (*(long*)param_1 != 0) {
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar3 = *plVar1;
         if (lVar3 == 0) goto LAB_0010115f;
         LOCK();
         lVar6 = *plVar1;
         bVar7 = lVar3 == lVar6;
         if (bVar7) {
            *plVar1 = lVar3 + 1;
            lVar6 = lVar3;
         }
         UNLOCK();
      } while ( !bVar7 );
      if (lVar6 != -1) {
         local_28 = *(long*)param_1;
      }
   }
   LAB_0010115f:uVar5 = ( *pcVar2 )();
   lVar3 = local_28;
   if (local_28 != 0) {
      LOCK();
      plVar1 = (long*)( local_28 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_28 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   if (( ( local_30 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)local_30 + 0x140 ))(local_30);
   Memory::free_static(local_30, false);
}if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}return uVar5;}/* DirAccess::exists(String const&) */ulong DirAccess::exists(String *param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   char cVar4;
   int iVar5;
   long lVar6;
   undefined8 unaff_RBP;
   long in_FS_OFFSET;
   bool bVar7;
   Object *local_30;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   create_for_path((DirAccess*)&local_30, param_1);
   local_28 = 0;
   pcVar2 = *(code**)( *(long*)local_30 + 0x1a8 );
   if (*(long*)param_1 != 0) {
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar3 = *plVar1;
         if (lVar3 == 0) goto LAB_0010126f;
         LOCK();
         lVar6 = *plVar1;
         bVar7 = lVar3 == lVar6;
         if (bVar7) {
            *plVar1 = lVar3 + 1;
            lVar6 = lVar3;
         }
         UNLOCK();
      } while ( !bVar7 );
      if (lVar6 != -1) {
         local_28 = *(long*)param_1;
      }
   }
   LAB_0010126f:iVar5 = ( *pcVar2 )();
   lVar3 = local_28;
   if (local_28 != 0) {
      LOCK();
      plVar1 = (long*)( local_28 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_28 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   if (( ( local_30 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)local_30 + 0x140 ))(local_30);
   Memory::free_static(local_30, false);
}if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}return CONCAT71(( int7 )((ulong)unaff_RBP >> 8), iVar5 == 0) & 0xffffffff;}/* DirAccess::get_full_path(String const&, DirAccess::AccessType) */DirAccess * __thiscall DirAccess::get_full_path(DirAccess *this,CowData *param_1,undefined4 param_3){
   long *plVar1;
   code *pcVar2;
   long lVar3;
   char cVar4;
   long lVar5;
   long in_FS_OFFSET;
   bool bVar6;
   Object *local_30;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   create((DirAccess*)&local_30, param_3);
   if (local_30 == (Object*)0x0) {
      *(undefined8*)this = 0;
      if (*(long*)param_1 == 0) goto LAB_001013f2;
      CowData<char32_t>::_ref((CowData<char32_t>*)this, param_1);
   } else {
      pcVar2 = *(code**)( *(long*)local_30 + 0x1a8 );
      local_28 = 0;
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
      if (*(long*)param_1 != 0) {
         do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010138c;
            LOCK();
            lVar5 = *plVar1;
            bVar6 = lVar3 == lVar5;
            if (bVar6) {
               *plVar1 = lVar3 + 1;
               lVar5 = lVar3;
            }
            UNLOCK();
         } while ( !bVar6 );
         if (lVar5 != -1) {
            local_28 = *(long*)param_1;
         }
      }
      LAB_0010138c:( *pcVar2 )();
      lVar3 = local_28;
      if (local_28 != 0) {
         LOCK();
         plVar1 = (long*)( local_28 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_28 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }
      }
      ( **(code**)( *(long*)local_30 + 0x1b0 ) )(&local_28, local_30, 1);
      *(long*)this = local_28;
   }
   if (( ( local_30 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)local_30 + 0x140 ))(local_30);
   Memory::free_static(local_30, false);
}LAB_001013f2:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}return this;}/* WARNING: Removing unreachable block (ram,0x001017f0) *//* WARNING: Removing unreachable block (ram,0x00101890) *//* WARNING: Removing unreachable block (ram,0x0010189d) *//* WARNING: Removing unreachable block (ram,0x001018b2) *//* DirAccess::copy(String const&, String const&, int) */int DirAccess::copy(DirAccess *this, String *param_1, String *param_2, int param_3) {
   code *pcVar1;
   char cVar2;
   uint uVar3;
   int iVar4;
   ulong uVar5;
   void *pvVar6;
   ulong uVar7;
   long in_FS_OFFSET;
   int local_7c;
   Object *local_78;
   Object *local_70;
   undefined8 local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar2 = String::operator ==(param_1, param_2);
   if (cVar2 == '\0') {
      FileAccess::open((String*)&local_78, (int)param_1, (Error*)0x1);
      if (local_7c == 0) {
         FileAccess::open((String*)&local_70, (int)param_2, (Error*)0x2);
         ( **(code**)( *(long*)local_78 + 0x1c0 ) )();
         uVar5 = ( **(code**)( *(long*)local_78 + 0x1c8 ) )();
         ( **(code**)( *(long*)local_78 + 0x1b8 ) )();
         local_7c = 0;
         if (uVar5 != 0) {
            uVar7 = 0x10000;
            if (uVar5 < 0x10001) {
               uVar7 = uVar5;
            }
            uVar3 = (int)uVar7 - 1;
            uVar3 = uVar3 | uVar3 >> 1;
            uVar3 = uVar3 >> 2 | uVar3;
            uVar3 = uVar3 >> 4 | uVar3;
            pvVar6 = (void*)Memory::realloc_static((void*)0x0, ( ulong )(( uVar3 | uVar3 >> 8 ) + 1), false);
            if (pvVar6 == (void*)0x0) {
               _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }
            do {
               iVar4 = ( **(code**)( *(long*)local_78 + 0x250 ) )();
               if (iVar4 != 0) {
                  local_7c = ( **(code**)( *(long*)local_78 + 0x250 ) )();
                  break;
               }
               iVar4 = ( **(code**)( *(long*)local_70 + 0x250 ) )();
               if (iVar4 != 0) {
                  local_7c = ( **(code**)( *(long*)local_70 + 0x250 ) )();
                  break;
               }
               iVar4 = ( **(code**)( *(long*)local_78 + 0x220 ) )(local_78, pvVar6, uVar7);
               if (iVar4 < 1) {
                  local_7c = 1;
                  break;
               }
               ( **(code**)( *(long*)local_70 + 0x2d0 ) )(local_70, pvVar6, (long)iVar4);
               uVar5 = uVar5 - (long)iVar4;
            } while ( uVar5 != 0 );
            Memory::free_static(pvVar6, false);
         }
         if (( ( local_70 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)local_70 + 0x140 ))(local_70);
         Memory::free_static(local_70, false);
      }
      if (( ( local_78 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)local_78 + 0x140 ))(local_78);
      Memory::free_static(local_78, false);
   }
   if (( local_7c == 0 ) && ( param_3 != -1 )) {
      local_7c = FileAccess::set_unix_permissions(param_2, (long)param_3);
      if (local_7c == 2) {
         local_7c = 0;
      }
   }
}else{local_60 = 0;CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)param_1);local_58 = "Failed to open \'%s\'.";local_68 = 0;local_50 = 0x14;String::parse_latin1((StrRange*)&local_68);vformat<String>((CowData<char32_t>*)&local_58, (StrRange*)&local_68, (CowData<char32_t>*)&local_60);_err_print_error(&_LC23, "core/io/dir_access.cpp", 0x1a6, "Condition \"err != OK\" is true. Returning: err", (CowData<char32_t>*)&local_58, 0, 0);CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);if (( ( local_78 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)local_78 + 0x140 ))(local_78);Memory::free_static(local_78, false);}
    }
  }
  else{
   _err_print_error(&_LC23, "core/io/dir_access.cpp", 0x1a0, "Condition \"p_from == p_to\" is true. Returning: ERR_INVALID_PARAMETER", "Source and destination path are equal.", 0, 0);
   local_7c = 0x1f;
}if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return local_7c;
}/* WARNING: Subroutine does not return */__stack_chk_fail();}/* DirAccess::erase_contents_recursive() */void DirAccess::erase_contents_recursive(DirAccess *this) {
   _erase_recursive(this);
   return;
}/* DirAccess::_copy_dir(Ref<DirAccess>&, String const&, int, bool) */int DirAccess::_copy_dir(DirAccess *this, Ref *param_1, String *param_2, int param_3, bool param_4) {
   long *plVar1;
   code *pcVar2;
   code *pcVar3;
   undefined1(*pauVar4)[16];
   char *pcVar5;
   char *pcVar6;
   char cVar7;
   int iVar8;
   long lVar9;
   CowData<char32_t> *this_00;
   undefined8 uVar10;
   CowData *pCVar11;
   long in_FS_OFFSET;
   undefined1(*local_88)[16];
   CowData<char32_t> local_80[8];
   char *local_78;
   long local_70;
   undefined8 local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = (undefined1(*) [16])0x0;
   ( **(code**)( *(long*)this + 0x1b0 ) )(local_80, this, 1);
   ( **(code**)( *(long*)this + 0x160 ) )(this);
   ( **(code**)( *(long*)this + 0x168 ) )((String*)&local_78, this);
   if (local_78 == (char*)0x0) {
      ( **(code**)( *(long*)this + 0x180 ) )(this);
   } else {
      do {
         if (*(uint*)( local_78 + -8 ) < 2) break;
         cVar7 = String::operator !=((String*)&local_78, ".");
         if (( cVar7 != '\0' ) && ( cVar7 = String::operator !=((String*)&local_78, "..") ),cVar7 != '\0') {
            lVar9 = *(long*)this;
            if (param_4) {
               pcVar2 = *(code**)( lVar9 + 0x210 );
               ( **(code**)( lVar9 + 0x1b0 ) )((CowData<char32_t>*)&local_60, this, 1);
               String::path_join((String*)&local_58);
               cVar7 = ( *pcVar2 )(this, (String*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               lVar9 = *(long*)this;
               if (cVar7 != '\0') {
                  pcVar2 = *(code**)( lVar9 + 0x220 );
                  String::operator +((String*)&local_58, param_2);
                  pcVar3 = *(code**)( *(long*)this + 0x218 );
                  ( **(code**)( *(long*)this + 0x1b0 ) )((CowData<char32_t>*)&local_70, this, 1);
                  String::path_join((String*)&local_68);
                  ( *pcVar3 )((CowData<char32_t>*)&local_60, this, (String*)&local_68);
                  ( *pcVar2 )(this, (CowData<char32_t>*)&local_60, (String*)&local_58);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                  goto LAB_00102243;
               }
            }
            cVar7 = ( **(code**)( lVar9 + 0x170 ) )(this);
            if (cVar7 == '\0') {
               cVar7 = String::is_relative_path();
               if (cVar7 == '\0') {
                  iVar8 = 0x2f;
                  ( **(code**)( *(long*)this + 0x180 ) )(this);
                  goto LAB_001025dd;
               }
               pcVar2 = *(code**)( *(long*)this + 0x1f8 );
               String::operator +((String*)&local_58, param_2);
               ( **(code**)( *(long*)this + 0x1b0 ) )((CowData<char32_t>*)&local_68, this, 1);
               String::path_join((String*)&local_60);
               iVar8 = ( *pcVar2 )(this, (String*)&local_60, (String*)&local_58, param_3);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               if (iVar8 != 0) {
                  ( **(code**)( *(long*)this + 0x180 ) )(this);
                  goto LAB_001025dd;
               }
            } else {
               if (local_88 == (undefined1(*) [16])0x0) {
                  local_88 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined4*)local_88[1] = 0;
                  *local_88 = (undefined1[16])0x0;
               }
               pauVar4 = local_88;
               this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
               *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
               *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
               if (local_78 != (char*)0x0) {
                  CowData<char32_t>::_ref(this_00, (CowData*)&local_78);
               }
               lVar9 = *(long*)( *pauVar4 + 8 );
               *(undefined1(**) [16])( this_00 + 0x18 ) = pauVar4;
               *(undefined8*)( this_00 + 8 ) = 0;
               *(long*)( this_00 + 0x10 ) = lVar9;
               if (lVar9 != 0) {
                  *(CowData<char32_t>**)( lVar9 + 8 ) = this_00;
               }
               lVar9 = *(long*)*pauVar4;
               *(CowData<char32_t>**)( *pauVar4 + 8 ) = this_00;
               if (lVar9 == 0) {
                  *(CowData<char32_t>**)*pauVar4 = this_00;
               }
               *(int*)pauVar4[1] = *(int*)pauVar4[1] + 1;
            }
         }
         LAB_00102243:( **(code**)( *(long*)this + 0x168 ) )((String*)&local_58);
         pcVar6 = local_58;
         pcVar5 = local_78;
         if (local_78 == local_58) {
            if (local_58 == (char*)0x0) break;
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar6 + -0x10, false);
            }
         } else {
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
            local_78 = local_58;
         }
      } while ( local_78 != (char*)0x0 );
      pauVar4 = local_88;
      ( **(code**)( *(long*)this + 0x180 ) )(this);
      if (( pauVar4 != (undefined1(*) [16])0x0 ) && ( pCVar11 = *(CowData**)*pauVar4 ),pCVar11 != (CowData*)0x0) {
         do {
            String::operator +((String*)&local_70, param_2);
            plVar1 = *(long**)param_1;
            pcVar2 = *(code**)( *plVar1 + 0x1d8 );
            local_58 = (char*)0x0;
            if (local_70 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_70);
            }
            cVar7 = ( *pcVar2 )(plVar1);
            pcVar5 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( (long)local_58 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static((void*)( (long)pcVar5 + -0x10 ), false);
               }
            }
            if (cVar7 == '\0') {
               plVar1 = *(long**)param_1;
               pcVar2 = *(code**)( *plVar1 + 0x1b8 );
               local_58 = (char*)0x0;
               if (local_70 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_70);
               }
               iVar8 = ( *pcVar2 )(plVar1, (CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               if (iVar8 == 0) goto LAB_001020f0;
               local_60 = 0;
               if (local_70 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)&local_70);
               }
               local_68 = 0;
               local_58 = "Cannot create directory \'%s\'.";
               local_50 = 0x1d;
               String::parse_latin1((StrRange*)&local_68);
               vformat<String>((CowData<char32_t>*)&local_58, (String*)&local_68, (StrRange*)&local_60);
               uVar10 = 0x209;
               LAB_001025a6:_err_print_error("_copy_dir", "core/io/dir_access.cpp", uVar10, "Condition \"err != OK\" is true. Returning: err", (CowData<char32_t>*)&local_58, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               LAB_001025d4:CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               goto LAB_001025dd;
            }
            LAB_001020f0:pcVar2 = *(code**)( *(long*)this + 0x1a8 );
            local_58 = (char*)0x0;
            if (*(long*)pCVar11 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, pCVar11);
            }
            iVar8 = ( *pcVar2 )(this, (CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            if (iVar8 != 0) {
               local_60 = 0;
               if (*(long*)pCVar11 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, pCVar11);
               }
               local_68 = 0;
               local_58 = "Cannot change current directory to \'%s\'.";
               local_50 = 0x28;
               String::parse_latin1((StrRange*)&local_68);
               vformat<String>((CowData<char32_t>*)&local_58, (String*)&local_68, (StrRange*)&local_60);
               uVar10 = 0x20d;
               goto LAB_001025a6;
            }
            local_60 = 0;
            local_58 = "/";
            local_50 = 1;
            String::parse_latin1((StrRange*)&local_60);
            String::operator +((String*)&local_68, param_2);
            String::operator +((String*)&local_58, (String*)&local_68);
            iVar8 = _copy_dir(this, param_1, (String*)&local_58, param_3, param_4);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (iVar8 != 0) {
               pcVar2 = *(code**)( *(long*)this + 0x1a8 );
               local_58 = (char*)0x0;
               String::parse_latin1((String*)&local_58, "..");
               ( *pcVar2 )(this, (CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               _err_print_error("_copy_dir", "core/io/dir_access.cpp", 0x212, "Method/function failed. Returning: err", "Failed to copy recursively.", 0, 0);
               goto LAB_001025d4;
            }
            pcVar2 = *(code**)( *(long*)this + 0x1a8 );
            local_60 = 0;
            local_58 = "..";
            local_50 = 2;
            String::parse_latin1((StrRange*)&local_60);
            iVar8 = ( *pcVar2 )(this, (StrRange*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (iVar8 != 0) {
               _err_print_error("_copy_dir", "core/io/dir_access.cpp", 0x215, "Condition \"err != OK\" is true. Returning: err", "Failed to go back.", 0, 0);
               goto LAB_001025d4;
            }
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            pCVar11 = *(CowData**)( pCVar11 + 8 );
         } while ( pCVar11 != (CowData*)0x0 );
      }
   }
   iVar8 = 0;
   LAB_001025dd:CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref(local_80);
   List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_88);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar8;
}/* WARNING: Removing unreachable block (ram,0x00102c84) *//* SortArray<String, _DefaultComparator<String>, true>::introsort(long, long, String*, long) const
   [clone .isra.0] */void SortArray<String,_DefaultComparator<String>,true>::introsort(long param_1, long param_2, String *param_3, long param_4) {
   long *plVar1;
   long *plVar2;
   char cVar3;
   String *pSVar4;
   String *pSVar5;
   long lVar6;
   long lVar7;
   String *pSVar8;
   CowData *pCVar9;
   String *pSVar10;
   long lVar11;
   long lVar12;
   long in_FS_OFFSET;
   bool bVar13;
   long local_80;
   long local_68;
   long local_60;
   long local_48;
   long local_40;
   lVar12 = param_2 - param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0x10 < lVar12) {
      local_80 = param_2;
      if (param_4 != 0) {
         pSVar4 = param_3 + param_1 * 8;
         local_68 = param_2;
         local_60 = param_4;
         LAB_0010281e:local_60 = local_60 + -1;
         pSVar8 = param_3 + ( ( lVar12 >> 1 ) + param_1 ) * 8;
         pSVar5 = param_3 + local_68 * 8 + -8;
         cVar3 = String::operator <(pSVar4, pSVar8);
         if (cVar3 == '\0') {
            cVar3 = String::operator <(pSVar4, pSVar5);
            pSVar10 = pSVar4;
            if (cVar3 != '\0') goto LAB_0010287c;
            cVar3 = String::operator <(pSVar8, pSVar5);
         } else {
            cVar3 = String::operator <(pSVar8, pSVar5);
            pSVar10 = pSVar8;
            if (cVar3 != '\0') goto LAB_0010287c;
            cVar3 = String::operator <(pSVar4, pSVar5);
            pSVar8 = pSVar4;
         }
         pSVar10 = pSVar8;
         if (cVar3 != '\0') {
            pSVar10 = pSVar5;
         }
         LAB_0010287c:local_48 = 0;
         plVar1 = (long*)( *(long*)pSVar10 + -0x10 );
         if (*(long*)pSVar10 != 0) {
            do {
               lVar12 = *plVar1;
               if (lVar12 == 0) goto LAB_001028b4;
               LOCK();
               lVar11 = *plVar1;
               bVar13 = lVar12 == lVar11;
               if (bVar13) {
                  *plVar1 = lVar12 + 1;
                  lVar11 = lVar12;
               }
               UNLOCK();
            } while ( !bVar13 );
            if (lVar11 != -1) {
               local_48 = *(long*)pSVar10;
            }
         }
         LAB_001028b4:pSVar8 = pSVar4;
         local_80 = param_1;
         lVar12 = local_68;
         do {
            cVar3 = String::operator <(pSVar8, (String*)&local_48);
            if (cVar3 == '\0') {
               LAB_001028f7:lVar12 = lVar12 + -1;
               pSVar5 = param_3 + lVar12 * 8;
               while (cVar3 = String::operator <((String*)&local_48, pSVar5),cVar3 != '\0') {
                  if (param_1 == lVar12) {
                     _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
                     break;
                  }
                  lVar12 = lVar12 + -1;
                  pSVar5 = pSVar5 + -8;
               };
               if (lVar12 <= local_80) goto LAB_00102990;
               lVar11 = *(long*)pSVar8;
               *(undefined8*)pSVar8 = 0;
               if (*(long*)pSVar5 != 0) {
                  *(long*)pSVar8 = *(long*)pSVar5;
                  *(undefined8*)pSVar5 = 0;
               }
               if (lVar11 != 0) {
                  *(long*)pSVar5 = lVar11;
               }
            } else if (local_68 + -1 == local_80) {
               _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
               goto LAB_001028f7;
            }
            pSVar8 = pSVar8 + 8;
            local_80 = local_80 + 1;
         } while ( true );
      }
      LAB_00102a5a:lVar11 = lVar12 + -2 >> 1;
      pCVar9 = (CowData*)( param_3 + param_1 * 8 );
      do {
         local_48 = 0;
         plVar1 = (long*)( *(long*)( pCVar9 + lVar11 * 8 ) + -0x10 );
         if (*(long*)( pCVar9 + lVar11 * 8 ) == 0) {
            adjust_heap(param_1, lVar11, lVar12, &local_48, param_3);
         } else {
            do {
               lVar6 = *plVar1;
               if (lVar6 == 0) goto LAB_00102a9e;
               LOCK();
               lVar7 = *plVar1;
               bVar13 = lVar6 == lVar7;
               if (bVar13) {
                  *plVar1 = lVar6 + 1;
                  lVar7 = lVar6;
               }
               UNLOCK();
            } while ( !bVar13 );
            if (lVar7 != -1) {
               local_48 = *(long*)( pCVar9 + lVar11 * 8 );
            }
            LAB_00102a9e:lVar6 = local_48;
            adjust_heap(param_1, lVar11, lVar12, &local_48, param_3);
            if (lVar6 != 0) {
               LOCK();
               plVar1 = (long*)( lVar6 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static((void*)( local_48 + -0x10 ), false);
               }
            }
         }
         if (lVar11 == 0) goto LAB_00102b0b;
         lVar11 = lVar11 + -1;
      } while ( true );
   }
   goto LAB_00102a2f;
   LAB_00102990:CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   introsort(local_80, local_68, param_3, local_60);
   lVar12 = local_80 - param_1;
   if (lVar12 < 0x11) goto LAB_00102a2f;
   local_68 = local_80;
   if (local_60 == 0) goto LAB_00102a5a;
   goto LAB_0010281e;
   LAB_00102b0b:pSVar4 = param_3 + local_80 * 8 + -8;
   lVar12 = ( local_80 + -1 ) - param_1;
   do {
      plVar1 = (long*)( *(long*)pSVar4 + -0x10 );
      if (*(long*)pSVar4 == 0) {
         LAB_00102c18:if (*(long*)pCVar9 != *(long*)pSVar4) {
            CowData<char32_t>::_ref((CowData<char32_t>*)pSVar4, pCVar9);
         }
         LAB_00102c38:local_48 = 0;
         adjust_heap(param_1, 0, lVar12, &local_48, param_3);
      } else {
         do {
            lVar11 = *plVar1;
            if (lVar11 == 0) goto LAB_00102c18;
            LOCK();
            lVar6 = *plVar1;
            bVar13 = lVar11 == lVar6;
            if (bVar13) {
               *plVar1 = lVar11 + 1;
               lVar6 = lVar11;
            }
            UNLOCK();
         } while ( !bVar13 );
         if (lVar6 == -1) goto LAB_00102c18;
         lVar11 = *(long*)pSVar4;
         if (lVar11 != *(long*)pCVar9) {
            CowData<char32_t>::_ref((CowData<char32_t>*)pSVar4, pCVar9);
         }
         local_48 = 0;
         if (lVar11 == 0) goto LAB_00102c38;
         plVar1 = (long*)( lVar11 + -0x10 );
         do {
            lVar6 = *plVar1;
            if (lVar6 == 0) goto LAB_00102c5d;
            LOCK();
            lVar7 = *plVar1;
            bVar13 = lVar6 == lVar7;
            if (bVar13) {
               *plVar1 = lVar6 + 1;
               lVar7 = lVar6;
            }
            UNLOCK();
         } while ( !bVar13 );
         if (lVar7 == -1) {
            LAB_00102c5d:adjust_heap(param_1, 0, lVar12, &local_48, param_3);
         } else {
            local_48 = lVar11;
            adjust_heap(param_1, 0, lVar12, &local_48, param_3);
            LOCK();
            plVar2 = (long*)( lVar11 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               Memory::free_static((void*)( local_48 + -0x10 ), false);
            }
         }
         LOCK();
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static(plVar1, false);
         }
      }
      pSVar4 = (String*)( (CowData<char32_t>*)pSVar4 + -8 );
      bVar13 = 1 < lVar12;
      lVar12 = lVar12 + -1;
   } while ( bVar13 );
   LAB_00102a2f:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* DirAccess::open(String const&, Error*) */DirAccess * __thiscall DirAccess::open(DirAccess *this,String *param_1,Error *param_2){
   long *plVar1;
   code *pcVar2;
   char *pcVar3;
   char cVar4;
   int iVar5;
   Object *pOVar6;
   long in_FS_OFFSET;
   Object *local_70;
   undefined8 local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   create_for_path((DirAccess*)&local_70, param_1);
   pOVar6 = local_70;
   if (local_70 == (Object*)0x0) {
      local_60 = 0;
      if (*(long*)param_1 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)param_1);
      }
      local_68 = 0;
      local_50 = 0x26;
      local_58 = "Cannot create DirAccess for path \'%s\'.";
      String::parse_latin1((StrRange*)&local_68);
      vformat<String>((CowData<char32_t>*)&local_58, (StrRange*)&local_68, (CowData<char32_t>*)&local_60);
      _err_print_error(&_LC52, "core/io/dir_access.cpp", 0xf2, "Condition \"da.is_null()\" is true. Returning: nullptr", (CowData<char32_t>*)&local_58, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      *(undefined8*)this = 0;
      goto LAB_00102d71;
   }
   pcVar2 = *(code**)( *(long*)local_70 + 0x1a8 );
   local_58 = (char*)0x0;
   if (*(long*)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)param_1);
   }
   iVar5 = ( *pcVar2 )(pOVar6);
   pcVar3 = local_58;
   if (local_58 == (char*)0x0) {
      if (param_2 != (Error*)0x0) {
         *(int*)param_2 = iVar5;
      }
      if (iVar5 == 0) goto LAB_00102da9;
      LAB_00102db9:*(undefined8*)this = 0;
   } else {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      pOVar6 = local_70;
      if (*plVar1 == 0) {
         local_58 = (char*)0x0;
         Memory::free_static(pcVar3 + -0x10, false);
         pOVar6 = local_70;
      }
      if (param_2 != (Error*)0x0) {
         *(int*)param_2 = iVar5;
      }
      if (iVar5 == 0) {
         if (pOVar6 == (Object*)0x0) {
            *(undefined8*)this = 0;
            goto LAB_00102d71;
         }
         LAB_00102da9:*(Object**)this = pOVar6;
         cVar4 = RefCounted::reference();
         if (cVar4 == '\0') goto LAB_00102db9;
      } else {
         *(undefined8*)this = 0;
         if (pOVar6 == (Object*)0x0) goto LAB_00102d71;
      }
   }
   cVar4 = RefCounted::unreference();
   if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler(pOVar6) ),cVar4 != '\0') {
      ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
      Memory::free_static(pOVar6, false);
   }
   LAB_00102d71:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return this;
}/* DirAccess::_open(String const&) */DirAccess * __thiscall DirAccess::_open(DirAccess *this,String *param_1){
   char cVar1;
   int *in_FS_OFFSET;
   int local_2c;
   Object *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 10 );
   local_2c = 0;
   open((DirAccess*)&local_28, param_1, (Error*)&local_2c);
   *in_FS_OFFSET = local_2c;
   *(undefined8*)this = 0;
   if (local_2c == 0) {
      if (local_28 == (Object*)0x0) goto LAB_00102f75;
      *(Object**)this = local_28;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *(undefined8*)this = 0;
      }
   } else if (local_28 == (Object*)0x0) goto LAB_00102f75;
   cVar1 = RefCounted::unreference();
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_28);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)local_28 + 0x140 ) )(local_28);
         Memory::free_static(local_28, false);
      }
   }
   LAB_00102f75:if (local_20 == *(long*)( in_FS_OFFSET + 10 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* DirAccess::_delete_temp() */void DirAccess::_delete_temp(DirAccess *this) {
   String *pSVar1;
   char cVar2;
   long in_FS_OFFSET;
   int local_2c;
   DirAccess *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( this[0x182] != (DirAccess)0x0 ) && ( this[0x183] == (DirAccess)0x0 )) {
      pSVar1 = (String*)( this + 0x188 );
      cVar2 = exists(pSVar1);
      if (cVar2 != '\0') {
         open((DirAccess*)&local_28, pSVar1, (Error*)&local_2c);
         if (local_2c == 0) {
            if (*(code**)( *(long*)local_28 + 0x1c8 ) == erase_contents_recursive) {
               local_2c = _erase_recursive(local_28);
            } else {
               local_2c = ( **(code**)( *(long*)local_28 + 0x1c8 ) )();
            }
            if (local_2c == 0) {
               Ref<DirAccess>::unref((Ref<DirAccess>*)&local_28);
               if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  remove_absolute(pSVar1);
                  return;
               }
               goto LAB_0010313e;
            }
         } else if (local_28 == (DirAccess*)0x0) goto LAB_0010301e;
         cVar2 = RefCounted::unreference();
         if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler((Object*)local_28) ),cVar2 != '\0') {
            ( **(code**)( *(long*)local_28 + 0x140 ) )(local_28);
            if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Memory::free_static(local_28, false);
               return;
            }
            goto LAB_0010313e;
         }
      }
   }
   LAB_0010301e:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_0010313e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* DirAccess::~DirAccess() */void DirAccess::~DirAccess(DirAccess *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_001191c0;
   _delete_temp(this);
   if (*(long*)( this + 0x188 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x188 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x188 );
         *(undefined8*)( this + 0x188 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   *(undefined***)this = &PTR__initialize_classv_00119060;
   Object::~Object((Object*)this);
   return;
}/* DirAccess::~DirAccess() */void DirAccess::~DirAccess(DirAccess *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_001191c0;
   _delete_temp(this);
   if (*(long*)( this + 0x188 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x188 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x188 );
         *(undefined8*)( this + 0x188 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   *(undefined***)this = &PTR__initialize_classv_00119060;
   Object::~Object((Object*)this);
   operator_delete(this, 400);
   return;
}/* DirAccess::create_temp(String const&, bool, Error*) */DirAccess * __thiscall
DirAccess::create_temp(DirAccess *this,String *param_1,bool param_2,Error *param_3){
   code *pcVar1;
   long lVar2;
   char *pcVar3;
   char *pcVar4;
   char cVar5;
   bool bVar6;
   char cVar7;
   long *plVar8;
   int iVar9;
   long in_FS_OFFSET;
   char local_a6;
   long local_90;
   long *local_88;
   char *local_80;
   long local_78;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_90 = 0;
   local_58 = "Error while creating temporary directory";
   local_50 = 0x28;
   String::parse_latin1((StrRange*)&local_90);
   cVar5 = String::is_valid_filename();
   if (cVar5 == '\0') {
      lVar2 = *(long*)param_1;
      *(undefined4*)param_3 = 9;
      local_60 = 0;
      if (lVar2 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)param_1);
      }
      local_68 = 0;
      if (local_90 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_90);
      }
      local_70 = 0;
      local_58 = "%s: \"%s\" is not a valid prefix.";
      local_50 = 0x1f;
      String::parse_latin1((StrRange*)&local_70);
      vformat<String,String>((CowData<char32_t>*)&local_58, (StrRange*)&local_70, (CowData<char32_t>*)&local_68, (CowData<char32_t>*)&local_60);
      _err_print_error("create_temp", "core/io/dir_access.cpp", 0x14b, "Method/function failed. Returning: Ref<FileAccess>()", (CowData<char32_t>*)&local_58, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      *(undefined8*)this = 0;
   } else {
      plVar8 = (long*)OS::get_singleton();
      iVar9 = 0;
      ( **(code**)( *plVar8 + 0x288 ) )((CowData<char32_t>*)&local_58, plVar8);
      open((DirAccess*)&local_88, (String*)&local_58, (Error*)0x0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      local_80 = (char*)0x0;
      while (true) {
         bVar6 = (bool)Time::get_singleton();
         Time::get_datetime_string_from_system(SUB81((CowData<char32_t>*)&local_68, 0), bVar6);
         String::replace((char*)&local_60, (char*)&local_68);
         String::replace((char*)&local_58, (char*)&local_60);
         String::replace((char*)&local_78, (char*)&local_58);
         pcVar3 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar8 = (long*)( local_58 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }
         }
         lVar2 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar8 = (long*)( local_60 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
         lVar2 = local_68;
         if (local_68 != 0) {
            LOCK();
            plVar8 = (long*)( local_68 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               local_68 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
         Time::get_singleton();
         Time::get_ticks_usec();
         itos((long)&local_58);
         String::operator +=((String*)&local_78, (String*)&local_58);
         pcVar3 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar8 = (long*)( local_58 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }
         }
         if (iVar9 == 0) {
            local_60 = 0;
            local_58 = "";
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_60);
         } else {
            itos((long)&local_60);
         }
         String::operator +((String*)&local_70, (String*)&local_78);
         lVar2 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar8 = (long*)( local_60 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
         if (( *(long*)param_1 == 0 ) || ( *(uint*)( *(long*)param_1 + -8 ) < 2 )) {
            local_60 = 0;
            local_58 = "";
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_60);
            local_a6 = '\0';
         } else {
            local_68 = 0;
            local_58 = "-";
            local_50 = 1;
            String::parse_latin1((StrRange*)&local_68);
            String::operator +((String*)&local_60, param_1);
            local_a6 = cVar5;
         }
         String::operator +((String*)&local_58, (String*)&local_60);
         pcVar4 = local_58;
         pcVar3 = local_80;
         if (local_80 == local_58) {
            if (local_80 != (char*)0x0) {
               LOCK();
               plVar8 = (long*)( local_80 + -0x10 );
               *plVar8 = *plVar8 + -1;
               UNLOCK();
               if (*plVar8 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar4 + -0x10, false);
               }
            }
         } else {
            if (local_80 != (char*)0x0) {
               LOCK();
               plVar8 = (long*)( local_80 + -0x10 );
               *plVar8 = *plVar8 + -1;
               UNLOCK();
               if (*plVar8 == 0) {
                  local_80 = (char*)0x0;
                  Memory::free_static(pcVar3 + -0x10, false);
               }
            }
            local_80 = local_58;
         }
         lVar2 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar8 = (long*)( local_60 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
         if (local_a6 == '\0') {
            cVar7 = String::is_valid_filename();
         } else {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            cVar7 = String::is_valid_filename();
         }
         if (cVar7 == '\0') {
            *(undefined4*)param_3 = 9;
            *(undefined8*)this = 0;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            goto LAB_001037d2;
         }
         cVar7 = exists((String*)&local_80);
         lVar2 = local_70;
         if (cVar7 == '\0') break;
         iVar9 = iVar9 + 1;
         if (local_70 != 0) {
            LOCK();
            plVar8 = (long*)( local_70 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
         lVar2 = local_78;
         if (local_78 != 0) {
            LOCK();
            plVar8 = (long*)( local_78 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               local_78 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
      };
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      pcVar1 = *(code**)( *local_88 + 0x1b8 );
      local_58 = (char*)0x0;
      if (local_80 != (char*)0x0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_80);
      }
      iVar9 = ( *pcVar1 )(local_88, (CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (iVar9 == 0) {
         pcVar1 = *(code**)( *local_88 + 0x1a8 );
         local_58 = (char*)0x0;
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_80);
         iVar9 = ( *pcVar1 )(local_88, (CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if (iVar9 == 0) {
            *(undefined1*)( (long)local_88 + 0x182 ) = 1;
            *(bool*)( (long)local_88 + 0x183 ) = param_2;
            ( **(code**)( *local_88 + 0x1b0 ) )((CowData<char32_t>*)&local_58, local_88, 1);
            if ((char*)local_88[0x31] != local_58) {
               CowData<char32_t>::_unref((CowData<char32_t>*)( local_88 + 0x31 ));
               local_88[0x31] = (long)local_58;
               local_58 = (char*)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            *(undefined4*)param_3 = 0;
            *(long**)this = local_88;
            cVar5 = RefCounted::reference();
            if (cVar5 == '\0') {
               *(undefined8*)this = 0;
            }
         } else {
            *(int*)param_3 = iVar9;
            *(undefined8*)this = 0;
         }
      } else {
         local_60 = 0;
         *(int*)param_3 = iVar9;
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)&local_80);
         local_68 = 0;
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_90);
         local_70 = 0;
         String::parse_latin1((String*)&local_70, "%s: \"%s\" couldn\'t create directory \"%s\".");
         vformat<String,String>((CowData<char32_t>*)&local_58, (CowData<char32_t>*)&local_70, (CowData<char32_t>*)&local_68, (StrRange*)&local_60);
         _err_print_error("create_temp", "core/io/dir_access.cpp", 0x164, "Method/function failed. Returning: Ref<FileAccess>()", (CowData<char32_t>*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         *(undefined8*)this = 0;
      }
      LAB_001037d2:CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      Ref<DirAccess>::unref((Ref<DirAccess>*)&local_88);
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* DirAccess::_create_temp(String const&, bool) */DirAccess * __thiscall DirAccess::_create_temp(DirAccess *this,String *param_1,bool param_2){
   long lVar1;
   undefined8 *in_FS_OFFSET;
   lVar1 = in_FS_OFFSET[5];
   create_temp(this, param_1, param_2, (Error*)*in_FS_OFFSET);
   if (lVar1 == in_FS_OFFSET[5]) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* DirAccess::rename_absolute(String const&, String const&) */undefined4 DirAccess::rename_absolute(String *param_1, String *param_2) {
   long *plVar1;
   code *pcVar2;
   Object *pOVar3;
   long lVar4;
   char cVar5;
   undefined4 uVar6;
   long in_FS_OFFSET;
   Object *local_58;
   long local_50;
   long local_48;
   long local_40;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (create_func._16_8_ == 0) {
      local_58 = (Object*)0x0;
   } else {
      ( *(code*)create_func._16_8_ )(&local_58);
      if (local_58 != (Object*)0x0) {
         *(undefined4*)( local_58 + 0x17c ) = 2;
      }
   }
   ProjectSettings::get_singleton();
   ProjectSettings::globalize_path((String*)&local_50);
   ProjectSettings::get_singleton();
   ProjectSettings::globalize_path((String*)&local_48);
   pOVar3 = local_58;
   local_38 = 0;
   pcVar2 = *(code**)( *(long*)local_58 + 0x200 );
   if (local_48 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_38, (CowData*)&local_48);
   }
   local_40 = 0;
   if (local_50 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_40, (CowData*)&local_50);
   }
   uVar6 = ( *pcVar2 )(pOVar3, (CowData<char32_t>*)&local_40, (CowData<char32_t>*)&local_38);
   lVar4 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   lVar4 = local_38;
   if (local_38 != 0) {
      LOCK();
      plVar1 = (long*)( local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   lVar4 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   lVar4 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
   if (local_58 != (Object*)0x0) {
      cVar5 = RefCounted::unreference();
      pOVar3 = local_58;
      if (cVar5 != '\0') {
         cVar5 = predelete_handler(local_58);
         if (cVar5 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* DirAccess::_bind_methods() */void DirAccess::_bind_methods(void) {
   Variant *pVVar1;
   char cVar2;
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
   MethodBind *pMVar15;
   uint uVar16;
   Variant *pVVar17;
   long in_FS_OFFSET;
   undefined8 local_1e8;
   long local_1e0;
   long local_1d8;
   long local_1d0;
   long local_1c8;
   long local_1c0;
   char *local_1b8;
   undefined8 local_1b0;
   char *local_1a8;
   undefined8 local_1a0;
   char *local_198;
   int local_190;
   undefined8 local_188;
   undefined4 local_180;
   undefined *local_178;
   undefined8 local_170;
   char *local_168;
   undefined *puStack_160;
   undefined8 local_158;
   Variant *local_148;
   undefined1 auStack_140[16];
   undefined *local_128;
   undefined *puStack_120;
   undefined8 local_118;
   undefined *local_108;
   undefined *puStack_100;
   undefined8 local_f8;
   char *local_e8;
   char *pcStack_e0;
   undefined8 local_d8;
   undefined *local_c8;
   undefined *puStack_c0;
   char *local_b8;
   undefined8 local_b0;
   Variant *local_a8;
   undefined *puStack_a0;
   char *local_98;
   undefined8 local_90;
   Variant **local_88;
   undefined1 auStack_80[16];
   undefined8 local_70;
   undefined1 local_68[16];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   local_170 = 0;
   local_178 = &_LC67;
   local_148 = (Variant*)&local_178;
   uVar16 = ( uint ) & local_148;
   D_METHODP((char*)&local_1a8, (char***)&_LC52, uVar16);
   StringName::StringName((StringName*)&local_1b8, "DirAccess", false);
   auStack_140 = (undefined1[16])0x0;
   local_148 = (Variant*)0x0;
   pMVar15 = (MethodBind*)operator_new(0x60, "");
   MethodBind::MethodBind(pMVar15);
   *(undefined***)pMVar15 = &PTR__gen_argument_type_00119410;
   *(code**)( pMVar15 + 0x58 ) = _open;
   MethodBind::_generate_argument_types((int)pMVar15);
   *(undefined4*)( pMVar15 + 0x34 ) = 1;
   MethodBind::_set_static(SUB81(pMVar15, 0));
   MethodBind::_set_returns(SUB81(pMVar15, 0));
   StringName::operator =((StringName*)( pMVar15 + 0x18 ), (StringName*)&local_1b8);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_148] != '\0') {
      Variant::_clear_internal();
   }
   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   D_METHODP((char*)&local_1a8, (char***)"get_open_error", 0);
   StringName::StringName((StringName*)&local_1b8, "DirAccess", false);
   auStack_140 = (undefined1[16])0x0;
   local_148 = (Variant*)0x0;
   pMVar15 = (MethodBind*)operator_new(0x60, "");
   MethodBind::MethodBind(pMVar15);
   *(undefined***)pMVar15 = &PTR__gen_argument_type_00119470;
   *(code**)( pMVar15 + 0x58 ) = get_open_error;
   MethodBind::_generate_argument_types((int)pMVar15);
   *(undefined4*)( pMVar15 + 0x34 ) = 0;
   MethodBind::_set_static(SUB81(pMVar15, 0));
   MethodBind::_set_returns(SUB81(pMVar15, 0));
   StringName::operator =((StringName*)( pMVar15 + 0x18 ), (StringName*)&local_1b8);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_148] != '\0') {
      Variant::_clear_internal();
   }
   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   local_158 = 0;
   local_168 = "prefix";
   puStack_160 = &_LC66;
   local_148 = (Variant*)&local_168;
   auStack_140._0_8_ = &puStack_160;
   D_METHODP((char*)&local_1a8, (char***)"create_temp", uVar16);
   StringName::StringName((StringName*)&local_1b8, "DirAccess", false);
   Variant::Variant((Variant*)&local_88, "");
   Variant::Variant((Variant*)&local_70, false);
   local_50 = (undefined1[16])0x0;
   auStack_140._0_8_ = (Variant*)&local_70;
   local_58 = 0;
   local_148 = (Variant*)&local_88;
   pMVar15 = (MethodBind*)operator_new(0x60, "");
   MethodBind::MethodBind(pMVar15);
   *(undefined***)pMVar15 = &PTR__gen_argument_type_001194d0;
   *(code**)( pMVar15 + 0x58 ) = _create_temp;
   MethodBind::_generate_argument_types((int)pMVar15);
   *(undefined4*)( pMVar15 + 0x34 ) = 2;
   MethodBind::_set_static(SUB81(pMVar15, 0));
   MethodBind::_set_returns(SUB81(pMVar15, 0));
   StringName::operator =((StringName*)( pMVar15 + 0x18 ), (StringName*)&local_1b8);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, &local_148, 2);
   pVVar17 = (Variant*)local_40;
   do {
      pVVar1 = pVVar17 + -0x18;
      pVVar17 = pVVar17 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }
   } while ( pVVar17 != (Variant*)&local_88 );
   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   D_METHODP((char*)&local_1a8, (char***)"list_dir_begin", 0);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = create_method_bind<DirAccess,Error>((_func_Error*)0x161);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   D_METHODP((char*)&local_1a8, (char***)"get_next", 0);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = create_method_bind<DirAccess,String>(_get_next);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   D_METHODP((char*)&local_1a8, (char***)"current_is_dir", 0);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = create_method_bind<DirAccess,bool>((_func_bool*)0x171);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   D_METHODP((char*)&local_1a8, (char***)"list_dir_end", 0);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = create_method_bind<DirAccess>((_func_void*)0x181);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   D_METHODP((char*)&local_1a8, (char***)"get_files", 0);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = create_method_bind<DirAccess,Vector<String>>(get_files);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   auVar3._8_8_ = 0;
   auVar3._0_8_ = auStack_140._8_8_;
   auStack_140 = auVar3 << 0x40;
   local_148 = (Variant*)&_LC67;
   uVar16 = (uint)(Variant*)&local_88;
   local_88 = &local_148;
   D_METHODP((char*)&local_1a8, (char***)"get_files_at", uVar16);
   StringName::StringName((StringName*)&local_1b8, "DirAccess", false);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = (MethodBind*)operator_new(0x60, "");
   MethodBind::MethodBind(pMVar15);
   *(undefined***)pMVar15 = &PTR__gen_argument_type_00119710;
   *(code**)( pMVar15 + 0x58 ) = get_files_at;
   MethodBind::_generate_argument_types((int)pMVar15);
   *(undefined4*)( pMVar15 + 0x34 ) = 1;
   MethodBind::_set_static(SUB81(pMVar15, 0));
   MethodBind::_set_returns(SUB81(pMVar15, 0));
   StringName::operator =((StringName*)( pMVar15 + 0x18 ), (StringName*)&local_1b8);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   D_METHODP((char*)&local_1a8, (char***)"get_directories", 0);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = create_method_bind<DirAccess,Vector<String>>(get_directories);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   auVar4._8_8_ = 0;
   auVar4._0_8_ = auStack_140._8_8_;
   auStack_140 = auVar4 << 0x40;
   local_148 = (Variant*)&_LC67;
   local_88 = &local_148;
   D_METHODP((char*)&local_1a8, (char***)"get_directories_at", uVar16);
   StringName::StringName((StringName*)&local_1b8, "DirAccess", false);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = (MethodBind*)operator_new(0x60, "");
   MethodBind::MethodBind(pMVar15);
   *(undefined***)pMVar15 = &PTR__gen_argument_type_00119710;
   *(code**)( pMVar15 + 0x58 ) = get_directories_at;
   MethodBind::_generate_argument_types((int)pMVar15);
   *(undefined4*)( pMVar15 + 0x34 ) = 1;
   MethodBind::_set_static(SUB81(pMVar15, 0));
   MethodBind::_set_returns(SUB81(pMVar15, 0));
   StringName::operator =((StringName*)( pMVar15 + 0x18 ), (StringName*)&local_1b8);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   D_METHODP((char*)&local_1a8, (char***)"get_drive_count", 0);
   StringName::StringName((StringName*)&local_1b8, "DirAccess", false);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = (MethodBind*)operator_new(0x60, "");
   MethodBind::MethodBind(pMVar15);
   *(undefined***)pMVar15 = &PTR__gen_argument_type_00119770;
   *(code**)( pMVar15 + 0x58 ) = _get_drive_count;
   MethodBind::_generate_argument_types((int)pMVar15);
   *(undefined4*)( pMVar15 + 0x34 ) = 0;
   MethodBind::_set_static(SUB81(pMVar15, 0));
   MethodBind::_set_returns(SUB81(pMVar15, 0));
   StringName::operator =((StringName*)( pMVar15 + 0x18 ), (StringName*)&local_1b8);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   auVar5._8_8_ = 0;
   auVar5._0_8_ = auStack_140._8_8_;
   auStack_140 = auVar5 << 0x40;
   local_148 = (Variant*)&_LC78;
   local_88 = &local_148;
   D_METHODP((char*)&local_1a8, (char***)"get_drive_name", uVar16);
   StringName::StringName((StringName*)&local_1b8, "DirAccess", false);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = (MethodBind*)operator_new(0x60, "");
   MethodBind::MethodBind(pMVar15);
   *(undefined***)pMVar15 = &PTR__gen_argument_type_001197d0;
   *(code**)( pMVar15 + 0x58 ) = get_drive_name;
   MethodBind::_generate_argument_types((int)pMVar15);
   *(undefined4*)( pMVar15 + 0x34 ) = 1;
   MethodBind::_set_static(SUB81(pMVar15, 0));
   MethodBind::_set_returns(SUB81(pMVar15, 0));
   StringName::operator =((StringName*)( pMVar15 + 0x18 ), (StringName*)&local_1b8);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   D_METHODP((char*)&local_1a8, (char***)"get_current_drive", 0);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = create_method_bind<DirAccess,int>((_func_int*)0x199);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   auVar6._8_8_ = 0;
   auVar6._0_8_ = auStack_140._8_8_;
   auStack_140 = auVar6 << 0x40;
   local_148 = (Variant*)0x1092db;
   local_88 = &local_148;
   D_METHODP((char*)&local_1a8, (char***)"change_dir", uVar16);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = create_method_bind<DirAccess,Error,String>((_func_Error_String*)0x1a9);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   auVar7._8_8_ = 0;
   auVar7._0_8_ = auStack_140._8_8_;
   auStack_140 = auVar7 << 0x40;
   local_148 = (Variant*)0x1092ed;
   local_88 = &local_148;
   D_METHODP((char*)&local_1a8, (char***)"get_current_dir", uVar16);
   Variant::Variant((Variant*)&local_88, true);
   local_68 = (undefined1[16])0x0;
   local_70 = 0;
   local_148 = (Variant*)&local_88;
   pMVar15 = create_method_bind<DirAccess,String,bool>((_func_String_bool*)0x1b1);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, &local_148, 1);
   if (Variant::needs_deinit[(int)local_70] == '\0') {
      cVar2 = Variant::needs_deinit[(int)local_88];
   } else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[(int)local_88];
   }
   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   auVar8._8_8_ = 0;
   auVar8._0_8_ = auStack_140._8_8_;
   auStack_140 = auVar8 << 0x40;
   local_148 = (Variant*)&_LC67;
   local_88 = &local_148;
   D_METHODP((char*)&local_1a8, (char***)"make_dir", uVar16);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = create_method_bind<DirAccess,Error,String>((_func_Error_String*)0x1b9);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   auVar9._8_8_ = 0;
   auVar9._0_8_ = auStack_140._8_8_;
   auStack_140 = auVar9 << 0x40;
   local_148 = (Variant*)&_LC67;
   local_88 = &local_148;
   D_METHODP((char*)&local_1a8, (char***)"make_dir_absolute", uVar16);
   StringName::StringName((StringName*)&local_1b8, "DirAccess", false);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = (MethodBind*)operator_new(0x60, "");
   MethodBind::MethodBind(pMVar15);
   *(undefined***)pMVar15 = &PTR__gen_argument_type_00119950;
   *(code**)( pMVar15 + 0x58 ) = make_dir_absolute;
   MethodBind::_generate_argument_types((int)pMVar15);
   *(undefined4*)( pMVar15 + 0x34 ) = 1;
   MethodBind::_set_static(SUB81(pMVar15, 0));
   MethodBind::_set_returns(SUB81(pMVar15, 0));
   StringName::operator =((StringName*)( pMVar15 + 0x18 ), (StringName*)&local_1b8);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   auVar10._8_8_ = 0;
   auVar10._0_8_ = auStack_140._8_8_;
   auStack_140 = auVar10 << 0x40;
   local_148 = (Variant*)&_LC67;
   local_88 = &local_148;
   D_METHODP((char*)&local_1a8, (char***)"make_dir_recursive", uVar16);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = create_method_bind<DirAccess,Error,String_const&>((_func_Error_String_ptr*)0x1c1);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   auVar11._8_8_ = 0;
   auVar11._0_8_ = auStack_140._8_8_;
   auStack_140 = auVar11 << 0x40;
   local_148 = (Variant*)&_LC67;
   local_88 = &local_148;
   D_METHODP((char*)&local_1a8, (char***)"make_dir_recursive_absolute", uVar16);
   StringName::StringName((StringName*)&local_1b8, "DirAccess", false);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = (MethodBind*)operator_new(0x60, "");
   MethodBind::MethodBind(pMVar15);
   *(undefined***)pMVar15 = &PTR__gen_argument_type_00119950;
   *(code**)( pMVar15 + 0x58 ) = make_dir_recursive_absolute;
   MethodBind::_generate_argument_types((int)pMVar15);
   *(undefined4*)( pMVar15 + 0x34 ) = 1;
   MethodBind::_set_static(SUB81(pMVar15, 0));
   MethodBind::_set_returns(SUB81(pMVar15, 0));
   StringName::operator =((StringName*)( pMVar15 + 0x18 ), (StringName*)&local_1b8);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   auVar12._8_8_ = 0;
   auVar12._0_8_ = auStack_140._8_8_;
   auStack_140 = auVar12 << 0x40;
   local_148 = (Variant*)&_LC67;
   local_88 = &local_148;
   D_METHODP((char*)&local_1a8, (char***)"file_exists", uVar16);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = create_method_bind<DirAccess,bool,String>((_func_bool_String*)0x1d1);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   auVar13._8_8_ = 0;
   auVar13._0_8_ = auStack_140._8_8_;
   auStack_140 = auVar13 << 0x40;
   local_148 = (Variant*)&_LC67;
   local_88 = &local_148;
   D_METHODP((char*)&local_1a8, (char***)"dir_exists", uVar16);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = create_method_bind<DirAccess,bool,String>((_func_bool_String*)0x1d9);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   auVar14._8_8_ = 0;
   auVar14._0_8_ = auStack_140._8_8_;
   auStack_140 = auVar14 << 0x40;
   local_148 = (Variant*)&_LC67;
   local_88 = &local_148;
   D_METHODP((char*)&local_1a8, (char***)"dir_exists_absolute", uVar16);
   StringName::StringName((StringName*)&local_1b8, "DirAccess", false);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = (MethodBind*)operator_new(0x60, "");
   MethodBind::MethodBind(pMVar15);
   *(undefined***)pMVar15 = &PTR__gen_argument_type_00119a70;
   *(code**)( pMVar15 + 0x58 ) = dir_exists_absolute;
   MethodBind::_generate_argument_types((int)pMVar15);
   *(undefined4*)( pMVar15 + 0x34 ) = 1;
   MethodBind::_set_static(SUB81(pMVar15, 0));
   MethodBind::_set_returns(SUB81(pMVar15, 0));
   StringName::operator =((StringName*)( pMVar15 + 0x18 ), (StringName*)&local_1b8);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   D_METHODP((char*)&local_1a8, (char***)"get_space_left", 0);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = create_method_bind<DirAccess,unsigned_long>((_func_ulong*)0x1f1);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   local_a8 = (Variant*)&_LC63;
   puStack_a0 = &_LC64;
   auStack_80._8_8_ = &local_98;
   auStack_80._0_8_ = &puStack_a0;
   local_90 = 0;
   local_98 = "chmod_flags";
   local_88 = &local_a8;
   D_METHODP((char*)&local_1a8, (char***)&_LC23, uVar16);
   Variant::Variant((Variant*)&local_88, -1);
   local_68 = (undefined1[16])0x0;
   local_70 = 0;
   local_a8 = (Variant*)&local_88;
   pMVar15 = create_method_bind<DirAccess,Error,String_const&,String_const&,int>((_func_Error_String_ptr_String_ptr_int*)0x1f9);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, &local_a8, 1);
   if (Variant::needs_deinit[(int)local_70] == '\0') {
      cVar2 = Variant::needs_deinit[(int)local_88];
   } else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[(int)local_88];
   }
   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   local_c8 = &_LC63;
   puStack_c0 = &_LC64;
   auStack_80._8_8_ = &local_b8;
   auStack_80._0_8_ = &puStack_c0;
   local_b8 = "chmod_flags";
   local_b0 = 0;
   local_88 = (Variant**)&local_c8;
   D_METHODP((char*)&local_1a8, (char***)"copy_absolute", uVar16);
   StringName::StringName((StringName*)&local_1b8, "DirAccess", false);
   Variant::Variant((Variant*)&local_88, -1);
   local_68 = (undefined1[16])0x0;
   local_70 = 0;
   local_a8 = (Variant*)&local_88;
   pMVar15 = (MethodBind*)operator_new(0x60, "");
   MethodBind::MethodBind(pMVar15);
   *(undefined***)pMVar15 = &PTR__gen_argument_type_00119b90;
   *(code**)( pMVar15 + 0x58 ) = copy_absolute;
   MethodBind::_generate_argument_types((int)pMVar15);
   *(undefined4*)( pMVar15 + 0x34 ) = 3;
   MethodBind::_set_static(SUB81(pMVar15, 0));
   MethodBind::_set_returns(SUB81(pMVar15, 0));
   StringName::operator =((StringName*)( pMVar15 + 0x18 ), (StringName*)&local_1b8);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, &local_a8, 1);
   if (Variant::needs_deinit[(int)local_70] == '\0') {
      cVar2 = Variant::needs_deinit[(int)local_88];
   } else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[(int)local_88];
   }
   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }
   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   local_f8 = 0;
   local_108 = &_LC63;
   puStack_100 = &_LC64;
   auStack_80._0_8_ = &puStack_100;
   local_88 = (Variant**)&local_108;
   D_METHODP((char*)&local_1a8, (char***)"rename", uVar16);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = create_method_bind<DirAccess,Error,String,String>((_func_Error_String_String*)0x201);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   local_118 = 0;
   local_128 = &_LC63;
   puStack_120 = &_LC64;
   auStack_80._0_8_ = &puStack_120;
   local_88 = (Variant**)&local_128;
   D_METHODP((char*)&local_1a8, (char***)"rename_absolute", uVar16);
   StringName::StringName((StringName*)&local_1b8, "DirAccess", false);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = (MethodBind*)operator_new(0x60, "");
   MethodBind::MethodBind(pMVar15);
   *(undefined***)pMVar15 = &PTR__gen_argument_type_00119c50;
   *(code**)( pMVar15 + 0x58 ) = rename_absolute;
   MethodBind::_generate_argument_types((int)pMVar15);
   *(undefined4*)( pMVar15 + 0x34 ) = 2;
   MethodBind::_set_static(SUB81(pMVar15, 0));
   MethodBind::_set_returns(SUB81(pMVar15, 0));
   StringName::operator =((StringName*)( pMVar15 + 0x18 ), (StringName*)&local_1b8);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   puStack_a0 = (undefined*)0x0;
   local_a8 = (Variant*)&_LC67;
   local_88 = &local_a8;
   D_METHODP((char*)&local_1a8, (char***)"remove", uVar16);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = create_method_bind<DirAccess,Error,String>((_func_Error_String*)0x209);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   puStack_a0 = (undefined*)0x0;
   local_a8 = (Variant*)&_LC67;
   local_88 = &local_a8;
   D_METHODP((char*)&local_1a8, (char***)"remove_absolute", uVar16);
   StringName::StringName((StringName*)&local_1b8, "DirAccess", false);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = (MethodBind*)operator_new(0x60, "");
   MethodBind::MethodBind(pMVar15);
   *(undefined***)pMVar15 = &PTR__gen_argument_type_00119950;
   *(code**)( pMVar15 + 0x58 ) = remove_absolute;
   MethodBind::_generate_argument_types((int)pMVar15);
   *(undefined4*)( pMVar15 + 0x34 ) = 1;
   MethodBind::_set_static(SUB81(pMVar15, 0));
   MethodBind::_set_returns(SUB81(pMVar15, 0));
   StringName::operator =((StringName*)( pMVar15 + 0x18 ), (StringName*)&local_1b8);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   puStack_a0 = (undefined*)0x0;
   local_a8 = (Variant*)&_LC67;
   local_88 = &local_a8;
   D_METHODP((char*)&local_1a8, (char***)"is_link", uVar16);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = create_method_bind<DirAccess,bool,String>((_func_bool_String*)0x211);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   puStack_a0 = (undefined*)0x0;
   local_a8 = (Variant*)&_LC67;
   local_88 = &local_a8;
   D_METHODP((char*)&local_1a8, (char***)"read_link", uVar16);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = create_method_bind<DirAccess,String,String>((_func_String_String*)0x219);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   local_d8 = 0;
   auStack_80._0_8_ = &pcStack_e0;
   local_e8 = "source";
   pcStack_e0 = "target";
   local_88 = (Variant**)&local_e8;
   D_METHODP((char*)&local_1a8, (char***)"create_link", uVar16);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = create_method_bind<DirAccess,Error,String,String>((_func_Error_String_String*)0x221);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   puStack_a0 = (undefined*)0x0;
   local_a8 = (Variant*)&_LC67;
   local_88 = &local_a8;
   D_METHODP((char*)&local_1a8, (char***)"is_bundle", uVar16);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = create_method_bind<DirAccess,bool,String_const&>((_func_bool_String_ptr*)0x239);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   puStack_a0 = (undefined*)0x0;
   local_a8 = (Variant*)0x1093ff;
   local_88 = &local_a8;
   D_METHODP((char*)&local_1a8, (char***)"set_include_navigational", uVar16);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = create_method_bind<DirAccess,bool>(set_include_navigational);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   D_METHODP((char*)&local_1a8, (char***)"get_include_navigational", 0);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = create_method_bind<DirAccess,bool>(get_include_navigational);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   puStack_a0 = (undefined*)0x0;
   local_a8 = (Variant*)0x1093ff;
   local_88 = &local_a8;
   D_METHODP((char*)&local_1a8, (char***)"set_include_hidden", uVar16);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = create_method_bind<DirAccess,bool>(set_include_hidden);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   D_METHODP((char*)&local_1a8, (char***)"get_include_hidden", 0);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = create_method_bind<DirAccess,bool>(get_include_hidden);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   puStack_a0 = (undefined*)0x0;
   local_a8 = (Variant*)&_LC67;
   local_88 = &local_a8;
   D_METHODP((char*)&local_1a8, (char***)"is_case_sensitive", uVar16);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar15 = create_method_bind<DirAccess,bool,String_const&>((_func_bool_String_ptr*)0x231);
   ClassDB::bind_methodfi(1, pMVar15, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_1a8);
   _scs_create((char*)&local_1c0, true);
   _scs_create((char*)&local_1c8, true);
   local_1a8 = "";
   local_1d0 = 0;
   local_1d8 = 0;
   local_1a0 = 0;
   String::parse_latin1((StrRange*)&local_1d8);
   local_1e0 = 0;
   local_1a8 = "include_navigational";
   local_1a0 = 0x14;
   String::parse_latin1((StrRange*)&local_1e0);
   local_1a8 = (char*)CONCAT44(local_1a8._4_4_, 1);
   local_1a0 = 0;
   if (local_1e0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1a0, (CowData*)&local_1e0);
   }
   local_198 = (char*)0x0;
   local_190 = 0;
   local_188 = 0;
   if (local_1d8 == 0) {
      LAB_00105cb3:local_180 = 6;
      StringName::operator =((StringName*)&local_198, (StringName*)&local_1d0);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_188, (CowData*)&local_1d8);
      local_180 = 6;
      if (local_190 != 0x11) goto LAB_00105cb3;
      StringName::StringName((StringName*)&local_1b8, (String*)&local_188, false);
      if (local_198 == local_1b8) {
         if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_198 = local_1b8;
      }
   }
   local_1e8 = 0;
   local_1b8 = "DirAccess";
   local_1b0 = 9;
   String::parse_latin1((StrRange*)&local_1e8);
   StringName::StringName((StringName*)&local_1b8, (String*)&local_1e8, false);
   ClassDB::add_property((StringName*)&local_1b8, (PropertyInfo*)&local_1a8, (StringName*)&local_1c8, (StringName*)&local_1c0, -1);
   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_1d0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1c8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1c0 != 0 )) {
      StringName::unref();
   }
   _scs_create((char*)&local_1c0, true);
   _scs_create((char*)&local_1c8, true);
   local_1a8 = "";
   local_1d0 = 0;
   local_1d8 = 0;
   local_1a0 = 0;
   String::parse_latin1((StrRange*)&local_1d8);
   local_1e0 = 0;
   local_1a8 = "include_hidden";
   local_1a0 = 0xe;
   String::parse_latin1((StrRange*)&local_1e0);
   local_1a8 = (char*)CONCAT44(local_1a8._4_4_, 1);
   local_1a0 = 0;
   if (local_1e0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1a0, (CowData*)&local_1e0);
   }
   local_198 = (char*)0x0;
   local_190 = 0;
   local_188 = 0;
   if (local_1d8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_188, (CowData*)&local_1d8);
      local_180 = 6;
      if (local_190 == 0x11) {
         StringName::StringName((StringName*)&local_1b8, (String*)&local_188, false);
         if (local_198 == local_1b8) {
            if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
               StringName::unref();
            }
         } else {
            StringName::unref();
            local_198 = local_1b8;
         }
         goto LAB_00105f48;
      }
   }
   local_180 = 6;
   StringName::operator =((StringName*)&local_198, (StringName*)&local_1d0);
   LAB_00105f48:local_1e8 = 0;
   local_1b8 = "DirAccess";
   local_1b0 = 9;
   String::parse_latin1((StrRange*)&local_1e8);
   StringName::StringName((StringName*)&local_1b8, (String*)&local_1e8, false);
   ClassDB::add_property((StringName*)&local_1b8, (PropertyInfo*)&local_1a8, (StringName*)&local_1c8, (StringName*)&local_1c0, -1);
   if (( StringName::configured != '\0' ) && ( local_1b8 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d8);
   if (( ( StringName::configured != '\0' ) && ( ( local_1d0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_1c8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_1c0 != 0 ) ) )) {
      StringName::unref();
   }
   if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* DirAccess::make_dir_recursive(String const&) [clone .part.0] */uint DirAccess::make_dir_recursive(DirAccess *this, String *param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   char *pcVar4;
   char *pcVar5;
   char *pcVar6;
   char cVar7;
   uint uVar8;
   int iVar9;
   char *pcVar10;
   long lVar11;
   long lVar12;
   wchar32 wVar13;
   long in_FS_OFFSET;
   bool bVar14;
   CowData *local_a8;
   char *local_90;
   char *local_88;
   char *local_80;
   undefined8 local_78;
   undefined8 local_70;
   CowData<char32_t> local_68[8];
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_90 = (char*)0x0;
   cVar7 = String::is_relative_path();
   if (cVar7 == '\0') {
      if (local_90 != *(char**)param_1) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)param_1);
      }
   } else {
      ( **(code**)( *(long*)this + 0x1b0 ) )(local_68, this, 1);
      String::path_join((String*)&local_58);
      if (local_90 != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         local_90 = local_58;
         local_58 = (char*)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref(local_68);
   }
   String::replace((char*)&local_58, (char*)&local_90);
   if (local_90 != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      local_90 = local_58;
      local_58 = (char*)0x0;
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   local_88 = (char*)0x0;
   cVar7 = String::begins_with((char*)&local_90);
   if (cVar7 == '\0') {
      cVar7 = String::begins_with((char*)&local_90);
      if (cVar7 != '\0') {
         local_58 = "user://";
         local_50 = 7;
         goto LAB_001064b2;
      }
      cVar7 = String::is_network_share_path();
      wVar13 = (wchar32)(CowData<char32_t>*)&local_90;
      if (cVar7 != '\0') {
         iVar9 = String::find_char(wVar13, 0x2f);
         if (iVar9 < 0) {
            _err_print_error("make_dir_recursive", "core/io/dir_access.cpp", 0x9f, "Condition \"pos < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
         } else {
            iVar9 = String::find_char(wVar13, 0x2f);
            if (-1 < iVar9) goto LAB_00106795;
            _err_print_error("make_dir_recursive", "core/io/dir_access.cpp", 0xa1, "Condition \"pos < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
         }
         LAB_00106943:uVar8 = 0x1f;
         goto LAB_001066e5;
      }
      cVar7 = String::begins_with((char*)&local_90);
      if (cVar7 == '\0') {
         iVar9 = String::find((char*)&local_90, 0x109496);
         if (iVar9 == -1) {
            _err_print_error("make_dir_recursive", "core/io/dir_access.cpp", 0xa8, "Method/function failed. Returning: ERR_INVALID_PARAMETER", 0, 0);
            goto LAB_00106943;
         }
         String::find((char*)&local_90, 0x109496);
         LAB_00106795:String::substr((int)(CowData<char32_t>*)&local_58, wVar13);
         if (local_88 != local_58) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            local_88 = local_58;
            local_58 = (char*)0x0;
         }
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      } else {
         String::parse_latin1((String*)&local_88, "/");
      }
   } else {
      local_58 = "res://";
      local_50 = 6;
      LAB_001064b2:String::parse_latin1((StrRange*)&local_88);
   }
   local_a8 = (CowData*)&local_88;
   local_70 = 0;
   local_58 = "";
   local_50 = 0;
   String::parse_latin1((StrRange*)&local_70);
   String::replace_first((String*)local_68, (String*)&local_90);
   String::simplify_path();
   if (local_90 != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      local_90 = local_58;
      local_58 = (char*)0x0;
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref(local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   String::split((char*)local_68, SUB81((CowData<char32_t>*)&local_90, 0), 0x109190);
   local_80 = (char*)0x0;
   if (local_88 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, local_a8);
   }
   for (lVar12 = 0; ( local_60 != 0 && ( lVar12 < *(long*)( local_60 + -8 ) ) ); lVar12 = lVar12 + 1) {
      String::path_join((String*)&local_58);
      pcVar5 = local_58;
      pcVar4 = local_80;
      pcVar10 = local_58;
      if (local_80 == local_58) {
         pcVar6 = local_80;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            pcVar10 = local_80;
            if (*plVar1 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
               pcVar10 = local_80;
               pcVar6 = local_80;
            }
         }
      } else {
         pcVar6 = local_58;
         if (local_80 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_80 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            pcVar6 = local_58;
            if (*plVar1 == 0) {
               local_80 = (char*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
               pcVar10 = local_58;
               pcVar6 = local_58;
            }
         }
      }
      local_80 = pcVar6;
      pcVar2 = *(code**)( *(long*)this + 0x1b8 );
      plVar1 = (long*)( pcVar10 + -0x10 );
      local_58 = (char*)0x0;
      if (pcVar10 != (char*)0x0) {
         do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_00106620;
            LOCK();
            lVar11 = *plVar1;
            bVar14 = lVar3 == lVar11;
            if (bVar14) {
               *plVar1 = lVar3 + 1;
               lVar11 = lVar3;
            }
            UNLOCK();
         } while ( !bVar14 );
         if (lVar11 != -1) {
            local_58 = local_80;
         }
      }
      LAB_00106620:uVar8 = ( *pcVar2 )(this);
      pcVar4 = local_58;
      if (local_58 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_58 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
         }
      }
      if (( uVar8 & 0xffffffdf ) != 0) {
         local_70 = 0;
         if (local_80 != (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_80);
         }
         local_78 = 0;
         local_58 = "Could not create directory: \'%s\'.";
         local_50 = 0x21;
         String::parse_latin1((StrRange*)&local_78);
         vformat<String>((CowData<char32_t>*)&local_58, (StrRange*)&local_78, (StrRange*)&local_70);
         _err_print_error("make_dir_recursive", "core/io/dir_access.cpp", 0xb4, "Method/function failed. Returning: err", (CowData<char32_t>*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         goto LAB_001066d3;
      }
   }
   uVar8 = 0;
   LAB_001066d3:CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<String>::_unref((CowData<String>*)&local_60);
   LAB_001066e5:local_a8 = (CowData*)&local_88;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar8;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* DirAccess::make_dir_recursive(String const&) */undefined8 DirAccess::make_dir_recursive(DirAccess *this, String *param_1) {
   undefined8 uVar1;
   if (( *(long*)param_1 != 0 ) && ( 1 < *(int*)( *(long*)param_1 + -8 ) )) {
      uVar1 = make_dir_recursive(this, param_1);
      return uVar1;
   }
   return 0;
}/* DirAccess::make_dir_recursive_absolute(String const&) */undefined4 DirAccess::make_dir_recursive_absolute(String *param_1) {
   char cVar1;
   undefined4 uVar2;
   long in_FS_OFFSET;
   DirAccess *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   create_for_path((DirAccess*)&local_28, param_1);
   if (*(code**)( *(long*)local_28 + 0x1c0 ) == make_dir_recursive) {
      uVar2 = 0;
      if (( *(long*)param_1 != 0 ) && ( 1 < *(int*)( *(long*)param_1 + -8 ) )) {
         uVar2 = make_dir_recursive(local_28, param_1);
         cVar1 = RefCounted::unreference();
         goto joined_r0x00106a68;
      }
   } else {
      uVar2 = ( **(code**)( *(long*)local_28 + 0x1c0 ) )(local_28);
   }
   cVar1 = RefCounted::unreference();
   joined_r0x00106a68:if (( cVar1 != '\0' ) && ( cVar1 = predelete_handler((Object*)local_28) ),cVar1 != '\0') {
      ( **(code**)( *(long*)local_28 + 0x140 ) )(local_28);
      Memory::free_static(local_28, false);
   }
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar2;
}/* DirAccess::copy_dir(String const&, String, int, bool) */int DirAccess::copy_dir(DirAccess *this, CowData *param_1, CowData<char32_t> *param_3, int param_4, bool param_5) {
   code *pcVar1;
   DirAccess *pDVar2;
   char cVar3;
   int iVar4;
   long in_FS_OFFSET;
   DirAccess *local_70;
   undefined8 local_68;
   undefined8 local_60;
   DirAccess *local_58;
   long local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar1 = *(code**)( *(long*)this + 0x1d8 );
   local_58 = (DirAccess*)0x0;
   if (*(long*)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, param_1);
   }
   cVar3 = ( *pcVar1 )(this, (CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (cVar3 == '\0') {
      iVar4 = 7;
      _err_print_error("copy_dir", "core/io/dir_access.cpp", 0x21c, "Condition \"!dir_exists(p_from)\" is true. Returning: ERR_FILE_NOT_FOUND", "Source directory doesn\'t exist.", 0, 0);
      goto LAB_00106ca0;
   }
   create_for_path((DirAccess*)&local_70, (String*)param_3);
   pDVar2 = local_70;
   if (local_70 == (DirAccess*)0x0) {
      local_60 = 0;
      if (*(long*)param_3 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)param_3);
      }
      local_68 = 0;
      local_58 = (DirAccess*)0x10b668;
      iVar4 = 0x14;
      local_50[0] = 0x26;
      String::parse_latin1((StrRange*)&local_68);
      vformat<String>((CowData<char32_t>*)&local_58, (StrRange*)&local_68, (CowData<char32_t>*)&local_60);
      _err_print_error("copy_dir", "core/io/dir_access.cpp", 0x21f, "Condition \"target_da.is_null()\" is true. Returning: ERR_CANT_CREATE", (CowData<char32_t>*)&local_58, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   } else {
      pcVar1 = *(code**)( *(long*)local_70 + 0x1d8 );
      local_58 = (DirAccess*)0x0;
      if (*(long*)param_3 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)param_3);
      }
      cVar3 = ( *pcVar1 )(pDVar2, (CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (cVar3 == '\0') {
         if (*(code**)( *(long*)local_70 + 0x1c0 ) == make_dir_recursive) {
            if (( *(long*)param_3 == 0 ) || ( *(int*)( *(long*)param_3 + -8 ) < 2 )) goto LAB_00106bb8;
            iVar4 = make_dir_recursive(local_70, (String*)param_3);
         } else {
            iVar4 = ( **(code**)( *(long*)local_70 + 0x1c0 ) )(local_70, param_3);
         }
         if (iVar4 != 0) {
            local_60 = 0;
            if (*(long*)param_3 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)param_3);
            }
            local_68 = 0;
            String::parse_latin1((String*)&local_68, "Cannot create directory \'%s\'.");
            vformat<String>((CowData<char32_t>*)&local_58, (String*)&local_68, (CowData<char32_t>*)&local_60);
            _err_print_error("copy_dir", "core/io/dir_access.cpp", 0x223, "Condition \"err != OK\" is true. Returning: err", (CowData<char32_t>*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            goto LAB_00106c89;
         }
      }
      LAB_00106bb8:cVar3 = String::ends_with((char*)param_3);
      if (cVar3 == '\0') {
         local_58 = (DirAccess*)&_LC33;
         local_60 = 0;
         local_50[0] = 1;
         String::parse_latin1((StrRange*)&local_60);
         String::operator +((String*)&local_58, (String*)param_3);
         if ((DirAccess*)*(undefined**)param_3 != local_58) {
            CowData<char32_t>::_unref(param_3);
            pDVar2 = local_58;
            local_58 = (DirAccess*)0x0;
            *(DirAccess**)param_3 = pDVar2;
         }
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      }
      local_58 = this;
      ( **(code**)( *(long*)this + 0x1b0 ) )((CowData<char32_t>*)local_50, this, 1);
      pcVar1 = *(code**)( *(long*)this + 0x1a8 );
      local_60 = 0;
      if (*(long*)param_1 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, param_1);
      }
      ( *pcVar1 )(this, (CowData<char32_t>*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      iVar4 = _copy_dir(this, (Ref*)&local_70, (String*)param_3, param_4, param_5);
      pDVar2 = local_58;
      pcVar1 = *(code**)( *(long*)local_58 + 0x1a8 );
      local_60 = 0;
      if (local_50[0] != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)local_50);
      }
      ( *pcVar1 )(pDVar2);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
   }
   LAB_00106c89:if (local_70 != (DirAccess*)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
         cVar3 = predelete_handler((Object*)local_70);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)local_70 + 0x140 ) )(local_70);
            Memory::free_static(local_70, false);
         }
      }
   }
   LAB_00106ca0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* CowData<String>::_ref(CowData<String> const&) [clone .part.0] */void CowData<String>::_ref(CowData<String> *this, CowData *param_1) {
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
      } while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }
   }
   return;
}/* CowData<String>::_copy_on_write() [clone .isra.0] */void CowData<String>::_copy_on_write(CowData<String> *this) {
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
         } while ( lVar2 != lVar6 );
      }
      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar5 + 2 );
      return;
   }
   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}/* DirAccess::_get_contents(bool) */long DirAccess::_get_contents(bool param_1) {
   long *plVar1;
   String *pSVar2;
   char cVar3;
   int iVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   char in_DL;
   long *in_RSI;
   undefined7 in_register_00000039;
   long lVar9;
   String *this;
   CowData *pCVar10;
   String *pSVar11;
   CowData<char32_t> *pCVar12;
   String *pSVar13;
   long lVar14;
   long in_FS_OFFSET;
   bool bVar15;
   long local_78;
   long local_58;
   long local_50;
   long local_48;
   long local_40;
   lVar9 = CONCAT71(in_register_00000039, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar5 = *in_RSI;
   *(undefined8*)( lVar9 + 8 ) = 0;
   ( **(code**)( lVar5 + 0x160 ) )();
   _get_next();
   if (local_58 == 0) {
      lVar5 = *(long*)( lVar9 + 8 );
      if (lVar5 == 0) goto LAB_00107136;
      LAB_0010710f:lVar5 = *(long*)( lVar5 + -8 );
      if (lVar5 != 0) {
         CowData<String>::_copy_on_write((CowData<String>*)( lVar9 + 8 ));
         pSVar11 = *(String**)( lVar9 + 8 );
         if (lVar5 == 1) {
            SortArray<String,_DefaultComparator<String>,true>::introsort(0, 1, pSVar11, 0);
         } else {
            lVar8 = 0;
            lVar14 = lVar5;
            do {
               lVar14 = lVar14 >> 1;
               lVar8 = lVar8 + 1;
            } while ( lVar14 != 1 );
            SortArray<String,_DefaultComparator<String>,true>::introsort(0, lVar5, pSVar11, lVar8 * 2);
            pSVar2 = pSVar11 + 8;
            if (lVar5 < 0x11) {
               lVar14 = 1;
               pSVar13 = pSVar2;
               do {
                  local_48 = 0;
                  plVar1 = (long*)( *(long*)pSVar13 + -0x10 );
                  if (*(long*)pSVar13 != 0) {
                     do {
                        lVar8 = *plVar1;
                        if (lVar8 == 0) goto LAB_0010777e;
                        LOCK();
                        lVar7 = *plVar1;
                        bVar15 = lVar8 == lVar7;
                        if (bVar15) {
                           *plVar1 = lVar8 + 1;
                           lVar7 = lVar8;
                        }
                        UNLOCK();
                     } while ( !bVar15 );
                     if (lVar7 != -1) {
                        local_48 = *(long*)pSVar13;
                     }
                  }
                  LAB_0010777e:cVar3 = String::operator <((String*)&local_48, pSVar11);
                  pCVar10 = (CowData*)pSVar13;
                  lVar8 = lVar14;
                  if (cVar3 == '\0') {
                     local_50 = 0;
                     plVar1 = (long*)( local_48 + -0x10 );
                     if (local_48 != 0) {
                        do {
                           lVar8 = *plVar1;
                           if (lVar8 == 0) goto LAB_00107889;
                           LOCK();
                           lVar7 = *plVar1;
                           bVar15 = lVar8 == lVar7;
                           if (bVar15) {
                              *plVar1 = lVar8 + 1;
                              lVar7 = lVar8;
                           }
                           UNLOCK();
                        } while ( !bVar15 );
                        if (lVar7 != -1) {
                           local_50 = local_48;
                        }
                     }
                     LAB_00107889:pCVar12 = (CowData<char32_t>*)pCVar10;
                     pCVar10 = (CowData*)( pCVar12 + -8 );
                     cVar3 = String::operator <((String*)&local_50, (String*)pCVar10);
                     if (cVar3 != '\0') {
                        if (pCVar12 == (CowData<char32_t>*)pSVar2) {
                           _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                           goto LAB_001078d0;
                        }
                        if (*(long*)pCVar12 != *(long*)( pCVar12 + -8 )) {
                           CowData<char32_t>::_ref(pCVar12, pCVar10);
                        }
                        goto LAB_00107889;
                     }
                     LAB_001078d0:if (*(long*)pCVar12 != local_50) {
                        CowData<char32_t>::_ref(pCVar12, (CowData*)&local_50);
                     }
                     lVar8 = local_50;
                     if (local_50 != 0) {
                        LOCK();
                        plVar1 = (long*)( local_50 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_50 = 0;
                           Memory::free_static((void*)( lVar8 + -0x10 ), false);
                        }
                     }
                  } else {
                     do {
                        if (*(long*)pCVar10 != *(long*)( (CowData<char32_t>*)pCVar10 + -8 )) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)pCVar10, (CowData*)( (CowData<char32_t>*)pCVar10 + -8 ));
                        }
                        lVar8 = lVar8 + -1;
                        pCVar10 = (CowData*)( (CowData<char32_t>*)pCVar10 + -8 );
                     } while ( lVar8 != 0 );
                     if (*(long*)pSVar11 != local_48) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)pSVar11, (CowData*)&local_48);
                     }
                  }
                  lVar8 = local_48;
                  if (local_48 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_48 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_48 = 0;
                        Memory::free_static((void*)( lVar8 + -0x10 ), false);
                     }
                  }
                  lVar14 = lVar14 + 1;
                  pSVar13 = pSVar13 + 8;
               } while ( lVar5 != lVar14 );
            } else {
               local_78 = 1;
               pSVar13 = pSVar2;
               do {
                  local_48 = 0;
                  plVar1 = (long*)( *(long*)pSVar13 + -0x10 );
                  if (*(long*)pSVar13 != 0) {
                     do {
                        lVar14 = *plVar1;
                        if (lVar14 == 0) goto LAB_001073fe;
                        LOCK();
                        lVar8 = *plVar1;
                        bVar15 = lVar14 == lVar8;
                        if (bVar15) {
                           *plVar1 = lVar14 + 1;
                           lVar8 = lVar14;
                        }
                        UNLOCK();
                     } while ( !bVar15 );
                     if (lVar8 != -1) {
                        local_48 = *(long*)pSVar13;
                     }
                  }
                  LAB_001073fe:cVar3 = String::operator <((String*)&local_48, pSVar11);
                  this =
                  pSVar13;
                  if (cVar3 == '\0') {
                     local_50 = 0;
                     plVar1 = (long*)( local_48 + -0x10 );
                     pCVar10 = (CowData*)pSVar13;
                     if (local_48 != 0) {
                        do {
                           lVar14 = *plVar1;
                           if (lVar14 == 0) goto LAB_00107479;
                           LOCK();
                           lVar8 = *plVar1;
                           bVar15 = lVar14 == lVar8;
                           if (bVar15) {
                              *plVar1 = lVar14 + 1;
                              lVar8 = lVar14;
                           }
                           UNLOCK();
                        } while ( !bVar15 );
                        if (lVar8 != -1) {
                           local_50 = local_48;
                        }
                     }
                     LAB_00107479:pCVar12 = (CowData<char32_t>*)pCVar10;
                     pCVar10 = (CowData*)( pCVar12 + -8 );
                     cVar3 = String::operator <((String*)&local_50, (String*)pCVar10);
                     if (cVar3 != '\0') {
                        if (pCVar12 == (CowData<char32_t>*)pSVar2) {
                           _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                           goto LAB_001074c6;
                        }
                        if (*(long*)pCVar12 != *(long*)( pCVar12 + -8 )) {
                           CowData<char32_t>::_ref(pCVar12, pCVar10);
                        }
                        goto LAB_00107479;
                     }
                     LAB_001074c6:if (*(long*)pCVar12 != local_50) {
                        CowData<char32_t>::_ref(pCVar12, (CowData*)&local_50);
                     }
                     lVar14 = local_50;
                     if (local_50 != 0) {
                        LOCK();
                        plVar1 = (long*)( local_50 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_50 = 0;
                           Memory::free_static((void*)( lVar14 + -0x10 ), false);
                        }
                     }
                  } else {
                     do {
                        pCVar10 = (CowData*)( (CowData<char32_t>*)this + -8 );
                        if (*(long*)this != *(long*)( (CowData<char32_t>*)this + -8 )) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)this, pCVar10);
                        }
                        this(String * pCVar10);
                     } while ( pSVar11 != (String*)pCVar10 );
                     if (*(long*)pSVar11 != local_48) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)pSVar11, (CowData*)&local_48);
                     }
                  }
                  lVar14 = local_48;
                  if (local_48 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_48 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_48 = 0;
                        Memory::free_static((void*)( lVar14 + -0x10 ), false);
                     }
                  }
                  local_78 = local_78 + 1;
                  pSVar13 = pSVar13 + 8;
               } while ( local_78 != 0x10 );
               pSVar11 = pSVar11 + 0x80;
               lVar14 = 0x10;
               do {
                  local_48 = 0;
                  plVar1 = (long*)( *(long*)pSVar11 + -0x10 );
                  pCVar10 = (CowData*)pSVar11;
                  lVar8 = lVar14;
                  if (*(long*)pSVar11 != 0) {
                     do {
                        lVar7 = *plVar1;
                        if (lVar7 == 0) goto LAB_0010760b;
                        LOCK();
                        lVar6 = *plVar1;
                        bVar15 = lVar7 == lVar6;
                        if (bVar15) {
                           *plVar1 = lVar7 + 1;
                           lVar6 = lVar7;
                        }
                        UNLOCK();
                     } while ( !bVar15 );
                     if (lVar6 != -1) {
                        local_48 = *(long*)pSVar11;
                     }
                  }
                  LAB_0010760b:pCVar12 = (CowData<char32_t>*)pCVar10;
                  lVar8 = lVar8 + -1;
                  pCVar10 = (CowData*)( pCVar12 + -8 );
                  cVar3 = String::operator <((String*)&local_48, (String*)pCVar10);
                  if (cVar3 != '\0') {
                     if (lVar8 == 0) {
                        _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                        goto LAB_00107648;
                     }
                     if (*(long*)pCVar12 != *(long*)( pCVar12 + -8 )) {
                        CowData<char32_t>::_ref(pCVar12, pCVar10);
                     }
                     goto LAB_0010760b;
                  }
                  LAB_00107648:if (*(long*)pCVar12 != local_48) {
                     CowData<char32_t>::_ref(pCVar12, (CowData*)&local_48);
                  }
                  lVar8 = local_48;
                  if (local_48 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_48 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_48 = 0;
                        Memory::free_static((void*)( lVar8 + -0x10 ), false);
                     }
                  }
                  lVar14 = lVar14 + 1;
                  pSVar11 = pSVar11 + 8;
               } while ( lVar5 != lVar14 );
            }
         }
      }
   } else {
      do {
         if (*(uint*)( local_58 + -8 ) < 2) break;
         cVar3 = ( **(code**)( *in_RSI + 0x170 ) )();
         if (cVar3 == in_DL) {
            local_48 = 0;
            if (local_58 == 0) {
               LAB_00107252:lVar5 = *(long*)( lVar9 + 8 );
               lVar14 = local_58;
               if (lVar5 != 0) goto LAB_0010725f;
               LAB_00107302:iVar4 = CowData<String>::resize<false>((CowData<String>*)( lVar9 + 8 ), 1);
               if (iVar4 == 0) goto LAB_0010727b;
               LAB_00107320:_err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
            } else {
               plVar1 = (long*)( local_58 + -0x10 );
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_001072f0;
                  LOCK();
                  lVar14 = *plVar1;
                  bVar15 = lVar5 == lVar14;
                  if (bVar15) {
                     *plVar1 = lVar5 + 1;
                     lVar14 = lVar5;
                  }
                  UNLOCK();
               } while ( !bVar15 );
               if (lVar14 != -1) {
                  local_48 = local_58;
                  goto LAB_00107252;
               }
               LAB_001072f0:lVar5 = *(long*)( lVar9 + 8 );
               lVar14 = 0;
               if (lVar5 == 0) goto LAB_00107302;
               LAB_0010725f:iVar4 = CowData<String>::resize<false>((CowData<String>*)( lVar9 + 8 ), *(long*)( lVar5 + -8 ) + 1);
               if (iVar4 != 0) goto LAB_00107320;
               LAB_0010727b:lVar5 = *(long*)( lVar9 + 8 );
               if (lVar5 == 0) {
                  lVar8 = -1;
                  lVar5 = 0;
                  LAB_001076ea:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar8, lVar5, "p_index", "size()", "", false, false);
               } else {
                  lVar5 = *(long*)( lVar5 + -8 );
                  lVar8 = lVar5 + -1;
                  if (lVar8 < 0) goto LAB_001076ea;
                  CowData<String>::_copy_on_write((CowData<String>*)( lVar9 + 8 ));
                  pCVar12 = (CowData<char32_t>*)( *(long*)( lVar9 + 8 ) + lVar8 * 8 );
                  if (lVar14 != *(long*)pCVar12) {
                     CowData<char32_t>::_ref(pCVar12, (CowData*)&local_48);
                  }
               }
            }
            if (lVar14 != 0) {
               LOCK();
               plVar1 = (long*)( lVar14 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static((void*)( local_48 + -0x10 ), false);
               }
            }
         }
         _get_next();
         lVar5 = local_48;
         if (local_58 == local_48) {
            if (local_48 == 0) break;
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }
         } else {
            if (local_58 != 0) {
               LOCK();
               plVar1 = (long*)( local_58 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static((void*)( local_58 + -0x10 ), false);
               }
            }
            local_58 = local_48;
         }
      } while ( local_58 != 0 );
      lVar5 = *(long*)( lVar9 + 8 );
      if (lVar5 != 0) goto LAB_0010710f;
   }
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_58 + -0x10 ), false);
      }
   }
   LAB_00107136:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return lVar9;
}/* DirAccess::get_files() */DirAccess * __thiscall DirAccess::get_files(DirAccess *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   _get_contents(SUB81(this, 0));
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* DirAccess::get_files_at(String const&) */DirAccess * __thiscall DirAccess::get_files_at(DirAccess *this,String *param_1){
   char cVar1;
   long in_FS_OFFSET;
   Object *local_60;
   undefined8 local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   open((DirAccess*)&local_60, param_1, (Error*)0x0);
   if (local_60 == (Object*)0x0) {
      local_50 = 0;
      if (*(long*)param_1 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_50, (CowData*)param_1);
      }
      local_58 = 0;
      local_40 = 0x25;
      local_48 = "Couldn\'t open directory at path \"%s\".";
      String::parse_latin1((StrRange*)&local_58);
      vformat<String>((CowData<char32_t>*)&local_48, (StrRange*)&local_58, (CowData<char32_t>*)&local_50);
      _err_print_error("get_files_at", "core/io/dir_access.cpp", 0x23b, "Condition \"da.is_null()\" is true. Returning: PackedStringArray()", (CowData<char32_t>*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      *(undefined8*)( this + 8 ) = 0;
   } else {
      _get_contents(SUB81(this, 0));
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         cVar1 = predelete_handler(local_60);
         if (cVar1 != '\0') {
            ( **(code**)( *(long*)local_60 + 0x140 ) )(local_60);
            Memory::free_static(local_60, false);
         }
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* DirAccess::get_directories() */DirAccess * __thiscall DirAccess::get_directories(DirAccess *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   _get_contents(SUB81(this, 0));
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* DirAccess::get_directories_at(String const&) */DirAccess * __thiscall DirAccess::get_directories_at(DirAccess *this,String *param_1){
   char cVar1;
   long in_FS_OFFSET;
   Object *local_60;
   undefined8 local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   open((DirAccess*)&local_60, param_1, (Error*)0x0);
   if (local_60 == (Object*)0x0) {
      local_50 = 0;
      if (*(long*)param_1 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_50, (CowData*)param_1);
      }
      local_58 = 0;
      local_40 = 0x25;
      local_48 = "Couldn\'t open directory at path \"%s\".";
      String::parse_latin1((StrRange*)&local_58);
      vformat<String>((CowData<char32_t>*)&local_48, (StrRange*)&local_58, (CowData<char32_t>*)&local_50);
      _err_print_error("get_directories_at", "core/io/dir_access.cpp", 0x245, "Condition \"da.is_null()\" is true. Returning: PackedStringArray()", (CowData<char32_t>*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      *(undefined8*)( this + 8 ) = 0;
   } else {
      _get_contents(SUB81(this, 0));
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         cVar1 = predelete_handler(local_60);
         if (cVar1 != '\0') {
            ( **(code**)( *(long*)local_60 + 0x140 ) )(local_60);
            Memory::free_static(local_60, false);
         }
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }
   return;
}/* Object::get_save_class() const */void Object::get_save_class(void) {
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
}/* MethodBind::is_valid() const */undefined8 MethodBind::is_valid(void) {
   return 1;
}/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
}/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x119d, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x119d, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}/* RefCounted::_getv(StringName const&, Variant&) const */undefined8 RefCounted::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}/* RefCounted::_setv(StringName const&, Variant const&) */undefined8 RefCounted::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}/* RefCounted::_validate_propertyv(PropertyInfo&) const */void RefCounted::_validate_propertyv(PropertyInfo *param_1) {
   return;
}/* RefCounted::_property_can_revertv(StringName const&) const */undefined8 RefCounted::_property_can_revertv(StringName *param_1) {
   return 0;
}/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */undefined8 RefCounted::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}/* RefCounted::_notificationv(int, bool) */void RefCounted::_notificationv(int param_1, bool param_2) {
   return;
}/* DirAccess::is_class_ptr(void*) const */uint DirAccess::is_class_ptr(DirAccess *this, void *param_1) {
   return (uint)CONCAT71(0x119d, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x119d, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x119d, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}/* DirAccess::_getv(StringName const&, Variant&) const */undefined8 DirAccess::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}/* DirAccess::_setv(StringName const&, Variant const&) */undefined8 DirAccess::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}/* DirAccess::_validate_propertyv(PropertyInfo&) const */void DirAccess::_validate_propertyv(PropertyInfo *param_1) {
   return;
}/* DirAccess::_property_can_revertv(StringName const&) const */undefined8 DirAccess::_property_can_revertv(StringName *param_1) {
   return 0;
}/* DirAccess::_property_get_revertv(StringName const&, Variant&) const */undefined8 DirAccess::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}/* DirAccess::_notificationv(int, bool) */void DirAccess::_notificationv(int param_1, bool param_2) {
   return;
}/* DirAccess::is_readable(String) */undefined8 DirAccess::is_readable(void) {
   return 1;
}/* DirAccess::is_writable(String) */undefined8 DirAccess::is_writable(void) {
   return 1;
}/* DirAccess::is_bundle(String const&) const */undefined8 DirAccess::is_bundle(String *param_1) {
   return 0;
}/* MethodBindT<bool>::_gen_argument_type(int) const */bool MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this, int param_1) {
   return param_1 == 0;
}/* MethodBindT<bool>::get_argument_meta(int) const */undefined8 MethodBindT<bool>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRC<bool, String const&>::_gen_argument_type(int) const */char MethodBindTRC<bool,String_const&>::_gen_argument_type(MethodBindTRC<bool,String_const&> *this, int param_1) {
   return ( -(param_1 == 0) & 3U ) + 1;
}/* MethodBindTRC<bool, String const&>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool,String_const&>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTR<String, String>::_gen_argument_type(int) const */undefined8 MethodBindTR<String,String>::_gen_argument_type(int param_1) {
   return 4;
}/* MethodBindTR<String, String>::get_argument_meta(int) const */undefined8 MethodBindTR<String,String>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRS<Error, String const&, String const&>::_gen_argument_type(int) const */char MethodBindTRS<Error,String_const&,String_const&>::_gen_argument_type(MethodBindTRS<Error,String_const&,String_const&> *this, int param_1) {
   return ( -((uint)param_1 < 2) & 2U ) + 2;
}/* MethodBindTRS<Error, String const&, String const&>::get_argument_meta(int) const */undefined8 MethodBindTRS<Error,String_const&,String_const&>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRS<Error, String const&, String const&>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindTRS<Error,String_const&,String_const&>::validated_call(MethodBindTRS<Error,String_const&,String_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   uint uVar1;
   uVar1 = ( **(code**)( this + 0x58 ) )(*param_2 + 8, param_2[1] + 8);
   *(ulong*)( param_3 + 8 ) = (ulong)uVar1;
   return;
}/* MethodBindTRS<Error, String const&, String const&>::ptrcall(Object*, void const**, void*) const
    */void MethodBindTRS<Error,String_const&,String_const&>::ptrcall(MethodBindTRS<Error,String_const&,String_const&> *this, Object *param_1, void **param_2, void *param_3) {
   uint uVar1;
   uVar1 = ( **(code**)( this + 0x58 ) )(*param_2, param_2[1]);
   *(ulong*)param_3 = (ulong)uVar1;
   return;
}/* MethodBindTR<Error, String, String>::_gen_argument_type(int) const */char MethodBindTR<Error,String,String>::_gen_argument_type(MethodBindTR<Error,String,String> *this, int param_1) {
   return ( -((uint)param_1 < 2) & 2U ) + 2;
}/* MethodBindTR<Error, String, String>::get_argument_meta(int) const */undefined8 MethodBindTR<Error,String,String>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRS<Error, String const&, String const&, int>::_gen_argument_type(int) const */char MethodBindTRS<Error,String_const&,String_const&,int>::_gen_argument_type(MethodBindTRS<Error,String_const&,String_const&,int> *this, int param_1) {
   return ( -((uint)param_1 < 2) & 2U ) + 2;
}/* MethodBindTRS<Error, String const&, String const&, int>::get_argument_meta(int) const */char MethodBindTRS<Error,String_const&,String_const&,int>::get_argument_meta(MethodBindTRS<Error,String_const&,String_const&,int> *this, int param_1) {
   return ( param_1 == 2 ) * '\x03';
}/* MethodBindTRS<Error, String const&, String const&, int>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindTRS<Error,String_const&,String_const&,int>::validated_call(MethodBindTRS<Error,String_const&,String_const&,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   uint uVar1;
   uVar1 = ( **(code**)( this + 0x58 ) )(*param_2 + 8, param_2[1] + 8, *(undefined4*)( param_2[2] + 8 ));
   *(ulong*)( param_3 + 8 ) = (ulong)uVar1;
   return;
}/* MethodBindTRS<Error, String const&, String const&, int>::ptrcall(Object*, void const**, void*)
   const */void MethodBindTRS<Error,String_const&,String_const&,int>::ptrcall(MethodBindTRS<Error,String_const&,String_const&,int> *this, Object *param_1, void **param_2, void *param_3) {
   uint uVar1;
   /* WARNING: Load size is inaccurate */
   uVar1 = ( **(code**)( this + 0x58 ) )(*param_2, param_2[1], *param_2[2]);
   *(ulong*)param_3 = (ulong)uVar1;
   return;
}/* MethodBindTR<Error, String const&, String const&, int>::_gen_argument_type(int) const */char MethodBindTR<Error,String_const&,String_const&,int>::_gen_argument_type(MethodBindTR<Error,String_const&,String_const&,int> *this, int param_1) {
   return ( -((uint)param_1 < 2) & 2U ) + 2;
}/* MethodBindTR<Error, String const&, String const&, int>::get_argument_meta(int) const */char MethodBindTR<Error,String_const&,String_const&,int>::get_argument_meta(MethodBindTR<Error,String_const&,String_const&,int> *this, int param_1) {
   return ( param_1 == 2 ) * '\x03';
}/* MethodBindTR<unsigned long>::_gen_argument_type(int) const */undefined8 MethodBindTR<unsigned_long>::_gen_argument_type(int param_1) {
   return 2;
}/* MethodBindTR<unsigned long>::get_argument_meta(int) const */int MethodBindTR<unsigned_long>::get_argument_meta(MethodBindTR<unsigned_long> *this, int param_1) {
   return ( param_1 >> 0x1f ) * -8;
}/* MethodBindTRS<bool, String const&>::_gen_argument_type(int) const */char MethodBindTRS<bool,String_const&>::_gen_argument_type(MethodBindTRS<bool,String_const&> *this, int param_1) {
   return ( -(param_1 == 0) & 3U ) + 1;
}/* MethodBindTRS<bool, String const&>::get_argument_meta(int) const */undefined8 MethodBindTRS<bool,String_const&>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRS<bool, String const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRS<bool,String_const&>::validated_call(MethodBindTRS<bool,String_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Variant VVar1;
   VVar1 = ( Variant )(**(code**)( this + 0x58 ))(*param_2 + 8);
   param_3[8] = VVar1;
   return;
}/* MethodBindTRS<bool, String const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTRS<bool,String_const&>::ptrcall(MethodBindTRS<bool,String_const&> *this, Object *param_1, void **param_2, void *param_3) {
   undefined1 uVar1;
   uVar1 = ( **(code**)( this + 0x58 ) )(*param_2);
   *(undefined1*)param_3 = uVar1;
   return;
}/* MethodBindTR<bool, String>::_gen_argument_type(int) const */char MethodBindTR<bool,String>::_gen_argument_type(MethodBindTR<bool,String> *this, int param_1) {
   return ( -(param_1 == 0) & 3U ) + 1;
}/* MethodBindTR<bool, String>::get_argument_meta(int) const */undefined8 MethodBindTR<bool,String>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTR<Error, String const&>::_gen_argument_type(int) const */char MethodBindTR<Error,String_const&>::_gen_argument_type(MethodBindTR<Error,String_const&> *this, int param_1) {
   return ( -(param_1 == 0) & 2U ) + 2;
}/* MethodBindTR<Error, String const&>::get_argument_meta(int) const */undefined8 MethodBindTR<Error,String_const&>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRS<Error, String const&>::_gen_argument_type(int) const */char MethodBindTRS<Error,String_const&>::_gen_argument_type(MethodBindTRS<Error,String_const&> *this, int param_1) {
   return ( -(param_1 == 0) & 2U ) + 2;
}/* MethodBindTRS<Error, String const&>::get_argument_meta(int) const */undefined8 MethodBindTRS<Error,String_const&>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRS<Error, String const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRS<Error,String_const&>::validated_call(MethodBindTRS<Error,String_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   uint uVar1;
   uVar1 = ( **(code**)( this + 0x58 ) )(*param_2 + 8);
   *(ulong*)( param_3 + 8 ) = (ulong)uVar1;
   return;
}/* MethodBindTRS<Error, String const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTRS<Error,String_const&>::ptrcall(MethodBindTRS<Error,String_const&> *this, Object *param_1, void **param_2, void *param_3) {
   uint uVar1;
   uVar1 = ( **(code**)( this + 0x58 ) )(*param_2);
   *(ulong*)param_3 = (ulong)uVar1;
   return;
}/* MethodBindTRC<String, bool>::_gen_argument_type(int) const */int MethodBindTRC<String,bool>::_gen_argument_type(MethodBindTRC<String,bool> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xfffffffd ) + 4;
}/* MethodBindTRC<String, bool>::get_argument_meta(int) const */undefined8 MethodBindTRC<String,bool>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTR<Error, String>::_gen_argument_type(int) const */char MethodBindTR<Error,String>::_gen_argument_type(MethodBindTR<Error,String> *this, int param_1) {
   return ( -(param_1 == 0) & 2U ) + 2;
}/* MethodBindTR<Error, String>::get_argument_meta(int) const */undefined8 MethodBindTR<Error,String>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTR<int>::_gen_argument_type(int) const */undefined8 MethodBindTR<int>::_gen_argument_type(int param_1) {
   return 2;
}/* MethodBindTR<int>::get_argument_meta(int) const */uint MethodBindTR<int>::get_argument_meta(MethodBindTR<int> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}/* MethodBindTRS<String, int>::_gen_argument_type(int) const */int MethodBindTRS<String,int>::_gen_argument_type(MethodBindTRS<String,int> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xfffffffe ) + 4;
}/* MethodBindTRS<String, int>::get_argument_meta(int) const */byte MethodBindTRS<String,int>::get_argument_meta(MethodBindTRS<String,int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}/* MethodBindTRS<int>::_gen_argument_type(int) const */undefined8 MethodBindTRS<int>::_gen_argument_type(int param_1) {
   return 2;
}/* MethodBindTRS<int>::get_argument_meta(int) const */uint MethodBindTRS<int>::get_argument_meta(MethodBindTRS<int> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}/* MethodBindTRS<int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRS<int>::validated_call(MethodBindTRS<int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   int iVar1;
   iVar1 = ( **(code**)( this + 0x58 ) )();
   *(long*)( param_3 + 8 ) = (long)iVar1;
   return;
}/* MethodBindTRS<int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRS<int>::ptrcall(MethodBindTRS<int> *this, Object *param_1, void **param_2, void *param_3) {
   int iVar1;
   iVar1 = ( **(code**)( this + 0x58 ) )();
   *(long*)param_3 = (long)iVar1;
   return;
}/* MethodBindTRS<Vector<String>, String const&>::_gen_argument_type(int) const */int MethodBindTRS<Vector<String>,String_const&>::_gen_argument_type(MethodBindTRS<Vector<String>,String_const&> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xffffffe2 ) + 0x22;
}/* MethodBindTRS<Vector<String>, String const&>::get_argument_meta(int) const */undefined8 MethodBindTRS<Vector<String>,String_const&>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTR<Vector<String>>::_gen_argument_type(int) const */undefined8 MethodBindTR<Vector<String>>::_gen_argument_type(int param_1) {
   return 0x22;
}/* MethodBindTR<Vector<String>>::get_argument_meta(int) const */undefined8 MethodBindTR<Vector<String>>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<>::_gen_argument_type(int) const */undefined8 MethodBindT<>::_gen_argument_type(int param_1) {
   return 0;
}/* MethodBindT<>::_gen_argument_type_info(int) const */undefined8 MethodBindT<>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   *(undefined4*)CONCAT44(in_register_0000003c, param_1) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x18 ) = 0;
   *(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0x20 ) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x28 ) = 6;
   *(undefined1(*) [16])( CONCAT44(in_register_0000003c, param_1) + 8 ) = (undefined1[16])0x0;
   return CONCAT44(in_register_0000003c, param_1);
}/* MethodBindT<>::get_argument_meta(int) const */undefined8 MethodBindT<>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRC<bool>::_gen_argument_type(int) const */undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1) {
   return 1;
}/* MethodBindTRC<bool>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTR<String>::_gen_argument_type(int) const */undefined8 MethodBindTR<String>::_gen_argument_type(int param_1) {
   return 4;
}/* MethodBindTR<String>::get_argument_meta(int) const */undefined8 MethodBindTR<String>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTR<Error>::_gen_argument_type(int) const */undefined8 MethodBindTR<Error>::_gen_argument_type(int param_1) {
   return 2;
}/* MethodBindTR<Error>::get_argument_meta(int) const */undefined8 MethodBindTR<Error>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRS<Ref<DirAccess>, String const&, bool>::_gen_argument_type(int) const */char MethodBindTRS<Ref<DirAccess>,String_const&,bool>::_gen_argument_type(MethodBindTRS<Ref<DirAccess>,String_const&,bool> *this, int param_1) {
   char cVar1;
   cVar1 = '\x18';
   if ((uint)param_1 < 2) {
      cVar1 = ( -(param_1 == 0) & 3U ) + 1;
   }
   return cVar1;
}/* MethodBindTRS<Ref<DirAccess>, String const&, bool>::get_argument_meta(int) const */undefined8 MethodBindTRS<Ref<DirAccess>,String_const&,bool>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRS<Error>::_gen_argument_type(int) const */undefined8 MethodBindTRS<Error>::_gen_argument_type(int param_1) {
   return 2;
}/* MethodBindTRS<Error>::get_argument_meta(int) const */undefined8 MethodBindTRS<Error>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRS<Error>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRS<Error>::validated_call(MethodBindTRS<Error> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   uint uVar1;
   uVar1 = ( **(code**)( this + 0x58 ) )();
   *(ulong*)( param_3 + 8 ) = (ulong)uVar1;
   return;
}/* MethodBindTRS<Error>::ptrcall(Object*, void const**, void*) const */void MethodBindTRS<Error>::ptrcall(MethodBindTRS<Error> *this, Object *param_1, void **param_2, void *param_3) {
   uint uVar1;
   uVar1 = ( **(code**)( this + 0x58 ) )();
   *(ulong*)param_3 = (ulong)uVar1;
   return;
}/* MethodBindTRS<Ref<DirAccess>, String const&>::_gen_argument_type(int) const */int MethodBindTRS<Ref<DirAccess>,String_const&>::_gen_argument_type(MethodBindTRS<Ref<DirAccess>,String_const&> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xffffffec ) + 0x18;
}/* MethodBindTRS<Ref<DirAccess>, String const&>::get_argument_meta(int) const */undefined8 MethodBindTRS<Ref<DirAccess>,String_const&>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRS<Ref<DirAccess>, String const&>::~MethodBindTRS() */void MethodBindTRS<Ref<DirAccess>,String_const&>::~MethodBindTRS(MethodBindTRS<Ref<DirAccess>,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119410;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRS<Ref<DirAccess>, String const&>::~MethodBindTRS() */void MethodBindTRS<Ref<DirAccess>,String_const&>::~MethodBindTRS(MethodBindTRS<Ref<DirAccess>,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119410;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x60);
   return;
}/* MethodBindTRS<Error>::~MethodBindTRS() */void MethodBindTRS<Error>::~MethodBindTRS(MethodBindTRS<Error> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119470;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRS<Error>::~MethodBindTRS() */void MethodBindTRS<Error>::~MethodBindTRS(MethodBindTRS<Error> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119470;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x60);
   return;
}/* MethodBindTRS<Ref<DirAccess>, String const&, bool>::~MethodBindTRS() */void MethodBindTRS<Ref<DirAccess>,String_const&,bool>::~MethodBindTRS(MethodBindTRS<Ref<DirAccess>,String_const&,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001194d0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRS<Ref<DirAccess>, String const&, bool>::~MethodBindTRS() */void MethodBindTRS<Ref<DirAccess>,String_const&,bool>::~MethodBindTRS(MethodBindTRS<Ref<DirAccess>,String_const&,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001194d0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x60);
   return;
}/* MethodBindTR<Error>::~MethodBindTR() */void MethodBindTR<Error>::~MethodBindTR(MethodBindTR<Error> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119530;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTR<Error>::~MethodBindTR() */void MethodBindTR<Error>::~MethodBindTR(MethodBindTR<Error> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119530;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTR<String>::~MethodBindTR() */void MethodBindTR<String>::~MethodBindTR(MethodBindTR<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119590;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTR<String>::~MethodBindTR() */void MethodBindTR<String>::~MethodBindTR(MethodBindTR<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119590;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119650;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119650;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTR<Vector<String>>::~MethodBindTR() */void MethodBindTR<Vector<String>>::~MethodBindTR(MethodBindTR<Vector<String>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001196b0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTR<Vector<String>>::~MethodBindTR() */void MethodBindTR<Vector<String>>::~MethodBindTR(MethodBindTR<Vector<String>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001196b0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRS<Vector<String>, String const&>::~MethodBindTRS() */void MethodBindTRS<Vector<String>,String_const&>::~MethodBindTRS(MethodBindTRS<Vector<String>,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119710;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRS<Vector<String>, String const&>::~MethodBindTRS() */void MethodBindTRS<Vector<String>,String_const&>::~MethodBindTRS(MethodBindTRS<Vector<String>,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119710;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x60);
   return;
}/* MethodBindTRS<int>::~MethodBindTRS() */void MethodBindTRS<int>::~MethodBindTRS(MethodBindTRS<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119770;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRS<int>::~MethodBindTRS() */void MethodBindTRS<int>::~MethodBindTRS(MethodBindTRS<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119770;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x60);
   return;
}/* MethodBindTRS<String, int>::~MethodBindTRS() */void MethodBindTRS<String,int>::~MethodBindTRS(MethodBindTRS<String,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001197d0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRS<String, int>::~MethodBindTRS() */void MethodBindTRS<String,int>::~MethodBindTRS(MethodBindTRS<String,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001197d0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x60);
   return;
}/* MethodBindTR<int>::~MethodBindTR() */void MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119830;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTR<int>::~MethodBindTR() */void MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119830;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<String, bool>::~MethodBindTRC() */void MethodBindTRC<String,bool>::~MethodBindTRC(MethodBindTRC<String,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001198f0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<String, bool>::~MethodBindTRC() */void MethodBindTRC<String,bool>::~MethodBindTRC(MethodBindTRC<String,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001198f0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTR<Error, String const&>::~MethodBindTR() */void MethodBindTR<Error,String_const&>::~MethodBindTR(MethodBindTR<Error,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001199b0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTR<Error, String const&>::~MethodBindTR() */void MethodBindTR<Error,String_const&>::~MethodBindTR(MethodBindTR<Error,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001199b0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRS<bool, String const&>::~MethodBindTRS() */void MethodBindTRS<bool,String_const&>::~MethodBindTRS(MethodBindTRS<bool,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119a70;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRS<bool, String const&>::~MethodBindTRS() */void MethodBindTRS<bool,String_const&>::~MethodBindTRS(MethodBindTRS<bool,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119a70;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x60);
   return;
}/* MethodBindTR<unsigned long>::~MethodBindTR() */void MethodBindTR<unsigned_long>::~MethodBindTR(MethodBindTR<unsigned_long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119ad0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTR<unsigned long>::~MethodBindTR() */void MethodBindTR<unsigned_long>::~MethodBindTR(MethodBindTR<unsigned_long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119ad0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTR<Error, String const&, String const&, int>::~MethodBindTR() */void MethodBindTR<Error,String_const&,String_const&,int>::~MethodBindTR(MethodBindTR<Error,String_const&,String_const&,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119b30;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTR<Error, String const&, String const&, int>::~MethodBindTR() */void MethodBindTR<Error,String_const&,String_const&,int>::~MethodBindTR(MethodBindTR<Error,String_const&,String_const&,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119b30;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRS<Error, String const&, String const&, int>::~MethodBindTRS() */void MethodBindTRS<Error,String_const&,String_const&,int>::~MethodBindTRS(MethodBindTRS<Error,String_const&,String_const&,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119b90;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRS<Error, String const&, String const&, int>::~MethodBindTRS() */void MethodBindTRS<Error,String_const&,String_const&,int>::~MethodBindTRS(MethodBindTRS<Error,String_const&,String_const&,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119b90;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x60);
   return;
}/* MethodBindTRS<Error, String const&, String const&>::~MethodBindTRS() */void MethodBindTRS<Error,String_const&,String_const&>::~MethodBindTRS(MethodBindTRS<Error,String_const&,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119c50;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRS<Error, String const&, String const&>::~MethodBindTRS() */void MethodBindTRS<Error,String_const&,String_const&>::~MethodBindTRS(MethodBindTRS<Error,String_const&,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119c50;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x60);
   return;
}/* MethodBindTR<Error, String>::~MethodBindTR() */void MethodBindTR<Error,String>::~MethodBindTR(MethodBindTR<Error,String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119890;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTR<Error, String>::~MethodBindTR() */void MethodBindTR<Error,String>::~MethodBindTR(MethodBindTR<Error,String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119890;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRS<Error, String const&>::~MethodBindTRS() */void MethodBindTRS<Error,String_const&>::~MethodBindTRS(MethodBindTRS<Error,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119950;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRS<Error, String const&>::~MethodBindTRS() */void MethodBindTRS<Error,String_const&>::~MethodBindTRS(MethodBindTRS<Error,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119950;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x60);
   return;
}/* MethodBindTR<bool, String>::~MethodBindTR() */void MethodBindTR<bool,String>::~MethodBindTR(MethodBindTR<bool,String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119a10;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTR<bool, String>::~MethodBindTR() */void MethodBindTR<bool,String>::~MethodBindTR(MethodBindTR<bool,String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119a10;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTR<String, String>::~MethodBindTR() */void MethodBindTR<String,String>::~MethodBindTR(MethodBindTR<String,String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119cb0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTR<String, String>::~MethodBindTR() */void MethodBindTR<String,String>::~MethodBindTR(MethodBindTR<String,String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119cb0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTR<Error, String, String>::~MethodBindTR() */void MethodBindTR<Error,String,String>::~MethodBindTR(MethodBindTR<Error,String,String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119bf0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTR<Error, String, String>::~MethodBindTR() */void MethodBindTR<Error,String,String>::~MethodBindTR(MethodBindTR<Error,String,String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119bf0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119d70;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119d70;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001195f0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001195f0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<bool, String const&>::~MethodBindTRC() */void MethodBindTRC<bool,String_const&>::~MethodBindTRC(MethodBindTRC<bool,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119d10;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<bool, String const&>::~MethodBindTRC() */void MethodBindTRC<bool,String_const&>::~MethodBindTRC(MethodBindTRC<bool,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119d10;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00119060;
   Object::~Object((Object*)this);
   return;
}/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00119060;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}/* RefCounted::_get_class_namev() const */undefined8 *RefCounted::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }
   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00108ca3:return &_get_class_namev();
      }
      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00108ca3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_00108d0e;
      }
   }
   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_00108d0e:return &_get_class_namev();
}/* MethodBindTRS<Ref<DirAccess>, String const&>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindTRS<Ref<DirAccess>,String_const&>::validated_call(MethodBindTRS<Ref<DirAccess>,String_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   char cVar1;
   long in_FS_OFFSET;
   Object *local_30;
   undefined8 local_28;
   Object *local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( this + 0x58 ) )(&local_30, *param_2 + 8, param_2, 0);
   if (local_30 == (Object*)0x0) {
      Variant::ObjData::unref();
   } else {
      local_28 = *(undefined8*)( local_30 + 0x60 );
      local_20 = local_30;
      Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
   }
   if (local_30 != (Object*)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         cVar1 = predelete_handler(local_30);
         if (cVar1 != '\0') {
            ( **(code**)( *(long*)local_30 + 0x140 ) )(local_30);
            Memory::free_static(local_30, false);
         }
      }
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRS<Ref<DirAccess>, String const&, bool>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindTRS<Ref<DirAccess>,String_const&,bool>::validated_call(MethodBindTRS<Ref<DirAccess>,String_const&,bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   char cVar1;
   long in_FS_OFFSET;
   Object *local_30;
   undefined8 local_28;
   Object *local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( this + 0x58 ) )(&local_30, *param_2 + 8, param_2[1][8]);
   if (local_30 == (Object*)0x0) {
      Variant::ObjData::unref();
   } else {
      local_28 = *(undefined8*)( local_30 + 0x60 );
      local_20 = local_30;
      Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
   }
   if (local_30 != (Object*)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         cVar1 = predelete_handler(local_30);
         if (cVar1 != '\0') {
            ( **(code**)( *(long*)local_30 + 0x140 ) )(local_30);
            Memory::free_static(local_30, false);
         }
      }
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* DirAccess::_get_class_namev() const */undefined8 *DirAccess::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }
   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00108f23:return &_get_class_namev();
      }
      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00108f23;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "DirAccess");
         goto LAB_00108f8e;
      }
   }
   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "DirAccess");
   LAB_00108f8e:return &_get_class_namev();
}/* MethodBindTRS<Ref<DirAccess>, String const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTRS<Ref<DirAccess>,String_const&>::ptrcall(MethodBindTRS<Ref<DirAccess>,String_const&> *this, Object *param_1, void **param_2, void *param_3) {
   char cVar1;
   Object *pOVar2;
   Object *pOVar3;
   long in_FS_OFFSET;
   Object *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( this + 0x58 ) )(&local_28, *param_2, param_2, 0);
   if (local_28 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar3 = *param_3;
      if (pOVar3 == (Object*)0x0) goto LAB_00109051;
      *(undefined8*)param_3 = 0;
      goto LAB_001090bf;
   }
   pOVar2 = (Object*)__dynamic_cast(local_28, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar3 = *param_3;
   if (pOVar3 != pOVar2) {
      *(Object**)param_3 = pOVar2;
      if (pOVar2 == (Object*)0x0) {
         if (pOVar3 != (Object*)0x0) goto LAB_001090bf;
      } else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }
         if (pOVar3 != (Object*)0x0) {
            LAB_001090bf:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar3);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
               }
            }
         }
         if (local_28 == (Object*)0x0) goto LAB_00109051;
      }
   }
   cVar1 = RefCounted::unreference();
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_28);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)local_28 + 0x140 ) )(local_28);
         Memory::free_static(local_28, false);
      }
   }
   LAB_00109051:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRS<Ref<DirAccess>, String const&, bool>::ptrcall(Object*, void const**, void*) const
    */void MethodBindTRS<Ref<DirAccess>,String_const&,bool>::ptrcall(MethodBindTRS<Ref<DirAccess>,String_const&,bool> *this, Object *param_1, void **param_2, void *param_3) {
   char cVar1;
   Object *pOVar2;
   Object *pOVar3;
   long in_FS_OFFSET;
   Object *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   ( **(code**)( this + 0x58 ) )(&local_28, *param_2, *param_2[1] != '\0');
   if (local_28 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar3 = *param_3;
      if (pOVar3 == (Object*)0x0) goto LAB_001095a0;
      *(undefined8*)param_3 = 0;
      goto LAB_0010960f;
   }
   pOVar2 = (Object*)__dynamic_cast(local_28, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar3 = *param_3;
   if (pOVar3 != pOVar2) {
      *(Object**)param_3 = pOVar2;
      if (pOVar2 == (Object*)0x0) {
         if (pOVar3 != (Object*)0x0) goto LAB_0010960f;
      } else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }
         if (pOVar3 != (Object*)0x0) {
            LAB_0010960f:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar3);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
               }
            }
         }
         if (local_28 == (Object*)0x0) goto LAB_001095a0;
      }
   }
   cVar1 = RefCounted::unreference();
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_28);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)local_28 + 0x140 ) )(local_28);
         Memory::free_static(local_28, false);
      }
   }
   LAB_001095a0:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRS<int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRS<int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   int iVar2;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   undefined4 local_28[2];
   undefined8 local_20;
   undefined8 uStack_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   pVVar1 = param_2[0xb];
   *(undefined4*)param_1 = 0;
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         iVar2 = ( *(code*)pVVar1 )();
         Variant::Variant((Variant*)local_28, iVar2);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }
         *(undefined4*)param_1 = local_28[0];
         *(undefined8*)( param_1 + 8 ) = local_20;
         *(undefined8*)( param_1 + 0x10 ) = uStack_18;
      } else {
         *in_R9 = 4;
         in_R9[2] = 0;
      }
   } else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRS<Error>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRS<Error>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   int iVar2;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   undefined4 local_28[2];
   undefined8 local_20;
   undefined8 uStack_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   pVVar1 = param_2[0xb];
   *(undefined4*)param_1 = 0;
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         iVar2 = ( *(code*)pVVar1 )();
         Variant::Variant((Variant*)local_28, iVar2);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }
         *(undefined4*)param_1 = local_28[0];
         *(undefined8*)( param_1 + 8 ) = local_20;
         *(undefined8*)( param_1 + 0x10 ) = uStack_18;
      } else {
         *in_R9 = 4;
         in_R9[2] = 0;
      }
   } else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRS<String, int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRS<String,int>::ptrcall(MethodBindTRS<String,int> *this, Object *param_1, void **param_2, void *param_3) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   ( **(code**)( this + 0x58 ) )(&local_28, **param_2, *param_2, 0);
   /* WARNING: Load size is inaccurate */
   if (*param_3 != local_28) {
      CowData<char32_t>::_ref((CowData<char32_t>*)param_3, (CowData*)&local_28);
   }
   lVar2 = local_28;
   if (local_28 != 0) {
      LOCK();
      plVar1 = (long*)( local_28 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_28 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRS<String, int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRS<String,int>::validated_call(MethodBindTRS<String,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( this + 0x58 ) )(&local_28, *(undefined4*)( *param_2 + 8 ), *param_2, 0);
   if (*(long*)( param_3 + 8 ) != local_28) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_3 + 8 ), (CowData*)&local_28);
   }
   lVar2 = local_28;
   if (local_28 != 0) {
      LOCK();
      plVar1 = (long*)( local_28 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_28 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RefCounted::get_class() const */void RefCounted::get_class(void) {
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
   } else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      } else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }
         } else {
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
}/* DirAccess::get_class() const */void DirAccess::get_class(void) {
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
   } else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      } else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }
         } else {
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
}/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC4;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 1;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   } else {
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
         } else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }
         goto joined_r0x00109bec;
      }
   }
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00109bec:local_58 = lVar2;
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
}/* MethodBindTR<unsigned long>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<unsigned_long>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC4;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 2;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   } else {
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
         } else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }
         goto joined_r0x00109d6c;
      }
   }
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00109d6c:local_58 = lVar2;
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
}/* MethodBindTR<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<int>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC4;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 2;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   } else {
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
         } else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }
         goto joined_r0x00109eec;
      }
   }
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00109eec:local_58 = lVar2;
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
}/* MethodBindTR<Vector<String>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Vector<String>>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC4;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x22;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   } else {
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
         } else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }
         goto joined_r0x0010a06c;
      }
   }
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010a06c:local_58 = lVar2;
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
}/* MethodBindTRS<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRS<int>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC4;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 2;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   } else {
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
         } else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }
         goto joined_r0x0010a1ec;
      }
   }
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010a1ec:local_58 = lVar2;
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
}/* MethodBindTR<String>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<String>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC4;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 4;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   } else {
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
         } else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }
         goto joined_r0x0010a36c;
      }
   }
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010a36c:local_58 = lVar2;
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
}/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
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
      } else {
         pcVar4 = *(char**)( lVar5 + 8 );
         local_60 = 0;
         if (pcVar4 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
            if (*(long*)( lVar5 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_0010a42f;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar3 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar3 + 1;
                     lVar7 = lVar3;
                  }
                  UNLOCK();
               } while ( !bVar9 );
               if (lVar7 != -1) {
                  local_60 = *(long*)( lVar5 + 0x10 );
               }
            }
         } else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
         }
      }
      LAB_0010a42f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
      if (cVar6 != '\0') goto LAB_0010a4e3;
   }
   cVar6 = String::operator ==(param_1, "RefCounted");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar5 = *(long*)( lVar2 + 0x20 );
         if (lVar5 == 0) {
            local_60 = 0;
         } else {
            pcVar4 = *(char**)( lVar5 + 8 );
            local_60 = 0;
            if (pcVar4 == (char*)0x0) {
               if (*(long*)( lVar5 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
               }
            } else {
               local_50 = strlen(pcVar4);
               local_58 = pcVar4;
               String::parse_latin1((StrRange*)&local_60);
            }
         }
         cVar6 = String::operator ==(param_1, (String*)&local_60);
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
         if (cVar6 != '\0') goto LAB_0010a4e3;
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar8 = String::operator ==(param_1, "Object");
         return uVar8;
      }
   } else {
      LAB_0010a4e3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* DirAccess::is_class(String const&) const */undefined8 DirAccess::is_class(DirAccess *this, String *param_1) {
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
      } else {
         __s = *(char**)( lVar3 + 8 );
         local_60 = 0;
         if (__s == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_0010a68f;
                  LOCK();
                  lVar6 = *plVar1;
                  bVar8 = lVar4 == lVar6;
                  if (bVar8) {
                     *plVar1 = lVar4 + 1;
                     lVar6 = lVar4;
                  }
                  UNLOCK();
               } while ( !bVar8 );
               if (lVar6 != -1) {
                  local_60 = *(long*)( lVar3 + 0x10 );
               }
            }
         } else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }
      }
      LAB_0010a68f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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
      if (cVar5 != '\0') goto LAB_0010a743;
   }
   cVar5 = String::operator ==(param_1, "DirAccess");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }
   } else {
      LAB_0010a743:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RefCounted::_initialize_classv() */void RefCounted::_initialize_classv(void) {
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
      initialize_class()::initialized = '\x01'
      ;;
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* String::parse_latin1(char const*) */void String::parse_latin1(String *this, char *param_1) {
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
}/* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
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
}/* GetTypeInfo<bool, void>::get_class_info() */GetTypeInfo<bool,void> * __thiscall
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
   local_48 = &_LC4;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 1;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   } else {
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
         } else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
            lVar2 = local_58;
         }
         goto joined_r0x0010ab5c;
      }
   }
   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010ab5c:local_58 = lVar2;
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
}/* MethodDefinition::~MethodDefinition() */void MethodDefinition::~MethodDefinition(MethodDefinition *this) {
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
            } while ( lVar2 != lVar5 );
         }
         Memory::free_static(plVar1 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }
   return;
}/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }
   return;
}/* List<String, DefaultAllocator>::~List() */void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
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
      } else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }
      plVar5 = *(long**)this;
   } while ( (int)plVar5[2] != 0 );
   Memory::free_static(plVar5, false);
   return;
}/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
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
}/* WARNING: Removing unreachable block (ram,0x0010afe8) *//* WARNING: Removing unreachable block (ram,0x0010b17d) *//* WARNING: Removing unreachable block (ram,0x0010b189) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
}/* WARNING: Removing unreachable block (ram,0x0010b320) *//* WARNING: Removing unreachable block (ram,0x0010b4b5) *//* WARNING: Removing unreachable block (ram,0x0010b4c1) *//* String vformat<String, String>(String const&, String const, String const) */undefined8 *vformat<String,String>(undefined8 *param_1, bool *param_2, String *param_3, String *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
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
   Variant::Variant(local_88, param_3);
   Variant::Variant(local_70, param_4);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, param_2);
   *param_1 = local_d0[0];
   pVVar2 = (Variant*)local_40;
   Array::~Array(local_d8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }
   } while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* MethodBindTRS<Ref<DirAccess>, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRS<Ref<DirAccess>,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   long lVar7;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar8;
   long in_FS_OFFSET;
   Object *local_58;
   Variant local_50[8];
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   pVVar1 = param_2[0xb];
   *(undefined4*)param_1 = 0;
   if (in_R8D < 2) {
      pVVar8 = param_2[5];
      if (pVVar8 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0010bb58;
         LAB_0010bad0:pVVar8 = *(Variant**)param_4;
      } else {
         lVar2 = *(long*)( pVVar8 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0010bb58:uVar6 = 4;
            goto LAB_0010bae5;
         }
         if (in_R8D == 1) goto LAB_0010bad0;
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         pVVar8 = pVVar8 + lVar7 * 0x18;
      }
      *in_R9 = 0;
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar8, 4);
      uVar4 = _LC41;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }
      Variant::operator_cast_to_String(local_50);
      ( *(code*)pVVar1 )(&local_58, local_50);
      Variant::Variant((Variant*)local_48, local_58);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }
      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      if (( ( local_58 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)local_58 + 0x140 ))(local_58);
      Memory::free_static(local_58, false);
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
}else{uVar6 = 3;LAB_0010bae5:*in_R9 = uVar6;in_R9[2] = 1;}if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}return param_1;}/* MethodBindTRS<Ref<DirAccess>, String const&, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRS<Ref<DirAccess>,String_const&,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   bool bVar6;
   undefined4 uVar7;
   long lVar8;
   int iVar9;
   uint in_R8D;
   undefined4 *in_R9;
   int iVar10;
   Variant *pVVar11;
   Variant *pVVar12;
   long in_FS_OFFSET;
   Object *local_58;
   Variant local_50[8];
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   pVVar1 = param_2[0xb];
   *(undefined4*)param_1 = 0;
   if (in_R8D < 3) {
      pVVar12 = param_2[5];
      iVar9 = 2 - in_R8D;
      if (pVVar12 == (Variant*)0x0) {
         if (iVar9 != 0) goto LAB_0010bd30;
         pVVar11 = *(Variant**)param_4;
         LAB_0010bd7d:pVVar12 = *(Variant**)( param_4 + 8 );
      } else {
         lVar2 = *(long*)( pVVar12 + -8 );
         iVar10 = (int)lVar2;
         if (iVar10 < iVar9) {
            LAB_0010bd30:uVar7 = 4;
            goto LAB_0010bd35;
         }
         if (in_R8D == 0) {
            lVar8 = (long)( iVar10 + -2 );
            if (lVar2 <= lVar8) goto LAB_0010bdc8;
            pVVar11 = pVVar12 + lVar8 * 0x18;
         } else {
            pVVar11 = *(Variant**)param_4;
            if (in_R8D == 2) goto LAB_0010bd7d;
         }
         lVar8 = (long)(int)( ( iVar10 - iVar9 ) + ( in_R8D ^ 1 ) );
         if (lVar2 <= lVar8) {
            LAB_0010bdc8:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         pVVar12 = pVVar12 + lVar8 * 0x18;
      }
      *in_R9 = 0;
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar12, 1);
      uVar4 = _LC43;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }
      bVar6 = Variant::operator_cast_to_bool(pVVar12);
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 4);
      uVar4 = _LC41;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }
      Variant::operator_cast_to_String(local_50);
      ( *(code*)pVVar1 )(&local_58, local_50, bVar6);
      Variant::Variant((Variant*)local_48, local_58);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }
      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      if (local_58 != (Object*)0x0) {
         cVar5 = RefCounted::unreference();
         if (cVar5 != '\0') {
            cVar5 = predelete_handler(local_58);
            if (cVar5 != '\0') {
               ( **(code**)( *(long*)local_58 + 0x140 ) )(local_58);
               Memory::free_static(local_58, false);
            }
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
   } else {
      uVar7 = 3;
      LAB_0010bd35:*in_R9 = uVar7;
      in_R9[2] = 2;
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRS<String, int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRS<String,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   undefined4 uVar7;
   long lVar8;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar9;
   long in_FS_OFFSET;
   CowData<char32_t> local_50[8];
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   pVVar1 = param_2[0xb];
   *(undefined4*)param_1 = 0;
   if (in_R8D < 2) {
      pVVar9 = param_2[5];
      if (pVVar9 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0010bfc8;
         LAB_0010bf48:pVVar9 = *(Variant**)param_4;
      } else {
         lVar2 = *(long*)( pVVar9 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0010bfc8:uVar7 = 4;
            goto LAB_0010bf55;
         }
         if (in_R8D == 1) goto LAB_0010bf48;
         lVar8 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar8) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         pVVar9 = pVVar9 + lVar8 * 0x18;
      }
      *in_R9 = 0;
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar9, 2);
      uVar4 = _LC44;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }
      iVar6 = Variant::operator_cast_to_int(pVVar9);
      ( *(code*)pVVar1 )(local_50, iVar6);
      Variant::Variant((Variant*)local_48, (String*)local_50);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }
      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      CowData<char32_t>::_unref(local_50);
   } else {
      uVar7 = 3;
      LAB_0010bf55:*in_R9 = uVar7;
      in_R9[2] = 1;
   }
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* MethodBindTRS<Error, String const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTRS<Error,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   undefined4 uVar7;
   long lVar8;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar9;
   long in_FS_OFFSET;
   Variant local_50[8];
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   pVVar1 = param_2[0xb];
   *(undefined4*)param_1 = 0;
   if (in_R8D < 2) {
      pVVar9 = param_2[5];
      if (pVVar9 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0010c188;
         LAB_0010c108:pVVar9 = *(Variant**)param_4;
      } else {
         lVar2 = *(long*)( pVVar9 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0010c188:uVar7 = 4;
            goto LAB_0010c115;
         }
         if (in_R8D == 1) goto LAB_0010c108;
         lVar8 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar8) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         pVVar9 = pVVar9 + lVar8 * 0x18;
      }
      *in_R9 = 0;
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar9, 4);
      uVar4 = _LC41;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }
      Variant::operator_cast_to_String(local_50);
      iVar6 = ( *(code*)pVVar1 )(local_50);
      Variant::Variant((Variant*)local_48, iVar6);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }
      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
   } else {
      uVar7 = 3;
      LAB_0010c115:*in_R9 = uVar7;
      in_R9[2] = 1;
   }
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* MethodBindTRS<bool, String const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTRS<bool,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   bool bVar6;
   undefined4 uVar7;
   long lVar8;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar9;
   long in_FS_OFFSET;
   Variant local_50[8];
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   pVVar1 = param_2[0xb];
   *(undefined4*)param_1 = 0;
   if (in_R8D < 2) {
      pVVar9 = param_2[5];
      if (pVVar9 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0010c348;
         LAB_0010c2c8:pVVar9 = *(Variant**)param_4;
      } else {
         lVar2 = *(long*)( pVVar9 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0010c348:uVar7 = 4;
            goto LAB_0010c2d5;
         }
         if (in_R8D == 1) goto LAB_0010c2c8;
         lVar8 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar8) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         pVVar9 = pVVar9 + lVar8 * 0x18;
      }
      *in_R9 = 0;
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar9, 4);
      uVar4 = _LC41;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }
      Variant::operator_cast_to_String(local_50);
      bVar6 = (bool)( *(code*)pVVar1 )(local_50);
      Variant::Variant((Variant*)local_48, bVar6);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }
      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
   } else {
      uVar7 = 3;
      LAB_0010c2d5:*in_R9 = uVar7;
      in_R9[2] = 1;
   }
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* MethodBindTRS<Error, String const&, String const&, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRS<Error,String_const&,String_const&,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   undefined4 uVar7;
   long lVar8;
   uint uVar9;
   Variant *pVVar10;
   uint in_R8D;
   undefined4 *in_R9;
   long lVar11;
   long in_FS_OFFSET;
   Variant aVStack_88[8];
   Variant local_80[8];
   Variant *local_78[4];
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   pVVar1 = param_2[0xb];
   *(undefined4*)param_1 = 0;
   if (in_R8D < 4) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar6 = 0;
         lVar11 = 0;
      } else {
         lVar11 = *(long*)( pVVar2 + -8 );
         iVar6 = (int)lVar11;
      }
      if ((int)( 3 - in_R8D ) <= iVar6) {
         lVar8 = 0;
         do {
            if ((int)lVar8 < (int)in_R8D) {
               pVVar10 = *(Variant**)( param_4 + lVar8 * 8 );
            } else {
               uVar9 = iVar6 + -3 + (int)lVar8;
               if (lVar11 <= (int)uVar9) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar9, lVar11, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }
               pVVar10 = pVVar2 + (ulong)uVar9 * 0x18;
            }
            local_78[lVar8] = pVVar10;
            lVar8 = lVar8 + 1;
         } while ( lVar8 != 3 );
         *in_R9 = 0;
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_78[2], 2);
         uVar4 = _LC45;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         iVar6 = Variant::operator_cast_to_int(local_78[2]);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_78[1], 4);
         uVar4 = _LC46;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         Variant::operator_cast_to_String(aVStack_88);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_78[0], 4);
         uVar4 = _LC41;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         Variant::operator_cast_to_String(local_80);
         iVar6 = ( *(code*)pVVar1 )(local_80, aVStack_88, iVar6);
         Variant::Variant((Variant*)local_58, iVar6);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }
         *(undefined4*)param_1 = local_58[0];
         *(undefined8*)( param_1 + 8 ) = local_50;
         *(undefined8*)( param_1 + 0x10 ) = uStack_48;
         CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
         CowData<char32_t>::_unref((CowData<char32_t>*)aVStack_88);
         goto LAB_0010c4ff;
      }
      uVar7 = 4;
   } else {
      uVar7 = 3;
   }
   *in_R9 = uVar7;
   in_R9[2] = 3;
   LAB_0010c4ff:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRS<Error, String const&, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRS<Error,String_const&,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   long lVar7;
   int iVar8;
   uint in_R8D;
   undefined4 *in_R9;
   int iVar9;
   Variant *pVVar10;
   Variant *pVVar11;
   long in_FS_OFFSET;
   Variant aVStack_68[8];
   Variant local_60[8];
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   pVVar1 = param_2[0xb];
   *(undefined4*)param_1 = 0;
   if (in_R8D < 3) {
      pVVar11 = param_2[5];
      iVar8 = 2 - in_R8D;
      if (pVVar11 == (Variant*)0x0) {
         if (iVar8 != 0) goto LAB_0010c758;
         pVVar10 = *(Variant**)param_4;
         LAB_0010c7ad:pVVar11 = *(Variant**)( param_4 + 8 );
      } else {
         lVar2 = *(long*)( pVVar11 + -8 );
         iVar9 = (int)lVar2;
         if (iVar9 < iVar8) {
            LAB_0010c758:uVar6 = 4;
            goto LAB_0010c75d;
         }
         if (in_R8D == 0) {
            lVar7 = (long)( iVar9 + -2 );
            if (lVar2 <= lVar7) goto LAB_0010c7c8;
            pVVar10 = pVVar11 + lVar7 * 0x18;
         } else {
            pVVar10 = *(Variant**)param_4;
            if (in_R8D == 2) goto LAB_0010c7ad;
         }
         lVar7 = (long)(int)( ( iVar9 - iVar8 ) + ( in_R8D ^ 1 ) );
         if (lVar2 <= lVar7) {
            LAB_0010c7c8:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         pVVar11 = pVVar11 + lVar7 * 0x18;
      }
      *in_R9 = 0;
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 4);
      uVar4 = _LC46;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }
      Variant::operator_cast_to_String(aVStack_68);
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 4);
      uVar4 = _LC41;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }
      Variant::operator_cast_to_String(local_60);
      iVar8 = ( *(code*)pVVar1 )(local_60, aVStack_68);
      Variant::Variant((Variant*)local_58, iVar8);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }
      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)aVStack_68);
   } else {
      uVar6 = 3;
      LAB_0010c75d:*in_R9 = uVar6;
      in_R9[2] = 2;
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
   undefined7 in_register_00000031;
   List *pLVar5;
   long in_FS_OFFSET;
   StringName *local_a8;
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
   pLVar5 = (List*)CONCAT71(in_register_00000031, param_2);
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
   if (local_90 == 0) {
      LAB_0010c9bd:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010c9bd;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar5;
         local_68 = local_80;
         goto joined_r0x0010c9df;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)pLVar5;
   joined_r0x0010c9df:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])pLVar5 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }
   local_a8 = (StringName*)&local_68;
   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }
   StringName::operator =((StringName*)( puVar4 + 4 ), local_a8);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }
   puVar4[10] = local_50;
   plVar1 = *(long**)pLVar5;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }
   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }
   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
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
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_78, "RefCounted", false);
   ClassDB::get_property_list((StringName*)&local_78, pLVar5, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* DirAccess::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void DirAccess::_get_property_listv(DirAccess *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
   long in_FS_OFFSET;
   StringName *local_a0;
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
   local_78 = "DirAccess";
   local_70 = 9;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "DirAccess";
   local_98 = 0;
   local_70 = 9;
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
      LAB_0010cd6d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010cd6d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010cd8f;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)param_1;
   joined_r0x0010cd8f:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }
   local_a0 = (StringName*)&local_68;
   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }
   StringName::operator =((StringName*)( puVar4 + 4 ), local_a0);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }
   puVar4[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }
   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }
   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
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
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_78, "DirAccess", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }
   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }
   } else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<String, bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<String,bool>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_a8;
   long local_a0;
   long local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   undefined *local_68;
   long local_60;
   ulong local_58;
   undefined4 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_70 = 6;
      local_78 = 0;
      local_90._0_8_ = 0;
      local_90._8_8_ = 0;
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_68);
      local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
      if (local_90._0_8_ != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
         local_90._0_8_ = local_60;
         local_60 = 0;
      }
      if (local_90._8_8_ != local_58) {
         StringName::unref();
         local_90._8_8_ = local_58;
         local_58 = 0;
      }
      local_80 = CONCAT44(local_80._4_4_, local_50);
      if (local_78 != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         local_78 = local_48;
         local_48 = 0;
      }
      local_70 = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
      uVar3 = local_90._8_8_;
      uVar2 = local_90._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_90._8_8_;
      local_90 = auVar1 << 0x40;
      *puVar4 = (undefined4)local_98;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
      *(undefined8*)( puVar4 + 4 ) = uVar3;
      puVar4[6] = (undefined4)local_80;
      *(long*)( puVar4 + 8 ) = local_78;
      puVar4[10] = local_70;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
      goto LAB_0010d1f0;
   }
   local_a0 = 0;
   local_60 = 0;
   local_68 = &_LC4;
   String::parse_latin1((StrRange*)&local_a0);
   local_a8 = 0;
   *puVar4 = 4;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_a0 == 0) {
      puVar4[10] = 6;
      LAB_0010d1b7:StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_98);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_a0);
      puVar4[10] = 6;
      if (puVar4[6] != 0x11) goto LAB_0010d1b7;
      StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
      if (*(undefined**)( puVar4 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         *(undefined**)( puVar4 + 4 ) = local_68;
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }
   LAB_0010d1f0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRS<String, int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRS<String,int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 uVar5;
   undefined8 uVar6;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar7;
   long in_FS_OFFSET;
   undefined8 local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   if (in_EDX != 0) {
      local_a0 = 0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._0_8_;
      local_60 = auVar2 << 0x40;
      local_68 = &_LC4;
      String::parse_latin1((StrRange*)&local_a0);
      local_a8 = 0;
      *puVar7 = 4;
      puVar7[6] = 0;
      *(undefined8*)( puVar7 + 8 ) = 0;
      *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
      if (local_a0 == 0) {
         puVar7[10] = 6;
         LAB_0010d427:StringName::operator =((StringName*)( puVar7 + 4 ), (StringName*)&local_98);
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar7 + 8 ), (CowData*)&local_a0);
         puVar7[10] = 6;
         if (puVar7[6] != 0x11) goto LAB_0010d427;
         StringName::StringName((StringName*)&local_68, (String*)( puVar7 + 8 ), false);
         if (*(undefined**)( puVar7 + 4 ) == local_68) {
            if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
               StringName::unref();
            }
         } else {
            StringName::unref();
            *(undefined**)( puVar7 + 4 ) = local_68;
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
         StringName::unref();
      }
      goto LAB_0010d462;
   }
   local_80 = 0;
   local_90._0_8_ = 0;
   local_90._8_8_ = 0;
   local_78 = 0;
   local_70 = 6;
   local_a8 = 0;
   local_b0 = 0;
   local_68 = &_LC4;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._0_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_b0);
   local_b8 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_b0 == 0) {
      LAB_0010d498:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_a8);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_b0);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010d498;
      StringName::StringName((StringName*)&local_a0, (String*)&local_48, false);
      if (local_60._8_8_ == local_a0) {
         if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_a0;
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }
   local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
   if (local_90._0_8_ != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
      local_90._0_8_ = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
   }
   if (local_90._8_8_ != local_60._8_8_) {
      StringName::unref();
      local_90._8_8_ = local_60._8_8_;
      local_60._8_8_ = 0;
   }
   local_80 = CONCAT44(local_80._4_4_, local_50);
   if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      local_78 = local_48;
      local_48 = 0;
   }
   local_70 = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   uVar6 = local_90._8_8_;
   uVar5 = local_90._0_8_;
   auVar4._8_8_ = 0;
   auVar4._0_8_ = local_90._8_8_;
   local_90 = auVar4 << 0x40;
   *puVar7 = (undefined4)local_98;
   *(undefined8*)( puVar7 + 2 ) = uVar5;
   *(undefined8*)( puVar7 + 4 ) = uVar6;
   puVar7[6] = (undefined4)local_80;
   *(long*)( puVar7 + 8 ) = local_78;
   puVar7[10] = local_70;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
   LAB_0010d462:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar7;
}/* MethodBindT<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<bool>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   long local_88;
   long local_80;
   undefined8 local_78;
   long local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_0010d649;
   local_88 = 0;
   local_68 = &_LC4;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_78 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 1);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010d745:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010d745;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }
   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }
   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }
   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }
   puVar5[10] = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   LAB_0010d649:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar5;
}/* Ref<DirAccess>::unref() */void Ref<DirAccess>::unref(Ref<DirAccess> *this) {
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
}/* MethodBind* create_method_bind<DirAccess, Error>(Error (DirAccess::*)()) */MethodBind *create_method_bind<DirAccess,Error>(_func_Error *param_1) {
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
   *(_func_Error**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00119530;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "DirAccess";
   local_30 = 9;
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
}/* MethodBind* create_method_bind<DirAccess, String>(String (DirAccess::*)()) */MethodBind *create_method_bind<DirAccess,String>(_func_String *param_1) {
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
   *(_func_String**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00119590;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "DirAccess";
   local_30 = 9;
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
}/* MethodBind* create_method_bind<DirAccess, bool>(bool (DirAccess::*)() const) */MethodBind *create_method_bind<DirAccess,bool>(_func_bool *param_1) {
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
   *(_func_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001195f0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "DirAccess";
   local_30 = 9;
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
}/* MethodBind* create_method_bind<DirAccess>(void (DirAccess::*)()) */MethodBind *create_method_bind<DirAccess>(_func_void *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00119650;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "DirAccess";
   local_30 = 9;
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
}/* MethodBind* create_method_bind<DirAccess, Vector<String>>(Vector<String> (DirAccess::*)()) */MethodBind *create_method_bind<DirAccess,Vector<String>>(_func_Vector *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_001196b0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "DirAccess";
   local_30 = 9;
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
}/* MethodBind* create_method_bind<DirAccess, int>(int (DirAccess::*)()) */MethodBind *create_method_bind<DirAccess,int>(_func_int *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00119830;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "DirAccess";
   local_30 = 9;
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
}/* MethodBind* create_method_bind<DirAccess, Error, String>(Error (DirAccess::*)(String)) */MethodBind *create_method_bind<DirAccess,Error,String>(_func_Error_String *param_1) {
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
   *(_func_Error_String**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00119890;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "DirAccess";
   local_30 = 9;
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
}/* MethodBind* create_method_bind<DirAccess, String, bool>(String (DirAccess::*)(bool) const) */MethodBind *create_method_bind<DirAccess,String,bool>(_func_String_bool *param_1) {
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
   *(_func_String_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001198f0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "DirAccess";
   local_30 = 9;
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
}/* MethodBind* create_method_bind<DirAccess, Error, String const&>(Error (DirAccess::*)(String
   const&)) */MethodBind *create_method_bind<DirAccess,Error,String_const&>(_func_Error_String_ptr *param_1) {
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
   *(_func_Error_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001199b0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "DirAccess";
   local_30 = 9;
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
}/* MethodBind* create_method_bind<DirAccess, bool, String>(bool (DirAccess::*)(String)) */MethodBind *create_method_bind<DirAccess,bool,String>(_func_bool_String *param_1) {
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
   *(_func_bool_String**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00119a10;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "DirAccess";
   local_30 = 9;
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
}/* MethodBind* create_method_bind<DirAccess, unsigned long>(unsigned long (DirAccess::*)()) */MethodBind *create_method_bind<DirAccess,unsigned_long>(_func_ulong *param_1) {
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
   *(_func_ulong**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00119ad0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "DirAccess";
   local_30 = 9;
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
}/* MethodBind* create_method_bind<DirAccess, Error, String const&, String const&, int>(Error
   (DirAccess::*)(String const&, String const&, int)) */MethodBind *create_method_bind<DirAccess,Error,String_const&,String_const&,int>(_func_Error_String_ptr_String_ptr_int *param_1) {
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
   *(_func_Error_String_ptr_String_ptr_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00119b30;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 3;
   local_40 = 0;
   local_38 = "DirAccess";
   local_30 = 9;
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
}/* MethodBind* create_method_bind<DirAccess, Error, String, String>(Error (DirAccess::*)(String,
   String)) */MethodBind *create_method_bind<DirAccess,Error,String,String>(_func_Error_String_String *param_1) {
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
   *(_func_Error_String_String**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00119bf0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "DirAccess";
   local_30 = 9;
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
}/* MethodBind* create_method_bind<DirAccess, String, String>(String (DirAccess::*)(String)) */MethodBind *create_method_bind<DirAccess,String,String>(_func_String_String *param_1) {
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
   *(_func_String_String**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00119cb0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "DirAccess";
   local_30 = 9;
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
}/* MethodBind* create_method_bind<DirAccess, bool, String const&>(bool (DirAccess::*)(String const&)
   const) */MethodBind *create_method_bind<DirAccess,bool,String_const&>(_func_bool_String_ptr *param_1) {
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
   *(_func_bool_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00119d10;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "DirAccess";
   local_30 = 9;
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
}/* MethodBind* create_method_bind<DirAccess, bool>(void (DirAccess::*)(bool)) */MethodBind *create_method_bind<DirAccess,bool>(_func_void_bool *param_1) {
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
   *(_func_void_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00119d70;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "DirAccess";
   local_30 = 9;
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
}/* DirAccess::_initialize_classv() */void DirAccess::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
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
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
            StringName::unref();
         }
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
            RefCounted::_bind_methods();
         }
         RefCounted::initialize_class() {
            StringName::unref();
         }
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
            StringName::unref();
         }
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         _bind_methods();
         initialize_class()::initialized = '\x01'
         ;;
      }
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return;
   }
   /* CowData<String>::_unref() */
   void CowData<String>::_unref(CowData<String> *this) {
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
               } while ( lVar3 != lVar7 );
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
   /* GetTypeInfo<Error, void>::get_class_info() */
   GetTypeInfo<Error,void> * GetTypeInfo<Error,void>::get_class_info(GetTypeInfo<Error,void> * this);
   {
      code *pcVar1;
      long lVar2;
      long lVar3;
      long in_FS_OFFSET;
      undefined8 local_80;
      CowData<char32_t> local_78[8];
      undefined8 local_70;
      char local_68[8];
      long local_60;
      char *local_58;
      undefined8 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      local_80 = 0;
      local_58 = "Error";
      local_50 = 5;
      String::parse_latin1((StrRange*)&local_80);
      String::split(local_68, SUB81((StrRange*)&local_80, 0), 0x10eeb0);
      if (( local_60 != 0 ) && ( 2 < *(long*)( local_60 + -8 ) )) {
         local_70 = 0;
         local_50 = 1;
         local_58 = ".";
         String::parse_latin1((StrRange*)&local_70);
         if (local_60 == 0) {
            lVar2 = -2;
            lVar3 = 0;
         } else {
            lVar3 = *(long*)( local_60 + -8 );
            lVar2 = lVar3 + -2;
            if (-1 < lVar2) {
               String::operator +((String*)&local_58, (String*)( local_60 + lVar2 * 8 ));
               String::operator +((String*)local_78, (String*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               goto LAB_0010ef95;
            }
         }
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar2, lVar3, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }
      local_70 = 0;
      local_58 = ".";
      local_50 = 1;
      String::parse_latin1((StrRange*)&local_70);
      String::join(local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      LAB_0010ef95:CowData<String>::_unref((CowData<String>*)&local_60);
      StringName::StringName((StringName*)&local_58, (String*)local_78, false);
      *(undefined4*)this = 2;
      *(undefined4*)( this + 0x18 ) = 0;
      *(undefined8*)( this + 0x20 ) = 0;
      *(undefined4*)( this + 0x28 ) = 0x10006;
      *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
      StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_58 != (undefined*)0x0 )) {
         StringName::unref();
      }
      CowData<char32_t>::_unref(local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return this;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRS<Error>::_gen_argument_type_info(int) const */
   undefined8 MethodBindTRS<Error>::_gen_argument_type_info(int param_1) {
      long lVar1;
      undefined4 in_register_0000003c;
      long in_FS_OFFSET;
      lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)CONCAT44(in_register_0000003c, param_1));
      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return CONCAT44(in_register_0000003c, param_1);
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Error>::_gen_argument_type_info(int) const */
   undefined8 MethodBindTR<Error>::_gen_argument_type_info(int param_1) {
      long lVar1;
      undefined4 in_register_0000003c;
      long in_FS_OFFSET;
      lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)CONCAT44(in_register_0000003c, param_1));
      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return CONCAT44(in_register_0000003c, param_1);
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRS<Vector<String>, String const&>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRS<Vector<String>,String_const&>::ptrcall(MethodBindTRS<Vector<String>,String_const&> *this, Object *param_1, void **param_2, void *param_3) {
      long in_FS_OFFSET;
      undefined1 auStack_38[8];
      long local_30[2];
      long local_20;
      local_20 = *(long*)( in_FS_OFFSET + 0x28 );
      ( **(code**)( this + 0x58 ) )(auStack_38, *param_2, param_2, 0);
      if (*(long*)( (long)param_3 + 8 ) != local_30[0]) {
         CowData<String>::_ref((CowData<String>*)( (long)param_3 + 8 ), (CowData*)local_30);
      }
      CowData<String>::_unref((CowData<String>*)local_30);
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRS<Vector<String>, String const&>::validated_call(Object*, Variant const**, Variant*)
   const */
   void MethodBindTRS<Vector<String>,String_const&>::validated_call(MethodBindTRS<Vector<String>,String_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      long in_FS_OFFSET;
      undefined1 auStack_28[8];
      long local_20[2];
      long local_10;
      local_10 = *(long*)( in_FS_OFFSET + 0x28 );
      ( **(code**)( this + 0x58 ) )(auStack_28, *param_2 + 8, param_2, 0);
      if (*(long*)( *(long*)( param_3 + 8 ) + 0x18 ) != local_20[0]) {
         CowData<String>::_ref((CowData<String>*)( *(long*)( param_3 + 8 ) + 0x18 ), (CowData*)local_20);
      }
      CowData<String>::_unref((CowData<String>*)local_20);
      if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRS<Vector<String>, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */
   Object *MethodBindTRS<Vector<String>,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      long lVar2;
      code *pcVar3;
      undefined8 uVar4;
      char cVar5;
      undefined4 uVar6;
      long lVar7;
      uint in_R8D;
      undefined4 *in_R9;
      Variant *pVVar8;
      long in_FS_OFFSET;
      Variant local_60[8];
      Vector local_58[8];
      CowData<String> local_50[8];
      undefined4 local_48[2];
      undefined8 local_40;
      undefined8 uStack_38;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      pVVar1 = param_2[0xb];
      *(undefined4*)param_1 = 0;
      if (in_R8D < 2) {
         pVVar8 = param_2[5];
         if (pVVar8 == (Variant*)0x0) {
            if (in_R8D != 1) goto LAB_0010f418;
            LAB_0010f398:pVVar8 = *(Variant**)param_4;
         } else {
            lVar2 = *(long*)( pVVar8 + -8 );
            if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
               LAB_0010f418:uVar6 = 4;
               goto LAB_0010f3a5;
            }
            if (in_R8D == 1) goto LAB_0010f398;
            lVar7 = (long)( (int)lVar2 + -1 );
            if (lVar2 <= lVar7) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }
            pVVar8 = pVVar8 + lVar7 * 0x18;
         }
         *in_R9 = 0;
         cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar8, 4);
         uVar4 = _LC41;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         Variant::operator_cast_to_String(local_60);
         ( *(code*)pVVar1 )(local_58, local_60);
         Variant::Variant((Variant*)local_48, local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }
         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         CowData<String>::_unref(local_50);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      } else {
         uVar6 = 3;
         LAB_0010f3a5:*in_R9 = uVar6;
         in_R9[2] = 1;
      }
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return param_1;
   }
   /* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */
   void CowData<String>::_copy_on_write(void) {
      code *pcVar1;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }
   /* CowData<String>::_realloc(long) */
   undefined8 CowData<String>::_realloc(CowData<String> *this, long param_1) {
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
   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* Error CowData<String>::resize<false>(long) */
   undefined8 CowData<String>::resize<false>(CowData<String> *this, long param_1) {
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
      } else {
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
         LAB_0010f7d0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
      if (lVar10 == 0) goto LAB_0010f7d0;
      if (param_1 <= lVar6) {
         lVar6 = *(long*)this;
         uVar8 = param_1;
         while (lVar6 != 0) {
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
               LAB_0010f6a9:if (lVar10 != lVar7) {
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
               if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_0010f6a9;
            };
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
         };
         goto LAB_0010f826;
      }
      if (lVar10 == lVar7) {
         LAB_0010f74f:puVar9 = *(undefined8**)this;
         if (puVar9 == (undefined8*)0x0) {
            LAB_0010f826:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar6 = puVar9[-1];
         if (param_1 <= lVar6) goto LAB_0010f73a;
      } else {
         if (lVar6 != 0) {
            uVar4 = _realloc(this, lVar10);
            if ((int)uVar4 != 0) {
               return uVar4;
            }
            goto LAB_0010f74f;
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
      LAB_0010f73a:puVar9[-1] = param_1;
      return 0;
   }
   for (int i = 0; i < 4; i++) {
      /* WARNING: Removing unreachable block (ram,0x0010f948) */
   }
   undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
   /* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindT<bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
         } else {
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
            goto LAB_0010fdf1;
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
         /* WARNING: Could not recover jumptable at 0x0010fc7d. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined1*)( *(long*)param_3 + 8 ));
         return;
      }
      LAB_0010fdf1:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }
   /* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
         } else {
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
            goto LAB_0010ffd9;
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
         /* WARNING: Could not recover jumptable at 0x0010fe62. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3 != '\0');
         return;
      }
      LAB_0010ffd9:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }
   /* MethodBindTRC<bool, String const&>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<bool,String_const&>::validated_call(MethodBindTRC<bool,String_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      Variant VVar1;
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
         } else {
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
            goto LAB_00110029;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar2 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar2 & 1 ) != 0) {
         pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }
      VVar1 = ( Variant )(*pcVar2)(param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
      param_3[8] = VVar1;
      LAB_00110029:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRC<bool, String const&>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<bool,String_const&>::ptrcall(MethodBindTRC<bool,String_const&> *this, Object *param_1, void **param_2, void *param_3) {
      undefined1 uVar1;
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
         } else {
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
            goto LAB_00110205;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar2 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar2 & 1 ) != 0) {
         pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }
      uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *param_2);
      *(undefined1*)param_3 = uVar1;
      LAB_00110205:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<String, String>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTR<String,String>::validated_call(MethodBindTR<String,String> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      long lVar1;
      long *plVar2;
      code *pcVar3;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
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
         } else {
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
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_00110434;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar3 = *(code**)( this + 0x58 );
      lVar1 = *(long*)( this + 0x60 );
      if (( (ulong)pcVar3 & 1 ) != 0) {
         pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + lVar1 ) + -1 );
      }
      local_48 = (char*)0x0;
      if (*(long*)( *param_2 + 8 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)( *param_2 + 8 ));
      }
      ( *pcVar3 )((CowData<char32_t>*)&local_50, param_1 + lVar1, (CowData<char32_t>*)&local_48);
      if (*(long*)( param_3 + 8 ) != local_50) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( param_3 + 8 ), (CowData*)&local_50);
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      LAB_00110434:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<String, String>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTR<String,String>::ptrcall(MethodBindTR<String,String> *this, Object *param_1, void **param_2, void *param_3) {
      long lVar1;
      long *plVar2;
      code *pcVar3;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
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
         } else {
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
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_0011065e;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar3 = *(code**)( this + 0x58 );
      lVar1 = *(long*)( this + 0x60 );
      if (( (ulong)pcVar3 & 1 ) != 0) {
         pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + lVar1 ) + -1 );
      }
      local_48 = (char*)0x0;
      if (*(long*)*param_2 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)*param_2);
      }
      ( *pcVar3 )((CowData<char32_t>*)&local_50, param_1 + lVar1, (CowData<char32_t>*)&local_48);
      /* WARNING: Load size is inaccurate */
      if (*param_3 != local_50) {
         CowData<char32_t>::_ref((CowData<char32_t>*)param_3, (CowData*)&local_50);
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      LAB_0011065e:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Error, String, String>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTR<Error,String,String>::validated_call(MethodBindTR<Error,String,String> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      long lVar1;
      uint uVar2;
      long *plVar3;
      code *pcVar4;
      long in_FS_OFFSET;
      long local_68;
      undefined8 local_60;
      char *local_58;
      undefined8 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_58, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar3 = *(long**)( param_1 + 0x118 );
            if (plVar3 == (long*)0x0) {
               plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }
         } else {
            plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }
         if (local_58 == (char*)*plVar3) {
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((CowData<char32_t>*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }
            goto LAB_00110899;
         }
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar4 = *(code**)( this + 0x58 );
      lVar1 = *(long*)( this + 0x60 );
      if (( (ulong)pcVar4 & 1 ) != 0) {
         pcVar4 = *(code**)( pcVar4 + *(long*)( param_1 + lVar1 ) + -1 );
      }
      local_60 = 0;
      if (*(long*)( param_2[1] + 8 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( param_2[1] + 8 ));
      }
      local_58 = (char*)0x0;
      if (*(long*)( *param_2 + 8 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( *param_2 + 8 ));
      }
      uVar2 = ( *pcVar4 )(param_1 + lVar1, (CowData<char32_t>*)&local_58, (CowData<char32_t>*)&local_60);
      *(ulong*)( param_3 + 8 ) = (ulong)uVar2;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      LAB_00110899:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Error, String, String>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTR<Error,String,String>::ptrcall(MethodBindTR<Error,String,String> *this, Object *param_1, void **param_2, void *param_3) {
      long lVar1;
      uint uVar2;
      long *plVar3;
      code *pcVar4;
      long in_FS_OFFSET;
      long local_68;
      undefined8 local_60;
      char *local_58;
      undefined8 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_58, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar3 = *(long**)( param_1 + 0x118 );
            if (plVar3 == (long*)0x0) {
               plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }
         } else {
            plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }
         if (local_58 == (char*)*plVar3) {
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((CowData<char32_t>*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }
            goto LAB_00110aae;
         }
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar4 = *(code**)( this + 0x58 );
      lVar1 = *(long*)( this + 0x60 );
      if (( (ulong)pcVar4 & 1 ) != 0) {
         pcVar4 = *(code**)( pcVar4 + *(long*)( param_1 + lVar1 ) + -1 );
      }
      local_60 = 0;
      if (*(long*)param_2[1] != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)param_2[1]);
      }
      local_58 = (char*)0x0;
      if (*(long*)*param_2 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)*param_2);
      }
      uVar2 = ( *pcVar4 )(param_1 + lVar1, (CowData<char32_t>*)&local_58, (CowData<char32_t>*)&local_60);
      *(ulong*)param_3 = (ulong)uVar2;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      LAB_00110aae:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Error, String const&, String const&, int>::validated_call(Object*, Variant const**,
   Variant*) const */
   void MethodBindTR<Error,String_const&,String_const&,int>::validated_call(MethodBindTR<Error,String_const&,String_const&,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         } else {
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
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_00110c81;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar2 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar2 & 1 ) != 0) {
         pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }
      uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *param_2 + 8, param_2[1] + 8, *(undefined4*)( param_2[2] + 8 ));
      *(ulong*)( param_3 + 8 ) = (ulong)uVar1;
      LAB_00110c81:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Error, String const&, String const&, int>::ptrcall(Object*, void const**, void*)
   const */
   void MethodBindTR<Error,String_const&,String_const&,int>::ptrcall(MethodBindTR<Error,String_const&,String_const&,int> *this, Object *param_1, void **param_2, void *param_3) {
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
         } else {
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
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_00110e43;
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
      uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *param_2, param_2[1], *param_2[2]);
      *(ulong*)param_3 = (ulong)uVar1;
      LAB_00110e43:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<unsigned long>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTR<unsigned_long>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      ulong uVar2;
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
         } else {
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
            _err_print_error(&_LC141, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }
            goto LAB_00111120;
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
            uVar2 = ( *(code*)pVVar3 )();
            Variant::Variant((Variant*)local_48, uVar2);
            if (Variant::needs_deinit[*(int*)param_1] != '\0') {
               Variant::_clear_internal();
            }
            *(undefined4*)param_1 = local_48[0];
            *(undefined8*)( param_1 + 8 ) = local_40;
            *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         } else {
            *in_R9 = 4;
            in_R9[2] = 0;
         }
      } else {
         *in_R9 = 3;
         in_R9[2] = 0;
      }
      LAB_00111120:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<unsigned long>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTR<unsigned_long>::validated_call(MethodBindTR<unsigned_long> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      undefined8 uVar1;
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
         } else {
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
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_00111332;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar2 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar2 & 1 ) != 0) {
         pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }
      uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
      *(undefined8*)( param_3 + 8 ) = uVar1;
      LAB_00111332:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<unsigned long>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTR<unsigned_long>::ptrcall(MethodBindTR<unsigned_long> *this, Object *param_1, void **param_2, void *param_3) {
      undefined8 uVar1;
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
         } else {
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
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_001114e1;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar2 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar2 & 1 ) != 0) {
         pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }
      uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
      *(undefined8*)param_3 = uVar1;
      LAB_001114e1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<bool, String>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTR<bool,String>::validated_call(MethodBindTR<bool,String> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      long lVar1;
      char *pcVar2;
      Variant VVar3;
      long *plVar4;
      code *pcVar5;
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
            plVar4 = *(long**)( param_1 + 0x118 );
            if (plVar4 == (long*)0x0) {
               plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }
         } else {
            plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }
         if (local_48 == (char*)*plVar4) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((CowData<char32_t>*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_001116f3;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar5 = *(code**)( this + 0x58 );
      lVar1 = *(long*)( this + 0x60 );
      if (( (ulong)pcVar5 & 1 ) != 0) {
         pcVar5 = *(code**)( pcVar5 + *(long*)( param_1 + lVar1 ) + -1 );
      }
      local_48 = (char*)0x0;
      if (*(long*)( *param_2 + 8 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)( *param_2 + 8 ));
      }
      VVar3 = ( Variant )(*pcVar5)(param_1 + lVar1);
      pcVar2 = local_48;
      param_3[8] = VVar3;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar4 = (long*)( local_48 + -0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar2 + -0x10, false);
         }
      }
      LAB_001116f3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<bool, String>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTR<bool,String>::ptrcall(MethodBindTR<bool,String> *this, Object *param_1, void **param_2, void *param_3) {
      long lVar1;
      char *pcVar2;
      undefined1 uVar3;
      long *plVar4;
      code *pcVar5;
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
            plVar4 = *(long**)( param_1 + 0x118 );
            if (plVar4 == (long*)0x0) {
               plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }
         } else {
            plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }
         if (local_48 == (char*)*plVar4) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((CowData<char32_t>*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_0011191e;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar5 = *(code**)( this + 0x58 );
      lVar1 = *(long*)( this + 0x60 );
      if (( (ulong)pcVar5 & 1 ) != 0) {
         pcVar5 = *(code**)( pcVar5 + *(long*)( param_1 + lVar1 ) + -1 );
      }
      local_48 = (char*)0x0;
      if (*(long*)*param_2 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)*param_2);
      }
      uVar3 = ( *pcVar5 )(param_1 + lVar1);
      pcVar2 = local_48;
      *(undefined1*)param_3 = uVar3;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar4 = (long*)( local_48 + -0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar2 + -0x10, false);
         }
      }
      LAB_0011191e:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Error, String const&>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTR<Error,String_const&>::validated_call(MethodBindTR<Error,String_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         } else {
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
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_00111aec;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar2 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar2 & 1 ) != 0) {
         pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }
      uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
      *(ulong*)( param_3 + 8 ) = (ulong)uVar1;
      LAB_00111aec:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Error, String const&>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTR<Error,String_const&>::ptrcall(MethodBindTR<Error,String_const&> *this, Object *param_1, void **param_2, void *param_3) {
      uint uVar1;
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
         } else {
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
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_00111cc8;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar2 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar2 & 1 ) != 0) {
         pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }
      uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *param_2);
      *(ulong*)param_3 = (ulong)uVar1;
      LAB_00111cc8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRC<String, bool>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<String,bool>::validated_call(MethodBindTRC<String,bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      char *pcVar1;
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
         } else {
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
            goto LAB_00111efc;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar2 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar2 & 1 ) != 0) {
         pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }
      ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), ( *param_2 )[8]);
      if (*(char**)( param_3 + 8 ) != local_48) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( param_3 + 8 ), (CowData*)&local_48);
      }
      pcVar1 = local_48;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar3 = (long*)( local_48 + -0x10 );
         *plVar3 = *plVar3 + -1;
         UNLOCK();
         if (*plVar3 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar1 + -0x10, false);
         }
      }
      LAB_00111efc:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRC<String, bool>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<String,bool>::ptrcall(MethodBindTRC<String,bool> *this, Object *param_1, void **param_2, void *param_3) {
      char *pcVar1;
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
         } else {
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
            goto LAB_00112120;
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
      ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), **param_2 != '\0');
      /* WARNING: Load size is inaccurate */
      if (*param_3 != local_48) {
         CowData<char32_t>::_ref((CowData<char32_t>*)param_3, (CowData*)&local_48);
      }
      pcVar1 = local_48;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar3 = (long*)( local_48 + -0x10 );
         *plVar3 = *plVar3 + -1;
         UNLOCK();
         if (*plVar3 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar1 + -0x10, false);
         }
      }
      LAB_00112120:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Error, String>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTR<Error,String>::validated_call(MethodBindTR<Error,String> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      long lVar1;
      char *pcVar2;
      uint uVar3;
      long *plVar4;
      code *pcVar5;
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
            plVar4 = *(long**)( param_1 + 0x118 );
            if (plVar4 == (long*)0x0) {
               plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }
         } else {
            plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }
         if (local_48 == (char*)*plVar4) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((CowData<char32_t>*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_00112346;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar5 = *(code**)( this + 0x58 );
      lVar1 = *(long*)( this + 0x60 );
      if (( (ulong)pcVar5 & 1 ) != 0) {
         pcVar5 = *(code**)( pcVar5 + *(long*)( param_1 + lVar1 ) + -1 );
      }
      local_48 = (char*)0x0;
      if (*(long*)( *param_2 + 8 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)( *param_2 + 8 ));
      }
      uVar3 = ( *pcVar5 )(param_1 + lVar1);
      pcVar2 = local_48;
      *(ulong*)( param_3 + 8 ) = (ulong)uVar3;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar4 = (long*)( local_48 + -0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar2 + -0x10, false);
         }
      }
      LAB_00112346:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Error, String>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTR<Error,String>::ptrcall(MethodBindTR<Error,String> *this, Object *param_1, void **param_2, void *param_3) {
      long lVar1;
      char *pcVar2;
      uint uVar3;
      long *plVar4;
      code *pcVar5;
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
            plVar4 = *(long**)( param_1 + 0x118 );
            if (plVar4 == (long*)0x0) {
               plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }
         } else {
            plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }
         if (local_48 == (char*)*plVar4) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((CowData<char32_t>*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_00112570;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar5 = *(code**)( this + 0x58 );
      lVar1 = *(long*)( this + 0x60 );
      if (( (ulong)pcVar5 & 1 ) != 0) {
         pcVar5 = *(code**)( pcVar5 + *(long*)( param_1 + lVar1 ) + -1 );
      }
      local_48 = (char*)0x0;
      if (*(long*)*param_2 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)*param_2);
      }
      uVar3 = ( *pcVar5 )(param_1 + lVar1);
      pcVar2 = local_48;
      *(ulong*)param_3 = (ulong)uVar3;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar4 = (long*)( local_48 + -0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar2 + -0x10, false);
         }
      }
      LAB_00112570:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<int>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTR<int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         } else {
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
            _err_print_error(&_LC141, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }
            goto LAB_001127c0;
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
         } else {
            *in_R9 = 4;
            in_R9[2] = 0;
         }
      } else {
         *in_R9 = 3;
         in_R9[2] = 0;
      }
      LAB_001127c0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<int>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTR<int>::validated_call(MethodBindTR<int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         } else {
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
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_001129d4;
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
      LAB_001129d4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<int>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTR<int>::ptrcall(MethodBindTR<int> *this, Object *param_1, void **param_2, void *param_3) {
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
         } else {
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
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_00112b83;
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
      LAB_00112b83:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Vector<String>>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTR<Vector<String>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      Variant *pVVar2;
      long *plVar3;
      undefined4 in_register_00000014;
      long *plVar4;
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
      plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
         if (plVar4[1] == 0) {
            plVar3 = (long*)plVar4[0x23];
            if (plVar3 == (long*)0x0) {
               plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
            }
         } else {
            plVar3 = (long*)( plVar4[1] + 0x20 );
         }
         if (local_58 == (char*)*plVar3) {
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error(&_LC141, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }
            goto LAB_00112dc0;
         }
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
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
            ( *(code*)pVVar2 )(&local_58);
            Variant::Variant((Variant*)local_48, (Vector*)&local_58);
            if (Variant::needs_deinit[*(int*)param_1] != '\0') {
               Variant::_clear_internal();
            }
            *(undefined4*)param_1 = local_48[0];
            *(undefined8*)( param_1 + 8 ) = local_40;
            *(undefined8*)( param_1 + 0x10 ) = uStack_38;
            CowData<String>::_unref((CowData<String>*)&local_50);
         } else {
            *in_R9 = 4;
            in_R9[2] = 0;
         }
      } else {
         *in_R9 = 3;
         in_R9[2] = 0;
      }
      LAB_00112dc0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Vector<String>>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTR<Vector<String>>::validated_call(MethodBindTR<Vector<String>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      code *pcVar1;
      long *plVar2;
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
            plVar2 = *(long**)( param_1 + 0x118 );
            if (plVar2 == (long*)0x0) {
               plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }
         } else {
            plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }
         if (local_48 == (Variant**)*plVar2) {
            if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_48 = (Variant**)0x10fb38;
            local_40[0] = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_00113007;
         }
         param_2 = local_48;
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
            param_2 = extraout_RDX;
         }
      }
      pcVar1 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar1 & 1 ) != 0) {
         param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
         pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
      }
      ( *pcVar1 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
      if (*(long*)( *(long*)( param_3 + 8 ) + 0x18 ) != local_40[0]) {
         CowData<String>::_ref((CowData<String>*)( *(long*)( param_3 + 8 ) + 0x18 ), (CowData*)local_40);
      }
      CowData<String>::_unref((CowData<String>*)local_40);
      LAB_00113007:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Vector<String>>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTR<Vector<String>>::ptrcall(MethodBindTR<Vector<String>> *this, Object *param_1, void **param_2, void *param_3) {
      code *pcVar1;
      long *plVar2;
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
            plVar2 = *(long**)( param_1 + 0x118 );
            if (plVar2 == (long*)0x0) {
               plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }
         } else {
            plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }
         if (local_48 == (void**)*plVar2) {
            if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_48 = (void**)0x10fb38;
            local_40[0] = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_001131e3;
         }
         param_2 = local_48;
         if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
            StringName::unref();
            param_2 = extraout_RDX;
         }
      }
      pcVar1 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar1 & 1 ) != 0) {
         param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
         pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
      }
      ( *pcVar1 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
      if (*(long*)( (long)param_3 + 8 ) != local_40[0]) {
         CowData<String>::_ref((CowData<String>*)( (long)param_3 + 8 ), (CowData*)local_40);
      }
      CowData<String>::_unref((CowData<String>*)local_40);
      LAB_001131e3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindT<>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         } else {
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
            _err_print_error(&_LC141, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_00113460;
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
         } else {
            *in_R9 = 4;
            in_R9[2] = 0;
         }
      } else {
         *in_R9 = 3;
         in_R9[2] = 0;
      }
      LAB_00113460:*(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindT<>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
         } else {
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
            goto LAB_001137df;
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
         /* WARNING: Could not recover jumptable at 0x00113686. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
         return;
      }
      LAB_001137df:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }
   /* MethodBindT<>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
         } else {
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
            goto LAB_0011399f;
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
         /* WARNING: Could not recover jumptable at 0x00113846. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
         return;
      }
      LAB_0011399f:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }
   /* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTRC<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      bool bVar2;
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
         } else {
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
            _err_print_error(&_LC141, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }
            goto LAB_00113a70;
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
            bVar2 = (bool)( *(code*)pVVar3 )();
            Variant::Variant((Variant*)local_48, bVar2);
            if (Variant::needs_deinit[*(int*)param_1] != '\0') {
               Variant::_clear_internal();
            }
            *(undefined4*)param_1 = local_48[0];
            *(undefined8*)( param_1 + 8 ) = local_40;
            *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         } else {
            *in_R9 = 4;
            in_R9[2] = 0;
         }
      } else {
         *in_R9 = 3;
         in_R9[2] = 0;
      }
      LAB_00113a70:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<bool>::validated_call(MethodBindTRC<bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      Variant VVar1;
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
         } else {
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
            goto LAB_00113c82;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar2 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar2 & 1 ) != 0) {
         pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }
      VVar1 = ( Variant )(*pcVar2)(param_1 + *(long*)( this + 0x60 ));
      param_3[8] = VVar1;
      LAB_00113c82:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this, Object *param_1, void **param_2, void *param_3) {
      undefined1 uVar1;
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
         } else {
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
            goto LAB_00113e31;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar2 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar2 & 1 ) != 0) {
         pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }
      uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
      *(undefined1*)param_3 = uVar1;
      LAB_00113e31:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<String>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTR<String>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      Variant *pVVar2;
      long *plVar3;
      undefined4 in_register_00000014;
      long *plVar4;
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
      plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
         if (plVar4[1] == 0) {
            plVar3 = (long*)plVar4[0x23];
            if (plVar3 == (long*)0x0) {
               plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
            }
         } else {
            plVar3 = (long*)( plVar4[1] + 0x20 );
         }
         if (local_58 == (char*)*plVar3) {
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error(&_LC141, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }
            goto LAB_00114070;
         }
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
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
            ( *(code*)pVVar2 )((CowData<char32_t>*)&local_58);
            Variant::Variant((Variant*)local_48, (String*)&local_58);
            if (Variant::needs_deinit[*(int*)param_1] != '\0') {
               Variant::_clear_internal();
            }
            *(undefined4*)param_1 = local_48[0];
            *(undefined8*)( param_1 + 8 ) = local_40;
            *(undefined8*)( param_1 + 0x10 ) = uStack_38;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         } else {
            *in_R9 = 4;
            in_R9[2] = 0;
         }
      } else {
         *in_R9 = 3;
         in_R9[2] = 0;
      }
      LAB_00114070:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<String>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTR<String>::validated_call(MethodBindTR<String> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      Variant **ppVVar1;
      Variant **ppVVar2;
      code *pcVar3;
      long *plVar4;
      Variant **extraout_RDX;
      long in_FS_OFFSET;
      long local_58;
      undefined8 local_50;
      Variant **local_48;
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
         } else {
            plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }
         if (local_48 == (Variant**)*plVar4) {
            if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_48 = (Variant**)0x10fb38;
            local_40 = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_001142d1;
         }
         param_2 = local_48;
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
            param_2 = extraout_RDX;
         }
      }
      pcVar3 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar3 & 1 ) != 0) {
         param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
         pcVar3 = *(code**)( pcVar3 + (long)param_2 + -1 );
      }
      ( *pcVar3 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
      if (*(Variant***)( param_3 + 8 ) != local_48) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( param_3 + 8 ), (CowData*)&local_48);
      }
      ppVVar2 = local_48;
      if (local_48 != (Variant**)0x0) {
         LOCK();
         ppVVar1 = local_48 + -2;
         *ppVVar1 = *ppVVar1 + -1;
         UNLOCK();
         if (*ppVVar1 == (Variant*)0x0) {
            local_48 = (Variant**)0x0;
            Memory::free_static(ppVVar2 + -2, false);
         }
      }
      LAB_001142d1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<String>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTR<String>::ptrcall(MethodBindTR<String> *this, Object *param_1, void **param_2, void *param_3) {
      void **ppvVar1;
      void **ppvVar2;
      code *pcVar3;
      long *plVar4;
      void **extraout_RDX;
      long in_FS_OFFSET;
      long local_58;
      undefined8 local_50;
      void **local_48;
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
         } else {
            plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }
         if (local_48 == (void**)*plVar4) {
            if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_48 = (void**)0x10fb38;
            local_40 = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_001144be;
         }
         param_2 = local_48;
         if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
            StringName::unref();
            param_2 = extraout_RDX;
         }
      }
      pcVar3 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar3 & 1 ) != 0) {
         param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
         pcVar3 = *(code**)( pcVar3 + (long)param_2 + -1 );
      }
      ( *pcVar3 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
      /* WARNING: Load size is inaccurate */
      if (*param_3 != local_48) {
         CowData<char32_t>::_ref((CowData<char32_t>*)param_3, (CowData*)&local_48);
      }
      ppvVar2 = local_48;
      if (local_48 != (void**)0x0) {
         LOCK();
         ppvVar1 = local_48 + -2;
         *ppvVar1 = (void*)( (long)*ppvVar1 + -1 );
         UNLOCK();
         if (*ppvVar1 == (void*)0x0) {
            local_48 = (void**)0x0;
            Memory::free_static(ppvVar2 + -2, false);
         }
      }
      LAB_001144be:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Error>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTR<Error>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         } else {
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
            _err_print_error(&_LC141, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }
            goto LAB_001146e0;
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
         } else {
            *in_R9 = 4;
            in_R9[2] = 0;
         }
      } else {
         *in_R9 = 3;
         in_R9[2] = 0;
      }
      LAB_001146e0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Error>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTR<Error>::validated_call(MethodBindTR<Error> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      uint uVar1;
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
         } else {
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
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_001148f4;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar2 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar2 & 1 ) != 0) {
         pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }
      uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
      *(ulong*)( param_3 + 8 ) = (ulong)uVar1;
      LAB_001148f4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Error>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTR<Error>::ptrcall(MethodBindTR<Error> *this, Object *param_1, void **param_2, void *param_3) {
      uint uVar1;
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
         } else {
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
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_00114aa3;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar2 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar2 & 1 ) != 0) {
         pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }
      uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
      *(ulong*)param_3 = (ulong)uVar1;
      LAB_00114aa3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRC<String, bool>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTRC<String,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      long lVar2;
      code *pcVar3;
      undefined8 uVar4;
      char cVar5;
      bool bVar6;
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
         } else {
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
            _err_print_error(&_LC141, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
               StringName::unref();
            }
            goto LAB_00114d50;
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
            if (in_R8D != 1) goto LAB_00114da0;
            LAB_00114d90:pVVar11 = *(Variant**)param_4;
         } else {
            lVar2 = *(long*)( pVVar11 + -8 );
            if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
               LAB_00114da0:uVar7 = 4;
               goto LAB_00114d45;
            }
            if (in_R8D == 1) goto LAB_00114d90;
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
         cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 1);
         uVar4 = _LC143;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         bVar6 = Variant::operator_cast_to_bool(pVVar11);
         ( *(code*)pVVar12 )((CowData<char32_t>*)&local_68, (Variant*)( (long)plVar10 + (long)pVVar1 ), bVar6);
         Variant::Variant((Variant*)local_58, (String*)&local_68);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }
         *(undefined4*)param_1 = local_58[0];
         *(undefined8*)( param_1 + 8 ) = local_50;
         *(undefined8*)( param_1 + 0x10 ) = uStack_48;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      } else {
         uVar7 = 3;
         LAB_00114d45:*in_R9 = uVar7;
         in_R9[2] = 1;
      }
      LAB_00114d50:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return param_1;
   }
   /* MethodBindTR<Error, String const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */
   Object *MethodBindTR<Error,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         } else {
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
            _err_print_error(&_LC141, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
               StringName::unref();
            }
            goto LAB_001150f0;
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
            if (in_R8D != 1) goto LAB_00115140;
            LAB_00115130:pVVar11 = *(Variant**)param_4;
         } else {
            lVar2 = *(long*)( pVVar11 + -8 );
            if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
               LAB_00115140:uVar7 = 4;
               goto LAB_001150e5;
            }
            if (in_R8D == 1) goto LAB_00115130;
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
         uVar4 = _LC41;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         Variant::operator_cast_to_String((Variant*)&local_68);
         iVar6 = ( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_68);
         Variant::Variant((Variant*)local_58, iVar6);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }
         *(undefined4*)param_1 = local_58[0];
         *(undefined8*)( param_1 + 8 ) = local_50;
         *(undefined8*)( param_1 + 0x10 ) = uStack_48;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      } else {
         uVar7 = 3;
         LAB_001150e5:*in_R9 = uVar7;
         in_R9[2] = 1;
      }
      LAB_001150f0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return param_1;
   }
   /* MethodBindTRC<bool, String const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */
   Object *MethodBindTRC<bool,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      long lVar2;
      code *pcVar3;
      undefined8 uVar4;
      char cVar5;
      bool bVar6;
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
         } else {
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
            _err_print_error(&_LC141, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
               StringName::unref();
            }
            goto LAB_00115490;
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
            if (in_R8D != 1) goto LAB_001154e0;
            LAB_001154d0:pVVar11 = *(Variant**)param_4;
         } else {
            lVar2 = *(long*)( pVVar11 + -8 );
            if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
               LAB_001154e0:uVar7 = 4;
               goto LAB_00115485;
            }
            if (in_R8D == 1) goto LAB_001154d0;
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
         uVar4 = _LC41;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         Variant::operator_cast_to_String((Variant*)&local_68);
         bVar6 = (bool)( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_68);
         Variant::Variant((Variant*)local_58, bVar6);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }
         *(undefined4*)param_1 = local_58[0];
         *(undefined8*)( param_1 + 8 ) = local_50;
         *(undefined8*)( param_1 + 0x10 ) = uStack_48;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      } else {
         uVar7 = 3;
         LAB_00115485:*in_R9 = uVar7;
         in_R9[2] = 1;
      }
      LAB_00115490:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return param_1;
   }
   /* MethodBindTR<Error, String>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTR<Error,String>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         } else {
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
            _err_print_error(&_LC141, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
               StringName::unref();
            }
            goto LAB_00115830;
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
            if (in_R8D != 1) goto LAB_00115880;
            LAB_00115870:pVVar11 = *(Variant**)param_4;
         } else {
            lVar2 = *(long*)( pVVar11 + -8 );
            if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
               LAB_00115880:uVar7 = 4;
               goto LAB_00115825;
            }
            if (in_R8D == 1) goto LAB_00115870;
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
         uVar4 = _LC41;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         Variant::operator_cast_to_String((Variant*)&local_68);
         iVar6 = ( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_68);
         Variant::Variant((Variant*)local_58, iVar6);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }
         *(undefined4*)param_1 = local_58[0];
         *(undefined8*)( param_1 + 8 ) = local_50;
         *(undefined8*)( param_1 + 0x10 ) = uStack_48;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      } else {
         uVar7 = 3;
         LAB_00115825:*in_R9 = uVar7;
         in_R9[2] = 1;
      }
      LAB_00115830:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return param_1;
   }
   /* MethodBindTR<bool, String>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTR<bool,String>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      long lVar2;
      code *pcVar3;
      undefined8 uVar4;
      char cVar5;
      bool bVar6;
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
         } else {
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
            _err_print_error(&_LC141, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
               StringName::unref();
            }
            goto LAB_00115bd0;
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
            if (in_R8D != 1) goto LAB_00115c20;
            LAB_00115c10:pVVar11 = *(Variant**)param_4;
         } else {
            lVar2 = *(long*)( pVVar11 + -8 );
            if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
               LAB_00115c20:uVar7 = 4;
               goto LAB_00115bc5;
            }
            if (in_R8D == 1) goto LAB_00115c10;
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
         uVar4 = _LC41;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         Variant::operator_cast_to_String((Variant*)&local_68);
         bVar6 = (bool)( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_68);
         Variant::Variant((Variant*)local_58, bVar6);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }
         *(undefined4*)param_1 = local_58[0];
         *(undefined8*)( param_1 + 8 ) = local_50;
         *(undefined8*)( param_1 + 0x10 ) = uStack_48;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      } else {
         uVar7 = 3;
         LAB_00115bc5:*in_R9 = uVar7;
         in_R9[2] = 1;
      }
      LAB_00115bd0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return param_1;
   }
   /* MethodBindTR<String, String>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTR<String,String>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      long lVar2;
      code *pcVar3;
      undefined8 uVar4;
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
      long local_78;
      undefined8 local_70;
      char *local_68;
      undefined8 local_60;
      undefined4 local_58[2];
      undefined8 local_50;
      undefined8 uStack_48;
      long local_40;
      plVar9 = (long*)CONCAT44(in_register_00000014, param_3);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar9 != (long*)0x0 ) && ( plVar9[1] != 0 ) ) && ( *(char*)( plVar9[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
         if (plVar9[1] == 0) {
            plVar7 = (long*)plVar9[0x23];
            if (plVar7 == (long*)0x0) {
               plVar7 = (long*)( **(code**)( *plVar9 + 0x40 ) )(plVar9);
            }
         } else {
            plVar7 = (long*)( plVar9[1] + 0x20 );
         }
         if (local_68 == (char*)*plVar7) {
            if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_70 = 0;
            local_60 = 0x35;
            String::parse_latin1((StrRange*)&local_70);
            vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
            _err_print_error(&_LC141, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
               StringName::unref();
            }
            goto LAB_00115f80;
         }
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pVVar11 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (in_R8D < 2) {
         pVVar10 = param_2[5];
         if (pVVar10 == (Variant*)0x0) {
            if (in_R8D != 1) goto LAB_00115fd0;
            LAB_00115fc0:pVVar10 = *(Variant**)param_4;
         } else {
            lVar2 = *(long*)( pVVar10 + -8 );
            if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
               LAB_00115fd0:uVar6 = 4;
               goto LAB_00115f75;
            }
            if (in_R8D == 1) goto LAB_00115fc0;
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
         cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 4);
         uVar4 = _LC41;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         Variant::operator_cast_to_String((Variant*)&local_68);
         ( *(code*)pVVar11 )((CowData<char32_t>*)&local_70, (Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_68);
         Variant::Variant((Variant*)local_58, (String*)&local_70);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }
         *(undefined4*)param_1 = local_58[0];
         *(undefined8*)( param_1 + 8 ) = local_50;
         *(undefined8*)( param_1 + 0x10 ) = uStack_48;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      } else {
         uVar6 = 3;
         LAB_00115f75:*in_R9 = uVar6;
         in_R9[2] = 1;
      }
      LAB_00115f80:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return param_1;
   }
   /* MethodBindTR<Error, String, String>::call(Object*, Variant const**, int, Callable::CallError&)
   const */
   Object *MethodBindTR<Error,String,String>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
      Variant *pVVar11;
      int iVar12;
      uint in_R8D;
      undefined4 *in_R9;
      Variant *pVVar13;
      Variant *pVVar14;
      long in_FS_OFFSET;
      long local_78;
      undefined8 local_70;
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
         } else {
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
            _err_print_error(&_LC141, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
               StringName::unref();
            }
            goto LAB_00116377;
         }
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pVVar13 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (in_R8D < 3) {
         pVVar14 = param_2[5];
         iVar6 = 2 - in_R8D;
         if (pVVar14 == (Variant*)0x0) {
            if (iVar6 != 0) goto LAB_001163b8;
            pVVar11 = *(Variant**)param_4;
            LAB_001163cd:pVVar14 = *(Variant**)( param_4 + 8 );
         } else {
            lVar2 = *(long*)( pVVar14 + -8 );
            iVar12 = (int)lVar2;
            if (iVar12 < iVar6) {
               LAB_001163b8:uVar7 = 4;
               goto LAB_001163a5;
            }
            if (in_R8D == 0) {
               lVar9 = (long)( iVar12 + -2 );
               if (lVar2 <= lVar9) goto LAB_001164a0;
               pVVar11 = pVVar14 + lVar9 * 0x18;
            } else {
               pVVar11 = *(Variant**)param_4;
               if (in_R8D == 2) goto LAB_001163cd;
            }
            lVar9 = (long)(int)( ( in_R8D ^ 1 ) + ( iVar12 - iVar6 ) );
            if (lVar2 <= lVar9) {
               LAB_001164a0:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }
            pVVar14 = pVVar14 + lVar9 * 0x18;
         }
         *in_R9 = 0;
         if (( (ulong)pVVar13 & 1 ) != 0) {
            pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
         }
         cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar14, 4);
         uVar4 = _LC46;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         Variant::operator_cast_to_String((Variant*)&local_70);
         cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 4);
         uVar4 = _LC41;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         Variant::operator_cast_to_String((Variant*)&local_68);
         iVar6 = ( *(code*)pVVar13 )((Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_68, (Variant*)&local_70);
         Variant::Variant((Variant*)local_58, iVar6);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }
         *(undefined4*)param_1 = local_58[0];
         *(undefined8*)( param_1 + 8 ) = local_50;
         *(undefined8*)( param_1 + 0x10 ) = uStack_48;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      } else {
         uVar7 = 3;
         LAB_001163a5:*in_R9 = uVar7;
         in_R9[2] = 2;
      }
      LAB_00116377:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Error, String const&, String const&, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */
   Object *MethodBindTR<Error,String_const&,String_const&,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      Variant *pVVar2;
      code *pcVar3;
      undefined8 uVar4;
      char cVar5;
      undefined4 uVar6;
      int iVar7;
      long lVar8;
      long *plVar9;
      uint uVar10;
      undefined4 in_register_00000014;
      long *plVar11;
      Variant *pVVar12;
      long lVar13;
      uint in_R8D;
      undefined4 *in_R9;
      Variant *pVVar14;
      long in_FS_OFFSET;
      long local_98;
      undefined8 local_90;
      char *local_88;
      undefined8 local_80;
      Variant *local_78[4];
      undefined4 local_58[2];
      undefined8 local_50;
      undefined8 uStack_48;
      long local_40;
      plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_88, (StringName*)( param_2 + 3 ));
         if (plVar11[1] == 0) {
            plVar9 = (long*)plVar11[0x23];
            if (plVar9 == (long*)0x0) {
               plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
            }
         } else {
            plVar9 = (long*)( plVar11[1] + 0x20 );
         }
         if (local_88 == (char*)*plVar9) {
            if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_90 = 0;
            local_80 = 0x35;
            String::parse_latin1((StrRange*)&local_90);
            vformat<StringName>((StringName*)&local_88, (StrRange*)&local_90, &local_98);
            _err_print_error(&_LC141, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_88, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
            if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
               StringName::unref();
            }
            goto LAB_001167e0;
         }
         if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pVVar14 = param_2[0xb];
      pVVar1 = param_2[0xc];
      uVar6 = 3;
      if (in_R8D < 4) {
         pVVar2 = param_2[5];
         if (pVVar2 == (Variant*)0x0) {
            iVar7 = 0;
            lVar13 = 0;
         } else {
            lVar13 = *(long*)( pVVar2 + -8 );
            iVar7 = (int)lVar13;
         }
         if ((int)( 3 - in_R8D ) <= iVar7) {
            lVar8 = 0;
            do {
               if ((int)lVar8 < (int)in_R8D) {
                  pVVar12 = *(Variant**)( param_4 + lVar8 * 8 );
               } else {
                  uVar10 = iVar7 + -3 + (int)lVar8;
                  if (lVar13 <= (int)uVar10) {
                     _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar10, lVar13, "p_index", "size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar3 = (code*)invalidInstructionException();
                     ( *pcVar3 )();
                  }
                  pVVar12 = pVVar2 + (ulong)uVar10 * 0x18;
               }
               local_78[lVar8] = pVVar12;
               lVar8 = lVar8 + 1;
            } while ( lVar8 != 3 );
            *in_R9 = 0;
            if (( (ulong)pVVar14 & 1 ) != 0) {
               pVVar14 = *(Variant**)( pVVar14 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
            }
            cVar5 = Variant::can_convert_strict(*(undefined4*)local_78[2], 2);
            uVar4 = _LC45;
            if (cVar5 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }
            iVar7 = Variant::operator_cast_to_int(local_78[2]);
            cVar5 = Variant::can_convert_strict(*(undefined4*)local_78[1], 4);
            uVar4 = _LC46;
            if (cVar5 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }
            Variant::operator_cast_to_String((Variant*)&local_90);
            cVar5 = Variant::can_convert_strict(*(undefined4*)local_78[0], 4);
            uVar4 = _LC41;
            if (cVar5 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }
            Variant::operator_cast_to_String((Variant*)&local_88);
            iVar7 = ( *(code*)pVVar14 )((Variant*)( (long)plVar11 + (long)pVVar1 ), (Variant*)&local_88, (Variant*)&local_90, iVar7);
            Variant::Variant((Variant*)local_58, iVar7);
            if (Variant::needs_deinit[*(int*)param_1] != '\0') {
               Variant::_clear_internal();
            }
            *(undefined4*)param_1 = local_58[0];
            *(undefined8*)( param_1 + 8 ) = local_50;
            *(undefined8*)( param_1 + 0x10 ) = uStack_48;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
            goto LAB_001167e0;
         }
         uVar6 = 4;
      }
      *in_R9 = uVar6;
      in_R9[2] = 3;
      LAB_001167e0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */
   void call_with_variant_args_dv<__UnexistingClass,bool>(__UnexistingClass *param_1, _func_void_bool *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
         goto LAB_00116b0d;
      }
      lVar1 = *(long*)( in_stack_00000008 + 8 );
      if (lVar1 == 0) {
         if (uVar8 != 1) goto LAB_00116b70;
      } else {
         lVar2 = *(long*)( lVar1 + -8 );
         if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
            LAB_00116b70:uVar6 = 4;
            LAB_00116b0d:*(undefined4*)param_6 = uVar6;
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
            goto LAB_00116a8b;
         }
      }
      this * (Variant**)CONCAT44(in_register_0000000c, param_4);
      LAB_00116a8b:*(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_bool**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }
      cVar5 = Variant::can_convert_strict(*(undefined4*)this, 1);
      uVar4 = _LC143;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }
      Variant::operator_cast_to_bool(this);
      /* WARNING: Could not recover jumptable at 0x00116ae7. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *param_2 )(SUB81(param_1 + (long)param_3, 0));
      return;
   }
   /* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindT<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         } else {
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
            _err_print_error(&_LC141, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            *(undefined4*)param_1 = 0;
            *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
            goto LAB_00116bd6;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      call_with_variant_args_dv<__UnexistingClass,bool>(p_Var2, (_func_void_bool*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      LAB_00116bd6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */
   void call_get_argument_type_info_helper<String_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
      long *plVar1;
      undefined1 auVar2[16];
      undefined1 auVar3[16];
      undefined1 auVar4[16];
      undefined8 uVar5;
      long lVar6;
      int iVar7;
      long in_FS_OFFSET;
      undefined8 local_88;
      long local_80;
      long local_78;
      long local_70;
      undefined *local_68;
      undefined1 local_60[16];
      int local_50;
      long local_48;
      undefined4 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      iVar7 = *param_2;
      if (iVar7 != param_1) goto LAB_00116dd7;
      local_78 = 0;
      local_68 = &_LC4;
      local_80 = 0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      String::parse_latin1((StrRange*)&local_80);
      local_88 = 0;
      local_68 = (undefined*)CONCAT44(local_68._4_4_, 4);
      local_50 = 0;
      local_48 = 0;
      local_60 = (undefined1[16])0x0;
      if (local_80 == 0) {
         LAB_00116ed0:local_40 = 6;
         StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
         local_40 = 6;
         if (local_50 != 0x11) goto LAB_00116ed0;
         StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
         if (local_60._8_8_ == local_70) {
            if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
               StringName::unref();
            }
         } else {
            StringName::unref();
            local_60._8_8_ = local_70;
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
         StringName::unref();
      }
      *(undefined4*)param_3 = local_68._0_4_;
      if (*(long*)( param_3 + 8 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
         uVar5 = local_60._0_8_;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_60._8_8_;
         local_60 = auVar3 << 0x40;
         *(undefined8*)( param_3 + 8 ) = uVar5;
      }
      if (*(long*)( param_3 + 0x10 ) != local_60._8_8_) {
         StringName::unref();
         uVar5 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( param_3 + 0x10 ) = uVar5;
      }
      lVar6 = local_48;
      *(int*)( param_3 + 0x18 ) = local_50;
      if (*(long*)( param_3 + 0x20 ) == local_48) {
         *(undefined4*)( param_3 + 0x28 ) = local_40;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }
         }
      } else {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
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
            auVar4._8_8_ = 0;
            auVar4._0_8_ = local_60._8_8_;
            local_60 = auVar4 << 0x40;
            Memory::free_static((void*)( uVar5 + -0x10 ), false);
         }
      }
      iVar7 = *param_2;
      LAB_00116dd7:*param_2 = iVar7 + 1;
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return;
   }
   /* MethodBindTRS<Ref<DirAccess>, String const&>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRS<Ref<DirAccess>,String_const&>::_gen_argument_type_info(int param_1) {
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
         call_get_argument_type_info_helper<String_const&>(0, (int*)&local_70, (PropertyInfo*)&local_68);
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
         goto LAB_001170e8;
      }
      local_70 = 0;
      local_78 = 0;
      local_68 = "DirAccess";
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
         LAB_001171e7:StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
         if (*(char**)( puVar4 + 4 ) == local_68) {
            if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
               StringName::unref();
            }
         } else {
            StringName::unref();
            *(char**)( puVar4 + 4 ) = local_68;
         }
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_78);
         puVar4[10] = 6;
         if (puVar4[6] == 0x11) goto LAB_001171e7;
         StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_70);
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }
      LAB_001170e8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar4;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRS<Vector<String>, String const&>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRS<Vector<String>,String_const&>::_gen_argument_type_info(int param_1) {
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
         goto LAB_001172e8;
      }
      local_70 = 0;
      local_78 = 0;
      local_68 = &_LC4;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._0_8_;
      local_60 = auVar2 << 0x40;
      String::parse_latin1((StrRange*)&local_78);
      local_80 = 0;
      *puVar5 = 0x22;
      puVar5[6] = 0;
      *(undefined8*)( puVar5 + 8 ) = 0;
      *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
      if (local_78 == 0) {
         puVar5[10] = 6;
         LAB_001173cf:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_70);
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
         puVar5[10] = 6;
         if (puVar5[6] != 0x11) goto LAB_001173cf;
         StringName::StringName((StringName*)&local_68, (String*)( puVar5 + 8 ), false);
         if (*(undefined**)( puVar5 + 4 ) == local_68) {
            if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
               StringName::unref();
            }
         } else {
            StringName::unref();
            *(undefined**)( puVar5 + 4 ) = local_68;
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }
      LAB_001172e8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar5;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Error, String const&>::_gen_argument_type_info(int) const */
   GetTypeInfo<Error,void> *MethodBindTR<Error,String_const&>::_gen_argument_type_info(int param_1) {
      int in_EDX;
      undefined4 in_register_0000003c;
      GetTypeInfo<Error,void> *this;
      long in_FS_OFFSET;
      int local_4c;
      undefined8 local_48;
      undefined1 local_40[16];
      undefined8 local_30;
      undefined8 local_28;
      undefined4 local_20;
      long local_10;
      this(GetTypeInfo<Error,void> * CONCAT44(in_register_0000003c, param_1));
      local_10 = *(long*)( in_FS_OFFSET + 0x28 );
      if (in_EDX == 0) {
         local_48 = 0;
         local_30 = 0;
         local_28 = 0;
         local_20 = 6;
         local_4c = 0;
         local_40 = (undefined1[16])0x0;
         call_get_argument_type_info_helper<String_const&>(0, &local_4c, (PropertyInfo*)&local_48);
         *(undefined4*)this = (undefined4)local_48;
         *(undefined8*)( this + 8 ) = local_40._0_8_;
         *(undefined8*)( this + 0x10 ) = local_40._8_8_;
         *(undefined4*)( this + 0x18 ) = (undefined4)local_30;
         *(undefined8*)( this + 0x20 ) = local_28;
         *(undefined4*)( this + 0x28 ) = local_20;
      } else {
         GetTypeInfo<Error,void>::get_class_info(this);
      }
      if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return this;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRS<bool, String const&>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRS<bool,String_const&>::_gen_argument_type_info(int param_1) {
      undefined1 auVar1[16];
      undefined1 auVar2[16];
      undefined8 uVar3;
      undefined8 uVar4;
      int in_EDX;
      undefined4 in_register_0000003c;
      undefined4 *puVar5;
      long in_FS_OFFSET;
      long local_80;
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
         goto LAB_001175a8;
      }
      local_80 = 0;
      local_78 = 0;
      local_68 = &_LC4;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._0_8_;
      local_60 = auVar2 << 0x40;
      String::parse_latin1((StrRange*)&local_78);
      local_70 = 0;
      *puVar5 = 1;
      puVar5[6] = 0;
      *(undefined8*)( puVar5 + 8 ) = 0;
      *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
      if (local_78 == 0) {
         puVar5[10] = 6;
         LAB_0011768f:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_80);
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
         puVar5[10] = 6;
         if (puVar5[6] != 0x11) goto LAB_0011768f;
         StringName::StringName((StringName*)&local_68, (String*)( puVar5 + 8 ), false);
         if (*(undefined**)( puVar5 + 4 ) == local_68) {
            if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
               StringName::unref();
            }
         } else {
            StringName::unref();
            *(undefined**)( puVar5 + 4 ) = local_68;
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
      LAB_001175a8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar5;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRS<Error, String const&>::_gen_argument_type_info(int) const */
   GetTypeInfo<Error,void> *MethodBindTRS<Error,String_const&>::_gen_argument_type_info(int param_1) {
      int in_EDX;
      undefined4 in_register_0000003c;
      GetTypeInfo<Error,void> *this;
      long in_FS_OFFSET;
      int local_4c;
      undefined8 local_48;
      undefined1 local_40[16];
      undefined8 local_30;
      undefined8 local_28;
      undefined4 local_20;
      long local_10;
      this(GetTypeInfo<Error,void> * CONCAT44(in_register_0000003c, param_1));
      local_10 = *(long*)( in_FS_OFFSET + 0x28 );
      if (in_EDX == 0) {
         local_48 = 0;
         local_30 = 0;
         local_28 = 0;
         local_20 = 6;
         local_4c = 0;
         local_40 = (undefined1[16])0x0;
         call_get_argument_type_info_helper<String_const&>(0, &local_4c, (PropertyInfo*)&local_48);
         *(undefined4*)this = (undefined4)local_48;
         *(undefined8*)( this + 8 ) = local_40._0_8_;
         *(undefined8*)( this + 0x10 ) = local_40._8_8_;
         *(undefined4*)( this + 0x18 ) = (undefined4)local_30;
         *(undefined8*)( this + 0x20 ) = local_28;
         *(undefined4*)( this + 0x28 ) = local_20;
      } else {
         GetTypeInfo<Error,void>::get_class_info(this);
      }
      if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return this;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRC<bool, String const&>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<bool,String_const&>::_gen_argument_type_info(int param_1) {
      undefined1 auVar1[16];
      undefined1 auVar2[16];
      undefined8 uVar3;
      undefined8 uVar4;
      int in_EDX;
      undefined4 in_register_0000003c;
      undefined4 *puVar5;
      long in_FS_OFFSET;
      long local_80;
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
         goto LAB_00117868;
      }
      local_80 = 0;
      local_78 = 0;
      local_68 = &_LC4;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._0_8_;
      local_60 = auVar2 << 0x40;
      String::parse_latin1((StrRange*)&local_78);
      local_70 = 0;
      *puVar5 = 1;
      puVar5[6] = 0;
      *(undefined8*)( puVar5 + 8 ) = 0;
      *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
      if (local_78 == 0) {
         puVar5[10] = 6;
         LAB_0011794f:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_80);
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
         puVar5[10] = 6;
         if (puVar5[6] != 0x11) goto LAB_0011794f;
         StringName::StringName((StringName*)&local_68, (String*)( puVar5 + 8 ), false);
         if (*(undefined**)( puVar5 + 4 ) == local_68) {
            if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
               StringName::unref();
            }
         } else {
            StringName::unref();
            *(undefined**)( puVar5 + 4 ) = local_68;
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
      LAB_00117868:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar5;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRS<Ref<DirAccess>, String const&, bool>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRS<Ref<DirAccess>,String_const&,bool>::_gen_argument_type_info(int param_1) {
      undefined1 auVar1[16];
      undefined8 uVar2;
      undefined8 uVar3;
      uint in_EDX;
      undefined4 in_register_0000003c;
      undefined4 *puVar4;
      long in_FS_OFFSET;
      undefined8 local_a8;
      ulong local_a0;
      long local_98;
      undefined1 local_90[16];
      undefined8 local_80;
      long local_78;
      undefined4 local_70;
      char *local_68;
      long local_60;
      ulong local_58;
      undefined4 local_50;
      long local_48;
      undefined4 local_40;
      long local_30;
      puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (in_EDX < 2) {
         local_98 = 0;
         local_80 = 0;
         local_78 = 0;
         local_70 = 6;
         local_a0 = local_a0 & 0xffffffff00000000;
         local_90._0_8_ = 0;
         local_90._8_8_ = 0;
         call_get_argument_type_info_helper<String_const&>(in_EDX, (int*)&local_a0, (PropertyInfo*)&local_98);
         if (in_EDX == (uint)local_a0) {
            GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_68);
            local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
            if (local_90._0_8_ != local_60) {
               CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
               local_90._0_8_ = local_60;
               local_60 = 0;
            }
            if (local_90._8_8_ != local_58) {
               StringName::unref();
               local_90._8_8_ = local_58;
               local_58 = 0;
            }
            local_80 = CONCAT44(local_80._4_4_, local_50);
            if (local_78 != local_48) {
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               local_78 = local_48;
               local_48 = 0;
            }
            local_70 = local_40;
            PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
         }
         uVar3 = local_90._8_8_;
         uVar2 = local_90._0_8_;
         auVar1._8_8_ = 0;
         auVar1._0_8_ = local_90._8_8_;
         local_90 = auVar1 << 0x40;
         *puVar4 = (undefined4)local_98;
         *(undefined8*)( puVar4 + 2 ) = uVar2;
         *(undefined8*)( puVar4 + 4 ) = uVar3;
         puVar4[6] = (undefined4)local_80;
         *(long*)( puVar4 + 8 ) = local_78;
         puVar4[10] = local_70;
         CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
         goto LAB_00117ab3;
      }
      local_98 = 0;
      local_a0 = 0;
      local_68 = "DirAccess";
      local_60 = 9;
      String::parse_latin1((StrRange*)&local_a0);
      local_a8 = 0;
      *puVar4 = 0x18;
      puVar4[6] = 0x11;
      *(undefined8*)( puVar4 + 8 ) = 0;
      *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
      if (local_a0 == 0) {
         puVar4[10] = 6;
         LAB_00117b7f:StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
         if (*(char**)( puVar4 + 4 ) == local_68) {
            if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
               StringName::unref();
            }
         } else {
            StringName::unref();
            *(char**)( puVar4 + 4 ) = local_68;
         }
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_a0);
         puVar4[10] = 6;
         if (puVar4[6] == 0x11) goto LAB_00117b7f;
         StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_98);
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
         StringName::unref();
      }
      LAB_00117ab3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar4;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRS<Error, String const&, String const&>::_gen_argument_type_info(int) const */
   GetTypeInfo<Error,void> *MethodBindTRS<Error,String_const&,String_const&>::_gen_argument_type_info(int param_1) {
      uint in_EDX;
      undefined4 in_register_0000003c;
      GetTypeInfo<Error,void> *this;
      long in_FS_OFFSET;
      int local_6c;
      undefined8 local_68;
      undefined1 local_60[16];
      undefined8 local_50;
      undefined8 local_48;
      undefined4 local_40;
      long local_30;
      this(GetTypeInfo<Error,void> * CONCAT44(in_register_0000003c, param_1));
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (in_EDX < 2) {
         local_60 = (undefined1[16])0x0;
         local_68 = 0;
         local_50 = 0;
         local_48 = 0;
         local_40 = 6;
         local_6c = 0;
         call_get_argument_type_info_helper<String_const&>(in_EDX, &local_6c, (PropertyInfo*)&local_68);
         call_get_argument_type_info_helper<String_const&>(in_EDX, &local_6c, (PropertyInfo*)&local_68);
         *(undefined4*)this = (undefined4)local_68;
         *(undefined8*)( this + 8 ) = local_60._0_8_;
         *(undefined8*)( this + 0x10 ) = local_60._8_8_;
         *(undefined4*)( this + 0x18 ) = (undefined4)local_50;
         *(undefined8*)( this + 0x20 ) = local_48;
         *(undefined4*)( this + 0x28 ) = local_40;
      } else {
         GetTypeInfo<Error,void>::get_class_info(this);
      }
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return this;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* void call_get_argument_type_info<String const&, String const&, int>(int, PropertyInfo&) */
   void call_get_argument_type_info<String_const&,String_const&,int>(int param_1, PropertyInfo *param_2) {
      long *plVar1;
      undefined1 auVar2[16];
      undefined1 auVar3[16];
      undefined1 auVar4[16];
      undefined8 uVar5;
      long lVar6;
      long in_FS_OFFSET;
      int local_8c;
      undefined8 local_88;
      long local_80;
      long local_78;
      long local_70;
      undefined *local_68;
      undefined1 local_60[16];
      int local_50;
      long local_48;
      undefined4 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      local_8c = 0;
      call_get_argument_type_info_helper<String_const&>(param_1, &local_8c, param_2);
      call_get_argument_type_info_helper<String_const&>(param_1, &local_8c, param_2);
      if (param_1 != local_8c) goto LAB_00117dbe;
      local_78 = 0;
      local_68 = &_LC4;
      local_80 = 0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      String::parse_latin1((StrRange*)&local_80);
      local_88 = 0;
      local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
      local_50 = 0;
      local_48 = 0;
      local_60 = (undefined1[16])0x0;
      if (local_80 == 0) {
         LAB_00117eb0:local_40 = 6;
         StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
         local_40 = 6;
         if (local_50 != 0x11) goto LAB_00117eb0;
         StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
         if (local_60._8_8_ == local_70) {
            if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
               StringName::unref();
            }
         } else {
            StringName::unref();
            local_60._8_8_ = local_70;
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
         StringName::unref();
      }
      *(undefined4*)param_2 = local_68._0_4_;
      if (*(long*)( param_2 + 8 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 8 ));
         uVar5 = local_60._0_8_;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_60._8_8_;
         local_60 = auVar3 << 0x40;
         *(undefined8*)( param_2 + 8 ) = uVar5;
      }
      if (*(long*)( param_2 + 0x10 ) != local_60._8_8_) {
         StringName::unref();
         uVar5 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( param_2 + 0x10 ) = uVar5;
      }
      lVar6 = local_48;
      *(int*)( param_2 + 0x18 ) = local_50;
      if (*(long*)( param_2 + 0x20 ) == local_48) {
         *(undefined4*)( param_2 + 0x28 ) = local_40;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }
         }
      } else {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 0x20 ));
         *(long*)( param_2 + 0x20 ) = local_48;
         *(undefined4*)( param_2 + 0x28 ) = local_40;
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
            auVar4._8_8_ = 0;
            auVar4._0_8_ = local_60._8_8_;
            local_60 = auVar4 << 0x40;
            Memory::free_static((void*)( uVar5 + -0x10 ), false);
         }
      }
      LAB_00117dbe:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return;
   }
   /* MethodBindTR<Error, String const&, String const&, int>::_gen_argument_type_info(int) const */
   GetTypeInfo<Error,void> *MethodBindTR<Error,String_const&,String_const&,int>::_gen_argument_type_info(int param_1) {
      uint in_EDX;
      undefined4 in_register_0000003c;
      GetTypeInfo<Error,void> *this;
      long in_FS_OFFSET;
      undefined8 local_48;
      undefined1 local_40[16];
      undefined8 local_30;
      undefined8 local_28;
      undefined4 local_20;
      long local_10;
      this(GetTypeInfo<Error,void> * CONCAT44(in_register_0000003c, param_1));
      local_10 = *(long*)( in_FS_OFFSET + 0x28 );
      if (in_EDX < 3) {
         local_48 = 0;
         local_30 = 0;
         local_28 = 0;
         local_20 = 6;
         local_40 = (undefined1[16])0x0;
         call_get_argument_type_info<String_const&,String_const&,int>(in_EDX, (PropertyInfo*)&local_48);
         *(undefined4*)this = (undefined4)local_48;
         *(undefined8*)( this + 8 ) = local_40._0_8_;
         *(undefined8*)( this + 0x10 ) = local_40._8_8_;
         *(undefined4*)( this + 0x18 ) = (undefined4)local_30;
         *(undefined8*)( this + 0x20 ) = local_28;
         *(undefined4*)( this + 0x28 ) = local_20;
      } else {
         GetTypeInfo<Error,void>::get_class_info(this);
      }
      if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return this;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRS<Error, String const&, String const&, int>::_gen_argument_type_info(int) const */
   GetTypeInfo<Error,void> *MethodBindTRS<Error,String_const&,String_const&,int>::_gen_argument_type_info(int param_1) {
      uint in_EDX;
      undefined4 in_register_0000003c;
      GetTypeInfo<Error,void> *this;
      long in_FS_OFFSET;
      undefined8 local_48;
      undefined1 local_40[16];
      undefined8 local_30;
      undefined8 local_28;
      undefined4 local_20;
      long local_10;
      this(GetTypeInfo<Error,void> * CONCAT44(in_register_0000003c, param_1));
      local_10 = *(long*)( in_FS_OFFSET + 0x28 );
      if (in_EDX < 3) {
         local_48 = 0;
         local_30 = 0;
         local_28 = 0;
         local_20 = 6;
         local_40 = (undefined1[16])0x0;
         call_get_argument_type_info<String_const&,String_const&,int>(in_EDX, (PropertyInfo*)&local_48);
         *(undefined4*)this = (undefined4)local_48;
         *(undefined8*)( this + 8 ) = local_40._0_8_;
         *(undefined8*)( this + 0x10 ) = local_40._8_8_;
         *(undefined4*)( this + 0x18 ) = (undefined4)local_30;
         *(undefined8*)( this + 0x20 ) = local_28;
         *(undefined4*)( this + 0x28 ) = local_20;
      } else {
         GetTypeInfo<Error,void>::get_class_info(this);
      }
      if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return this;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* void call_get_argument_type_info_helper<String>(int, int&, PropertyInfo&) */
   void call_get_argument_type_info_helper<String>(int param_1, int *param_2, PropertyInfo *param_3) {
      undefined1 auVar1[16];
      undefined1 auVar2[16];
      undefined8 uVar3;
      long lVar4;
      int iVar5;
      long in_FS_OFFSET;
      undefined8 local_88;
      long local_80;
      long local_78;
      long local_70;
      undefined *local_68;
      undefined1 local_60[16];
      int local_50;
      long local_48;
      undefined4 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      iVar5 = *param_2;
      if (iVar5 != param_1) goto LAB_001181a7;
      local_78 = 0;
      local_68 = &_LC4;
      local_80 = 0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      String::parse_latin1((StrRange*)&local_80);
      local_88 = 0;
      local_68 = (undefined*)CONCAT44(local_68._4_4_, 4);
      local_50 = 0;
      local_48 = 0;
      local_60 = (undefined1[16])0x0;
      if (local_80 == 0) {
         LAB_001182a5:local_40 = 6;
         StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
         local_40 = 6;
         if (local_50 != 0x11) goto LAB_001182a5;
         StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
         if (local_60._8_8_ == local_70) {
            if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
               StringName::unref();
            }
         } else {
            StringName::unref();
            local_60._8_8_ = local_70;
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
         StringName::unref();
      }
      *(undefined4*)param_3 = local_68._0_4_;
      if (*(long*)( param_3 + 8 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
         uVar3 = local_60._0_8_;
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_60._8_8_;
         local_60 = auVar2 << 0x40;
         *(undefined8*)( param_3 + 8 ) = uVar3;
      }
      if (*(long*)( param_3 + 0x10 ) != local_60._8_8_) {
         StringName::unref();
         uVar3 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( param_3 + 0x10 ) = uVar3;
      }
      *(int*)( param_3 + 0x18 ) = local_50;
      if (*(long*)( param_3 + 0x20 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
         lVar4 = local_48;
         local_48 = 0;
         *(long*)( param_3 + 0x20 ) = lVar4;
      }
      *(undefined4*)( param_3 + 0x28 ) = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      iVar5 = *param_2;
      LAB_001181a7:*param_2 = iVar5 + 1;
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return;
   }
   /* MethodBindTR<Error, String>::_gen_argument_type_info(int) const */
   GetTypeInfo<Error,void> *MethodBindTR<Error,String>::_gen_argument_type_info(int param_1) {
      int in_EDX;
      undefined4 in_register_0000003c;
      GetTypeInfo<Error,void> *this;
      long in_FS_OFFSET;
      int local_4c;
      undefined8 local_48;
      undefined1 local_40[16];
      undefined8 local_30;
      undefined8 local_28;
      undefined4 local_20;
      long local_10;
      this(GetTypeInfo<Error,void> * CONCAT44(in_register_0000003c, param_1));
      local_10 = *(long*)( in_FS_OFFSET + 0x28 );
      if (in_EDX == 0) {
         local_48 = 0;
         local_30 = 0;
         local_28 = 0;
         local_20 = 6;
         local_4c = 0;
         local_40 = (undefined1[16])0x0;
         call_get_argument_type_info_helper<String>(0, &local_4c, (PropertyInfo*)&local_48);
         *(undefined4*)this = (undefined4)local_48;
         *(undefined8*)( this + 8 ) = local_40._0_8_;
         *(undefined8*)( this + 0x10 ) = local_40._8_8_;
         *(undefined4*)( this + 0x18 ) = (undefined4)local_30;
         *(undefined8*)( this + 0x20 ) = local_28;
         *(undefined4*)( this + 0x28 ) = local_20;
      } else {
         GetTypeInfo<Error,void>::get_class_info(this);
      }
      if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return this;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<bool, String>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTR<bool,String>::_gen_argument_type_info(int param_1) {
      undefined1 auVar1[16];
      undefined1 auVar2[16];
      undefined8 uVar3;
      undefined8 uVar4;
      int in_EDX;
      undefined4 in_register_0000003c;
      undefined4 *puVar5;
      long in_FS_OFFSET;
      long local_80;
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
         call_get_argument_type_info_helper<String>(0, (int*)&local_70, (PropertyInfo*)&local_68);
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
         goto LAB_00118538;
      }
      local_80 = 0;
      local_78 = 0;
      local_68 = &_LC4;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._0_8_;
      local_60 = auVar2 << 0x40;
      String::parse_latin1((StrRange*)&local_78);
      local_70 = 0;
      *puVar5 = 1;
      puVar5[6] = 0;
      *(undefined8*)( puVar5 + 8 ) = 0;
      *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
      if (local_78 == 0) {
         puVar5[10] = 6;
         LAB_0011861f:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_80);
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
         puVar5[10] = 6;
         if (puVar5[6] != 0x11) goto LAB_0011861f;
         StringName::StringName((StringName*)&local_68, (String*)( puVar5 + 8 ), false);
         if (*(undefined**)( puVar5 + 4 ) == local_68) {
            if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
               StringName::unref();
            }
         } else {
            StringName::unref();
            *(undefined**)( puVar5 + 4 ) = local_68;
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
      LAB_00118538:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar5;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<String, String>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTR<String,String>::_gen_argument_type_info(int param_1) {
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
         call_get_argument_type_info_helper<String>(0, (int*)&local_70, (PropertyInfo*)&local_68);
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
         goto LAB_00118738;
      }
      local_70 = 0;
      local_78 = 0;
      local_68 = &_LC4;
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
         LAB_0011881f:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_70);
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
         puVar5[10] = 6;
         if (puVar5[6] != 0x11) goto LAB_0011881f;
         StringName::StringName((StringName*)&local_68, (String*)( puVar5 + 8 ), false);
         if (*(undefined**)( puVar5 + 4 ) == local_68) {
            if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
               StringName::unref();
            }
         } else {
            StringName::unref();
            *(undefined**)( puVar5 + 4 ) = local_68;
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }
      LAB_00118738:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar5;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Error, String, String>::_gen_argument_type_info(int) const */
   GetTypeInfo<Error,void> *MethodBindTR<Error,String,String>::_gen_argument_type_info(int param_1) {
      uint in_EDX;
      undefined4 in_register_0000003c;
      GetTypeInfo<Error,void> *this;
      long in_FS_OFFSET;
      int local_6c;
      undefined8 local_68;
      undefined1 local_60[16];
      undefined8 local_50;
      undefined8 local_48;
      undefined4 local_40;
      long local_30;
      this(GetTypeInfo<Error,void> * CONCAT44(in_register_0000003c, param_1));
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (in_EDX < 2) {
         local_60 = (undefined1[16])0x0;
         local_68 = 0;
         local_50 = 0;
         local_48 = 0;
         local_40 = 6;
         local_6c = 0;
         call_get_argument_type_info_helper<String>(in_EDX, &local_6c, (PropertyInfo*)&local_68);
         call_get_argument_type_info_helper<String>(in_EDX, &local_6c, (PropertyInfo*)&local_68);
         *(undefined4*)this = (undefined4)local_68;
         *(undefined8*)( this + 8 ) = local_60._0_8_;
         *(undefined8*)( this + 0x10 ) = local_60._8_8_;
         *(undefined4*)( this + 0x18 ) = (undefined4)local_50;
         *(undefined8*)( this + 0x20 ) = local_48;
         *(undefined4*)( this + 0x28 ) = local_40;
      } else {
         GetTypeInfo<Error,void>::get_class_info(this);
      }
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return this;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* List<String, DefaultAllocator>::~List() */
   void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodDefinition::~MethodDefinition() */
   void MethodDefinition::~MethodDefinition(MethodDefinition *this) {
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
   /* RefCounted::~RefCounted() */
   void RefCounted::~RefCounted(RefCounted *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<bool, String const&>::~MethodBindTRC() */
   void MethodBindTRC<bool,String_const&>::~MethodBindTRC(MethodBindTRC<bool,String_const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<bool>::~MethodBindTRC() */
   void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<bool>::~MethodBindT() */
   void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTR<Error, String, String>::~MethodBindTR() */
   void MethodBindTR<Error,String,String>::~MethodBindTR(MethodBindTR<Error,String,String> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTR<String, String>::~MethodBindTR() */
   void MethodBindTR<String,String>::~MethodBindTR(MethodBindTR<String,String> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTR<bool, String>::~MethodBindTR() */
   void MethodBindTR<bool,String>::~MethodBindTR(MethodBindTR<bool,String> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRS<Error, String const&>::~MethodBindTRS() */
   void MethodBindTRS<Error,String_const&>::~MethodBindTRS(MethodBindTRS<Error,String_const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTR<Error, String>::~MethodBindTR() */
   void MethodBindTR<Error,String>::~MethodBindTR(MethodBindTR<Error,String> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRS<Error, String const&, String const&>::~MethodBindTRS() */
   void MethodBindTRS<Error,String_const&,String_const&>::~MethodBindTRS(MethodBindTRS<Error,String_const&,String_const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRS<Error, String const&, String const&, int>::~MethodBindTRS() */
   void MethodBindTRS<Error,String_const&,String_const&,int>::~MethodBindTRS(MethodBindTRS<Error,String_const&,String_const&,int> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTR<Error, String const&, String const&, int>::~MethodBindTR() */
   void MethodBindTR<Error,String_const&,String_const&,int>::~MethodBindTR(MethodBindTR<Error,String_const&,String_const&,int> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTR<unsigned long>::~MethodBindTR() */
   void MethodBindTR<unsigned_long>::~MethodBindTR(MethodBindTR<unsigned_long> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRS<bool, String const&>::~MethodBindTRS() */
   void MethodBindTRS<bool,String_const&>::~MethodBindTRS(MethodBindTRS<bool,String_const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTR<Error, String const&>::~MethodBindTR() */
   void MethodBindTR<Error,String_const&>::~MethodBindTR(MethodBindTR<Error,String_const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<String, bool>::~MethodBindTRC() */
   void MethodBindTRC<String,bool>::~MethodBindTRC(MethodBindTRC<String,bool> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTR<int>::~MethodBindTR() */
   void MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRS<String, int>::~MethodBindTRS() */
   void MethodBindTRS<String,int>::~MethodBindTRS(MethodBindTRS<String,int> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRS<int>::~MethodBindTRS() */
   void MethodBindTRS<int>::~MethodBindTRS(MethodBindTRS<int> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRS<Vector<String>, String const&>::~MethodBindTRS() */
   void MethodBindTRS<Vector<String>,String_const&>::~MethodBindTRS(MethodBindTRS<Vector<String>,String_const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTR<Vector<String>>::~MethodBindTR() */
   void MethodBindTR<Vector<String>>::~MethodBindTR(MethodBindTR<Vector<String>> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<>::~MethodBindT() */
   void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTR<String>::~MethodBindTR() */
   void MethodBindTR<String>::~MethodBindTR(MethodBindTR<String> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTR<Error>::~MethodBindTR() */
   void MethodBindTR<Error>::~MethodBindTR(MethodBindTR<Error> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRS<Ref<DirAccess>, String const&, bool>::~MethodBindTRS() */
   void MethodBindTRS<Ref<DirAccess>,String_const&,bool>::~MethodBindTRS(MethodBindTRS<Ref<DirAccess>,String_const&,bool> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRS<Error>::~MethodBindTRS() */
   void MethodBindTRS<Error>::~MethodBindTRS(MethodBindTRS<Error> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRS<Ref<DirAccess>, String const&>::~MethodBindTRS() */
   void MethodBindTRS<Ref<DirAccess>,String_const&>::~MethodBindTRS(MethodBindTRS<Ref<DirAccess>,String_const&> *this) {
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
