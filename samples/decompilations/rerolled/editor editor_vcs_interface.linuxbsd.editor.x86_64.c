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
/* EditorVCSInterface::add_diff_hunks_into_diff_file(Dictionary, TypedArray<Dictionary>) */Dictionary *EditorVCSInterface::add_diff_hunks_into_diff_file(Dictionary *param_1, undefined8 param_2, Variant *param_3, Array *param_4) {
   char cVar1;
   Variant *pVVar2;
   long in_FS_OFFSET;
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, param_4);
   Variant::Variant((Variant*)local_78, "diff_hunks");
   pVVar2 = (Variant*)Dictionary::operator [](param_3);
   if (pVVar2 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_58[0];
      local_58[0] = 0;
      *(undefined8*)( pVVar2 + 8 ) = local_50;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::Dictionary(param_1, param_3);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* EditorVCSInterface::add_line_diffs_into_diff_hunk(Dictionary, TypedArray<Dictionary>) */Dictionary *EditorVCSInterface::add_line_diffs_into_diff_hunk(Dictionary *param_1, undefined8 param_2, Variant *param_3, Array *param_4) {
   char cVar1;
   Variant *pVVar2;
   long in_FS_OFFSET;
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, param_4);
   Variant::Variant((Variant*)local_78, "diff_lines");
   pVVar2 = (Variant*)Dictionary::operator [](param_3);
   if (pVVar2 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_58[0];
      local_58[0] = 0;
      *(undefined8*)( pVVar2 + 8 ) = local_50;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::Dictionary(param_1, param_3);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* EditorVCSInterface::create_status_file(String const&, EditorVCSInterface::ChangeType,
   EditorVCSInterface::TreeArea) */Dictionary *EditorVCSInterface::create_status_file(Dictionary *param_1, undefined8 param_2, String *param_3, int param_4, int param_5) {
   char cVar1;
   Variant *pVVar2;
   long in_FS_OFFSET;
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary(param_1);
   Variant::Variant((Variant*)local_58, param_3);
   Variant::Variant((Variant*)local_78, "file_path");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)param_1);
   if (pVVar2 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_58[0];
      *(undefined8*)( pVVar2 + 8 ) = local_50;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, param_4);
   Variant::Variant((Variant*)local_78, "change_type");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)param_1);
   if (pVVar2 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_58[0];
      *(undefined8*)( pVVar2 + 8 ) = local_50;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, param_5);
   Variant::Variant((Variant*)local_78, "area");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)param_1);
   if (pVVar2 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_58[0];
      *(undefined8*)( pVVar2 + 8 ) = local_50;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
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
/* EditorVCSInterface::create_diff_file(String const&, String const&) */String *EditorVCSInterface::create_diff_file(String *param_1, String *param_2) {
   char cVar1;
   Variant *pVVar2;
   String *in_RCX;
   String *in_RDX;
   long in_FS_OFFSET;
   Array aAStack_88[8];
   long local_80;
   int local_78[8];
   ulong local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary((Dictionary*)param_1);
   Variant::Variant((Variant*)&local_58, in_RDX);
   Variant::Variant((Variant*)local_78, "new_file");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)param_1);
   if (pVVar2 != (Variant*)&local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = (int)local_58;
      *(undefined8*)( pVVar2 + 8 ) = local_50._0_8_;
      *(undefined8*)( pVVar2 + 0x10 ) = local_50._8_8_;
      local_58 = local_58 & 0xffffffff00000000;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[(int)local_58];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[(int)local_58];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)&local_58, in_RCX);
   Variant::Variant((Variant*)local_78, "old_file");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)param_1);
   if (pVVar2 != (Variant*)&local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = (int)local_58;
      *(undefined8*)( pVVar2 + 8 ) = local_50._0_8_;
      *(undefined8*)( pVVar2 + 0x10 ) = local_50._8_8_;
      local_58 = local_58 & 0xffffffff00000000;
   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   Array::Array(aAStack_88);
   local_58 = 0;
   local_80 = 0;
   local_50 = (undefined1[16])0x0;
   Array::set_typed((uint)aAStack_88, (StringName*)0x1b, (Variant*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)&local_58, aAStack_88);
   Variant::Variant((Variant*)local_78, "diff_hunks");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)param_1);
   if (pVVar2 != (Variant*)&local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = (int)local_58;
      *(undefined8*)( pVVar2 + 8 ) = local_50._0_8_;
      *(undefined8*)( pVVar2 + 0x10 ) = local_50._8_8_;
      local_58 = local_58 & 0xffffffff00000000;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[(int)local_58];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[(int)local_58];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Array::~Array(aAStack_88);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* EditorVCSInterface::create_diff_line(int, int, String const&, String const&) */Dictionary *EditorVCSInterface::create_diff_line(int param_1, int param_2, String *param_3, String *param_4) {
   char cVar1;
   Variant *pVVar2;
   undefined4 in_register_0000003c;
   Dictionary *this;
   String *in_R8;
   String *in_R9;
   long in_FS_OFFSET;
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   this(Dictionary * CONCAT44(in_register_0000003c, param_1));
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary(this);
   Variant::Variant((Variant*)local_58, (int)param_3);
   Variant::Variant((Variant*)local_78, "new_line_no");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)this);
   if (pVVar2 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_58[0];
      *(undefined8*)( pVVar2 + 8 ) = local_50;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, (int)param_4);
   Variant::Variant((Variant*)local_78, "old_line_no");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)this);
   if (pVVar2 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_58[0];
      *(undefined8*)( pVVar2 + 8 ) = local_50;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, in_R8);
   Variant::Variant((Variant*)local_78, "content");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)this);
   if (pVVar2 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_58[0];
      *(undefined8*)( pVVar2 + 8 ) = local_50;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, in_R9);
   Variant::Variant((Variant*)local_78, "status");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)this);
   if (pVVar2 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_58[0];
      *(undefined8*)( pVVar2 + 8 ) = local_50;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorVCSInterface::create_commit(String const&, String const&, String const&, long, long) */String *EditorVCSInterface::create_commit(String *param_1, String *param_2, String *param_3, long param_4, long param_5) {
   char cVar1;
   Variant *pVVar2;
   long in_R9;
   long in_FS_OFFSET;
   long in_stack_00000008;
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary((Dictionary*)param_1);
   Variant::Variant((Variant*)local_58, param_3);
   Variant::Variant((Variant*)local_78, "message");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)param_1);
   if (pVVar2 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_58[0];
      *(undefined8*)( pVVar2 + 8 ) = local_50;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, (String*)param_4);
   Variant::Variant((Variant*)local_78, "author");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)param_1);
   if (pVVar2 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_58[0];
      *(undefined8*)( pVVar2 + 8 ) = local_50;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, in_R9);
   Variant::Variant((Variant*)local_78, "unix_timestamp");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)param_1);
   if (pVVar2 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_58[0];
      *(undefined8*)( pVVar2 + 8 ) = local_50;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, in_stack_00000008);
   Variant::Variant((Variant*)local_78, "offset_minutes");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)param_1);
   if (pVVar2 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_58[0];
      *(undefined8*)( pVVar2 + 8 ) = local_50;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, (String*)param_5);
   Variant::Variant((Variant*)local_78, "id");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)param_1);
   if (pVVar2 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_58[0];
      *(undefined8*)( pVVar2 + 8 ) = local_50;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
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
/* EditorVCSInterface::create_diff_hunk(int, int, int, int) */Dictionary *EditorVCSInterface::create_diff_hunk(int param_1, int param_2, int param_3, int param_4) {
   char cVar1;
   Variant *pVVar2;
   undefined4 in_register_0000003c;
   Dictionary *this;
   int in_R8D;
   int in_R9D;
   long in_FS_OFFSET;
   Array local_88[8];
   long local_80;
   int local_78[8];
   ulong local_58;
   undefined1 local_50[16];
   long local_40;
   this(Dictionary * CONCAT44(in_register_0000003c, param_1));
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary(this);
   Variant::Variant((Variant*)&local_58, in_R9D);
   Variant::Variant((Variant*)local_78, "new_lines");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)this);
   if (pVVar2 != (Variant*)&local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = (int)local_58;
      *(undefined8*)( pVVar2 + 8 ) = local_50._0_8_;
      *(undefined8*)( pVVar2 + 0x10 ) = local_50._8_8_;
      local_58 = local_58 & 0xffffffff00000000;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[(int)local_58];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[(int)local_58];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)&local_58, in_R8D);
   Variant::Variant((Variant*)local_78, "old_lines");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)this);
   if (pVVar2 != (Variant*)&local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = (int)local_58;
      *(undefined8*)( pVVar2 + 8 ) = local_50._0_8_;
      *(undefined8*)( pVVar2 + 0x10 ) = local_50._8_8_;
      local_58 = local_58 & 0xffffffff00000000;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[(int)local_58];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[(int)local_58];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)&local_58, param_4);
   Variant::Variant((Variant*)local_78, "new_start");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)this);
   if (pVVar2 != (Variant*)&local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = (int)local_58;
      *(undefined8*)( pVVar2 + 8 ) = local_50._0_8_;
      *(undefined8*)( pVVar2 + 0x10 ) = local_50._8_8_;
      local_58 = local_58 & 0xffffffff00000000;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[(int)local_58];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[(int)local_58];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)&local_58, param_3);
   Variant::Variant((Variant*)local_78, "old_start");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)this);
   if (pVVar2 != (Variant*)&local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = (int)local_58;
      *(undefined8*)( pVVar2 + 8 ) = local_50._0_8_;
      *(undefined8*)( pVVar2 + 0x10 ) = local_50._8_8_;
      local_58 = local_58 & 0xffffffff00000000;
   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   Array::Array(local_88);
   local_58 = 0;
   local_80 = 0;
   local_50 = (undefined1[16])0x0;
   Array::set_typed((uint)local_88, (StringName*)0x1b, (Variant*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)&local_58, local_88);
   Variant::Variant((Variant*)local_78, "diff_lines");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)this);
   if (pVVar2 != (Variant*)&local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = (int)local_58;
      *(undefined8*)( pVVar2 + 8 ) = local_50._0_8_;
      *(undefined8*)( pVVar2 + 0x10 ) = local_50._8_8_;
      local_58 = local_58 & 0xffffffff00000000;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[(int)local_58];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[(int)local_58];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Array::~Array(local_88);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
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

   StringName::operator =((StringName*)( puVar3 + 4 ), param_1 + 0x10);
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
/* List<EditorVCSInterface::DiffHunk, DefaultAllocator>::push_back(EditorVCSInterface::DiffHunk
   const&) [clone .isra.0] */void List<EditorVCSInterface::DiffHunk,DefaultAllocator>::push_back(List<EditorVCSInterface::DiffHunk,DefaultAllocator> *this, DiffHunk *param_1) {
   long *plVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   undefined1(*pauVar4)[16];
   undefined8 *puVar5;
   long lVar6;
   undefined8 *puVar7;
   if (*(long*)this == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])this = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar3 = (undefined8*)operator_new(0x30, DefaultAllocator::alloc);
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar3 + 4 ) = (undefined1[16])0x0;
   uVar2 = *(undefined8*)( param_1 + 8 );
   *puVar3 = *(undefined8*)param_1;
   puVar3[1] = uVar2;
   if (( *(long**)( param_1 + 0x10 ) != (long*)0x0 ) && ( puVar7 = (undefined8*)**(long**)( param_1 + 0x10 ) ),puVar7 != (undefined8*)0x0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      puVar3[2] = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
      do {
         while (true) {
            puVar5 = (undefined8*)operator_new(0x40, DefaultAllocator::alloc);
            for (int i = 0; i < 3; i++) {
               *(undefined1(*) [16])( puVar5 + ( 2*i + 1 ) ) = (undefined1[16])0;
            }

            puVar5[7] = 0;
            *puVar5 = *puVar7;
            lVar6 = puVar7[1];
            if (lVar6 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 1 ), (CowData*)( puVar7 + 1 ));
               lVar6 = puVar5[2];
            }

            if (puVar7[2] != lVar6) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)( puVar7 + 2 ));
            }

            if (puVar5[3] != puVar7[3]) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 3 ), (CowData*)( puVar7 + 3 ));
            }

            if (puVar5[4] != puVar7[4]) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 4 ), (CowData*)( puVar7 + 4 ));
            }

            plVar1 = (long*)puVar3[2];
            lVar6 = plVar1[1];
            puVar5[5] = 0;
            puVar5[7] = plVar1;
            puVar5[6] = lVar6;
            if (lVar6 != 0) {
               *(undefined8**)( lVar6 + 0x28 ) = puVar5;
            }

            plVar1[1] = (long)puVar5;
            if (*plVar1 != 0) break;
            puVar7 = (undefined8*)puVar7[5];
            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
            *plVar1 = (long)puVar5;
            if (puVar7 == (undefined8*)0x0) goto LAB_0010194d;
         }
;
         puVar7 = (undefined8*)puVar7[5];
         *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
      }
 while ( puVar7 != (undefined8*)0x0 );
   }

   LAB_0010194d:plVar1 = *(long**)this;
   lVar6 = plVar1[1];
   puVar3[3] = 0;
   puVar3[5] = plVar1;
   puVar3[4] = lVar6;
   if (lVar6 != 0) {
      *(undefined8**)( lVar6 + 0x18 ) = puVar3;
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
/* EditorVCSInterface::_convert_diff_line(Dictionary const&) */Dictionary *EditorVCSInterface::_convert_diff_line(Dictionary *param_1) {
   long *plVar1;
   char cVar2;
   long lVar3;
   long lVar4;
   int iVar5;
   Variant *pVVar6;
   Variant *in_RDX;
   long in_FS_OFFSET;
   long local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( param_1 + 0x18 ) = (undefined1[16])0x0;
   Variant::Variant((Variant*)local_48, "new_line_no");
   pVVar6 = (Variant*)Dictionary::operator [](in_RDX);
   iVar5 = Variant::operator_cast_to_int(pVVar6);
   *(int*)param_1 = iVar5;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_48, "old_line_no");
   pVVar6 = (Variant*)Dictionary::operator [](in_RDX);
   iVar5 = Variant::operator_cast_to_int(pVVar6);
   *(int*)( param_1 + 4 ) = iVar5;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_48, "content");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_String((Variant*)&local_50);
   lVar4 = local_50;
   lVar3 = *(long*)( param_1 + 8 );
   if (lVar3 == local_50) {
      if (lVar3 == 0) goto LAB_00101ae2;
      LOCK();
      plVar1 = (long*)( lVar3 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00101ae2;
      local_50 = 0;
      Memory::free_static((void*)( lVar4 + -0x10 ), false);
      cVar2 = Variant::needs_deinit[local_48[0]];
   }
 else {
      if (lVar3 != 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( param_1 + 8 );
            *(undefined8*)( param_1 + 8 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      *(long*)( param_1 + 8 ) = local_50;
      LAB_00101ae2:cVar2 = Variant::needs_deinit[local_48[0]];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_48, "status");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_String((Variant*)&local_50);
   lVar4 = local_50;
   lVar3 = *(long*)( param_1 + 0x10 );
   if (lVar3 == local_50) {
      if (lVar3 != 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
            cVar2 = Variant::needs_deinit[local_48[0]];
            goto joined_r0x00101bb9;
         }

      }

   }
 else {
      if (lVar3 != 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( param_1 + 0x10 );
            *(undefined8*)( param_1 + 0x10 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      *(long*)( param_1 + 0x10 ) = local_50;
   }

   cVar2 = Variant::needs_deinit[local_48[0]];
   joined_r0x00101bb9:if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorVCSInterface::_convert_diff_hunk(Dictionary const&) */Dictionary *EditorVCSInterface::_convert_diff_hunk(Dictionary *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   char cVar4;
   int iVar5;
   int iVar6;
   Variant *pVVar7;
   undefined8 *puVar8;
   undefined1(*pauVar9)[16];
   Variant *in_RDX;
   long lVar10;
   uint uVar11;
   long in_FS_OFFSET;
   Array local_b8[8];
   long local_b0;
   undefined8 local_a8;
   long local_a0;
   long local_98;
   long local_90;
   long local_88[2];
   int local_78[8];
   int local_58[2];
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( param_1 + 0x10 ) = 0;
   Variant::Variant((Variant*)local_58, "new_lines");
   pVVar7 = (Variant*)Dictionary::operator [](in_RDX);
   iVar5 = Variant::operator_cast_to_int(pVVar7);
   *(int*)( param_1 + 8 ) = iVar5;
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, "old_lines");
   pVVar7 = (Variant*)Dictionary::operator [](in_RDX);
   iVar5 = Variant::operator_cast_to_int(pVVar7);
   *(int*)( param_1 + 0xc ) = iVar5;
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, "new_start");
   pVVar7 = (Variant*)Dictionary::operator [](in_RDX);
   iVar5 = Variant::operator_cast_to_int(pVVar7);
   *(int*)param_1 = iVar5;
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, "old_start");
   pVVar7 = (Variant*)Dictionary::operator [](in_RDX);
   iVar5 = Variant::operator_cast_to_int(pVVar7);
   *(int*)( param_1 + 4 ) = iVar5;
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_78, "diff_lines");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_Array((Variant*)&local_a8);
   Array::Array(local_b8);
   local_58[0] = 0;
   local_58[1] = 0;
   local_b0 = 0;
   local_50 = (undefined1[16])0x0;
   uVar11 = (uint)local_b8;
   Array::set_typed(uVar11, (StringName*)0x1b, (Variant*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   cVar4 = Array::is_same_typed(local_b8);
   if (cVar4 == '\0') {
      Array::assign(local_b8);
   }
 else {
      Array::_ref(local_b8);
   }

   Array::~Array((Array*)&local_a8);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   for (iVar5 = 0; iVar6 = Array::size(),iVar5 < iVar6; iVar5 = iVar5 + 1) {
      Array::operator [](uVar11);
      Variant::operator_cast_to_Dictionary((Variant*)&local_b0);
      _convert_diff_line((Variant*)&local_a8);
      Dictionary::~Dictionary((Dictionary*)&local_b0);
      if (*(long*)( param_1 + 0x10 ) == 0) {
         pauVar9 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])( param_1 + 0x10 ) = pauVar9;
         *(undefined4*)pauVar9[1] = 0;
         *pauVar9 = (undefined1[16])0x0;
      }

      puVar8 = (undefined8*)operator_new(0x40, DefaultAllocator::alloc);
      for (int i = 0; i < 3; i++) {
         *(undefined1(*) [16])( puVar8 + ( 2*i + 1 ) ) = (undefined1[16])0;
      }

      puVar8[7] = 0;
      *puVar8 = local_a8;
      lVar10 = local_a0;
      if (local_a0 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar8 + 1 ), (CowData*)&local_a0);
         lVar10 = puVar8[2];
      }

      if (local_98 != lVar10) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar8 + 2 ), (CowData*)&local_98);
      }

      lVar10 = local_90;
      if (puVar8[3] != local_90) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar8 + 3 ), (CowData*)&local_90);
      }

      lVar3 = local_88[0];
      if (puVar8[4] != local_88[0]) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar8 + 4 ), (CowData*)local_88);
      }

      plVar1 = *(long**)( param_1 + 0x10 );
      lVar2 = plVar1[1];
      puVar8[5] = 0;
      puVar8[7] = plVar1;
      puVar8[6] = lVar2;
      if (lVar2 != 0) {
         *(undefined8**)( lVar2 + 0x28 ) = puVar8;
      }

      plVar1[1] = (long)puVar8;
      if (*plVar1 == 0) {
         *plVar1 = (long)puVar8;
      }

      *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
      if (lVar3 != 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         lVar10 = local_90;
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_88[0] + -0x10 ), false);
            lVar10 = local_90;
         }

      }

      if (lVar10 != 0) {
         LOCK();
         plVar1 = (long*)( lVar10 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_90 + -0x10 ), false);
         }

      }

      if (local_98 != 0) {
         LOCK();
         plVar1 = (long*)( local_98 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_98 + -0x10 ), false);
         }

      }

      if (local_a0 != 0) {
         LOCK();
         plVar1 = (long*)( local_a0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_a0 + -0x10 ), false);
         }

      }

   }

   Array::~Array(local_b8);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* EditorVCSInterface::_convert_commit(Dictionary const&) */Dictionary *EditorVCSInterface::_convert_commit(Dictionary *param_1) {
   long *plVar1;
   char cVar2;
   long lVar3;
   Variant *pVVar4;
   long lVar5;
   Variant *in_RDX;
   long in_FS_OFFSET;
   long local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])param_1 = (undefined1[16])0x0;
   *(undefined8*)( param_1 + 0x10 ) = 0;
   Variant::Variant((Variant*)local_48, "message");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_String((Variant*)&local_50);
   lVar3 = local_50;
   lVar5 = *(long*)( param_1 + 8 );
   if (lVar5 == local_50) {
      if (lVar5 != 0) {
         LOCK();
         plVar1 = (long*)( lVar5 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

   }
 else {
      if (lVar5 != 0) {
         LOCK();
         plVar1 = (long*)( lVar5 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar5 = *(long*)( param_1 + 8 );
            *(undefined8*)( param_1 + 8 ) = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      *(long*)( param_1 + 8 ) = local_50;
   }

   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_48, "author");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_String((Variant*)&local_50);
   lVar3 = local_50;
   lVar5 = *(long*)param_1;
   if (lVar5 == local_50) {
      if (lVar5 == 0) goto LAB_0010222b;
      LOCK();
      plVar1 = (long*)( lVar5 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010222b;
      local_50 = 0;
      Memory::free_static((void*)( lVar3 + -0x10 ), false);
      cVar2 = Variant::needs_deinit[local_48[0]];
   }
 else {
      if (lVar5 != 0) {
         LOCK();
         plVar1 = (long*)( lVar5 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar5 = *(long*)param_1;
            *(undefined8*)param_1 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      *(long*)param_1 = local_50;
      LAB_0010222b:cVar2 = Variant::needs_deinit[local_48[0]];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_48, "unix_timestamp");
   pVVar4 = (Variant*)Dictionary::operator [](in_RDX);
   lVar5 = Variant::operator_cast_to_long(pVVar4);
   *(long*)( param_1 + 0x18 ) = lVar5;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_48, "offset_minutes");
   pVVar4 = (Variant*)Dictionary::operator [](in_RDX);
   lVar5 = Variant::operator_cast_to_long(pVVar4);
   *(long*)( param_1 + 0x20 ) = lVar5;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_48, "id");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_String((Variant*)&local_50);
   lVar3 = local_50;
   lVar5 = *(long*)( param_1 + 0x10 );
   if (lVar5 == local_50) {
      if (lVar5 != 0) {
         LOCK();
         plVar1 = (long*)( lVar5 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            cVar2 = Variant::needs_deinit[local_48[0]];
            goto joined_r0x00102371;
         }

      }

   }
 else {
      if (lVar5 != 0) {
         LOCK();
         plVar1 = (long*)( lVar5 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar5 = *(long*)( param_1 + 0x10 );
            *(undefined8*)( param_1 + 0x10 ) = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      *(long*)( param_1 + 0x10 ) = local_50;
   }

   cVar2 = Variant::needs_deinit[local_48[0]];
   joined_r0x00102371:if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorVCSInterface::_convert_status_file(Dictionary const&) */Dictionary *EditorVCSInterface::_convert_status_file(Dictionary *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   int iVar4;
   Variant *pVVar5;
   Variant *in_RDX;
   long in_FS_OFFSET;
   long local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( param_1 + 8 ) = 0;
   Variant::Variant((Variant*)local_48, "file_path");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_String((Variant*)&local_50);
   lVar3 = local_50;
   lVar2 = *(long*)( param_1 + 8 );
   if (lVar2 == local_50) {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
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
            lVar2 = *(long*)( param_1 + 8 );
            *(undefined8*)( param_1 + 8 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(long*)( param_1 + 8 ) = local_50;
   }

   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_48, "change_type");
   pVVar5 = (Variant*)Dictionary::operator [](in_RDX);
   iVar4 = Variant::operator_cast_to_int(pVVar5);
   *(int*)( param_1 + 4 ) = iVar4;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_48, "area");
   pVVar5 = (Variant*)Dictionary::operator [](in_RDX);
   iVar4 = Variant::operator_cast_to_int(pVVar5);
   *(int*)param_1 = iVar4;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* EditorVCSInterface::get_singleton() */undefined8 EditorVCSInterface::get_singleton(void) {
   return singleton;
}
/* EditorVCSInterface::set_singleton(EditorVCSInterface*) */void EditorVCSInterface::set_singleton(EditorVCSInterface *param_1) {
   singleton = param_1;
   return;
}
/* EditorVCSInterface::_convert_diff_file(Dictionary const&) */Dictionary *EditorVCSInterface::_convert_diff_file(Dictionary *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   char cVar4;
   int iVar5;
   Variant *in_RDX;
   int iVar6;
   uint uVar7;
   long in_FS_OFFSET;
   Array local_a8[8];
   long local_a0;
   long local_98[2];
   List<EditorVCSInterface::DiffLine,DefaultAllocator> local_88[16];
   int local_78[8];
   int local_58[2];
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])param_1 = (undefined1[16])0x0;
   *(undefined8*)( param_1 + 0x10 ) = 0;
   Variant::Variant((Variant*)local_58, "new_file");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_String((Variant*)local_98);
   lVar3 = local_98[0];
   lVar2 = *(long*)param_1;
   if (lVar2 == local_98[0]) {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_98[0] = 0;
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
            lVar2 = *(long*)param_1;
            *(undefined8*)param_1 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(long*)param_1 = local_98[0];
   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, "old_file");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_String((Variant*)local_98);
   lVar3 = local_98[0];
   lVar2 = *(long*)( param_1 + 8 );
   if (lVar2 == local_98[0]) {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_98[0] = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            cVar4 = Variant::needs_deinit[local_58[0]];
            goto joined_r0x001028ef;
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
            lVar2 = *(long*)( param_1 + 8 );
            *(undefined8*)( param_1 + 8 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(long*)( param_1 + 8 ) = local_98[0];
   }

   cVar4 = Variant::needs_deinit[local_58[0]];
   joined_r0x001028ef:if (cVar4 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_78, "diff_hunks");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_Array((Variant*)local_98);
   Array::Array(local_a8);
   local_58[0] = 0;
   local_58[1] = 0;
   local_a0 = 0;
   local_50 = (undefined1[16])0x0;
   uVar7 = (uint)local_a8;
   Array::set_typed(uVar7, (StringName*)0x1b, (Variant*)&local_a0);
   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   cVar4 = Array::is_same_typed(local_a8);
   if (cVar4 == '\0') {
      Array::assign(local_a8);
   }
 else {
      Array::_ref(local_a8);
   }

   Array::~Array((Array*)local_98);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   for (iVar6 = 0; iVar5 = Array::size(),iVar6 < iVar5; iVar6 = iVar6 + 1) {
      Array::operator [](uVar7);
      Variant::operator_cast_to_Dictionary((Variant*)&local_a0);
      _convert_diff_hunk((Variant*)local_98);
      Dictionary::~Dictionary((Dictionary*)&local_a0);
      List<EditorVCSInterface::DiffHunk,DefaultAllocator>::push_back((List<EditorVCSInterface::DiffHunk,DefaultAllocator>*)( param_1 + 0x10 ), (DiffHunk*)local_98);
      List<EditorVCSInterface::DiffLine,DefaultAllocator>::~List(local_88);
   }

   Array::~Array(local_a8);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorVCSInterface::create_vcs_metadata_files(EditorVCSInterface::VCSMetadata, String&) */void EditorVCSInterface::create_vcs_metadata_files(int param_1) {
   code *pcVar1;
   Object *pOVar2;
   char cVar3;
   Object *pOVar4;
   long in_FS_OFFSET;
   Object *local_60;
   undefined8 local_58;
   undefined8 local_50;
   Object *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != 1) goto LAB_001029b5;
   local_50 = 0;
   local_40 = 10;
   local_48 = (Object*)0x1149ee;
   String::parse_latin1((StrRange*)&local_50);
   String::path_join((String*)&local_48);
   FileAccess::open((String*)&local_60, (int)(String*)&local_48, (Error*)0x2);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   pOVar2 = local_60;
   if (local_60 == (Object*)0x0) {
      _err_print_error("create_vcs_metadata_files", "editor/editor_vcs_interface.cpp", 0x16e, "Method/function failed.", "Couldn\'t create .gitignore in project path.", 0, 0);
   }
 else {
      pcVar1 = *(code**)( *(long*)local_60 + 0x2b0 );
      local_50 = 0;
      local_48 = (Object*)0x114a2b;
      local_40 = 0x1b;
      String::parse_latin1((StrRange*)&local_50);
      ( *pcVar1 )(pOVar2, (StrRange*)&local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      pOVar2 = local_60;
      pcVar1 = *(code**)( *(long*)local_60 + 0x2b0 );
      local_50 = 0;
      local_48 = (Object*)0x114a47;
      local_40 = 7;
      String::parse_latin1((StrRange*)&local_50);
      ( *pcVar1 )(pOVar2, (StrRange*)&local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      pOVar2 = local_60;
      pcVar1 = *(code**)( *(long*)local_60 + 0x2b0 );
      local_50 = 0;
      local_48 = (Object*)0x114a4f;
      local_40 = 9;
      String::parse_latin1((StrRange*)&local_50);
      ( *pcVar1 )(pOVar2, (StrRange*)&local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      local_48 = (Object*)0x114a59;
      local_58 = 0;
      local_40 = 0xe;
      String::parse_latin1((StrRange*)&local_58);
      String::path_join((String*)&local_50);
      FileAccess::open((String*)&local_48, (int)(StrRange*)&local_50, (Error*)0x2);
      pOVar2 = local_60;
      pOVar4 = local_60;
      if (local_48 == local_60) {
         LAB_00102bc6:if (( ( pOVar4 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),pOVar2 = local_48,cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
         Memory::free_static(pOVar2, false);
      }

   }

   else{local_60 = local_48;
   if (local_48 != (Object*)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
         local_60 = (Object*)0x0;
      }

      pOVar4 = local_48;
      if (pOVar2 != (Object*)0x0) goto LAB_00102bb1;
      goto LAB_00102bc6;
   }

   if (pOVar2 != (Object*)0x0) {
      LAB_00102bb1:cVar3 = RefCounted::unreference();
      pOVar4 = local_48;
      if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler(pOVar2) ),pOVar4 = local_48,cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
         Memory::free_static(pOVar2, false);
         pOVar4 = local_48;
      }

      goto LAB_00102bc6;
   }

}
CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);pOVar2 = local_60;if (local_60 == (Object*)0x0) {
   _err_print_error("create_vcs_metadata_files", "editor/editor_vcs_interface.cpp", 0x176, "Method/function failed.", "Couldn\'t create .gitattributes in project path.", 0, 0);
}
 else {
   pcVar1 = *(code**)( *(long*)local_60 + 0x2b0 );
   local_50 = 0;
   local_48 = (Object*)0x116fa8;
   local_40 = 0x3c;
   String::parse_latin1((StrRange*)&local_50);
   ( *pcVar1 )(pOVar2, (StrRange*)&local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   pOVar2 = local_60;
   pcVar1 = *(code**)( *(long*)local_60 + 0x2b0 );
   local_50 = 0;
   local_48 = (Object*)0x114a68;
   local_40 = 0x12;
   String::parse_latin1((StrRange*)&local_50);
   ( *pcVar1 )(pOVar2);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
}
}if (( ( local_60 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),pOVar2 = local_60,cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);Memory::free_static(pOVar2, false);}LAB_001029b5:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* CowData<String>::_copy_on_write() [clone .isra.0] */void CowData<String>::_copy_on_write(CowData<String> *this) {
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
/* EditorVCSInterface::get_current_branch_name() */void EditorVCSInterface::get_current_branch_name(void) {
   undefined4 uVar1;
   size_t sVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   long *in_RSI;
   CowData<char32_t> *in_RDI;
   char *pcVar6;
   long in_FS_OFFSET;
   CowData<char32_t> *local_138;
   undefined8 local_128;
   String local_120[8];
   undefined8 local_118;
   String local_110[8];
   undefined8 local_108;
   long local_100;
   char *local_f8;
   long local_f0[5];
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
   ulong local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar4 = (long*)in_RSI[0x13];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)in_RDI = 0;
   if (plVar4 != (long*)0x0) {
      local_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, in_RSI + 0x62, 0, 0, &local_c8);
      if (local_c8 == 0) {
         Variant::operator_cast_to_String((Variant*)&local_f8);
         if (*(char**)in_RDI != local_f8) {
            CowData<char32_t>::_unref(in_RDI);
            pcVar6 = local_f8;
            local_f8 = (char*)0x0;
            *(char**)in_RDI = pcVar6;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010352d;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( in_RSI[1] != 0 ) && ( (char)in_RSI[99] == '\0' )) {
      local_c8 = 0;
      uStack_c4 = 0;
      local_b8 = (undefined1[16])0x0;
      local_f8 = "_get_current_branch_name";
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
      local_f0[0] = 0x18;
      String::parse_latin1((StrRange*)&local_c8);
      local_90 = CONCAT44(local_90._4_4_, 0x88);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = in_RSI[1];
      in_RSI[100] = 0;
      pcVar5 = *(code**)( lVar3 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "EditorVCSInterface");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar3 = local_100 != 0 )) goto LAB_00103a61;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_00103a76:lVar3 = in_RSI[1];
            pcVar5 = *(code**)( lVar3 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_00103907;
            lVar3 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ));
            in_RSI[100] = lVar3;
         }
 else {
            lVar3 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_00103a61:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar3 == 0) goto LAB_00103a76;
         }

         lVar3 = in_RSI[1];
      }
 else {
         lVar3 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), in_RSI + 0x62, uVar1);
         in_RSI[100] = lVar3;
         lVar3 = in_RSI[1];
      }

      LAB_00103907:if (*(char*)( lVar3 + 0x29 ) != '\0') {
         plVar4 = (long*)operator_new(0x18, "");
         *plVar4 = (long)( in_RSI + 100 );
         plVar4[1] = (long)( in_RSI + 99 );
         plVar4[2] = in_RSI[0x2d];
         in_RSI[0x2d] = (long)plVar4;
      }

      *(undefined1*)( in_RSI + 99 ) = 1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   }

   pcVar5 = (code*)in_RSI[100];
   if (pcVar5 == (code*)0x0) {
      if (_gdvirtual__get_current_branch_name_call(String & ::first_print != '\0') {
         local_f8 = (char*)0x0;
         local_c8 = 0x117018;
         uStack_c4 = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_c8 = 0x114aa3;
         uStack_c4 = 0;
         local_108 = 0;
         uStack_c0 = 0x18;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_118 = 0;
         local_c8 = 0x117aca;
         uStack_c4 = 0;
         uStack_c0 = 2;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_118);
         if (*(code**)( *in_RSI + 0x48 ) == get_class) {
            if (in_RSI[1] == 0) {
               local_128 = 0;
               local_c8 = 0x114fdc;
               uStack_c4 = 0;
               uStack_c0 = 0x12;
               uStack_bc = 0;
               String::parse_latin1((StrRange*)&local_128);
            }
 else {
               lVar3 = *(long*)( in_RSI[1] + 0x20 );
               if (lVar3 == 0) {
                  local_128 = 0;
               }
 else {
                  pcVar6 = *(char**)( lVar3 + 8 );
                  local_128 = 0;
                  if (pcVar6 == (char*)0x0) {
                     if (*(long*)( lVar3 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_128, (CowData*)( lVar3 + 0x10 ));
                     }

                  }
 else {
                     sVar2 = strlen(pcVar6);
                     local_c8 = (int)pcVar6;
                     uStack_c4 = ( undefined4 )((ulong)pcVar6 >> 0x20);
                     uStack_c0 = (undefined4)sVar2;
                     uStack_bc = ( undefined4 )(sVar2 >> 0x20);
                     String::parse_latin1((StrRange*)&local_128);
                  }

               }

            }

         }
 else {
            ( **(code**)( *in_RSI + 0x48 ) )();
         }

         local_138 = (CowData<char32_t>*)&local_128;
         operator+((char *)
         local_120,(String*)"Required virtual method ";
         String::operator +(local_110, local_120);
         String::operator +((String*)&local_100, local_110);
         String::operator +((String*)&local_c8, (String*)&local_100);
         _err_print_error("_gdvirtual__get_current_branch_name_call", "editor/editor_vcs_interface.h", 0x7c, (String*)&local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_120);
         CowData<char32_t>::_unref(local_138);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__get_current_branch_name_call(String&)::first_print =
         '\0';
      }

   }
 else {
      local_f8 = (char*)0x0;
      if (*(code**)( in_RSI[1] + 0xe0 ) == (code*)0x0) {
         ( *pcVar5 )(in_RSI[2], 0, (CowData*)&local_f8);
      }
 else {
         ( **(code**)( in_RSI[1] + 0xe0 ) )(in_RSI[2], in_RSI + 0x62, pcVar5, 0, (CowData*)&local_f8);
      }

      local_c8 = 0;
      uStack_c4 = 0;
      pcVar6 = local_f8;
      if (local_f8 != (char*)0x0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
         pcVar6 = (char*)CONCAT44(uStack_c4, local_c8);
      }

      if (*(char**)in_RDI != pcVar6) {
         CowData<char32_t>::_unref(in_RDI);
         *(char**)in_RDI = pcVar6;
         local_c8 = 0;
         uStack_c4 = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      pcVar6 = local_f8;
      if (local_f8 != (char*)0x0) {
         LOCK();
         plVar4 = (long*)( local_f8 + -0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            local_f8 = (char*)0x0;
            Memory::free_static(pcVar6 + -0x10, false);
         }

      }

   }

   LAB_0010352d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorVCSInterface::shut_down() */bool EditorVCSInterface::shut_down(EditorVCSInterface *this) {
   char *__s;
   undefined4 uVar1;
   size_t sVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   bool bVar7;
   CowData<char32_t> *local_130;
   undefined8 local_128;
   CowData<char32_t> local_120[8];
   undefined8 local_118;
   String local_110[8];
   undefined8 local_108;
   long local_100;
   char *local_f8;
   long local_f0[5];
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
   ulong local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar5 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar5 != (long*)0x0) {
      local_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 0x238, 0, 0, &local_c8);
      if (local_c8 == 0) {
         bVar7 = Variant::operator_cast_to_bool((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00103c0a;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x240] == (EditorVCSInterface)0x0 )) {
      local_c8 = 0;
      uStack_c4 = 0;
      local_b8 = (undefined1[16])0x0;
      local_f8 = "_shut_down";
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
      local_f0[0] = 10;
      String::parse_latin1((StrRange*)&local_c8);
      local_90 = CONCAT44(local_90._4_4_, 0x88);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x248 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "EditorVCSInterface");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar4 = local_100 != 0 )) goto LAB_001040e4;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_001040f9:lVar4 = *(long*)( this + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_00103f9b;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x238);
            *(undefined8*)( this + 0x248 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_001040e4:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar4 == 0) goto LAB_001040f9;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x238, uVar1);
         *(undefined8*)( this + 0x248 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_00103f9b:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x248 );
         plVar5[1] = (long)( this + 0x240 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x240] = (EditorVCSInterface)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   }

   pcVar6 = *(code**)( this + 0x248 );
   if (pcVar6 == (code*)0x0) {
      if (_gdvirtual__shut_down_call(bool&), ::first_print == '\0') {
         bVar7 = false;
      }
 else {
         local_f8 = (char*)0x0;
         local_c8 = 0x117018;
         uStack_c4 = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_c8 = 0x114af3;
         uStack_c4 = 0;
         local_108 = 0;
         uStack_c0 = 10;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_118 = 0;
         local_c8 = 0x117aca;
         uStack_c4 = 0;
         uStack_c0 = 2;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_118);
         if (*(code**)( *(long*)this + 0x48 ) == get_class) {
            if (*(long*)( this + 8 ) == 0) {
               local_128 = 0;
               local_c8 = 0x114fdc;
               uStack_c4 = 0;
               uStack_c0 = 0x12;
               uStack_bc = 0;
               String::parse_latin1((StrRange*)&local_128);
            }
 else {
               lVar4 = *(long*)( *(long*)( this + 8 ) + 0x20 );
               if (lVar4 == 0) {
                  local_128 = 0;
               }
 else {
                  __s = *(char**)( lVar4 + 8 );
                  local_128 = 0;
                  if (__s == (char*)0x0) {
                     if (*(long*)( lVar4 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_128, (CowData*)( lVar4 + 0x10 ));
                     }

                  }
 else {
                     sVar2 = strlen(__s);
                     local_c8 = (int)__s;
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
         _err_print_error("_gdvirtual__shut_down_call", "editor/editor_vcs_interface.h", 0x73, (String*)&local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref(local_120);
         CowData<char32_t>::_unref(local_130);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__shut_down_call(bool&)::first_print =
         '\0';
         bVar7 = false;
      }

   }
 else if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( *pcVar6 )(*(undefined8*)( this + 0x10 ), 0, &local_c8);
      bVar7 = local_c8._0_1_ != (String)0x0;
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x238, pcVar6, 0, &local_c8);
      bVar7 = local_c8._0_1_ != (String)0x0;
   }

   LAB_00103c0a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar7;
}
/* EditorVCSInterface::get_vcs_name() */void EditorVCSInterface::get_vcs_name(void) {
   char *__s;
   undefined4 uVar1;
   size_t sVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   long *in_RSI;
   CowData<char32_t> *in_RDI;
   long in_FS_OFFSET;
   CowData<char32_t> *local_138;
   undefined8 local_128;
   String local_120[8];
   undefined8 local_118;
   String local_110[8];
   undefined8 local_108;
   long local_100;
   long local_f8;
   long local_f0[5];
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
   ulong local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar4 = (long*)in_RSI[0x13];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)in_RDI = 0;
   if (plVar4 != (long*)0x0) {
      local_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, in_RSI + 0x4a, 0, 0, &local_c8);
      if (local_c8 == 0) {
         Variant::operator_cast_to_String((Variant*)&local_f8);
         if (*(long*)in_RDI != local_f8) {
            CowData<char32_t>::_unref(in_RDI);
            lVar3 = local_f8;
            local_f8 = 0;
            *(long*)in_RDI = lVar3;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010432d;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( in_RSI[1] != 0 ) && ( (char)in_RSI[0x4b] == '\0' )) {
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
      String::parse_latin1((String*)&local_c8, "_get_vcs_name");
      local_90 = CONCAT44(local_90._4_4_, 0x88);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = in_RSI[1];
      in_RSI[0x4c] = 0;
      pcVar5 = *(code**)( lVar3 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "EditorVCSInterface");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar3 = local_100 != 0 )) goto LAB_001048f1;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_00104906:lVar3 = in_RSI[1];
            pcVar5 = *(code**)( lVar3 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_001047a6;
            lVar3 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ));
            in_RSI[0x4c] = lVar3;
         }
 else {
            lVar3 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_001048f1:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar3 == 0) goto LAB_00104906;
         }

         lVar3 = in_RSI[1];
      }
 else {
         lVar3 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), in_RSI + 0x4a, uVar1);
         in_RSI[0x4c] = lVar3;
         lVar3 = in_RSI[1];
      }

      LAB_001047a6:if (*(char*)( lVar3 + 0x29 ) != '\0') {
         plVar4 = (long*)operator_new(0x18, "");
         *plVar4 = (long)( in_RSI + 0x4c );
         plVar4[1] = (long)( in_RSI + 0x4b );
         plVar4[2] = in_RSI[0x2d];
         in_RSI[0x2d] = (long)plVar4;
      }

      *(undefined1*)( in_RSI + 0x4b ) = 1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   }

   pcVar5 = (code*)in_RSI[0x4c];
   if (pcVar5 == (code*)0x0) {
      if (_gdvirtual__get_vcs_name_call(String & ::first_print != '\0') {
         local_f8 = 0;
         local_c8 = 0x117018;
         uStack_c4 = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_c8 = 0x114b19;
         uStack_c4 = 0;
         local_108 = 0;
         uStack_c0 = 0xd;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_118 = 0;
         local_c8 = 0x117aca;
         uStack_c4 = 0;
         uStack_c0 = 2;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_118);
         if (*(code**)( *in_RSI + 0x48 ) == get_class) {
            if (in_RSI[1] == 0) {
               local_128 = 0;
               local_c8 = 0x114fdc;
               uStack_c4 = 0;
               uStack_c0 = 0x12;
               uStack_bc = 0;
               String::parse_latin1((StrRange*)&local_128);
            }
 else {
               lVar3 = *(long*)( in_RSI[1] + 0x20 );
               if (lVar3 == 0) {
                  local_128 = 0;
               }
 else {
                  __s = *(char**)( lVar3 + 8 );
                  local_128 = 0;
                  if (__s == (char*)0x0) {
                     if (*(long*)( lVar3 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_128, (CowData*)( lVar3 + 0x10 ));
                     }

                  }
 else {
                     sVar2 = strlen(__s);
                     local_c8 = (int)__s;
                     uStack_c4 = ( undefined4 )((ulong)__s >> 0x20);
                     uStack_c0 = (undefined4)sVar2;
                     uStack_bc = ( undefined4 )(sVar2 >> 0x20);
                     String::parse_latin1((StrRange*)&local_128);
                  }

               }

            }

         }
 else {
            ( **(code**)( *in_RSI + 0x48 ) )();
         }

         local_138 = (CowData<char32_t>*)&local_128;
         operator+((char *)
         local_120,(String*)"Required virtual method ";
         String::operator +(local_110, local_120);
         String::operator +((String*)&local_100, local_110);
         String::operator +((String*)&local_c8, (String*)&local_100);
         _err_print_error("_gdvirtual__get_vcs_name_call", "editor/editor_vcs_interface.h", 0x74, (String*)&local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_120);
         CowData<char32_t>::_unref(local_138);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__get_vcs_name_call(String&)::first_print =
         '\0';
      }

      goto LAB_0010432d;
   }

   local_f8 = 0;
   if (*(code**)( in_RSI[1] + 0xe0 ) == (code*)0x0) {
      ( *pcVar5 )(in_RSI[2], 0, (CowData*)&local_f8);
      local_c8 = 0;
      uStack_c4 = 0;
      lVar3 = local_f8;
      if (local_f8 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
         lVar3 = CONCAT44(uStack_c4, local_c8);
      }

      if (lVar3 != *(long*)in_RDI) {
         CowData<char32_t>::_unref(in_RDI);
         *(long*)in_RDI = lVar3;
         local_c8 = 0;
         uStack_c4 = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   }
 else {
      ( **(code**)( in_RSI[1] + 0xe0 ) )(in_RSI[2], in_RSI + 0x4a, pcVar5, 0, (CowData*)&local_f8);
      local_c8 = 0;
      uStack_c4 = 0;
      if (local_f8 == 0) {
         lVar3 = 0;
         if (*(long*)in_RDI == 0) goto LAB_0010432d;
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
         lVar3 = CONCAT44(uStack_c4, local_c8);
         if (*(long*)in_RDI == lVar3) {
            if (lVar3 != 0) {
               LOCK();
               plVar4 = (long*)( lVar3 + -0x10 );
               *plVar4 = *plVar4 + -1;
               UNLOCK();
               if (*plVar4 == 0) {
                  Memory::free_static((void*)( CONCAT44(uStack_c4, local_c8) + -0x10 ), false);
               }

            }

            goto LAB_001042f3;
         }

      }

      CowData<char32_t>::_unref(in_RDI);
      *(long*)in_RDI = lVar3;
   }

   LAB_001042f3:lVar3 = local_f8;
   if (local_f8 != 0) {
      LOCK();
      plVar4 = (long*)( local_f8 + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         local_f8 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   LAB_0010432d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorVCSInterface::popup_error(String const&) */void EditorVCSInterface::popup_error(EditorVCSInterface *this, String *param_1) {
   long *plVar1;
   String *pSVar2;
   long lVar3;
   char *pcVar4;
   long in_FS_OFFSET;
   long local_80;
   long local_78;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   pSVar2 = EditorNode::singleton;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   get_vcs_name();
   local_58 = "";
   local_70 = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)&local_70);
   local_58 = "%s Error";
   local_78 = 0;
   local_50 = 8;
   String::parse_latin1((StrRange*)&local_78);
   TTR((String*)&local_68, (String*)&local_78);
   vformat<String>(&local_58, (String*)&local_68, &local_60);
   String::strip_edges(SUB81((String*)&local_80, 0), SUB81(param_1, 0));
   EditorNode::show_warning(pSVar2, (String*)&local_80);
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
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorVCSInterface::get_remotes() */undefined8 *EditorVCSInterface::get_remotes(void) {
   long lVar1;
   char cVar2;
   int iVar3;
   undefined4 uVar4;
   CowData<char32_t> *this;
   undefined1(*pauVar5)[16];
   long lVar6;
   long *plVar7;
   code *pcVar8;
   long *in_RSI;
   uint uVar9;
   undefined8 *in_RDI;
   int iVar10;
   long in_FS_OFFSET;
   List<String,DefaultAllocator> *local_170;
   Array local_150[8];
   CowData<char32_t> local_148[8];
   CowData<char32_t> local_140[8];
   undefined8 local_138;
   String local_130[8];
   long local_128;
   long local_120;
   undefined1(*local_118)[16];
   long local_110[5];
   int local_e8;
   undefined4 uStack_e4;
   undefined4 local_e0;
   undefined4 uStack_dc;
   undefined1 local_d8[16];
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8;
   undefined8 local_b0;
   undefined8 local_a8;
   undefined8 local_98;
   ulong local_90;
   undefined8 local_80;
   int local_78[8];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array(local_150);
   local_58 = 0;
   local_e8 = 0;
   uStack_e4 = 0;
   local_50 = (undefined1[16])0x0;
   uVar9 = (uint)local_150;
   Array::set_typed(uVar9, (StringName*)0x4, (Variant*)&local_e8);
   if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_e4, local_e8) != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar7 = (long*)in_RSI[0x13];
   if (plVar7 == (long*)0x0) {
      LAB_00104d3f:if (( in_RSI[1] != 0 ) && ( (char)in_RSI[0x54] == '\0' )) {
         local_e8 = 0;
         uStack_e4 = 0;
         local_d8 = (undefined1[16])0x0;
         local_e0 = 0;
         uStack_dc = 0;
         local_c8 = 0;
         local_c0 = 0;
         local_b8 = 6;
         local_b0 = 1;
         local_a8 = 0;
         local_98 = 0;
         local_90 = 0;
         local_80 = 0;
         String::parse_latin1((String*)&local_e8, "_get_remotes");
         local_b0 = CONCAT44(local_b0._4_4_, 0x88);
         GetTypeInfo<TypedArray<String>,void>::get_class_info((GetTypeInfo<TypedArray<String>,void>*)&local_118);
         PropertyInfo::operator =((PropertyInfo*)&local_e0, (PropertyInfo*)&local_118);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_118);
         local_90 = local_90 & 0xffffffff00000000;
         uVar4 = MethodInfo::get_compatibility_hash();
         in_RSI[0x55] = 0;
         lVar6 = in_RSI[1];
         pcVar8 = *(code**)( lVar6 + 0xd8 );
         if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar6 + 0xd0 ) ),pcVar8 == (code*)0x0) {
            local_128 = 0;
            String::parse_latin1((String*)&local_128, "EditorVCSInterface");
            StringName::StringName((StringName*)&local_120, (String*)&local_128, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_118, (StringName*)&local_120);
            if (local_110[0] == 0) {
               lVar6 = 0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_110);
               if (StringName::configured != '\0') goto LAB_001054d4;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
               LAB_001054f5:lVar6 = in_RSI[1];
               pcVar8 = *(code**)( lVar6 + 200 );
               if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar6 + 0xc0 ) ),pcVar8 == (code*)0x0) goto LAB_001053e6;
               lVar6 = ( *pcVar8 )(*(undefined8*)( lVar6 + 0xa0 ), in_RSI + 0x53);
               in_RSI[0x55] = lVar6;
            }
 else {
               lVar6 = *(long*)( local_110[0] + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_110);
               if (StringName::configured != '\0') {
                  LAB_001054d4:if (local_120 != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
               if (lVar6 == 0) goto LAB_001054f5;
            }

            lVar6 = in_RSI[1];
         }
 else {
            lVar6 = ( *pcVar8 )(*(undefined8*)( lVar6 + 0xa0 ), in_RSI + 0x53, uVar4);
            in_RSI[0x55] = lVar6;
            lVar6 = in_RSI[1];
         }

         LAB_001053e6:if (*(char*)( lVar6 + 0x29 ) != '\0') {
            plVar7 = (long*)operator_new(0x18, "");
            *plVar7 = (long)( in_RSI + 0x55 );
            plVar7[1] = (long)( in_RSI + 0x54 );
            plVar7[2] = in_RSI[0x2d];
            in_RSI[0x2d] = (long)plVar7;
         }

         *(undefined1*)( in_RSI + 0x54 ) = 1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_e8);
      }

      if (in_RSI[0x55] == 0) {
         if (_gdvirtual__get_remotes_call(TypedArray<String> & ::first_print != '\0') {
            local_118 = (undefined1(*) [16])0x0;
            local_e8 = 0x117018;
            uStack_e4 = 0;
            local_e0 = 0x23;
            uStack_dc = 0;
            String::parse_latin1((StrRange*)&local_118);
            local_128 = 0;
            local_e8 = 0x114b4e;
            uStack_e4 = 0;
            local_e0 = 0xc;
            uStack_dc = 0;
            String::parse_latin1((StrRange*)&local_128);
            local_e8 = 0x117aca;
            uStack_e4 = 0;
            local_138 = 0;
            local_e0 = 2;
            uStack_dc = 0;
            String::parse_latin1((StrRange*)&local_138);
            ( **(code**)( *in_RSI + 0x48 ) )(local_148);
            operator+((char *)
            local_140,(String*)"Required virtual method ";
            String::operator +(local_130, (String*)local_140);
            String::operator +((String*)&local_120, local_130);
            String::operator +((String*)&local_e8, (String*)&local_120);
            _err_print_error("_gdvirtual__get_remotes_call", "editor/editor_vcs_interface.h", 0x77, (Array*)&local_e8, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_130);
            CowData<char32_t>::_unref(local_140);
            CowData<char32_t>::_unref(local_148);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
            _gdvirtual__get_remotes_call(TypedArray<String>&)::first_print =
            '\0';
         }

         *in_RDI = 0;
         goto LAB_00104d6d;
      }

      Array::Array((Array*)&local_120);
      if (*(code**)( in_RSI[1] + 0xe0 ) == (code*)0x0) {
         ( *(code*)in_RSI[0x55] )(in_RSI[2], 0, (Array*)&local_120);
      }
 else {
         ( **(code**)( in_RSI[1] + 0xe0 ) )(in_RSI[2], in_RSI + 0x53, in_RSI[0x55], 0, (Array*)&local_120);
      }

      Array::Array((Array*)&local_e8);
      local_58 = 0;
      local_118 = (undefined1(*) [16])0x0;
      local_50 = (undefined1[16])0x0;
      Array::set_typed((uint)(Array*)&local_e8, (StringName*)0x4, (Variant*)&local_118);
      if (( StringName::configured != '\0' ) && ( local_118 != (undefined1(*) [16])0x0 )) {
         StringName::unref();
      }

      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      cVar2 = Array::is_same_typed((Array*)&local_e8);
      if (cVar2 == '\0') {
         Array::assign((Array*)&local_e8);
      }
 else {
         Array::_ref((Array*)&local_e8);
      }

      Array::operator =(local_150, (Array*)&local_e8);
      Array::~Array((Array*)&local_e8);
      Array::~Array((Array*)&local_120);
   }
 else {
      local_e8 = 0;
      uStack_e4 = 0;
      local_e0 = 0;
      ( **(code**)( *plVar7 + 0x60 ) )(local_78, plVar7, in_RSI + 0x53, 0, 0, (Array*)&local_e8);
      if (local_e8 != 0) {
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00104d3f;
      }

      Variant::operator_cast_to_Array((Variant*)&local_120);
      Array::Array((Array*)&local_118);
      local_58 = 0;
      local_128 = 0;
      local_50 = (undefined1[16])0x0;
      Array::set_typed((uint)(Array*)&local_118, (StringName*)0x4, (Variant*)&local_128);
      if (( StringName::configured != '\0' ) && ( local_128 != 0 )) {
         StringName::unref();
      }

      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      local_170 = (List<String,DefaultAllocator>*)&local_118;
      cVar2 = Array::is_same_typed((Array*)local_170);
      if (cVar2 == '\0') {
         Array::assign((Array*)local_170);
      }
 else {
         Array::_ref((Array*)local_170);
      }

      Array::~Array((Array*)&local_120);
      Array::operator =(local_150, (Array*)local_170);
      Array::~Array((Array*)local_170);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   local_170 = (List<String,DefaultAllocator>*)&local_118;
   local_118 = (undefined1(*) [16])0x0;
   pauVar5 = (undefined1(*) [16])0x0;
   for (iVar10 = 0; iVar3 = Array::size(),iVar10 < iVar3; iVar10 = iVar10 + 1) {
      Array::operator [](uVar9);
      Variant::operator_cast_to_String((Variant*)&local_e8);
      if (pauVar5 == (undefined1(*) [16])0x0) {
         pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined4*)pauVar5[1] = 0;
         *pauVar5 = (undefined1[16])0x0;
         local_118 = pauVar5;
      }

      this(CowData<char32_t> * operator_new(0x20, DefaultAllocator::alloc));
      *(undefined1(*) [16])this = (undefined1[16])0x0;
      *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
      lVar6 = CONCAT44(uStack_e4, local_e8);
      if (lVar6 != 0) {
         CowData<char32_t>::_ref(this, (CowData*)&local_e8);
         lVar6 = CONCAT44(uStack_e4, local_e8);
      }

      lVar1 = *(long*)( *pauVar5 + 8 );
      *(undefined8*)( this + 8 ) = 0;
      *(undefined1(**) [16])( this + 0x18 ) = pauVar5;
      *(long*)( this + 0x10 ) = lVar1;
      if (lVar1 != 0) {
         *(CowData<char32_t>**)( lVar1 + 8 ) = this;
      }

      lVar1 = *(long*)*pauVar5;
      *(CowData<char32_t>**)( *pauVar5 + 8 ) = this;
      if (lVar1 == 0) {
         *(CowData<char32_t>**)*pauVar5 = this;
      }

      *(int*)pauVar5[1] = *(int*)pauVar5[1] + 1;
      if (lVar6 != 0) {
         LOCK();
         plVar7 = (long*)( lVar6 + -0x10 );
         *plVar7 = *plVar7 + -1;
         UNLOCK();
         pauVar5 = local_118;
         if (*plVar7 == 0) {
            lVar6 = CONCAT44(uStack_e4, local_e8);
            local_e8 = 0;
            uStack_e4 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
            pauVar5 = local_118;
         }

      }

   }

   local_118 = (undefined1(*) [16])0x0;
   *in_RDI = pauVar5;
   List<String,DefaultAllocator>::~List(local_170);
   LAB_00104d6d:Array::~Array(local_150);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return in_RDI;
}
/* EditorVCSInterface::get_branch_list() */undefined8 *EditorVCSInterface::get_branch_list(void) {
   long lVar1;
   char cVar2;
   int iVar3;
   undefined4 uVar4;
   CowData<char32_t> *this;
   undefined1(*pauVar5)[16];
   long lVar6;
   long *plVar7;
   code *pcVar8;
   long *in_RSI;
   uint uVar9;
   undefined8 *in_RDI;
   int iVar10;
   long in_FS_OFFSET;
   List<String,DefaultAllocator> *local_170;
   Array local_150[8];
   CowData<char32_t> local_148[8];
   CowData<char32_t> local_140[8];
   undefined8 local_138;
   String local_130[8];
   long local_128;
   long local_120;
   undefined1(*local_118)[16];
   long local_110[5];
   int local_e8;
   undefined4 uStack_e4;
   undefined4 local_e0;
   undefined4 uStack_dc;
   undefined1 local_d8[16];
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8;
   undefined8 local_b0;
   undefined8 local_a8;
   undefined8 local_98;
   ulong local_90;
   undefined8 local_80;
   int local_78[8];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array(local_150);
   local_58 = 0;
   local_e8 = 0;
   uStack_e4 = 0;
   local_50 = (undefined1[16])0x0;
   uVar9 = (uint)local_150;
   Array::set_typed(uVar9, (StringName*)0x4, (Variant*)&local_e8);
   if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_e4, local_e8) != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar7 = (long*)in_RSI[0x13];
   if (plVar7 == (long*)0x0) {
      LAB_001056df:if (( in_RSI[1] != 0 ) && ( (char)in_RSI[0x51] == '\0' )) {
         local_e8 = 0;
         uStack_e4 = 0;
         local_d8 = (undefined1[16])0x0;
         local_e0 = 0;
         uStack_dc = 0;
         local_c8 = 0;
         local_c0 = 0;
         local_b8 = 6;
         local_b0 = 1;
         local_a8 = 0;
         local_98 = 0;
         local_90 = 0;
         local_80 = 0;
         String::parse_latin1((String*)&local_e8, "_get_branch_list");
         local_b0 = CONCAT44(local_b0._4_4_, 0x88);
         GetTypeInfo<TypedArray<String>,void>::get_class_info((GetTypeInfo<TypedArray<String>,void>*)&local_118);
         PropertyInfo::operator =((PropertyInfo*)&local_e0, (PropertyInfo*)&local_118);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_118);
         local_90 = local_90 & 0xffffffff00000000;
         uVar4 = MethodInfo::get_compatibility_hash();
         in_RSI[0x52] = 0;
         lVar6 = in_RSI[1];
         pcVar8 = *(code**)( lVar6 + 0xd8 );
         if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar6 + 0xd0 ) ),pcVar8 == (code*)0x0) {
            local_128 = 0;
            String::parse_latin1((String*)&local_128, "EditorVCSInterface");
            StringName::StringName((StringName*)&local_120, (String*)&local_128, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_118, (StringName*)&local_120);
            if (local_110[0] == 0) {
               lVar6 = 0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_110);
               if (StringName::configured != '\0') goto LAB_00105e74;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
               LAB_00105e95:lVar6 = in_RSI[1];
               pcVar8 = *(code**)( lVar6 + 200 );
               if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar6 + 0xc0 ) ),pcVar8 == (code*)0x0) goto LAB_00105d86;
               lVar6 = ( *pcVar8 )(*(undefined8*)( lVar6 + 0xa0 ), in_RSI + 0x50);
               in_RSI[0x52] = lVar6;
            }
 else {
               lVar6 = *(long*)( local_110[0] + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_110);
               if (StringName::configured != '\0') {
                  LAB_00105e74:if (local_120 != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
               if (lVar6 == 0) goto LAB_00105e95;
            }

            lVar6 = in_RSI[1];
         }
 else {
            lVar6 = ( *pcVar8 )(*(undefined8*)( lVar6 + 0xa0 ), in_RSI + 0x50, uVar4);
            in_RSI[0x52] = lVar6;
            lVar6 = in_RSI[1];
         }

         LAB_00105d86:if (*(char*)( lVar6 + 0x29 ) != '\0') {
            plVar7 = (long*)operator_new(0x18, "");
            *plVar7 = (long)( in_RSI + 0x52 );
            plVar7[1] = (long)( in_RSI + 0x51 );
            plVar7[2] = in_RSI[0x2d];
            in_RSI[0x2d] = (long)plVar7;
         }

         *(undefined1*)( in_RSI + 0x51 ) = 1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_e8);
      }

      if (in_RSI[0x52] == 0) {
         if (_gdvirtual__get_branch_list_call(TypedArray<String> & ::first_print != '\0') {
            local_118 = (undefined1(*) [16])0x0;
            local_e8 = 0x117018;
            uStack_e4 = 0;
            local_e0 = 0x23;
            uStack_dc = 0;
            String::parse_latin1((StrRange*)&local_118);
            local_128 = 0;
            local_e8 = 0x114b78;
            uStack_e4 = 0;
            local_e0 = 0x10;
            uStack_dc = 0;
            String::parse_latin1((StrRange*)&local_128);
            local_e8 = 0x117aca;
            uStack_e4 = 0;
            local_138 = 0;
            local_e0 = 2;
            uStack_dc = 0;
            String::parse_latin1((StrRange*)&local_138);
            ( **(code**)( *in_RSI + 0x48 ) )(local_148);
            operator+((char *)
            local_140,(String*)"Required virtual method ";
            String::operator +(local_130, (String*)local_140);
            String::operator +((String*)&local_120, local_130);
            String::operator +((String*)&local_e8, (String*)&local_120);
            _err_print_error("_gdvirtual__get_branch_list_call", "editor/editor_vcs_interface.h", 0x76, (Array*)&local_e8, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_130);
            CowData<char32_t>::_unref(local_140);
            CowData<char32_t>::_unref(local_148);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
            _gdvirtual__get_branch_list_call(TypedArray<String>&)::first_print =
            '\0';
         }

         *in_RDI = 0;
         goto LAB_0010570d;
      }

      Array::Array((Array*)&local_120);
      if (*(code**)( in_RSI[1] + 0xe0 ) == (code*)0x0) {
         ( *(code*)in_RSI[0x52] )(in_RSI[2], 0, (Array*)&local_120);
      }
 else {
         ( **(code**)( in_RSI[1] + 0xe0 ) )(in_RSI[2], in_RSI + 0x50, in_RSI[0x52], 0, (Array*)&local_120);
      }

      Array::Array((Array*)&local_e8);
      local_58 = 0;
      local_118 = (undefined1(*) [16])0x0;
      local_50 = (undefined1[16])0x0;
      Array::set_typed((uint)(Array*)&local_e8, (StringName*)0x4, (Variant*)&local_118);
      if (( StringName::configured != '\0' ) && ( local_118 != (undefined1(*) [16])0x0 )) {
         StringName::unref();
      }

      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      cVar2 = Array::is_same_typed((Array*)&local_e8);
      if (cVar2 == '\0') {
         Array::assign((Array*)&local_e8);
      }
 else {
         Array::_ref((Array*)&local_e8);
      }

      Array::operator =(local_150, (Array*)&local_e8);
      Array::~Array((Array*)&local_e8);
      Array::~Array((Array*)&local_120);
   }
 else {
      local_e8 = 0;
      uStack_e4 = 0;
      local_e0 = 0;
      ( **(code**)( *plVar7 + 0x60 ) )(local_78, plVar7, in_RSI + 0x50, 0, 0, (Array*)&local_e8);
      if (local_e8 != 0) {
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_001056df;
      }

      Variant::operator_cast_to_Array((Variant*)&local_120);
      Array::Array((Array*)&local_118);
      local_58 = 0;
      local_128 = 0;
      local_50 = (undefined1[16])0x0;
      Array::set_typed((uint)(Array*)&local_118, (StringName*)0x4, (Variant*)&local_128);
      if (( StringName::configured != '\0' ) && ( local_128 != 0 )) {
         StringName::unref();
      }

      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      local_170 = (List<String,DefaultAllocator>*)&local_118;
      cVar2 = Array::is_same_typed((Array*)local_170);
      if (cVar2 == '\0') {
         Array::assign((Array*)local_170);
      }
 else {
         Array::_ref((Array*)local_170);
      }

      Array::~Array((Array*)&local_120);
      Array::operator =(local_150, (Array*)local_170);
      Array::~Array((Array*)local_170);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   local_170 = (List<String,DefaultAllocator>*)&local_118;
   local_118 = (undefined1(*) [16])0x0;
   pauVar5 = (undefined1(*) [16])0x0;
   for (iVar10 = 0; iVar3 = Array::size(),iVar10 < iVar3; iVar10 = iVar10 + 1) {
      Array::operator [](uVar9);
      Variant::operator_cast_to_String((Variant*)&local_e8);
      if (pauVar5 == (undefined1(*) [16])0x0) {
         pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined4*)pauVar5[1] = 0;
         *pauVar5 = (undefined1[16])0x0;
         local_118 = pauVar5;
      }

      this(CowData<char32_t> * operator_new(0x20, DefaultAllocator::alloc));
      *(undefined1(*) [16])this = (undefined1[16])0x0;
      *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
      lVar6 = CONCAT44(uStack_e4, local_e8);
      if (lVar6 != 0) {
         CowData<char32_t>::_ref(this, (CowData*)&local_e8);
         lVar6 = CONCAT44(uStack_e4, local_e8);
      }

      lVar1 = *(long*)( *pauVar5 + 8 );
      *(undefined8*)( this + 8 ) = 0;
      *(undefined1(**) [16])( this + 0x18 ) = pauVar5;
      *(long*)( this + 0x10 ) = lVar1;
      if (lVar1 != 0) {
         *(CowData<char32_t>**)( lVar1 + 8 ) = this;
      }

      lVar1 = *(long*)*pauVar5;
      *(CowData<char32_t>**)( *pauVar5 + 8 ) = this;
      if (lVar1 == 0) {
         *(CowData<char32_t>**)*pauVar5 = this;
      }

      *(int*)pauVar5[1] = *(int*)pauVar5[1] + 1;
      if (lVar6 != 0) {
         LOCK();
         plVar7 = (long*)( lVar6 + -0x10 );
         *plVar7 = *plVar7 + -1;
         UNLOCK();
         pauVar5 = local_118;
         if (*plVar7 == 0) {
            lVar6 = CONCAT44(uStack_e4, local_e8);
            local_e8 = 0;
            uStack_e4 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
            pauVar5 = local_118;
         }

      }

   }

   local_118 = (undefined1(*) [16])0x0;
   *in_RDI = pauVar5;
   List<String,DefaultAllocator>::~List(local_170);
   LAB_0010570d:Array::~Array(local_150);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return in_RDI;
}
/* EditorVCSInterface::get_modified_files_data() */undefined8 *EditorVCSInterface::get_modified_files_data(void) {
   long lVar1;
   char cVar2;
   int iVar3;
   undefined4 uVar4;
   undefined8 *puVar5;
   undefined1(*pauVar6)[16];
   long lVar7;
   long *plVar8;
   code *pcVar9;
   int iVar10;
   long *in_RSI;
   uint uVar11;
   undefined8 *in_RDI;
   long in_FS_OFFSET;
   Variant *this;
   Array *pAVar12;
   Array *this_00;
   StrRange *this_01;
   Array local_150[8];
   CowData<char32_t> local_148[8];
   CowData<char32_t> local_140[8];
   undefined8 local_138;
   String local_130[8];
   long local_128;
   undefined1(*local_120)[16];
   long local_118;
   long local_110[5];
   int local_e8;
   undefined4 uStack_e4;
   undefined4 local_e0;
   undefined4 uStack_dc;
   undefined1 local_d8[16];
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8;
   undefined8 local_b0;
   undefined8 local_a8;
   undefined8 local_98;
   ulong local_90;
   undefined8 local_80;
   int local_78[8];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array(local_150);
   this(Variant * ) & local_e8;
   puVar5 = &local_58;
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   local_e8 = 0;
   uStack_e4 = 0;
   uVar11 = (uint)local_150;
   Array::set_typed(uVar11, (StringName*)0x1b, this);
   if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_e4, local_e8) != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar8 = (long*)in_RSI[0x13];
   if (plVar8 == (long*)0x0) {
      LAB_00106087:if (( in_RSI[1] != 0 ) && ( (char)in_RSI[0x36] == '\0' )) {
         local_d8 = (undefined1[16])0x0;
         local_e8 = 0;
         uStack_e4 = 0;
         local_e0 = 0;
         uStack_dc = 0;
         local_c8 = 0;
         local_c0 = 0;
         local_b8 = 6;
         local_b0 = 1;
         local_a8 = 0;
         local_98 = 0;
         local_90 = 0;
         local_80 = 0;
         String::parse_latin1((String*)this, "_get_modified_files_data");
         local_b0 = CONCAT44(local_b0._4_4_, 0x88);
         GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info((GetTypeInfo<TypedArray<Dictionary>,void>*)&local_118);
         PropertyInfo::operator =((PropertyInfo*)&local_e0, (PropertyInfo*)&local_118);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_118);
         local_90 = local_90 & 0xffffffff00000000;
         uVar4 = MethodInfo::get_compatibility_hash();
         in_RSI[0x37] = 0;
         lVar7 = in_RSI[1];
         pcVar9 = *(code**)( lVar7 + 0xd8 );
         if (( ( pcVar9 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar9 = *(code**)( lVar7 + 0xd0 ) ),pcVar9 == (code*)0x0) {
            local_128 = 0;
            String::parse_latin1((String*)&local_128, "EditorVCSInterface");
            StringName::StringName((StringName*)&local_120, (String*)&local_128, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_118, (StringName*)&local_120);
            if (local_110[0] == 0) {
               lVar7 = 0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_110);
               if (StringName::configured != '\0') goto LAB_0010680c;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
               LAB_00106829:lVar7 = in_RSI[1];
               pcVar9 = *(code**)( lVar7 + 200 );
               if (( ( pcVar9 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar9 = *(code**)( lVar7 + 0xc0 ) ),pcVar9 == (code*)0x0) goto LAB_0010672a;
               lVar7 = ( *pcVar9 )(*(undefined8*)( lVar7 + 0xa0 ), in_RSI + 0x35);
               in_RSI[0x37] = lVar7;
            }
 else {
               lVar7 = *(long*)( local_110[0] + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_110);
               if (StringName::configured != '\0') {
                  LAB_0010680c:if (local_120 != (undefined1(*) [16])0x0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
               if (lVar7 == 0) goto LAB_00106829;
            }

            lVar7 = in_RSI[1];
         }
 else {
            lVar7 = ( *pcVar9 )(*(undefined8*)( lVar7 + 0xa0 ), in_RSI + 0x35, uVar4);
            in_RSI[0x37] = lVar7;
            lVar7 = in_RSI[1];
         }

         LAB_0010672a:if (*(char*)( lVar7 + 0x29 ) != '\0') {
            plVar8 = (long*)operator_new(0x18, "");
            *plVar8 = (long)( in_RSI + 0x37 );
            plVar8[1] = (long)( in_RSI + 0x36 );
            plVar8[2] = in_RSI[0x2d];
            in_RSI[0x2d] = (long)plVar8;
         }

         *(undefined1*)( in_RSI + 0x36 ) = 1;
         MethodInfo::~MethodInfo((MethodInfo*)this);
      }

      if (in_RSI[0x37] == 0) {
         if (_gdvirtual__get_modified_files_data_call(TypedArray<Dictionary> & ::first_print != '\0') {
            local_118 = 0;
            local_e8 = 0x117018;
            uStack_e4 = 0;
            local_e0 = 0x23;
            uStack_dc = 0;
            String::parse_latin1((StrRange*)&local_118);
            local_128 = 0;
            local_e8 = 0x114b89;
            uStack_e4 = 0;
            this_01 = (StrRange*)&local_128;
            local_e0 = 0x18;
            uStack_dc = 0;
            String::parse_latin1(this_01);
            local_138 = 0;
            local_e8 = 0x117aca;
            uStack_e4 = 0;
            local_e0 = 2;
            uStack_dc = 0;
            String::parse_latin1((StrRange*)&local_138);
            ( **(code**)( *in_RSI + 0x48 ) )(local_148);
            operator+((char *)
            local_140,(String*)"Required virtual method ";
            String::operator +(local_130, (String*)local_140);
            String::operator +((String*)&local_120, local_130);
            String::operator +((String*)this, (String*)&local_120);
            _err_print_error("_gdvirtual__get_modified_files_data_call", "editor/editor_vcs_interface.h", 0x6d, this, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)this);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_130);
            CowData<char32_t>::_unref(local_140);
            CowData<char32_t>::_unref(local_148);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            CowData<char32_t>::_unref((CowData<char32_t>*)this_01);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
            _gdvirtual__get_modified_files_data_call(TypedArray<Dictionary>&)::first_print =
            '\0';
         }

         *in_RDI = 0;
         goto LAB_001060b5;
      }

      Array::Array((Array*)&local_120);
      if (*(code**)( in_RSI[1] + 0xe0 ) == (code*)0x0) {
         ( *(code*)in_RSI[0x37] )(in_RSI[2], 0, (Array*)&local_120);
      }
 else {
         ( **(code**)( in_RSI[1] + 0xe0 ) )(in_RSI[2], in_RSI + 0x35, in_RSI[0x37], 0, (Array*)&local_120);
      }

      pAVar12 = (Array*)this;
      Array::Array((Array*)this);
      local_58 = 0;
      local_118 = 0;
      local_50 = (undefined1[16])0x0;
      Array::set_typed((uint)this, (StringName*)0x1b, (Variant*)&local_118);
      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      this_00 = pAVar12;
      cVar2 = Array::is_same_typed(pAVar12);
      if (cVar2 == '\0') {
         Array::assign(this_00);
      }
 else {
         Array::_ref(pAVar12);
      }

      this(Variant * this_00);
      Array::operator =(local_150, this_00);
      Array::~Array(this_00);
      Array::~Array((Array*)&local_120);
   }
 else {
      local_e8 = 0;
      uStack_e4 = 0;
      local_e0 = 0;
      ( **(code**)( *plVar8 + 0x60 ) )(local_78, plVar8, in_RSI + 0x35, 0, 0, this, this, puVar5);
      if (local_e8 != 0) {
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00106087;
      }

      Variant::operator_cast_to_Array((Variant*)&local_120);
      Array::Array((Array*)&local_118);
      local_58 = 0;
      local_128 = 0;
      local_50 = (undefined1[16])0x0;
      Array::set_typed((uint)(Array*)&local_118, (StringName*)0x1b, (Variant*)&local_128);
      if (( StringName::configured != '\0' ) && ( local_128 != 0 )) {
         StringName::unref();
      }

      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      cVar2 = Array::is_same_typed((Array*)&local_118);
      if (cVar2 == '\0') {
         Array::assign((Array*)&local_118);
      }
 else {
         Array::_ref((Array*)&local_118);
      }

      Array::~Array((Array*)&local_120);
      Array::operator =(local_150, (Array*)&local_118);
      Array::~Array((Array*)&local_118);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   local_120 = (undefined1(*) [16])0x0;
   pauVar6 = (undefined1(*) [16])0x0;
   for (iVar10 = 0; iVar3 = Array::size(),iVar10 < iVar3; iVar10 = iVar10 + 1) {
      Array::operator [](uVar11);
      Variant::operator_cast_to_Dictionary((Variant*)&local_118);
      _convert_status_file(this);
      if (pauVar6 == (undefined1(*) [16])0x0) {
         pauVar6 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined4*)pauVar6[1] = 0;
         *pauVar6 = (undefined1[16])0x0;
         local_120 = pauVar6;
      }

      puVar5 = (undefined8*)operator_new(0x28, DefaultAllocator::alloc);
      *(undefined1(*) [16])( puVar5 + 1 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( puVar5 + 3 ) = (undefined1[16])0x0;
      *puVar5 = CONCAT44(uStack_e4, local_e8);
      lVar7 = CONCAT44(uStack_dc, local_e0);
      if (lVar7 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 1 ), (CowData*)&local_e0);
      }

      lVar1 = *(long*)( *pauVar6 + 8 );
      puVar5[2] = 0;
      puVar5[4] = pauVar6;
      puVar5[3] = lVar1;
      if (lVar1 != 0) {
         *(undefined8**)( lVar1 + 0x10 ) = puVar5;
      }

      lVar1 = *(long*)*pauVar6;
      *(undefined8**)( *pauVar6 + 8 ) = puVar5;
      if (lVar1 == 0) {
         *(undefined8**)*pauVar6 = puVar5;
      }

      *(int*)pauVar6[1] = *(int*)pauVar6[1] + 1;
      if (lVar7 != 0) {
         LOCK();
         plVar8 = (long*)( lVar7 + -0x10 );
         *plVar8 = *plVar8 + -1;
         UNLOCK();
         pauVar6 = local_120;
         if (*plVar8 == 0) {
            Memory::free_static((void*)( CONCAT44(uStack_dc, local_e0) + -0x10 ), false);
            pauVar6 = local_120;
         }

      }

      Dictionary::~Dictionary((Dictionary*)&local_118);
   }

   local_120 = (undefined1(*) [16])0x0;
   *in_RDI = pauVar6;
   List<EditorVCSInterface::StatusFile,DefaultAllocator>::~List((List<EditorVCSInterface::StatusFile,DefaultAllocator>*)&local_120);
   LAB_001060b5:Array::~Array(local_150);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return in_RDI;
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
/* EditorVCSInterface::get_diff(String const&, EditorVCSInterface::TreeArea) */undefined8 *EditorVCSInterface::get_diff(undefined8 *param_1, long *param_2, long *param_3, int param_4) {
   int iVar1;
   void *pvVar2;
   long lVar3;
   DiffHunk *pDVar4;
   long lVar5;
   char cVar6;
   int iVar7;
   long lVar8;
   CowData<char32_t> *this;
   undefined1(*pauVar9)[16];
   long lVar10;
   long *plVar11;
   code *pcVar12;
   uint uVar13;
   long in_FS_OFFSET;
   bool bVar14;
   Variant *local_1c8;
   List<EditorVCSInterface::DiffFile,DefaultAllocator> *local_1b0;
   Array local_1a8[8];
   long local_1a0;
   CowData<char32_t> local_198[8];
   CowData<char32_t> local_190[8];
   undefined8 local_188;
   undefined8 local_180;
   long local_178;
   undefined1(*local_170)[16];
   long local_168;
   long local_160[5];
   int local_138;
   undefined4 uStack_134;
   undefined4 local_130;
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
   int local_b8[8];
   CowData<char32_t> *local_98;
   undefined1 auStack_90[16];
   undefined8 local_78;
   undefined1 local_70[16];
   int local_60[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array(local_1a8);
   local_78 = 0;
   local_138 = 0;
   uStack_134 = 0;
   local_70 = (undefined1[16])0x0;
   uVar13 = (uint)local_1a8;
   Array::set_typed(uVar13, (StringName*)0x1b, (Variant*)&local_138);
   if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_134, local_138) != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   local_1a0 = 0;
   plVar11 = (long*)( *param_3 + -0x10 );
   if (*param_3 != 0) {
      do {
         lVar10 = *plVar11;
         if (lVar10 == 0) goto LAB_00106af7;
         LOCK();
         lVar8 = *plVar11;
         bVar14 = lVar10 == lVar8;
         if (bVar14) {
            *plVar11 = lVar10 + 1;
            lVar8 = lVar10;
         }

         UNLOCK();
      }
 while ( !bVar14 );
      if (lVar8 != -1) {
         local_1a0 = *param_3;
      }

   }

   LAB_00106af7:plVar11 = (long*)param_2[0x13];
   if (plVar11 == (long*)0x0) {
      LAB_00106bd4:if (( param_2[1] != 0 ) && ( (char)param_2[0x45] == '\0' )) {
         local_138 = 0;
         uStack_134 = 0;
         local_128 = (undefined1[16])0x0;
         local_130 = 0;
         uStack_12c = 0;
         local_118 = 0;
         local_110 = 0;
         local_108 = 6;
         local_100 = 1;
         local_f8[0] = 0;
         local_e8 = 0;
         local_e0 = 0;
         local_d0 = 0;
         String::parse_latin1((String*)&local_138, "_get_diff");
         local_100 = CONCAT44(local_100._4_4_, 0x88);
         GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info((GetTypeInfo<TypedArray<Dictionary>,void>*)&local_168);
         PropertyInfo::operator =((PropertyInfo*)&local_130, (PropertyInfo*)&local_168);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
         local_e0 = local_e0 & 0xffffffff00000000;
         GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_168);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_f8, (PropertyInfo*)&local_168);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
         Vector<int>::push_back(local_d8, 0);
         GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_168);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_f8, (PropertyInfo*)&local_168);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
         Vector<int>::push_back(local_d8, 3);
         MethodInfo::get_compatibility_hash();
         param_2[0x46] = 0;
         lVar10 = param_2[1];
         pcVar12 = *(code**)( lVar10 + 0xd8 );
         if (( ( pcVar12 == (code*)0x0 ) || ( *(long*)( lVar10 + 0xe0 ) == 0 ) ) && ( pcVar12 = *(code**)( lVar10 + 0xd0 ) ),pcVar12 == (code*)0x0) {
            local_178 = 0;
            String::parse_latin1((String*)&local_178, "EditorVCSInterface");
            StringName::StringName((StringName*)&local_170, (String*)&local_178, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_168, (StringName*)&local_170);
            if (local_160[0] == 0) {
               lVar10 = 0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_160);
               if (StringName::configured != '\0') goto LAB_0010770f;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
            }
 else {
               lVar10 = *(long*)( local_160[0] + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_160);
               if (StringName::configured != '\0') {
                  LAB_0010770f:if (local_170 != (undefined1(*) [16])0x0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
               if (lVar10 != 0) {
                  lVar10 = param_2[1];
                  goto LAB_001075b1;
               }

            }

            lVar10 = param_2[1];
            pcVar12 = *(code**)( lVar10 + 200 );
            if (( ( pcVar12 != (code*)0x0 ) && ( *(long*)( lVar10 + 0xe0 ) != 0 ) ) || ( pcVar12 = *(code**)( lVar10 + 0xc0 ) ),pcVar12 != (code*)0x0) {
               lVar10 = ( *pcVar12 )(*(undefined8*)( lVar10 + 0xa0 ));
               param_2[0x46] = lVar10;
               lVar10 = param_2[1];
            }

         }
 else {
            lVar10 = ( *pcVar12 )(*(undefined8*)( lVar10 + 0xa0 ));
            param_2[0x46] = lVar10;
            lVar10 = param_2[1];
         }

         LAB_001075b1:if (*(char*)( lVar10 + 0x29 ) != '\0') {
            plVar11 = (long*)operator_new(0x18, "");
            *plVar11 = (long)( param_2 + 0x46 );
            plVar11[1] = (long)( param_2 + 0x45 );
            plVar11[2] = param_2[0x2d];
            param_2[0x2d] = (long)plVar11;
         }

         *(undefined1*)( param_2 + 0x45 ) = 1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_138);
      }

      if (param_2[0x46] == 0) {
         lVar10 = local_1a0;
         if (_gdvirtual__get_diff_call(String, ,int, TypedArray<Dictionary> & ::first_print != '\0') {
            local_168 = 0;
            local_130 = 0x23;
            uStack_12c = 0;
            local_138 = 0x117018;
            uStack_134 = 0;
            String::parse_latin1((StrRange*)&local_168);
            local_138 = 0x114ba2;
            uStack_134 = 0;
            local_178 = 0;
            local_130 = 9;
            uStack_12c = 0;
            String::parse_latin1((StrRange*)&local_178);
            local_188 = 0;
            local_138 = 0x117aca;
            uStack_134 = 0;
            local_130 = 2;
            uStack_12c = 0;
            String::parse_latin1((StrRange*)&local_188);
            ( **(code**)( *param_2 + 0x48 ) )(local_198, param_2);
            operator+((char *)
            local_190,(String*)"Required virtual method ";
            String::operator +((String*)&local_180, (String*)local_190);
            String::operator +((String*)&local_170, (String*)&local_180);
            String::operator +((String*)&local_138, (String*)&local_170);
            _err_print_error("_gdvirtual__get_diff_call", "editor/editor_vcs_interface.h", 0x72, (Variant*)&local_138, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
            CowData<char32_t>::_unref(local_190);
            CowData<char32_t>::_unref(local_198);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
            _gdvirtual__get_diff_call(String,int,TypedArray<Dictionary>&)::first_print =
            '\0';
            lVar10 = local_1a0;
         }

         local_1a0 = lVar10;
         if (lVar10 != 0) {
            LOCK();
            plVar11 = (long*)( lVar10 + -0x10 );
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (*plVar11 == 0) {
               local_1a0 = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }

         }

         *param_1 = 0;
         goto LAB_00106c22;
      }

      local_180 = 0;
      if (local_1a0 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_180, (CowData*)&local_1a0);
      }

      local_178 = (long)param_4;
      auStack_90._0_8_ = &local_178;
      local_98 = (CowData<char32_t>*)&local_180;
      Array::Array((Array*)&local_170);
      if (*(code**)( param_2[1] + 0xe0 ) == (code*)0x0) {
         ( *(code*)param_2[0x46] )(param_2[2], &local_98, (Array*)&local_170);
      }
 else {
         ( **(code**)( param_2[1] + 0xe0 ) )(param_2[2], param_2 + 0x44, param_2[0x46], &local_98, (Array*)&local_170);
      }

      Array::Array((Array*)&local_138);
      local_78 = 0;
      local_168 = 0;
      local_70 = (undefined1[16])0x0;
      Array::set_typed((uint)(Variant*)&local_138, (StringName*)0x1b, (Variant*)&local_168);
      if (( StringName::configured != '\0' ) && ( local_168 != 0 )) {
         StringName::unref();
      }

      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      cVar6 = Array::is_same_typed((Array*)&local_138);
      if (cVar6 == '\0') {
         Array::assign((Array*)&local_138);
      }
 else {
         Array::_ref((Array*)&local_138);
      }

      Array::operator =(local_1a8, (Array*)&local_138);
      Array::~Array((Array*)&local_138);
      Array::~Array((Array*)&local_170);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   }
 else {
      local_138 = 0;
      uStack_134 = 0;
      local_130 = 0;
      Variant::Variant((Variant*)&local_78, (String*)&local_1a0);
      Variant::Variant((Variant*)local_60, param_4);
      local_c8 = (Variant*)&local_78;
      pVStack_c0 = (Variant*)local_60;
      ( **(code**)( *plVar11 + 0x60 ) )(local_b8, plVar11, param_2 + 0x44, &local_c8, 2, (Variant*)&local_138);
      if (local_138 != 0) {
         if (Variant::needs_deinit[local_b8[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00106bd4;
      }

      Variant::operator_cast_to_Array((Variant*)&local_170);
      Array::Array((Array*)&local_168);
      local_98 = (CowData<char32_t>*)0x0;
      local_178 = 0;
      auStack_90 = (undefined1[16])0x0;
      Array::set_typed((uint)(Array*)&local_168, (StringName*)0x1b, (Variant*)&local_178);
      if (( StringName::configured != '\0' ) && ( local_178 != 0 )) {
         StringName::unref();
      }

      if (Variant::needs_deinit[(int)local_98] != '\0') {
         Variant::_clear_internal();
      }

      local_1b0 = (List<EditorVCSInterface::DiffFile,DefaultAllocator>*)&local_170;
      local_1c8 = (Variant*)&local_168;
      cVar6 = Array::is_same_typed((Array*)local_1c8);
      if (cVar6 == '\0') {
         Array::assign((Array*)local_1c8);
      }
 else {
         Array::_ref((Array*)local_1c8);
      }

      Array::~Array((Array*)local_1b0);
      Array::operator =(local_1a8, (Array*)local_1c8);
      Array::~Array((Array*)local_1c8);
      if (Variant::needs_deinit[local_b8[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_60[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

   }

   lVar10 = local_1a0;
   local_1b0 = (List<EditorVCSInterface::DiffFile,DefaultAllocator>*)&local_170;
   local_1c8 = (Variant*)&local_168;
   if (local_1a0 != 0) {
      LOCK();
      plVar11 = (long*)( local_1a0 + -0x10 );
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
         local_1a0 = 0;
         Memory::free_static((void*)( lVar10 + -0x10 ), false);
      }

   }

   local_170 = (undefined1(*) [16])0x0;
   for (iVar1 = 0; pauVar9 = local_170,iVar7 = Array::size(),iVar1 < iVar7; iVar1 = iVar1 + 1) {
      Array::operator [](uVar13);
      Variant::operator_cast_to_Dictionary(local_1c8);
      _convert_diff_file((Variant*)&local_138);
      if (pauVar9 == (undefined1(*) [16])0x0) {
         pauVar9 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined4*)pauVar9[1] = 0;
         *pauVar9 = (undefined1[16])0x0;
         local_170 = pauVar9;
      }

      this(CowData<char32_t> * operator_new(0x30, DefaultAllocator::alloc));
      *(undefined1(*) [16])this = (undefined1[16])0x0;
      *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
      lVar8 = CONCAT44(uStack_134, local_138);
      lVar10 = 0;
      if (lVar8 != 0) {
         CowData<char32_t>::_ref(this, (CowData*)&local_138);
         lVar10 = *(long*)( this + 8 );
      }

      lVar5 = CONCAT44(uStack_12c, local_130);
      if (lVar10 != lVar5) {
         CowData<char32_t>::_ref(this + 8, (CowData*)&local_130);
      }

      plVar11 = *(long**)( this + 0x10 );
      if (plVar11 != (long*)0x0) {
         do {
            pvVar2 = (void*)*plVar11;
            if (pvVar2 == (void*)0x0) goto LAB_00106f67;
            if (*(long**)( (long)pvVar2 + 0x28 ) == plVar11) {
               lVar10 = *(long*)( (long)pvVar2 + 0x18 );
               lVar3 = *(long*)( (long)pvVar2 + 0x20 );
               *plVar11 = lVar10;
               if (pvVar2 == (void*)plVar11[1]) {
                  plVar11[1] = lVar3;
               }

               if (lVar3 != 0) {
                  *(long*)( lVar3 + 0x18 ) = lVar10;
                  lVar10 = *(long*)( (long)pvVar2 + 0x18 );
               }

               if (lVar10 != 0) {
                  *(long*)( lVar10 + 0x20 ) = lVar3;
               }

               List<EditorVCSInterface::DiffLine,DefaultAllocator>::~List((List<EditorVCSInterface::DiffLine,DefaultAllocator>*)( (long)pvVar2 + 0x10 ));
               Memory::free_static(pvVar2, false);
               *(int*)( plVar11 + 2 ) = (int)plVar11[2] + -1;
            }
 else {
               _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
            }

            plVar11 = *(long**)( this + 0x10 );
         }
 while ( (int)plVar11[2] != 0 );
         Memory::free_static(plVar11, false);
         *(undefined8*)( this + 0x10 ) = 0;
      }

      LAB_00106f67:if ((undefined8*)local_128._0_8_ != (undefined8*)0x0) {
         for (pDVar4 = *(DiffHunk**)local_128._0_8_; pDVar4 != (DiffHunk*)0x0; pDVar4 = *(DiffHunk**)( pDVar4 + 0x18 )) {
            List<EditorVCSInterface::DiffHunk,DefaultAllocator>::push_back((List<EditorVCSInterface::DiffHunk,DefaultAllocator>*)( this + 0x10 ), pDVar4);
         }

      }

      lVar10 = *(long*)( *pauVar9 + 8 );
      *(undefined8*)( this + 0x18 ) = 0;
      *(undefined1(**) [16])( this + 0x28 ) = pauVar9;
      *(long*)( this + 0x20 ) = lVar10;
      if (lVar10 != 0) {
         *(CowData<char32_t>**)( lVar10 + 0x18 ) = this;
      }

      lVar10 = *(long*)*pauVar9;
      *(CowData<char32_t>**)( *pauVar9 + 8 ) = this;
      if (lVar10 == 0) {
         *(CowData<char32_t>**)*pauVar9 = this;
      }

      *(int*)pauVar9[1] = *(int*)pauVar9[1] + 1;
      List<EditorVCSInterface::DiffHunk,DefaultAllocator>::~List((List<EditorVCSInterface::DiffHunk,DefaultAllocator>*)local_128);
      if (lVar5 != 0) {
         LOCK();
         plVar11 = (long*)( lVar5 + -0x10 );
         *plVar11 = *plVar11 + -1;
         UNLOCK();
         if (*plVar11 == 0) {
            Memory::free_static((void*)( CONCAT44(uStack_12c, local_130) + -0x10 ), false);
         }

         lVar8 = CONCAT44(uStack_134, local_138);
      }

      if (lVar8 != 0) {
         LOCK();
         plVar11 = (long*)( lVar8 + -0x10 );
         *plVar11 = *plVar11 + -1;
         UNLOCK();
         if (*plVar11 == 0) {
            Memory::free_static((void*)( CONCAT44(uStack_134, local_138) + -0x10 ), false);
         }

      }

      Dictionary::~Dictionary((Dictionary*)local_1c8);
   }

   local_170 = (undefined1(*) [16])0x0;
   *param_1 = pauVar9;
   List<EditorVCSInterface::DiffFile,DefaultAllocator>::~List(local_1b0);
   LAB_00106c22:Array::~Array(local_1a8);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorVCSInterface::get_line_diff(String const&, String const&) */String *EditorVCSInterface::get_line_diff(String *param_1, String *param_2) {
   char cVar1;
   int iVar2;
   undefined4 uVar3;
   long lVar4;
   undefined8 uVar5;
   long lVar6;
   long *plVar7;
   long *in_RCX;
   code *pcVar8;
   long *in_RDX;
   uint uVar9;
   int iVar10;
   long in_FS_OFFSET;
   bool bVar11;
   Array *local_1d0;
   Array local_1b0[8];
   long local_1a8;
   long local_1a0;
   CowData<char32_t> local_198[8];
   CowData<char32_t> local_190[8];
   undefined8 local_188;
   undefined8 local_180;
   long local_178;
   long local_170;
   long local_168;
   long local_160[5];
   int local_138;
   undefined4 uStack_134;
   undefined4 local_130;
   undefined4 uStack_12c;
   List<EditorVCSInterface::DiffLine,DefaultAllocator> local_128[16];
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
   int local_b8[8];
   CowData<char32_t> *local_98;
   undefined1 auStack_90[16];
   int local_78[2];
   undefined1 local_70[16];
   int local_60[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array(local_1b0);
   local_78[0] = 0;
   local_78[1] = 0;
   local_138 = 0;
   uStack_134 = 0;
   local_70 = (undefined1[16])0x0;
   uVar9 = (uint)local_1b0;
   Array::set_typed(uVar9, (StringName*)0x1b, (Variant*)&local_138);
   if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_134, local_138) != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   local_1a0 = 0;
   plVar7 = (long*)( *in_RCX + -0x10 );
   if (*in_RCX != 0) {
      do {
         lVar6 = *plVar7;
         if (lVar6 == 0) goto LAB_001078bb;
         LOCK();
         lVar4 = *plVar7;
         bVar11 = lVar6 == lVar4;
         if (bVar11) {
            *plVar7 = lVar6 + 1;
            lVar4 = lVar6;
         }

         UNLOCK();
      }
 while ( !bVar11 );
      if (lVar4 != -1) {
         local_1a0 = *in_RCX;
      }

   }

   LAB_001078bb:local_1a8 = 0;
   plVar7 = (long*)( *in_RDX + -0x10 );
   if (*in_RDX != 0) {
      do {
         lVar6 = *plVar7;
         if (lVar6 == 0) goto LAB_001078f1;
         LOCK();
         lVar4 = *plVar7;
         bVar11 = lVar6 == lVar4;
         if (bVar11) {
            *plVar7 = lVar6 + 1;
            lVar4 = lVar6;
         }

         UNLOCK();
      }
 while ( !bVar11 );
      if (lVar4 != -1) {
         local_1a8 = *in_RDX;
      }

   }

   LAB_001078f1:plVar7 = *(long**)( param_2 + 0x98 );
   if (plVar7 == (long*)0x0) {
      LAB_001079d0:if (( *(long*)( param_2 + 8 ) != 0 ) && ( param_2[0x390] == (String)0x0 )) {
         local_138 = 0;
         uStack_134 = 0;
         for (int i = 0; i < 16; i++) {
            local_128[i] = (List<EditorVCSInterface::DiffLine,DefaultAllocator>)0;
         }

         local_130 = 0;
         uStack_12c = 0;
         local_118 = 0;
         local_110 = 0;
         local_108 = 6;
         local_100 = 1;
         local_f8[0] = 0;
         local_e8 = 0;
         local_e0 = 0;
         local_d0 = 0;
         String::parse_latin1((String*)&local_138, "_get_line_diff");
         local_100 = CONCAT44(local_100._4_4_, 0x88);
         GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info((GetTypeInfo<TypedArray<Dictionary>,void>*)&local_168);
         PropertyInfo::operator =((PropertyInfo*)&local_130, (PropertyInfo*)&local_168);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
         local_e0 = local_e0 & 0xffffffff00000000;
         GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_168);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_f8, (PropertyInfo*)&local_168);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
         Vector<int>::push_back(local_d8, 0);
         GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_168);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_f8, (PropertyInfo*)&local_168);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
         Vector<int>::push_back(local_d8, 0);
         uVar3 = MethodInfo::get_compatibility_hash();
         *(undefined8*)( param_2 + 0x398 ) = 0;
         lVar6 = *(long*)( param_2 + 8 );
         pcVar8 = *(code**)( lVar6 + 0xd8 );
         if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar6 + 0xd0 ) ),pcVar8 == (code*)0x0) {
            local_178 = 0;
            String::parse_latin1((String*)&local_178, "EditorVCSInterface");
            StringName::StringName((StringName*)&local_170, (String*)&local_178, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_168, (StringName*)&local_170);
            if (local_160[0] == 0) {
               lVar6 = 0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_160);
               if (StringName::configured != '\0') goto LAB_001082fe;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
               LAB_0010831d:lVar6 = *(long*)( param_2 + 8 );
               pcVar8 = *(code**)( lVar6 + 200 );
               if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar6 + 0xc0 ) ),pcVar8 == (code*)0x0) goto LAB_001081dd;
               uVar5 = ( *pcVar8 )(*(undefined8*)( lVar6 + 0xa0 ));
               *(undefined8*)( param_2 + 0x398 ) = uVar5;
            }
 else {
               lVar6 = *(long*)( local_160[0] + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_160);
               if (StringName::configured != '\0') {
                  LAB_001082fe:if (local_170 != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
               if (lVar6 == 0) goto LAB_0010831d;
            }

            lVar6 = *(long*)( param_2 + 8 );
         }
 else {
            uVar5 = ( *pcVar8 )(*(undefined8*)( lVar6 + 0xa0 ), param_2 + 0x388, uVar3);
            *(undefined8*)( param_2 + 0x398 ) = uVar5;
            lVar6 = *(long*)( param_2 + 8 );
         }

         LAB_001081dd:if (*(char*)( lVar6 + 0x29 ) != '\0') {
            plVar7 = (long*)operator_new(0x18, "");
            *plVar7 = (long)( param_2 + 0x398 );
            plVar7[1] = (long)( param_2 + 0x390 );
            plVar7[2] = *(long*)( param_2 + 0x168 );
            *(long**)( param_2 + 0x168 ) = plVar7;
         }

         param_2[0x390] = (String)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_138);
      }

      if (*(long*)( param_2 + 0x398 ) != 0) {
         local_180 = 0;
         if (local_1a8 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_180, (CowData*)&local_1a8);
         }

         local_178 = 0;
         if (local_1a0 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_178, (CowData*)&local_1a0);
         }

         auStack_90._0_8_ = (CowData<char32_t>*)&local_178;
         local_98 = (CowData<char32_t>*)&local_180;
         Array::Array((Array*)&local_170);
         if (*(code**)( *(long*)( param_2 + 8 ) + 0xe0 ) == (code*)0x0) {
            ( **(code**)( param_2 + 0x398 ) )(*(undefined8*)( param_2 + 0x10 ), &local_98, (Array*)&local_170);
         }
 else {
            ( **(code**)( *(long*)( param_2 + 8 ) + 0xe0 ) )(*(undefined8*)( param_2 + 0x10 ), param_2 + 0x388, *(undefined8*)( param_2 + 0x398 ), &local_98, (Array*)&local_170);
         }

         Array::Array((Array*)&local_138);
         local_78[0] = 0;
         local_78[1] = 0;
         local_168 = 0;
         local_70 = (undefined1[16])0x0;
         Array::set_typed((uint)(String*)&local_138, (StringName*)0x1b, (Variant*)&local_168);
         if (( StringName::configured != '\0' ) && ( local_168 != 0 )) {
            StringName::unref();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         cVar1 = Array::is_same_typed((Array*)&local_138);
         if (cVar1 == '\0') {
            Array::assign((Array*)&local_138);
         }
 else {
            Array::_ref((Array*)&local_138);
         }

         Array::operator =(local_1b0, (Array*)&local_138);
         Array::~Array((Array*)&local_138);
         Array::~Array((Array*)&local_170);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
         goto LAB_00107e7c;
      }

      if (_gdvirtual__get_line_diff_call(String, String, TypedArray<Dictionary> & ::first_print != '\0') {
         local_168 = 0;
         local_138 = 0x117018;
         uStack_134 = 0;
         local_130 = 0x23;
         uStack_12c = 0;
         String::parse_latin1((StrRange*)&local_168);
         local_178 = 0;
         local_138 = 0x114bc6;
         uStack_134 = 0;
         local_130 = 0xe;
         uStack_12c = 0;
         String::parse_latin1((StrRange*)&local_178);
         local_138 = 0x117aca;
         uStack_134 = 0;
         local_188 = 0;
         local_130 = 2;
         uStack_12c = 0;
         String::parse_latin1((StrRange*)&local_188);
         ( **(code**)( *(long*)param_2 + 0x48 ) )(local_198, param_2);
         operator+((char *)
         local_190,(String*)"Required virtual method ";
         String::operator +((String*)&local_180, (String*)local_190);
         String::operator +((String*)&local_170, (String*)&local_180);
         String::operator +((String*)&local_138, (String*)&local_170);
         _err_print_error("_gdvirtual__get_line_diff_call", "editor/editor_vcs_interface.h", 0x81, (String*)&local_138, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
         bVar11 = false;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
         CowData<char32_t>::_unref(local_190);
         CowData<char32_t>::_unref(local_198);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
         _gdvirtual__get_line_diff_call(String,String,TypedArray<Dictionary>&)::first_print =
         '\0';
         if (local_1a8 == 0) goto LAB_00107cc8;
         goto LAB_00107a0a;
      }

      bVar11 = false;
      if (local_1a8 != 0) goto LAB_00107a0a;
      LAB_00107cc8:lVar6 = local_1a0;
      if (local_1a0 != 0) {
         LOCK();
         plVar7 = (long*)( local_1a0 + -0x10 );
         *plVar7 = *plVar7 + -1;
         UNLOCK();
         if (*plVar7 == 0) {
            local_1a0 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

      LAB_00107cf8:*(undefined8*)param_1 = 0;
   }
 else {
      local_138 = 0;
      uStack_134 = 0;
      local_130 = 0;
      Variant::Variant((Variant*)local_78, (String*)&local_1a8);
      Variant::Variant((Variant*)local_60, (String*)&local_1a0);
      local_c8 = (Variant*)local_78;
      pVStack_c0 = (Variant*)local_60;
      ( **(code**)( *plVar7 + 0x60 ) )(local_b8, plVar7, param_2 + 0x388, &local_c8, 2, (String*)&local_138);
      if (local_138 != 0) {
         if (Variant::needs_deinit[local_b8[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_001079d0;
      }

      Variant::operator_cast_to_Array((Variant*)&local_170);
      Array::Array((Array*)&local_168);
      local_98 = (CowData<char32_t>*)0x0;
      local_178 = 0;
      auStack_90 = (undefined1[16])0x0;
      Array::set_typed((uint)(Array*)&local_168, (StringName*)0x1b, (Variant*)&local_178);
      if (( StringName::configured != '\0' ) && ( local_178 != 0 )) {
         StringName::unref();
      }

      if (Variant::needs_deinit[(int)local_98] != '\0') {
         Variant::_clear_internal();
      }

      local_1d0 = (Array*)&local_168;
      cVar1 = Array::is_same_typed(local_1d0);
      if (cVar1 == '\0') {
         Array::assign(local_1d0);
      }
 else {
         Array::_ref(local_1d0);
      }

      Array::~Array((Array*)&local_170);
      Array::operator =(local_1b0, local_1d0);
      Array::~Array(local_1d0);
      if (Variant::needs_deinit[local_b8[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_60[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      LAB_00107e7c:lVar6 = local_1a0;
      bVar11 = true;
      if (local_1a8 == 0) {
         if (local_1a0 != 0) {
            LOCK();
            plVar7 = (long*)( local_1a0 + -0x10 );
            *plVar7 = *plVar7 + -1;
            UNLOCK();
            if (*plVar7 == 0) {
               local_1a0 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

      }
 else {
         LAB_00107a0a:lVar6 = local_1a8;
         LOCK();
         plVar7 = (long*)( local_1a8 + -0x10 );
         *plVar7 = *plVar7 + -1;
         UNLOCK();
         if (*plVar7 == 0) {
            local_1a8 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

         lVar6 = local_1a0;
         if (local_1a0 != 0) {
            LOCK();
            plVar7 = (long*)( local_1a0 + -0x10 );
            *plVar7 = *plVar7 + -1;
            UNLOCK();
            if (*plVar7 == 0) {
               local_1a0 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

         if (!bVar11) goto LAB_00107cf8;
      }

      local_170 = 0;
      for (iVar10 = 0; iVar2 = Array::size(),lVar6 = local_170,iVar10 < iVar2; iVar10 = iVar10 + 1) {
         Array::operator [](uVar9);
         Variant::operator_cast_to_Dictionary((Variant*)&local_168);
         _convert_diff_hunk((String*)&local_138);
         List<EditorVCSInterface::DiffHunk,DefaultAllocator>::push_back((List<EditorVCSInterface::DiffHunk,DefaultAllocator>*)&local_170, (DiffHunk*)&local_138);
         List<EditorVCSInterface::DiffLine,DefaultAllocator>::~List(local_128);
         Dictionary::~Dictionary((Dictionary*)&local_168);
      }

      local_170 = 0;
      *(long*)param_1 = lVar6;
      List<EditorVCSInterface::DiffHunk,DefaultAllocator>::~List((List<EditorVCSInterface::DiffHunk,DefaultAllocator>*)&local_170);
   }

   Array::~Array(local_1b0);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* EditorVCSInterface::get_previous_commits(int) */undefined8 *EditorVCSInterface::get_previous_commits(int param_1) {
   undefined8 uVar1;
   char cVar2;
   int iVar3;
   undefined4 uVar4;
   CowData<char32_t> *this;
   undefined1(*pauVar5)[16];
   long lVar6;
   long *plVar7;
   code *pcVar8;
   int in_EDX;
   int iVar9;
   long *in_RSI;
   uint uVar10;
   undefined4 in_register_0000003c;
   undefined8 *puVar11;
   long lVar12;
   long in_FS_OFFSET;
   Array local_180[8];
   CowData<char32_t> local_178[8];
   CowData<char32_t> local_170[8];
   undefined8 local_168;
   String local_160[8];
   long local_158;
   undefined1(*local_150)[16];
   long local_148;
   long local_140[5];
   int local_118;
   undefined4 uStack_114;
   undefined4 local_110;
   undefined4 uStack_10c;
   undefined1 local_108[16];
   undefined8 uStack_f8;
   undefined8 local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined8 local_d8[2];
   undefined8 local_c8;
   ulong local_c0;
   Vector<int> local_b8[8];
   undefined8 local_b0;
   Variant *local_a0;
   int local_98[8];
   long *local_78[4];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   puVar11 = (undefined8*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array(local_180);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   local_118 = 0;
   uStack_114 = 0;
   uVar10 = (uint)local_180;
   Array::set_typed(uVar10, (StringName*)0x1b, (Variant*)&local_118);
   if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_114, local_118) != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar7 = (long*)in_RSI[0x13];
   if (plVar7 == (long*)0x0) {
      LAB_00108561:if (( in_RSI[1] != 0 ) && ( (char)in_RSI[0x4e] == '\0' )) {
         local_108 = (undefined1[16])0x0;
         local_118 = 0;
         uStack_114 = 0;
         local_110 = 0;
         uStack_10c = 0;
         uStack_f8 = 0;
         local_f0 = 0;
         local_e8 = 6;
         local_e0 = 1;
         local_d8[0] = 0;
         local_c8 = 0;
         local_c0 = 0;
         local_b0 = 0;
         String::parse_latin1((String*)&local_118, "_get_previous_commits");
         local_e0 = CONCAT44(local_e0._4_4_, 0x88);
         GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info((GetTypeInfo<TypedArray<Dictionary>,void>*)&local_148);
         PropertyInfo::operator =((PropertyInfo*)&local_110, (PropertyInfo*)&local_148);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
         local_c0 = local_c0 & 0xffffffff00000000;
         GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_148);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
         Vector<int>::push_back(local_b8, 3);
         uVar4 = MethodInfo::get_compatibility_hash();
         in_RSI[0x4f] = 0;
         lVar6 = in_RSI[1];
         pcVar8 = *(code**)( lVar6 + 0xd8 );
         if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar6 + 0xd0 ) ),pcVar8 == (code*)0x0) {
            local_158 = 0;
            String::parse_latin1((String*)&local_158, "EditorVCSInterface");
            StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, (StringName*)&local_150);
            if (local_140[0] == 0) {
               lVar6 = 0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
               if (StringName::configured != '\0') goto LAB_00108e3d;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
               LAB_00108e5a:lVar6 = in_RSI[1];
               pcVar8 = *(code**)( lVar6 + 200 );
               if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar6 + 0xc0 ) ),pcVar8 == (code*)0x0) goto LAB_00108d35;
               lVar6 = ( *pcVar8 )(*(undefined8*)( lVar6 + 0xa0 ), in_RSI + 0x4d);
               in_RSI[0x4f] = lVar6;
            }
 else {
               lVar6 = *(long*)( local_140[0] + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
               if (StringName::configured != '\0') {
                  LAB_00108e3d:if (local_150 != (undefined1(*) [16])0x0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
               if (lVar6 == 0) goto LAB_00108e5a;
            }

            lVar6 = in_RSI[1];
         }
 else {
            lVar6 = ( *pcVar8 )(*(undefined8*)( lVar6 + 0xa0 ), in_RSI + 0x4d, uVar4);
            in_RSI[0x4f] = lVar6;
            lVar6 = in_RSI[1];
         }

         LAB_00108d35:if (*(char*)( lVar6 + 0x29 ) != '\0') {
            plVar7 = (long*)operator_new(0x18, "");
            *plVar7 = (long)( in_RSI + 0x4f );
            plVar7[1] = (long)( in_RSI + 0x4e );
            plVar7[2] = in_RSI[0x2d];
            in_RSI[0x2d] = (long)plVar7;
         }

         *(undefined1*)( in_RSI + 0x4e ) = 1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_118);
      }

      if (in_RSI[0x4f] == 0) {
         if (_gdvirtual__get_previous_commits_call(int,TypedArray<Dictionary> & ::first_print != '\0') {
            local_148 = 0;
            local_118 = 0x117018;
            uStack_114 = 0;
            local_110 = 0x23;
            uStack_10c = 0;
            String::parse_latin1((StrRange*)&local_148);
            local_158 = 0;
            local_118 = 0x114bd5;
            uStack_114 = 0;
            local_110 = 0x15;
            uStack_10c = 0;
            String::parse_latin1((StrRange*)&local_158);
            local_168 = 0;
            local_118 = 0x117aca;
            uStack_114 = 0;
            local_110 = 2;
            uStack_10c = 0;
            String::parse_latin1((StrRange*)&local_168);
            ( **(code**)( *in_RSI + 0x48 ) )(local_178);
            operator+((char *)
            local_170,(String*)"Required virtual method ";
            String::operator +(local_160, (String*)local_170);
            String::operator +((String*)&local_150, local_160);
            String::operator +((String*)&local_118, (String*)&local_150);
            _err_print_error("_gdvirtual__get_previous_commits_call", "editor/editor_vcs_interface.h", 0x75, (Variant*)&local_118, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_160);
            CowData<char32_t>::_unref(local_170);
            CowData<char32_t>::_unref(local_178);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
            _gdvirtual__get_previous_commits_call(int,TypedArray<Dictionary>&)::first_print =
            '\0';
         }

         *puVar11 = 0;
         goto LAB_0010858f;
      }

      local_158 = (long)in_EDX;
      local_78[0] = &local_158;
      Array::Array((Array*)&local_150);
      if (*(code**)( in_RSI[1] + 0xe0 ) == (code*)0x0) {
         ( *(code*)in_RSI[0x4f] )(in_RSI[2], local_78, (Array*)&local_150);
      }
 else {
         ( **(code**)( in_RSI[1] + 0xe0 ) )(in_RSI[2], in_RSI + 0x4d, in_RSI[0x4f], local_78, (Array*)&local_150);
      }

      Array::Array((Array*)&local_118);
      local_58 = 0;
      local_148 = 0;
      local_50 = (undefined1[16])0x0;
      Array::set_typed((uint)(Variant*)&local_118, (StringName*)0x1b, (Variant*)&local_148);
      if (( StringName::configured != '\0' ) && ( local_148 != 0 )) {
         StringName::unref();
      }

      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      cVar2 = Array::is_same_typed((Array*)&local_118);
      if (cVar2 == '\0') {
         Array::assign((Array*)&local_118);
      }
 else {
         Array::_ref((Array*)&local_118);
      }

      Array::operator =(local_180, (Array*)&local_118);
      Array::~Array((Array*)&local_118);
      Array::~Array((Array*)&local_150);
   }
 else {
      local_118 = 0;
      uStack_114 = 0;
      local_110 = 0;
      Variant::Variant((Variant*)local_98, in_EDX);
      local_a0 = (Variant*)local_98;
      ( **(code**)( *plVar7 + 0x60 ) )(local_78, plVar7, in_RSI + 0x4d, &local_a0, 1, (Variant*)&local_118);
      if (local_118 != 0) {
         if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00108561;
      }

      Variant::operator_cast_to_Array((Variant*)&local_150);
      Array::Array((Array*)&local_148);
      local_58 = 0;
      local_158 = 0;
      local_50 = (undefined1[16])0x0;
      Array::set_typed((uint)(Array*)&local_148, (StringName*)0x1b, (Variant*)&local_158);
      if (( StringName::configured != '\0' ) && ( local_158 != 0 )) {
         StringName::unref();
      }

      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      cVar2 = Array::is_same_typed((Array*)&local_148);
      if (cVar2 == '\0') {
         Array::assign((Array*)&local_148);
      }
 else {
         Array::_ref((Array*)&local_148);
      }

      Array::~Array((Array*)&local_150);
      Array::operator =(local_180, (Array*)&local_148);
      Array::~Array((Array*)&local_148);
      if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_98[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   local_150 = (undefined1(*) [16])0x0;
   for (iVar9 = 0; pauVar5 = local_150,iVar3 = Array::size(),iVar9 < iVar3; iVar9 = iVar9 + 1) {
      Array::operator [](uVar10);
      Variant::operator_cast_to_Dictionary((Variant*)&local_148);
      _convert_commit((Variant*)&local_118);
      if (pauVar5 == (undefined1(*) [16])0x0) {
         pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined4*)pauVar5[1] = 0;
         *pauVar5 = (undefined1[16])0x0;
         local_150 = pauVar5;
      }

      this(CowData<char32_t> * operator_new(0x40, DefaultAllocator::alloc));
      *(undefined8*)( this + 0x10 ) = 0;
      *(undefined1(*) [16])this = (undefined1[16])0x0;
      lVar6 = CONCAT44(uStack_114, local_118);
      *(undefined8*)( this + 0x38 ) = 0;
      *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
      if (lVar6 != 0) {
         CowData<char32_t>::_ref(this, (CowData*)&local_118);
         lVar6 = *(long*)( this + 8 );
      }

      lVar12 = CONCAT44(uStack_10c, local_110);
      if (lVar12 != lVar6) {
         CowData<char32_t>::_ref(this + 8, (CowData*)&local_110);
      }

      uVar1 = local_108._0_8_;
      if (*(long*)( this + 0x10 ) != local_108._0_8_) {
         CowData<char32_t>::_ref(this + 0x10, (CowData*)local_108);
      }

      lVar6 = *(long*)( *pauVar5 + 8 );
      *(undefined8*)( this + 0x28 ) = 0;
      *(undefined1(**) [16])( this + 0x38 ) = pauVar5;
      *(long*)( this + 0x30 ) = lVar6;
      *(undefined8*)( this + 0x18 ) = local_108._8_8_;
      *(undefined8*)( this + 0x20 ) = uStack_f8;
      if (lVar6 != 0) {
         *(CowData<char32_t>**)( lVar6 + 0x28 ) = this;
      }

      lVar6 = *(long*)*pauVar5;
      *(CowData<char32_t>**)( *pauVar5 + 8 ) = this;
      if (lVar6 == 0) {
         *(CowData<char32_t>**)*pauVar5 = this;
      }

      *(int*)pauVar5[1] = *(int*)pauVar5[1] + 1;
      if (uVar1 != 0) {
         LOCK();
         plVar7 = (long*)( uVar1 + -0x10 );
         *plVar7 = *plVar7 + -1;
         UNLOCK();
         if (*plVar7 == 0) {
            Memory::free_static((void*)( local_108._0_8_ + -0x10 ), false);
         }

         lVar12 = CONCAT44(uStack_10c, local_110);
      }

      if (lVar12 != 0) {
         LOCK();
         plVar7 = (long*)( lVar12 + -0x10 );
         *plVar7 = *plVar7 + -1;
         UNLOCK();
         if (*plVar7 == 0) {
            Memory::free_static((void*)( CONCAT44(uStack_10c, local_110) + -0x10 ), false);
         }

      }

      if (CONCAT44(uStack_114, local_118) != 0) {
         LOCK();
         plVar7 = (long*)( CONCAT44(uStack_114, local_118) + -0x10 );
         *plVar7 = *plVar7 + -1;
         UNLOCK();
         if (*plVar7 == 0) {
            Memory::free_static((void*)( CONCAT44(uStack_114, local_118) + -0x10 ), false);
         }

      }

      Dictionary::~Dictionary((Dictionary*)&local_148);
   }

   local_150 = (undefined1(*) [16])0x0;
   *puVar11 = pauVar5;
   List<EditorVCSInterface::Commit,DefaultAllocator>::~List((List<EditorVCSInterface::Commit,DefaultAllocator>*)&local_150);
   LAB_0010858f:Array::~Array(local_180);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar11;
}
/* EditorVCSInterface::_bind_methods() */void EditorVCSInterface::_bind_methods(void) {
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
   undefined *puVar14;
   undefined *puVar15;
   undefined8 uVar16;
   MethodBind *pMVar17;
   uint uVar18;
   long lVar19;
   long *plVar20;
   long in_FS_OFFSET;
   long local_258;
   long local_250;
   long local_248;
   long local_240;
   long local_238;
   undefined8 local_230;
   char *local_228;
   long local_220;
   long local_218;
   long local_208;
   char *local_1f8;
   undefined8 local_1f0;
   undefined1 local_1e8[16];
   undefined8 local_1d8;
   undefined8 local_1d0;
   undefined8 local_1c8;
   undefined8 local_1c0;
   undefined8 local_1b8[2];
   undefined8 local_1a8;
   ulong local_1a0;
   Vector<int> local_198[8];
   undefined8 local_190;
   char *local_188;
   char *pcStack_180;
   undefined8 local_178;
   char *local_168;
   char *pcStack_160;
   undefined8 local_158;
   char *local_148;
   char *pcStack_140;
   undefined8 local_138;
   char *local_128;
   char *pcStack_120;
   undefined *local_118;
   undefined8 local_110;
   char *local_108;
   char *pcStack_100;
   char *local_f8;
   char *pcStack_f0;
   undefined8 local_e8;
   char *local_d8;
   char *pcStack_d0;
   char *local_c8;
   char *pcStack_c0;
   undefined8 local_b8;
   char *local_a8;
   char *pcStack_a0;
   undefined *local_98;
   char *pcStack_90;
   char *local_88;
   undefined8 local_80;
   char **local_78;
   undefined1 auStack_70[16];
   char **ppcStack_60;
   char **local_58;
   long local_40;
   puVar15 = PTR__LC89_0011eaf0;
   puVar14 = PTR__LC6_0011eae8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_230 = 0;
   local_228 = (char*)0x0;
   local_1f8 = "project_path";
   local_1f0 = 0xc;
   String::parse_latin1((StrRange*)&local_228);
   local_1f8 = (char*)0x0;
   if (local_228 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_228);
   }

   Vector<String>::push_back((Vector<String>*)&local_238, (CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   local_1e8 = (undefined1[16])0x0;
   local_228 = "_initialize";
   local_1f8 = (char*)0x0;
   local_1f0 = 0;
   local_1d8 = 0;
   local_1d0 = 0;
   local_1c8 = 6;
   local_1c0 = 1;
   local_1b8[0] = 0;
   local_1a8 = 0;
   local_1a0 = 0;
   local_190 = 0;
   local_220 = 0xb;
   String::parse_latin1((StrRange*)&local_1f8);
   local_1c0 = CONCAT44(local_1c0._4_4_, 0x88);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_228);
   PropertyInfo::operator =((PropertyInfo*)&local_1f0, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   local_1a0 = local_1a0 & 0xffffffff00000000;
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_228);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1b8, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   Vector<int>::push_back(local_198, 0);
   local_240 = 0;
   local_228 = "EditorVCSInterface";
   local_220 = 0x12;
   String::parse_latin1((StrRange*)&local_240);
   StringName::StringName((StringName*)&local_228, (String*)&local_240, false);
   ClassDB::add_virtual_method((StringName*)&local_228, (MethodInfo*)&local_1f8, true, (Vector*)&local_238, false);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   MethodInfo::~MethodInfo((MethodInfo*)&local_1f8);
   CowData<String>::_unref((CowData<String>*)&local_230);
   local_230 = 0;
   local_228 = (char*)0x0;
   local_1f8 = "username";
   local_1f0 = 8;
   String::parse_latin1((StrRange*)&local_228);
   local_1f8 = (char*)0x0;
   if (local_228 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_228);
   }

   Vector<String>::push_back((Vector<String>*)&local_238, (CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   local_258 = 0;
   local_1f8 = "password";
   local_1f0 = 8;
   String::parse_latin1((StrRange*)&local_258);
   local_1f8 = (char*)0x0;
   if (local_258 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_258);
   }

   Vector<String>::push_back((Vector<String>*)&local_238, (CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   local_240 = 0;
   local_1f8 = "ssh_public_key_path";
   local_1f0 = 0x13;
   String::parse_latin1((StrRange*)&local_240);
   local_1f8 = (char*)0x0;
   if (local_240 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_240);
   }

   Vector<String>::push_back((Vector<String>*)&local_238, (CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   local_250 = 0;
   local_1f8 = "ssh_private_key_path";
   local_1f0 = 0x14;
   String::parse_latin1((StrRange*)&local_250);
   local_1f8 = (char*)0x0;
   if (local_250 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_250);
   }

   Vector<String>::push_back((Vector<String>*)&local_238, (CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   local_248 = 0;
   local_1f8 = "ssh_passphrase";
   local_1f0 = 0xe;
   String::parse_latin1((StrRange*)&local_248);
   local_1f8 = (char*)0x0;
   if (local_248 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_248);
   }

   Vector<String>::push_back((Vector<String>*)&local_238, (CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_248);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_250);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_258);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   local_1e8 = (undefined1[16])0x0;
   local_228 = "_set_credentials";
   local_1f8 = (char*)0x0;
   local_1f0 = 0;
   local_1d8 = 0;
   local_1d0 = 0;
   local_1c8 = 6;
   local_1c0 = 1;
   local_1b8[0] = 0;
   local_1a8 = 0;
   local_1a0 = 0;
   local_190 = 0;
   local_220 = 0x10;
   String::parse_latin1((StrRange*)&local_1f8);
   local_1c0 = CONCAT44(local_1c0._4_4_, 0x88);
   for (int i = 0; i < 5; i++) {
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_228);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1b8, (PropertyInfo*)&local_228);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
      Vector<int>::push_back(local_198, 0);
   }

   local_240 = 0;
   local_228 = "EditorVCSInterface";
   local_220 = 0x12;
   String::parse_latin1((StrRange*)&local_240);
   StringName::StringName((StringName*)&local_228, (String*)&local_240, false);
   ClassDB::add_virtual_method((StringName*)&local_228, (MethodInfo*)&local_1f8, true, (Vector*)&local_238, false);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   MethodInfo::~MethodInfo((MethodInfo*)&local_1f8);
   CowData<String>::_unref((CowData<String>*)&local_230);
   local_1e8 = (undefined1[16])0x0;
   local_228 = "_get_modified_files_data";
   local_230 = 0;
   local_1f8 = (char*)0x0;
   local_1f0 = 0;
   local_1d8 = 0;
   local_1d0 = 0;
   local_1c8 = 6;
   local_1c0 = 1;
   local_1b8[0] = 0;
   local_1a8 = 0;
   local_1a0 = 0;
   local_190 = 0;
   local_220 = 0x18;
   String::parse_latin1((StrRange*)&local_1f8);
   local_1c0 = CONCAT44(local_1c0._4_4_, 0x88);
   GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info((GetTypeInfo<TypedArray<Dictionary>,void>*)&local_228);
   PropertyInfo::operator =((PropertyInfo*)&local_1f0, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   local_1a0 = local_1a0 & 0xffffffff00000000;
   local_240 = 0;
   local_228 = "EditorVCSInterface";
   local_220 = 0x12;
   String::parse_latin1((StrRange*)&local_240);
   StringName::StringName((StringName*)&local_228, (String*)&local_240, false);
   ClassDB::add_virtual_method((StringName*)&local_228, (MethodInfo*)&local_1f8, true, (Vector*)&local_238, false);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   MethodInfo::~MethodInfo((MethodInfo*)&local_1f8);
   CowData<String>::_unref((CowData<String>*)&local_230);
   local_230 = 0;
   local_228 = (char*)0x0;
   local_1f8 = "file_path";
   local_1f0 = 9;
   String::parse_latin1((StrRange*)&local_228);
   local_1f8 = (char*)0x0;
   if (local_228 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_228);
   }

   Vector<String>::push_back((Vector<String>*)&local_238, (CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   local_1e8 = (undefined1[16])0x0;
   local_228 = "_stage_file";
   local_1f8 = (char*)0x0;
   local_1f0 = 0;
   local_1d8 = 0;
   local_1d0 = 0;
   local_1c8 = 6;
   local_1c0 = 1;
   local_1b8[0] = 0;
   local_1a8 = 0;
   local_1a0 = 0;
   local_190 = 0;
   local_220 = 0xb;
   String::parse_latin1((StrRange*)&local_1f8);
   local_1c0 = CONCAT44(local_1c0._4_4_, 0x88);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_228);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1b8, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   Vector<int>::push_back(local_198, 0);
   local_240 = 0;
   local_228 = "EditorVCSInterface";
   local_220 = 0x12;
   String::parse_latin1((StrRange*)&local_240);
   StringName::StringName((StringName*)&local_228, (String*)&local_240, false);
   ClassDB::add_virtual_method((StringName*)&local_228, (MethodInfo*)&local_1f8, true, (Vector*)&local_238, false);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   MethodInfo::~MethodInfo((MethodInfo*)&local_1f8);
   CowData<String>::_unref((CowData<String>*)&local_230);
   local_230 = 0;
   local_228 = (char*)0x0;
   local_1f8 = "file_path";
   local_1f0 = 9;
   String::parse_latin1((StrRange*)&local_228);
   local_1f8 = (char*)0x0;
   if (local_228 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_228);
   }

   Vector<String>::push_back((Vector<String>*)&local_238, (CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   local_1e8 = (undefined1[16])0x0;
   local_228 = "_unstage_file";
   local_1f8 = (char*)0x0;
   local_1f0 = 0;
   local_1d8 = 0;
   local_1d0 = 0;
   local_1c8 = 6;
   local_1c0 = 1;
   local_1b8[0] = 0;
   local_1a8 = 0;
   local_1a0 = 0;
   local_190 = 0;
   local_220 = 0xd;
   String::parse_latin1((StrRange*)&local_1f8);
   local_1c0 = CONCAT44(local_1c0._4_4_, 0x88);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_228);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1b8, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   Vector<int>::push_back(local_198, 0);
   local_240 = 0;
   local_228 = "EditorVCSInterface";
   local_220 = 0x12;
   String::parse_latin1((StrRange*)&local_240);
   StringName::StringName((StringName*)&local_228, (String*)&local_240, false);
   ClassDB::add_virtual_method((StringName*)&local_228, (MethodInfo*)&local_1f8, true, (Vector*)&local_238, false);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   MethodInfo::~MethodInfo((MethodInfo*)&local_1f8);
   CowData<String>::_unref((CowData<String>*)&local_230);
   local_230 = 0;
   local_228 = (char*)0x0;
   local_1f8 = "file_path";
   local_1f0 = 9;
   String::parse_latin1((StrRange*)&local_228);
   local_1f8 = (char*)0x0;
   if (local_228 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_228);
   }

   Vector<String>::push_back((Vector<String>*)&local_238, (CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   local_1e8 = (undefined1[16])0x0;
   local_228 = "_discard_file";
   local_1f8 = (char*)0x0;
   local_1f0 = 0;
   local_1d8 = 0;
   local_1d0 = 0;
   local_1c8 = 6;
   local_1c0 = 1;
   local_1b8[0] = 0;
   local_1a8 = 0;
   local_1a0 = 0;
   local_190 = 0;
   local_220 = 0xd;
   String::parse_latin1((StrRange*)&local_1f8);
   local_1c0 = CONCAT44(local_1c0._4_4_, 0x88);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_228);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1b8, (PropertyInfo*)&local_228);
   lVar1 = local_208;
   if (local_208 != 0) {
      LOCK();
      plVar20 = (long*)( local_208 + -0x10 );
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (*plVar20 == 0) {
         local_208 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_218 != 0 )) {
      StringName::unref();
   }

   lVar1 = local_220;
   if (local_220 != 0) {
      LOCK();
      plVar20 = (long*)( local_220 + -0x10 );
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (*plVar20 == 0) {
         local_220 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_198, 0);
   local_240 = 0;
   local_228 = "EditorVCSInterface";
   local_220 = 0x12;
   String::parse_latin1((StrRange*)&local_240);
   StringName::StringName((StringName*)&local_228, (String*)&local_240, false);
   ClassDB::add_virtual_method((StringName*)&local_228, (MethodInfo*)&local_1f8, true, (Vector*)&local_238, false);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   MethodInfo::~MethodInfo((MethodInfo*)&local_1f8);
   CowData<String>::_unref((CowData<String>*)&local_230);
   local_230 = 0;
   local_228 = (char*)0x0;
   local_1f8 = "msg";
   local_1f0 = 3;
   String::parse_latin1((StrRange*)&local_228);
   local_1f8 = (char*)0x0;
   if (local_228 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_228);
   }

   Vector<String>::push_back((Vector<String>*)&local_238, (CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   local_1e8 = (undefined1[16])0x0;
   local_228 = "_commit";
   local_1f8 = (char*)0x0;
   local_1f0 = 0;
   local_1d8 = 0;
   local_1d0 = 0;
   local_1c8 = 6;
   local_1c0 = 1;
   local_1b8[0] = 0;
   local_1a8 = 0;
   local_1a0 = 0;
   local_190 = 0;
   local_220 = 7;
   String::parse_latin1((StrRange*)&local_1f8);
   local_1c0 = CONCAT44(local_1c0._4_4_, 0x88);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_228);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1b8, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   Vector<int>::push_back(local_198, 0);
   local_240 = 0;
   local_228 = "EditorVCSInterface";
   local_220 = 0x12;
   String::parse_latin1((StrRange*)&local_240);
   StringName::StringName((StringName*)&local_228, (String*)&local_240, false);
   ClassDB::add_virtual_method((StringName*)&local_228, (MethodInfo*)&local_1f8, true, (Vector*)&local_238, false);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   MethodInfo::~MethodInfo((MethodInfo*)&local_1f8);
   CowData<String>::_unref((CowData<String>*)&local_230);
   local_230 = 0;
   local_228 = (char*)0x0;
   local_1f8 = "identifier";
   local_1f0 = 10;
   String::parse_latin1((StrRange*)&local_228);
   local_1f8 = (char*)0x0;
   if (local_228 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_228);
   }

   Vector<String>::push_back((Vector<String>*)&local_238, (CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   local_240 = 0;
   local_1f8 = "area";
   local_1f0 = 4;
   String::parse_latin1((StrRange*)&local_240);
   local_1f8 = (char*)0x0;
   if (local_240 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_240);
   }

   Vector<String>::push_back((Vector<String>*)&local_238, (CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   local_1e8 = (undefined1[16])0x0;
   local_228 = "_get_diff";
   local_1f8 = (char*)0x0;
   local_1f0 = 0;
   local_1d8 = 0;
   local_1d0 = 0;
   local_1c8 = 6;
   local_1c0 = 1;
   local_1b8[0] = 0;
   local_1a8 = 0;
   local_1a0 = 0;
   local_190 = 0;
   local_220 = 9;
   String::parse_latin1((StrRange*)&local_1f8);
   local_1c0 = CONCAT44(local_1c0._4_4_, 0x88);
   GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info((GetTypeInfo<TypedArray<Dictionary>,void>*)&local_228);
   PropertyInfo::operator =((PropertyInfo*)&local_1f0, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   local_1a0 = local_1a0 & 0xffffffff00000000;
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_228);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1b8, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   Vector<int>::push_back(local_198, 0);
   GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_228);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1b8, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   Vector<int>::push_back(local_198, 3);
   local_240 = 0;
   local_228 = "EditorVCSInterface";
   local_220 = 0x12;
   String::parse_latin1((StrRange*)&local_240);
   StringName::StringName((StringName*)&local_228, (String*)&local_240, false);
   ClassDB::add_virtual_method((StringName*)&local_228, (MethodInfo*)&local_1f8, true, (Vector*)&local_238, false);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   MethodInfo::~MethodInfo((MethodInfo*)&local_1f8);
   CowData<String>::_unref((CowData<String>*)&local_230);
   local_1e8 = (undefined1[16])0x0;
   local_228 = "_shut_down";
   local_230 = 0;
   local_1f8 = (char*)0x0;
   local_1f0 = 0;
   local_1d8 = 0;
   local_1d0 = 0;
   local_1c8 = 6;
   local_1c0 = 1;
   local_1b8[0] = 0;
   local_1a8 = 0;
   local_1a0 = 0;
   local_190 = 0;
   local_220 = 10;
   String::parse_latin1((StrRange*)&local_1f8);
   local_1c0 = CONCAT44(local_1c0._4_4_, 0x88);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_228);
   PropertyInfo::operator =((PropertyInfo*)&local_1f0, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   local_1a0 = local_1a0 & 0xffffffff00000000;
   local_240 = 0;
   local_228 = "EditorVCSInterface";
   local_220 = 0x12;
   String::parse_latin1((StrRange*)&local_240);
   StringName::StringName((StringName*)&local_228, (String*)&local_240, false);
   ClassDB::add_virtual_method((StringName*)&local_228, (MethodInfo*)&local_1f8, true, (Vector*)&local_238, false);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   MethodInfo::~MethodInfo((MethodInfo*)&local_1f8);
   CowData<String>::_unref((CowData<String>*)&local_230);
   local_1e8 = (undefined1[16])0x0;
   local_228 = "_get_vcs_name";
   local_230 = 0;
   local_1f8 = (char*)0x0;
   local_1f0 = 0;
   local_1d8 = 0;
   local_1d0 = 0;
   local_1c8 = 6;
   local_1c0 = 1;
   local_1b8[0] = 0;
   local_1a8 = 0;
   local_1a0 = 0;
   local_190 = 0;
   local_220 = 0xd;
   String::parse_latin1((StrRange*)&local_1f8);
   local_1c0 = CONCAT44(local_1c0._4_4_, 0x88);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_228);
   PropertyInfo::operator =((PropertyInfo*)&local_1f0, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   local_1a0 = local_1a0 & 0xffffffff00000000;
   local_240 = 0;
   local_228 = "EditorVCSInterface";
   local_220 = 0x12;
   String::parse_latin1((StrRange*)&local_240);
   StringName::StringName((StringName*)&local_228, (String*)&local_240, false);
   ClassDB::add_virtual_method((StringName*)&local_228, (MethodInfo*)&local_1f8, true, (Vector*)&local_238, false);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   MethodInfo::~MethodInfo((MethodInfo*)&local_1f8);
   CowData<String>::_unref((CowData<String>*)&local_230);
   local_230 = 0;
   local_228 = (char*)0x0;
   local_1f8 = "max_commits";
   local_1f0 = 0xb;
   String::parse_latin1((StrRange*)&local_228);
   local_1f8 = (char*)0x0;
   if (local_228 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_228);
   }

   Vector<String>::push_back((Vector<String>*)&local_238, (CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   local_1e8 = (undefined1[16])0x0;
   local_228 = "_get_previous_commits";
   local_1f8 = (char*)0x0;
   local_1f0 = 0;
   local_1d8 = 0;
   local_1d0 = 0;
   local_1c8 = 6;
   local_1c0 = 1;
   local_1b8[0] = 0;
   local_1a8 = 0;
   local_1a0 = 0;
   local_190 = 0;
   local_220 = 0x15;
   String::parse_latin1((StrRange*)&local_1f8);
   local_1c0 = CONCAT44(local_1c0._4_4_, 0x88);
   GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info((GetTypeInfo<TypedArray<Dictionary>,void>*)&local_228);
   PropertyInfo::operator =((PropertyInfo*)&local_1f0, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   local_1a0 = local_1a0 & 0xffffffff00000000;
   GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_228);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1b8, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   Vector<int>::push_back(local_198, 3);
   local_240 = 0;
   local_228 = "EditorVCSInterface";
   local_220 = 0x12;
   String::parse_latin1((StrRange*)&local_240);
   StringName::StringName((StringName*)&local_228, (String*)&local_240, false);
   ClassDB::add_virtual_method((StringName*)&local_228, (MethodInfo*)&local_1f8, true, (Vector*)&local_238, false);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   MethodInfo::~MethodInfo((MethodInfo*)&local_1f8);
   CowData<String>::_unref((CowData<String>*)&local_230);
   local_1e8 = (undefined1[16])0x0;
   local_228 = "_get_branch_list";
   local_230 = 0;
   local_1f8 = (char*)0x0;
   local_1f0 = 0;
   local_1d8 = 0;
   local_1d0 = 0;
   local_1c8 = 6;
   local_1c0 = 1;
   local_1b8[0] = 0;
   local_1a8 = 0;
   local_1a0 = 0;
   local_190 = 0;
   local_220 = 0x10;
   String::parse_latin1((StrRange*)&local_1f8);
   local_1c0 = CONCAT44(local_1c0._4_4_, 0x88);
   GetTypeInfo<TypedArray<String>,void>::get_class_info((GetTypeInfo<TypedArray<String>,void>*)&local_228);
   PropertyInfo::operator =((PropertyInfo*)&local_1f0, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   local_1a0 = local_1a0 & 0xffffffff00000000;
   local_240 = 0;
   local_228 = "EditorVCSInterface";
   local_220 = 0x12;
   String::parse_latin1((StrRange*)&local_240);
   StringName::StringName((StringName*)&local_228, (String*)&local_240, false);
   ClassDB::add_virtual_method((StringName*)&local_228, (MethodInfo*)&local_1f8, true, (Vector*)&local_238, false);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   MethodInfo::~MethodInfo((MethodInfo*)&local_1f8);
   CowData<String>::_unref((CowData<String>*)&local_230);
   local_1e8 = (undefined1[16])0x0;
   local_228 = "_get_remotes";
   local_230 = 0;
   local_1f8 = (char*)0x0;
   local_1f0 = 0;
   local_1d8 = 0;
   local_1d0 = 0;
   local_1c8 = 6;
   local_1c0 = 1;
   local_1b8[0] = 0;
   local_1a8 = 0;
   local_1a0 = 0;
   local_190 = 0;
   local_220 = 0xc;
   String::parse_latin1((StrRange*)&local_1f8);
   local_1c0 = CONCAT44(local_1c0._4_4_, 0x88);
   GetTypeInfo<TypedArray<String>,void>::get_class_info((GetTypeInfo<TypedArray<String>,void>*)&local_228);
   PropertyInfo::operator =((PropertyInfo*)&local_1f0, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   local_1a0 = local_1a0 & 0xffffffff00000000;
   local_240 = 0;
   local_228 = "EditorVCSInterface";
   local_220 = 0x12;
   String::parse_latin1((StrRange*)&local_240);
   StringName::StringName((StringName*)&local_228, (String*)&local_240, false);
   ClassDB::add_virtual_method((StringName*)&local_228, (MethodInfo*)&local_1f8, true, (Vector*)&local_238, false);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   MethodInfo::~MethodInfo((MethodInfo*)&local_1f8);
   CowData<String>::_unref((CowData<String>*)&local_230);
   local_230 = 0;
   local_228 = (char*)0x0;
   local_1f8 = "branch_name";
   local_1f0 = 0xb;
   String::parse_latin1((StrRange*)&local_228);
   local_1f8 = (char*)0x0;
   if (local_228 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_228);
   }

   Vector<String>::push_back((Vector<String>*)&local_238, (CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   local_1e8 = (undefined1[16])0x0;
   local_228 = "_create_branch";
   local_1f8 = (char*)0x0;
   local_1f0 = 0;
   local_1d8 = 0;
   local_1d0 = 0;
   local_1c8 = 6;
   local_1c0 = 1;
   local_1b8[0] = 0;
   local_1a8 = 0;
   local_1a0 = 0;
   local_190 = 0;
   local_220 = 0xe;
   String::parse_latin1((StrRange*)&local_1f8);
   local_1c0 = CONCAT44(local_1c0._4_4_, 0x88);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_228);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1b8, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   Vector<int>::push_back(local_198, 0);
   local_240 = 0;
   local_228 = "EditorVCSInterface";
   local_220 = 0x12;
   String::parse_latin1((StrRange*)&local_240);
   StringName::StringName((StringName*)&local_228, (String*)&local_240, false);
   ClassDB::add_virtual_method((StringName*)&local_228, (MethodInfo*)&local_1f8, true, (Vector*)&local_238, false);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   MethodInfo::~MethodInfo((MethodInfo*)&local_1f8);
   CowData<String>::_unref((CowData<String>*)&local_230);
   local_230 = 0;
   local_228 = (char*)0x0;
   local_1f8 = "branch_name";
   local_1f0 = 0xb;
   String::parse_latin1((StrRange*)&local_228);
   local_1f8 = (char*)0x0;
   if (local_228 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_228);
   }

   Vector<String>::push_back((Vector<String>*)&local_238, (CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   local_1e8 = (undefined1[16])0x0;
   local_228 = "_remove_branch";
   local_1f8 = (char*)0x0;
   local_1f0 = 0;
   local_1d8 = 0;
   local_1d0 = 0;
   local_1c8 = 6;
   local_1c0 = 1;
   local_1b8[0] = 0;
   local_1a8 = 0;
   local_1a0 = 0;
   local_190 = 0;
   local_220 = 0xe;
   String::parse_latin1((StrRange*)&local_1f8);
   local_1c0 = CONCAT44(local_1c0._4_4_, 0x88);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_228);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1b8, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   Vector<int>::push_back(local_198, 0);
   local_240 = 0;
   local_228 = "EditorVCSInterface";
   local_220 = 0x12;
   String::parse_latin1((StrRange*)&local_240);
   StringName::StringName((StringName*)&local_228, (String*)&local_240, false);
   ClassDB::add_virtual_method((StringName*)&local_228, (MethodInfo*)&local_1f8, true, (Vector*)&local_238, false);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   MethodInfo::~MethodInfo((MethodInfo*)&local_1f8);
   CowData<String>::_unref((CowData<String>*)&local_230);
   local_230 = 0;
   local_228 = (char*)0x0;
   local_1f8 = "remote_name";
   local_1f0 = 0xb;
   String::parse_latin1((StrRange*)&local_228);
   local_1f8 = (char*)0x0;
   if (local_228 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_228);
   }

   Vector<String>::push_back((Vector<String>*)&local_238, (CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   local_240 = 0;
   local_1f8 = "remote_url";
   local_1f0 = 10;
   String::parse_latin1((StrRange*)&local_240);
   local_1f8 = (char*)0x0;
   if (local_240 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_240);
   }

   Vector<String>::push_back((Vector<String>*)&local_238, (CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   local_1e8 = (undefined1[16])0x0;
   local_228 = "_create_remote";
   local_1f8 = (char*)0x0;
   local_1f0 = 0;
   local_1d8 = 0;
   local_1d0 = 0;
   local_1c8 = 6;
   local_1c0 = 1;
   local_1b8[0] = 0;
   local_1a8 = 0;
   local_1a0 = 0;
   local_190 = 0;
   local_220 = 0xe;
   String::parse_latin1((StrRange*)&local_1f8);
   local_1c0 = CONCAT44(local_1c0._4_4_, 0x88);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_228);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1b8, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   Vector<int>::push_back(local_198, 0);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_228);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1b8, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   Vector<int>::push_back(local_198, 0);
   local_240 = 0;
   local_228 = "EditorVCSInterface";
   local_220 = 0x12;
   String::parse_latin1((StrRange*)&local_240);
   StringName::StringName((StringName*)&local_228, (String*)&local_240, false);
   ClassDB::add_virtual_method((StringName*)&local_228, (MethodInfo*)&local_1f8, true, (Vector*)&local_238, false);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   MethodInfo::~MethodInfo((MethodInfo*)&local_1f8);
   CowData<String>::_unref((CowData<String>*)&local_230);
   local_230 = 0;
   local_228 = (char*)0x0;
   local_1f8 = "remote_name";
   local_1f0 = 0xb;
   String::parse_latin1((StrRange*)&local_228);
   local_1f8 = (char*)0x0;
   if (local_228 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_228);
   }

   Vector<String>::push_back((Vector<String>*)&local_238, (CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   local_1e8 = (undefined1[16])0x0;
   local_228 = "_remove_remote";
   local_1f8 = (char*)0x0;
   local_1f0 = 0;
   local_1d8 = 0;
   local_1d0 = 0;
   local_1c8 = 6;
   local_1c0 = 1;
   local_1b8[0] = 0;
   local_1a8 = 0;
   local_1a0 = 0;
   local_190 = 0;
   local_220 = 0xe;
   String::parse_latin1((StrRange*)&local_1f8);
   local_1c0 = CONCAT44(local_1c0._4_4_, 0x88);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_228);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1b8, (PropertyInfo*)&local_228);
   lVar1 = local_208;
   if (local_208 != 0) {
      LOCK();
      plVar20 = (long*)( local_208 + -0x10 );
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (*plVar20 == 0) {
         local_208 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_218 != 0 )) {
      StringName::unref();
   }

   lVar1 = local_220;
   if (local_220 != 0) {
      LOCK();
      plVar20 = (long*)( local_220 + -0x10 );
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (*plVar20 == 0) {
         local_220 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_198, 0);
   local_240 = 0;
   local_228 = "EditorVCSInterface";
   local_220 = 0x12;
   String::parse_latin1((StrRange*)&local_240);
   StringName::StringName((StringName*)&local_228, (String*)&local_240, false);
   ClassDB::add_virtual_method((StringName*)&local_228, (MethodInfo*)&local_1f8, true, (Vector*)&local_238, false);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   MethodInfo::~MethodInfo((MethodInfo*)&local_1f8);
   CowData<String>::_unref((CowData<String>*)&local_230);
   local_1e8 = (undefined1[16])0x0;
   local_228 = "_get_current_branch_name";
   local_230 = 0;
   local_1f8 = (char*)0x0;
   local_1f0 = 0;
   local_1d8 = 0;
   local_1d0 = 0;
   local_1c8 = 6;
   local_1c0 = 1;
   local_1b8[0] = 0;
   local_1a8 = 0;
   local_1a0 = 0;
   local_190 = 0;
   local_220 = 0x18;
   String::parse_latin1((StrRange*)&local_1f8);
   local_1c0 = CONCAT44(local_1c0._4_4_, 0x88);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_228);
   PropertyInfo::operator =((PropertyInfo*)&local_1f0, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   local_1a0 = local_1a0 & 0xffffffff00000000;
   local_240 = 0;
   local_228 = "EditorVCSInterface";
   local_220 = 0x12;
   String::parse_latin1((StrRange*)&local_240);
   StringName::StringName((StringName*)&local_228, (String*)&local_240, false);
   ClassDB::add_virtual_method((StringName*)&local_228, (MethodInfo*)&local_1f8, true, (Vector*)&local_238, false);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   MethodInfo::~MethodInfo((MethodInfo*)&local_1f8);
   CowData<String>::_unref((CowData<String>*)&local_230);
   local_230 = 0;
   local_228 = (char*)0x0;
   local_1f8 = "branch_name";
   local_1f0 = 0xb;
   String::parse_latin1((StrRange*)&local_228);
   local_1f8 = (char*)0x0;
   if (local_228 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_228);
   }

   Vector<String>::push_back((Vector<String>*)&local_238, (CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   local_1e8 = (undefined1[16])0x0;
   local_228 = "_checkout_branch";
   local_1f8 = (char*)0x0;
   local_1f0 = 0;
   local_1d8 = 0;
   local_1d0 = 0;
   local_1c8 = 6;
   local_1c0 = 1;
   local_1b8[0] = 0;
   local_1a8 = 0;
   local_1a0 = 0;
   local_190 = 0;
   local_220 = 0x10;
   String::parse_latin1((StrRange*)&local_1f8);
   local_1c0 = CONCAT44(local_1c0._4_4_, 0x88);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_228);
   PropertyInfo::operator =((PropertyInfo*)&local_1f0, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   local_1a0 = local_1a0 & 0xffffffff00000000;
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_228);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1b8, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   Vector<int>::push_back(local_198, 0);
   local_240 = 0;
   local_228 = "EditorVCSInterface";
   local_220 = 0x12;
   String::parse_latin1((StrRange*)&local_240);
   StringName::StringName((StringName*)&local_228, (String*)&local_240, false);
   ClassDB::add_virtual_method((StringName*)&local_228, (MethodInfo*)&local_1f8, true, (Vector*)&local_238, false);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   MethodInfo::~MethodInfo((MethodInfo*)&local_1f8);
   CowData<String>::_unref((CowData<String>*)&local_230);
   local_230 = 0;
   local_228 = (char*)0x0;
   local_1f8 = "remote";
   local_1f0 = 6;
   String::parse_latin1((StrRange*)&local_228);
   local_1f8 = (char*)0x0;
   if (local_228 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_228);
   }

   Vector<String>::push_back((Vector<String>*)&local_238, (CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   local_1e8 = (undefined1[16])0x0;
   local_228 = "_pull";
   local_1f8 = (char*)0x0;
   local_1f0 = 0;
   local_1d8 = 0;
   local_1d0 = 0;
   local_1c8 = 6;
   local_1c0 = 1;
   local_1b8[0] = 0;
   local_1a8 = 0;
   local_1a0 = 0;
   local_190 = 0;
   local_220 = 5;
   String::parse_latin1((StrRange*)&local_1f8);
   local_1c0 = CONCAT44(local_1c0._4_4_, 0x88);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_228);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1b8, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   Vector<int>::push_back(local_198, 0);
   local_240 = 0;
   local_228 = "EditorVCSInterface";
   local_220 = 0x12;
   String::parse_latin1((StrRange*)&local_240);
   StringName::StringName((StringName*)&local_228, (String*)&local_240, false);
   ClassDB::add_virtual_method((StringName*)&local_228, (MethodInfo*)&local_1f8, true, (Vector*)&local_238, false);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   MethodInfo::~MethodInfo((MethodInfo*)&local_1f8);
   CowData<String>::_unref((CowData<String>*)&local_230);
   local_230 = 0;
   local_228 = (char*)0x0;
   local_1f8 = "remote";
   local_1f0 = 6;
   String::parse_latin1((StrRange*)&local_228);
   local_1f8 = (char*)0x0;
   if (local_228 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_228);
   }

   Vector<String>::push_back((Vector<String>*)&local_238, (CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   local_240 = 0;
   local_1f8 = "force";
   local_1f0 = 5;
   String::parse_latin1((StrRange*)&local_240);
   local_1f8 = (char*)0x0;
   if (local_240 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_240);
   }

   Vector<String>::push_back((Vector<String>*)&local_238, (CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   local_1e8 = (undefined1[16])0x0;
   local_228 = "_push";
   local_1f8 = (char*)0x0;
   local_1f0 = 0;
   local_1d8 = 0;
   local_1d0 = 0;
   local_1c8 = 6;
   local_1c0 = 1;
   local_1b8[0] = 0;
   local_1a8 = 0;
   local_1a0 = 0;
   local_190 = 0;
   local_220 = 5;
   String::parse_latin1((StrRange*)&local_1f8);
   local_1c0 = CONCAT44(local_1c0._4_4_, 0x88);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_228);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1b8, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   Vector<int>::push_back(local_198, 0);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_228);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1b8, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   Vector<int>::push_back(local_198, 0);
   local_240 = 0;
   local_228 = "EditorVCSInterface";
   local_220 = 0x12;
   String::parse_latin1((StrRange*)&local_240);
   StringName::StringName((StringName*)&local_228, (String*)&local_240, false);
   ClassDB::add_virtual_method((StringName*)&local_228, (MethodInfo*)&local_1f8, true, (Vector*)&local_238, false);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   MethodInfo::~MethodInfo((MethodInfo*)&local_1f8);
   CowData<String>::_unref((CowData<String>*)&local_230);
   local_230 = 0;
   local_228 = (char*)0x0;
   local_1f8 = "remote";
   local_1f0 = 6;
   String::parse_latin1((StrRange*)&local_228);
   local_1f8 = (char*)0x0;
   if (local_228 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_228);
   }

   Vector<String>::push_back((Vector<String>*)&local_238, (CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   local_1e8 = (undefined1[16])0x0;
   local_228 = "_fetch";
   local_1f8 = (char*)0x0;
   local_1f0 = 0;
   local_1d8 = 0;
   local_1d0 = 0;
   local_1c8 = 6;
   local_1c0 = 1;
   local_1b8[0] = 0;
   local_1a8 = 0;
   local_1a0 = 0;
   local_190 = 0;
   local_220 = 6;
   String::parse_latin1((StrRange*)&local_1f8);
   local_1c0 = CONCAT44(local_1c0._4_4_, 0x88);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_228);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1b8, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   Vector<int>::push_back(local_198, 0);
   local_240 = 0;
   local_228 = "EditorVCSInterface";
   local_220 = 0x12;
   String::parse_latin1((StrRange*)&local_240);
   StringName::StringName((StringName*)&local_228, (String*)&local_240, false);
   ClassDB::add_virtual_method((StringName*)&local_228, (MethodInfo*)&local_1f8, true, (Vector*)&local_238, false);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   MethodInfo::~MethodInfo((MethodInfo*)&local_1f8);
   CowData<String>::_unref((CowData<String>*)&local_230);
   local_230 = 0;
   local_228 = (char*)0x0;
   local_1f8 = "file_path";
   local_1f0 = 9;
   String::parse_latin1((StrRange*)&local_228);
   local_1f8 = (char*)0x0;
   if (local_228 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_228);
   }

   Vector<String>::push_back((Vector<String>*)&local_238, (CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   local_240 = 0;
   local_1f8 = "text";
   local_1f0 = 4;
   String::parse_latin1((StrRange*)&local_240);
   local_1f8 = (char*)0x0;
   if (local_240 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1f8, (CowData*)&local_240);
   }

   Vector<String>::push_back((Vector<String>*)&local_238, (CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   local_1e8 = (undefined1[16])0x0;
   local_228 = "_get_line_diff";
   local_1f8 = (char*)0x0;
   local_1f0 = 0;
   local_1d8 = 0;
   local_1d0 = 0;
   local_1c8 = 6;
   local_1c0 = 1;
   local_1b8[0] = 0;
   local_1a8 = 0;
   local_1a0 = 0;
   local_190 = 0;
   local_220 = 0xe;
   String::parse_latin1((StrRange*)&local_1f8);
   local_1c0 = CONCAT44(local_1c0._4_4_, 0x88);
   GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info((GetTypeInfo<TypedArray<Dictionary>,void>*)&local_228);
   PropertyInfo::operator =((PropertyInfo*)&local_1f0, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   local_1a0 = local_1a0 & 0xffffffff00000000;
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_228);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1b8, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   Vector<int>::push_back(local_198, 0);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_228);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_1b8, (PropertyInfo*)&local_228);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_228);
   Vector<int>::push_back(local_198, 0);
   local_240 = 0;
   local_228 = "EditorVCSInterface";
   local_220 = 0x12;
   String::parse_latin1((StrRange*)&local_240);
   StringName::StringName((StringName*)&local_228, (String*)&local_240, false);
   ClassDB::add_virtual_method((StringName*)&local_228, (MethodInfo*)&local_1f8, true, (Vector*)&local_238, false);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   MethodInfo::~MethodInfo((MethodInfo*)&local_1f8);
   CowData<String>::_unref((CowData<String>*)&local_230);
   local_d8 = "new_line_no";
   pcStack_d0 = "old_line_no";
   auStack_70._8_8_ = &local_c8;
   auStack_70._0_8_ = &pcStack_d0;
   local_c8 = "content";
   pcStack_c0 = "status";
   local_b8 = 0;
   uVar18 = ( uint ) & local_78;
   local_78 = &local_d8;
   ppcStack_60 = &pcStack_c0;
   D_METHODP((char*)&local_1f8, (char***)"create_diff_line", uVar18);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar17 = create_method_bind<EditorVCSInterface,Dictionary,int,int,String_const&,String_const&>(create_diff_line);
   ClassDB::bind_methodfi(1, pMVar17, false, (MethodDefinition*)&local_1f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar16 = local_1e8._0_8_;
   if ((long*)local_1e8._0_8_ != (long*)0x0) {
      LOCK();
      plVar20 = (long*)( local_1e8._0_8_ + -0x10 );
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (*plVar20 == 0) {
         if ((long*)local_1e8._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_1e8._0_8_ + -8 );
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_1e8._8_8_;
         local_1e8 = auVar3 << 0x40;
         if (lVar1 != 0) {
            lVar19 = 0;
            plVar20 = (long*)uVar16;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar20 != 0 )) {
                  StringName::unref();
               }

               lVar19 = lVar19 + 1;
               plVar20 = plVar20 + 1;
            }
 while ( lVar1 != lVar19 );
         }

         Memory::free_static((long*)( uVar16 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_1f8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_108 = "old_start";
   pcStack_100 = "new_start";
   auStack_70._8_8_ = &local_f8;
   auStack_70._0_8_ = &pcStack_100;
   local_f8 = "old_lines";
   pcStack_f0 = "new_lines";
   local_e8 = 0;
   local_78 = &local_108;
   ppcStack_60 = &pcStack_f0;
   D_METHODP((char*)&local_1f8, (char***)"create_diff_hunk", uVar18);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar17 = create_method_bind<EditorVCSInterface,Dictionary,int,int,int,int>(create_diff_hunk);
   ClassDB::bind_methodfi(1, pMVar17, false, (MethodDefinition*)&local_1f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar16 = local_1e8._0_8_;
   if ((long*)local_1e8._0_8_ != (long*)0x0) {
      LOCK();
      plVar20 = (long*)( local_1e8._0_8_ + -0x10 );
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (*plVar20 == 0) {
         if ((long*)local_1e8._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_1e8._0_8_ + -8 );
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_1e8._8_8_;
         local_1e8 = auVar4 << 0x40;
         if (lVar1 != 0) {
            lVar19 = 0;
            plVar20 = (long*)uVar16;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar20 != 0 )) {
                  StringName::unref();
               }

               lVar19 = lVar19 + 1;
               plVar20 = plVar20 + 1;
            }
 while ( lVar1 != lVar19 );
         }

         Memory::free_static((long*)( uVar16 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_1f8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_138 = 0;
   auStack_70._0_8_ = &pcStack_140;
   local_148 = "new_file";
   pcStack_140 = "old_file";
   local_78 = &local_148;
   D_METHODP((char*)&local_1f8, (char***)"create_diff_file", uVar18);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar17 = create_method_bind<EditorVCSInterface,Dictionary,String_const&,String_const&>(create_diff_file);
   ClassDB::bind_methodfi(1, pMVar17, false, (MethodDefinition*)&local_1f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar16 = local_1e8._0_8_;
   if ((long*)local_1e8._0_8_ != (long*)0x0) {
      LOCK();
      plVar20 = (long*)( local_1e8._0_8_ + -0x10 );
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (*plVar20 == 0) {
         if ((long*)local_1e8._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_1e8._0_8_ + -8 );
         auVar5._8_8_ = 0;
         auVar5._0_8_ = local_1e8._8_8_;
         local_1e8 = auVar5 << 0x40;
         if (lVar1 != 0) {
            lVar19 = 0;
            plVar20 = (long*)uVar16;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar20 != 0 )) {
                  StringName::unref();
               }

               lVar19 = lVar19 + 1;
               plVar20 = plVar20 + 1;
            }
 while ( lVar1 != lVar19 );
         }

         Memory::free_static((long*)( uVar16 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_1f8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_88 = "offset_minutes";
   local_58 = &local_88;
   local_a8 = puVar15;
   pcStack_a0 = "author";
   auStack_70._8_8_ = &local_98;
   auStack_70._0_8_ = &pcStack_a0;
   local_98 = &_LC19;
   pcStack_90 = "unix_timestamp";
   local_80 = 0;
   local_78 = &local_a8;
   ppcStack_60 = &pcStack_90;
   D_METHODP((char*)&local_1f8, (char***)"create_commit", uVar18);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar17 = create_method_bind<EditorVCSInterface,Dictionary,String_const&,String_const&,String_const&,long,long>(create_commit);
   ClassDB::bind_methodfi(1, pMVar17, false, (MethodDefinition*)&local_1f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar16 = local_1e8._0_8_;
   if ((long*)local_1e8._0_8_ != (long*)0x0) {
      LOCK();
      plVar20 = (long*)( local_1e8._0_8_ + -0x10 );
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (*plVar20 == 0) {
         if ((long*)local_1e8._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_1e8._0_8_ + -8 );
         auVar6._8_8_ = 0;
         auVar6._0_8_ = local_1e8._8_8_;
         local_1e8 = auVar6 << 0x40;
         if (lVar1 != 0) {
            lVar19 = 0;
            plVar20 = (long*)uVar16;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar20 != 0 )) {
                  StringName::unref();
               }

               lVar19 = lVar19 + 1;
               plVar20 = plVar20 + 1;
            }
 while ( lVar1 != lVar19 );
         }

         Memory::free_static((long*)( uVar16 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_1f8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_118 = &_LC8;
   local_128 = puVar14;
   pcStack_120 = "change_type";
   auStack_70._8_8_ = &local_118;
   auStack_70._0_8_ = &pcStack_120;
   local_110 = 0;
   local_78 = &local_128;
   D_METHODP((char*)&local_1f8, (char***)"create_status_file", uVar18);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar17 = create_method_bind<EditorVCSInterface,Dictionary,String_const&,EditorVCSInterface::ChangeType,EditorVCSInterface::TreeArea>(create_status_file);
   ClassDB::bind_methodfi(1, pMVar17, false, (MethodDefinition*)&local_1f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar16 = local_1e8._0_8_;
   if ((long*)local_1e8._0_8_ != (long*)0x0) {
      LOCK();
      plVar20 = (long*)( local_1e8._0_8_ + -0x10 );
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (*plVar20 == 0) {
         if ((long*)local_1e8._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_1e8._0_8_ + -8 );
         auVar7._8_8_ = 0;
         auVar7._0_8_ = local_1e8._8_8_;
         local_1e8 = auVar7 << 0x40;
         if (lVar1 != 0) {
            lVar19 = 0;
            plVar20 = (long*)uVar16;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar20 != 0 )) {
                  StringName::unref();
               }

               lVar19 = lVar19 + 1;
               plVar20 = plVar20 + 1;
            }
 while ( lVar1 != lVar19 );
         }

         Memory::free_static((long*)( uVar16 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_1f8 != (char*)0x0 )) {
      StringName::unref();
   }

   auStack_70._0_8_ = &pcStack_160;
   local_168 = "diff_file";
   pcStack_160 = "diff_hunks";
   local_158 = 0;
   local_78 = &local_168;
   D_METHODP((char*)&local_1f8, (char***)"add_diff_hunks_into_diff_file", uVar18);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar17 = create_method_bind<EditorVCSInterface,Dictionary,Dictionary,TypedArray<Dictionary>>(add_diff_hunks_into_diff_file);
   ClassDB::bind_methodfi(1, pMVar17, false, (MethodDefinition*)&local_1f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar16 = local_1e8._0_8_;
   if ((long*)local_1e8._0_8_ != (long*)0x0) {
      LOCK();
      plVar20 = (long*)( local_1e8._0_8_ + -0x10 );
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (*plVar20 == 0) {
         if ((long*)local_1e8._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_1e8._0_8_ + -8 );
         auVar8._8_8_ = 0;
         auVar8._0_8_ = local_1e8._8_8_;
         local_1e8 = auVar8 << 0x40;
         if (lVar1 != 0) {
            lVar19 = 0;
            plVar20 = (long*)uVar16;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar20 != 0 )) {
                  StringName::unref();
               }

               lVar19 = lVar19 + 1;
               plVar20 = plVar20 + 1;
            }
 while ( lVar1 != lVar19 );
         }

         Memory::free_static((long*)( uVar16 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_1f8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_178 = 0;
   auStack_70._0_8_ = &pcStack_180;
   local_188 = "diff_hunk";
   pcStack_180 = "line_diffs";
   local_78 = &local_188;
   D_METHODP((char*)&local_1f8, (char***)"add_line_diffs_into_diff_hunk", uVar18);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar17 = create_method_bind<EditorVCSInterface,Dictionary,Dictionary,TypedArray<Dictionary>>(add_line_diffs_into_diff_hunk);
   ClassDB::bind_methodfi(1, pMVar17, false, (MethodDefinition*)&local_1f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar16 = local_1e8._0_8_;
   if ((long*)local_1e8._0_8_ != (long*)0x0) {
      LOCK();
      plVar20 = (long*)( local_1e8._0_8_ + -0x10 );
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (*plVar20 == 0) {
         if ((long*)local_1e8._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_1e8._0_8_ + -8 );
         auVar9._8_8_ = 0;
         auVar9._0_8_ = local_1e8._8_8_;
         local_1e8 = auVar9 << 0x40;
         if (lVar1 != 0) {
            lVar19 = 0;
            plVar20 = (long*)uVar16;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar20 != 0 )) {
                  StringName::unref();
               }

               lVar19 = lVar19 + 1;
               plVar20 = plVar20 + 1;
            }
 while ( lVar1 != lVar19 );
         }

         Memory::free_static((long*)( uVar16 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_1f8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_a8 = "msg";
   pcStack_a0 = (char*)0x0;
   local_78 = &local_a8;
   D_METHODP((char*)&local_1f8, (char***)"popup_error", uVar18);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (char**)0x0;
   pMVar17 = create_method_bind<EditorVCSInterface,String_const&>(popup_error);
   ClassDB::bind_methodfi(1, pMVar17, false, (MethodDefinition*)&local_1f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar16 = local_1e8._0_8_;
   if ((long*)local_1e8._0_8_ != (long*)0x0) {
      LOCK();
      plVar20 = (long*)( local_1e8._0_8_ + -0x10 );
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (*plVar20 == 0) {
         if ((long*)local_1e8._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_1e8._0_8_ + -8 );
         auVar10._8_8_ = 0;
         auVar10._0_8_ = local_1e8._8_8_;
         local_1e8 = auVar10 << 0x40;
         if (lVar1 != 0) {
            lVar19 = 0;
            plVar20 = (long*)uVar16;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar20 != 0 )) {
                  StringName::unref();
               }

               lVar19 = lVar19 + 1;
               plVar20 = plVar20 + 1;
            }
 while ( lVar1 != lVar19 );
         }

         Memory::free_static((long*)( uVar16 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_1f8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_228, "CHANGE_TYPE_NEW", false);
   local_1f8 = "CHANGE_TYPE_NEW";
   local_240 = 0;
   local_1f0 = 0xf;
   String::parse_latin1((StrRange*)&local_240);
   __constant_get_enum_name<EditorVCSInterface::ChangeType>((StringName*)&local_238);
   local_248 = 0;
   local_1f8 = "EditorVCSInterface";
   local_1f0 = 0x12;
   String::parse_latin1((StrRange*)&local_248);
   StringName::StringName((StringName*)&local_1f8, (String*)&local_248, false);
   ClassDB::bind_integer_constant((StringName*)&local_1f8, (StringName*)&local_238, (StringName*)&local_228, 0, false);
   if (( StringName::configured != '\0' ) && ( local_1f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_248);
   if (( StringName::configured != '\0' ) && ( local_238 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_228, "CHANGE_TYPE_MODIFIED", false);
   local_1f8 = "CHANGE_TYPE_MODIFIED";
   local_240 = 0;
   local_1f0 = 0x14;
   String::parse_latin1((StrRange*)&local_240);
   __constant_get_enum_name<EditorVCSInterface::ChangeType>((StringName*)&local_238);
   local_248 = 0;
   local_1f8 = "EditorVCSInterface";
   local_1f0 = 0x12;
   String::parse_latin1((StrRange*)&local_248);
   StringName::StringName((StringName*)&local_1f8, (String*)&local_248, false);
   ClassDB::bind_integer_constant((StringName*)&local_1f8, (StringName*)&local_238, (StringName*)&local_228, 1, false);
   if (( StringName::configured != '\0' ) && ( local_1f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_248);
   if (( StringName::configured != '\0' ) && ( local_238 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_228, "CHANGE_TYPE_RENAMED", false);
   local_1f8 = "CHANGE_TYPE_RENAMED";
   local_240 = 0;
   local_1f0 = 0x13;
   String::parse_latin1((StrRange*)&local_240);
   __constant_get_enum_name<EditorVCSInterface::ChangeType>((StringName*)&local_238);
   local_248 = 0;
   local_1f8 = "EditorVCSInterface";
   local_1f0 = 0x12;
   String::parse_latin1((StrRange*)&local_248);
   StringName::StringName((StringName*)&local_1f8, (String*)&local_248, false);
   ClassDB::bind_integer_constant((StringName*)&local_1f8, (StringName*)&local_238, (StringName*)&local_228, 2, false);
   if (( StringName::configured != '\0' ) && ( local_1f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_248);
   if (( StringName::configured != '\0' ) && ( local_238 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_228, "CHANGE_TYPE_DELETED", false);
   local_1f8 = "CHANGE_TYPE_DELETED";
   local_240 = 0;
   local_1f0 = 0x13;
   String::parse_latin1((StrRange*)&local_240);
   __constant_get_enum_name<EditorVCSInterface::ChangeType>((StringName*)&local_238);
   local_248 = 0;
   local_1f8 = "EditorVCSInterface";
   local_1f0 = 0x12;
   String::parse_latin1((StrRange*)&local_248);
   StringName::StringName((StringName*)&local_1f8, (String*)&local_248, false);
   ClassDB::bind_integer_constant((StringName*)&local_1f8, (StringName*)&local_238, (StringName*)&local_228, 3, false);
   if (( StringName::configured != '\0' ) && ( local_1f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_248);
   if (( StringName::configured != '\0' ) && ( local_238 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_228, "CHANGE_TYPE_TYPECHANGE", false);
   local_1f8 = "CHANGE_TYPE_TYPECHANGE";
   local_240 = 0;
   local_1f0 = 0x16;
   String::parse_latin1((StrRange*)&local_240);
   __constant_get_enum_name<EditorVCSInterface::ChangeType>((StringName*)&local_238);
   local_248 = 0;
   local_1f8 = "EditorVCSInterface";
   local_1f0 = 0x12;
   String::parse_latin1((StrRange*)&local_248);
   StringName::StringName((StringName*)&local_1f8, (String*)&local_248, false);
   ClassDB::bind_integer_constant((StringName*)&local_1f8, (StringName*)&local_238, (StringName*)&local_228, 4, false);
   if (( StringName::configured != '\0' ) && ( local_1f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_248);
   if (( StringName::configured != '\0' ) && ( local_238 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_228, "CHANGE_TYPE_UNMERGED", false);
   local_1f8 = "CHANGE_TYPE_UNMERGED";
   local_240 = 0;
   local_1f0 = 0x14;
   String::parse_latin1((StrRange*)&local_240);
   __constant_get_enum_name<EditorVCSInterface::ChangeType>((StringName*)&local_238);
   local_248 = 0;
   local_1f8 = "EditorVCSInterface";
   local_1f0 = 0x12;
   String::parse_latin1((StrRange*)&local_248);
   StringName::StringName((StringName*)&local_1f8, (String*)&local_248, false);
   ClassDB::bind_integer_constant((StringName*)&local_1f8, (StringName*)&local_238, (StringName*)&local_228, 5, false);
   if (( StringName::configured != '\0' ) && ( local_1f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_248);
   if (( StringName::configured != '\0' ) && ( local_238 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_228, "TREE_AREA_COMMIT", false);
   local_1f8 = "TREE_AREA_COMMIT";
   local_240 = 0;
   local_1f0 = 0x10;
   String::parse_latin1((StrRange*)&local_240);
   GetTypeInfo<EditorVCSInterface::TreeArea,void>::get_class_info((GetTypeInfo<EditorVCSInterface::TreeArea,void>*)&local_1f8);
   local_238 = local_1e8._0_8_;
   auVar11._8_8_ = 0;
   auVar11._0_8_ = local_1e8._8_8_;
   local_1e8 = auVar11 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1f8);
   local_248 = 0;
   local_1f8 = "EditorVCSInterface";
   local_1f0 = 0x12;
   String::parse_latin1((StrRange*)&local_248);
   StringName::StringName((StringName*)&local_1f8, (String*)&local_248, false);
   ClassDB::bind_integer_constant((StringName*)&local_1f8, (StringName*)&local_238, (StringName*)&local_228, 0, false);
   if (( StringName::configured != '\0' ) && ( local_1f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_248);
   if (( StringName::configured != '\0' ) && ( local_238 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_228, "TREE_AREA_STAGED", false);
   local_1f8 = "TREE_AREA_STAGED";
   local_240 = 0;
   local_1f0 = 0x10;
   String::parse_latin1((StrRange*)&local_240);
   GetTypeInfo<EditorVCSInterface::TreeArea,void>::get_class_info((GetTypeInfo<EditorVCSInterface::TreeArea,void>*)&local_1f8);
   local_238 = local_1e8._0_8_;
   auVar12._8_8_ = 0;
   auVar12._0_8_ = local_1e8._8_8_;
   local_1e8 = auVar12 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1f8);
   local_248 = 0;
   local_1f8 = "EditorVCSInterface";
   local_1f0 = 0x12;
   String::parse_latin1((StrRange*)&local_248);
   StringName::StringName((StringName*)&local_1f8, (String*)&local_248, false);
   ClassDB::bind_integer_constant((StringName*)&local_1f8, (StringName*)&local_238, (StringName*)&local_228, 1, false);
   if (( StringName::configured != '\0' ) && ( local_1f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_248);
   if (( StringName::configured != '\0' ) && ( local_238 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_228, "TREE_AREA_UNSTAGED", false);
   local_240 = 0;
   local_1f8 = "TREE_AREA_UNSTAGED";
   local_1f0 = 0x12;
   String::parse_latin1((StrRange*)&local_240);
   GetTypeInfo<EditorVCSInterface::TreeArea,void>::get_class_info((GetTypeInfo<EditorVCSInterface::TreeArea,void>*)&local_1f8);
   local_238 = local_1e8._0_8_;
   auVar13._8_8_ = 0;
   auVar13._0_8_ = local_1e8._8_8_;
   local_1e8 = auVar13 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1f8);
   local_1f8 = "EditorVCSInterface";
   local_248 = 0;
   local_1f0 = 0x12;
   String::parse_latin1((StrRange*)&local_248);
   StringName::StringName((StringName*)&local_1f8, (String*)&local_248, false);
   ClassDB::bind_integer_constant((StringName*)&local_1f8, (StringName*)&local_238, (StringName*)&local_228, 2, false);
   if (( StringName::configured != '\0' ) && ( local_1f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_248);
   if (( StringName::configured != '\0' ) && ( local_238 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   if (( StringName::configured != '\0' ) && ( local_228 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorVCSInterface::fetch(String const&) */void EditorVCSInterface::fetch(EditorVCSInterface *this, String *param_1) {
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
   CowData<char32_t> *local_170;
   long local_160;
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
   undefined8 local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   CowData<char32_t> *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_160 = 0;
   if (*(long*)param_1 != 0) {
      plVar7 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar6 = *plVar7;
         if (lVar6 == 0) goto LAB_0010d721;
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
         local_160 = *(long*)param_1;
      }

   }

   LAB_0010d721:plVar7 = *(long**)( this + 0x98 );
   if (plVar7 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (String*)&local_160);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar7 + 0x60 ) )(local_58, plVar7, this + 0x370, &local_80, 1, &local_f8);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_f8 == 0) {
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010d7f6;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x378] == (EditorVCSInterface)0x0 )) {
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
      String::parse_latin1((String*)&local_f8, "_fetch");
      local_c0 = CONCAT44(local_c0._4_4_, 0x88);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      Vector<int>::push_back(local_98, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar6 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x380 ) = 0;
      pcVar3 = *(code**)( lVar6 + 0xd8 );
      if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xd0 ) ),pcVar3 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "EditorVCSInterface");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120[0] == 0) {
            lVar6 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') goto LAB_0010dd6a;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_0010dd87:lVar6 = *(long*)( this + 8 );
            pcVar3 = *(code**)( lVar6 + 200 );
            if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xc0 ) ),pcVar3 == (code*)0x0) goto LAB_0010dc2a;
            uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ));
            *(undefined8*)( this + 0x380 ) = uVar5;
         }
 else {
            lVar6 = *(long*)( local_120[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') {
               LAB_0010dd6a:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar6 == 0) goto LAB_0010dd87;
         }

         lVar6 = *(long*)( this + 8 );
      }
 else {
         uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x370, uVar1);
         *(undefined8*)( this + 0x380 ) = uVar5;
         lVar6 = *(long*)( this + 8 );
      }

      LAB_0010dc2a:if (*(char*)( lVar6 + 0x29 ) != '\0') {
         plVar7 = (long*)operator_new(0x18, "");
         *plVar7 = (long)( this + 0x380 );
         plVar7[1] = (long)( this + 0x378 );
         plVar7[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar7;
      }

      this[0x378] = (EditorVCSInterface)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar3 = *(code**)( this + 0x380 );
   if (pcVar3 != (code*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      if (local_160 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_160);
         pcVar3 = *(code**)( this + 0x380 );
      }

      local_58[0] = (CowData<char32_t>*)&local_f8;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar3 )(*(undefined8*)( this + 0x10 ), local_58, 0);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x370, pcVar3, local_58, 0);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      goto LAB_0010d7f6;
   }

   if (_gdvirtual__fetch_call(String) == '\0') goto LAB_0010d7f6;
   local_128 = 0;
   local_f8 = 0x117018;
   uStack_f4 = 0;
   uStack_f0 = 0x23;
   uStack_ec = 0;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = 0x114d52;
   uStack_f4 = 0;
   local_138 = 0;
   uStack_f0 = 6;
   uStack_ec = 0;
   String::parse_latin1((StrRange*)&local_138);
   local_148 = 0;
   local_f8 = 0x117aca;
   uStack_f4 = 0;
   uStack_f0 = 2;
   uStack_ec = 0;
   String::parse_latin1((StrRange*)&local_148);
   if (*(code**)( *(long*)this + 0x48 ) == get_class) {
      if (*(long*)( this + 8 ) == 0) {
         local_158 = 0;
         local_f8 = 0x114fdc;
         uStack_f4 = 0;
         uStack_f0 = 0x12;
         uStack_ec = 0;
         LAB_0010d9f0:String::parse_latin1((StrRange*)&local_158);
      }
 else {
         lVar6 = *(long*)( *(long*)( this + 8 ) + 0x20 );
         if (lVar6 == 0) {
            local_158 = 0;
         }
 else {
            __s = *(char**)( lVar6 + 8 );
            local_158 = 0;
            if (__s != (char*)0x0) {
               sVar4 = strlen(__s);
               local_f8 = (int)__s;
               uStack_f4 = ( undefined4 )((ulong)__s >> 0x20);
               uStack_f0 = (undefined4)sVar4;
               uStack_ec = ( undefined4 )(sVar4 >> 0x20);
               goto LAB_0010d9f0;
            }

            if (*(long*)( lVar6 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_158, (CowData*)( lVar6 + 0x10 ));
            }

         }

      }

   }
 else {
      ( **(code**)( *(long*)this + 0x48 ) )(&local_158, this);
   }

   local_170 = (CowData<char32_t>*)&local_158;
   operator+((char *)
   local_150,(String*)"Required virtual method ";
   String::operator +(local_140, (String*)local_150);
   String::operator +((String*)&local_130, local_140);
   String::operator +((String*)&local_f8, (String*)&local_130);
   _err_print_error("_gdvirtual__fetch_call", "editor/editor_vcs_interface.h", 0x80, (String*)&local_f8, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_140);
   CowData<char32_t>::_unref(local_150);
   CowData<char32_t>::_unref(local_170);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   _gdvirtual__fetch_call(String)::first_print =
   '\0';
   LAB_0010d7f6:lVar6 = local_160;
   if (local_160 != 0) {
      LOCK();
      plVar7 = (long*)( local_160 + -0x10 );
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         local_160 = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorVCSInterface::push(String const&, bool) */void EditorVCSInterface::push(EditorVCSInterface *this, String *param_1, bool param_2) {
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
   CowData<char32_t> *local_190;
   long local_180;
   undefined8 local_178;
   CowData<char32_t> local_170[8];
   undefined8 local_168;
   String local_160[8];
   undefined8 local_158;
   long local_150;
   undefined8 local_148;
   long local_140[5];
   int local_118;
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
   undefined8 local_c0;
   Vector<int> local_b8[8];
   undefined8 local_b0;
   Variant *local_a8;
   Variant *pVStack_a0;
   int local_98[8];
   CowData<char32_t> *local_78;
   undefined8 *puStack_70;
   int local_60[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_180 = 0;
   if (*(long*)param_1 != 0) {
      plVar7 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar6 = *plVar7;
         if (lVar6 == 0) goto LAB_0010dea4;
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
         local_180 = *(long*)param_1;
      }

   }

   LAB_0010dea4:plVar7 = *(long**)( this + 0x98 );
   if (plVar7 != (long*)0x0) {
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      Variant::Variant((Variant*)&local_78, (String*)&local_180);
      Variant::Variant((Variant*)local_60, param_2);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar7 + 0x60 ) )(local_98, plVar7, this + 0x358, &local_a8, 2, &local_118);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_118 == 0) {
         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010dfad;
      }

      if (Variant::needs_deinit[local_60[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x360] == (EditorVCSInterface)0x0 )) {
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
      String::parse_latin1((String*)&local_118, "_push");
      local_e0 = CONCAT44(local_e0._4_4_, 0x88);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar6 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x368 ) = 0;
      pcVar3 = *(code**)( lVar6 + 0xd8 );
      if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xd0 ) ),pcVar3 == (code*)0x0) {
         local_158 = 0;
         String::parse_latin1((String*)&local_158, "EditorVCSInterface");
         StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, (StringName*)&local_150);
         if (local_140[0] == 0) {
            lVar6 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') goto LAB_0010e5a1;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            LAB_0010e5bf:lVar6 = *(long*)( this + 8 );
            pcVar3 = *(code**)( lVar6 + 200 );
            if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xc0 ) ),pcVar3 == (code*)0x0) goto LAB_0010e43d;
            uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ));
            *(undefined8*)( this + 0x368 ) = uVar5;
         }
 else {
            lVar6 = *(long*)( local_140[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') {
               LAB_0010e5a1:if (local_150 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            if (lVar6 == 0) goto LAB_0010e5bf;
         }

         lVar6 = *(long*)( this + 8 );
      }
 else {
         uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x358, uVar1);
         *(undefined8*)( this + 0x368 ) = uVar5;
         lVar6 = *(long*)( this + 8 );
      }

      LAB_0010e43d:if (*(char*)( lVar6 + 0x29 ) != '\0') {
         plVar7 = (long*)operator_new(0x18, "");
         *plVar7 = (long)( this + 0x368 );
         plVar7[1] = (long)( this + 0x360 );
         plVar7[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar7;
      }

      this[0x360] = (EditorVCSInterface)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   }

   pcVar3 = *(code**)( this + 0x368 );
   if (pcVar3 != (code*)0x0) {
      local_118 = 0;
      uStack_114 = 0;
      if (local_180 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_180);
         pcVar3 = *(code**)( this + 0x368 );
      }

      puStack_70 = &local_148;
      local_148 = CONCAT71(local_148._1_7_, param_2);
      local_78 = (CowData<char32_t>*)&local_118;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar3 )(*(undefined8*)( this + 0x10 ), &local_78, 0);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x358, pcVar3, &local_78, 0);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
      goto LAB_0010dfad;
   }

   if (_gdvirtual__push_call(String, bool), ::first_print == '\0') goto LAB_0010dfad;
   local_148 = 0;
   local_118 = 0x117018;
   uStack_114 = 0;
   uStack_110 = 0x23;
   uStack_10c = 0;
   String::parse_latin1((StrRange*)&local_148);
   local_118 = 0x114d4c;
   uStack_114 = 0;
   local_158 = 0;
   uStack_110 = 5;
   uStack_10c = 0;
   String::parse_latin1((StrRange*)&local_158);
   local_168 = 0;
   local_118 = 0x117aca;
   uStack_114 = 0;
   uStack_110 = 2;
   uStack_10c = 0;
   String::parse_latin1((StrRange*)&local_168);
   if (*(code**)( *(long*)this + 0x48 ) == get_class) {
      if (*(long*)( this + 8 ) == 0) {
         local_178 = 0;
         local_118 = 0x114fdc;
         uStack_114 = 0;
         uStack_110 = 0x12;
         uStack_10c = 0;
         LAB_0010e1d7:String::parse_latin1((StrRange*)&local_178);
      }
 else {
         lVar6 = *(long*)( *(long*)( this + 8 ) + 0x20 );
         if (lVar6 == 0) {
            local_178 = 0;
         }
 else {
            __s = *(char**)( lVar6 + 8 );
            local_178 = 0;
            if (__s != (char*)0x0) {
               sVar4 = strlen(__s);
               local_118 = (int)__s;
               uStack_114 = ( undefined4 )((ulong)__s >> 0x20);
               uStack_110 = (undefined4)sVar4;
               uStack_10c = ( undefined4 )(sVar4 >> 0x20);
               goto LAB_0010e1d7;
            }

            if (*(long*)( lVar6 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_178, (CowData*)( lVar6 + 0x10 ));
            }

         }

      }

   }
 else {
      ( **(code**)( *(long*)this + 0x48 ) )(&local_178, this);
   }

   local_190 = (CowData<char32_t>*)&local_178;
   operator+((char *)
   local_170,(String*)"Required virtual method ";
   String::operator +(local_160, (String*)local_170);
   String::operator +((String*)&local_150, local_160);
   String::operator +((String*)&local_118, (String*)&local_150);
   _err_print_error("_gdvirtual__push_call", "editor/editor_vcs_interface.h", 0x7f, (String*)&local_118, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_160);
   CowData<char32_t>::_unref(local_170);
   CowData<char32_t>::_unref(local_190);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   _gdvirtual__push_call(String,bool)::first_print =
   '\0';
   LAB_0010dfad:lVar6 = local_180;
   if (local_180 != 0) {
      LOCK();
      plVar7 = (long*)( local_180 + -0x10 );
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         local_180 = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorVCSInterface::pull(String const&) */void EditorVCSInterface::pull(EditorVCSInterface *this, String *param_1) {
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
   CowData<char32_t> *local_170;
   long local_160;
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
   undefined8 local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   CowData<char32_t> *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_160 = 0;
   if (*(long*)param_1 != 0) {
      plVar7 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar6 = *plVar7;
         if (lVar6 == 0) goto LAB_0010e6d1;
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
         local_160 = *(long*)param_1;
      }

   }

   LAB_0010e6d1:plVar7 = *(long**)( this + 0x98 );
   if (plVar7 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (String*)&local_160);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar7 + 0x60 ) )(local_58, plVar7, this + 0x340, &local_80, 1, &local_f8);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_f8 == 0) {
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010e7a6;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x348] == (EditorVCSInterface)0x0 )) {
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
      String::parse_latin1((String*)&local_f8, "_pull");
      local_c0 = CONCAT44(local_c0._4_4_, 0x88);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      Vector<int>::push_back(local_98, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar6 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x350 ) = 0;
      pcVar3 = *(code**)( lVar6 + 0xd8 );
      if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xd0 ) ),pcVar3 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "EditorVCSInterface");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120[0] == 0) {
            lVar6 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') goto LAB_0010ed1a;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_0010ed37:lVar6 = *(long*)( this + 8 );
            pcVar3 = *(code**)( lVar6 + 200 );
            if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xc0 ) ),pcVar3 == (code*)0x0) goto LAB_0010ebda;
            uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ));
            *(undefined8*)( this + 0x350 ) = uVar5;
         }
 else {
            lVar6 = *(long*)( local_120[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') {
               LAB_0010ed1a:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar6 == 0) goto LAB_0010ed37;
         }

         lVar6 = *(long*)( this + 8 );
      }
 else {
         uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x340, uVar1);
         *(undefined8*)( this + 0x350 ) = uVar5;
         lVar6 = *(long*)( this + 8 );
      }

      LAB_0010ebda:if (*(char*)( lVar6 + 0x29 ) != '\0') {
         plVar7 = (long*)operator_new(0x18, "");
         *plVar7 = (long)( this + 0x350 );
         plVar7[1] = (long)( this + 0x348 );
         plVar7[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar7;
      }

      this[0x348] = (EditorVCSInterface)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar3 = *(code**)( this + 0x350 );
   if (pcVar3 != (code*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      if (local_160 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_160);
         pcVar3 = *(code**)( this + 0x350 );
      }

      local_58[0] = (CowData<char32_t>*)&local_f8;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar3 )(*(undefined8*)( this + 0x10 ), local_58, 0);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x340, pcVar3, local_58, 0);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      goto LAB_0010e7a6;
   }

   if (_gdvirtual__pull_call(String) == '\0') goto LAB_0010e7a6;
   local_128 = 0;
   local_f8 = 0x117018;
   uStack_f4 = 0;
   uStack_f0 = 0x23;
   uStack_ec = 0;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = 0x114d40;
   uStack_f4 = 0;
   local_138 = 0;
   uStack_f0 = 5;
   uStack_ec = 0;
   String::parse_latin1((StrRange*)&local_138);
   local_148 = 0;
   local_f8 = 0x117aca;
   uStack_f4 = 0;
   uStack_f0 = 2;
   uStack_ec = 0;
   String::parse_latin1((StrRange*)&local_148);
   if (*(code**)( *(long*)this + 0x48 ) == get_class) {
      if (*(long*)( this + 8 ) == 0) {
         local_158 = 0;
         local_f8 = 0x114fdc;
         uStack_f4 = 0;
         uStack_f0 = 0x12;
         uStack_ec = 0;
         LAB_0010e9a0:String::parse_latin1((StrRange*)&local_158);
      }
 else {
         lVar6 = *(long*)( *(long*)( this + 8 ) + 0x20 );
         if (lVar6 == 0) {
            local_158 = 0;
         }
 else {
            __s = *(char**)( lVar6 + 8 );
            local_158 = 0;
            if (__s != (char*)0x0) {
               sVar4 = strlen(__s);
               local_f8 = (int)__s;
               uStack_f4 = ( undefined4 )((ulong)__s >> 0x20);
               uStack_f0 = (undefined4)sVar4;
               uStack_ec = ( undefined4 )(sVar4 >> 0x20);
               goto LAB_0010e9a0;
            }

            if (*(long*)( lVar6 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_158, (CowData*)( lVar6 + 0x10 ));
            }

         }

      }

   }
 else {
      ( **(code**)( *(long*)this + 0x48 ) )(&local_158, this);
   }

   local_170 = (CowData<char32_t>*)&local_158;
   operator+((char *)
   local_150,(String*)"Required virtual method ";
   String::operator +(local_140, (String*)local_150);
   String::operator +((String*)&local_130, local_140);
   String::operator +((String*)&local_f8, (String*)&local_130);
   _err_print_error("_gdvirtual__pull_call", "editor/editor_vcs_interface.h", 0x7e, (String*)&local_f8, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_140);
   CowData<char32_t>::_unref(local_150);
   CowData<char32_t>::_unref(local_170);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   _gdvirtual__pull_call(String)::first_print =
   '\0';
   LAB_0010e7a6:lVar6 = local_160;
   if (local_160 != 0) {
      LOCK();
      plVar7 = (long*)( local_160 + -0x10 );
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         local_160 = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorVCSInterface::checkout_branch(String const&) */ulong EditorVCSInterface::checkout_branch(EditorVCSInterface *this, String *param_1) {
   char *__s;
   undefined4 uVar1;
   long lVar2;
   code *pcVar3;
   size_t sVar4;
   undefined7 extraout_var;
   undefined8 uVar5;
   long lVar6;
   long *plVar7;
   GetTypeInfo<bool,void> *unaff_RBP;
   ulong uVar8;
   long in_FS_OFFSET;
   bool bVar9;
   CowData<char32_t> *local_170;
   long local_160;
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
   CowData<char32_t> *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_160 = 0;
   if (*(long*)param_1 != 0) {
      plVar7 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar6 = *plVar7;
         if (lVar6 == 0) goto LAB_0010ee51;
         LOCK();
         lVar2 = *plVar7;
         bVar9 = lVar6 == lVar2;
         if (bVar9) {
            *plVar7 = lVar6 + 1;
            lVar2 = lVar6;
         }

         UNLOCK();
      }
 while ( !bVar9 );
      if (lVar2 != -1) {
         local_160 = *(long*)param_1;
      }

   }

   LAB_0010ee51:plVar7 = *(long**)( this + 0x98 );
   if (plVar7 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (String*)&local_160);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar7 + 0x60 ) )((Variant*)local_58, plVar7, this + 0x328, &local_80, 1, &local_f8);
      if (local_f8 == 0) {
         bVar9 = Variant::operator_cast_to_bool((Variant*)local_58);
         uVar8 = CONCAT71(extraout_var, bVar9) & 0xffffffff;
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010ef26;
      }

      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x330] == (EditorVCSInterface)0x0 )) {
      unaff_RBP = (GetTypeInfo<bool,void>*)&local_128;
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
      String::parse_latin1((String*)&local_f8, "_checkout_branch");
      local_c0 = CONCAT44(local_c0._4_4_, 0x88);
      GetTypeInfo<bool,void>::get_class_info(unaff_RBP);
      PropertyInfo::operator =((PropertyInfo*)&uStack_f0, (PropertyInfo*)unaff_RBP);
      PropertyInfo::~PropertyInfo((PropertyInfo*)unaff_RBP);
      local_a0 = local_a0 & 0xffffffff00000000;
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)unaff_RBP);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)unaff_RBP);
      PropertyInfo::~PropertyInfo((PropertyInfo*)unaff_RBP);
      Vector<int>::push_back(local_98, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar6 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x338 ) = 0;
      pcVar3 = *(code**)( lVar6 + 0xd8 );
      if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xd0 ) ),pcVar3 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "EditorVCSInterface");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)unaff_RBP, (StringName*)&local_130);
         if (local_120[0] == 0) {
            unaff_RBP = (GetTypeInfo<bool,void>*)0x0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') goto LAB_0010f50c;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_0010f529:lVar6 = *(long*)( this + 8 );
            pcVar3 = *(code**)( lVar6 + 200 );
            if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xc0 ) ),pcVar3 == (code*)0x0) goto LAB_0010f3ad;
            uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ));
            *(undefined8*)( this + 0x338 ) = uVar5;
         }
 else {
            unaff_RBP = *(GetTypeInfo<bool,void>**)( local_120[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') {
               LAB_0010f50c:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (unaff_RBP == (GetTypeInfo<bool,void>*)0x0) goto LAB_0010f529;
         }

         lVar6 = *(long*)( this + 8 );
      }
 else {
         uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x328, uVar1);
         *(undefined8*)( this + 0x338 ) = uVar5;
         lVar6 = *(long*)( this + 8 );
      }

      LAB_0010f3ad:if (*(char*)( lVar6 + 0x29 ) != '\0') {
         plVar7 = (long*)operator_new(0x18, "");
         *plVar7 = (long)( this + 0x338 );
         plVar7[1] = (long)( this + 0x330 );
         plVar7[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar7;
      }

      this[0x330] = (EditorVCSInterface)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar3 = *(code**)( this + 0x338 );
   if (pcVar3 != (code*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      if (local_160 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_160);
         pcVar3 = *(code**)( this + 0x338 );
      }

      local_58[0] = (CowData<char32_t>*)&local_f8;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar3 )(*(undefined8*)( this + 0x10 ), local_58, &local_128);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x328, pcVar3, local_58, &local_128);
      }

      uVar8 = CONCAT71(( int7 )((ulong)unaff_RBP >> 8), local_128._0_1_ != (StrRange)0x0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      goto LAB_0010ef26;
   }

   if (_gdvirtual__checkout_branch_call(String, bool&), ::first_print != '\0') {
      local_128 = 0;
      local_f8 = 0x117018;
      uStack_f4 = 0;
      uStack_f0 = 0x23;
      uStack_ec = 0;
      String::parse_latin1((StrRange*)&local_128);
      local_f8 = 0x114d28;
      uStack_f4 = 0;
      local_138 = 0;
      uStack_f0 = 0x10;
      uStack_ec = 0;
      String::parse_latin1((StrRange*)&local_138);
      local_148 = 0;
      local_f8 = 0x117aca;
      uStack_f4 = 0;
      uStack_f0 = 2;
      uStack_ec = 0;
      String::parse_latin1((StrRange*)&local_148);
      if (*(code**)( *(long*)this + 0x48 ) == get_class) {
         if (*(long*)( this + 8 ) == 0) {
            local_158 = 0;
            local_f8 = 0x114fdc;
            uStack_f4 = 0;
            uStack_f0 = 0x12;
            uStack_ec = 0;
            LAB_0010f108:String::parse_latin1((StrRange*)&local_158);
         }
 else {
            lVar6 = *(long*)( *(long*)( this + 8 ) + 0x20 );
            if (lVar6 == 0) {
               local_158 = 0;
            }
 else {
               __s = *(char**)( lVar6 + 8 );
               local_158 = 0;
               if (__s != (char*)0x0) {
                  sVar4 = strlen(__s);
                  local_f8 = (int)__s;
                  uStack_f4 = ( undefined4 )((ulong)__s >> 0x20);
                  uStack_f0 = (undefined4)sVar4;
                  uStack_ec = ( undefined4 )(sVar4 >> 0x20);
                  goto LAB_0010f108;
               }

               if (*(long*)( lVar6 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_158, (CowData*)( lVar6 + 0x10 ));
               }

            }

         }

      }
 else {
         ( **(code**)( *(long*)this + 0x48 ) )(&local_158, this);
      }

      local_170 = (CowData<char32_t>*)&local_158;
      operator+((char *)
      local_150,(String*)"Required virtual method ";
      String::operator +(local_140, (String*)local_150);
      String::operator +((String*)&local_130, local_140);
      String::operator +((String*)&local_f8, (String*)&local_130);
      _err_print_error("_gdvirtual__checkout_branch_call", "editor/editor_vcs_interface.h", 0x7d, (String*)&local_f8, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_140);
      CowData<char32_t>::_unref(local_150);
      CowData<char32_t>::_unref(local_170);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
      _gdvirtual__checkout_branch_call(String,bool&)::first_print =
      '\0';
   }

   uVar8 = 0;
   LAB_0010ef26:lVar6 = local_160;
   if (local_160 != 0) {
      LOCK();
      plVar7 = (long*)( local_160 + -0x10 );
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         local_160 = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar8 & 0xffffffff;
}
/* EditorVCSInterface::remove_remote(String const&) */void EditorVCSInterface::remove_remote(EditorVCSInterface *this, String *param_1) {
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
   CowData<char32_t> *local_170;
   long local_160;
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
   undefined8 local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   CowData<char32_t> *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_160 = 0;
   if (*(long*)param_1 != 0) {
      plVar7 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar6 = *plVar7;
         if (lVar6 == 0) goto LAB_0010f641;
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
         local_160 = *(long*)param_1;
      }

   }

   LAB_0010f641:plVar7 = *(long**)( this + 0x98 );
   if (plVar7 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (String*)&local_160);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar7 + 0x60 ) )(local_58, plVar7, this + 0x2f8, &local_80, 1, &local_f8);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_f8 == 0) {
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010f716;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x300] == (EditorVCSInterface)0x0 )) {
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
      String::parse_latin1((String*)&local_f8, "_remove_remote");
      local_c0 = CONCAT44(local_c0._4_4_, 0x88);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      Vector<int>::push_back(local_98, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar6 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x308 ) = 0;
      pcVar3 = *(code**)( lVar6 + 0xd8 );
      if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xd0 ) ),pcVar3 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "EditorVCSInterface");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120[0] == 0) {
            lVar6 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') goto LAB_0010fc8a;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_0010fca7:lVar6 = *(long*)( this + 8 );
            pcVar3 = *(code**)( lVar6 + 200 );
            if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xc0 ) ),pcVar3 == (code*)0x0) goto LAB_0010fb4a;
            uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ));
            *(undefined8*)( this + 0x308 ) = uVar5;
         }
 else {
            lVar6 = *(long*)( local_120[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') {
               LAB_0010fc8a:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar6 == 0) goto LAB_0010fca7;
         }

         lVar6 = *(long*)( this + 8 );
      }
 else {
         uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x2f8, uVar1);
         *(undefined8*)( this + 0x308 ) = uVar5;
         lVar6 = *(long*)( this + 8 );
      }

      LAB_0010fb4a:if (*(char*)( lVar6 + 0x29 ) != '\0') {
         plVar7 = (long*)operator_new(0x18, "");
         *plVar7 = (long)( this + 0x308 );
         plVar7[1] = (long)( this + 0x300 );
         plVar7[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar7;
      }

      this[0x300] = (EditorVCSInterface)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar3 = *(code**)( this + 0x308 );
   if (pcVar3 != (code*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      if (local_160 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_160);
         pcVar3 = *(code**)( this + 0x308 );
      }

      local_58[0] = (CowData<char32_t>*)&local_f8;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar3 )(*(undefined8*)( this + 0x10 ), local_58, 0);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x2f8, pcVar3, local_58, 0);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      goto LAB_0010f716;
   }

   if (_gdvirtual__remove_remote_call(String) == '\0') goto LAB_0010f716;
   local_128 = 0;
   local_f8 = 0x117018;
   uStack_f4 = 0;
   uStack_f0 = 0x23;
   uStack_ec = 0;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = 0x114d19;
   uStack_f4 = 0;
   local_138 = 0;
   uStack_f0 = 0xe;
   uStack_ec = 0;
   String::parse_latin1((StrRange*)&local_138);
   local_148 = 0;
   local_f8 = 0x117aca;
   uStack_f4 = 0;
   uStack_f0 = 2;
   uStack_ec = 0;
   String::parse_latin1((StrRange*)&local_148);
   if (*(code**)( *(long*)this + 0x48 ) == get_class) {
      if (*(long*)( this + 8 ) == 0) {
         local_158 = 0;
         local_f8 = 0x114fdc;
         uStack_f4 = 0;
         uStack_f0 = 0x12;
         uStack_ec = 0;
         LAB_0010f910:String::parse_latin1((StrRange*)&local_158);
      }
 else {
         lVar6 = *(long*)( *(long*)( this + 8 ) + 0x20 );
         if (lVar6 == 0) {
            local_158 = 0;
         }
 else {
            __s = *(char**)( lVar6 + 8 );
            local_158 = 0;
            if (__s != (char*)0x0) {
               sVar4 = strlen(__s);
               local_f8 = (int)__s;
               uStack_f4 = ( undefined4 )((ulong)__s >> 0x20);
               uStack_f0 = (undefined4)sVar4;
               uStack_ec = ( undefined4 )(sVar4 >> 0x20);
               goto LAB_0010f910;
            }

            if (*(long*)( lVar6 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_158, (CowData*)( lVar6 + 0x10 ));
            }

         }

      }

   }
 else {
      ( **(code**)( *(long*)this + 0x48 ) )(&local_158, this);
   }

   local_170 = (CowData<char32_t>*)&local_158;
   operator+((char *)
   local_150,(String*)"Required virtual method ";
   String::operator +(local_140, (String*)local_150);
   String::operator +((String*)&local_130, local_140);
   String::operator +((String*)&local_f8, (String*)&local_130);
   _err_print_error("_gdvirtual__remove_remote_call", "editor/editor_vcs_interface.h", 0x7b, (String*)&local_f8, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_140);
   CowData<char32_t>::_unref(local_150);
   CowData<char32_t>::_unref(local_170);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   _gdvirtual__remove_remote_call(String)::first_print =
   '\0';
   LAB_0010f716:lVar6 = local_160;
   if (local_160 != 0) {
      LOCK();
      plVar7 = (long*)( local_160 + -0x10 );
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         local_160 = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorVCSInterface::remove_branch(String const&) */void EditorVCSInterface::remove_branch(EditorVCSInterface *this, String *param_1) {
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
   CowData<char32_t> *local_170;
   long local_160;
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
   undefined8 local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   CowData<char32_t> *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_160 = 0;
   if (*(long*)param_1 != 0) {
      plVar7 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar6 = *plVar7;
         if (lVar6 == 0) goto LAB_0010fdc1;
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
         local_160 = *(long*)param_1;
      }

   }

   LAB_0010fdc1:plVar7 = *(long**)( this + 0x98 );
   if (plVar7 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (String*)&local_160);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar7 + 0x60 ) )(local_58, plVar7, this + 0x2c8, &local_80, 1, &local_f8);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_f8 == 0) {
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010fe96;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x2d0] == (EditorVCSInterface)0x0 )) {
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
      String::parse_latin1((String*)&local_f8, "_remove_branch");
      local_c0 = CONCAT44(local_c0._4_4_, 0x88);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      Vector<int>::push_back(local_98, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar6 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x2d8 ) = 0;
      pcVar3 = *(code**)( lVar6 + 0xd8 );
      if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xd0 ) ),pcVar3 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "EditorVCSInterface");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120[0] == 0) {
            lVar6 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') goto LAB_0011040a;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_00110427:lVar6 = *(long*)( this + 8 );
            pcVar3 = *(code**)( lVar6 + 200 );
            if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xc0 ) ),pcVar3 == (code*)0x0) goto LAB_001102ca;
            uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ));
            *(undefined8*)( this + 0x2d8 ) = uVar5;
         }
 else {
            lVar6 = *(long*)( local_120[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') {
               LAB_0011040a:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar6 == 0) goto LAB_00110427;
         }

         lVar6 = *(long*)( this + 8 );
      }
 else {
         uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x2c8, uVar1);
         *(undefined8*)( this + 0x2d8 ) = uVar5;
         lVar6 = *(long*)( this + 8 );
      }

      LAB_001102ca:if (*(char*)( lVar6 + 0x29 ) != '\0') {
         plVar7 = (long*)operator_new(0x18, "");
         *plVar7 = (long)( this + 0x2d8 );
         plVar7[1] = (long)( this + 0x2d0 );
         plVar7[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar7;
      }

      this[0x2d0] = (EditorVCSInterface)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar3 = *(code**)( this + 0x2d8 );
   if (pcVar3 != (code*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      if (local_160 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_160);
         pcVar3 = *(code**)( this + 0x2d8 );
      }

      local_58[0] = (CowData<char32_t>*)&local_f8;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar3 )(*(undefined8*)( this + 0x10 ), local_58, 0);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x2c8, pcVar3, local_58, 0);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      goto LAB_0010fe96;
   }

   if (_gdvirtual__remove_branch_call(String) == '\0') goto LAB_0010fe96;
   local_128 = 0;
   local_f8 = 0x117018;
   uStack_f4 = 0;
   uStack_f0 = 0x23;
   uStack_ec = 0;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = 0x114ce4;
   uStack_f4 = 0;
   local_138 = 0;
   uStack_f0 = 0xe;
   uStack_ec = 0;
   String::parse_latin1((StrRange*)&local_138);
   local_148 = 0;
   local_f8 = 0x117aca;
   uStack_f4 = 0;
   uStack_f0 = 2;
   uStack_ec = 0;
   String::parse_latin1((StrRange*)&local_148);
   if (*(code**)( *(long*)this + 0x48 ) == get_class) {
      if (*(long*)( this + 8 ) == 0) {
         local_158 = 0;
         local_f8 = 0x114fdc;
         uStack_f4 = 0;
         uStack_f0 = 0x12;
         uStack_ec = 0;
         LAB_00110090:String::parse_latin1((StrRange*)&local_158);
      }
 else {
         lVar6 = *(long*)( *(long*)( this + 8 ) + 0x20 );
         if (lVar6 == 0) {
            local_158 = 0;
         }
 else {
            __s = *(char**)( lVar6 + 8 );
            local_158 = 0;
            if (__s != (char*)0x0) {
               sVar4 = strlen(__s);
               local_f8 = (int)__s;
               uStack_f4 = ( undefined4 )((ulong)__s >> 0x20);
               uStack_f0 = (undefined4)sVar4;
               uStack_ec = ( undefined4 )(sVar4 >> 0x20);
               goto LAB_00110090;
            }

            if (*(long*)( lVar6 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_158, (CowData*)( lVar6 + 0x10 ));
            }

         }

      }

   }
 else {
      ( **(code**)( *(long*)this + 0x48 ) )(&local_158, this);
   }

   local_170 = (CowData<char32_t>*)&local_158;
   operator+((char *)
   local_150,(String*)"Required virtual method ";
   String::operator +(local_140, (String*)local_150);
   String::operator +((String*)&local_130, local_140);
   String::operator +((String*)&local_f8, (String*)&local_130);
   _err_print_error("_gdvirtual__remove_branch_call", "editor/editor_vcs_interface.h", 0x79, (String*)&local_f8, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_140);
   CowData<char32_t>::_unref(local_150);
   CowData<char32_t>::_unref(local_170);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   _gdvirtual__remove_branch_call(String)::first_print =
   '\0';
   LAB_0010fe96:lVar6 = local_160;
   if (local_160 != 0) {
      LOCK();
      plVar7 = (long*)( local_160 + -0x10 );
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         local_160 = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorVCSInterface::create_remote(String const&, String const&) */void EditorVCSInterface::create_remote(EditorVCSInterface *this, String *param_1, String *param_2) {
   char *__s;
   undefined4 uVar1;
   long lVar2;
   size_t sVar3;
   undefined8 uVar4;
   long lVar5;
   long *plVar6;
   code *pcVar7;
   long in_FS_OFFSET;
   bool bVar8;
   CowData<char32_t> *local_190;
   long local_188;
   long local_180;
   undefined8 local_178;
   CowData<char32_t> local_170[8];
   undefined8 local_168;
   String local_160[8];
   undefined8 local_158;
   long local_150;
   undefined8 local_148;
   long local_140[5];
   int local_118;
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
   undefined8 local_c0;
   Vector<int> local_b8[8];
   undefined8 local_b0;
   Variant *local_a8;
   Variant *pVStack_a0;
   int local_98[8];
   CowData<char32_t> *local_78;
   CowData<char32_t> *pCStack_70;
   int local_60[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_180 = 0;
   if (*(long*)param_2 != 0) {
      plVar6 = (long*)( *(long*)param_2 + -0x10 );
      do {
         lVar5 = *plVar6;
         if (lVar5 == 0) goto LAB_00110544;
         LOCK();
         lVar2 = *plVar6;
         bVar8 = lVar5 == lVar2;
         if (bVar8) {
            *plVar6 = lVar5 + 1;
            lVar2 = lVar5;
         }

         UNLOCK();
      }
 while ( !bVar8 );
      if (lVar2 != -1) {
         local_180 = *(long*)param_2;
      }

   }

   LAB_00110544:local_188 = 0;
   plVar6 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 != 0) {
      do {
         lVar5 = *plVar6;
         if (lVar5 == 0) goto LAB_0011057a;
         LOCK();
         lVar2 = *plVar6;
         bVar8 = lVar5 == lVar2;
         if (bVar8) {
            *plVar6 = lVar5 + 1;
            lVar2 = lVar5;
         }

         UNLOCK();
      }
 while ( !bVar8 );
      if (lVar2 != -1) {
         local_188 = *(long*)param_1;
      }

   }

   LAB_0011057a:plVar6 = *(long**)( this + 0x98 );
   if (plVar6 != (long*)0x0) {
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      Variant::Variant((Variant*)&local_78, (String*)&local_188);
      Variant::Variant((Variant*)local_60, (String*)&local_180);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar6 + 0x60 ) )(local_98, plVar6, this + 0x2e0, &local_a8, 2, &local_118);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_118 == 0) {
         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00110686;
      }

      if (Variant::needs_deinit[local_60[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x2e8] == (EditorVCSInterface)0x0 )) {
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
      String::parse_latin1((String*)&local_118, "_create_remote");
      local_e0 = CONCAT44(local_e0._4_4_, 0x88);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar5 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x2f0 ) = 0;
      pcVar7 = *(code**)( lVar5 + 0xd8 );
      if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xd0 ) ),pcVar7 == (code*)0x0) {
         local_158 = 0;
         String::parse_latin1((String*)&local_158, "EditorVCSInterface");
         StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, (StringName*)&local_150);
         if (local_140[0] == 0) {
            lVar5 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') goto LAB_00110cbc;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            LAB_00110cd9:lVar5 = *(long*)( this + 8 );
            pcVar7 = *(code**)( lVar5 + 200 );
            if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xc0 ) ),pcVar7 == (code*)0x0) goto LAB_00110b5d;
            uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ));
            *(undefined8*)( this + 0x2f0 ) = uVar4;
         }
 else {
            lVar5 = *(long*)( local_140[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') {
               LAB_00110cbc:if (local_150 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            if (lVar5 == 0) goto LAB_00110cd9;
         }

         lVar5 = *(long*)( this + 8 );
      }
 else {
         uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x2e0, uVar1);
         *(undefined8*)( this + 0x2f0 ) = uVar4;
         lVar5 = *(long*)( this + 8 );
      }

      LAB_00110b5d:if (*(char*)( lVar5 + 0x29 ) != '\0') {
         plVar6 = (long*)operator_new(0x18, "");
         *plVar6 = (long)( this + 0x2f0 );
         plVar6[1] = (long)( this + 0x2e8 );
         plVar6[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar6;
      }

      this[0x2e8] = (EditorVCSInterface)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   }

   if (*(long*)( this + 0x2f0 ) != 0) {
      local_148 = 0;
      if (local_188 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_148, (CowData*)&local_188);
      }

      local_118 = 0;
      uStack_114 = 0;
      if (local_180 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_180);
      }

      local_78 = (CowData<char32_t>*)&local_148;
      pCStack_70 = (CowData<char32_t>*)&local_118;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 0x2f0 ) )(*(undefined8*)( this + 0x10 ), &local_78, 0);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x2e0, *(code**)( this + 0x2f0 ), &local_78, 0);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
      goto LAB_00110686;
   }

   if (_gdvirtual__create_remote_call(String, String) == '\0') goto LAB_00110686;
   local_148 = 0;
   local_118 = 0x117018;
   uStack_114 = 0;
   uStack_110 = 0x23;
   uStack_10c = 0;
   String::parse_latin1((StrRange*)&local_148);
   local_118 = 0x114d0a;
   uStack_114 = 0;
   local_158 = 0;
   uStack_110 = 0xe;
   uStack_10c = 0;
   String::parse_latin1((StrRange*)&local_158);
   local_168 = 0;
   local_118 = 0x117aca;
   uStack_114 = 0;
   uStack_110 = 2;
   uStack_10c = 0;
   String::parse_latin1((StrRange*)&local_168);
   if (*(code**)( *(long*)this + 0x48 ) == get_class) {
      if (*(long*)( this + 8 ) == 0) {
         local_178 = 0;
         local_118 = 0x114fdc;
         uStack_114 = 0;
         uStack_110 = 0x12;
         uStack_10c = 0;
         LAB_001108f8:String::parse_latin1((StrRange*)&local_178);
      }
 else {
         lVar5 = *(long*)( *(long*)( this + 8 ) + 0x20 );
         if (lVar5 == 0) {
            local_178 = 0;
         }
 else {
            __s = *(char**)( lVar5 + 8 );
            local_178 = 0;
            if (__s != (char*)0x0) {
               sVar3 = strlen(__s);
               local_118 = (int)__s;
               uStack_114 = ( undefined4 )((ulong)__s >> 0x20);
               uStack_110 = (undefined4)sVar3;
               uStack_10c = ( undefined4 )(sVar3 >> 0x20);
               goto LAB_001108f8;
            }

            if (*(long*)( lVar5 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_178, (CowData*)( lVar5 + 0x10 ));
            }

         }

      }

   }
 else {
      ( **(code**)( *(long*)this + 0x48 ) )(&local_178, this);
   }

   local_190 = (CowData<char32_t>*)&local_178;
   operator+((char *)
   local_170,(String*)"Required virtual method ";
   String::operator +(local_160, (String*)local_170);
   String::operator +((String*)&local_150, local_160);
   String::operator +((String*)&local_118, (String*)&local_150);
   _err_print_error("_gdvirtual__create_remote_call", "editor/editor_vcs_interface.h", 0x7a, (String*)&local_118, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_160);
   CowData<char32_t>::_unref(local_170);
   CowData<char32_t>::_unref(local_190);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   _gdvirtual__create_remote_call(String,String)::first_print =
   '\0';
   LAB_00110686:lVar5 = local_188;
   if (local_188 != 0) {
      LOCK();
      plVar6 = (long*)( local_188 + -0x10 );
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         local_188 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   lVar5 = local_180;
   if (local_180 != 0) {
      LOCK();
      plVar6 = (long*)( local_180 + -0x10 );
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         local_180 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorVCSInterface::create_branch(String const&) */void EditorVCSInterface::create_branch(EditorVCSInterface *this, String *param_1) {
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
   CowData<char32_t> *local_170;
   long local_160;
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
   undefined8 local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   CowData<char32_t> *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_160 = 0;
   if (*(long*)param_1 != 0) {
      plVar7 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar6 = *plVar7;
         if (lVar6 == 0) goto LAB_00110df1;
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
         local_160 = *(long*)param_1;
      }

   }

   LAB_00110df1:plVar7 = *(long**)( this + 0x98 );
   if (plVar7 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (String*)&local_160);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar7 + 0x60 ) )(local_58, plVar7, this + 0x2b0, &local_80, 1, &local_f8);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_f8 == 0) {
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00110ec6;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x2b8] == (EditorVCSInterface)0x0 )) {
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
      String::parse_latin1((String*)&local_f8, "_create_branch");
      local_c0 = CONCAT44(local_c0._4_4_, 0x88);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      Vector<int>::push_back(local_98, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar6 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x2c0 ) = 0;
      pcVar3 = *(code**)( lVar6 + 0xd8 );
      if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xd0 ) ),pcVar3 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "EditorVCSInterface");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120[0] == 0) {
            lVar6 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') goto LAB_0011143a;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_00111457:lVar6 = *(long*)( this + 8 );
            pcVar3 = *(code**)( lVar6 + 200 );
            if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xc0 ) ),pcVar3 == (code*)0x0) goto LAB_001112fa;
            uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ));
            *(undefined8*)( this + 0x2c0 ) = uVar5;
         }
 else {
            lVar6 = *(long*)( local_120[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') {
               LAB_0011143a:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar6 == 0) goto LAB_00111457;
         }

         lVar6 = *(long*)( this + 8 );
      }
 else {
         uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x2b0, uVar1);
         *(undefined8*)( this + 0x2c0 ) = uVar5;
         lVar6 = *(long*)( this + 8 );
      }

      LAB_001112fa:if (*(char*)( lVar6 + 0x29 ) != '\0') {
         plVar7 = (long*)operator_new(0x18, "");
         *plVar7 = (long)( this + 0x2c0 );
         plVar7[1] = (long)( this + 0x2b8 );
         plVar7[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar7;
      }

      this[0x2b8] = (EditorVCSInterface)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar3 = *(code**)( this + 0x2c0 );
   if (pcVar3 != (code*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      if (local_160 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_160);
         pcVar3 = *(code**)( this + 0x2c0 );
      }

      local_58[0] = (CowData<char32_t>*)&local_f8;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar3 )(*(undefined8*)( this + 0x10 ), local_58, 0);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x2b0, pcVar3, local_58, 0);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      goto LAB_00110ec6;
   }

   if (_gdvirtual__create_branch_call(String) == '\0') goto LAB_00110ec6;
   local_128 = 0;
   local_f8 = 0x117018;
   uStack_f4 = 0;
   uStack_f0 = 0x23;
   uStack_ec = 0;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = 0x114cd5;
   uStack_f4 = 0;
   local_138 = 0;
   uStack_f0 = 0xe;
   uStack_ec = 0;
   String::parse_latin1((StrRange*)&local_138);
   local_148 = 0;
   local_f8 = 0x117aca;
   uStack_f4 = 0;
   uStack_f0 = 2;
   uStack_ec = 0;
   String::parse_latin1((StrRange*)&local_148);
   if (*(code**)( *(long*)this + 0x48 ) == get_class) {
      if (*(long*)( this + 8 ) == 0) {
         local_158 = 0;
         local_f8 = 0x114fdc;
         uStack_f4 = 0;
         uStack_f0 = 0x12;
         uStack_ec = 0;
         LAB_001110c0:String::parse_latin1((StrRange*)&local_158);
      }
 else {
         lVar6 = *(long*)( *(long*)( this + 8 ) + 0x20 );
         if (lVar6 == 0) {
            local_158 = 0;
         }
 else {
            __s = *(char**)( lVar6 + 8 );
            local_158 = 0;
            if (__s != (char*)0x0) {
               sVar4 = strlen(__s);
               local_f8 = (int)__s;
               uStack_f4 = ( undefined4 )((ulong)__s >> 0x20);
               uStack_f0 = (undefined4)sVar4;
               uStack_ec = ( undefined4 )(sVar4 >> 0x20);
               goto LAB_001110c0;
            }

            if (*(long*)( lVar6 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_158, (CowData*)( lVar6 + 0x10 ));
            }

         }

      }

   }
 else {
      ( **(code**)( *(long*)this + 0x48 ) )(&local_158, this);
   }

   local_170 = (CowData<char32_t>*)&local_158;
   operator+((char *)
   local_150,(String*)"Required virtual method ";
   String::operator +(local_140, (String*)local_150);
   String::operator +((String*)&local_130, local_140);
   String::operator +((String*)&local_f8, (String*)&local_130);
   _err_print_error("_gdvirtual__create_branch_call", "editor/editor_vcs_interface.h", 0x78, (String*)&local_f8, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_140);
   CowData<char32_t>::_unref(local_150);
   CowData<char32_t>::_unref(local_170);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   _gdvirtual__create_branch_call(String)::first_print =
   '\0';
   LAB_00110ec6:lVar6 = local_160;
   if (local_160 != 0) {
      LOCK();
      plVar7 = (long*)( local_160 + -0x10 );
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         local_160 = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorVCSInterface::commit(String const&) */void EditorVCSInterface::commit(EditorVCSInterface *this, String *param_1) {
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
   CowData<char32_t> *local_170;
   long local_160;
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
   undefined8 local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   CowData<char32_t> *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_160 = 0;
   if (*(long*)param_1 != 0) {
      plVar7 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar6 = *plVar7;
         if (lVar6 == 0) goto LAB_00111571;
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
         local_160 = *(long*)param_1;
      }

   }

   LAB_00111571:plVar7 = *(long**)( this + 0x98 );
   if (plVar7 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (String*)&local_160);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar7 + 0x60 ) )(local_58, plVar7, this + 0x208, &local_80, 1, &local_f8);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_f8 == 0) {
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00111646;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x210] == (EditorVCSInterface)0x0 )) {
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
      String::parse_latin1((String*)&local_f8, "_commit");
      local_c0 = CONCAT44(local_c0._4_4_, 0x88);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      Vector<int>::push_back(local_98, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar6 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x218 ) = 0;
      pcVar3 = *(code**)( lVar6 + 0xd8 );
      if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xd0 ) ),pcVar3 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "EditorVCSInterface");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120[0] == 0) {
            lVar6 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') goto LAB_00111bba;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_00111bd7:lVar6 = *(long*)( this + 8 );
            pcVar3 = *(code**)( lVar6 + 200 );
            if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xc0 ) ),pcVar3 == (code*)0x0) goto LAB_00111a7a;
            uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ));
            *(undefined8*)( this + 0x218 ) = uVar5;
         }
 else {
            lVar6 = *(long*)( local_120[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') {
               LAB_00111bba:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar6 == 0) goto LAB_00111bd7;
         }

         lVar6 = *(long*)( this + 8 );
      }
 else {
         uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x208, uVar1);
         *(undefined8*)( this + 0x218 ) = uVar5;
         lVar6 = *(long*)( this + 8 );
      }

      LAB_00111a7a:if (*(char*)( lVar6 + 0x29 ) != '\0') {
         plVar7 = (long*)operator_new(0x18, "");
         *plVar7 = (long)( this + 0x218 );
         plVar7[1] = (long)( this + 0x210 );
         plVar7[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar7;
      }

      this[0x210] = (EditorVCSInterface)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar3 = *(code**)( this + 0x218 );
   if (pcVar3 != (code*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      if (local_160 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_160);
         pcVar3 = *(code**)( this + 0x218 );
      }

      local_58[0] = (CowData<char32_t>*)&local_f8;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar3 )(*(undefined8*)( this + 0x10 ), local_58, 0);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x208, pcVar3, local_58, 0);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      goto LAB_00111646;
   }

   if (_gdvirtual__commit_call(String) == '\0') goto LAB_00111646;
   local_128 = 0;
   local_f8 = 0x117018;
   uStack_f4 = 0;
   uStack_f0 = 0x23;
   uStack_ec = 0;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = 0x114caa;
   uStack_f4 = 0;
   local_138 = 0;
   uStack_f0 = 7;
   uStack_ec = 0;
   String::parse_latin1((StrRange*)&local_138);
   local_148 = 0;
   local_f8 = 0x117aca;
   uStack_f4 = 0;
   uStack_f0 = 2;
   uStack_ec = 0;
   String::parse_latin1((StrRange*)&local_148);
   if (*(code**)( *(long*)this + 0x48 ) == get_class) {
      if (*(long*)( this + 8 ) == 0) {
         local_158 = 0;
         local_f8 = 0x114fdc;
         uStack_f4 = 0;
         uStack_f0 = 0x12;
         uStack_ec = 0;
         LAB_00111840:String::parse_latin1((StrRange*)&local_158);
      }
 else {
         lVar6 = *(long*)( *(long*)( this + 8 ) + 0x20 );
         if (lVar6 == 0) {
            local_158 = 0;
         }
 else {
            __s = *(char**)( lVar6 + 8 );
            local_158 = 0;
            if (__s != (char*)0x0) {
               sVar4 = strlen(__s);
               local_f8 = (int)__s;
               uStack_f4 = ( undefined4 )((ulong)__s >> 0x20);
               uStack_f0 = (undefined4)sVar4;
               uStack_ec = ( undefined4 )(sVar4 >> 0x20);
               goto LAB_00111840;
            }

            if (*(long*)( lVar6 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_158, (CowData*)( lVar6 + 0x10 ));
            }

         }

      }

   }
 else {
      ( **(code**)( *(long*)this + 0x48 ) )(&local_158, this);
   }

   local_170 = (CowData<char32_t>*)&local_158;
   operator+((char *)
   local_150,(String*)"Required virtual method ";
   String::operator +(local_140, (String*)local_150);
   String::operator +((String*)&local_130, local_140);
   String::operator +((String*)&local_f8, (String*)&local_130);
   _err_print_error("_gdvirtual__commit_call", "editor/editor_vcs_interface.h", 0x71, (String*)&local_f8, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_140);
   CowData<char32_t>::_unref(local_150);
   CowData<char32_t>::_unref(local_170);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   _gdvirtual__commit_call(String)::first_print =
   '\0';
   LAB_00111646:lVar6 = local_160;
   if (local_160 != 0) {
      LOCK();
      plVar7 = (long*)( local_160 + -0x10 );
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         local_160 = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorVCSInterface::discard_file(String const&) */void EditorVCSInterface::discard_file(EditorVCSInterface *this, String *param_1) {
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
   CowData<char32_t> *local_170;
   long local_160;
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
   undefined8 local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   CowData<char32_t> *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_160 = 0;
   if (*(long*)param_1 != 0) {
      plVar7 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar6 = *plVar7;
         if (lVar6 == 0) goto LAB_00111cf1;
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
         local_160 = *(long*)param_1;
      }

   }

   LAB_00111cf1:plVar7 = *(long**)( this + 0x98 );
   if (plVar7 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (String*)&local_160);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar7 + 0x60 ) )(local_58, plVar7, this + 0x1f0, &local_80, 1, &local_f8);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_f8 == 0) {
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00111dc6;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1f8] == (EditorVCSInterface)0x0 )) {
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
      String::parse_latin1((String*)&local_f8, "_discard_file");
      local_c0 = CONCAT44(local_c0._4_4_, 0x88);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      Vector<int>::push_back(local_98, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar6 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x200 ) = 0;
      pcVar3 = *(code**)( lVar6 + 0xd8 );
      if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xd0 ) ),pcVar3 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "EditorVCSInterface");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120[0] == 0) {
            lVar6 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') goto LAB_0011233a;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_00112357:lVar6 = *(long*)( this + 8 );
            pcVar3 = *(code**)( lVar6 + 200 );
            if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xc0 ) ),pcVar3 == (code*)0x0) goto LAB_001121fa;
            uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ));
            *(undefined8*)( this + 0x200 ) = uVar5;
         }
 else {
            lVar6 = *(long*)( local_120[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') {
               LAB_0011233a:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar6 == 0) goto LAB_00112357;
         }

         lVar6 = *(long*)( this + 8 );
      }
 else {
         uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x1f0, uVar1);
         *(undefined8*)( this + 0x200 ) = uVar5;
         lVar6 = *(long*)( this + 8 );
      }

      LAB_001121fa:if (*(char*)( lVar6 + 0x29 ) != '\0') {
         plVar7 = (long*)operator_new(0x18, "");
         *plVar7 = (long)( this + 0x200 );
         plVar7[1] = (long)( this + 0x1f8 );
         plVar7[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar7;
      }

      this[0x1f8] = (EditorVCSInterface)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar3 = *(code**)( this + 0x200 );
   if (pcVar3 != (code*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      if (local_160 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_160);
         pcVar3 = *(code**)( this + 0x200 );
      }

      local_58[0] = (CowData<char32_t>*)&local_f8;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar3 )(*(undefined8*)( this + 0x10 ), local_58, 0);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1f0, pcVar3, local_58, 0);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      goto LAB_00111dc6;
   }

   if (_gdvirtual__discard_file_call(String) == '\0') goto LAB_00111dc6;
   local_128 = 0;
   local_f8 = 0x117018;
   uStack_f4 = 0;
   uStack_f0 = 0x23;
   uStack_ec = 0;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = 0x114c9c;
   uStack_f4 = 0;
   local_138 = 0;
   uStack_f0 = 0xd;
   uStack_ec = 0;
   String::parse_latin1((StrRange*)&local_138);
   local_148 = 0;
   local_f8 = 0x117aca;
   uStack_f4 = 0;
   uStack_f0 = 2;
   uStack_ec = 0;
   String::parse_latin1((StrRange*)&local_148);
   if (*(code**)( *(long*)this + 0x48 ) == get_class) {
      if (*(long*)( this + 8 ) == 0) {
         local_158 = 0;
         local_f8 = 0x114fdc;
         uStack_f4 = 0;
         uStack_f0 = 0x12;
         uStack_ec = 0;
         LAB_00111fc0:String::parse_latin1((StrRange*)&local_158);
      }
 else {
         lVar6 = *(long*)( *(long*)( this + 8 ) + 0x20 );
         if (lVar6 == 0) {
            local_158 = 0;
         }
 else {
            __s = *(char**)( lVar6 + 8 );
            local_158 = 0;
            if (__s != (char*)0x0) {
               sVar4 = strlen(__s);
               local_f8 = (int)__s;
               uStack_f4 = ( undefined4 )((ulong)__s >> 0x20);
               uStack_f0 = (undefined4)sVar4;
               uStack_ec = ( undefined4 )(sVar4 >> 0x20);
               goto LAB_00111fc0;
            }

            if (*(long*)( lVar6 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_158, (CowData*)( lVar6 + 0x10 ));
            }

         }

      }

   }
 else {
      ( **(code**)( *(long*)this + 0x48 ) )(&local_158, this);
   }

   local_170 = (CowData<char32_t>*)&local_158;
   operator+((char *)
   local_150,(String*)"Required virtual method ";
   String::operator +(local_140, (String*)local_150);
   String::operator +((String*)&local_130, local_140);
   String::operator +((String*)&local_f8, (String*)&local_130);
   _err_print_error("_gdvirtual__discard_file_call", "editor/editor_vcs_interface.h", 0x70, (String*)&local_f8, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_140);
   CowData<char32_t>::_unref(local_150);
   CowData<char32_t>::_unref(local_170);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   _gdvirtual__discard_file_call(String)::first_print =
   '\0';
   LAB_00111dc6:lVar6 = local_160;
   if (local_160 != 0) {
      LOCK();
      plVar7 = (long*)( local_160 + -0x10 );
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         local_160 = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorVCSInterface::unstage_file(String const&) */void EditorVCSInterface::unstage_file(EditorVCSInterface *this, String *param_1) {
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
   CowData<char32_t> *local_170;
   long local_160;
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
   undefined8 local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   CowData<char32_t> *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_160 = 0;
   if (*(long*)param_1 != 0) {
      plVar7 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar6 = *plVar7;
         if (lVar6 == 0) goto LAB_00112471;
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
         local_160 = *(long*)param_1;
      }

   }

   LAB_00112471:plVar7 = *(long**)( this + 0x98 );
   if (plVar7 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (String*)&local_160);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar7 + 0x60 ) )(local_58, plVar7, this + 0x1d8, &local_80, 1, &local_f8);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_f8 == 0) {
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00112546;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1e0] == (EditorVCSInterface)0x0 )) {
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
      String::parse_latin1((String*)&local_f8, "_unstage_file");
      local_c0 = CONCAT44(local_c0._4_4_, 0x88);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      Vector<int>::push_back(local_98, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar6 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x1e8 ) = 0;
      pcVar3 = *(code**)( lVar6 + 0xd8 );
      if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xd0 ) ),pcVar3 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "EditorVCSInterface");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120[0] == 0) {
            lVar6 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') goto LAB_00112aba;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_00112ad7:lVar6 = *(long*)( this + 8 );
            pcVar3 = *(code**)( lVar6 + 200 );
            if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xc0 ) ),pcVar3 == (code*)0x0) goto LAB_0011297a;
            uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ));
            *(undefined8*)( this + 0x1e8 ) = uVar5;
         }
 else {
            lVar6 = *(long*)( local_120[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') {
               LAB_00112aba:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar6 == 0) goto LAB_00112ad7;
         }

         lVar6 = *(long*)( this + 8 );
      }
 else {
         uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x1d8, uVar1);
         *(undefined8*)( this + 0x1e8 ) = uVar5;
         lVar6 = *(long*)( this + 8 );
      }

      LAB_0011297a:if (*(char*)( lVar6 + 0x29 ) != '\0') {
         plVar7 = (long*)operator_new(0x18, "");
         *plVar7 = (long)( this + 0x1e8 );
         plVar7[1] = (long)( this + 0x1e0 );
         plVar7[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar7;
      }

      this[0x1e0] = (EditorVCSInterface)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar3 = *(code**)( this + 0x1e8 );
   if (pcVar3 != (code*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      if (local_160 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_160);
         pcVar3 = *(code**)( this + 0x1e8 );
      }

      local_58[0] = (CowData<char32_t>*)&local_f8;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar3 )(*(undefined8*)( this + 0x10 ), local_58, 0);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1d8, pcVar3, local_58, 0);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      goto LAB_00112546;
   }

   if (_gdvirtual__unstage_file_call(String) == '\0') goto LAB_00112546;
   local_128 = 0;
   local_f8 = 0x117018;
   uStack_f4 = 0;
   uStack_f0 = 0x23;
   uStack_ec = 0;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = 0x114c8e;
   uStack_f4 = 0;
   local_138 = 0;
   uStack_f0 = 0xd;
   uStack_ec = 0;
   String::parse_latin1((StrRange*)&local_138);
   local_148 = 0;
   local_f8 = 0x117aca;
   uStack_f4 = 0;
   uStack_f0 = 2;
   uStack_ec = 0;
   String::parse_latin1((StrRange*)&local_148);
   if (*(code**)( *(long*)this + 0x48 ) == get_class) {
      if (*(long*)( this + 8 ) == 0) {
         local_158 = 0;
         local_f8 = 0x114fdc;
         uStack_f4 = 0;
         uStack_f0 = 0x12;
         uStack_ec = 0;
         LAB_00112740:String::parse_latin1((StrRange*)&local_158);
      }
 else {
         lVar6 = *(long*)( *(long*)( this + 8 ) + 0x20 );
         if (lVar6 == 0) {
            local_158 = 0;
         }
 else {
            __s = *(char**)( lVar6 + 8 );
            local_158 = 0;
            if (__s != (char*)0x0) {
               sVar4 = strlen(__s);
               local_f8 = (int)__s;
               uStack_f4 = ( undefined4 )((ulong)__s >> 0x20);
               uStack_f0 = (undefined4)sVar4;
               uStack_ec = ( undefined4 )(sVar4 >> 0x20);
               goto LAB_00112740;
            }

            if (*(long*)( lVar6 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_158, (CowData*)( lVar6 + 0x10 ));
            }

         }

      }

   }
 else {
      ( **(code**)( *(long*)this + 0x48 ) )(&local_158, this);
   }

   local_170 = (CowData<char32_t>*)&local_158;
   operator+((char *)
   local_150,(String*)"Required virtual method ";
   String::operator +(local_140, (String*)local_150);
   String::operator +((String*)&local_130, local_140);
   String::operator +((String*)&local_f8, (String*)&local_130);
   _err_print_error("_gdvirtual__unstage_file_call", "editor/editor_vcs_interface.h", 0x6f, (String*)&local_f8, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_140);
   CowData<char32_t>::_unref(local_150);
   CowData<char32_t>::_unref(local_170);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   _gdvirtual__unstage_file_call(String)::first_print =
   '\0';
   LAB_00112546:lVar6 = local_160;
   if (local_160 != 0) {
      LOCK();
      plVar7 = (long*)( local_160 + -0x10 );
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         local_160 = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorVCSInterface::stage_file(String const&) */void EditorVCSInterface::stage_file(EditorVCSInterface *this, String *param_1) {
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
   CowData<char32_t> *local_170;
   long local_160;
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
   undefined8 local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   CowData<char32_t> *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_160 = 0;
   if (*(long*)param_1 != 0) {
      plVar7 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar6 = *plVar7;
         if (lVar6 == 0) goto LAB_00112bf1;
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
         local_160 = *(long*)param_1;
      }

   }

   LAB_00112bf1:plVar7 = *(long**)( this + 0x98 );
   if (plVar7 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (String*)&local_160);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar7 + 0x60 ) )(local_58, plVar7, this + 0x1c0, &local_80, 1, &local_f8);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_f8 == 0) {
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00112cc6;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1c8] == (EditorVCSInterface)0x0 )) {
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
      String::parse_latin1((String*)&local_f8, "_stage_file");
      local_c0 = CONCAT44(local_c0._4_4_, 0x88);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      Vector<int>::push_back(local_98, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar6 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x1d0 ) = 0;
      pcVar3 = *(code**)( lVar6 + 0xd8 );
      if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xd0 ) ),pcVar3 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "EditorVCSInterface");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120[0] == 0) {
            lVar6 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') goto LAB_0011323a;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_00113257:lVar6 = *(long*)( this + 8 );
            pcVar3 = *(code**)( lVar6 + 200 );
            if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xc0 ) ),pcVar3 == (code*)0x0) goto LAB_001130fa;
            uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ));
            *(undefined8*)( this + 0x1d0 ) = uVar5;
         }
 else {
            lVar6 = *(long*)( local_120[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') {
               LAB_0011323a:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar6 == 0) goto LAB_00113257;
         }

         lVar6 = *(long*)( this + 8 );
      }
 else {
         uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x1c0, uVar1);
         *(undefined8*)( this + 0x1d0 ) = uVar5;
         lVar6 = *(long*)( this + 8 );
      }

      LAB_001130fa:if (*(char*)( lVar6 + 0x29 ) != '\0') {
         plVar7 = (long*)operator_new(0x18, "");
         *plVar7 = (long)( this + 0x1d0 );
         plVar7[1] = (long)( this + 0x1c8 );
         plVar7[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar7;
      }

      this[0x1c8] = (EditorVCSInterface)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar3 = *(code**)( this + 0x1d0 );
   if (pcVar3 != (code*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      if (local_160 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_160);
         pcVar3 = *(code**)( this + 0x1d0 );
      }

      local_58[0] = (CowData<char32_t>*)&local_f8;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar3 )(*(undefined8*)( this + 0x10 ), local_58, 0);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1c0, pcVar3, local_58, 0);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      goto LAB_00112cc6;
   }

   if (_gdvirtual__stage_file_call(String) == '\0') goto LAB_00112cc6;
   local_128 = 0;
   local_f8 = 0x117018;
   uStack_f4 = 0;
   uStack_f0 = 0x23;
   uStack_ec = 0;
   String::parse_latin1((StrRange*)&local_128);
   local_f8 = 0x114c82;
   uStack_f4 = 0;
   local_138 = 0;
   uStack_f0 = 0xb;
   uStack_ec = 0;
   String::parse_latin1((StrRange*)&local_138);
   local_148 = 0;
   local_f8 = 0x117aca;
   uStack_f4 = 0;
   uStack_f0 = 2;
   uStack_ec = 0;
   String::parse_latin1((StrRange*)&local_148);
   if (*(code**)( *(long*)this + 0x48 ) == get_class) {
      if (*(long*)( this + 8 ) == 0) {
         local_158 = 0;
         local_f8 = 0x114fdc;
         uStack_f4 = 0;
         uStack_f0 = 0x12;
         uStack_ec = 0;
         LAB_00112ec0:String::parse_latin1((StrRange*)&local_158);
      }
 else {
         lVar6 = *(long*)( *(long*)( this + 8 ) + 0x20 );
         if (lVar6 == 0) {
            local_158 = 0;
         }
 else {
            __s = *(char**)( lVar6 + 8 );
            local_158 = 0;
            if (__s != (char*)0x0) {
               sVar4 = strlen(__s);
               local_f8 = (int)__s;
               uStack_f4 = ( undefined4 )((ulong)__s >> 0x20);
               uStack_f0 = (undefined4)sVar4;
               uStack_ec = ( undefined4 )(sVar4 >> 0x20);
               goto LAB_00112ec0;
            }

            if (*(long*)( lVar6 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_158, (CowData*)( lVar6 + 0x10 ));
            }

         }

      }

   }
 else {
      ( **(code**)( *(long*)this + 0x48 ) )(&local_158, this);
   }

   local_170 = (CowData<char32_t>*)&local_158;
   operator+((char *)
   local_150,(String*)"Required virtual method ";
   String::operator +(local_140, (String*)local_150);
   String::operator +((String*)&local_130, local_140);
   String::operator +((String*)&local_f8, (String*)&local_130);
   _err_print_error("_gdvirtual__stage_file_call", "editor/editor_vcs_interface.h", 0x6e, (String*)&local_f8, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_140);
   CowData<char32_t>::_unref(local_150);
   CowData<char32_t>::_unref(local_170);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   _gdvirtual__stage_file_call(String)::first_print =
   '\0';
   LAB_00112cc6:lVar6 = local_160;
   if (local_160 != 0) {
      LOCK();
      plVar7 = (long*)( local_160 + -0x10 );
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         local_160 = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorVCSInterface::set_credentials(String const&, String const&, String const&, String const&,
   String const&) */void EditorVCSInterface::set_credentials(EditorVCSInterface *this, String *param_1, String *param_2, String *param_3, String *param_4, String *param_5) {
   Variant *pVVar1;
   undefined4 uVar2;
   long lVar3;
   undefined8 uVar4;
   long lVar5;
   long *plVar6;
   code *pcVar7;
   Variant *pVVar8;
   long in_FS_OFFSET;
   bool bVar9;
   long local_200;
   long local_1f8;
   long local_1f0;
   long local_1e8;
   long local_1e0;
   CowData<char32_t> local_1d8[8];
   CowData<char32_t> local_1d0[8];
   undefined8 local_1c8;
   undefined8 local_1c0;
   undefined8 local_1b8;
   long local_1b0;
   undefined8 local_1a8;
   long local_1a0[5];
   int local_178[4];
   undefined1 local_168[16];
   undefined8 local_158;
   undefined8 local_150;
   undefined8 local_148;
   undefined8 local_140;
   undefined8 local_138[2];
   undefined8 local_128;
   undefined8 local_120;
   Vector<int> local_118[8];
   undefined8 local_110;
   int local_108[8];
   Variant *local_e8;
   Variant *pVStack_e0;
   Variant *local_d8;
   Variant *pVStack_d0;
   Variant *local_c8;
   CowData<char32_t> *local_b8;
   CowData<char32_t> *pCStack_b0;
   CowData<char32_t> *local_a8;
   CowData<char32_t> *pCStack_a0;
   CowData<char32_t> *local_98;
   Variant local_88[24];
   Variant local_70[24];
   Variant local_58[24];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   local_1e0 = 0;
   if (*(long*)param_5 != 0) {
      plVar6 = (long*)( *(long*)param_5 + -0x10 );
      do {
         lVar5 = *plVar6;
         if (lVar5 == 0) goto LAB_00113371;
         LOCK();
         lVar3 = *plVar6;
         bVar9 = lVar5 == lVar3;
         if (bVar9) {
            *plVar6 = lVar5 + 1;
            lVar3 = lVar5;
         }

         UNLOCK();
      }
 while ( !bVar9 );
      if (lVar3 != -1) {
         local_1e0 = *(long*)param_5;
      }

   }

   LAB_00113371:local_1e8 = 0;
   plVar6 = (long*)( *(long*)param_4 + -0x10 );
   if (*(long*)param_4 != 0) {
      do {
         lVar5 = *plVar6;
         if (lVar5 == 0) goto LAB_001133a7;
         LOCK();
         lVar3 = *plVar6;
         bVar9 = lVar5 == lVar3;
         if (bVar9) {
            *plVar6 = lVar5 + 1;
            lVar3 = lVar5;
         }

         UNLOCK();
      }
 while ( !bVar9 );
      if (lVar3 != -1) {
         local_1e8 = *(long*)param_4;
      }

   }

   LAB_001133a7:local_1f0 = 0;
   plVar6 = (long*)( *(long*)param_3 + -0x10 );
   if (*(long*)param_3 != 0) {
      do {
         lVar5 = *plVar6;
         if (lVar5 == 0) goto LAB_001133dd;
         LOCK();
         lVar3 = *plVar6;
         bVar9 = lVar5 == lVar3;
         if (bVar9) {
            *plVar6 = lVar5 + 1;
            lVar3 = lVar5;
         }

         UNLOCK();
      }
 while ( !bVar9 );
      if (lVar3 != -1) {
         local_1f0 = *(long*)param_3;
      }

   }

   LAB_001133dd:local_1f8 = 0;
   plVar6 = (long*)( *(long*)param_2 + -0x10 );
   if (*(long*)param_2 != 0) {
      do {
         lVar5 = *plVar6;
         if (lVar5 == 0) goto LAB_00113413;
         LOCK();
         lVar3 = *plVar6;
         bVar9 = lVar5 == lVar3;
         if (bVar9) {
            *plVar6 = lVar5 + 1;
            lVar3 = lVar5;
         }

         UNLOCK();
      }
 while ( !bVar9 );
      if (lVar3 != -1) {
         local_1f8 = *(long*)param_2;
      }

   }

   LAB_00113413:local_200 = 0;
   plVar6 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 != 0) {
      do {
         lVar5 = *plVar6;
         if (lVar5 == 0) goto LAB_00113449;
         LOCK();
         lVar3 = *plVar6;
         bVar9 = lVar5 == lVar3;
         if (bVar9) {
            *plVar6 = lVar5 + 1;
            lVar3 = lVar5;
         }

         UNLOCK();
      }
 while ( !bVar9 );
      if (lVar3 != -1) {
         local_200 = *(long*)param_1;
      }

   }

   LAB_00113449:plVar6 = *(long**)( this + 0x98 );
   if (plVar6 != (long*)0x0) {
      for (int i = 0; i < 3; i++) {
         local_178[i] = 0;
      }

      Variant::Variant((Variant*)&local_b8, (String*)&local_200);
      Variant::Variant((Variant*)&pCStack_a0, (String*)&local_1f8);
      Variant::Variant(local_88, (String*)&local_1f0);
      Variant::Variant(local_70, (String*)&local_1e8);
      Variant::Variant(local_58, (String*)&local_1e0);
      local_e8 = (Variant*)&local_b8;
      pVStack_e0 = (Variant*)&pCStack_a0;
      local_d8 = local_88;
      pVStack_d0 = local_70;
      local_c8 = local_58;
      ( **(code**)( *plVar6 + 0x60 ) )(local_108, plVar6, this + 400, &local_e8, 5, local_178);
      if (Variant::needs_deinit[local_108[0]] != '\0') {
         Variant::_clear_internal();
      }

      pVVar8 = (Variant*)local_40;
      if (local_178[0] == 0) {
         do {
            pVVar1 = pVVar8 + -0x18;
            pVVar8 = pVVar8 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar8 != (Variant*)&local_b8 );
         goto LAB_001135ae;
      }

      do {
         pVVar1 = pVVar8 + -0x18;
         pVVar8 = pVVar8 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar8 != (Variant*)&local_b8 );
   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x198] == (EditorVCSInterface)0x0 )) {
      local_178[0] = 0;
      local_178[1] = 0;
      local_168 = (undefined1[16])0x0;
      local_178[2] = 0;
      local_178[3] = 0;
      local_158 = 0;
      local_150 = 0;
      local_148 = 6;
      local_140 = 1;
      local_138[0] = 0;
      local_128 = 0;
      local_120 = 0;
      local_110 = 0;
      String::parse_latin1((String*)local_178, "_set_credentials");
      local_140 = CONCAT44(local_140._4_4_, 0x88);
      for (int i = 0; i < 5; i++) {
         GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_1a8);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_138, (PropertyInfo*)&local_1a8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1a8);
         Vector<int>::push_back(local_118, 0);
      }

      uVar2 = MethodInfo::get_compatibility_hash();
      lVar5 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x1a0 ) = 0;
      pcVar7 = *(code**)( lVar5 + 0xd8 );
      if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xd0 ) ),pcVar7 == (code*)0x0) {
         local_1b8 = 0;
         String::parse_latin1((String*)&local_1b8, "EditorVCSInterface");
         StringName::StringName((StringName*)&local_1b0, (String*)&local_1b8, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_1a8, (StringName*)&local_1b0);
         if (local_1a0[0] == 0) {
            lVar5 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_1a0);
            if (StringName::configured != '\0') goto LAB_00113c76;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
            LAB_00113c93:lVar5 = *(long*)( this + 8 );
            pcVar7 = *(code**)( lVar5 + 200 );
            if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xc0 ) ),pcVar7 == (code*)0x0) goto LAB_00113be4;
            uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ));
            *(undefined8*)( this + 0x1a0 ) = uVar4;
         }
 else {
            lVar5 = *(long*)( local_1a0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_1a0);
            if (StringName::configured != '\0') {
               LAB_00113c76:if (local_1b0 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
            if (lVar5 == 0) goto LAB_00113c93;
         }

         lVar5 = *(long*)( this + 8 );
      }
 else {
         uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), this + 400, uVar2);
         *(undefined8*)( this + 0x1a0 ) = uVar4;
         lVar5 = *(long*)( this + 8 );
      }

      LAB_00113be4:if (*(char*)( lVar5 + 0x29 ) != '\0') {
         plVar6 = (long*)operator_new(0x18, "");
         *plVar6 = (long)( this + 0x1a0 );
         plVar6[1] = (long)( this + 0x198 );
         plVar6[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar6;
      }

      this[0x198] = (EditorVCSInterface)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_178);
   }

   if (*(long*)( this + 0x1a0 ) == 0) {
      if (_gdvirtual__set_credentials_call(String, String, String, String, String) != '\0') {
         local_1a8 = 0;
         local_178[0] = 0x117018;
         local_178[1] = 0;
         local_178[2] = 0x23;
         local_178[3] = 0;
         String::parse_latin1((StrRange*)&local_1a8);
         local_1b8 = 0;
         local_178[0] = 0x114c71;
         local_178[1] = 0;
         local_178[2] = 0x10;
         local_178[3] = 0;
         String::parse_latin1((StrRange*)&local_1b8);
         local_178[0] = 0x117aca;
         local_178[1] = 0;
         local_1c8 = 0;
         local_178[2] = 2;
         local_178[3] = 0;
         String::parse_latin1((StrRange*)&local_1c8);
         ( **(code**)( *(long*)this + 0x48 ) )(local_1d8, this);
         operator+((char *)
         local_1d0,(String*)"Required virtual method ";
         String::operator +((String*)&local_1c0, (String*)local_1d0);
         String::operator +((String*)&local_1b0, (String*)&local_1c0);
         String::operator +((String*)local_178, (String*)&local_1b0);
         _err_print_error("_gdvirtual__set_credentials_call", "editor/editor_vcs_interface.h", 0x6c, (String*)local_178, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_178);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c0);
         CowData<char32_t>::_unref(local_1d0);
         CowData<char32_t>::_unref(local_1d8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
         _gdvirtual__set_credentials_call(String,String,String,String,String)::first_print =
         '\0';
      }

   }
 else {
      local_1c0 = 0;
      if (local_200 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_1c0, (CowData*)&local_200);
      }

      local_1b8 = 0;
      if (local_1f8 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_1b8, (CowData*)&local_1f8);
      }

      local_1b0 = 0;
      if (local_1f0 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_1b0, (CowData*)&local_1f0);
      }

      local_1a8 = 0;
      if (local_1e8 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_1a8, (CowData*)&local_1e8);
      }

      local_178[0] = 0;
      local_178[1] = 0;
      if (local_1e0 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)local_178, (CowData*)&local_1e0);
      }

      local_b8 = (CowData<char32_t>*)&local_1c0;
      pCStack_b0 = (CowData<char32_t>*)&local_1b8;
      local_a8 = (CowData<char32_t>*)&local_1b0;
      pCStack_a0 = (CowData<char32_t>*)&local_1a8;
      local_98 = (CowData<char32_t>*)local_178;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 0x1a0 ) )(*(undefined8*)( this + 0x10 ), &local_b8, 0);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 400, *(code**)( this + 0x1a0 ), &local_b8, 0);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_178);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c0);
   }

   LAB_001135ae:lVar5 = local_200;
   if (local_200 != 0) {
      LOCK();
      plVar6 = (long*)( local_200 + -0x10 );
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         local_200 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   lVar5 = local_1f8;
   if (local_1f8 != 0) {
      LOCK();
      plVar6 = (long*)( local_1f8 + -0x10 );
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         local_1f8 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   lVar5 = local_1f0;
   if (local_1f0 != 0) {
      LOCK();
      plVar6 = (long*)( local_1f0 + -0x10 );
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         local_1f0 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   lVar5 = local_1e8;
   if (local_1e8 != 0) {
      LOCK();
      plVar6 = (long*)( local_1e8 + -0x10 );
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         local_1e8 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   lVar5 = local_1e0;
   if (local_1e0 != 0) {
      LOCK();
      plVar6 = (long*)( local_1e0 + -0x10 );
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         local_1e0 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorVCSInterface::initialize(String const&) */ulong EditorVCSInterface::initialize(EditorVCSInterface *this, String *param_1) {
   char *__s;
   undefined4 uVar1;
   long lVar2;
   code *pcVar3;
   size_t sVar4;
   undefined7 extraout_var;
   undefined8 uVar5;
   long lVar6;
   long *plVar7;
   GetTypeInfo<bool,void> *unaff_RBP;
   ulong uVar8;
   long in_FS_OFFSET;
   bool bVar9;
   CowData<char32_t> *local_170;
   long local_160;
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
   CowData<char32_t> *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_160 = 0;
   if (*(long*)param_1 != 0) {
      plVar7 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar6 = *plVar7;
         if (lVar6 == 0) goto LAB_00113db1;
         LOCK();
         lVar2 = *plVar7;
         bVar9 = lVar6 == lVar2;
         if (bVar9) {
            *plVar7 = lVar6 + 1;
            lVar2 = lVar6;
         }

         UNLOCK();
      }
 while ( !bVar9 );
      if (lVar2 != -1) {
         local_160 = *(long*)param_1;
      }

   }

   LAB_00113db1:plVar7 = *(long**)( this + 0x98 );
   if (plVar7 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (String*)&local_160);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar7 + 0x60 ) )((Variant*)local_58, plVar7, this + 0x178, &local_80, 1, &local_f8);
      if (local_f8 == 0) {
         bVar9 = Variant::operator_cast_to_bool((Variant*)local_58);
         uVar8 = CONCAT71(extraout_var, bVar9) & 0xffffffff;
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00113e86;
      }

      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x180] == (EditorVCSInterface)0x0 )) {
      unaff_RBP = (GetTypeInfo<bool,void>*)&local_128;
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
      String::parse_latin1((String*)&local_f8, "_initialize");
      local_c0 = CONCAT44(local_c0._4_4_, 0x88);
      GetTypeInfo<bool,void>::get_class_info(unaff_RBP);
      PropertyInfo::operator =((PropertyInfo*)&uStack_f0, (PropertyInfo*)unaff_RBP);
      PropertyInfo::~PropertyInfo((PropertyInfo*)unaff_RBP);
      local_a0 = local_a0 & 0xffffffff00000000;
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)unaff_RBP);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)unaff_RBP);
      PropertyInfo::~PropertyInfo((PropertyInfo*)unaff_RBP);
      Vector<int>::push_back(local_98, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar6 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x188 ) = 0;
      pcVar3 = *(code**)( lVar6 + 0xd8 );
      if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xd0 ) ),pcVar3 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "EditorVCSInterface");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)unaff_RBP, (StringName*)&local_130);
         if (local_120[0] == 0) {
            unaff_RBP = (GetTypeInfo<bool,void>*)0x0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') goto LAB_0011446c;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_00114489:lVar6 = *(long*)( this + 8 );
            pcVar3 = *(code**)( lVar6 + 200 );
            if (( ( pcVar3 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar3 = *(code**)( lVar6 + 0xc0 ) ),pcVar3 == (code*)0x0) goto LAB_0011430d;
            uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ));
            *(undefined8*)( this + 0x188 ) = uVar5;
         }
 else {
            unaff_RBP = *(GetTypeInfo<bool,void>**)( local_120[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') {
               LAB_0011446c:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (unaff_RBP == (GetTypeInfo<bool,void>*)0x0) goto LAB_00114489;
         }

         lVar6 = *(long*)( this + 8 );
      }
 else {
         uVar5 = ( *pcVar3 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x178, uVar1);
         *(undefined8*)( this + 0x188 ) = uVar5;
         lVar6 = *(long*)( this + 8 );
      }

      LAB_0011430d:if (*(char*)( lVar6 + 0x29 ) != '\0') {
         plVar7 = (long*)operator_new(0x18, "");
         *plVar7 = (long)( this + 0x188 );
         plVar7[1] = (long)( this + 0x180 );
         plVar7[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar7;
      }

      this[0x180] = (EditorVCSInterface)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar3 = *(code**)( this + 0x188 );
   if (pcVar3 != (code*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      if (local_160 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_160);
         pcVar3 = *(code**)( this + 0x188 );
      }

      local_58[0] = (CowData<char32_t>*)&local_f8;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar3 )(*(undefined8*)( this + 0x10 ), local_58, &local_128);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x178, pcVar3, local_58, &local_128);
      }

      uVar8 = CONCAT71(( int7 )((ulong)unaff_RBP >> 8), local_128._0_1_ != (StrRange)0x0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      goto LAB_00113e86;
   }

   if (_gdvirtual__initialize_call(String, bool&), ::first_print != '\0') {
      local_128 = 0;
      local_f8 = 0x117018;
      uStack_f4 = 0;
      uStack_f0 = 0x23;
      uStack_ec = 0;
      String::parse_latin1((StrRange*)&local_128);
      local_f8 = 0x114c1b;
      uStack_f4 = 0;
      local_138 = 0;
      uStack_f0 = 0xb;
      uStack_ec = 0;
      String::parse_latin1((StrRange*)&local_138);
      local_148 = 0;
      local_f8 = 0x117aca;
      uStack_f4 = 0;
      uStack_f0 = 2;
      uStack_ec = 0;
      String::parse_latin1((StrRange*)&local_148);
      if (*(code**)( *(long*)this + 0x48 ) == get_class) {
         if (*(long*)( this + 8 ) == 0) {
            local_158 = 0;
            local_f8 = 0x114fdc;
            uStack_f4 = 0;
            uStack_f0 = 0x12;
            uStack_ec = 0;
            LAB_00114068:String::parse_latin1((StrRange*)&local_158);
         }
 else {
            lVar6 = *(long*)( *(long*)( this + 8 ) + 0x20 );
            if (lVar6 == 0) {
               local_158 = 0;
            }
 else {
               __s = *(char**)( lVar6 + 8 );
               local_158 = 0;
               if (__s != (char*)0x0) {
                  sVar4 = strlen(__s);
                  local_f8 = (int)__s;
                  uStack_f4 = ( undefined4 )((ulong)__s >> 0x20);
                  uStack_f0 = (undefined4)sVar4;
                  uStack_ec = ( undefined4 )(sVar4 >> 0x20);
                  goto LAB_00114068;
               }

               if (*(long*)( lVar6 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_158, (CowData*)( lVar6 + 0x10 ));
               }

            }

         }

      }
 else {
         ( **(code**)( *(long*)this + 0x48 ) )(&local_158, this);
      }

      local_170 = (CowData<char32_t>*)&local_158;
      operator+((char *)
      local_150,(String*)"Required virtual method ";
      String::operator +(local_140, (String*)local_150);
      String::operator +((String*)&local_130, local_140);
      String::operator +((String*)&local_f8, (String*)&local_130);
      _err_print_error("_gdvirtual__initialize_call", "editor/editor_vcs_interface.h", 0x6b, (String*)&local_f8, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_140);
      CowData<char32_t>::_unref(local_150);
      CowData<char32_t>::_unref(local_170);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
      _gdvirtual__initialize_call(String,bool&)::first_print =
      '\0';
   }

   uVar8 = 0;
   LAB_00113e86:lVar6 = local_160;
   if (local_160 != 0) {
      LOCK();
      plVar7 = (long*)( local_160 + -0x10 );
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         local_160 = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar8 & 0xffffffff;
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* MethodBind::is_valid() const */undefined8 MethodBind::is_valid(void) {
   return 1;
}
/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
}
/* MethodBindT<String const&>::_gen_argument_type(int) const */long MethodBindT<String_const&>::_gen_argument_type(MethodBindT<String_const&> *this, int param_1) {
   return ( ulong )(param_1 == 0) << 2;
}
/* MethodBindT<String const&>::get_argument_meta(int) const */undefined8 MethodBindT<String_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<Dictionary, Dictionary, TypedArray<Dictionary> >::_gen_argument_type(int) const */int MethodBindTR<Dictionary,Dictionary,TypedArray<Dictionary>>::_gen_argument_type(MethodBindTR<Dictionary,Dictionary,TypedArray<Dictionary>> *this, int param_1) {
   return 0x1c - ( uint )(param_1 != 1);
}
/* MethodBindTR<Dictionary, Dictionary, TypedArray<Dictionary> >::get_argument_meta(int) const */undefined8 MethodBindTR<Dictionary,Dictionary,TypedArray<Dictionary>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<Dictionary, String const&, EditorVCSInterface::ChangeType,
   EditorVCSInterface::TreeArea>::_gen_argument_type(int) const */char MethodBindTR<Dictionary,String_const&,EditorVCSInterface::ChangeType,EditorVCSInterface::TreeArea>::_gen_argument_type(MethodBindTR<Dictionary,String_const&,EditorVCSInterface::ChangeType,EditorVCSInterface::TreeArea> *this, int param_1) {
   char cVar1;
   cVar1 = '\x1b';
   if ((uint)param_1 < 3) {
      cVar1 = ( -(param_1 == 0) & 2U ) + 2;
   }

   return cVar1;
}
/* MethodBindTR<Dictionary, String const&, EditorVCSInterface::ChangeType,
   EditorVCSInterface::TreeArea>::get_argument_meta(int) const */undefined8 MethodBindTR<Dictionary,String_const&,EditorVCSInterface::ChangeType,EditorVCSInterface::TreeArea>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<Dictionary, String const&, String const&, String const&, long,
   long>::get_argument_meta(int) const */long MethodBindTR<Dictionary,String_const&,String_const&,String_const&,long,long>::get_argument_meta(MethodBindTR<Dictionary,String_const&,String_const&,String_const&,long,long> *this, int param_1) {
   long lVar1;
   lVar1 = 0;
   if (-1 < param_1) {
      lVar1 = ( ulong )(param_1 - 3U < 2) << 2;
   }

   return lVar1;
}
/* MethodBindTR<Dictionary, String const&, String const&>::_gen_argument_type(int) const */int MethodBindTR<Dictionary,String_const&,String_const&>::_gen_argument_type(MethodBindTR<Dictionary,String_const&,String_const&> *this, int param_1) {
   return ( -(uint)((uint)param_1 < 2) & 0xffffffe9 ) + 0x1b;
}
/* MethodBindTR<Dictionary, String const&, String const&>::get_argument_meta(int) const */undefined8 MethodBindTR<Dictionary,String_const&,String_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<Dictionary, int, int, int, int>::_gen_argument_type(int) const */int MethodBindTR<Dictionary,int,int,int,int>::_gen_argument_type(MethodBindTR<Dictionary,int,int,int,int> *this, int param_1) {
   return ( -(uint)((uint)param_1 < 4) & 0xffffffe7 ) + 0x1b;
}
/* MethodBindTR<Dictionary, int, int, int, int>::get_argument_meta(int) const */byte MethodBindTR<Dictionary,int,int,int,int>::get_argument_meta(MethodBindTR<Dictionary,int,int,int,int> *this, int param_1) {
   byte bVar1;
   bVar1 = 0;
   if (-1 < param_1) {
      bVar1 = -((uint)param_1 < 4) & 3;
   }

   return bVar1;
}
/* MethodBindTR<Dictionary, int, int, String const&, String const&>::_gen_argument_type(int) const
    */int MethodBindTR<Dictionary,int,int,String_const&,String_const&>::_gen_argument_type(MethodBindTR<Dictionary,int,int,String_const&,String_const&> *this, int param_1) {
   int iVar1;
   iVar1 = 0x1b;
   if ((uint)param_1 < 4) {
      iVar1 = ( -(uint)((uint)param_1 < 2) & 0xfffffffe ) + 4;
   }

   return iVar1;
}
/* MethodBindTR<Dictionary, int, int, String const&, String const&>::get_argument_meta(int) const */byte MethodBindTR<Dictionary,int,int,String_const&,String_const&>::get_argument_meta(MethodBindTR<Dictionary,int,int,String_const&,String_const&> *this, int param_1) {
   byte bVar1;
   bVar1 = 0;
   if (-1 < param_1) {
      bVar1 = -((uint)param_1 < 2) & 3;
   }

   return bVar1;
}
/* MethodBindTR<Dictionary, String const&, String const&, String const&, long,
   long>::_gen_argument_type(int) const */char MethodBindTR<Dictionary,String_const&,String_const&,String_const&,long,long>::_gen_argument_type(MethodBindTR<Dictionary,String_const&,String_const&,String_const&,long,long> *this, int param_1) {
   char cVar1;
   cVar1 = '\x1b';
   if ((uint)param_1 < 5) {
      cVar1 = ( -((uint)param_1 < 3) & 2U ) + 2;
   }

   return cVar1;
}
/* MethodBindTR<Dictionary, int, int, String const&, String const&>::~MethodBindTR() */void MethodBindTR<Dictionary,int,int,String_const&,String_const&>::~MethodBindTR(MethodBindTR<Dictionary,int,int,String_const&,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e818;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Dictionary, int, int, String const&, String const&>::~MethodBindTR() */void MethodBindTR<Dictionary,int,int,String_const&,String_const&>::~MethodBindTR(MethodBindTR<Dictionary,int,int,String_const&,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e818;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Dictionary, int, int, int, int>::~MethodBindTR() */void MethodBindTR<Dictionary,int,int,int,int>::~MethodBindTR(MethodBindTR<Dictionary,int,int,int,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e878;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Dictionary, int, int, int, int>::~MethodBindTR() */void MethodBindTR<Dictionary,int,int,int,int>::~MethodBindTR(MethodBindTR<Dictionary,int,int,int,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e878;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Dictionary, String const&, String const&>::~MethodBindTR() */void MethodBindTR<Dictionary,String_const&,String_const&>::~MethodBindTR(MethodBindTR<Dictionary,String_const&,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e8d8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Dictionary, String const&, String const&>::~MethodBindTR() */void MethodBindTR<Dictionary,String_const&,String_const&>::~MethodBindTR(MethodBindTR<Dictionary,String_const&,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e8d8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Dictionary, String const&, String const&, String const&, long,
   long>::~MethodBindTR() */void MethodBindTR<Dictionary,String_const&,String_const&,String_const&,long,long>::~MethodBindTR(MethodBindTR<Dictionary,String_const&,String_const&,String_const&,long,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e938;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Dictionary, String const&, String const&, String const&, long,
   long>::~MethodBindTR() */void MethodBindTR<Dictionary,String_const&,String_const&,String_const&,long,long>::~MethodBindTR(MethodBindTR<Dictionary,String_const&,String_const&,String_const&,long,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e938;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Dictionary, String const&, EditorVCSInterface::ChangeType,
   EditorVCSInterface::TreeArea>::~MethodBindTR() */void MethodBindTR<Dictionary,String_const&,EditorVCSInterface::ChangeType,EditorVCSInterface::TreeArea>::~MethodBindTR(MethodBindTR<Dictionary,String_const&,EditorVCSInterface::ChangeType,EditorVCSInterface::TreeArea> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e998;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Dictionary, String const&, EditorVCSInterface::ChangeType,
   EditorVCSInterface::TreeArea>::~MethodBindTR() */void MethodBindTR<Dictionary,String_const&,EditorVCSInterface::ChangeType,EditorVCSInterface::TreeArea>::~MethodBindTR(MethodBindTR<Dictionary,String_const&,EditorVCSInterface::ChangeType,EditorVCSInterface::TreeArea> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e998;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Dictionary, Dictionary, TypedArray<Dictionary> >::~MethodBindTR() */void MethodBindTR<Dictionary,Dictionary,TypedArray<Dictionary>>::~MethodBindTR(MethodBindTR<Dictionary,Dictionary,TypedArray<Dictionary>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e9f8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Dictionary, Dictionary, TypedArray<Dictionary> >::~MethodBindTR() */void MethodBindTR<Dictionary,Dictionary,TypedArray<Dictionary>>::~MethodBindTR(MethodBindTR<Dictionary,Dictionary,TypedArray<Dictionary>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e9f8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011ea58;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011ea58;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
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
/* EditorVCSInterface::_bind_methods() [clone .cold] */void EditorVCSInterface::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* EditorVCSInterface::get_class() const */void EditorVCSInterface::get_class(void) {
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
   local_48 = &_LC25;
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

         goto joined_r0x001152ec;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x001152ec:local_58 = lVar2;
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
/* GetTypeInfo<int, void>::get_class_info() */GetTypeInfo<int,void> * __thiscall
GetTypeInfo<int,void>::get_class_info(GetTypeInfo<int,void> *this){
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
   local_48 = &_LC25;
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

         goto joined_r0x0011546c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0011546c:local_58 = lVar2;
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
/* MethodBindTR<Dictionary, int, int, int, int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Dictionary,int,int,int,int>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_a0;
   long local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   undefined8 local_78;
   undefined4 local_70;
   undefined *local_68;
   long local_60;
   long local_58;
   long local_48;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   if (in_EDX < 4) {
      local_80 = 0;
      local_90 = (undefined1[16])0x0;
      local_78 = 0;
      local_70 = 6;
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_68);
      PropertyInfo::operator =((PropertyInfo*)&local_98, (PropertyInfo*)&local_68);
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

      if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
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

      *puVar3 = (undefined4)local_98;
      *(undefined8*)( puVar3 + 2 ) = local_90._0_8_;
      *(undefined8*)( puVar3 + 4 ) = local_90._8_8_;
      puVar3[6] = (undefined4)local_80;
      *(undefined8*)( puVar3 + 8 ) = local_78;
      puVar3[10] = local_70;
      goto LAB_00115591;
   }

   local_a0 = 0;
   local_60 = 0;
   local_68 = &_LC25;
   String::parse_latin1((StrRange*)&local_a0);
   *puVar3 = 0x1b;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_a0 == 0) {
      puVar3[10] = 6;
      LAB_001156a7:StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_98);
      lVar2 = local_a0;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_a0);
      puVar3[10] = 6;
      if (puVar3[6] != 0x11) goto LAB_001156a7;
      StringName::StringName((StringName*)&local_68, (String*)( puVar3 + 8 ), false);
      if (*(undefined**)( puVar3 + 4 ) == local_68) {
         lVar2 = local_a0;
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
            lVar2 = local_a0;
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar3 + 4 ) = local_68;
         lVar2 = local_a0;
      }

   }

   local_a0 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   LAB_00115591:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<String, void>::get_class_info() */GetTypeInfo<String,void> * __thiscall
GetTypeInfo<String,void>::get_class_info(GetTypeInfo<String,void> *this){
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
   local_48 = &_LC25;
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

         goto joined_r0x0011589c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0011589c:local_58 = lVar2;
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
/* GetTypeInfo<Dictionary, void>::get_class_info() */GetTypeInfo<Dictionary,void> * __thiscall
GetTypeInfo<Dictionary,void>::get_class_info(GetTypeInfo<Dictionary,void> *this){
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
   local_48 = &_LC25;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 0x1b;
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

         goto joined_r0x00115a1c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00115a1c:local_58 = lVar2;
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
/* GetTypeInfo<TypedArray<String>, void>::get_class_info() */GetTypeInfo<TypedArray<String>,void> * __thiscall
GetTypeInfo<TypedArray<String>,void>::get_class_info(GetTypeInfo<TypedArray<String>,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = 0;
   Variant::get_type_name(&local_38, 4);
   *(undefined4*)this = 0x1c;
   *(undefined4*)( this + 0x18 ) = 0x1f;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_38 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_38);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_28, (String*)( this + 0x20 ), false);
         if (*(long*)( this + 0x10 ) == local_28) {
            lVar2 = local_38;
            if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
               StringName::unref();
               lVar2 = local_38;
            }

         }
 else {
            StringName::unref();
            *(long*)( this + 0x10 ) = local_28;
            lVar2 = local_38;
         }

         goto joined_r0x00115b7c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_30);
   lVar2 = local_38;
   joined_r0x00115b7c:local_38 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_30 != 0 )) {
      StringName::unref();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<TypedArray<Dictionary>, void>::get_class_info() */GetTypeInfo<TypedArray<Dictionary>,void> * __thiscall
GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info
          (GetTypeInfo<TypedArray<Dictionary>,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = 0;
   Variant::get_type_name(&local_38, 0x1b);
   *(undefined4*)this = 0x1c;
   *(undefined4*)( this + 0x18 ) = 0x1f;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_38 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_38);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_28, (String*)( this + 0x20 ), false);
         if (*(long*)( this + 0x10 ) == local_28) {
            lVar2 = local_38;
            if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
               StringName::unref();
               lVar2 = local_38;
            }

         }
 else {
            StringName::unref();
            *(long*)( this + 0x10 ) = local_28;
            lVar2 = local_38;
         }

         goto joined_r0x00115cdc;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_30);
   lVar2 = local_38;
   joined_r0x00115cdc:local_38 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_30 != 0 )) {
      StringName::unref();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Dictionary, Dictionary, TypedArray<Dictionary> >::_gen_argument_type_info(int) const
    */undefined4 *MethodBindTR<Dictionary,Dictionary,TypedArray<Dictionary>>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_a0;
   long local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   undefined8 local_78;
   undefined4 local_70;
   undefined *local_68;
   long local_60;
   long local_58;
   long local_48;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 2) {
      local_98 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 6;
      local_90 = (undefined1[16])0x0;
      if (in_EDX == 0) {
         GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void>*)&local_68);
      }
 else {
         GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info((GetTypeInfo<TypedArray<Dictionary>,void>*)&local_68);
      }

      PropertyInfo::operator =((PropertyInfo*)&local_98, (PropertyInfo*)&local_68);
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

      if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
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

      *puVar3 = (undefined4)local_98;
      *(undefined8*)( puVar3 + 2 ) = local_90._0_8_;
      *(undefined8*)( puVar3 + 4 ) = local_90._8_8_;
      puVar3[6] = (undefined4)local_80;
      *(undefined8*)( puVar3 + 8 ) = local_78;
      puVar3[10] = local_70;
      goto LAB_00115f3b;
   }

   local_a0 = 0;
   local_98 = 0;
   local_68 = &_LC25;
   local_60 = 0;
   String::parse_latin1((StrRange*)&local_98);
   *puVar3 = 0x1b;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_98 == 0) {
      puVar3[10] = 6;
      LAB_00115ee7:StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_a0);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_98);
      puVar3[10] = 6;
      if (puVar3[6] != 0x11) goto LAB_00115ee7;
      StringName::StringName((StringName*)&local_68, (String*)( puVar3 + 8 ), false);
      if (*(undefined**)( puVar3 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar3 + 4 ) = local_68;
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

   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   LAB_00115f3b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* List<EditorVCSInterface::StatusFile, DefaultAllocator>::~List() */void List<EditorVCSInterface::StatusFile,DefaultAllocator>::~List(List<EditorVCSInterface::StatusFile,DefaultAllocator> *this) {
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

      if (*(long**)( (long)pvVar2 + 0x20 ) == plVar5) {
         lVar4 = *(long*)( (long)pvVar2 + 0x10 );
         lVar3 = *(long*)( (long)pvVar2 + 0x18 );
         *plVar5 = lVar4;
         if (pvVar2 == (void*)plVar5[1]) {
            plVar5[1] = lVar3;
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x10 ) = lVar4;
            lVar4 = *(long*)( (long)pvVar2 + 0x10 );
         }

         if (lVar4 != 0) {
            *(long*)( lVar4 + 0x18 ) = lVar3;
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
/* List<EditorVCSInterface::Commit, DefaultAllocator>::~List() */void List<EditorVCSInterface::Commit,DefaultAllocator>::~List(List<EditorVCSInterface::Commit,DefaultAllocator> *this) {
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

      if ((long*)plVar2[7] == plVar5) {
         lVar4 = plVar2[5];
         lVar3 = plVar2[6];
         *plVar5 = lVar4;
         if (plVar2 == (long*)plVar5[1]) {
            plVar5[1] = lVar3;
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x28 ) = lVar4;
            lVar4 = plVar2[5];
         }

         if (lVar4 != 0) {
            *(long*)( lVar4 + 0x30 ) = lVar3;
         }

         if (plVar2[2] != 0) {
            LOCK();
            plVar1 = (long*)( plVar2[2] + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar4 = plVar2[2];
               plVar2[2] = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (plVar2[1] != 0) {
            LOCK();
            plVar1 = (long*)( plVar2[1] + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar4 = plVar2[1];
               plVar2[1] = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

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
/* List<EditorVCSInterface::DiffLine, DefaultAllocator>::~List() */void List<EditorVCSInterface::DiffLine,DefaultAllocator>::~List(List<EditorVCSInterface::DiffLine,DefaultAllocator> *this) {
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

      if (*(long**)( (long)pvVar2 + 0x38 ) == plVar5) {
         lVar4 = *(long*)( (long)pvVar2 + 0x28 );
         lVar3 = *(long*)( (long)pvVar2 + 0x30 );
         *plVar5 = lVar4;
         if (pvVar2 == (void*)plVar5[1]) {
            plVar5[1] = lVar3;
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x28 ) = lVar4;
            lVar4 = *(long*)( (long)pvVar2 + 0x28 );
         }

         if (lVar4 != 0) {
            *(long*)( lVar4 + 0x30 ) = lVar3;
         }

         for (int i = 0; i < 4; i++) {
            if (*(long*)( (long)pvVar2 + ( -8*i + 32 ) ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( (long)pvVar2 + ( -8*i + 32 ) ) + -16 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar4 = *(long*)( (long)pvVar2 + ( -8*i + 32 ) );
                  *(undefined8*)( (long)pvVar2 + ( -8*i + 32 ) ) = 0;
                  Memory::free_static((void*)( lVar4 + -16 ), false);
               }

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
/* List<EditorVCSInterface::DiffHunk, DefaultAllocator>::~List() */void List<EditorVCSInterface::DiffHunk,DefaultAllocator>::~List(List<EditorVCSInterface::DiffHunk,DefaultAllocator> *this) {
   void *pvVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   plVar4 = *(long**)this;
   if (plVar4 == (long*)0x0) {
      return;
   }

   do {
      pvVar1 = (void*)*plVar4;
      if (pvVar1 == (void*)0x0) {
         if ((int)plVar4[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(long**)( (long)pvVar1 + 0x28 ) == plVar4) {
         lVar3 = *(long*)( (long)pvVar1 + 0x18 );
         lVar2 = *(long*)( (long)pvVar1 + 0x20 );
         *plVar4 = lVar3;
         if (pvVar1 == (void*)plVar4[1]) {
            plVar4[1] = lVar2;
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 0x18 ) = lVar3;
            lVar3 = *(long*)( (long)pvVar1 + 0x18 );
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x20 ) = lVar2;
         }

         List<EditorVCSInterface::DiffLine,DefaultAllocator>::~List((List<EditorVCSInterface::DiffLine,DefaultAllocator>*)( (long)pvVar1 + 0x10 ));
         Memory::free_static(pvVar1, false);
         *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar4 = *(long**)this;
   }
 while ( (int)plVar4[2] != 0 );
   Memory::free_static(plVar4, false);
   return;
}
/* List<EditorVCSInterface::DiffFile, DefaultAllocator>::~List() */void List<EditorVCSInterface::DiffFile,DefaultAllocator>::~List(List<EditorVCSInterface::DiffFile,DefaultAllocator> *this) {
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

      if ((long*)plVar2[5] == plVar5) {
         lVar4 = plVar2[3];
         lVar3 = plVar2[4];
         *plVar5 = lVar4;
         if (plVar2 == (long*)plVar5[1]) {
            plVar5[1] = lVar3;
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x18 ) = lVar4;
            lVar4 = plVar2[3];
         }

         if (lVar4 != 0) {
            *(long*)( lVar4 + 0x20 ) = lVar3;
         }

         List<EditorVCSInterface::DiffHunk,DefaultAllocator>::~List((List<EditorVCSInterface::DiffHunk,DefaultAllocator>*)( plVar2 + 2 ));
         if (plVar2[1] != 0) {
            LOCK();
            plVar1 = (long*)( plVar2[1] + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar4 = plVar2[1];
               plVar2[1] = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

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
/* WARNING: Removing unreachable block (ram,0x00116d38) *//* WARNING: Removing unreachable block (ram,0x00116ecd) *//* WARNING: Removing unreachable block (ram,0x00116ed9) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
/* MethodBind* create_method_bind<EditorVCSInterface, Dictionary, int, int, String const&, String
   const&>(Dictionary (EditorVCSInterface::*)(int, int, String const&, String const&)) */MethodBind *create_method_bind<EditorVCSInterface,Dictionary,int,int,String_const&,String_const&>(_func_Dictionary_int_int_String_ptr_String_ptr *param_1) {
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
   *(_func_Dictionary_int_int_String_ptr_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011e818;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 4;
   local_40 = 0;
   local_38 = "EditorVCSInterface";
   local_30 = 0x12;
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
/* MethodBind* create_method_bind<EditorVCSInterface, Dictionary, int, int, int, int>(Dictionary
   (EditorVCSInterface::*)(int, int, int, int)) */MethodBind *create_method_bind<EditorVCSInterface,Dictionary,int,int,int,int>(_func_Dictionary_int_int_int_int *param_1) {
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
   *(_func_Dictionary_int_int_int_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011e878;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 4;
   local_40 = 0;
   local_38 = "EditorVCSInterface";
   local_30 = 0x12;
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
/* MethodBind* create_method_bind<EditorVCSInterface, Dictionary, String const&, String
   const&>(Dictionary (EditorVCSInterface::*)(String const&, String const&)) */MethodBind *create_method_bind<EditorVCSInterface,Dictionary,String_const&,String_const&>(_func_Dictionary_String_ptr_String_ptr *param_1) {
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
   *(_func_Dictionary_String_ptr_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011e8d8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "EditorVCSInterface";
   local_30 = 0x12;
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
/* MethodBind* create_method_bind<EditorVCSInterface, Dictionary, String const&, String const&,
   String const&, long, long>(Dictionary (EditorVCSInterface::*)(String const&, String const&,
   String const&, long, long)) */MethodBind *create_method_bind<EditorVCSInterface,Dictionary,String_const&,String_const&,String_const&,long,long>(_func_Dictionary_String_ptr_String_ptr_String_ptr_long_long *param_1) {
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
   *(_func_Dictionary_String_ptr_String_ptr_String_ptr_long_long**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011e938;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 5;
   local_40 = 0;
   local_38 = "EditorVCSInterface";
   local_30 = 0x12;
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
/* MethodBind* create_method_bind<EditorVCSInterface, Dictionary, String const&,
   EditorVCSInterface::ChangeType, EditorVCSInterface::TreeArea>(Dictionary
   (EditorVCSInterface::*)(String const&, EditorVCSInterface::ChangeType,
   EditorVCSInterface::TreeArea)) */MethodBind *create_method_bind<EditorVCSInterface,Dictionary,String_const&,EditorVCSInterface::ChangeType,EditorVCSInterface::TreeArea>(_func_Dictionary_String_ptr_ChangeType_TreeArea *param_1) {
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
   *(_func_Dictionary_String_ptr_ChangeType_TreeArea**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011e998;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 3;
   local_40 = 0;
   local_38 = "EditorVCSInterface";
   local_30 = 0x12;
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
/* MethodBind* create_method_bind<EditorVCSInterface, Dictionary, Dictionary, TypedArray<Dictionary>
   >(Dictionary (EditorVCSInterface::*)(Dictionary, TypedArray<Dictionary>)) */MethodBind *create_method_bind<EditorVCSInterface,Dictionary,Dictionary,TypedArray<Dictionary>>(_func_Dictionary_Dictionary_TypedArray *param_1) {
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
   *(_func_Dictionary_Dictionary_TypedArray**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011e9f8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "EditorVCSInterface";
   local_30 = 0x12;
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
/* MethodBind* create_method_bind<EditorVCSInterface, String const&>(void
   (EditorVCSInterface::*)(String const&)) */MethodBind *create_method_bind<EditorVCSInterface,String_const&>(_func_void_String_ptr *param_1) {
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
   *(_func_void_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011ea58;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "EditorVCSInterface";
   local_30 = 0x12;
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
/* godot::details::enum_qualified_name_to_class_info_name(String const&) */details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1){
   long *plVar1;
   code *pcVar2;
   undefined *puVar3;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   long local_60;
   char local_58[8];
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   String::split(local_58, SUB81(param_1, 0), 0x117aca);
   if (( local_50 != 0 ) && ( 2 < *(long*)( local_50 + -8 ) )) {
      local_60 = 0;
      local_48 = &_LC31;
      local_40 = 1;
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == 0) {
         lVar5 = 0;
         lVar4 = -2;
      }
 else {
         lVar5 = *(long*)( local_50 + -8 );
         lVar4 = lVar5 + -2;
         if (-1 < lVar4) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar4 * 8 ));
            String::operator +((String*)this, (String*)&local_48);
            puVar3 = local_48;
            lVar5 = local_60;
            if (local_48 != (undefined*)0x0) {
               LOCK();
               plVar1 = (long*)( local_48 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_48 = (undefined*)0x0;
                  Memory::free_static(puVar3 + -0x10, false);
                  lVar5 = local_60;
               }

            }

            goto joined_r0x00117b78;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar4, lVar5, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   local_60 = 0;
   local_48 = &_LC31;
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)this);
   lVar5 = local_60;
   joined_r0x00117b78:local_60 = lVar5;
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
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* GetTypeInfo<EditorVCSInterface::TreeArea, void>::get_class_info() */GetTypeInfo<EditorVCSInterface::TreeArea,void> * __thiscall
GetTypeInfo<EditorVCSInterface::TreeArea,void>::get_class_info
          (GetTypeInfo<EditorVCSInterface::TreeArea,void> *this){
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
   local_48 = "EditorVCSInterface::TreeArea";
   local_40 = 0x1c;
   String::parse_latin1((StrRange*)&local_70);
   String::split(local_58, SUB81((StrRange*)&local_70, 0), 0x117aca);
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

            goto joined_r0x00117dc3;
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
   joined_r0x00117dc3:local_60 = lVar5;
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
/* GetTypeInfo<EditorVCSInterface::ChangeType, void>::get_class_info() */GetTypeInfo<EditorVCSInterface::ChangeType,void> * __thiscall
GetTypeInfo<EditorVCSInterface::ChangeType,void>::get_class_info
          (GetTypeInfo<EditorVCSInterface::ChangeType,void> *this){
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
   local_48 = "EditorVCSInterface::ChangeType";
   local_40 = 0x1e;
   String::parse_latin1((StrRange*)&local_70);
   String::split(local_58, SUB81((StrRange*)&local_70, 0), 0x117aca);
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

            goto joined_r0x001180d3;
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
   joined_r0x001180d3:local_60 = lVar5;
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
      LAB_00118690:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar10 == 0) goto LAB_00118690;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_00118569:if (lVar10 != lVar7) {
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
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_00118569;
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
      goto LAB_001186e6;
   }

   if (lVar10 == lVar7) {
      LAB_0011860f:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_001186e6:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_001185fa;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_0011860f;
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
   LAB_001185fa:puVar9[-1] = param_1;
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
      LAB_001189b0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar8 == 0) goto LAB_001189b0;
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
            goto LAB_001188c1;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_001188c1:puVar7[-1] = param_1;
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
/* WARNING: Removing unreachable block (ram,0x00118b28) *//* WARNING: Removing unreachable block (ram,0x00118cbd) *//* WARNING: Removing unreachable block (ram,0x00118cc9) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<String_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00119015;
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
      /* WARNING: Could not recover jumptable at 0x00118e59. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }

   LAB_00119015:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<String_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00119245;
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
      /* WARNING: Could not recover jumptable at 0x00119085. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_00119245:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTR<Dictionary, String const&, EditorVCSInterface::ChangeType,
   EditorVCSInterface::TreeArea>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTR<Dictionary,String_const&,EditorVCSInterface::ChangeType,EditorVCSInterface::TreeArea>::validated_call(MethodBindTR<Dictionary,String_const&,EditorVCSInterface::ChangeType,EditorVCSInterface::TreeArea> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
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
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Dictionary*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Dictionary*)&local_48, 0);
         pcVar2 = local_48;
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

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001192c0;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar3 )((Dictionary*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2 + 8, *(undefined4*)( param_2[1] + 8 ), *(undefined4*)( param_2[2] + 8 ));
   Dictionary::operator =((Dictionary*)( param_3 + 8 ), (Dictionary*)&local_48);
   Dictionary::~Dictionary((Dictionary*)&local_48);
   LAB_001192c0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Dictionary, String const&, EditorVCSInterface::ChangeType,
   EditorVCSInterface::TreeArea>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<Dictionary,String_const&,EditorVCSInterface::ChangeType,EditorVCSInterface::TreeArea>::ptrcall(MethodBindTR<Dictionary,String_const&,EditorVCSInterface::ChangeType,EditorVCSInterface::TreeArea> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
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
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Dictionary*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Dictionary*)&local_48, 0);
         pcVar2 = local_48;
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

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001194f8;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   /* WARNING: Load size is inaccurate */
   ( *pcVar3 )((Dictionary*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2, *param_2[1], *param_2[2]);
   Dictionary::operator =((Dictionary*)param_3, (Dictionary*)&local_48);
   Dictionary::~Dictionary((Dictionary*)&local_48);
   LAB_001194f8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Dictionary, String const&, String const&, String const&, long,
   long>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTR<Dictionary,String_const&,String_const&,String_const&,long,long>::validated_call(MethodBindTR<Dictionary,String_const&,String_const&,String_const&,long,long> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
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
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Dictionary*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Dictionary*)&local_48, 0, 0);
         pcVar2 = local_48;
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

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119764;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar3 )((Dictionary*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2 + 8, param_2[1] + 8, param_2[2] + 8, *(undefined8*)( param_2[3] + 8 ), *(undefined8*)( param_2[4] + 8 ));
   Dictionary::operator =((Dictionary*)( param_3 + 8 ), (Dictionary*)&local_48);
   Dictionary::~Dictionary((Dictionary*)&local_48);
   LAB_00119764:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Dictionary, String const&, String const&, String const&, long,
   long>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<Dictionary,String_const&,String_const&,String_const&,long,long>::ptrcall(MethodBindTR<Dictionary,String_const&,String_const&,String_const&,long,long> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
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
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Dictionary*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Dictionary*)&local_48, 0, 0);
         pcVar2 = local_48;
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

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011999a;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   /* WARNING: Load size is inaccurate */
   ( *pcVar3 )((Dictionary*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2, param_2[1], param_2[2], *param_2[3], *param_2[4]);
   Dictionary::operator =((Dictionary*)param_3, (Dictionary*)&local_48);
   Dictionary::~Dictionary((Dictionary*)&local_48);
   LAB_0011999a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Dictionary, String const&, String const&>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindTR<Dictionary,String_const&,String_const&>::validated_call(MethodBindTR<Dictionary,String_const&,String_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
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
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Dictionary*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Dictionary*)&local_48, 0);
         pcVar2 = local_48;
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

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119be9;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar3 )((Dictionary*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2 + 8, param_2[1] + 8);
   Dictionary::operator =((Dictionary*)( param_3 + 8 ), (Dictionary*)&local_48);
   Dictionary::~Dictionary((Dictionary*)&local_48);
   LAB_00119be9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Dictionary, String const&, String const&>::ptrcall(Object*, void const**, void*)
   const */void MethodBindTR<Dictionary,String_const&,String_const&>::ptrcall(MethodBindTR<Dictionary,String_const&,String_const&> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
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
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Dictionary*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Dictionary*)&local_48, 0);
         pcVar2 = local_48;
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

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119e1f;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar3 )((Dictionary*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2, param_2[1]);
   Dictionary::operator =((Dictionary*)param_3, (Dictionary*)&local_48);
   Dictionary::~Dictionary((Dictionary*)&local_48);
   LAB_00119e1f:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Dictionary, int, int, int, int>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindTR<Dictionary,int,int,int,int>::validated_call(MethodBindTR<Dictionary,int,int,int,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
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
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Dictionary*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Dictionary*)&local_48, 0);
         pcVar2 = local_48;
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

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011a066;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar3 )((Dictionary*)&local_48, param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ), *(undefined4*)( param_2[1] + 8 ), *(undefined4*)( param_2[2] + 8 ), *(undefined4*)( param_2[3] + 8 ));
   Dictionary::operator =((Dictionary*)( param_3 + 8 ), (Dictionary*)&local_48);
   Dictionary::~Dictionary((Dictionary*)&local_48);
   LAB_0011a066:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Dictionary, int, int, int, int>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<Dictionary,int,int,int,int>::ptrcall(MethodBindTR<Dictionary,int,int,int,int> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
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
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Dictionary*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Dictionary*)&local_48, 0);
         pcVar2 = local_48;
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

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011a2b1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   for (int i = 0; i < 4; i++) {
      /* WARNING: Load size is inaccurate */
   }

   ( *pcVar3 )((Dictionary*)&local_48, param_1 + *(long*)( this + 0x60 ), **param_2, *param_2[1], *param_2[2], *param_2[3]);
   Dictionary::operator =((Dictionary*)param_3, (Dictionary*)&local_48);
   Dictionary::~Dictionary((Dictionary*)&local_48);
   LAB_0011a2b1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Dictionary, int, int, String const&, String const&>::validated_call(Object*, Variant
   const**, Variant*) const */void MethodBindTR<Dictionary,int,int,String_const&,String_const&>::validated_call(MethodBindTR<Dictionary,int,int,String_const&,String_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
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
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Dictionary*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Dictionary*)&local_48, 0);
         pcVar2 = local_48;
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

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011a4f6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar3 )((Dictionary*)&local_48, param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ), *(undefined4*)( param_2[1] + 8 ), param_2[2] + 8, param_2[3] + 8);
   Dictionary::operator =((Dictionary*)( param_3 + 8 ), (Dictionary*)&local_48);
   Dictionary::~Dictionary((Dictionary*)&local_48);
   LAB_0011a4f6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Dictionary, int, int, String const&, String const&>::ptrcall(Object*, void const**,
   void*) const */void MethodBindTR<Dictionary,int,int,String_const&,String_const&>::ptrcall(MethodBindTR<Dictionary,int,int,String_const&,String_const&> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
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
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Dictionary*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Dictionary*)&local_48, 0);
         pcVar2 = local_48;
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

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar4 = (long*)( local_50 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011a73b;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   /* WARNING: Load size is inaccurate */
   ( *pcVar3 )((Dictionary*)&local_48, param_1 + *(long*)( this + 0x60 ), **param_2, *param_2[1], param_2[2], param_2[3]);
   Dictionary::operator =((Dictionary*)param_3, (Dictionary*)&local_48);
   Dictionary::~Dictionary((Dictionary*)&local_48);
   LAB_0011a73b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Dictionary, Dictionary, TypedArray<Dictionary> >::validated_call(Object*, Variant
   const**, Variant*) const */void MethodBindTR<Dictionary,Dictionary,TypedArray<Dictionary>>::validated_call(MethodBindTR<Dictionary,Dictionary,TypedArray<Dictionary>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   char *pcVar2;
   char cVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   long local_78;
   long local_70;
   char *local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_68 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((Dictionary*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Dictionary*)&local_68, 0);
         pcVar2 = local_68;
         if (local_68 != (char*)0x0) {
            LOCK();
            plVar4 = (long*)( local_68 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_68 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar4 = (long*)( local_70 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011aa42;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar5 = *(code**)( this + 0x58 );
   lVar1 = *(long*)( this + 0x60 );
   if (( (ulong)pcVar5 & 1 ) != 0) {
      pcVar5 = *(code**)( pcVar5 + *(long*)( param_1 + lVar1 ) + -1 );
   }

   Array::Array((Array*)&local_70);
   local_58 = 0;
   local_68 = (char*)0x0;
   local_50 = (undefined1[16])0x0;
   Array::set_typed((uint)(Array*)&local_70, (StringName*)0x1b, (Variant*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   cVar3 = Array::is_same_typed((Array*)&local_70);
   if (cVar3 == '\0') {
      Array::assign((Array*)&local_70);
   }
 else {
      Array::_ref((Array*)&local_70);
   }

   Dictionary::Dictionary((Dictionary*)&local_68, *param_2 + 8);
   ( *pcVar5 )((Dictionary*)&local_78, param_1 + lVar1, (Dictionary*)&local_68, (Array*)&local_70);
   Dictionary::operator =((Dictionary*)( param_3 + 8 ), (Dictionary*)&local_78);
   Dictionary::~Dictionary((Dictionary*)&local_78);
   Dictionary::~Dictionary((Dictionary*)&local_68);
   Array::~Array((Array*)&local_70);
   LAB_0011aa42:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Dictionary, Dictionary, TypedArray<Dictionary> >::ptrcall(Object*, void const**,
   void*) const */void MethodBindTR<Dictionary,Dictionary,TypedArray<Dictionary>>::ptrcall(MethodBindTR<Dictionary,Dictionary,TypedArray<Dictionary>> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   char *pcVar2;
   char cVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   long local_78;
   long local_70;
   char *local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_68 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((Dictionary*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Dictionary*)&local_68, 0);
         pcVar2 = local_68;
         if (local_68 != (char*)0x0) {
            LOCK();
            plVar4 = (long*)( local_68 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_68 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar4 = (long*)( local_70 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011ad47;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar5 = *(code**)( this + 0x58 );
   lVar1 = *(long*)( this + 0x60 );
   if (( (ulong)pcVar5 & 1 ) != 0) {
      pcVar5 = *(code**)( pcVar5 + *(long*)( param_1 + lVar1 ) + -1 );
   }

   Array::Array((Array*)&local_70);
   local_58 = 0;
   local_68 = (char*)0x0;
   local_50 = (undefined1[16])0x0;
   Array::set_typed((uint)(Array*)&local_70, (StringName*)0x1b, (Variant*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   cVar3 = Array::is_same_typed((Array*)&local_70);
   if (cVar3 == '\0') {
      Array::assign((Array*)&local_70);
   }
 else {
      Array::_ref((Array*)&local_70);
   }

   Dictionary::Dictionary((Dictionary*)&local_68, (Dictionary*)*param_2);
   ( *pcVar5 )((Dictionary*)&local_78, param_1 + lVar1, (Dictionary*)&local_68, (Array*)&local_70);
   Dictionary::operator =((Dictionary*)param_3, (Dictionary*)&local_78);
   Dictionary::~Dictionary((Dictionary*)&local_78);
   Dictionary::~Dictionary((Dictionary*)&local_68);
   Array::~Array((Array*)&local_70);
   LAB_0011ad47:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Dictionary, String const&, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTR<Dictionary,String_const&,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char *pcVar5;
   char cVar6;
   int iVar7;
   undefined4 uVar8;
   long *plVar9;
   long lVar10;
   undefined4 in_register_00000014;
   long *plVar11;
   int iVar12;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar13;
   Variant *pVVar14;
   Variant *pVVar15;
   long in_FS_OFFSET;
   long local_78;
   long local_70;
   char *local_68;
   undefined8 local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC158, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0);
         pcVar5 = local_68;
         if (local_68 != (char*)0x0) {
            LOCK();
            plVar11 = (long*)( local_68 + -0x10 );
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (*plVar11 == 0) {
               local_68 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         lVar2 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar11 = (long*)( local_70 + -0x10 );
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (*plVar11 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011b16b;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar15 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 3) {
      pVVar14 = param_2[5];
      iVar7 = 2 - in_R8D;
      if (pVVar14 == (Variant*)0x0) {
         if (iVar7 != 0) goto LAB_0011b1b0;
         pVVar13 = *(Variant**)param_4;
         LAB_0011b1cd:pVVar14 = *(Variant**)( param_4 + 8 );
      }
 else {
         lVar2 = *(long*)( pVVar14 + -8 );
         iVar12 = (int)lVar2;
         if (iVar12 < iVar7) {
            LAB_0011b1b0:uVar8 = 4;
            goto LAB_0011b19d;
         }

         if (in_R8D == 0) {
            lVar10 = (long)( iVar12 + -2 );
            if (lVar2 <= lVar10) goto LAB_0011b2a0;
            pVVar13 = pVVar14 + lVar10 * 0x18;
         }
 else {
            pVVar13 = *(Variant**)param_4;
            if (in_R8D == 2) goto LAB_0011b1cd;
         }

         lVar10 = (long)(int)( ( in_R8D ^ 1 ) + ( iVar12 - iVar7 ) );
         if (lVar2 <= lVar10) {
            LAB_0011b2a0:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar14 = pVVar14 + lVar10 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar15 & 1 ) != 0) {
         pVVar15 = *(Variant**)( pVVar15 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
      }

      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar14, 4);
      uVar4 = _LC159;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_String((Variant*)&local_70);
      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar13, 4);
      uVar4 = _LC160;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_String((Variant*)&local_68);
      ( *(code*)pVVar15 )((Dictionary*)&local_78, (Variant*)( (long)plVar11 + (long)pVVar1 ), (Variant*)&local_68, (Variant*)&local_70);
      Variant::Variant((Variant*)local_58, (Dictionary*)&local_78);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      Dictionary::~Dictionary((Dictionary*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   }
 else {
      uVar8 = 3;
      LAB_0011b19d:*in_R9 = uVar8;
      in_R9[2] = 2;
   }

   LAB_0011b16b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   undefined8 local_40;
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
         _err_print_error(&_LC158, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0);
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

         goto LAB_0011b5f0;
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
         if (in_R8D != 1) goto LAB_0011b640;
         LAB_0011b630:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0011b640:uVar7 = 4;
            goto LAB_0011b5e5;
         }

         if (in_R8D == 1) goto LAB_0011b630;
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

      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar11, 4);
      uVar4 = _LC160;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_String((Variant*)&local_48);
      ( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   }
 else {
      uVar7 = 3;
      LAB_0011b5e5:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_0011b5f0:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Dictionary, Dictionary, TypedArray<Dictionary> >::call(Object*, Variant const**,
   int, Callable::CallError&) const */Object *MethodBindTR<Dictionary,Dictionary,TypedArray<Dictionary>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char *pcVar5;
   char cVar6;
   int iVar7;
   undefined4 uVar8;
   long *plVar9;
   long lVar10;
   undefined4 in_register_00000014;
   long *plVar11;
   int iVar12;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar13;
   Variant *pVVar14;
   long in_FS_OFFSET;
   Variant *local_90;
   long local_78;
   long local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[2];
   undefined1 local_50[16];
   long local_40;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC158, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0);
         pcVar5 = local_68;
         if (local_68 != (char*)0x0) {
            LOCK();
            plVar11 = (long*)( local_68 + -0x10 );
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (*plVar11 == 0) {
               local_68 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         lVar2 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar11 = (long*)( local_70 + -0x10 );
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (*plVar11 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011baa3;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 3) {
      pVVar14 = param_2[5];
      iVar7 = 2 - in_R8D;
      if (pVVar14 == (Variant*)0x0) {
         if (iVar7 != 0) goto LAB_0011bae8;
         local_90 = *(Variant**)param_4;
         LAB_0011bb02:pVVar14 = *(Variant**)( param_4 + 8 );
      }
 else {
         lVar2 = *(long*)( pVVar14 + -8 );
         iVar12 = (int)lVar2;
         if (iVar12 < iVar7) {
            LAB_0011bae8:uVar8 = 4;
            goto LAB_0011bad5;
         }

         if (in_R8D == 0) {
            lVar10 = (long)( iVar12 + -2 );
            if (lVar2 <= lVar10) goto LAB_0011bbd8;
            local_90 = pVVar14 + lVar10 * 0x18;
         }
 else {
            local_90 = *(Variant**)param_4;
            if (in_R8D == 2) goto LAB_0011bb02;
         }

         lVar10 = (long)(int)( ( in_R8D ^ 1 ) + ( iVar12 - iVar7 ) );
         if (lVar2 <= lVar10) {
            LAB_0011bbd8:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar14 = pVVar14 + lVar10 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar13 & 1 ) != 0) {
         pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
      }

      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar14, 0x1c);
      uVar4 = _LC163;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_Array((Variant*)&local_68);
      Array::Array((Array*)&local_78);
      local_58[0] = 0;
      local_58[1] = 0;
      local_70 = 0;
      local_50 = (undefined1[16])0x0;
      Array::set_typed((uint)(Array*)&local_78, (StringName*)0x1b, (Variant*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      cVar6 = Array::is_same_typed((Array*)&local_78);
      if (cVar6 == '\0') {
         Array::assign((Array*)&local_78);
      }
 else {
         Array::_ref((Array*)&local_78);
      }

      Array::~Array((Array*)&local_68);
      cVar6 = Variant::can_convert_strict(*(undefined4*)local_90, 0x1b);
      uVar4 = _LC164;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_Dictionary((Variant*)&local_68);
      ( *(code*)pVVar13 )((Dictionary*)&local_70, (Variant*)( (long)plVar11 + (long)pVVar1 ), (Variant*)&local_68, (Array*)&local_78);
      Variant::Variant((Variant*)local_58, (Dictionary*)&local_70);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(int*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50._0_8_;
      *(undefined8*)( param_1 + 0x10 ) = local_50._8_8_;
      Dictionary::~Dictionary((Dictionary*)&local_70);
      Dictionary::~Dictionary((Dictionary*)&local_68);
      Array::~Array((Array*)&local_78);
   }
 else {
      uVar8 = 3;
      LAB_0011bad5:*in_R9 = uVar8;
      in_R9[2] = 2;
   }

   LAB_0011baa3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Dictionary, String const&, EditorVCSInterface::ChangeType,
   EditorVCSInterface::TreeArea>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTR<Dictionary,String_const&,EditorVCSInterface::ChangeType,EditorVCSInterface::TreeArea>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined8 uVar4;
   char *pcVar5;
   char cVar6;
   undefined4 uVar7;
   long lVar8;
   ulong uVar9;
   ulong uVar10;
   long *plVar11;
   uint uVar12;
   int iVar13;
   undefined4 in_register_00000014;
   long *plVar14;
   Variant *pVVar15;
   long lVar16;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar17;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   char *local_88;
   undefined8 local_80;
   Variant *local_78[4];
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar14 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar14 != (long*)0x0 ) && ( plVar14[1] != 0 ) ) && ( *(char*)( plVar14[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_88, (StringName*)( param_2 + 3 ));
      if (plVar14[1] == 0) {
         plVar11 = (long*)plVar14[0x23];
         if (plVar11 == (long*)0x0) {
            plVar11 = (long*)( **(code**)( *plVar14 + 0x40 ) )(plVar14);
         }

      }
 else {
         plVar11 = (long*)( plVar14[1] + 0x20 );
      }

      if (local_88 == (char*)*plVar11) {
         if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_90 = 0;
         local_80 = 0x35;
         String::parse_latin1((StrRange*)&local_90);
         vformat<StringName>((StringName*)&local_88, (StrRange*)&local_90, &local_98);
         _err_print_error(&_LC158, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_88, 0);
         pcVar5 = local_88;
         if (local_88 != (char*)0x0) {
            LOCK();
            plVar14 = (long*)( local_88 + -0x10 );
            *plVar14 = *plVar14 + -1;
            UNLOCK();
            if (*plVar14 == 0) {
               local_88 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         lVar16 = local_90;
         if (local_90 != 0) {
            LOCK();
            plVar14 = (long*)( local_90 + -0x10 );
            *plVar14 = *plVar14 + -1;
            UNLOCK();
            if (*plVar14 == 0) {
               local_90 = 0;
               Memory::free_static((void*)( lVar16 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011bf60;
      }

      if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar17 = param_2[0xb];
   pVVar1 = param_2[0xc];
   uVar7 = 3;
   if (in_R8D < 4) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar13 = 0;
         lVar16 = 0;
      }
 else {
         lVar16 = *(long*)( pVVar2 + -8 );
         iVar13 = (int)lVar16;
      }

      if ((int)( 3 - in_R8D ) <= iVar13) {
         lVar8 = 0;
         do {
            if ((int)lVar8 < (int)in_R8D) {
               pVVar15 = *(Variant**)( param_4 + lVar8 * 8 );
            }
 else {
               uVar12 = iVar13 + -3 + (int)lVar8;
               if (lVar16 <= (int)uVar12) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar12, lVar16, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               pVVar15 = pVVar2 + (ulong)uVar12 * 0x18;
            }

            local_78[lVar8] = pVVar15;
            lVar8 = lVar8 + 1;
         }
 while ( lVar8 != 3 );
         *in_R9 = 0;
         if (( (ulong)pVVar17 & 1 ) != 0) {
            pVVar17 = *(Variant**)( pVVar17 + *(long*)( (long)plVar14 + (long)pVVar1 ) + -1 );
         }

         cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[2], 2);
         uVar4 = _LC165;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         uVar9 = Variant::operator_cast_to_long(local_78[2]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[1], 2);
         uVar4 = _LC166;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         uVar10 = Variant::operator_cast_to_long(local_78[1]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[0], 4);
         uVar4 = _LC160;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_String((Variant*)&local_88);
         ( *(code*)pVVar17 )((Dictionary*)&local_90, (Variant*)( (long)plVar14 + (long)pVVar1 ), (Variant*)&local_88, uVar10 & 0xffffffff, uVar9 & 0xffffffff);
         Variant::Variant((Variant*)local_58, (Dictionary*)&local_90);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_58[0];
         *(undefined8*)( param_1 + 8 ) = local_50;
         *(undefined8*)( param_1 + 0x10 ) = uStack_48;
         Dictionary::~Dictionary((Dictionary*)&local_90);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         goto LAB_0011bf60;
      }

      uVar7 = 4;
   }

   *in_R9 = uVar7;
   in_R9[2] = 3;
   LAB_0011bf60:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Dictionary, String const&, String const&, String const&, long, long>::call(Object*,
   Variant const**, int, Callable::CallError&) const */Object *MethodBindTR<Dictionary,String_const&,String_const&,String_const&,long,long>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined8 uVar4;
   char *pcVar5;
   char cVar6;
   undefined4 uVar7;
   long lVar8;
   long lVar9;
   long *plVar10;
   uint uVar11;
   int iVar12;
   undefined4 in_register_00000014;
   long *plVar13;
   Variant *pVVar14;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar15;
   long in_FS_OFFSET;
   Dictionary local_b0[8];
   long local_a8;
   long local_a0;
   char *local_98;
   undefined8 local_90;
   undefined4 local_88[2];
   undefined8 local_80;
   undefined8 uStack_78;
   Variant *local_68[5];
   long local_40;
   plVar13 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar13 != (long*)0x0 ) && ( plVar13[1] != 0 ) ) && ( *(char*)( plVar13[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_98, (StringName*)( param_2 + 3 ));
      if (plVar13[1] == 0) {
         plVar10 = (long*)plVar13[0x23];
         if (plVar10 == (long*)0x0) {
            plVar10 = (long*)( **(code**)( *plVar13 + 0x40 ) )();
         }

      }
 else {
         plVar10 = (long*)( plVar13[1] + 0x20 );
      }

      if (local_98 == (char*)*plVar10) {
         if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_a0 = 0;
         local_90 = 0x35;
         String::parse_latin1((StrRange*)&local_a0);
         vformat<StringName>((StringName*)&local_98, (StrRange*)&local_a0, &local_a8);
         _err_print_error(&_LC158, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_98, 0, 0);
         pcVar5 = local_98;
         if (local_98 != (char*)0x0) {
            LOCK();
            plVar13 = (long*)( local_98 + -0x10 );
            *plVar13 = *plVar13 + -1;
            UNLOCK();
            if (*plVar13 == 0) {
               local_98 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         lVar9 = local_a0;
         if (local_a0 != 0) {
            LOCK();
            plVar13 = (long*)( local_a0 + -0x10 );
            *plVar13 = *plVar13 + -1;
            UNLOCK();
            if (*plVar13 == 0) {
               local_a0 = 0;
               Memory::free_static((void*)( lVar9 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011c4e0;
      }

      if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar15 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 6) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar12 = 0;
         lVar9 = 0;
      }
 else {
         lVar9 = *(long*)( pVVar2 + -8 );
         iVar12 = (int)lVar9;
      }

      if ((int)( 5 - in_R8D ) <= iVar12) {
         lVar8 = 0;
         do {
            if ((int)lVar8 < (int)in_R8D) {
               pVVar14 = *(Variant**)( param_4 + lVar8 * 8 );
            }
 else {
               uVar11 = iVar12 + -5 + (int)lVar8;
               if (lVar9 <= (int)uVar11) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar11, lVar9, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               pVVar14 = pVVar2 + (ulong)uVar11 * 0x18;
            }

            local_68[lVar8] = pVVar14;
            lVar8 = lVar8 + 1;
         }
 while ( lVar8 != 5 );
         *in_R9 = 0;
         if (( (ulong)pVVar15 & 1 ) != 0) {
            pVVar15 = *(Variant**)( pVVar15 + *(long*)( (long)plVar13 + (long)pVVar1 ) + -1 );
         }

         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[4], 2);
         uVar4 = _LC167;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         lVar9 = Variant::operator_cast_to_long(local_68[4]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[3], 2);
         uVar4 = _LC168;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         lVar8 = Variant::operator_cast_to_long(local_68[3]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[2], 4);
         uVar4 = _LC169;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_String((Variant*)&local_a8);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[1], 4);
         uVar4 = _LC159;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_String((Variant*)&local_a0);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[0], 4);
         uVar4 = _LC160;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_String((Variant*)&local_98);
         ( *(code*)pVVar15 )(local_b0, (Variant*)( (long)plVar13 + (long)pVVar1 ), (Variant*)&local_98, (Variant*)&local_a0, (Variant*)&local_a8, lVar8, lVar9);
         Variant::Variant((Variant*)local_88, local_b0);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_88[0];
         *(undefined8*)( param_1 + 8 ) = local_80;
         *(undefined8*)( param_1 + 0x10 ) = uStack_78;
         Dictionary::~Dictionary(local_b0);
         pcVar5 = local_98;
         if (local_98 != (char*)0x0) {
            LOCK();
            plVar13 = (long*)( local_98 + -0x10 );
            *plVar13 = *plVar13 + -1;
            UNLOCK();
            if (*plVar13 == 0) {
               local_98 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         lVar9 = local_a0;
         if (local_a0 != 0) {
            LOCK();
            plVar13 = (long*)( local_a0 + -0x10 );
            *plVar13 = *plVar13 + -1;
            UNLOCK();
            if (*plVar13 == 0) {
               local_a0 = 0;
               Memory::free_static((void*)( lVar9 + -0x10 ), false);
            }

         }

         lVar9 = local_a8;
         if (local_a8 != 0) {
            LOCK();
            plVar13 = (long*)( local_a8 + -0x10 );
            *plVar13 = *plVar13 + -1;
            UNLOCK();
            if (*plVar13 == 0) {
               local_a8 = 0;
               Memory::free_static((void*)( lVar9 + -0x10 ), false);
            }

         }

         goto LAB_0011c4e0;
      }

      uVar7 = 4;
   }
 else {
      uVar7 = 3;
   }

   *in_R9 = uVar7;
   in_R9[2] = 5;
   LAB_0011c4e0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Dictionary, int, int, String const&, String const&>::call(Object*, Variant const**,
   int, Callable::CallError&) const */Object *MethodBindTR<Dictionary,int,int,String_const&,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined8 uVar4;
   char *pcVar5;
   char cVar6;
   int iVar7;
   int iVar8;
   undefined4 uVar9;
   long lVar10;
   long *plVar11;
   uint uVar12;
   Variant *pVVar13;
   undefined4 in_register_00000014;
   long *plVar14;
   long lVar15;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar16;
   long in_FS_OFFSET;
   long local_a8;
   long local_a0;
   char *local_98;
   undefined8 local_90;
   undefined4 local_88[2];
   undefined8 local_80;
   undefined8 uStack_78;
   Variant *local_68[5];
   long local_40;
   plVar14 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar14 != (long*)0x0 ) && ( plVar14[1] != 0 ) ) && ( *(char*)( plVar14[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_98, (StringName*)( param_2 + 3 ));
      if (plVar14[1] == 0) {
         plVar11 = (long*)plVar14[0x23];
         if (plVar11 == (long*)0x0) {
            plVar11 = (long*)( **(code**)( *plVar14 + 0x40 ) )();
         }

      }
 else {
         plVar11 = (long*)( plVar14[1] + 0x20 );
      }

      if (local_98 == (char*)*plVar11) {
         if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_a0 = 0;
         local_90 = 0x35;
         String::parse_latin1((StrRange*)&local_a0);
         vformat<StringName>((StringName*)&local_98, (StrRange*)&local_a0, &local_a8);
         _err_print_error(&_LC158, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_98, 0);
         pcVar5 = local_98;
         if (local_98 != (char*)0x0) {
            LOCK();
            plVar14 = (long*)( local_98 + -0x10 );
            *plVar14 = *plVar14 + -1;
            UNLOCK();
            if (*plVar14 == 0) {
               local_98 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         lVar15 = local_a0;
         if (local_a0 != 0) {
            LOCK();
            plVar14 = (long*)( local_a0 + -0x10 );
            *plVar14 = *plVar14 + -1;
            UNLOCK();
            if (*plVar14 == 0) {
               local_a0 = 0;
               Memory::free_static((void*)( lVar15 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011c9d2;
      }

      if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar16 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 5) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar7 = 0;
         lVar15 = 0;
      }
 else {
         lVar15 = *(long*)( pVVar2 + -8 );
         iVar7 = (int)lVar15;
      }

      if ((int)( 4 - in_R8D ) <= iVar7) {
         lVar10 = 0;
         do {
            if ((int)lVar10 < (int)in_R8D) {
               pVVar13 = *(Variant**)( param_4 + lVar10 * 8 );
            }
 else {
               uVar12 = iVar7 + -4 + (int)lVar10;
               if (lVar15 <= (int)uVar12) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar12, lVar15, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               pVVar13 = pVVar2 + (ulong)uVar12 * 0x18;
            }

            local_68[lVar10] = pVVar13;
            lVar10 = lVar10 + 1;
         }
 while ( lVar10 != 4 );
         *in_R9 = 0;
         if (( (ulong)pVVar16 & 1 ) != 0) {
            pVVar16 = *(Variant**)( pVVar16 + *(long*)( (long)plVar14 + (long)pVVar1 ) + -1 );
         }

         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[3], 4);
         uVar4 = _LC170;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_String((Variant*)&local_a0);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[2], 4);
         uVar4 = _LC169;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_String((Variant*)&local_98);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[1], 2);
         uVar4 = _LC166;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         iVar7 = Variant::operator_cast_to_int(local_68[1]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[0], 2);
         uVar4 = _LC171;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         iVar8 = Variant::operator_cast_to_int(local_68[0]);
         ( *(code*)pVVar16 )((Dictionary*)&local_a8, (Variant*)( (long)plVar14 + (long)pVVar1 ), iVar8, iVar7, (Variant*)&local_98, (Variant*)&local_a0);
         Variant::Variant((Variant*)local_88, (Dictionary*)&local_a8);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_88[0];
         *(undefined8*)( param_1 + 8 ) = local_80;
         *(undefined8*)( param_1 + 0x10 ) = uStack_78;
         Dictionary::~Dictionary((Dictionary*)&local_a8);
         pcVar5 = local_98;
         if (local_98 != (char*)0x0) {
            LOCK();
            plVar14 = (long*)( local_98 + -0x10 );
            *plVar14 = *plVar14 + -1;
            UNLOCK();
            if (*plVar14 == 0) {
               local_98 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         lVar15 = local_a0;
         if (local_a0 != 0) {
            LOCK();
            plVar14 = (long*)( local_a0 + -0x10 );
            *plVar14 = *plVar14 + -1;
            UNLOCK();
            if (*plVar14 == 0) {
               local_a0 = 0;
               Memory::free_static((void*)( lVar15 + -0x10 ), false);
            }

         }

         goto LAB_0011c9d2;
      }

      uVar9 = 4;
   }
 else {
      uVar9 = 3;
   }

   *in_R9 = uVar9;
   in_R9[2] = 4;
   LAB_0011c9d2:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Dictionary, int, int, int, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTR<Dictionary,int,int,int,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined8 uVar4;
   char *pcVar5;
   char cVar6;
   int iVar7;
   int iVar8;
   int iVar9;
   int iVar10;
   undefined4 uVar11;
   long lVar12;
   long *plVar13;
   uint uVar14;
   undefined4 in_register_00000014;
   long *plVar15;
   Variant *pVVar16;
   long lVar17;
   uint in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   Variant *local_b8;
   long local_a8;
   long local_a0;
   char *local_98;
   undefined8 local_90;
   undefined4 local_88[2];
   undefined8 local_80;
   undefined8 uStack_78;
   Variant *local_68[5];
   long local_40;
   plVar15 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar15 != (long*)0x0 ) && ( plVar15[1] != 0 ) ) && ( *(char*)( plVar15[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_98, (StringName*)( param_2 + 3 ));
      if (plVar15[1] == 0) {
         plVar13 = (long*)plVar15[0x23];
         if (plVar13 == (long*)0x0) {
            plVar13 = (long*)( **(code**)( *plVar15 + 0x40 ) )(plVar15);
         }

      }
 else {
         plVar13 = (long*)( plVar15[1] + 0x20 );
      }

      if (local_98 == (char*)*plVar13) {
         if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_a0 = 0;
         local_90 = 0x35;
         String::parse_latin1((StrRange*)&local_a0);
         vformat<StringName>((StringName*)&local_98, (StrRange*)&local_a0, &local_a8);
         _err_print_error(&_LC158, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_98, 0);
         pcVar5 = local_98;
         if (local_98 != (char*)0x0) {
            LOCK();
            plVar15 = (long*)( local_98 + -0x10 );
            *plVar15 = *plVar15 + -1;
            UNLOCK();
            if (*plVar15 == 0) {
               local_98 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         lVar17 = local_a0;
         if (local_a0 != 0) {
            LOCK();
            plVar15 = (long*)( local_a0 + -0x10 );
            *plVar15 = *plVar15 + -1;
            UNLOCK();
            if (*plVar15 == 0) {
               local_a0 = 0;
               Memory::free_static((void*)( lVar17 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011ce81;
      }

      if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   local_b8 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 5) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar7 = 0;
         lVar17 = 0;
      }
 else {
         lVar17 = *(long*)( pVVar2 + -8 );
         iVar7 = (int)lVar17;
      }

      if ((int)( 4 - in_R8D ) <= iVar7) {
         lVar12 = 0;
         do {
            if ((int)lVar12 < (int)in_R8D) {
               pVVar16 = *(Variant**)( param_4 + lVar12 * 8 );
            }
 else {
               uVar14 = iVar7 + -4 + (int)lVar12;
               if (lVar17 <= (int)uVar14) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar14, lVar17, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               pVVar16 = pVVar2 + (ulong)uVar14 * 0x18;
            }

            local_68[lVar12] = pVVar16;
            lVar12 = lVar12 + 1;
         }
 while ( lVar12 != 4 );
         *in_R9 = 0;
         if (( (ulong)local_b8 & 1 ) != 0) {
            local_b8 = *(Variant**)( local_b8 + *(long*)( (long)plVar15 + (long)pVVar1 ) + -1 );
         }

         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[3], 2);
         uVar4 = _LC168;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         iVar7 = Variant::operator_cast_to_int(local_68[3]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[2], 2);
         uVar4 = _LC165;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         iVar8 = Variant::operator_cast_to_int(local_68[2]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[1], 2);
         uVar4 = _LC166;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         iVar9 = Variant::operator_cast_to_int(local_68[1]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[0], 2);
         uVar4 = _LC171;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         iVar10 = Variant::operator_cast_to_int(local_68[0]);
         ( *(code*)local_b8 )((Dictionary*)&local_98, (Variant*)( (long)plVar15 + (long)pVVar1 ), iVar10, iVar9, iVar8, iVar7);
         Variant::Variant((Variant*)local_88, (Dictionary*)&local_98);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_88[0];
         *(undefined8*)( param_1 + 8 ) = local_80;
         *(undefined8*)( param_1 + 0x10 ) = uStack_78;
         Dictionary::~Dictionary((Dictionary*)&local_98);
         goto LAB_0011ce81;
      }

      uVar11 = 4;
   }
 else {
      uVar11 = 3;
   }

   *in_R9 = uVar11;
   in_R9[2] = 4;
   LAB_0011ce81:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<String_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   long lVar5;
   undefined8 uVar6;
   int iVar7;
   long in_FS_OFFSET;
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
   if (iVar7 != param_1) goto LAB_0011d105;
   local_78 = 0;
   local_68 = &_LC25;
   local_80 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._8_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 4);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0011d1f8:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0011d1f8;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   lVar5 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *(undefined4*)param_3 = local_68._0_4_;
   if (*(long*)( param_3 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
      uVar6 = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      *(undefined8*)( param_3 + 8 ) = uVar6;
   }

   if (*(long*)( param_3 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar6 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( param_3 + 0x10 ) = uVar6;
   }

   lVar5 = local_48;
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
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
      *(long*)( param_3 + 0x20 ) = local_48;
      *(undefined4*)( param_3 + 0x28 ) = local_40;
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

   iVar7 = *param_2;
   LAB_0011d105:*param_2 = iVar7 + 1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTR<Dictionary, String const&, String const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Dictionary,String_const&,String_const&>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   ulong uVar3;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
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
   if (in_EDX < 2) {
      local_60 = (undefined1[16])0x0;
      local_68 = (undefined*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      call_get_argument_type_info_helper<String_const&>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      call_get_argument_type_info_helper<String_const&>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      *puVar4 = local_68._0_4_;
      *(undefined8*)( puVar4 + 2 ) = local_60._0_8_;
      *(undefined8*)( puVar4 + 4 ) = local_60._8_8_;
      puVar4[6] = (undefined4)local_50;
      *(undefined8*)( puVar4 + 8 ) = local_48;
      puVar4[10] = local_40;
      goto LAB_0011d4e9;
   }

   local_78 = 0;
   local_70 = 0;
   local_68 = &_LC25;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_70);
   *puVar4 = 0x1b;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_70 == 0) {
      puVar4[10] = 6;
      LAB_0011d517:StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_70);
      puVar4[10] = 6;
      if (puVar4[6] != 0x11) goto LAB_0011d517;
      StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
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

   uVar3 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 - 0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( uVar3 - 0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   LAB_0011d4e9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<String const&>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<String_const&>::_gen_argument_type_info(int param_1) {
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
   call_get_argument_type_info_helper<String_const&>(in_EDX, &local_14, pPVar1);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info<String const&, EditorVCSInterface::ChangeType,
   EditorVCSInterface::TreeArea>(int, PropertyInfo&) */void call_get_argument_type_info<String_const&,EditorVCSInterface::ChangeType,EditorVCSInterface::TreeArea>(int param_1, PropertyInfo *param_2) {
   long *plVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined8 uVar7;
   long lVar8;
   long in_FS_OFFSET;
   int local_94;
   long local_90;
   details local_88[8];
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   char *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_94 = 0;
   call_get_argument_type_info_helper<String_const&>(param_1, &local_94, param_2);
   if (param_1 == local_94) {
      GetTypeInfo<EditorVCSInterface::ChangeType,void>::get_class_info((GetTypeInfo<EditorVCSInterface::ChangeType,void>*)&local_68);
      *(undefined4*)param_2 = local_68._0_4_;
      lVar2 = *(long*)( param_2 + 8 );
      if (lVar2 != local_60._0_8_) {
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( param_2 + 8 );
               *(undefined8*)( param_2 + 8 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         *(undefined8*)( param_2 + 8 ) = local_60._0_8_;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = local_60._8_8_;
         local_60 = auVar5 << 0x40;
      }

      if (*(long*)( param_2 + 0x10 ) != local_60._8_8_) {
         StringName::unref();
         uVar7 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( param_2 + 0x10 ) = uVar7;
      }

      lVar8 = local_48;
      *(undefined4*)( param_2 + 0x18 ) = (undefined4)local_50;
      lVar2 = *(long*)( param_2 + 0x20 );
      if (lVar2 == local_48) {
         *(undefined4*)( param_2 + 0x28 ) = local_40;
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
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
               lVar2 = *(long*)( param_2 + 0x20 );
               *(undefined8*)( param_2 + 0x20 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         *(long*)( param_2 + 0x20 ) = local_48;
         *(undefined4*)( param_2 + 0x28 ) = local_40;
      }

      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }

      uVar7 = local_60._0_8_;
      if (local_60._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_60._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_60._8_8_;
            local_60 = auVar3 << 0x40;
            Memory::free_static((void*)( uVar7 + -0x10 ), false);
         }

      }

   }

   local_94 = local_94 + 1;
   if (param_1 == local_94) {
      local_80 = 0;
      local_68 = "EditorVCSInterface::TreeArea";
      local_60._0_8_ = 0x1c;
      String::parse_latin1((StrRange*)&local_80);
      godot::details::enum_qualified_name_to_class_info_name(local_88, (String*)&local_80);
      StringName::StringName((StringName*)&local_90, (String*)local_88, false);
      local_60 = (undefined1[16])0x0;
      local_78 = 0;
      local_70 = 0;
      local_68 = (char*)0x2;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0x10006;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      *(undefined4*)param_2 = local_68._0_4_;
      lVar2 = *(long*)( param_2 + 8 );
      if (lVar2 != local_60._0_8_) {
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( param_2 + 8 );
               *(undefined8*)( param_2 + 8 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         *(undefined8*)( param_2 + 8 ) = local_60._0_8_;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = local_60._8_8_;
         local_60 = auVar6 << 0x40;
      }

      if (*(long*)( param_2 + 0x10 ) != local_60._8_8_) {
         StringName::unref();
         uVar7 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( param_2 + 0x10 ) = uVar7;
      }

      lVar8 = local_48;
      *(undefined4*)( param_2 + 0x18 ) = (undefined4)local_50;
      lVar2 = *(long*)( param_2 + 0x20 );
      if (lVar2 == local_48) {
         *(undefined4*)( param_2 + 0x28 ) = local_40;
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
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
               lVar2 = *(long*)( param_2 + 0x20 );
               *(undefined8*)( param_2 + 0x20 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         *(long*)( param_2 + 0x20 ) = local_48;
         *(undefined4*)( param_2 + 0x28 ) = local_40;
      }

      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }

      uVar7 = local_60._0_8_;
      if (local_60._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_60._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = local_60._8_8_;
            local_60 = auVar4 << 0x40;
            Memory::free_static((void*)( uVar7 + -0x10 ), false);
         }

      }

   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTR<Dictionary, String const&, EditorVCSInterface::ChangeType,
   EditorVCSInterface::TreeArea>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Dictionary,String_const&,EditorVCSInterface::ChangeType,EditorVCSInterface::TreeArea>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   long lVar3;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 3) {
      local_68 = (undefined*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_60 = (undefined1[16])0x0;
      call_get_argument_type_info<String_const&,EditorVCSInterface::ChangeType,EditorVCSInterface::TreeArea>(in_EDX, (PropertyInfo*)&local_68);
      *puVar4 = local_68._0_4_;
      *(undefined8*)( puVar4 + 2 ) = local_60._0_8_;
      *(undefined8*)( puVar4 + 4 ) = local_60._8_8_;
      puVar4[6] = (undefined4)local_50;
      *(undefined8*)( puVar4 + 8 ) = local_48;
      puVar4[10] = local_40;
      goto LAB_0011dac9;
   }

   local_78 = 0;
   local_70 = 0;
   local_68 = &_LC25;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_70);
   *puVar4 = 0x1b;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_70 == 0) {
      puVar4[10] = 6;
      LAB_0011dbdf:StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_78);
      lVar3 = local_70;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_70);
      puVar4[10] = 6;
      if (puVar4[6] != 0x11) goto LAB_0011dbdf;
      StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
      if (*(undefined**)( puVar4 + 4 ) == local_68) {
         lVar3 = local_70;
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
            lVar3 = local_70;
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar4 + 4 ) = local_68;
         lVar3 = local_70;
      }

   }

   local_70 = lVar3;
   if (lVar3 != 0) {
      LOCK();
      plVar1 = (long*)( lVar3 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   LAB_0011dac9:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar4;
}
/* MethodBindTR<Dictionary, int, int, String const&, String const&>::_gen_argument_type_info(int)
   const */undefined4 *MethodBindTR<Dictionary,int,int,String_const&,String_const&>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   long lVar3;
   ulong uVar4;
   undefined8 uVar5;
   long lVar6;
   int iVar7;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar8;
   long in_FS_OFFSET;
   ulong local_a0;
   long local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   undefined *local_68;
   long local_60;
   long local_58;
   undefined4 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   uVar4 = local_a0;
   puVar8 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 4) {
      local_98 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 6;
      local_a0 = local_a0 & 0xffffffff00000000;
      local_90 = (undefined1[16])0x0;
      if (in_EDX == 0) {
         GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_68);
         PropertyInfo::operator =((PropertyInfo*)&local_98, (PropertyInfo*)&local_68);
         lVar3 = local_48;
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

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
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
            }

         }

         iVar7 = (int)local_a0 + 1;
         local_a0._0_4_ = iVar7;
         if (iVar7 == 0) goto LAB_0011deda;
      }
 else {
         local_a0._4_4_ = SUB84(uVar4, 4);
         local_a0._0_4_ = 1;
         iVar7 = 1;
         if (in_EDX == 1) {
            LAB_0011deda:GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_68);
            local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
            uVar5 = local_90._0_8_;
            if (local_90._0_8_ != local_60) {
               if (local_90._0_8_ != 0) {
                  LOCK();
                  plVar1 = (long*)( local_90._0_8_ + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     auVar2._8_8_ = 0;
                     auVar2._0_8_ = local_90._8_8_;
                     local_90 = auVar2 << 0x40;
                     Memory::free_static((void*)( uVar5 + -0x10 ), false);
                  }

               }

               local_90._0_8_ = local_60;
               local_60 = 0;
            }

            if (local_90._8_8_ != local_58) {
               StringName::unref();
               lVar3 = local_58;
               local_58 = 0;
               local_90._8_8_ = lVar3;
            }

            lVar6 = local_48;
            lVar3 = local_78;
            local_80 = CONCAT44(local_80._4_4_, local_50);
            if (local_78 == local_48) {
               local_70 = local_40;
               if (local_78 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_78 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_48 = 0;
                     Memory::free_static((void*)( lVar6 + -0x10 ), false);
                  }

               }

            }
 else {
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

               local_78 = local_48;
               local_70 = local_40;
            }

            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            lVar3 = local_60;
            iVar7 = (int)local_a0;
            if (local_60 != 0) {
               LOCK();
               plVar1 = (long*)( local_60 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  iVar7 = (int)local_a0;
               }

            }

         }

      }

      local_a0 = CONCAT44(local_a0._4_4_, iVar7 + 1);
      call_get_argument_type_info_helper<String_const&>(in_EDX, (int*)&local_a0, (PropertyInfo*)&local_98);
      call_get_argument_type_info_helper<String_const&>(in_EDX, (int*)&local_a0, (PropertyInfo*)&local_98);
      *puVar8 = (undefined4)local_98;
      *(undefined8*)( puVar8 + 2 ) = local_90._0_8_;
      *(undefined8*)( puVar8 + 4 ) = local_90._8_8_;
      puVar8[6] = (undefined4)local_80;
      *(long*)( puVar8 + 8 ) = local_78;
      puVar8[10] = local_70;
      goto LAB_0011dd0e;
   }

   local_a0 = 0;
   local_98 = 0;
   local_68 = &_LC25;
   local_60 = 0;
   String::parse_latin1((StrRange*)&local_98);
   *puVar8 = 0x1b;
   puVar8[6] = 0;
   *(undefined8*)( puVar8 + 8 ) = 0;
   *(undefined1(*) [16])( puVar8 + 2 ) = (undefined1[16])0x0;
   if (local_98 == 0) {
      puVar8[10] = 6;
      LAB_0011de27:StringName::operator =((StringName*)( puVar8 + 4 ), (StringName*)&local_a0);
      lVar3 = local_98;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar8 + 8 ), (CowData*)&local_98);
      puVar8[10] = 6;
      if (puVar8[6] != 0x11) goto LAB_0011de27;
      StringName::StringName((StringName*)&local_68, (String*)( puVar8 + 8 ), false);
      if (*(undefined**)( puVar8 + 4 ) == local_68) {
         lVar3 = local_98;
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
            lVar3 = local_98;
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar8 + 4 ) = local_68;
         lVar3 = local_98;
      }

   }

   local_98 = lVar3;
   if (lVar3 != 0) {
      LOCK();
      plVar1 = (long*)( lVar3 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
      StringName::unref();
   }

   LAB_0011dd0e:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<long>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<long>(int param_1, int *param_2, PropertyInfo *param_3) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   long lVar5;
   undefined8 uVar6;
   int iVar7;
   long in_FS_OFFSET;
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
   if (iVar7 != param_1) goto LAB_0011e0e5;
   local_78 = 0;
   local_68 = &_LC25;
   local_80 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._8_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0011e1d8:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0011e1d8;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   lVar5 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *(undefined4*)param_3 = local_68._0_4_;
   if (*(long*)( param_3 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
      uVar6 = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      *(undefined8*)( param_3 + 8 ) = uVar6;
   }

   if (*(long*)( param_3 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar6 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( param_3 + 0x10 ) = uVar6;
   }

   lVar5 = local_48;
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
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
      *(long*)( param_3 + 0x20 ) = local_48;
      *(undefined4*)( param_3 + 0x28 ) = local_40;
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

   iVar7 = *param_2;
   LAB_0011e0e5:*param_2 = iVar7 + 1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTR<Dictionary, String const&, String const&, String const&, long,
   long>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Dictionary,String_const&,String_const&,String_const&,long,long>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   ulong uVar3;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
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
   if (in_EDX < 5) {
      local_60 = (undefined1[16])0x0;
      local_68 = (undefined*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      for (int i = 0; i < 3; i++) {
         call_get_argument_type_info_helper<String_const&>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      }

      call_get_argument_type_info_helper<long>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      call_get_argument_type_info_helper<long>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      *puVar4 = local_68._0_4_;
      *(undefined8*)( puVar4 + 2 ) = local_60._0_8_;
      *(undefined8*)( puVar4 + 4 ) = local_60._8_8_;
      puVar4[6] = (undefined4)local_50;
      *(undefined8*)( puVar4 + 8 ) = local_48;
      puVar4[10] = local_40;
      goto LAB_0011e432;
   }

   local_78 = 0;
   local_70 = 0;
   local_68 = &_LC25;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_70);
   *puVar4 = 0x1b;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_70 == 0) {
      puVar4[10] = 6;
      LAB_0011e53f:StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_78);
      uVar3 = local_70;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_70);
      puVar4[10] = 6;
      if (puVar4[6] != 0x11) goto LAB_0011e53f;
      StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
      if (*(undefined**)( puVar4 + 4 ) == local_68) {
         uVar3 = local_70;
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
            uVar3 = local_70;
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar4 + 4 ) = local_68;
         uVar3 = local_70;
      }

   }

   local_70 = uVar3;
   if (uVar3 != 0) {
      LOCK();
      plVar1 = (long*)( uVar3 - 0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( uVar3 - 0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   LAB_0011e432:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* List<String, DefaultAllocator>::~List() */void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodInfo::~MethodInfo() */void MethodInfo::~MethodInfo(MethodInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Dictionary, Dictionary, TypedArray<Dictionary> >::~MethodBindTR() */void MethodBindTR<Dictionary,Dictionary,TypedArray<Dictionary>>::~MethodBindTR(MethodBindTR<Dictionary,Dictionary,TypedArray<Dictionary>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Dictionary, String const&, EditorVCSInterface::ChangeType,
   EditorVCSInterface::TreeArea>::~MethodBindTR() */void MethodBindTR<Dictionary,String_const&,EditorVCSInterface::ChangeType,EditorVCSInterface::TreeArea>::~MethodBindTR(MethodBindTR<Dictionary,String_const&,EditorVCSInterface::ChangeType,EditorVCSInterface::TreeArea> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Dictionary, String const&, String const&, String const&, long,
   long>::~MethodBindTR() */void MethodBindTR<Dictionary,String_const&,String_const&,String_const&,long,long>::~MethodBindTR(MethodBindTR<Dictionary,String_const&,String_const&,String_const&,long,long> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Dictionary, String const&, String const&>::~MethodBindTR() */void MethodBindTR<Dictionary,String_const&,String_const&>::~MethodBindTR(MethodBindTR<Dictionary,String_const&,String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Dictionary, int, int, int, int>::~MethodBindTR() */void MethodBindTR<Dictionary,int,int,int,int>::~MethodBindTR(MethodBindTR<Dictionary,int,int,int,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Dictionary, int, int, String const&, String const&>::~MethodBindTR() */void MethodBindTR<Dictionary,int,int,String_const&,String_const&>::~MethodBindTR(MethodBindTR<Dictionary,int,int,String_const&,String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<EditorVCSInterface::DiffFile, DefaultAllocator>::~List() */void List<EditorVCSInterface::DiffFile,DefaultAllocator>::~List(List<EditorVCSInterface::DiffFile,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<EditorVCSInterface::DiffHunk, DefaultAllocator>::~List() */void List<EditorVCSInterface::DiffHunk,DefaultAllocator>::~List(List<EditorVCSInterface::DiffHunk,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<EditorVCSInterface::DiffLine, DefaultAllocator>::~List() */void List<EditorVCSInterface::DiffLine,DefaultAllocator>::~List(List<EditorVCSInterface::DiffLine,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<EditorVCSInterface::Commit, DefaultAllocator>::~List() */void List<EditorVCSInterface::Commit,DefaultAllocator>::~List(List<EditorVCSInterface::Commit,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<EditorVCSInterface::StatusFile, DefaultAllocator>::~List() */void List<EditorVCSInterface::StatusFile,DefaultAllocator>::~List(List<EditorVCSInterface::StatusFile,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

