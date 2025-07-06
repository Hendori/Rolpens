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
}/* InstancePlaceholder::get_instance_path() const */void InstancePlaceholder::get_instance_path(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x408 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x408 ));
   }
   return;
}/* InstancePlaceholder::_set(StringName const&, Variant const&) */undefined8 InstancePlaceholder::_set(InstancePlaceholder *this, StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   long *plVar2;
   StringName *this_00;
   undefined1(*pauVar3)[16];
   long in_FS_OFFSET;
   long local_58;
   int local_50[2];
   undefined1 local_48[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = (undefined1[16])0x0;
   local_58 = 0;
   local_50[0] = 0;
   StringName::operator =((StringName*)&local_58, param_1);
   Variant::operator =((Variant*)local_50, param_2);
   if (*(long*)( this + 0x410 ) == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])( this + 0x410 ) = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }
   this_00 = (StringName*)operator_new(0x38, DefaultAllocator::alloc);
   *(undefined8*)this_00 = 0;
   *(undefined4*)( this_00 + 8 ) = 0;
   *(undefined8*)( this_00 + 0x30 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x20 ) = (undefined1[16])0x0;
   StringName::operator =(this_00, (StringName*)&local_58);
   Variant::operator =((Variant*)( this_00 + 8 ), (Variant*)local_50);
   uVar1 = *(undefined8*)( *(long*)( this + 0x410 ) + 8 );
   *(long*)( this_00 + 0x30 ) = *(long*)( this + 0x410 );
   plVar2 = *(long**)( this + 0x410 );
   *(undefined8*)( this_00 + 0x20 ) = 0;
   *(undefined8*)( this_00 + 0x28 ) = uVar1;
   if (plVar2[1] != 0) {
      *(StringName**)( plVar2[1] + 0x20 ) = this_00;
   }
   plVar2[1] = (long)this_00;
   if (*plVar2 == 0) {
      *plVar2 = (long)this_00;
   }
   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   if (Variant::needs_deinit[local_50[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
      StringName::unref();
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* InstancePlaceholder::_get(StringName const&, Variant&) const */long *__thiscallInstancePlaceholder::_get(InstancePlaceholder *this, StringName *param_1, Variant *param_2) {
   long *plVar1;
   if (( *(long**)( this + 0x410 ) != (long*)0x0 ) && ( plVar1 = (long*)**(long**)( this + 0x410 ) ),plVar1 != (long*)0x0) {
      do {
         if (*plVar1 == *(long*)param_1) {
            Variant::operator =(param_2, (Variant*)( plVar1 + 1 ));
            return (long*)0x1;
         }
         plVar1 = (long*)plVar1[4];
      } while ( plVar1 != (long*)0x0 );
      return plVar1;
   }
   return (long*)0x0;
}/* InstancePlaceholder::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */void InstancePlaceholder::_get_property_list(InstancePlaceholder *this, List *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined8 uVar6;
   undefined4 *puVar7;
   long lVar8;
   undefined1(*pauVar9)[16];
   long *plVar10;
   long in_FS_OFFSET;
   bool bVar11;
   long local_80;
   char *local_78;
   size_t local_70;
   undefined8 local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long**)( this + 0x410 ) != (long*)0x0 ) && ( plVar10 = (long*)**(long**)( this + 0x410 ) ),plVar10 != (long*)0x0) {
      do {
         local_68 = 0;
         local_50 = 0;
         local_60 = (undefined1[16])0x0;
         lVar2 = *plVar10;
         local_48 = 0;
         local_40 = 6;
         if (lVar2 != 0) {
            __s = *(char**)( lVar2 + 8 );
            local_80 = 0;
            if (__s == (char*)0x0) {
               if (*(long*)( lVar2 + 0x10 ) == 0) goto LAB_0010041a;
               plVar1 = (long*)( *(long*)( lVar2 + 0x10 ) + -0x10 );
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_001003dc;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar11 = lVar3 == lVar8;
                  if (bVar11) {
                     *plVar1 = lVar3 + 1;
                     lVar8 = lVar3;
                  }
                  UNLOCK();
               } while ( !bVar11 );
               if (lVar8 != -1) {
                  local_80 = *(long*)( lVar2 + 0x10 );
               }
            } else {
               local_70 = strlen(__s);
               local_78 = __s;
               String::parse_latin1((StrRange*)&local_80);
            }
            LAB_001003dc:lVar2 = local_80;
            uVar6 = local_60._0_8_;
            if (local_80 == local_60._0_8_) {
               if (local_80 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_80 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_80 = 0;
                     Memory::free_static((void*)( lVar2 + -0x10 ), false);
                  }
               }
            } else {
               if (local_60._0_8_ != 0) {
                  LOCK();
                  plVar1 = (long*)( local_60._0_8_ + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     auVar5._8_8_ = 0;
                     auVar5._0_8_ = local_60._8_8_;
                     local_60 = auVar5 << 0x40;
                     Memory::free_static((void*)( uVar6 + -0x10 ), false);
                  }
               }
               local_60._0_8_ = local_80;
            }
         }
         LAB_0010041a:local_40 = 2;
         local_68 = CONCAT44(local_68._4_4_, (int)plVar10[1]);
         if (*(long*)param_1 == 0) {
            pauVar9 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])param_1 = pauVar9;
            *(undefined4*)pauVar9[1] = 0;
            *pauVar9 = (undefined1[16])0x0;
         }
         puVar7 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
         *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
         *puVar7 = 0;
         puVar7[6] = 0;
         *(undefined8*)( puVar7 + 8 ) = 0;
         puVar7[10] = 6;
         *(undefined8*)( puVar7 + 0x10 ) = 0;
         *(undefined1(*) [16])( puVar7 + 0xc ) = (undefined1[16])0x0;
         *puVar7 = (undefined4)local_68;
         if (local_60._0_8_ != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar7 + 2 ), (CowData*)local_60);
         }
         StringName::operator =((StringName*)( puVar7 + 4 ), (StringName*)( local_60 + 8 ));
         puVar7[6] = (undefined4)local_50;
         if (*(long*)( puVar7 + 8 ) != local_48) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar7 + 8 ), (CowData*)&local_48);
         }
         lVar3 = local_48;
         puVar7[10] = local_40;
         plVar1 = *(long**)param_1;
         lVar2 = plVar1[1];
         *(undefined8*)( puVar7 + 0xc ) = 0;
         *(long**)( puVar7 + 0x10 ) = plVar1;
         *(long*)( puVar7 + 0xe ) = lVar2;
         if (lVar2 != 0) {
            *(undefined4**)( lVar2 + 0x30 ) = puVar7;
         }
         plVar1[1] = (long)puVar7;
         if (*plVar1 == 0) {
            *plVar1 = (long)puVar7;
         }
         *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }
         }
         if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
            StringName::unref();
         }
         uVar6 = local_60._0_8_;
         if (local_60._0_8_ != 0) {
            LOCK();
            plVar1 = (long*)( local_60._0_8_ + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               auVar4._8_8_ = 0;
               auVar4._0_8_ = local_60._8_8_;
               local_60 = auVar4 << 0x40;
               Memory::free_static((void*)( uVar6 + -0x10 ), false);
            }
         }
         plVar10 = (long*)plVar10[4];
      } while ( plVar10 != (long*)0x0 );
   }
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* InstancePlaceholder::set_instance_path(String const&) */void InstancePlaceholder::set_instance_path(InstancePlaceholder *this, String *param_1) {
   if (*(long*)( this + 0x408 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x408 ), (CowData*)param_1);
      return;
   }
   return;
}/* InstancePlaceholder::try_get_node(InstancePlaceholder*, Node*, NodePath const&) */void InstancePlaceholder::try_get_node(InstancePlaceholder *param_1, Node *param_2, NodePath *param_3) {
   long lVar1;
   lVar1 = Node::get_node_or_null(param_3);
   if (lVar1 != 0) {
      return;
   }
   Node::get_node_or_null((NodePath*)param_2);
   return;
}/* InstancePlaceholder::InstancePlaceholder() */void InstancePlaceholder::InstancePlaceholder(InstancePlaceholder *this) {
   Node::Node((Node*)this);
   *(undefined***)this = &PTR__initialize_classv_00106978;
   *(undefined1(*) [16])( this + 0x408 ) = (undefined1[16])0x0;
   return;
}/* InstancePlaceholder::set_value_on_instance(InstancePlaceholder*, Node*,
   InstancePlaceholder::PropSet const&) */void InstancePlaceholder::set_value_on_instance(InstancePlaceholder *this, InstancePlaceholder *param_1, Node *param_2, PropSet *param_3) {
   PropSet *pPVar1;
   bool bVar2;
   char cVar3;
   uint uVar4;
   int iVar5;
   undefined4 uVar6;
   Object *pOVar7;
   long lVar8;
   Object *pOVar9;
   undefined8 uVar10;
   int iVar11;
   int iVar12;
   Variant *pVVar13;
   long in_FS_OFFSET;
   StringName *local_128;
   char local_f9;
   Variant local_f8[8];
   Variant local_f0[8];
   Variant local_e8[8];
   CowData<char32_t> local_e0[8];
   long local_d8;
   undefined8 local_d0;
   StringName local_c8;
   undefined7 uStack_c7;
   undefined4 local_c0[2];
   int local_b8[8];
   int local_98[8];
   int local_78[8];
   int local_58[2];
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Object::get((StringName*)local_b8, (bool*)param_2);
   iVar11 = local_b8[0];
   if (local_f9 == '\0') {
      Object::set((StringName*)param_2, (Variant*)param_3, (bool*)( param_3 + 8 ));
      goto LAB_00100ab8;
   }
   iVar12 = *(int*)( param_3 + 8 );
   if (local_b8[0] == 0x1c) {
      Variant::operator_cast_to_Array(local_f0);
      Variant::operator_cast_to_Array(local_e8);
      cVar3 = Array::is_same_typed((Array*)local_f0);
      if (cVar3 != '\0') {
         Object::set((StringName*)param_2, (Variant*)param_3, (bool*)( param_3 + 8 ));
         if (local_f9 != '\0') {
            Array::~Array((Array*)local_e8);
            Array::~Array((Array*)local_f0);
            goto LAB_00100ab8;
         }
         Node::get_name();
         uVar6 = Array::get_typed_builtin();
         Variant::get_type_name(local_e0, uVar6);
         StringName::StringName(&local_c8, (StringName*)param_3);
         local_d0 = 0;
         String::parse_latin1((String*)&local_d0, "Array Property \'%s\' with type \'%s\' could not be set when creating instance of \'%s\'.");
         vformat<StringName,String,StringName>((CowData<char32_t>*)local_c0, (String*)&local_d0, &local_c8, local_e0, &local_d8);
         _err_print_error("set_value_on_instance", "scene/main/instance_placeholder.cpp", 0x9d, (CowData<char32_t>*)local_c0, 0, 1);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_c0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
         if (( StringName::configured != '\0' ) && ( CONCAT71(uStack_c7, local_c8) != 0 )) {
            StringName::unref();
         }
         CowData<char32_t>::_unref(local_e0);
         if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
            StringName::unref();
         }
      }
      local_128 = &local_c8;
      Array::~Array((Array*)local_e8);
      Array::~Array((Array*)local_f0);
      Variant::operator_cast_to_Array(local_f8);
      Array::Array((Array*)local_f0);
      Variant::operator_cast_to_Array(local_e8);
      Array::duplicate(SUB81((Array*)local_c0, 0));
      Array::operator =((Array*)local_f0, (Array*)local_c0);
      Array::~Array((Array*)local_c0);
      Array::size();
      iVar11 = (int)local_f0;
      Array::resize(iVar11);
      Variant::Variant((Variant*)local_78, 0x16);
      uVar4 = Array::get_typed_builtin();
      Variant::Variant((Variant*)local_98, uVar4);
      local_c0[0] = 0;
      local_50 = (undefined1[16])0x0;
      local_c8 = (StringName)0x1;
      local_58[0] = 0;
      Variant::evaluate((Operator*)local_c0, (Variant*)local_98, (Variant*)local_78, (Variant*)local_58, (bool*)local_128);
      bVar2 = Variant::operator_cast_to_bool((Variant*)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_98[0]] != '\0') {
         Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }
      pVVar13 = (Variant*)0x0;
      iVar12 = (int)local_e8;
      if (bVar2) {
         while (true) {
            iVar5 = Array::size();
            if (iVar5 <= (int)pVVar13) break;
            Array::operator [](iVar12);
            Array::set(iVar11, pVVar13);
            pVVar13 = (Variant*)( ulong )((int)pVVar13 + 1);
         };
      } else {
         while (true) {
            iVar5 = Array::size();
            if (iVar5 <= (int)pVVar13) break;
            Array::operator [](iVar12);
            Variant::operator_cast_to_NodePath((Variant*)local_c0);
            pOVar7 = (Object*)Node::get_node_or_null((NodePath*)param_2);
            if (pOVar7 == (Object*)0x0) {
               pOVar7 = (Object*)Node::get_node_or_null((NodePath*)param_1);
            }
            Variant::Variant((Variant*)local_58, pOVar7);
            Array::set(iVar11, pVVar13);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }
            pVVar13 = (Variant*)( ulong )((int)pVVar13 + 1);
            NodePath::~NodePath((NodePath*)local_c0);
         };
      }
      Variant::Variant((Variant*)local_58, (Array*)local_f0);
      Object::set((StringName*)param_2, (Variant*)param_3, (bool*)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }
      if (local_f9 == '\0') {
         Node::get_name();
         Variant::get_type_name(local_e0, 0x1c);
         StringName::StringName(local_128, (StringName*)param_3);
         local_d0 = 0;
         String::parse_latin1((String*)&local_d0, "Property \'%s\' with type \'%s\' could not be set when creating instance of \'%s\'.");
         vformat<StringName,String,StringName>((Array*)local_c0, (String*)&local_d0, local_128, local_e0, &local_d8);
         _err_print_error("set_value_on_instance", "scene/main/instance_placeholder.cpp", 0xd2, (Array*)local_c0, 0, 1);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_c0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
         if (( StringName::configured != '\0' ) && ( CONCAT71(uStack_c7, local_c8) != 0 )) {
            StringName::unref();
         }
         CowData<char32_t>::_unref(local_e0);
         if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
            StringName::unref();
         }
      }
      Array::~Array((Array*)local_e8);
      Array::~Array((Array*)local_f0);
      Array::~Array((Array*)local_f8);
      goto LAB_00100ab8;
   }
   Variant::Variant((Variant*)local_78, iVar12);
   Variant::Variant((Variant*)local_98, iVar11);
   local_50 = (undefined1[16])0x0;
   local_c0[0] = 0;
   local_c8 = (StringName)0x1;
   local_58[0] = 0;
   Variant::evaluate((Operator*)local_c0, (Variant*)local_98, (Variant*)local_78, (Variant*)local_58, (bool*)&local_c8);
   bVar2 = Variant::operator_cast_to_bool((Variant*)local_58);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (bVar2) {
      Object::set((StringName*)param_2, (Variant*)param_3, (bool*)( param_3 + 8 ));
      if (local_f9 != '\0') goto LAB_00100ab8;
      Node::get_name();
      Variant::get_type_name(local_e0, iVar11);
      StringName::StringName(&local_c8, (StringName*)param_3);
      local_d0 = 0;
      String::parse_latin1((String*)&local_d0, "Property \'%s\' with type \'%s\' could not be set when creating instance of \'%s\'.");
      vformat<StringName,String,StringName>((Operator*)local_c0, (String*)&local_d0, &local_c8, local_e0, &local_d8);
      uVar10 = 0x8d;
   } else {
      if (iVar11 == 0) {
         pPVar1 = param_3 + 8;
         lVar8 = Variant::get_validated_object();
         if (lVar8 == 0) {
            LAB_00100e55:if (iVar12 != 0x16) goto LAB_00100ab8;
            pOVar7 = (Object*)0x0;
            Object::set((StringName*)param_2, (Variant*)param_3, (bool*)pPVar1);
            joined_r0x00101165:if (local_f9 != '\0') goto LAB_00100ab8;
            LAB_00100e88:Variant::operator_cast_to_NodePath((Variant*)local_c0);
            pOVar9 = (Object*)Node::get_node_or_null((NodePath*)param_2);
            if (pOVar9 == (Object*)0x0) {
               pOVar9 = (Object*)Node::get_node_or_null((NodePath*)param_1);
            }
            Variant::Variant((Variant*)local_58, pOVar9);
            Object::set((StringName*)param_2, (Variant*)param_3, (bool*)local_58);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }
            NodePath::~NodePath((NodePath*)local_c0);
            if (pOVar7 == (Object*)0x0) goto LAB_00100ab8;
         } else {
            pOVar7 = (Object*)__dynamic_cast(lVar8, &Object::typeinfo, &Resource::typeinfo, 0);
            if (pOVar7 == (Object*)0x0) {
               if (iVar12 != 0x16) goto LAB_00100ab8;
               Object::set((StringName*)param_2, (Variant*)param_3, (bool*)pPVar1);
               goto joined_r0x00101165;
            }
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') goto LAB_00100e55;
            Object::set((StringName*)param_2, (Variant*)param_3, (bool*)pPVar1);
            if (local_f9 == '\0') goto LAB_00100e88;
         }
         cVar3 = RefCounted::unreference();
         if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler(pOVar7) ),cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
            Memory::free_static(pOVar7, false);
         }
         goto LAB_00100ab8;
      }
      if (iVar11 == 0x18) {
         if (iVar12 == 0x16) {
            Variant::operator_cast_to_NodePath((Variant*)local_c0);
            pOVar7 = (Object*)Node::get_node_or_null((NodePath*)param_2);
            if (pOVar7 == (Object*)0x0) {
               pOVar7 = (Object*)Node::get_node_or_null((NodePath*)param_1);
            }
            Variant::Variant((Variant*)local_58, pOVar7);
            Object::set((StringName*)param_2, (Variant*)param_3, (bool*)local_58);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }
            NodePath::~NodePath((NodePath*)local_c0);
         }
         goto LAB_00100ab8;
      }
      Node::get_name();
      Variant::get_type_name(local_e0, iVar11);
      StringName::StringName(&local_c8, (StringName*)param_3);
      local_d0 = 0;
      String::parse_latin1((String*)&local_d0, "Property \'%s\' with type \'%s\' could not be set when creating instance of \'%s\'.");
      vformat<StringName,String,StringName>((Operator*)local_c0, (String*)&local_d0, &local_c8, local_e0, &local_d8);
      uVar10 = 0xd7;
   }
   _err_print_error("set_value_on_instance", "scene/main/instance_placeholder.cpp", uVar10, (Operator*)local_c0, 0, 1);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (( StringName::configured != '\0' ) && ( CONCAT71(uStack_c7, local_c8) != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref(local_e0);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }
   LAB_00100ab8:if (Variant::needs_deinit[local_b8[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* InstancePlaceholder::create_instance(bool, Ref<PackedScene> const&) */String * __thiscall
InstancePlaceholder::create_instance(InstancePlaceholder *this,bool param_1,Ref *param_2){
   Object *pOVar1;
   code *pcVar2;
   PropSet *pPVar3;
   char cVar4;
   undefined4 uVar5;
   Node *pNVar6;
   Object *pOVar7;
   String *pSVar8;
   long in_FS_OFFSET;
   long local_60;
   Object *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( (byte)this[0x2fa] & 0x40 ) == 0) {
      pSVar8 = (String*)0x0;
      _err_print_error("create_instance", "scene/main/instance_placeholder.cpp", 0x4a, "Condition \"!is_inside_tree()\" is true. Returning: nullptr", 0, 0);
      goto LAB_001014ea;
   }
   pNVar6 = (Node*)Node::get_parent();
   if (pNVar6 == (Node*)0x0) {
      LAB_0010128f:pSVar8 = (String*)0x0;
   } else {
      pOVar1 = *(Object**)param_2;
      if (pOVar1 == (Object*)0x0) {
         local_60 = 0;
         local_50 = 0xb;
         local_58 = (Object*)0x102d5f;
         String::parse_latin1((StrRange*)&local_60);
         ResourceLoader::load(&local_58, this + 0x408, (StrRange*)&local_60, 1, 0);
         if (local_58 == (Object*)0x0) {
            LAB_00101558:pSVar8 = (String*)0x0;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            goto LAB_001014ea;
         }
         pOVar7 = (Object*)__dynamic_cast(local_58, &Object::typeinfo, &PackedScene::typeinfo, 0);
         if (pOVar7 == (Object*)0x0) {
            LAB_0010133d:cVar4 = RefCounted::unreference();
            pOVar7 = pOVar1;
            if (cVar4 == '\0') goto LAB_00101558;
         } else {
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
               if (local_58 == (Object*)0x0) goto LAB_00101558;
               goto LAB_0010133d;
            }
            if (( local_58 == (Object*)0x0 ) || ( cVar4 = RefCounted::unreference() ),cVar4 == '\0') {
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               goto LAB_00101383;
            }
         }
         pOVar1 = local_58;
         cVar4 = predelete_handler(local_58);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (pOVar7 == (Object*)0x0) goto LAB_0010128f;
      } else {
         cVar4 = RefCounted::reference();
         pOVar7 = pOVar1;
         if (cVar4 == '\0') goto LAB_0010128f;
      }
      LAB_00101383:pSVar8 = (String*)PackedScene::instantiate(pOVar7);
      if (pSVar8 != (String*)0x0) {
         Node::get_name();
         if (local_60 == 0) {
            local_58 = (Object*)0x0;
         } else {
            local_58 = (Object*)0x0;
            if (*(char**)( local_60 + 8 ) == (char*)0x0) {
               if (*(long*)( local_60 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( local_60 + 0x10 ));
               }
            } else {
               String::parse_latin1((String*)&local_58, *(char**)( local_60 + 8 ));
            }
         }
         Node::set_name(pSVar8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }
         pcVar2 = *(code**)( *(long*)pSVar8 + 0x1b0 );
         uVar5 = Node::get_multiplayer_authority();
         ( *pcVar2 )(pSVar8, uVar5, 1);
         if (( *(long*)( this + 400 ) != 0 ) && ( *(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0' )) {
            Node::_update_children_cache_impl();
         }
         if (*(undefined8**)( this + 0x410 ) != (undefined8*)0x0) {
            for (pPVar3 = (PropSet*)**(undefined8**)( this + 0x410 ); pPVar3 != (PropSet*)0x0; pPVar3 = *(PropSet**)( pPVar3 + 0x20 )) {
               set_value_on_instance(this, this, (Node*)pSVar8, pPVar3);
            }
         }
         if (param_1) {
            Node::queue_free();
            Node::remove_child(pNVar6);
         }
         Node::add_child(pNVar6, pSVar8, 0, 0);
         Node::move_child(pNVar6, (int)pSVar8);
      }
      cVar4 = RefCounted::unreference();
      if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler(pOVar7) ),cVar4 != '\0') {
         ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
         Memory::free_static(pOVar7, false);
      }
   }
   LAB_001014ea:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return pSVar8;
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
}/* InstancePlaceholder::_bind_methods() */void InstancePlaceholder::_bind_methods(void) {
   Variant *pVVar1;
   undefined1 auVar2[16];
   MethodBind *pMVar3;
   uint uVar4;
   Variant *pVVar5;
   long in_FS_OFFSET;
   long local_118[2];
   CowData<StringName> local_108[16];
   Variant *local_f8;
   undefined1 local_f0[16];
   char *local_d8;
   char *pcStack_d0;
   undefined8 local_c8;
   Variant *local_b8;
   Variant *pVStack_b0;
   undefined8 local_a0;
   undefined1 local_98[16];
   int local_88[2];
   undefined1 local_80[16];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_f0._0_8_;
   local_f0 = auVar2 << 0x40;
   local_f8 = (Variant*)0x102dc7;
   uVar4 = (uint)(Variant*)&local_b8;
   local_b8 = (Variant*)&local_f8;
   D_METHODP((char*)local_118, (char***)"get_stored_values", uVar4);
   Variant::Variant((Variant*)&local_b8, false);
   local_98 = (undefined1[16])0x0;
   local_a0 = 0;
   local_f8 = (Variant*)&local_b8;
   pMVar3 = create_method_bind<InstancePlaceholder,Dictionary,bool>(get_stored_values);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)local_118, &local_f8, 1);
   if (Variant::needs_deinit[(int)local_a0] != '\0') {
      Variant::_clear_internal();
   }
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }
   CowData<StringName>::_unref(local_108);
   if (( StringName::configured != '\0' ) && ( local_118[0] != 0 )) {
      StringName::unref();
   }
   local_f0 = (undefined1[16])0x0;
   local_d8 = "replace";
   pcStack_d0 = "custom_scene";
   local_f8 = (Variant*)0x0;
   local_c8 = 0;
   local_b8 = (Variant*)&local_d8;
   pVStack_b0 = (Variant*)&pcStack_d0;
   D_METHODP((char*)local_118, (char***)"create_instance", uVar4);
   Variant::Variant((Variant*)local_88, false);
   Variant::Variant(local_70, (Variant*)&local_f8);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   local_b8 = (Variant*)local_88;
   pVStack_b0 = local_70;
   pMVar3 = create_method_bind<InstancePlaceholder,Node*,bool,Ref<PackedScene>const&>(create_instance);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)local_118, &local_b8, 2);
   pVVar5 = (Variant*)local_40;
   do {
      pVVar1 = pVVar5 + -0x18;
      pVVar5 = pVVar5 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }
   } while ( pVVar5 != (Variant*)local_88 );
   CowData<StringName>::_unref(local_108);
   if (( StringName::configured != '\0' ) && ( local_118[0] != 0 )) {
      StringName::unref();
   }
   if (Variant::needs_deinit[(int)local_f8] != '\0') {
      Variant::_clear_internal();
   }
   D_METHODP((char*)local_118, (char***)"get_instance_path", 0);
   local_80 = (undefined1[16])0x0;
   local_88[0] = 0;
   local_88[1] = 0;
   pMVar3 = create_method_bind<InstancePlaceholder,String>(get_instance_path);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
   }
   CowData<StringName>::_unref(local_108);
   if (( StringName::configured != '\0' ) && ( local_118[0] != 0 )) {
      StringName::unref();
   }
   if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* InstancePlaceholder::get_stored_values(bool) */Dictionary *InstancePlaceholder::get_stored_values(bool param_1) {
   long *plVar1;
   CowData<char32_t> *this;
   char *__s;
   int iVar2;
   Variant *pVVar3;
   long lVar4;
   long lVar5;
   char in_DL;
   StringName *pSVar6;
   long in_RSI;
   undefined7 in_register_00000039;
   Dictionary *this_00;
   long lVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_a0;
   Vector local_98[8];
   long local_90;
   char *local_88;
   size_t local_80;
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   this_00 = (Dictionary*)CONCAT71(in_register_00000039, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary(this_00);
   local_90 = 0;
   if (( *(long**)( in_RSI + 0x410 ) != (long*)0x0 ) && ( pSVar6 = (StringName*)**(long**)( in_RSI + 0x410 ) ),pSVar6 != (StringName*)0x0) {
      do {
         Variant::Variant((Variant*)local_58, pSVar6);
         pVVar3 = (Variant*)Dictionary::operator []((Variant*)this_00);
         Variant::operator =(pVVar3, (Variant*)( pSVar6 + 8 ));
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }
         if (in_DL != '\0') {
            lVar7 = *(long*)pSVar6;
            if (lVar7 == 0) {
               local_a0 = 0;
               if (local_90 != 0) goto LAB_00101bbf;
               LAB_00101cb8:iVar2 = CowData<String>::resize<false>((CowData<String>*)&local_90, 1);
               if (iVar2 == 0) goto LAB_00101bd7;
               LAB_00101cd0:_err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
            } else {
               __s = *(char**)( lVar7 + 8 );
               local_a0 = 0;
               if (__s == (char*)0x0) {
                  plVar1 = (long*)( *(long*)( lVar7 + 0x10 ) + -0x10 );
                  if (*(long*)( lVar7 + 0x10 ) != 0) {
                     do {
                        lVar5 = *plVar1;
                        if (lVar5 == 0) goto LAB_00101bb1;
                        LOCK();
                        lVar4 = *plVar1;
                        bVar8 = lVar5 == lVar4;
                        if (bVar8) {
                           *plVar1 = lVar5 + 1;
                           lVar4 = lVar5;
                        }
                        UNLOCK();
                     } while ( !bVar8 );
                     if (lVar4 != -1) {
                        local_a0 = *(long*)( lVar7 + 0x10 );
                     }
                  }
               } else {
                  local_80 = strlen(__s);
                  local_88 = __s;
                  String::parse_latin1((StrRange*)&local_a0);
               }
               LAB_00101bb1:if (local_90 == 0) goto LAB_00101cb8;
               LAB_00101bbf:iVar2 = CowData<String>::resize<false>((CowData<String>*)&local_90, *(long*)( local_90 + -8 ) + 1);
               if (iVar2 != 0) goto LAB_00101cd0;
               LAB_00101bd7:if (local_90 == 0) {
                  lVar5 = -1;
                  lVar7 = 0;
                  LAB_00101daa:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar5, lVar7, "p_index", "size()", "", false, false);
               } else {
                  lVar7 = *(long*)( local_90 + -8 );
                  lVar5 = lVar7 + -1;
                  if (lVar5 < 0) goto LAB_00101daa;
                  CowData<String>::_copy_on_write((CowData<String>*)&local_90);
                  this(CowData<char32_t> * )(local_90 + lVar5 * 8);
                  if (*(long*)this != local_a0) {
                     CowData<char32_t>::_ref(this, (CowData*)&local_a0);
                  }
               }
            }
            lVar7 = local_a0;
            if (local_a0 != 0) {
               LOCK();
               plVar1 = (long*)( local_a0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_a0 = 0;
                  Memory::free_static((void*)( lVar7 + -0x10 ), false);
               }
            }
         }
         pSVar6 = *(StringName**)( pSVar6 + 0x20 );
      } while ( pSVar6 != (StringName*)0x0 );
   }
   if (in_DL != '\0') {
      Variant::Variant((Variant*)local_58, local_98);
      Variant::Variant((Variant*)local_78, ".order");
      pVVar3 = (Variant*)Dictionary::operator []((Variant*)this_00);
      if (pVVar3 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar3] != '\0') {
            Variant::_clear_internal();
         }
         *(undefined4*)pVVar3 = 0;
         *(int*)pVVar3 = local_58[0];
         *(undefined8*)( pVVar3 + 8 ) = local_50;
         *(undefined8*)( pVVar3 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }
   }
   CowData<String>::_unref((CowData<String>*)&local_90);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return this_00;
}/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }
   return;
}/* Object::_validate_property(PropertyInfo&) const */void Object::_validate_property(PropertyInfo *param_1) {
   return;
}/* Object::_notification(int) */void Object::_notification(int param_1) {
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
}/* InstancePlaceholder::is_class_ptr(void*) const */uint InstancePlaceholder::is_class_ptr(InstancePlaceholder *this, void *param_1) {
   return (uint)CONCAT71(0x106c, (undefined4*)param_1 == &Node::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x106c, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x106c, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}/* InstancePlaceholder::_property_can_revertv(StringName const&) const */undefined8 InstancePlaceholder::_property_can_revertv(StringName *param_1) {
   return 0;
}/* InstancePlaceholder::_property_get_revertv(StringName const&, Variant&) const */undefined8 InstancePlaceholder::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}/* MethodBindTRC<String>::_gen_argument_type(int) const */undefined8 MethodBindTRC<String>::_gen_argument_type(int param_1) {
   return 4;
}/* MethodBindTRC<String>::get_argument_meta(int) const */undefined8 MethodBindTRC<String>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTR<Node*, bool, Ref<PackedScene> const&>::_gen_argument_type(int) const */int MethodBindTR<Node*,bool,Ref<PackedScene>const&>::_gen_argument_type(MethodBindTR<Node*,bool,Ref<PackedScene>const&> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xffffffe9 ) + 0x18;
}/* MethodBindTR<Node*, bool, Ref<PackedScene> const&>::get_argument_meta(int) const */undefined8 MethodBindTR<Node*,bool,Ref<PackedScene>const&>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTR<Dictionary, bool>::_gen_argument_type(int) const */int MethodBindTR<Dictionary,bool>::_gen_argument_type(MethodBindTR<Dictionary,bool> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xffffffe6 ) + 0x1b;
}/* MethodBindTR<Dictionary, bool>::get_argument_meta(int) const */undefined8 MethodBindTR<Dictionary,bool>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTR<Dictionary, bool>::~MethodBindTR() */void MethodBindTR<Dictionary,bool>::~MethodBindTR(MethodBindTR<Dictionary,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00106b40;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTR<Dictionary, bool>::~MethodBindTR() */void MethodBindTR<Dictionary,bool>::~MethodBindTR(MethodBindTR<Dictionary,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00106b40;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTR<Node*, bool, Ref<PackedScene> const&>::~MethodBindTR() */void MethodBindTR<Node*,bool,Ref<PackedScene>const&>::~MethodBindTR(MethodBindTR<Node*,bool,Ref<PackedScene>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00106ba0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTR<Node*, bool, Ref<PackedScene> const&>::~MethodBindTR() */void MethodBindTR<Node*,bool,Ref<PackedScene>const&>::~MethodBindTR(MethodBindTR<Node*,bool,Ref<PackedScene>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00106ba0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<String>::~MethodBindTRC() */void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00106c00;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<String>::~MethodBindTRC() */void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00106c00;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* InstancePlaceholder::_validate_propertyv(PropertyInfo&) const */void InstancePlaceholder::_validate_propertyv(PropertyInfo *param_1) {
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_validate_property) {
      Node::_validate_property(param_1);
      return;
   }
   return;
}/* InstancePlaceholder::_notificationv(int, bool) */void InstancePlaceholder::_notificationv(InstancePlaceholder *this, int param_1, bool param_2) {
   if (param_2) {
      if ((code*)PTR__notification_00109008 == Object::_notification) {
         return;
      }
   } else if ((code*)PTR__notification_00109008 == Object::_notification) {
      return;
   }
   Node::_notification((int)this);
   return;
}/* InstancePlaceholder::_getv(StringName const&, Variant&) const */long *__thiscallInstancePlaceholder::_getv(InstancePlaceholder *this, StringName *param_1, Variant *param_2) {
   long *plVar1;
   if (( *(long**)( this + 0x410 ) != (long*)0x0 ) && ( plVar1 = (long*)**(long**)( this + 0x410 ) ),plVar1 != (long*)0x0) {
      do {
         if (*plVar1 == *(long*)param_1) {
            Variant::operator =(param_2, (Variant*)( plVar1 + 1 ));
            return (long*)0x1;
         }
         plVar1 = (long*)plVar1[4];
      } while ( plVar1 != (long*)0x0 );
      return plVar1;
   }
   return (long*)0x0;
}/* InstancePlaceholder::_get_class_namev() const */undefined8 *InstancePlaceholder::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }
   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00102213:return &_get_class_namev();
      }
      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00102213;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "InstancePlaceholder");
         goto LAB_0010227e;
      }
   }
   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "InstancePlaceholder");
   LAB_0010227e:return &_get_class_namev();
}/* InstancePlaceholder::get_class() const */void InstancePlaceholder::get_class(void) {
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
}/* MethodBindTRC<String>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<String>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC1;
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
         goto joined_r0x001024cc;
      }
   }
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x001024cc:local_58 = lVar2;
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
}/* InstancePlaceholder::_setv(StringName const&, Variant const&) */void InstancePlaceholder::_setv(InstancePlaceholder *this, StringName *param_1, Variant *param_2) {
   _set(this, param_1, param_2);
   return;
}/* List<InstancePlaceholder::PropSet, DefaultAllocator>::~List() */void List<InstancePlaceholder::PropSet,DefaultAllocator>::~List(List<InstancePlaceholder::PropSet,DefaultAllocator> *this) {
   long *plVar1;
   long *plVar2;
   plVar2 = *(long**)this;
   if (plVar2 == (long*)0x0) {
      return;
   }
   do {
      plVar1 = (long*)*plVar2;
      if (plVar1 == (long*)0x0) {
         if ((int)plVar2[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }
         break;
      }
      if ((long*)plVar1[6] == plVar2) {
         *plVar2 = plVar1[4];
         if (plVar1 == (long*)plVar2[1]) {
            plVar2[1] = plVar1[5];
         }
         if (plVar1[5] != 0) {
            *(long*)( plVar1[5] + 0x20 ) = plVar1[4];
         }
         if (plVar1[4] != 0) {
            *(long*)( plVar1[4] + 0x28 ) = plVar1[5];
         }
         if (Variant::needs_deinit[(int)plVar1[1]] != '\0') {
            Variant::_clear_internal();
         }
         if (( StringName::configured != '\0' ) && ( *plVar1 != 0 )) {
            StringName::unref();
         }
         Memory::free_static(plVar1, false);
         *(int*)( plVar2 + 2 ) = (int)plVar2[2] + -1;
      } else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }
      plVar2 = *(long**)this;
   } while ( (int)plVar2[2] != 0 );
   Memory::free_static(plVar2, false);
   return;
}/* InstancePlaceholder::~InstancePlaceholder() */void InstancePlaceholder::~InstancePlaceholder(InstancePlaceholder *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_00106978;
   List<InstancePlaceholder::PropSet,DefaultAllocator>::~List((List<InstancePlaceholder::PropSet,DefaultAllocator>*)( this + 0x410 ));
   if (*(long*)( this + 0x408 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x408 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x408 );
         *(undefined8*)( this + 0x408 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         Node::~Node((Node*)this);
         return;
      }
   }
   Node::~Node((Node*)this);
   return;
}/* InstancePlaceholder::~InstancePlaceholder() */void InstancePlaceholder::~InstancePlaceholder(InstancePlaceholder *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_00106978;
   List<InstancePlaceholder::PropSet,DefaultAllocator>::~List((List<InstancePlaceholder::PropSet,DefaultAllocator>*)( this + 0x410 ));
   if (*(long*)( this + 0x408 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x408 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x408 );
         *(undefined8*)( this + 0x408 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   Node::~Node((Node*)this);
   operator_delete(this, 0x418);
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
}/* WARNING: Removing unreachable block (ram,0x00102a70) *//* String vformat<StringName, String, StringName>(String const&, StringName const, String const,
   StringName const) */undefined8 *vformat<StringName,String,StringName>(undefined8 *param_1, bool *param_2, StringName *param_3, String *param_4, StringName *param_5) {
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
   } while ( iVar4 != 3 );
   String::sprintf((Array*)local_f0, param_2);
   *param_1 = local_f0[0];
   local_f0[0] = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_f0);
   pVVar2 = local_48;
   Array::~Array(local_f8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }
   } while ( pVVar2 != local_a8 );
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* InstancePlaceholder::is_class(String const&) const */undefined8 InstancePlaceholder::is_class(InstancePlaceholder *this, String *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   char *pcVar4;
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
                  if (lVar3 == 0) goto LAB_00102eaf;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar3 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar3 + 1;
                     lVar8 = lVar3;
                  }
                  UNLOCK();
               } while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar5 + 0x10 );
               }
            }
         } else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
         }
      }
      LAB_00102eaf:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
      if (cVar6 != '\0') goto LAB_00102f63;
   }
   cVar6 = String::operator ==(param_1, "InstancePlaceholder");
   if (cVar6 == '\0') {
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
                     if (lVar3 == 0) goto LAB_00103037;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar3 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar3 + 1;
                        lVar8 = lVar3;
                     }
                     UNLOCK();
                  } while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar5 + 0x10 );
                  }
               }
            } else {
               local_50 = strlen(pcVar4);
               local_58 = pcVar4;
               String::parse_latin1((StrRange*)&local_60);
            }
         }
         LAB_00103037:cVar6 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar6 != '\0') goto LAB_00102f63;
      }
      cVar6 = String::operator ==(param_1, "Node");
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
            if (cVar6 != '\0') goto LAB_00102f63;
         }
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = String::operator ==(param_1, "Object");
            return uVar7;
         }
         goto LAB_00103170;
      }
   }
   LAB_00102f63:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }
   LAB_00103170:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Node::_get_property_listv(List *param_1, bool param_2) {
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
   undefined *local_78;
   long local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   pLVar5 = (List*)CONCAT71(in_register_00000031, param_2);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = &_LC20;
   local_88 = 0;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC20;
   local_98 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (undefined*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }
   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_0010330d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010330d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar5;
         local_68 = local_80;
         goto joined_r0x0010332f;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)pLVar5;
   joined_r0x0010332f:if (lVar2 == 0) {
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
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_78, "Node", false);
   ClassDB::get_property_list((StringName*)&local_78, pLVar5, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
      StringName::unref();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* InstancePlaceholder::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void InstancePlaceholder::_get_property_listv(InstancePlaceholder *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Node::_get_property_listv((List*)this, SUB81(param_1, 0));
   }
   local_88 = 0;
   local_90 = 0;
   local_78 = "InstancePlaceholder";
   local_70 = 0x13;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "InstancePlaceholder";
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
      LAB_0010368d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010368d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x001036af;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)param_1;
   joined_r0x001036af:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
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
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }
   StringName::StringName((StringName*)&local_78, "InstancePlaceholder", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }
   _get_property_list(this, param_1);
   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Node::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }
   } else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBind* create_method_bind<InstancePlaceholder, Dictionary, bool>(Dictionary
   (InstancePlaceholder::*)(bool)) */MethodBind *create_method_bind<InstancePlaceholder,Dictionary,bool>(_func_Dictionary_bool *param_1) {
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
   *(_func_Dictionary_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00106b40;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "InstancePlaceholder";
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
}/* MethodBind* create_method_bind<InstancePlaceholder, Node*, bool, Ref<PackedScene> const&>(Node*
   (InstancePlaceholder::*)(bool, Ref<PackedScene> const&)) */MethodBind *create_method_bind<InstancePlaceholder,Node*,bool,Ref<PackedScene>const&>(_func_Node_ptr_bool_Ref_ptr *param_1) {
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
   *(_func_Node_ptr_bool_Ref_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00106ba0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "InstancePlaceholder";
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
}/* MethodBind* create_method_bind<InstancePlaceholder, String>(String (InstancePlaceholder::*)()
   const) */MethodBind *create_method_bind<InstancePlaceholder,String>(_func_String *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00106c00;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "InstancePlaceholder";
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
}/* CowData<String>::_unref() */void CowData<String>::_unref(CowData<String> *this) {
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
}/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<StringName>::_unref() */void CowData<StringName>::_unref(CowData<StringName> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   long lVar5;
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
         lVar2 = plVar1[-1];
         *(undefined8*)this = 0;
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
         return;
      }
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }
   *(undefined8*)this = 0;
   return;
}/* InstancePlaceholder::_initialize_classv() */void InstancePlaceholder::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (Node::initialize_class() == '\0') {
         Object::initialize_class();
         local_58 = 0;
         local_40 = 6;
         local_48 = "Object";
         String::parse_latin1((StrRange*)&local_58);
         StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
         local_48 = "Node";
         local_60 = 0;
         local_40 = 4;
         String::parse_latin1((StrRange*)&local_60);
         StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
         ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
            StringName::unref();
         }
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
            StringName::unref();
         }
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if ((code*)PTR__bind_methods_00109010 != Object::_bind_methods) {
            Node::_bind_methods();
         }
         Node::initialize_class() {
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
   for (int i_1604 = 0; i_1604 < 2; i_1604++) {
      /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   }
   undefined8 CowData<String>::resize<false>(CowData<String> *this, long param_1) {
      code *pcVar1;
      undefined8 *puVar2;
      undefined8 uVar3;
      long lVar4;
      long lVar5;
      ulong uVar6;
      undefined8 *puVar7;
      ulong uVar8;
      long lVar9;
      if (param_1 < 0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
         return 0x1f;
      }
      if (*(long*)this == 0) {
         if (param_1 == 0) {
            return 0;
         }
         _copy_on_write(this);
         lVar4 = 0;
         lVar5 = 0;
      } else {
         lVar4 = *(long*)( *(long*)this + -8 );
         if (param_1 == lVar4) {
            return 0;
         }
         if (param_1 == 0) {
            _unref(this);
            return 0;
         }
         _copy_on_write(this);
         lVar5 = lVar4 * 8;
         if (lVar5 != 0) {
            uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
            uVar6 = uVar6 | uVar6 >> 2;
            uVar6 = uVar6 | uVar6 >> 4;
            uVar6 = uVar6 | uVar6 >> 8;
            uVar6 = uVar6 | uVar6 >> 0x10;
            lVar5 = ( uVar6 | uVar6 >> 0x20 ) + 1;
         }
      }
      if (param_1 * 8 == 0) {
         LAB_00104370:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
         return 6;
      }
      uVar6 = param_1 * 8 - 1;
      uVar6 = uVar6 >> 1 | uVar6;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      uVar6 = uVar6 | uVar6 >> 0x20;
      lVar9 = uVar6 + 1;
      if (lVar9 == 0) goto LAB_00104370;
      uVar8 = param_1;
      if (param_1 <= lVar4) {
         while (lVar4 = *(long*)this,lVar4 != 0) {
            if (*(ulong*)( lVar4 + -8 ) <= uVar8) {
               if (lVar9 != lVar5) {
                  uVar3 = _realloc(this, lVar9);
                  if ((int)uVar3 != 0) {
                     return uVar3;
                  }
                  lVar4 = *(long*)this;
                  if (lVar4 == 0) {
                     _DAT_00000000 = 0;
                     /* WARNING: Does not return */
                     pcVar1 = (code*)invalidInstructionException();
                     ( *pcVar1 )();
                  }
               }
               *(long*)( lVar4 + -8 ) = param_1;
               return 0;
            }
            CowData<char32_t>::_unref((CowData<char32_t>*)( lVar4 + uVar8 * 8 ));
            uVar8 = uVar8 + 1;
         };
         goto LAB_001043c6;
      }
      if (lVar9 == lVar5) {
         LAB_001042eb:puVar7 = *(undefined8**)this;
         if (puVar7 == (undefined8*)0x0) {
            LAB_001043c6:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }
         lVar4 = puVar7[-1];
         if (param_1 <= lVar4) goto LAB_0010425f;
      } else {
         if (lVar4 != 0) {
            uVar3 = _realloc(this, lVar9);
            if ((int)uVar3 != 0) {
               return uVar3;
            }
            goto LAB_001042eb;
         }
         puVar2 = (undefined8*)Memory::alloc_static(uVar6 + 0x11, false);
         if (puVar2 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            return 6;
         }
         puVar7 = puVar2 + 2;
         *puVar2 = 1;
         puVar2[1] = 0;
         *(undefined8**)this = puVar7;
         lVar4 = 0;
      }
      memset(puVar7 + lVar4, 0, ( param_1 - lVar4 ) * 8);
      LAB_0010425f:puVar7[-1] = param_1;
      return 0;
   }
   for (int i_1605 = 0; i_1605 < 2; i_1605++) {
      /* WARNING: Removing unreachable block (ram,0x001044f8) */
   }
   undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
      } else {
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
   /* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTRC<String>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC45, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }
            goto LAB_00104880;
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
      LAB_00104880:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<String>::validated_call(MethodBindTRC<String> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      code *pcVar1;
      long *plVar2;
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
            local_48 = (Variant**)0x1046c8;
            local_40 = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((CowData<char32_t>*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_00104b4c;
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
      ( *pcVar1 )((CowData<char32_t>*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
      if (*(Variant***)( param_3 + 8 ) != local_48) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( param_3 + 8 ), (CowData*)&local_48);
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      LAB_00104b4c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRC<String>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<String>::ptrcall(MethodBindTRC<String> *this, Object *param_1, void **param_2, void *param_3) {
      code *pcVar1;
      long *plVar2;
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
            local_48 = (void**)0x1046c8;
            local_40 = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((CowData<char32_t>*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_00104d1d;
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
      ( *pcVar1 )((CowData<char32_t>*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
      /* WARNING: Load size is inaccurate */
      if (*param_3 != local_48) {
         CowData<char32_t>::_ref((CowData<char32_t>*)param_3, (CowData*)&local_48);
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      LAB_00104d1d:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Dictionary, bool>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTR<Dictionary,bool>::validated_call(MethodBindTR<Dictionary,bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
            vformat<StringName>((Dictionary*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Dictionary*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_00104ee0;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar1 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar1 & 1 ) != 0) {
         pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }
      ( *pcVar1 )((Dictionary*)&local_48, param_1 + *(long*)( this + 0x60 ), ( *param_2 )[8]);
      Dictionary::operator =((Dictionary*)( param_3 + 8 ), (Dictionary*)&local_48);
      Dictionary::~Dictionary((Dictionary*)&local_48);
      LAB_00104ee0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Dictionary, bool>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTR<Dictionary,bool>::ptrcall(MethodBindTR<Dictionary,bool> *this, Object *param_1, void **param_2, void *param_3) {
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
            vformat<StringName>((Dictionary*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Dictionary*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_001050d4;
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
      ( *pcVar1 )((Dictionary*)&local_48, param_1 + *(long*)( this + 0x60 ), **param_2 != '\0');
      Dictionary::operator =((Dictionary*)param_3, (Dictionary*)&local_48);
      Dictionary::~Dictionary((Dictionary*)&local_48);
      LAB_001050d4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Node*, bool, Ref<PackedScene> const&>::validated_call(Object*, Variant const**,
   Variant*) const */
   void MethodBindTR<Node*,bool,Ref<PackedScene>const&>::validated_call(MethodBindTR<Node*,bool,Ref<PackedScene>const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      long lVar1;
      Object *pOVar2;
      char cVar3;
      Object *pOVar4;
      long *plVar5;
      code *pcVar6;
      long in_FS_OFFSET;
      long local_78;
      undefined8 local_70;
      Object *local_68;
      undefined8 local_60;
      int local_58[6];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_68, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar5 = *(long**)( param_1 + 0x118 );
            if (plVar5 == (long*)0x0) {
               plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }
         } else {
            plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }
         if (local_68 == (Object*)*plVar5) {
            if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_68 = (Object*)0x1046c8;
            local_70 = 0;
            local_60 = 0x35;
            String::parse_latin1((StrRange*)&local_70);
            vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_68, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
               StringName::unref();
            }
            goto LAB_00105381;
         }
         if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar6 = *(code**)( this + 0x58 );
      lVar1 = *(long*)( this + 0x60 );
      if (( (ulong)pcVar6 & 1 ) != 0) {
         pcVar6 = *(code**)( pcVar6 + *(long*)( param_1 + lVar1 ) + -1 );
      }
      Variant::Variant((Variant*)local_58, *(Object**)( param_2[1] + 0x10 ));
      local_68 = (Object*)0x0;
      pOVar4 = (Object*)Variant::get_validated_object();
      pOVar2 = local_68;
      if (pOVar4 != local_68) {
         if (pOVar4 == (Object*)0x0) {
            if (local_68 != (Object*)0x0) {
               local_68 = (Object*)0x0;
               LAB_00105326:cVar3 = RefCounted::unreference();
               if (cVar3 != '\0') {
                  cVar3 = predelete_handler(pOVar2);
                  if (cVar3 != '\0') {
                     ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                     Memory::free_static(pOVar2, false);
                  }
               }
            }
         } else {
            pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &PackedScene::typeinfo, 0);
            if (pOVar2 != pOVar4) {
               local_68 = pOVar4;
               if (pOVar4 != (Object*)0x0) {
                  cVar3 = RefCounted::reference();
                  if (cVar3 == '\0') {
                     local_68 = (Object*)0x0;
                  }
               }
               if (pOVar2 != (Object*)0x0) goto LAB_00105326;
            }
         }
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }
      ( *pcVar6 )(param_1 + lVar1, ( *param_2 )[8], (StringName*)&local_68);
      Variant::ObjData::ref_pointer((Object*)( param_3 + 8 ));
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
      LAB_00105381:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Node*, bool, Ref<PackedScene> const&>::ptrcall(Object*, void const**, void*) const
    */
   void MethodBindTR<Node*,bool,Ref<PackedScene>const&>::ptrcall(MethodBindTR<Node*,bool,Ref<PackedScene>const&> *this, Object *param_1, void **param_2, void *param_3) {
      long lVar1;
      Object *pOVar2;
      char cVar3;
      undefined8 uVar4;
      long *plVar5;
      code *pcVar6;
      long in_FS_OFFSET;
      long local_68;
      undefined8 local_60;
      Object *local_58;
      undefined8 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_58, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar5 = *(long**)( param_1 + 0x118 );
            if (plVar5 == (long*)0x0) {
               plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }
         } else {
            plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }
         if (local_58 == (Object*)*plVar5) {
            if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_58 = (Object*)0x1046c8;
            local_50 = 0x35;
            local_60 = 0;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }
            goto LAB_00105648;
         }
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar6 = *(code**)( this + 0x58 );
      lVar1 = *(long*)( this + 0x60 );
      if (( (ulong)pcVar6 & 1 ) != 0) {
         pcVar6 = *(code**)( pcVar6 + *(long*)( param_1 + lVar1 ) + -1 );
      }
      /* WARNING: Load size is inaccurate */
      if (( (long*)param_2[1] == (long*)0x0 ) || ( local_58 = *param_2[1] ),local_58 == (Object*)0x0) {
         LAB_00105612:local_58 = (Object*)0x0;
      } else {
         cVar3 = RefCounted::init_ref();
         if (cVar3 == '\0') goto LAB_00105612;
      }
      /* WARNING: Load size is inaccurate */
      uVar4 = ( *pcVar6 )(param_1 + lVar1, **param_2 != '\0', (StringName*)&local_58);
      *(undefined8*)param_3 = uVar4;
      if (local_58 != (Object*)0x0) {
         cVar3 = RefCounted::unreference();
         pOVar2 = local_58;
         if (cVar3 != '\0') {
            cVar3 = predelete_handler(local_58);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }
         }
      }
      LAB_00105648:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Dictionary, bool>::call(Object*, Variant const**, int, Callable::CallError&) const
    */
   Object *MethodBindTR<Dictionary,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC45, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
               StringName::unref();
            }
            goto LAB_00105920;
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
            if (in_R8D != 1) goto LAB_00105970;
            LAB_00105960:pVVar11 = *(Variant**)param_4;
         } else {
            lVar2 = *(long*)( pVVar11 + -8 );
            if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
               LAB_00105970:uVar7 = 4;
               goto LAB_00105915;
            }
            if (in_R8D == 1) goto LAB_00105960;
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
         uVar4 = _LC50;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         bVar6 = Variant::operator_cast_to_bool(pVVar11);
         ( *(code*)pVVar12 )((Dictionary*)&local_68, (Variant*)( (long)plVar10 + (long)pVVar1 ), bVar6);
         Variant::Variant((Variant*)local_58, (Dictionary*)&local_68);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }
         *(undefined4*)param_1 = local_58[0];
         *(undefined8*)( param_1 + 8 ) = local_50;
         *(undefined8*)( param_1 + 0x10 ) = uStack_48;
         Dictionary::~Dictionary((Dictionary*)&local_68);
      } else {
         uVar7 = 3;
         LAB_00105915:*in_R9 = uVar7;
         in_R9[2] = 1;
      }
      LAB_00105920:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return param_1;
   }
   /* MethodBindTR<Node*, bool, Ref<PackedScene> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */
   Object *MethodBindTR<Node*,bool,Ref<PackedScene>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      long lVar2;
      code *pcVar3;
      undefined8 uVar4;
      char cVar5;
      bool bVar6;
      int iVar7;
      undefined4 uVar8;
      Object *pOVar9;
      Object *pOVar10;
      long *plVar11;
      long lVar12;
      undefined4 in_register_00000014;
      long *plVar13;
      Variant *this;
      int iVar14;
      uint in_R8D;
      undefined4 *in_R9;
      Variant *pVVar15;
      Variant *pVVar16;
      long in_FS_OFFSET;
      long local_78;
      undefined8 local_70;
      Object *local_68;
      undefined8 local_60;
      undefined4 local_58[2];
      undefined8 local_50;
      undefined8 uStack_48;
      long local_40;
      plVar13 = (long*)CONCAT44(in_register_00000014, param_3);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar13 != (long*)0x0 ) && ( plVar13[1] != 0 ) ) && ( *(char*)( plVar13[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
         if (plVar13[1] == 0) {
            plVar11 = (long*)plVar13[0x23];
            if (plVar11 == (long*)0x0) {
               plVar11 = (long*)( **(code**)( *plVar13 + 0x40 ) )(plVar13);
            }
         } else {
            plVar11 = (long*)( plVar13[1] + 0x20 );
         }
         if (local_68 == (Object*)*plVar11) {
            if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_68 = (Object*)0x1046c8;
            local_70 = 0;
            local_60 = 0x35;
            String::parse_latin1((StrRange*)&local_70);
            vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
            _err_print_error(&_LC45, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
               StringName::unref();
            }
            goto LAB_00105da0;
         }
         if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
            StringName::unref();
         }
      }
      pVVar15 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (2 < in_R8D) {
         uVar8 = 3;
         LAB_00105d95:*in_R9 = uVar8;
         in_R9[2] = 2;
         goto LAB_00105da0;
      }
      pVVar16 = param_2[5];
      iVar7 = 2 - in_R8D;
      if (pVVar16 == (Variant*)0x0) {
         if (iVar7 != 0) goto LAB_00105dd0;
         this * (Variant**)param_4;
         LAB_00105ded:pVVar16 = *(Variant**)( param_4 + 8 );
      } else {
         lVar2 = *(long*)( pVVar16 + -8 );
         iVar14 = (int)lVar2;
         if (iVar14 < iVar7) {
            LAB_00105dd0:uVar8 = 4;
            goto LAB_00105d95;
         }
         if (in_R8D == 0) {
            lVar12 = (long)( iVar14 + -2 );
            if (lVar2 <= lVar12) goto LAB_00105f10;
            this =
            pVVar16 + lVar12 * 0x18;
         } else {
            this * (Variant**)param_4;
            if (in_R8D == 2) goto LAB_00105ded;
         }
         lVar12 = (long)(int)( ( in_R8D ^ 1 ) + ( iVar14 - iVar7 ) );
         if (lVar2 <= lVar12) {
            LAB_00105f10:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar12, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         pVVar16 = pVVar16 + lVar12 * 0x18;
      }
      *in_R9 = 0;
      if (( (ulong)pVVar15 & 1 ) != 0) {
         pVVar15 = *(Variant**)( pVVar15 + *(long*)( (long)plVar13 + (long)pVVar1 ) + -1 );
      }
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar16);
      uVar4 = _LC52;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }
      local_68 = (Object*)0x0;
      pOVar9 = (Object*)Variant::get_validated_object();
      pOVar10 = local_68;
      if (pOVar9 != local_68) {
         if (pOVar9 == (Object*)0x0) {
            if (local_68 != (Object*)0x0) {
               local_68 = (Object*)0x0;
               LAB_00105cd7:cVar5 = RefCounted::unreference();
               if (cVar5 != '\0') {
                  cVar5 = predelete_handler(pOVar10);
                  if (cVar5 != '\0') {
                     ( **(code**)( *(long*)pOVar10 + 0x140 ) )(pOVar10);
                     Memory::free_static(pOVar10, false);
                  }
               }
            }
         } else {
            pOVar9 = (Object*)__dynamic_cast(pOVar9, &Object::typeinfo, &PackedScene::typeinfo, 0);
            if (pOVar10 != pOVar9) {
               local_68 = pOVar9;
               if (pOVar9 != (Object*)0x0) {
                  cVar5 = RefCounted::reference();
                  if (cVar5 == '\0') {
                     local_68 = (Object*)0x0;
                  }
               }
               if (pOVar10 != (Object*)0x0) goto LAB_00105cd7;
            }
         }
      }
      cVar5 = Variant::can_convert_strict(*(undefined4*)this, 1);
      uVar4 = _LC50;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }
      bVar6 = Variant::operator_cast_to_bool(this);
      pOVar10 = (Object*)( *(code*)pVVar15 )((Variant*)( (long)plVar13 + (long)pVVar1 ), bVar6, &local_68);
      Variant::Variant((Variant*)local_58, pOVar10);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }
      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      if (local_68 != (Object*)0x0) {
         cVar5 = RefCounted::unreference();
         pOVar10 = local_68;
         if (cVar5 != '\0') {
            cVar5 = predelete_handler(local_68);
            if (cVar5 != '\0') {
               ( **(code**)( *(long*)pOVar10 + 0x140 ) )(pOVar10);
               Memory::free_static(pOVar10, false);
            }
         }
      }
      LAB_00105da0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* void call_get_argument_type_info_helper<bool>(int, int&, PropertyInfo&) */
   void call_get_argument_type_info_helper<bool>(int param_1, int *param_2, PropertyInfo *param_3) {
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
      if (iVar5 != param_1) goto LAB_00106087;
      local_78 = 0;
      local_68 = &_LC1;
      local_80 = 0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      String::parse_latin1((StrRange*)&local_80);
      local_88 = 0;
      local_68 = (undefined*)CONCAT44(local_68._4_4_, 1);
      local_50 = 0;
      local_48 = 0;
      local_60 = (undefined1[16])0x0;
      if (local_80 == 0) {
         LAB_00106185:local_40 = 6;
         StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
         local_40 = 6;
         if (local_50 != 0x11) goto LAB_00106185;
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
      LAB_00106087:*param_2 = iVar5 + 1;
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return;
   }
   /* MethodBindTR<Dictionary, bool>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTR<Dictionary,bool>::_gen_argument_type_info(int param_1) {
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
         call_get_argument_type_info_helper<bool>(0, (int*)&local_70, (PropertyInfo*)&local_68);
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
         goto LAB_00106358;
      }
      local_70 = 0;
      local_78 = 0;
      local_68 = &_LC1;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._0_8_;
      local_60 = auVar2 << 0x40;
      String::parse_latin1((StrRange*)&local_78);
      local_80 = 0;
      *puVar5 = 0x1b;
      puVar5[6] = 0;
      *(undefined8*)( puVar5 + 8 ) = 0;
      *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
      if (local_78 == 0) {
         puVar5[10] = 6;
         LAB_0010643f:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_70);
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
         puVar5[10] = 6;
         if (puVar5[6] != 0x11) goto LAB_0010643f;
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
      LAB_00106358:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar5;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* void call_get_argument_type_info<bool, Ref<PackedScene> const&>(int, PropertyInfo&) */
   void call_get_argument_type_info<bool,Ref<PackedScene>const&>(int param_1, PropertyInfo *param_2) {
      undefined1 auVar1[16];
      undefined8 uVar2;
      long lVar3;
      long in_FS_OFFSET;
      int local_8c;
      undefined8 local_88;
      long local_80;
      long local_78;
      long local_70;
      char *local_68;
      undefined1 local_60[16];
      int local_50;
      long local_48;
      undefined4 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      local_8c = 0;
      call_get_argument_type_info_helper<bool>(param_1, &local_8c, param_2);
      if (param_1 != local_8c) goto LAB_001064ee;
      local_78 = 0;
      local_68 = "PackedScene";
      local_80 = 0;
      local_60._0_8_ = 0xb;
      String::parse_latin1((StrRange*)&local_80);
      local_88 = 0;
      local_68 = (char*)CONCAT44(local_68._4_4_, 0x18);
      local_50 = 0x11;
      local_48 = 0;
      local_60 = (undefined1[16])0x0;
      if (local_80 == 0) {
         LAB_001066ad:local_40 = 6;
         StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
         if (local_60._8_8_ == local_70) {
            if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
               StringName::unref();
            }
         } else {
            StringName::unref();
            local_60._8_8_ = local_70;
         }
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
         local_40 = 6;
         if (local_50 == 0x11) goto LAB_001066ad;
         StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
         StringName::unref();
      }
      *(undefined4*)param_2 = local_68._0_4_;
      if (*(long*)( param_2 + 8 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 8 ));
         uVar2 = local_60._0_8_;
         auVar1._8_8_ = 0;
         auVar1._0_8_ = local_60._8_8_;
         local_60 = auVar1 << 0x40;
         *(undefined8*)( param_2 + 8 ) = uVar2;
      }
      if (*(long*)( param_2 + 0x10 ) != local_60._8_8_) {
         StringName::unref();
         uVar2 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( param_2 + 0x10 ) = uVar2;
      }
      *(int*)( param_2 + 0x18 ) = local_50;
      if (*(long*)( param_2 + 0x20 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 0x20 ));
         lVar3 = local_48;
         local_48 = 0;
         *(long*)( param_2 + 0x20 ) = lVar3;
      }
      *(undefined4*)( param_2 + 0x28 ) = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      LAB_001064ee:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return;
   }
   /* MethodBindTR<Node*, bool, Ref<PackedScene> const&>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTR<Node*,bool,Ref<PackedScene>const&>::_gen_argument_type_info(int param_1) {
      undefined1 auVar1[16];
      undefined8 uVar2;
      undefined8 uVar3;
      uint in_EDX;
      undefined4 in_register_0000003c;
      undefined4 *puVar4;
      long in_FS_OFFSET;
      bool bVar5;
      undefined8 local_60;
      undefined *local_58;
      undefined1 local_50[16];
      undefined8 local_40;
      undefined8 local_38;
      undefined4 local_30;
      long local_20;
      puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
      local_20 = *(long*)( in_FS_OFFSET + 0x28 );
      if (in_EDX < 2) {
         local_58 = (undefined*)0x0;
         local_40 = 0;
         local_38 = 0;
         local_30 = 6;
         local_50 = (undefined1[16])0x0;
         call_get_argument_type_info<bool,Ref<PackedScene>const&>(in_EDX, (PropertyInfo*)&local_58);
         uVar2 = local_50._0_8_;
         uVar3 = local_50._8_8_;
         auVar1._8_8_ = 0;
         auVar1._0_8_ = local_50._8_8_;
         local_50 = auVar1 << 0x40;
         *puVar4 = local_58._0_4_;
         *(undefined8*)( puVar4 + 2 ) = uVar2;
         *(undefined8*)( puVar4 + 4 ) = uVar3;
         puVar4[6] = (undefined4)local_40;
         *(undefined8*)( puVar4 + 8 ) = local_38;
         puVar4[10] = local_30;
         CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
      } else {
         local_60 = 0;
         local_50._8_8_ = local_50._0_8_;
         local_50._0_8_ = 4;
         local_58 = &_LC20;
         String::parse_latin1((StrRange*)&local_60);
         StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
         *puVar4 = 0x18;
         *(undefined8*)( puVar4 + 2 ) = 0;
         StringName::StringName((StringName*)( puVar4 + 4 ), (StringName*)&local_58);
         bVar5 = StringName::configured != '\0';
         puVar4[6] = 0;
         *(undefined8*)( puVar4 + 8 ) = 0;
         puVar4[10] = 6;
         if (( bVar5 ) && ( local_58 != (undefined*)0x0 )) {
            StringName::unref();
         }
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      }
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar4;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   for (int i_1606 = 0; i_1606 < 2; i_1606++) {
      /* WARNING: Control flow encountered bad instruction data */
   }
   void InstancePlaceholder::~InstancePlaceholder(InstancePlaceholder *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   for (int i_1607 = 0; i_1607 < 2; i_1607++) {
      /* WARNING: Control flow encountered bad instruction data */
   }
   void List<InstancePlaceholder::PropSet,DefaultAllocator>::~List(List<InstancePlaceholder::PropSet,DefaultAllocator> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   for (int i_1608 = 0; i_1608 < 2; i_1608++) {
      /* WARNING: Control flow encountered bad instruction data */
   }
   void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   for (int i_1609 = 0; i_1609 < 2; i_1609++) {
      /* WARNING: Control flow encountered bad instruction data */
   }
   void MethodBindTR<Node*,bool,Ref<PackedScene>const&>::~MethodBindTR(MethodBindTR<Node*,bool,Ref<PackedScene>const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   for (int i_1610 = 0; i_1610 < 2; i_1610++) {
      /* WARNING: Control flow encountered bad instruction data */
   }
   void MethodBindTR<Dictionary,bool>::~MethodBindTR(MethodBindTR<Dictionary,bool> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   for (int i_1611 = 0; i_1611 < 2; i_1611++) {
      /* WARNING: Control flow encountered bad instruction data */
   }
   void StringName::~StringName(StringName *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
}
