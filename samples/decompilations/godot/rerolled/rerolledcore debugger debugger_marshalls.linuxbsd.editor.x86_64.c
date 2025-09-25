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
/* DebuggerMarshalls::ScriptStackDump::serialize() */void DebuggerMarshalls::ScriptStackDump::serialize(void) {
   String *pSVar1;
   int iVar2;
   long *in_RSI;
   Array *in_RDI;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array(in_RDI);
   iVar2 = 0;
   if (*in_RSI != 0) {
      iVar2 = *(int*)( *in_RSI + 0x10 ) * 3;
   }

   Variant::Variant((Variant*)local_48, iVar2);
   Array::push_back((Variant*)in_RDI);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if ((undefined8*)*in_RSI != (undefined8*)0x0) {
      for (pSVar1 = *(String**)*in_RSI; pSVar1 != (String*)0x0; pSVar1 = *(String**)( pSVar1 + 0x18 )) {
         Variant::Variant((Variant*)local_48, pSVar1);
         Array::push_back((Variant*)in_RDI);
         if (Variant::needs_deinit[local_48[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_48, *(int*)( pSVar1 + 0x10 ));
         Array::push_back((Variant*)in_RDI);
         if (Variant::needs_deinit[local_48[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_48, pSVar1 + 8);
         Array::push_back((Variant*)in_RDI);
         if (Variant::needs_deinit[local_48[0]] != '\0') {
            Variant::_clear_internal();
         }

      }

   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* DebuggerMarshalls::ScriptStackDump::deserialize(Array const&) */undefined8 DebuggerMarshalls::ScriptStackDump::deserialize(ScriptStackDump *this, Array *param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   long lVar3;
   int iVar4;
   uint uVar5;
   uint uVar6;
   int iVar7;
   Variant *pVVar8;
   CowData<char32_t> *this_00;
   undefined1(*pauVar9)[16];
   undefined8 uVar10;
   char *pcVar11;
   long lVar12;
   long lVar13;
   long in_FS_OFFSET;
   uint local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   long local_68;
   long local_60;
   undefined1 local_58[16];
   int local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = Array::size();
   if (iVar4 == 0) {
      Array::size();
      itos((long)&local_60);
      local_70 = 0;
      local_58._0_8_ = ", actual size: ";
      local_58._8_8_ = 0xf;
      String::parse_latin1((StrRange*)&local_70);
      itos((long)&local_80);
      local_90 = 0;
      local_58._0_8_ = " message from script debugger, message too short. Expected size: ";
      local_58._8_8_ = 0x41;
      String::parse_latin1((StrRange*)&local_90);
      local_a0 = 0;
      local_58._0_8_ = _LC7;
      local_58._8_8_ = 0xf;
      String::parse_latin1((StrRange*)&local_a0);
      local_a8 = 0;
      local_58._8_8_ = 10;
      local_58._0_8_ = "Malformed ";
      String::parse_latin1((StrRange*)&local_a8);
      String::operator +((String*)&local_98, (String*)&local_a8);
      String::operator +((String*)&local_88, (String*)&local_98);
      String::operator +((String*)&local_78, (String*)&local_88);
      String::operator +((String*)&local_68, (String*)&local_78);
      String::operator +((String*)local_58, (String*)&local_68);
      pcVar11 = "Condition \"(uint32_t)p_arr.size() < (uint32_t)(1)\" is true. Returning: false";
      uVar10 = 0x32;
   }
 else {
      iVar4 = (int)param_1;
      pVVar8 = (Variant*)Array::operator [](iVar4);
      uVar5 = Variant::operator_cast_to_unsigned_int(pVVar8);
      uVar6 = Array::size();
      if (uVar6 < uVar5) {
         Array::size();
         itos((long)&local_60);
         local_70 = 0;
         local_58._0_8_ = ", actual size: ";
         local_58._8_8_ = 0xf;
         String::parse_latin1((StrRange*)&local_70);
         itos((long)&local_80);
         local_90 = 0;
         local_58._0_8_ = " message from script debugger, message too short. Expected size: ";
         local_58._8_8_ = 0x41;
         String::parse_latin1((StrRange*)&local_90);
         local_a0 = 0;
         local_58._0_8_ = _LC7;
         local_58._8_8_ = 0xf;
         String::parse_latin1((StrRange*)&local_a0);
         local_a8 = 0;
         local_58._8_8_ = 10;
         local_58._0_8_ = "Malformed ";
         String::parse_latin1((StrRange*)&local_a8);
         String::operator +((String*)&local_98, (String*)&local_a8);
         String::operator +((String*)&local_88, (String*)&local_98);
         String::operator +((String*)&local_78, (String*)&local_88);
         String::operator +((String*)&local_68, (String*)&local_78);
         String::operator +((String*)local_58, (String*)&local_68);
         pcVar11 = "Condition \"(uint32_t)p_arr.size() < (uint32_t)(size)\" is true. Returning: false";
         uVar10 = 0x34;
      }
 else {
         local_b0 = uVar5 / 3;
         if (uVar5 < 3) {
            uVar5 = 1;
         }
 else {
            uVar5 = 0;
            do {
               local_58 = (undefined1[16])0x0;
               Array::operator [](iVar4);
               Variant::operator_cast_to_String((Variant*)&local_60);
               if (local_60 != 0) {
                  local_58._0_8_ = local_60;
               }

               pVVar8 = (Variant*)Array::operator [](iVar4);
               iVar7 = Variant::operator_cast_to_int(pVVar8);
               local_48 = iVar7;
               Array::operator [](iVar4);
               Variant::operator_cast_to_String((Variant*)&local_60);
               lVar3 = local_60;
               if (local_60 != 0) {
                  local_58._8_8_ = local_60;
               }

               if (*(long*)this == 0) {
                  pauVar9 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined1(**) [16])this = pauVar9;
                  *(undefined4*)pauVar9[1] = 0;
                  *pauVar9 = (undefined1[16])0x0;
               }

               this_00 = (CowData<char32_t>*)operator_new(0x30, DefaultAllocator::alloc);
               lVar12 = 0;
               *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
               lVar13 = local_58._0_8_;
               *(undefined8*)( this_00 + 0x28 ) = 0;
               *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
               if (local_58._0_8_ != 0) {
                  CowData<char32_t>::_ref(this_00, (CowData*)local_58);
                  lVar12 = *(long*)( this_00 + 8 );
               }

               if (lVar3 != lVar12) {
                  CowData<char32_t>::_ref(this_00 + 8, (CowData*)( local_58 + 8 ));
               }

               *(int*)( this_00 + 0x10 ) = iVar7;
               plVar1 = *(long**)this;
               lVar12 = plVar1[1];
               *(undefined8*)( this_00 + 0x18 ) = 0;
               *(long**)( this_00 + 0x28 ) = plVar1;
               *(long*)( this_00 + 0x20 ) = lVar12;
               if (lVar12 != 0) {
                  *(CowData<char32_t>**)( lVar12 + 0x18 ) = this_00;
               }

               plVar1[1] = (long)this_00;
               if (*plVar1 == 0) {
                  *plVar1 = (long)this_00;
               }

               *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
               if (lVar3 != 0) {
                  LOCK();
                  plVar1 = (long*)( lVar3 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( local_58._8_8_ + -0x10 ), false);
                  }

                  lVar13 = local_58._0_8_;
               }

               if (lVar13 != 0) {
                  LOCK();
                  plVar1 = (long*)( lVar13 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( local_58._0_8_ + -0x10 ), false);
                  }

               }

               uVar5 = uVar5 + 1;
            }
 while ( uVar5 < local_b0 );
            uVar5 = local_b0 * 3 + 1;
         }

         uVar6 = Array::size();
         uVar10 = 1;
         if (uVar6 <= uVar5) goto LAB_00100445;
         Array::size();
         itos((long)&local_60);
         local_70 = 0;
         local_58._0_8_ = ", actual size: ";
         local_58._8_8_ = 0xf;
         String::parse_latin1((StrRange*)&local_70);
         itos((long)&local_80);
         local_90 = 0;
         local_58._0_8_ = " message from script debugger, message too long. Expected size: ";
         local_58._8_8_ = 0x40;
         String::parse_latin1((StrRange*)&local_90);
         local_a0 = 0;
         local_58._0_8_ = _LC7;
         local_58._8_8_ = 0xf;
         String::parse_latin1((StrRange*)&local_a0);
         local_a8 = 0;
         local_58._8_8_ = 10;
         local_58._0_8_ = "Malformed ";
         String::parse_latin1((StrRange*)&local_a8);
         String::operator +((String*)&local_98, (String*)&local_a8);
         String::operator +((String*)&local_88, (String*)&local_98);
         String::operator +((String*)&local_78, (String*)&local_88);
         String::operator +((String*)&local_68, (String*)&local_78);
         String::operator +((String*)local_58, (String*)&local_68);
         pcVar11 = "Condition \"(uint32_t)p_arr.size() > (uint32_t)idx\" is true. Returning: false";
         uVar10 = 0x3e;
      }

   }

   _err_print_error("deserialize", "core/debugger/debugger_marshalls.cpp", uVar10, pcVar11, local_58, 0, 0);
   uVar10 = local_58._0_8_;
   if (local_58._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_58._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_58._8_8_;
         local_58 = auVar2 << 0x40;
         Memory::free_static((void*)( uVar10 + -0x10 ), false);
      }

   }

   lVar3 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = 0;
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

   lVar3 = local_a8;
   if (local_a8 != 0) {
      LOCK();
      plVar1 = (long*)( local_a8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a8 = 0;
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

   lVar3 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         uVar10 = 0;
         goto LAB_00100445;
      }

   }

   uVar10 = 0;
   LAB_00100445:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar10;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DebuggerMarshalls::ScriptStackVariable::serialize(int) */Array *DebuggerMarshalls::ScriptStackVariable::serialize(int param_1) {
   char cVar1;
   int iVar2;
   long lVar3;
   int in_EDX;
   String *in_RSI;
   undefined4 in_register_0000003c;
   Array *this;
   long in_FS_OFFSET;
   int local_7c;
   int local_78[2];
   undefined8 local_70;
   undefined8 uStack_68;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   this(Array * CONCAT44(in_register_0000003c, param_1));
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array(this);
   Variant::Variant((Variant*)&local_58, in_RSI);
   Array::push_back((Variant*)this);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)&local_58, *(int*)( in_RSI + 0x20 ));
   Array::push_back((Variant*)this);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)&local_58, *(int*)( in_RSI + 8 ));
   Array::push_back((Variant*)this);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_78, (Variant*)( in_RSI + 8 ));
   if (( *(int*)( in_RSI + 8 ) == 0x18 ) && ( lVar3 = lVar3 == 0 )) {
      local_50 = (undefined1[16])0x0;
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      local_70 = local_50._0_8_;
      uStack_68 = local_50._8_8_;
      local_78[0] = 0;
   }

   local_7c = 0;
   iVar2 = encode_variant((Variant*)local_78, (uchar*)0x0, &local_7c, false, 0);
   if (iVar2 != 0) {
      _err_print_error("serialize", "core/debugger/debugger_marshalls.cpp", 0x50, "Failed to encode variant.", 0, 0);
   }

   if (in_EDX < local_7c) {
      local_58 = 0;
      local_50 = (undefined1[16])0x0;
      Array::push_back((Variant*)this);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      cVar1 = Variant::needs_deinit[local_78[0]];
   }
 else {
      Array::push_back((Variant*)this);
      cVar1 = Variant::needs_deinit[local_78[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* DebuggerMarshalls::ScriptStackVariable::deserialize(Array const&) */undefined8 DebuggerMarshalls::ScriptStackVariable::deserialize(ScriptStackVariable *this, Array *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   uint uVar4;
   int iVar5;
   Variant *pVVar6;
   undefined8 uVar7;
   char *pcVar8;
   int iVar9;
   long in_FS_OFFSET;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = Array::size();
   if (uVar4 < 4) {
      Array::size();
      itos((long)&local_60);
      local_58 = ", actual size: ";
      local_70 = 0;
      local_50 = 0xf;
      String::parse_latin1((StrRange*)&local_70);
      itos((long)&local_80);
      local_90 = 0;
      local_58 = " message from script debugger, message too short. Expected size: ";
      local_50 = 0x41;
      String::parse_latin1((StrRange*)&local_90);
      local_58 = "ScriptStackVariable";
      local_a0 = 0;
      local_50 = 0x13;
      String::parse_latin1((StrRange*)&local_a0);
      local_58 = "Malformed ";
      local_a8 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange*)&local_a8);
      String::operator +((String*)&local_98, (String*)&local_a8);
      String::operator +((String*)&local_88, (String*)&local_98);
      String::operator +((String*)&local_78, (String*)&local_88);
      String::operator +((String*)&local_68, (String*)&local_78);
      String::operator +((String*)&local_58, (String*)&local_68);
      pcVar8 = "Condition \"(uint32_t)p_arr.size() < (uint32_t)(4)\" is true. Returning: false";
      uVar7 = 0x5c;
   }
 else {
      iVar9 = (int)param_1;
      Array::operator [](iVar9);
      Variant::operator_cast_to_String((Variant*)&local_58);
      pcVar3 = local_58;
      pcVar8 = *(char**)this;
      if (pcVar8 == local_58) {
         if (pcVar8 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( pcVar8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

      }
 else {
         if (pcVar8 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( pcVar8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)this;
               *(undefined8*)this = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         *(char**)this = local_58;
      }

      pVVar6 = (Variant*)Array::operator [](iVar9);
      iVar5 = Variant::operator_cast_to_int(pVVar6);
      *(int*)( this + 0x20 ) = iVar5;
      pVVar6 = (Variant*)Array::operator [](iVar9);
      iVar5 = Variant::operator_cast_to_int(pVVar6);
      *(int*)( this + 0x24 ) = iVar5;
      pVVar6 = (Variant*)Array::operator [](iVar9);
      Variant::operator =((Variant*)( this + 8 ), pVVar6);
      uVar4 = Array::size();
      uVar7 = 1;
      if (uVar4 < 5) goto LAB_00100e12;
      Array::size();
      itos((long)&local_60);
      local_58 = ", actual size: ";
      local_70 = 0;
      local_50 = 0xf;
      String::parse_latin1((StrRange*)&local_70);
      itos((long)&local_80);
      local_90 = 0;
      local_58 = " message from script debugger, message too long. Expected size: ";
      local_50 = 0x40;
      String::parse_latin1((StrRange*)&local_90);
      local_58 = "ScriptStackVariable";
      local_a0 = 0;
      local_50 = 0x13;
      String::parse_latin1((StrRange*)&local_a0);
      local_58 = "Malformed ";
      local_a8 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange*)&local_a8);
      String::operator +((String*)&local_98, (String*)&local_a8);
      String::operator +((String*)&local_88, (String*)&local_98);
      String::operator +((String*)&local_78, (String*)&local_88);
      String::operator +((String*)&local_68, (String*)&local_78);
      String::operator +((String*)&local_58, (String*)&local_68);
      pcVar8 = "Condition \"(uint32_t)p_arr.size() > (uint32_t)4\" is true. Returning: false";
      uVar7 = 0x61;
   }

   _err_print_error("deserialize", "core/debugger/debugger_marshalls.cpp", uVar7, pcVar8, &local_58, 0, 0);
   pcVar8 = local_58;
   if (local_58 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = (char*)0x0;
         Memory::free_static(pcVar8 + -0x10, false);
      }

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

   lVar2 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = 0;
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

   lVar2 = local_a8;
   if (local_a8 != 0) {
      LOCK();
      plVar1 = (long*)( local_a8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a8 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar1 = (long*)( local_a0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a0 = 0;
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

   lVar2 = local_80;
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

   uVar7 = 0;
   LAB_00100e12:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar7;
}
/* DebuggerMarshalls::OutputError::serialize() */void DebuggerMarshalls::OutputError::serialize(void) {
   long lVar1;
   String *pSVar2;
   uint uVar3;
   int *in_RSI;
   Array *in_RDI;
   long lVar4;
   long in_FS_OFFSET;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array(in_RDI);
   Variant::Variant((Variant*)local_58, *in_RSI);
   Array::push_back((Variant*)in_RDI);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   for (int i = 0; i < 3; i++) {
      Variant::Variant((Variant*)local_58, in_RSI[( i + 1 )]);
      Array::push_back((Variant*)in_RDI);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   Variant::Variant((Variant*)local_58, (String*)( in_RSI + 4 ));
   Array::push_back((Variant*)in_RDI);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, (String*)( in_RSI + 6 ));
   Array::push_back((Variant*)in_RDI);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, in_RSI[8]);
   Array::push_back((Variant*)in_RDI);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, (String*)( in_RSI + 10 ));
   Array::push_back((Variant*)in_RDI);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, (String*)( in_RSI + 0xc ));
   Array::push_back((Variant*)in_RDI);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, SUB41(in_RSI[0xe], 0));
   Array::push_back((Variant*)in_RDI);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   pSVar2 = *(String**)( in_RSI + 0x12 );
   if (pSVar2 == (String*)0x0) {
      uVar3 = 0;
   }
 else {
      uVar3 = (int)*(undefined8*)( pSVar2 + -8 ) * 3;
   }

   Variant::Variant((Variant*)local_58, uVar3);
   Array::push_back((Variant*)in_RDI);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   lVar1 = *(long*)( in_RSI + 0x12 );
   if (lVar1 != 0) {
      lVar4 = 0;
      do {
         if (*(long*)( lVar1 + -8 ) <= lVar4) break;
         Variant::Variant((Variant*)local_58, pSVar2);
         Array::push_back((Variant*)in_RDI);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_58, pSVar2 + 8);
         Array::push_back((Variant*)in_RDI);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_58, *(int*)( pSVar2 + 0x10 ));
         Array::push_back((Variant*)in_RDI);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         lVar1 = *(long*)( in_RSI + 0x12 );
         lVar4 = lVar4 + 1;
         pSVar2 = pSVar2 + 0x18;
      }
 while ( lVar1 != 0 );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DebuggerMarshalls::serialize_key_shortcut(Ref<Shortcut> const&) */DebuggerMarshalls * __thiscall
DebuggerMarshalls::serialize_key_shortcut(DebuggerMarshalls *this,Ref *param_1){
   char cVar1;
   int iVar2;
   long lVar3;
   Object *pOVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   Array local_88[8];
   Array local_80[8];
   Variant *local_78;
   Variant *local_70;
   Variant *local_68;
   int local_58[2];
   long local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)param_1 == 0) {
      _err_print_error("serialize_key_shortcut", "core/debugger/debugger_marshalls.cpp", 0x98, "Condition \"p_shortcut.is_null()\" is true. Returning: Array()", 0, 0);
      Array::Array((Array*)this);
   }
 else {
      Array::Array(local_88);
      Shortcut::get_events();
      Array::begin();
      Array::end();
      if (local_68 != local_78) {
         do {
            if (local_70 != (Variant*)0x0) {
               Variant::operator =(local_70, local_78);
            }

            lVar3 = Variant::get_validated_object();
            if (( ( lVar3 == 0 ) || ( pOVar4 = (Object*)__dynamic_cast(lVar3, &Object::typeinfo, &InputEvent::typeinfo, 0) ),pOVar4 == (Object*)0x0 )) {
               _err_print_error("serialize_key_shortcut", "core/debugger/debugger_marshalls.cpp", 0x9c, "Condition \"kev.is_null()\" is true. Continuing.", 0, 0);
            }
 else {
               pOVar5 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &InputEventKey::typeinfo, 0);
               if (pOVar5 == (Object*)0x0) {
                  _err_print_error("serialize_key_shortcut", "core/debugger/debugger_marshalls.cpp", 0x9c, "Condition \"kev.is_null()\" is true. Continuing.", 0, 0);
               }
 else {
                  cVar1 = RefCounted::reference();
                  if (cVar1 == '\0') {
                     _err_print_error("serialize_key_shortcut", "core/debugger/debugger_marshalls.cpp", 0x9c, "Condition \"kev.is_null()\" is true. Continuing.", 0, 0);
                  }
 else {
                     iVar2 = InputEventKey::get_physical_keycode();
                     if (iVar2 == 0) {
                        Variant::Variant((Variant*)local_58, false);
                        Array::push_back((Variant*)local_88);
                        if (Variant::needs_deinit[local_58[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        iVar2 = InputEventKey::get_keycode_with_modifiers();
                     }
 else {
                        Variant::Variant((Variant*)local_58, true);
                        Array::push_back((Variant*)local_88);
                        if (Variant::needs_deinit[local_58[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        iVar2 = InputEventKey::get_physical_keycode_with_modifiers();
                     }

                     local_50 = (long)iVar2;
                     local_58[0] = 2;
                     local_48 = 0;
                     Array::push_back((Variant*)local_88);
                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     cVar1 = RefCounted::unreference();
                     if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
                        ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                        Memory::free_static(pOVar5, false);
                     }

                  }

               }

               cVar1 = RefCounted::unreference();
               if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
                  ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                  Memory::free_static(pOVar4, false);
               }

            }

            local_78 = local_78 + 0x18;
         }
 while ( local_78 != local_68 );
      }

      Array::~Array(local_80);
      Array::Array((Array*)this, local_88);
      Array::~Array(local_88);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* DebuggerMarshalls::deserialize_key_shortcut(Array const&) */DebuggerMarshalls * __thiscall
DebuggerMarshalls::deserialize_key_shortcut(DebuggerMarshalls *this,Array *param_1){
   Object *pOVar1;
   bool bVar2;
   char cVar3;
   uint uVar4;
   int iVar5;
   int *piVar6;
   Variant *pVVar7;
   Resource *this_00;
   long lVar8;
   Resource *pRVar9;
   Resource *pRVar10;
   long in_FS_OFFSET;
   byte bVar11;
   Array local_68[8];
   Object *local_60;
   int local_58[6];
   long local_40;
   bVar11 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array(local_68);
   uVar4 = Array::size();
   uVar4 = uVar4 & 1;
   if (uVar4 == 0) {
      while (true) {
         iVar5 = Array::size();
         if (iVar5 <= (int)uVar4) break;
         iVar5 = (int)param_1;
         piVar6 = (int*)Array::operator [](iVar5);
         if (*piVar6 == 1) {
            piVar6 = (int*)Array::operator [](iVar5);
            if (*piVar6 == 2) {
               pVVar7 = (Variant*)Array::operator [](iVar5);
               bVar2 = Variant::operator_cast_to_bool(pVVar7);
               pVVar7 = (Variant*)Array::operator [](iVar5);
               iVar5 = Variant::operator_cast_to_int(pVVar7);
               InputEventKey::create_reference(&local_60, iVar5, bVar2);
               Variant::Variant((Variant*)local_58, local_60);
               Array::push_back((Variant*)local_68);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               if (local_60 != (Object*)0x0) {
                  cVar3 = RefCounted::unreference();
                  pOVar1 = local_60;
                  if (cVar3 != '\0') {
                     cVar3 = predelete_handler(local_60);
                     if (cVar3 != '\0') {
                        ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
                        Memory::free_static(pOVar1, false);
                     }

                  }

               }

            }
 else {
               _err_print_error("deserialize_key_shortcut", "core/debugger/debugger_marshalls.cpp", 0xad, "Condition \"p_keys[i + 1].get_type() != Variant::INT\" is true. Continuing.", 0, 0);
            }

         }
 else {
            _err_print_error("deserialize_key_shortcut", "core/debugger/debugger_marshalls.cpp", 0xac, "Condition \"p_keys[i].get_type() != Variant::BOOL\" is true. Continuing.", 0, 0);
         }

         uVar4 = uVar4 + 2;
      }
;
      cVar3 = Array::is_empty();
      if (cVar3 == '\0') {
         pRVar9 = (Resource*)0x0;
         this_00 = (Resource*)operator_new(0x248, "");
         pRVar10 = this_00;
         for (lVar8 = 0x49; lVar8 != 0; lVar8 = lVar8 + -1) {
            *(undefined8*)pRVar10 = 0;
            pRVar10 = pRVar10 + (ulong)bVar11 * -0x10 + 8;
         }

         Resource::Resource(this_00);
         *(undefined***)this_00 = &PTR__initialize_classv_00104f10;
         Array::Array((Array*)( this_00 + 0x240 ));
         postinitialize_handler((Object*)this_00);
         cVar3 = RefCounted::init_ref();
         if (cVar3 != '\0') {
            cVar3 = RefCounted::reference();
            if (cVar3 != '\0') {
               pRVar9 = this_00;
            }

            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               cVar3 = predelete_handler((Object*)this_00);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
                  Memory::free_static(this_00, false);
               }

            }

         }

         Shortcut::set_events((Array*)pRVar9);
         *(Resource**)this = pRVar9;
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)this = 0;
         }

         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            cVar3 = predelete_handler((Object*)pRVar9);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pRVar9 + 0x140 ) )(pRVar9);
               Memory::free_static(pRVar9, false);
            }

         }

      }
 else {
         *(undefined8*)this = 0;
      }

   }
 else {
      _err_print_error("deserialize_key_shortcut", "core/debugger/debugger_marshalls.cpp", 0xaa, "Condition \"p_keys.size() % 2 != 0\" is true. Returning: Ref<Shortcut>()", 0, 0);
      *(undefined8*)this = 0;
   }

   Array::~Array(local_68);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<ScriptLanguage::StackInfo>::_copy_on_write() [clone .isra.0] */void CowData<ScriptLanguage::StackInfo>::_copy_on_write(CowData<ScriptLanguage::StackInfo> *this) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   CowData<char32_t> *this_00;
   ulong uVar4;
   CowData *pCVar5;
   long lVar6;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar4 = 0x10;
   if (lVar1 * 0x18 != 0) {
      uVar4 = lVar1 * 0x18 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = ( uVar4 | uVar4 >> 0x20 ) + 0x11;
   }

   puVar3 = (undefined8*)Memory::alloc_static(uVar4, false);
   if (puVar3 != (undefined8*)0x0) {
      lVar6 = 0;
      *puVar3 = 1;
      puVar3[1] = lVar1;
      this_00 = (CowData<char32_t>*)( puVar3 + 2 );
      if (lVar1 != 0) {
         do {
            pCVar5 = (CowData*)( this_00 + *(long*)this + ( -0x10 - (long)puVar3 ) );
            *(undefined8*)this_00 = 0;
            if (*(long*)pCVar5 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar5);
            }

            *(undefined8*)( this_00 + 8 ) = 0;
            if (*(long*)( pCVar5 + 8 ) != 0) {
               CowData<char32_t>::_ref(this_00 + 8, pCVar5 + 8);
            }

            lVar6 = lVar6 + 1;
            *(undefined4*)( this_00 + 0x10 ) = *(undefined4*)( pCVar5 + 0x10 );
            this_00 = this_00 + 0x18;
         }
 while ( lVar1 != lVar6 );
      }

      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar3 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* DebuggerMarshalls::OutputError::deserialize(Array const&) */undefined8 DebuggerMarshalls::OutputError::deserialize(OutputError *this, Array *param_1) {
   CowData<ScriptLanguage::StackInfo> *this_00;
   long *plVar1;
   undefined1(*pauVar2)[16];
   code *pcVar3;
   char *pcVar4;
   OutputError OVar5;
   uint uVar6;
   int iVar7;
   uint uVar8;
   Variant *pVVar9;
   ulong uVar10;
   undefined1(*pauVar11)[16];
   undefined1(*pauVar12)[16];
   undefined8 uVar13;
   undefined8 *puVar14;
   long lVar15;
   ulong uVar16;
   char *pcVar17;
   long *plVar18;
   undefined8 *puVar19;
   int iVar20;
   ulong uVar21;
   ulong uVar22;
   ulong uVar23;
   long in_FS_OFFSET;
   long local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = Array::size();
   if (uVar6 < 0xb) {
      Array::size();
      itos((long)&local_60);
      local_58 = ", actual size: ";
      local_70 = 0;
      local_50 = 0xf;
      String::parse_latin1((StrRange*)&local_70);
      itos((long)&local_80);
      local_90 = 0;
      local_58 = " message from script debugger, message too short. Expected size: ";
      local_50 = 0x41;
      String::parse_latin1((StrRange*)&local_90);
      local_58 = "OutputError";
      local_a0 = 0;
      local_50 = 0xb;
      String::parse_latin1((StrRange*)&local_a0);
      local_58 = "Malformed ";
      local_a8 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange*)&local_a8);
      String::operator +((String*)&local_98, (String*)&local_a8);
      String::operator +((String*)&local_88, (String*)&local_98);
      String::operator +((String*)&local_78, (String*)&local_88);
      String::operator +((String*)&local_68, (String*)&local_78);
      String::operator +((String*)&local_58, (String*)&local_68);
      pcVar17 = "Condition \"(uint32_t)p_arr.size() < (uint32_t)(11)\" is true. Returning: false";
      uVar13 = 0x7d;
   }
 else {
      iVar20 = (int)param_1;
      pVVar9 = (Variant*)Array::operator [](iVar20);
      iVar7 = Variant::operator_cast_to_int(pVVar9);
      *(int*)this = iVar7;
      for (int i = 0; i < 3; i++) {
         pVVar9 = (Variant*)Array::operator [](iVar20);
         iVar7 = Variant::operator_cast_to_int(pVVar9);
         *(int*)( this + ( 4*i + 4 ) ) = iVar7;
      }

      Array::operator [](iVar20);
      Variant::operator_cast_to_String((Variant*)&local_58);
      pcVar4 = local_58;
      pcVar17 = *(char**)( this + 0x10 );
      if (pcVar17 == local_58) {
         if (pcVar17 != (char*)0x0) {
            LOCK();
            plVar18 = (long*)( pcVar17 + -0x10 );
            *plVar18 = *plVar18 + -1;
            UNLOCK();
            if (*plVar18 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
            }

         }

      }
 else {
         if (pcVar17 != (char*)0x0) {
            LOCK();
            plVar18 = (long*)( pcVar17 + -0x10 );
            *plVar18 = *plVar18 + -1;
            UNLOCK();
            if (*plVar18 == 0) {
               lVar15 = *(long*)( this + 0x10 );
               *(undefined8*)( this + 0x10 ) = 0;
               Memory::free_static((void*)( lVar15 + -0x10 ), false);
            }

         }

         *(char**)( this + 0x10 ) = local_58;
      }

      Array::operator [](iVar20);
      Variant::operator_cast_to_String((Variant*)&local_58);
      pcVar4 = local_58;
      pcVar17 = *(char**)( this + 0x18 );
      if (pcVar17 == local_58) {
         if (pcVar17 != (char*)0x0) {
            LOCK();
            plVar18 = (long*)( pcVar17 + -0x10 );
            *plVar18 = *plVar18 + -1;
            UNLOCK();
            if (*plVar18 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
            }

         }

      }
 else {
         if (pcVar17 != (char*)0x0) {
            LOCK();
            plVar18 = (long*)( pcVar17 + -0x10 );
            *plVar18 = *plVar18 + -1;
            UNLOCK();
            if (*plVar18 == 0) {
               lVar15 = *(long*)( this + 0x18 );
               *(undefined8*)( this + 0x18 ) = 0;
               Memory::free_static((void*)( lVar15 + -0x10 ), false);
            }

         }

         *(char**)( this + 0x18 ) = local_58;
      }

      pVVar9 = (Variant*)Array::operator [](iVar20);
      iVar7 = Variant::operator_cast_to_int(pVVar9);
      *(int*)( this + 0x20 ) = iVar7;
      Array::operator [](iVar20);
      Variant::operator_cast_to_String((Variant*)&local_58);
      pcVar4 = local_58;
      pcVar17 = *(char**)( this + 0x28 );
      if (pcVar17 == local_58) {
         if (pcVar17 != (char*)0x0) {
            LOCK();
            plVar18 = (long*)( pcVar17 + -0x10 );
            *plVar18 = *plVar18 + -1;
            UNLOCK();
            if (*plVar18 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
            }

         }

      }
 else {
         if (pcVar17 != (char*)0x0) {
            LOCK();
            plVar18 = (long*)( pcVar17 + -0x10 );
            *plVar18 = *plVar18 + -1;
            UNLOCK();
            if (*plVar18 == 0) {
               lVar15 = *(long*)( this + 0x28 );
               *(undefined8*)( this + 0x28 ) = 0;
               Memory::free_static((void*)( lVar15 + -0x10 ), false);
            }

         }

         *(char**)( this + 0x28 ) = local_58;
      }

      Array::operator [](iVar20);
      Variant::operator_cast_to_String((Variant*)&local_58);
      pcVar4 = local_58;
      pcVar17 = *(char**)( this + 0x30 );
      if (pcVar17 == local_58) {
         if (pcVar17 != (char*)0x0) {
            LOCK();
            plVar18 = (long*)( pcVar17 + -0x10 );
            *plVar18 = *plVar18 + -1;
            UNLOCK();
            if (*plVar18 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
            }

         }

      }
 else {
         if (pcVar17 != (char*)0x0) {
            LOCK();
            plVar18 = (long*)( pcVar17 + -0x10 );
            *plVar18 = *plVar18 + -1;
            UNLOCK();
            if (*plVar18 == 0) {
               lVar15 = *(long*)( this + 0x30 );
               *(undefined8*)( this + 0x30 ) = 0;
               Memory::free_static((void*)( lVar15 + -0x10 ), false);
            }

         }

         *(char**)( this + 0x30 ) = local_58;
      }

      pVVar9 = (Variant*)Array::operator [](iVar20);
      OVar5 = (OutputError)Variant::operator_cast_to_bool(pVVar9);
      this[0x38] = OVar5;
      pVVar9 = (Variant*)Array::operator [](iVar20);
      uVar6 = Variant::operator_cast_to_unsigned_int(pVVar9);
      uVar8 = Array::size();
      if (uVar8 < uVar6) {
         Array::size();
         itos((long)&local_60);
         local_58 = ", actual size: ";
         local_70 = 0;
         local_50 = 0xf;
         String::parse_latin1((StrRange*)&local_70);
         itos((long)&local_80);
         local_90 = 0;
         local_58 = " message from script debugger, message too short. Expected size: ";
         local_50 = 0x41;
         String::parse_latin1((StrRange*)&local_90);
         local_58 = "OutputError";
         local_a0 = 0;
         local_50 = 0xb;
         String::parse_latin1((StrRange*)&local_a0);
         local_58 = "Malformed ";
         local_a8 = 0;
         local_50 = 10;
         String::parse_latin1((StrRange*)&local_a8);
         String::operator +((String*)&local_98, (String*)&local_a8);
         String::operator +((String*)&local_88, (String*)&local_98);
         String::operator +((String*)&local_78, (String*)&local_88);
         String::operator +((String*)&local_68, (String*)&local_78);
         String::operator +((String*)&local_58, (String*)&local_68);
         pcVar17 = "Condition \"(uint32_t)p_arr.size() < (uint32_t)(stack_size)\" is true. Returning: false";
         uVar13 = 0x89;
      }
 else {
         this_00 = (CowData<ScriptLanguage::StackInfo>*)( this + 0x48 );
         uVar23 = (ulong)uVar6 / 3;
         uVar22 = uVar23;
         if (*(long*)( this + 0x48 ) == 0) {
            if (uVar6 < 3) goto LAB_00102640;
            CowData<ScriptLanguage::StackInfo>::_copy_on_write(this_00);
            uVar16 = 0;
            LAB_00102740:uVar21 = uVar23 * 0x18 - 1;
            uVar21 = uVar21 >> 1 | uVar21;
            uVar21 = uVar21 >> 2 | uVar21;
            uVar21 = uVar21 >> 4 | uVar21;
            uVar21 = uVar21 >> 8 | uVar21;
            uVar21 = uVar21 >> 0x10 | uVar21;
            local_b8 = ( uVar21 | uVar21 >> 0x20 ) + 1;
            if ((long)uVar16 < (long)uVar23) {
               LAB_001027a8:if (uVar16 == 0) {
                  puVar14 = (undefined8*)Memory::alloc_static(local_b8 + 0x10, false);
                  if (puVar14 == (undefined8*)0x0) {
                     _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                  }
 else {
                     puVar19 = puVar14 + 2;
                     *puVar14 = 1;
                     puVar14[1] = 0;
                     *(undefined8**)( this + 0x48 ) = puVar19;
                     lVar15 = 0;
                     LAB_001022fc:if (lVar15 < (long)uVar23) {
                        pauVar2 = (undefined1(*) [16])( puVar19 + uVar23 * 3 );
                        pauVar12 = (undefined1(*) [16])( puVar19 + lVar15 * 3 );
                        pauVar11 = pauVar12;
                        if (( (int)pauVar2 - (int)pauVar12 & 8U ) != 0) {
                           *pauVar12 = (undefined1[16])0x0;
                           pauVar11 = (undefined1(*) [16])( pauVar12[1] + 8 );
                           if ((undefined1(*) [16])( pauVar12[1] + 8 ) == pauVar2) goto LAB_00102340;
                        }

                        do {
                           *pauVar11 = (undefined1[16])0x0;
                           pauVar12 = pauVar11 + 3;
                           *(undefined1(*) [16])( pauVar11[1] + 8 ) = (undefined1[16])0x0;
                           pauVar11 = pauVar12;
                        }
 while ( pauVar12 != pauVar2 );
                     }

                     LAB_00102340:puVar19[-1] = uVar23;
                  }

               }
 else {
                  iVar7 = CowData<ScriptLanguage::StackInfo>::_realloc(this_00, local_b8);
                  if (iVar7 == 0) {
                     LAB_001022eb:puVar19 = *(undefined8**)( this + 0x48 );
                     if (puVar19 == (undefined8*)0x0) {
                        /* WARNING: Does not return */
                        pcVar3 = (code*)invalidInstructionException();
                        ( *pcVar3 )();
                     }

                     lVar15 = puVar19[-1];
                     goto LAB_001022fc;
                  }

               }

            }
 else {
               local_b0 = 0;
               LAB_001026d3:while (true) {
                  lVar15 = *(long*)( this + 0x48 );
                  if (lVar15 == 0) {
                     /* WARNING: Does not return */
                     pcVar3 = (code*)invalidInstructionException();
                     ( *pcVar3 )();
                  }

                  if (*(ulong*)( lVar15 + -8 ) <= uVar22) break;
                  plVar18 = (long*)( lVar15 + uVar22 * 0x18 );
                  if (plVar18[1] != 0) {
                     LOCK();
                     plVar1 = (long*)( plVar18[1] + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar15 = plVar18[1];
                        plVar18[1] = 0;
                        Memory::free_static((void*)( lVar15 + -0x10 ), false);
                     }

                  }

                  if (*plVar18 != 0) {
                     LOCK();
                     plVar1 = (long*)( *plVar18 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar15 = *plVar18;
                        *plVar18 = 0;
                        Memory::free_static((void*)( lVar15 + -0x10 ), false);
                     }

                  }

                  uVar22 = uVar22 + 1;
               }
;
               if (local_b8 != local_b0) {
                  iVar7 = CowData<ScriptLanguage::StackInfo>::_realloc(this_00, local_b8);
                  if (iVar7 != 0) goto LAB_00102344;
                  lVar15 = *(long*)( this + 0x48 );
                  if (lVar15 == 0) {
                     _DAT_00000000 = 0;
                     /* WARNING: Does not return */
                     pcVar3 = (code*)invalidInstructionException();
                     ( *pcVar3 )();
                  }

               }

               *(ulong*)( lVar15 + -8 ) = uVar23;
            }

            LAB_00102344:uVar8 = 0;
            CowData<ScriptLanguage::StackInfo>::_copy_on_write(this_00);
            plVar18 = *(long**)( this + 0x48 );
            if (uVar6 < 3) goto LAB_00102645;
            do {
               Array::operator [](iVar20);
               Variant::operator_cast_to_String((Variant*)&local_58);
               pcVar4 = local_58;
               pcVar17 = (char*)*plVar18;
               if (pcVar17 == local_58) {
                  if (pcVar17 != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( pcVar17 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_58 = (char*)0x0;
                        Memory::free_static(pcVar4 + -0x10, false);
                     }

                  }

               }
 else {
                  if (pcVar17 != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( pcVar17 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar15 = *plVar18;
                        *plVar18 = 0;
                        Memory::free_static((void*)( lVar15 + -0x10 ), false);
                     }
 else {
                        *plVar18 = 0;
                     }

                  }

                  *plVar18 = (long)local_58;
               }

               Array::operator [](iVar20);
               Variant::operator_cast_to_String((Variant*)&local_58);
               pcVar4 = local_58;
               pcVar17 = (char*)plVar18[1];
               if (pcVar17 == local_58) {
                  if (pcVar17 != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( pcVar17 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_58 = (char*)0x0;
                        Memory::free_static(pcVar4 + -0x10, false);
                     }

                  }

               }
 else {
                  if (pcVar17 != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( pcVar17 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar15 = plVar18[1];
                        plVar18[1] = 0;
                        Memory::free_static((void*)( lVar15 + -0x10 ), false);
                     }

                  }

                  plVar18[1] = (long)local_58;
               }

               uVar8 = uVar8 + 1;
               pVVar9 = (Variant*)Array::operator [](iVar20);
               iVar7 = Variant::operator_cast_to_int(pVVar9);
               *(int*)( plVar18 + 2 ) = iVar7;
               plVar18 = plVar18 + 3;
            }
 while ( uVar8 < uVar6 / 3 );
            uVar6 = (int)uVar23 * 3 + 0xb;
         }
 else {
            uVar16 = *(ulong*)( *(long*)( this + 0x48 ) + -8 );
            if (uVar23 == uVar16) goto LAB_00102344;
            if (2 < uVar6) {
               CowData<ScriptLanguage::StackInfo>::_copy_on_write(this_00);
               uVar21 = uVar23 * 0x18 - 1;
               uVar21 = uVar21 >> 1 | uVar21;
               uVar21 = uVar21 >> 2 | uVar21;
               uVar21 = uVar21 >> 4 | uVar21;
               uVar21 = uVar21 >> 8 | uVar21;
               uVar21 = uVar21 >> 0x10 | uVar21;
               uVar21 = uVar21 >> 0x20 | uVar21;
               local_b8 = uVar21 + 1;
               if (uVar16 * 0x18 == 0) goto LAB_00102740;
               uVar10 = uVar16 * 0x18 - 1;
               uVar10 = uVar10 | uVar10 >> 1;
               uVar10 = uVar10 | uVar10 >> 2;
               uVar10 = uVar10 | uVar10 >> 4;
               uVar10 = uVar10 | uVar10 >> 8;
               uVar10 = uVar10 | uVar10 >> 0x10;
               uVar10 = uVar10 | uVar10 >> 0x20;
               if ((long)uVar16 < (long)uVar23) {
                  if (uVar10 != uVar21) goto LAB_001027a8;
                  goto LAB_001022eb;
               }

               local_b0 = uVar10 + 1;
               goto LAB_001026d3;
            }

            CowData<ScriptLanguage::StackInfo>::_unref(this_00);
            LAB_00102640:CowData<ScriptLanguage::StackInfo>::_copy_on_write(this_00);
            LAB_00102645:uVar6 = 0xb;
         }

         uVar8 = Array::size();
         uVar13 = 1;
         if (uVar8 <= uVar6) goto LAB_00102607;
         Array::size();
         itos((long)&local_60);
         local_58 = ", actual size: ";
         local_70 = 0;
         local_50 = 0xf;
         String::parse_latin1((StrRange*)&local_70);
         itos((long)&local_80);
         local_90 = 0;
         local_58 = " message from script debugger, message too long. Expected size: ";
         local_50 = 0x40;
         String::parse_latin1((StrRange*)&local_90);
         local_58 = "OutputError";
         local_a0 = 0;
         local_50 = 0xb;
         String::parse_latin1((StrRange*)&local_a0);
         local_58 = "Malformed ";
         local_a8 = 0;
         local_50 = 10;
         String::parse_latin1((StrRange*)&local_a8);
         String::operator +((String*)&local_98, (String*)&local_a8);
         String::operator +((String*)&local_88, (String*)&local_98);
         String::operator +((String*)&local_78, (String*)&local_88);
         String::operator +((String*)&local_68, (String*)&local_78);
         String::operator +((String*)&local_58, (String*)&local_68);
         pcVar17 = "Condition \"(uint32_t)p_arr.size() > (uint32_t)idx\" is true. Returning: false";
         uVar13 = 0x93;
      }

   }

   _err_print_error("deserialize", "core/debugger/debugger_marshalls.cpp", uVar13, pcVar17, &local_58, 0, 0);
   pcVar17 = local_58;
   if (local_58 != (char*)0x0) {
      LOCK();
      plVar18 = (long*)( local_58 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_58 = (char*)0x0;
         Memory::free_static(pcVar17 + -0x10, false);
      }

   }

   lVar15 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar18 = (long*)( local_68 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar15 + -0x10 ), false);
      }

   }

   lVar15 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar18 = (long*)( local_78 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar15 + -0x10 ), false);
      }

   }

   lVar15 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar18 = (long*)( local_88 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar15 + -0x10 ), false);
      }

   }

   lVar15 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar18 = (long*)( local_98 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar15 + -0x10 ), false);
      }

   }

   lVar15 = local_a8;
   if (local_a8 != 0) {
      LOCK();
      plVar18 = (long*)( local_a8 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_a8 = 0;
         Memory::free_static((void*)( lVar15 + -0x10 ), false);
      }

   }

   lVar15 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar18 = (long*)( local_a0 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar15 + -0x10 ), false);
      }

   }

   lVar15 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar18 = (long*)( local_90 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar15 + -0x10 ), false);
      }

   }

   lVar15 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar18 = (long*)( local_80 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar15 + -0x10 ), false);
      }

   }

   lVar15 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar18 = (long*)( local_70 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar15 + -0x10 ), false);
      }

   }

   lVar15 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar18 = (long*)( local_60 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar15 + -0x10 ), false);
         uVar13 = 0;
         goto LAB_00102607;
      }

   }

   uVar13 = 0;
   LAB_00102607:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar13;
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
/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}
/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
}
/* Shortcut::is_class_ptr(void*) const */uint Shortcut::is_class_ptr(Shortcut *this, void *param_1) {
   return (uint)CONCAT71(0x1050, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1050, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1050, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1051, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* Shortcut::_getv(StringName const&, Variant&) const */undefined8 Shortcut::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Shortcut::_setv(StringName const&, Variant const&) */undefined8 Shortcut::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Shortcut::_validate_propertyv(PropertyInfo&) const */void Shortcut::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* Shortcut::_property_can_revertv(StringName const&) const */undefined8 Shortcut::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* Shortcut::_property_get_revertv(StringName const&, Variant&) const */undefined8 Shortcut::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Shortcut::_notificationv(int, bool) */void Shortcut::_notificationv(int param_1, bool param_2) {
   return;
}
/* Shortcut::~Shortcut() */void Shortcut::~Shortcut(Shortcut *this) {
   *(undefined***)this = &PTR__initialize_classv_00104f10;
   Array::~Array((Array*)( this + 0x240 ));
   Resource::~Resource((Resource*)this);
   return;
}
/* Shortcut::_get_class_namev() const */undefined8 *Shortcut::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103083:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103083;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Shortcut");
         goto LAB_001030ee;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Shortcut");
   LAB_001030ee:return &_get_class_namev();
}
/* Shortcut::~Shortcut() */void Shortcut::~Shortcut(Shortcut *this) {
   *(undefined***)this = &PTR__initialize_classv_00104f10;
   Array::~Array((Array*)( this + 0x240 ));
   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x248);
   return;
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
/* Shortcut::get_class() const */void Shortcut::get_class(void) {
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
/* Shortcut::_initialize_classv() */void Shortcut::_initialize_classv(void) {
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

            if ((code*)PTR__bind_methods_00107008 != RefCounted::_bind_methods) {
               RefCounted::_bind_methods();
            }

            RefCounted::initialize_class()::initialized =
            '\x01';
         }

         local_68 = 0;
         local_58 = "RefCounted";
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

         Resource::_bind_methods();
         Resource::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "Resource";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "Shortcut";
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

      if ((code*)_GLOBAL_OFFSET_TABLE_ != Resource::_bind_methods) {
         Shortcut::_bind_methods();
      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Shortcut::is_class(String const&) const */undefined8 Shortcut::is_class(Shortcut *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
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
                  if (lVar5 == 0) goto LAB_0010377f;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar5 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar7 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar7 != -1) {
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

      LAB_0010377f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00103833;
   }

   cVar6 = String::operator ==(param_1, "Shortcut");
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
                     if (lVar5 == 0) goto LAB_001039a3;
                     LOCK();
                     lVar7 = *plVar1;
                     bVar9 = lVar5 == lVar7;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar7 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar7 != -1) {
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

         LAB_001039a3:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00103833;
      }

      cVar6 = String::operator ==(param_1, "Resource");
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
                        if (lVar5 == 0) goto LAB_00103a83;
                        LOCK();
                        lVar7 = *plVar1;
                        bVar9 = lVar5 == lVar7;
                        if (bVar9) {
                           *plVar1 = lVar5 + 1;
                           lVar7 = lVar5;
                        }

                        UNLOCK();
                     }
 while ( !bVar9 );
                     if (lVar7 != -1) {
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

            LAB_00103a83:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

            if (cVar6 != '\0') goto LAB_00103833;
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
                           if (lVar5 == 0) goto LAB_0010390b;
                           LOCK();
                           lVar7 = *plVar1;
                           bVar9 = lVar5 == lVar7;
                           if (bVar9) {
                              *plVar1 = lVar5 + 1;
                              lVar7 = lVar5;
                           }

                           UNLOCK();
                        }
 while ( !bVar9 );
                        if (lVar7 != -1) {
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

               LAB_0010390b:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

               if (cVar6 != '\0') goto LAB_00103833;
            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar8 = String::operator ==(param_1, "Object");
               return uVar8;
            }

            goto LAB_00103b99;
         }

      }

   }

   LAB_00103833:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00103b99:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
      LAB_00103d08:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00103d08;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00103d26;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x00103d26:if (lVar2 == 0) {
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
      LAB_00104108:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00104108;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00104125;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00104125:if (lVar2 == 0) {
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
/* Shortcut::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Shortcut::_get_property_listv(Shortcut *this, List *param_1, bool param_2) {
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
   local_78 = "Shortcut";
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Shortcut";
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
      LAB_00104558:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00104558;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00104575;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00104575:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "Shortcut", false);
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
/* CowData<ScriptLanguage::StackInfo>::_unref() */void CowData<ScriptLanguage::StackInfo>::_unref(CowData<ScriptLanguage::StackInfo> *this) {
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
               if (plVar6[1] != 0) {
                  LOCK();
                  plVar2 = (long*)( plVar6[1] + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = plVar6[1];
                     plVar6[1] = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

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
               plVar6 = plVar6 + 3;
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
/* CowData<ScriptLanguage::StackInfo>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<ScriptLanguage::StackInfo>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* DebuggerMarshalls::OutputError::deserialize(Array const&) [clone .cold] */void DebuggerMarshalls::OutputError::deserialize(Array *param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<ScriptLanguage::StackInfo>::_realloc(long) */undefined8 CowData<ScriptLanguage::StackInfo>::_realloc(CowData<ScriptLanguage::StackInfo> *this, long param_1) {
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
/* WARNING: Control flow encountered bad instruction data *//* Shortcut::~Shortcut() */void Shortcut::~Shortcut(Shortcut *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

