
/* UndoRedo::is_committing_action() const */

undefined4 __thiscall UndoRedo::is_committing_action(UndoRedo *this)

{
  return CONCAT31((int3)((uint)*(int *)(this + 0x1e0) >> 8),0 < *(int *)(this + 0x1e0));
}



/* UndoRedo::has_undo() const */

uint __thiscall UndoRedo::has_undo(UndoRedo *this)

{
  return ~*(uint *)(this + 0x188) >> 0x1f;
}



/* UndoRedo::has_redo() const */

undefined8 __thiscall UndoRedo::has_redo(UndoRedo *this)

{
  long lVar1;
  
  if (*(long *)(this + 0x180) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(this + 0x180) + -8);
  }
  return CONCAT71((int7)(int3)((uint)(*(int *)(this + 0x188) + 1) >> 8),
                  *(int *)(this + 0x188) + 1 < lVar1);
}



/* UndoRedo::get_version() const */

undefined8 __thiscall UndoRedo::get_version(UndoRedo *this)

{
  return *(undefined8 *)(this + 0x1a0);
}



/* UndoRedo::set_max_steps(int) */

void __thiscall UndoRedo::set_max_steps(UndoRedo *this,int param_1)

{
  *(int *)(this + 0x194) = param_1;
  return;
}



/* UndoRedo::get_max_steps() const */

undefined4 __thiscall UndoRedo::get_max_steps(UndoRedo *this)

{
  return *(undefined4 *)(this + 0x194);
}



/* UndoRedo::get_current_action() */

undefined4 __thiscall UndoRedo::get_current_action(UndoRedo *this)

{
  if (*(int *)(this + 400) < 1) {
    return *(undefined4 *)(this + 0x188);
  }
  _err_print_error("get_current_action","core/object/undo_redo.cpp",0x1bd,
                   "Condition \"action_level > 0\" is true. Returning: -1",0,0);
  return 0xffffffff;
}



/* UndoRedo::start_force_keep_in_merge_ends() */

void __thiscall UndoRedo::start_force_keep_in_merge_ends(UndoRedo *this)

{
  long lVar1;
  
  if (*(int *)(this + 400) < 1) {
    _err_print_error("start_force_keep_in_merge_ends","core/object/undo_redo.cpp",0x115,
                     "Condition \"action_level <= 0\" is true.",0,0);
    return;
  }
  if (*(long *)(this + 0x180) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(this + 0x180) + -8);
  }
  if (*(int *)(this + 0x188) + 1 < lVar1) {
    this[0x18c] = (UndoRedo)0x1;
    return;
  }
  _err_print_error("start_force_keep_in_merge_ends","core/object/undo_redo.cpp",0x116,
                   "Condition \"(current_action + 1) >= actions.size()\" is true.",0,0);
  return;
}



/* UndoRedo::end_force_keep_in_merge_ends() */

void __thiscall UndoRedo::end_force_keep_in_merge_ends(UndoRedo *this)

{
  long lVar1;
  
  if (*(int *)(this + 400) < 1) {
    _err_print_error("end_force_keep_in_merge_ends","core/object/undo_redo.cpp",0x11c,
                     "Condition \"action_level <= 0\" is true.",0,0);
    return;
  }
  if (*(long *)(this + 0x180) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(this + 0x180) + -8);
  }
  if (*(int *)(this + 0x188) + 1 < lVar1) {
    this[0x18c] = (UndoRedo)0x0;
    return;
  }
  _err_print_error("end_force_keep_in_merge_ends","core/object/undo_redo.cpp",0x11d,
                   "Condition \"(current_action + 1) >= actions.size()\" is true.",0,0);
  return;
}



/* UndoRedo::get_history_count() */

undefined4 __thiscall UndoRedo::get_history_count(UndoRedo *this)

{
  if (0 < *(int *)(this + 400)) {
    _err_print_error("get_history_count","core/object/undo_redo.cpp",0x1b7,
                     "Condition \"action_level > 0\" is true. Returning: -1",0,0);
    return 0xffffffff;
  }
  if (*(long *)(this + 0x180) != 0) {
    return *(undefined4 *)(*(long *)(this + 0x180) + -8);
  }
  return 0;
}



/* UndoRedo::Operation::delete_reference() [clone .part.0] [clone .isra.0] */

void __thiscall UndoRedo::Operation::delete_reference(Operation *this)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  uint uVar4;
  ulong *puVar5;
  long in_FS_OFFSET;
  bool bVar6;
  
  uVar4 = (uint)this & 0xffffff;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar4 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar5 = (ulong *)((ulong)uVar4 * 0x10 + ObjectDB::object_slots);
    if (((ulong)this >> 0x18 & 0x7fffffffff) == (*puVar5 & 0x7fffffffff)) {
      pOVar2 = (Object *)puVar5[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if ((pOVar2 != (Object *)0x0) && (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pOVar2,false);
          return;
        }
        goto LAB_001003b4;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
    return;
  }
LAB_001003b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<UndoRedo::Operation, DefaultAllocator>::reverse() [clone .isra.0] */

void __thiscall
List<UndoRedo::Operation,DefaultAllocator>::reverse
          (List<UndoRedo::Operation,DefaultAllocator> *this)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  Object *pOVar4;
  undefined8 uVar5;
  Object *pOVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long in_FS_OFFSET;
  Object *local_80;
  long local_70;
  Callable local_68 [16];
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this != (List<UndoRedo::Operation,DefaultAllocator> *)0x0) {
    iVar2 = *(int *)(this + 0x10);
    puVar11 = *(undefined4 **)this;
    puVar10 = *(undefined4 **)(this + 8);
    if (1 < iVar2) {
      iVar9 = 0;
      do {
        uVar3 = *puVar11;
        uVar1 = *(undefined1 *)(puVar11 + 1);
        local_80 = (Object *)0x0;
        pOVar4 = *(Object **)(puVar11 + 2);
        if (pOVar4 != (Object *)0x0) {
          cVar8 = RefCounted::reference();
          local_80 = pOVar4;
          if (cVar8 == '\0') {
            local_80 = (Object *)0x0;
          }
        }
        uVar5 = *(undefined8 *)(puVar11 + 4);
        local_70 = *(long *)(puVar11 + 6);
        *(undefined8 *)(puVar11 + 6) = 0;
        Callable::Callable(local_68,(Callable *)(puVar11 + 8));
        local_58[0] = puVar11[0xc];
        local_50 = *(undefined1 (*) [16])(puVar11 + 0xe);
        puVar11[0xc] = 0;
        pOVar4 = *(Object **)(puVar10 + 2);
        pOVar6 = *(Object **)(puVar11 + 2);
        *puVar11 = *puVar10;
        *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar10 + 1);
        if (pOVar4 != pOVar6) {
          *(Object **)(puVar11 + 2) = pOVar4;
          if (pOVar4 != (Object *)0x0) {
            cVar8 = RefCounted::reference();
            if (cVar8 == '\0') {
              *(undefined8 *)(puVar11 + 2) = 0;
            }
          }
          if (pOVar6 != (Object *)0x0) {
            cVar8 = RefCounted::unreference();
            if (cVar8 != '\0') {
              cVar8 = predelete_handler(pOVar6);
              if (cVar8 != '\0') {
                (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
                Memory::free_static(pOVar6,false);
              }
            }
          }
        }
        *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(puVar10 + 4);
        if (*(long *)(puVar11 + 6) != *(long *)(puVar10 + 6)) {
          StringName::unref();
          *(undefined8 *)(puVar11 + 6) = *(undefined8 *)(puVar10 + 6);
          *(undefined8 *)(puVar10 + 6) = 0;
        }
        Callable::operator=((Callable *)(puVar11 + 8),(Callable *)(puVar10 + 8));
        if (puVar10 + 0xc != puVar11 + 0xc) {
          if (Variant::needs_deinit[(int)puVar11[0xc]] != '\0') {
            Variant::_clear_internal();
          }
          puVar11[0xc] = 0;
          puVar11[0xc] = puVar10[0xc];
          uVar7 = *(undefined8 *)(puVar10 + 0x10);
          *(undefined8 *)(puVar11 + 0xe) = *(undefined8 *)(puVar10 + 0xe);
          *(undefined8 *)(puVar11 + 0x10) = uVar7;
          puVar10[0xc] = 0;
        }
        pOVar4 = *(Object **)(puVar10 + 2);
        *puVar10 = uVar3;
        *(undefined1 *)(puVar10 + 1) = uVar1;
        if (local_80 != pOVar4) {
          *(Object **)(puVar10 + 2) = local_80;
          if (local_80 != (Object *)0x0) {
            cVar8 = RefCounted::reference();
            if (cVar8 == '\0') {
              *(undefined8 *)(puVar10 + 2) = 0;
            }
          }
          if (pOVar4 != (Object *)0x0) {
            cVar8 = RefCounted::unreference();
            if (cVar8 != '\0') {
              cVar8 = predelete_handler(pOVar4);
              if (cVar8 != '\0') {
                (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                Memory::free_static(pOVar4,false);
              }
            }
          }
        }
        *(undefined8 *)(puVar10 + 4) = uVar5;
        if (*(long *)(puVar10 + 6) != local_70) {
          StringName::unref();
          *(long *)(puVar10 + 6) = local_70;
          local_70 = 0;
        }
        Callable::operator=((Callable *)(puVar10 + 8),local_68);
        if (puVar10 + 0xc == local_58) {
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        else {
          if (Variant::needs_deinit[(int)puVar10[0xc]] != '\0') {
            Variant::_clear_internal();
          }
          puVar10[0xc] = 0;
          puVar10[0xc] = local_58[0];
          *(undefined8 *)(puVar10 + 0xe) = local_50._0_8_;
          *(undefined8 *)(puVar10 + 0x10) = local_50._8_8_;
        }
        Callable::~Callable(local_68);
        if ((StringName::configured != '\0') && (local_70 != 0)) {
          StringName::unref();
        }
        if (local_80 != (Object *)0x0) {
          cVar8 = RefCounted::unreference();
          if (cVar8 != '\0') {
            cVar8 = predelete_handler(local_80);
            if (cVar8 != '\0') {
              (**(code **)(*(long *)local_80 + 0x140))(local_80);
              Memory::free_static(local_80,false);
            }
          }
        }
        iVar9 = iVar9 + 1;
        puVar11 = *(undefined4 **)(puVar11 + 0x12);
        puVar10 = *(undefined4 **)(puVar10 + 0x14);
      } while (iVar9 < iVar2 / 2);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<UndoRedo::Operation, DefaultAllocator>::push_back(UndoRedo::Operation const&) [clone
   .isra.0] */

void __thiscall
List<UndoRedo::Operation,DefaultAllocator>::push_back
          (List<UndoRedo::Operation,DefaultAllocator> *this,Operation *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined1 (*pauVar6) [16];
  
  if (*(long *)this == 0) {
    pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar6;
    *(undefined4 *)pauVar6[1] = 0;
    *pauVar6 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
  *(undefined1 (*) [16])(puVar5 + 0xe) = (undefined1  [16])0x0;
  *(undefined1 *)(puVar5 + 1) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  lVar1 = *(long *)(param_1 + 8);
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 10) = 0;
  puVar5[0xc] = 0;
  *(undefined8 *)(puVar5 + 0x16) = 0;
  *(undefined1 (*) [16])(puVar5 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar5 + 0x12) = (undefined1  [16])0x0;
  *puVar5 = *(undefined4 *)param_1;
  *(Operation *)(puVar5 + 1) = param_1[4];
  if (lVar1 != 0) {
    *(long *)(puVar5 + 2) = lVar1;
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      *(undefined8 *)(puVar5 + 2) = 0;
    }
  }
  *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(param_1 + 0x10);
  StringName::operator=((StringName *)(puVar5 + 6),(StringName *)(param_1 + 0x18));
  Callable::operator=((Callable *)(puVar5 + 8),(Callable *)(param_1 + 0x20));
  Variant::operator=((Variant *)(puVar5 + 0xc),(Variant *)(param_1 + 0x30));
  uVar2 = *(undefined8 *)(*(long *)this + 8);
  *(long *)(puVar5 + 0x16) = *(long *)this;
  plVar3 = *(long **)this;
  *(undefined8 *)(puVar5 + 0x12) = 0;
  *(undefined8 *)(puVar5 + 0x14) = uVar2;
  if (plVar3[1] != 0) {
    *(undefined4 **)(plVar3[1] + 0x48) = puVar5;
  }
  plVar3[1] = (long)puVar5;
  if (*plVar3 != 0) {
    *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
    return;
  }
  *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
  *plVar3 = (long)puVar5;
  return;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
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
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* UndoRedo::get_action_name(int) */

CowData<char32_t> * UndoRedo::get_action_name(int param_1)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  CowData<char32_t> *this;
  long lVar5;
  long in_FS_OFFSET;
  
  this = (CowData<char32_t> *)CONCAT44(in_register_0000003c,param_1);
  lVar4 = (long)in_EDX;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)(in_RSI + 0x180);
  if (in_EDX < 0) {
    if (lVar3 == 0) goto LAB_00100a60;
    lVar5 = *(long *)(lVar3 + -8);
  }
  else if (lVar3 == 0) {
LAB_00100a60:
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar3 + -8);
    if (lVar4 < lVar5) {
      *(undefined8 *)this = 0;
      pCVar1 = (CowData *)(lVar3 + lVar4 * 0x28);
      if (*(long *)pCVar1 != 0) {
        CowData<char32_t>::_ref(this,pCVar1);
      }
      goto LAB_001009d7;
    }
  }
  _err_print_index_error
            ("get_action_name","core/object/undo_redo.cpp",0x1c3,lVar4,lVar5,"p_id","actions.size()"
             ,"",false,false);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
LAB_001009d7:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* UndoRedo::get_current_action_name() const */

void UndoRedo::get_current_action_name(void)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long in_RSI;
  CowData<char32_t> *in_RDI;
  long lVar6;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(in_RSI + 400) < 1) {
    lVar5 = (long)*(int *)(in_RSI + 0x188);
    if (-1 < *(int *)(in_RSI + 0x188)) {
      lVar3 = *(long *)(in_RSI + 0x180);
      if (lVar3 == 0) {
        lVar6 = 0;
LAB_00100b4b:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar6,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar6 = *(long *)(lVar3 + -8);
      if (lVar6 <= lVar5) goto LAB_00100b4b;
      *(undefined8 *)in_RDI = 0;
      pCVar1 = (CowData *)(lVar3 + lVar5 * 0x28);
      if (*(long *)pCVar1 != 0) {
        CowData<char32_t>::_ref(in_RDI,pCVar1);
      }
      goto LAB_00100ad8;
    }
  }
  else {
    _err_print_error("get_current_action_name","core/object/undo_redo.cpp",0x1d7,
                     "Condition \"action_level > 0\" is true. Returning: \"\"",0,0);
  }
  *(undefined8 *)in_RDI = 0;
  String::parse_latin1((StrRange *)in_RDI);
LAB_00100ad8:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* UndoRedo::Operation::delete_reference() */

void __thiscall UndoRedo::Operation::delete_reference(Operation *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(int *)this != 2) {
    return;
  }
  if (*(long *)(this + 8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
    *(undefined8 *)(this + 8) = 0;
    return;
  }
  delete_reference(*(Operation **)(this + 0x10));
  return;
}



/* UndoRedo::get_action_level() const */

undefined4 __thiscall UndoRedo::get_action_level(UndoRedo *this)

{
  return *(undefined4 *)(this + 400);
}



/* UndoRedo::is_merging() const */

UndoRedo __thiscall UndoRedo::is_merging(UndoRedo *this)

{
  return this[0x19c];
}



/* UndoRedo::set_commit_notify_callback(void (*)(void*, String const&), void*) */

void __thiscall
UndoRedo::set_commit_notify_callback
          (UndoRedo *this,_func_void_void_ptr_String_ptr *param_1,void *param_2)

{
  *(_func_void_void_ptr_String_ptr **)(this + 0x1b0) = param_1;
  *(void **)(this + 0x1b8) = param_2;
  return;
}



/* UndoRedo::set_method_notify_callback(void (*)(void*, Object*, StringName const&, Variant const**,
   int), void*) */

void __thiscall
UndoRedo::set_method_notify_callback
          (UndoRedo *this,_func_void_void_ptr_Object_ptr_StringName_ptr_Variant_ptr_ptr_int *param_1
          ,void *param_2)

{
  *(_func_void_void_ptr_Object_ptr_StringName_ptr_Variant_ptr_ptr_int **)(this + 0x1d0) = param_1;
  *(void **)(this + 0x1c0) = param_2;
  return;
}



/* UndoRedo::set_property_notify_callback(void (*)(void*, Object*, StringName const&, Variant
   const&), void*) */

void __thiscall
UndoRedo::set_property_notify_callback
          (UndoRedo *this,_func_void_void_ptr_Object_ptr_StringName_ptr_Variant_ptr *param_1,
          void *param_2)

{
  *(_func_void_void_ptr_Object_ptr_StringName_ptr_Variant_ptr **)(this + 0x1d8) = param_1;
  *(void **)(this + 0x1c8) = param_2;
  return;
}



/* UndoRedo::_process_operation_list(List<UndoRedo::Operation, DefaultAllocator>::Element*, bool) */

void __thiscall UndoRedo::_process_operation_list(UndoRedo *this,Element *param_1,bool param_2)

{
  long *plVar1;
  StringName *pSVar2;
  char *__s;
  ulong uVar3;
  size_t sVar4;
  void *pvVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  long lVar11;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<char32_t> *local_c0;
  uint local_b4;
  undefined8 local_90;
  Object local_88 [8];
  undefined8 local_80;
  int local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  char *local_68;
  size_t local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pvVar5 = (void *)Memory::realloc_static((void *)0x0,0x80,false);
  if (pvVar5 == (void *)0x0) {
    _err_print_error("reserve","./core/templates/local_vector.h",0x92,
                     "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  local_b4 = 0x10;
  if (param_1 != (Element *)0x0) {
    do {
      while( true ) {
        uVar9 = (uint)*(ulong *)(param_1 + 0x10) & 0xffffff;
        if (uVar9 < (uint)ObjectDB::slot_max) break;
        _err_print_error("get_instance","./core/object/object.h",0x418,
                         "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00100d80:
        param_1 = *(Element **)(param_1 + 0x48);
        if (param_1 == (Element *)0x0) goto LAB_00100e41;
      }
      while( true ) {
        uVar3 = (ulong)local_68 >> 8;
        local_68 = (char *)(uVar3 << 8);
        LOCK();
        bVar12 = (char)ObjectDB::spin_lock == '\0';
        if (bVar12) {
          ObjectDB::spin_lock._0_1_ = '\x01';
        }
        UNLOCK();
        if (bVar12) break;
        local_68 = (char *)(uVar3 << 8);
        do {
        } while ((char)ObjectDB::spin_lock != '\0');
      }
      puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
      if ((*(ulong *)(param_1 + 0x10) >> 0x18 & 0x7fffffffff) != (*puVar10 & 0x7fffffffff)) {
        ObjectDB::spin_lock._0_1_ = '\0';
        goto LAB_00100d80;
      }
      pSVar2 = (StringName *)puVar10[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if (pSVar2 == (StringName *)0x0) goto LAB_00100d80;
      if (*(int *)param_1 != 0) {
        if (*(int *)param_1 == 1) {
          if (param_2) {
            Object::set(pSVar2,(Variant *)(param_1 + 0x18),(bool *)(param_1 + 0x30));
            lVar7 = __dynamic_cast(pSVar2,&Object::typeinfo,&Resource::typeinfo,0);
            if (lVar7 != 0) {
              Object::set_edited(SUB81(lVar7,0));
            }
          }
          if (*(code **)(this + 0x1d8) != (code *)0x0) {
            (**(code **)(this + 0x1d8))
                      (*(undefined8 *)(this + 0x1c8),pSVar2,param_1 + 0x18,param_1 + 0x30);
          }
        }
        goto LAB_00100d80;
      }
      if (param_2) {
        local_78 = 0;
        uStack_74 = 0;
        local_70 = 0;
        local_58[0] = 0;
        local_58[1] = 0;
        local_50 = (undefined1  [16])0x0;
        Callable::callp((Variant **)(param_1 + 0x20),0,(Variant *)0x0,(CallError *)local_58);
        if (local_78 != 0) {
          Variant::get_call_error_text
                    (local_88,pSVar2,(Variant **)(param_1 + 0x18),0,(CallError *)0x0);
          lVar7 = *(long *)(param_1 + 0x18);
          if (lVar7 == 0) {
            local_90 = 0;
          }
          else {
            __s = *(char **)(lVar7 + 8);
            local_90 = 0;
            if (__s == (char *)0x0) {
              if (*(long *)(lVar7 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)(lVar7 + 0x10));
              }
            }
            else {
              local_60 = strlen(__s);
              local_68 = __s;
              String::parse_latin1((StrRange *)&local_90);
            }
          }
          local_c0 = (CowData<char32_t> *)&local_90;
          local_80 = 0;
          local_68 = "Error calling UndoRedo method operation \'%s\': %s.";
          local_60 = 0x31;
          String::parse_latin1((StrRange *)&local_80);
          vformat<String,String>
                    ((CowData<char32_t> *)&local_68,(StrRange *)&local_80,local_c0,local_88);
          _err_print_error("_process_operation_list","core/object/undo_redo.cpp",0x16f,
                           (CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
          CowData<char32_t>::_unref(local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
        }
        lVar7 = __dynamic_cast(pSVar2,&Object::typeinfo,&Resource::typeinfo,0);
        if (lVar7 != 0) {
          Object::set_edited(SUB81(lVar7,0));
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      pcVar6 = *(code **)(this + 0x1d0);
      if (pcVar6 == (code *)0x0) goto LAB_00100d80;
      local_70 = 0;
      uStack_6c = 0;
      if ((*(long *)(param_1 + 0x20) == 0) && (*(long *)(param_1 + 0x28) != 0)) {
        lVar7 = Callable::get_custom();
        if ((lVar7 == 0) ||
           (lVar7 = __dynamic_cast(lVar7,&CallableCustom::typeinfo,&CallableCustomBind::typeinfo,0),
           lVar7 == 0)) {
LAB_00101153:
          pcVar6 = *(code **)(this + 0x1d0);
          goto LAB_00100e13;
        }
        local_60 = 0;
        plVar1 = (long *)(*(long *)(lVar7 + 0x28) + -0x10);
        if (*(long *)(lVar7 + 0x28) == 0) {
          CowData<Variant>::_unref((CowData<Variant> *)&local_60);
          goto LAB_00101153;
        }
        do {
          lVar11 = *plVar1;
          if (lVar11 == 0) goto LAB_0010102b;
          LOCK();
          lVar8 = *plVar1;
          bVar12 = lVar11 == lVar8;
          if (bVar12) {
            *plVar1 = lVar11 + 1;
            lVar8 = lVar11;
          }
          UNLOCK();
        } while (!bVar12);
        if (lVar8 != -1) {
          local_60 = *(long *)(lVar7 + 0x28);
        }
LAB_0010102b:
        sVar4 = local_60;
        if (local_60 != CONCAT44(uStack_6c,local_70)) {
          CowData<Variant>::_unref((CowData<Variant> *)&local_70);
          local_60 = 0;
          local_70 = (undefined4)sVar4;
          uStack_6c = (undefined4)(sVar4 >> 0x20);
        }
        CowData<Variant>::_unref((CowData<Variant> *)&local_60);
        if (sVar4 == 0) goto LAB_00101153;
        lVar7 = *(long *)(sVar4 + -8);
        if (0 < lVar7) {
          lVar11 = 0;
          do {
            while (lVar8 = sVar4 + lVar11 * 0x18, local_b4 != (uint)lVar11) {
              *(long *)((long)pvVar5 + lVar11 * 8) = lVar8;
              lVar11 = lVar11 + 1;
              if (lVar7 <= lVar11) goto LAB_00101102;
            }
            local_b4 = local_b4 * 2;
            if (local_b4 == 0) {
              local_b4 = 1;
            }
            pvVar5 = (void *)Memory::realloc_static(pvVar5,(ulong)local_b4 << 3,false);
            if (pvVar5 == (void *)0x0) {
              _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                               "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar6 = (code *)invalidInstructionException();
              (*pcVar6)();
            }
            lVar7 = *(long *)(sVar4 + -8);
            *(long *)((long)pvVar5 + lVar11 * 8) = lVar8;
            lVar11 = lVar11 + 1;
          } while (lVar11 < lVar7);
        }
LAB_00101102:
        (**(code **)(this + 0x1d0))(*(undefined8 *)(this + 0x1c0),pSVar2,param_1 + 0x18,pvVar5);
      }
      else {
LAB_00100e13:
        (*pcVar6)(*(undefined8 *)(this + 0x1c0),pSVar2,param_1 + 0x18,0);
      }
      CowData<Variant>::_unref((CowData<Variant> *)&local_70);
      param_1 = *(Element **)(param_1 + 0x48);
    } while (param_1 != (Element *)0x0);
LAB_00100e41:
    if (pvVar5 == (void *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001012e4;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Memory::free_static(pvVar5,false);
    return;
  }
LAB_001012e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* UndoRedo::_bind_methods() */

void UndoRedo::_bind_methods(void)

{
  Variant *pVVar1;
  long *plVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar7;
  MethodBind *pMVar8;
  uint uVar9;
  Variant *pVVar10;
  long in_FS_OFFSET;
  undefined8 local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  char *local_188;
  undefined8 local_180;
  char *local_178;
  undefined8 local_170;
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138 [2];
  undefined8 local_128;
  undefined8 local_120;
  long local_110;
  char *local_108;
  char *pcStack_100;
  char *local_f8;
  undefined8 local_f0;
  char *local_e8;
  char *pcStack_e0;
  char *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  char *pcStack_c0;
  char *local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  char **local_98;
  Variant **local_88;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = 0;
  local_b8 = "backward_undo_ops";
  local_a8 = (Variant *)&local_c8;
  local_c8 = &_LC45;
  pcStack_c0 = "merge_mode";
  pVStack_a0 = (Variant *)&pcStack_c0;
  local_98 = &local_b8;
  D_METHODP((char *)&local_178,(char ***)"create_action",(uint)&local_a8);
  Variant::Variant((Variant *)&local_88,0);
  pVVar10 = (Variant *)local_40;
  Variant::Variant((Variant *)&local_70,false);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_a8 = (Variant *)&local_88;
  pVStack_a0 = (Variant *)&local_70;
  pMVar8 = create_method_bind<UndoRedo,String_const&,UndoRedo::MergeMode,bool>(create_action);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_178,&local_a8,2);
  do {
    pVVar1 = pVVar10 + -0x18;
    pVVar10 = pVVar10 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar10 != (Variant *)&local_88);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  pVStack_a0 = (Variant *)0x0;
  local_a8 = (Variant *)0x106ce4;
  uVar9 = (uint)(Variant *)&local_88;
  local_88 = &local_a8;
  D_METHODP((char *)&local_178,(char ***)"commit_action",uVar9);
  Variant::Variant((Variant *)&local_88,true);
  local_68 = (undefined1  [16])0x0;
  local_70 = 0;
  local_a8 = (Variant *)&local_88;
  pMVar8 = create_method_bind<UndoRedo,bool>(commit_action);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_178,&local_a8,1);
  if (Variant::needs_deinit[(int)local_70] == '\0') {
    cVar3 = Variant::needs_deinit[(int)local_88];
  }
  else {
    Variant::_clear_internal();
    cVar3 = Variant::needs_deinit[(int)local_88];
  }
  if (cVar3 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  D_METHODP((char *)&local_178,(char ***)"is_committing_action",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar8 = create_method_bind<UndoRedo,bool>(is_committing_action);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  local_a8 = (Variant *)0x106d0f;
  pVStack_a0 = (Variant *)0x0;
  local_88 = &local_a8;
  D_METHODP((char *)&local_178,(char ***)"add_do_method",uVar9);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar8 = create_method_bind<UndoRedo,Callable_const&>(add_do_method);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  local_a8 = (Variant *)0x106d0f;
  pVStack_a0 = (Variant *)0x0;
  local_88 = &local_a8;
  D_METHODP((char *)&local_178,(char ***)"add_undo_method",uVar9);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar8 = create_method_bind<UndoRedo,Callable_const&>(add_undo_method);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  local_e8 = "object";
  pcStack_e0 = "property";
  auStack_80._8_8_ = &local_d8;
  auStack_80._0_8_ = &pcStack_e0;
  local_d0 = 0;
  local_d8 = "value";
  local_88 = (Variant **)&local_e8;
  D_METHODP((char *)&local_178,(char ***)"add_do_property",uVar9);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar8 = create_method_bind<UndoRedo,Object*,StringName_const&,Variant_const&>(add_do_property);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  local_108 = "object";
  pcStack_100 = "property";
  auStack_80._8_8_ = &local_f8;
  auStack_80._0_8_ = &pcStack_100;
  local_f0 = 0;
  local_f8 = "value";
  local_88 = (Variant **)&local_108;
  D_METHODP((char *)&local_178,(char ***)"add_undo_property",uVar9);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar8 = create_method_bind<UndoRedo,Object*,StringName_const&,Variant_const&>(add_undo_property);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  local_a8 = (Variant *)0x106ca4;
  pVStack_a0 = (Variant *)0x0;
  local_88 = &local_a8;
  D_METHODP((char *)&local_178,(char ***)"add_do_reference",uVar9);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar8 = create_method_bind<UndoRedo,Object*>(add_do_reference);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  local_a8 = (Variant *)0x106ca4;
  pVStack_a0 = (Variant *)0x0;
  local_88 = &local_a8;
  D_METHODP((char *)&local_178,(char ***)"add_undo_reference",uVar9);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar8 = create_method_bind<UndoRedo,Object*>(add_undo_reference);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  D_METHODP((char *)&local_178,(char ***)"start_force_keep_in_merge_ends",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar8 = create_method_bind<UndoRedo>(start_force_keep_in_merge_ends);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  D_METHODP((char *)&local_178,(char ***)"end_force_keep_in_merge_ends",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar8 = create_method_bind<UndoRedo>(end_force_keep_in_merge_ends);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  D_METHODP((char *)&local_178,(char ***)"get_history_count",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar8 = create_method_bind<UndoRedo,int>(get_history_count);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  D_METHODP((char *)&local_178,(char ***)"get_current_action",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar8 = create_method_bind<UndoRedo,int>(get_current_action);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  pVStack_a0 = (Variant *)0x0;
  local_a8 = (Variant *)&_LC60;
  local_88 = &local_a8;
  D_METHODP((char *)&local_178,(char ***)"get_action_name",uVar9);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar8 = create_method_bind<UndoRedo,String,int>(get_action_name);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  pVStack_a0 = (Variant *)0x0;
  local_a8 = (Variant *)0x106d85;
  local_88 = &local_a8;
  D_METHODP((char *)&local_178,(char ***)"clear_history",uVar9);
  Variant::Variant((Variant *)&local_88,true);
  local_68 = (undefined1  [16])0x0;
  local_70 = 0;
  local_a8 = (Variant *)&local_88;
  pMVar8 = create_method_bind<UndoRedo,bool>(clear_history);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_178,&local_a8,1);
  if (Variant::needs_deinit[(int)local_70] == '\0') {
    cVar3 = Variant::needs_deinit[(int)local_88];
  }
  else {
    Variant::_clear_internal();
    cVar3 = Variant::needs_deinit[(int)local_88];
  }
  if (cVar3 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  D_METHODP((char *)&local_178,(char ***)"get_current_action_name",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar8 = create_method_bind<UndoRedo,String>(get_current_action_name);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  D_METHODP((char *)&local_178,(char ***)"has_undo",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar8 = create_method_bind<UndoRedo,bool>(has_undo);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  D_METHODP((char *)&local_178,(char ***)"has_redo",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar8 = create_method_bind<UndoRedo,bool>(has_redo);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  D_METHODP((char *)&local_178,(char ***)"get_version",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar8 = create_method_bind<UndoRedo,unsigned_long>(get_version);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  local_a8 = (Variant *)0x106dc2;
  pVStack_a0 = (Variant *)0x0;
  local_88 = &local_a8;
  D_METHODP((char *)&local_178,(char ***)"set_max_steps",uVar9);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar8 = create_method_bind<UndoRedo,int>(set_max_steps);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  D_METHODP((char *)&local_178,(char ***)"get_max_steps",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar8 = create_method_bind<UndoRedo,int>(get_max_steps);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  D_METHODP((char *)&local_178,(char ***)&_LC69,0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar8 = create_method_bind<UndoRedo,bool>(redo);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  D_METHODP((char *)&local_178,(char ***)&_LC70,0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar8 = create_method_bind<UndoRedo,bool>(undo);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  _scs_create((char *)&local_190,true);
  _scs_create((char *)&local_198,true);
  local_1a0 = 0;
  local_178 = "0,50,1,or_greater";
  local_1a8 = 0;
  local_170 = 0x11;
  String::parse_latin1((StrRange *)&local_1a8);
  local_1b0 = 0;
  local_178 = "max_steps";
  local_170 = 9;
  String::parse_latin1((StrRange *)&local_1b0);
  local_178 = (char *)CONCAT44(local_178._4_4_,2);
  local_170 = 0;
  if (local_1b0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_170,(CowData *)&local_1b0);
  }
  local_168._0_12_ = ZEXT412(1) << 0x40;
  local_158 = 0;
  if (local_1a8 == 0) {
    local_150 = CONCAT44(local_150._4_4_,6);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,(CowData *)&local_1a8);
    local_150 = CONCAT44(local_150._4_4_,6);
    if (local_168._8_4_ == 0x11) {
      StringName::StringName((StringName *)&local_188,(String *)&local_158,false);
      if ((char *)local_168._0_8_ == local_188) {
        if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_168._0_8_ = local_188;
      }
      goto LAB_00102208;
    }
  }
  StringName::operator=((StringName *)local_168,(StringName *)&local_1a0);
LAB_00102208:
  local_1b8 = 0;
  local_188 = "UndoRedo";
  local_180 = 8;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_188,(String *)&local_1b8,false);
  ClassDB::add_property
            ((StringName *)&local_188,(PropertyInfo *)&local_178,(StringName *)&local_198,
             (StringName *)&local_190,-1);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((((StringName::configured != '\0') &&
       ((local_1a0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_198 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_190 != 0)) {
    StringName::unref();
  }
  local_190 = 0;
  local_178 = "version_changed";
  local_170 = 0xf;
  String::parse_latin1((StrRange *)&local_190);
  local_178 = (char *)0x0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 6;
  local_140 = 1;
  local_138[0] = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_168 = (undefined1  [16])0x0;
  if (local_190 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)&local_190);
  }
  local_198 = 0;
  local_188 = "UndoRedo";
  local_180 = 8;
  String::parse_latin1((StrRange *)&local_198);
  StringName::StringName((StringName *)&local_188,(String *)&local_198,false);
  ClassDB::add_signal((StringName *)&local_188,(MethodInfo *)&local_178);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  lVar7 = local_110;
  if (local_110 != 0) {
    LOCK();
    plVar2 = (long *)(local_110 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_110 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_128);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_138);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  StringName::StringName((StringName *)&local_188,"MERGE_DISABLE",false);
  local_178 = "MERGE_DISABLE";
  local_198 = 0;
  local_170 = 0xd;
  String::parse_latin1((StrRange *)&local_198);
  GetTypeInfo<UndoRedo::MergeMode,void>::get_class_info
            ((GetTypeInfo<UndoRedo::MergeMode,void> *)&local_178);
  local_190 = local_168._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_168._8_8_;
  local_168 = auVar4 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
  local_1a0 = 0;
  local_178 = "UndoRedo";
  local_170 = 8;
  String::parse_latin1((StrRange *)&local_1a0);
  StringName::StringName((StringName *)&local_178,(String *)&local_1a0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_178,(StringName *)&local_190,(StringName *)&local_188,0,false);
  if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
  if ((StringName::configured != '\0') && (local_190 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_188,"MERGE_ENDS",false);
  local_178 = "MERGE_ENDS";
  local_198 = 0;
  local_170 = 10;
  String::parse_latin1((StrRange *)&local_198);
  GetTypeInfo<UndoRedo::MergeMode,void>::get_class_info
            ((GetTypeInfo<UndoRedo::MergeMode,void> *)&local_178);
  local_190 = local_168._0_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_168._8_8_;
  local_168 = auVar5 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
  local_1a0 = 0;
  local_178 = "UndoRedo";
  local_170 = 8;
  String::parse_latin1((StrRange *)&local_1a0);
  StringName::StringName((StringName *)&local_178,(String *)&local_1a0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_178,(StringName *)&local_190,(StringName *)&local_188,1,false);
  if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
  if ((StringName::configured != '\0') && (local_190 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_188,"MERGE_ALL",false);
  local_178 = "MERGE_ALL";
  local_198 = 0;
  local_170 = 9;
  String::parse_latin1((StrRange *)&local_198);
  GetTypeInfo<UndoRedo::MergeMode,void>::get_class_info
            ((GetTypeInfo<UndoRedo::MergeMode,void> *)&local_178);
  local_190 = local_168._0_8_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = local_168._8_8_;
  local_168 = auVar6 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
  local_1a0 = 0;
  local_178 = "UndoRedo";
  local_170 = 8;
  String::parse_latin1((StrRange *)&local_1a0);
  StringName::StringName((StringName *)&local_178,(String *)&local_1a0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_178,(StringName *)&local_190,(StringName *)&local_188,2,false);
  if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
  if ((StringName::configured != '\0') && (local_190 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<UndoRedo::Action>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<UndoRedo::Action>::_copy_on_write(CowData<UndoRedo::Action> *this)

{
  long lVar1;
  undefined8 *puVar2;
  Operation *pOVar3;
  code *pcVar4;
  undefined8 *puVar5;
  CowData<char32_t> *this_00;
  ulong uVar6;
  CowData *pCVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar1 * 0x28 != 0) {
    uVar6 = lVar1 * 0x28 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  this_00 = (CowData<char32_t> *)(puVar5 + 2);
  if (lVar1 != 0) {
    do {
      pCVar7 = (CowData *)(this_00 + *(long *)this + (-0x10 - (long)puVar5));
      *(undefined8 *)this_00 = 0;
      if (*(long *)pCVar7 != 0) {
        CowData<char32_t>::_ref(this_00,pCVar7);
      }
      puVar2 = *(undefined8 **)(pCVar7 + 8);
      *(undefined8 *)(this_00 + 8) = 0;
      if (puVar2 != (undefined8 *)0x0) {
        for (pOVar3 = (Operation *)*puVar2; pOVar3 != (Operation *)0x0;
            pOVar3 = *(Operation **)(pOVar3 + 0x48)) {
          List<UndoRedo::Operation,DefaultAllocator>::push_back
                    ((List<UndoRedo::Operation,DefaultAllocator> *)(this_00 + 8),pOVar3);
        }
      }
      puVar2 = *(undefined8 **)(pCVar7 + 0x10);
      *(undefined8 *)(this_00 + 0x10) = 0;
      if (puVar2 != (undefined8 *)0x0) {
        for (pOVar3 = (Operation *)*puVar2; pOVar3 != (Operation *)0x0;
            pOVar3 = *(Operation **)(pOVar3 + 0x48)) {
          List<UndoRedo::Operation,DefaultAllocator>::push_back
                    ((List<UndoRedo::Operation,DefaultAllocator> *)(this_00 + 0x10),pOVar3);
        }
      }
      lVar8 = lVar8 + 1;
      *(undefined8 *)(this_00 + 0x18) = *(undefined8 *)(pCVar7 + 0x18);
      this_00[0x20] = *(CowData<char32_t> *)(pCVar7 + 0x20);
      this_00 = this_00 + 0x28;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar5 + 2);
  return;
}



/* UndoRedo::undo() */

undefined8 __thiscall UndoRedo::undo(UndoRedo *this)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  Element *pEVar6;
  long lVar7;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 400) < 1) {
    lVar5 = (long)*(int *)(this + 0x188);
    if (-1 < *(int *)(this + 0x188)) {
      if (*(long *)(this + 0x180) == 0) {
        lVar7 = 0;
LAB_00102d7b:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar5,lVar7,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar7 = *(long *)(*(long *)(this + 0x180) + -8);
      if (lVar7 <= lVar5) goto LAB_00102d7b;
      CowData<UndoRedo::Action>::_copy_on_write((CowData<UndoRedo::Action> *)(this + 0x180));
      pEVar6 = *(Element **)(*(long *)(this + 0x180) + lVar5 * 0x28 + 0x10);
      if (pEVar6 != (Element *)0x0) {
        pEVar6 = *(Element **)pEVar6;
      }
      _process_operation_list(this,pEVar6,true);
      *(int *)(this + 0x188) = *(int *)(this + 0x188) + -1;
      *(long *)(this + 0x1a0) = *(long *)(this + 0x1a0) + -1;
      if (undo()::{lambda()#1}::operator()()::sname == '\0') {
        iVar3 = __cxa_guard_acquire(&undo()::{lambda()#1}::operator()()::sname);
        if (iVar3 != 0) {
          _scs_create((char *)&undo()::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&undo()::{lambda()#1}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&undo()::{lambda()#1}::operator()()::sname);
        }
      }
      (**(code **)(*(long *)this + 0xd0))(this,&undo()::{lambda()#1}::operator()()::sname,0,0);
      if (Variant::needs_deinit[0] != '\0') {
        Variant::_clear_internal();
      }
      uVar4 = 1;
      goto LAB_00102cd1;
    }
  }
  else {
    _err_print_error(&_LC70,"core/object/undo_redo.cpp",0x1aa,
                     "Condition \"action_level > 0\" is true. Returning: false",0,0);
  }
  uVar4 = 0;
LAB_00102cd1:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* UndoRedo::_redo(bool) */

undefined8 __thiscall UndoRedo::_redo(UndoRedo *this,bool param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  Element *pEVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 400) < 1) {
    iVar4 = *(int *)(this + 0x188) + 1;
    lVar8 = (long)iVar4;
    if (*(long *)(this + 0x180) == 0) {
      if (iVar4 < 0) {
        *(int *)(this + 0x188) = iVar4;
        lVar7 = 0;
LAB_00102fd5:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar8,lVar7,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    else {
      lVar7 = *(long *)(*(long *)(this + 0x180) + -8);
      if (lVar8 < lVar7) {
        *(int *)(this + 0x188) = iVar4;
        if (iVar4 < 0) goto LAB_00102fd5;
        CowData<UndoRedo::Action>::_copy_on_write((CowData<UndoRedo::Action> *)(this + 0x180));
        plVar2 = *(long **)(*(long *)(this + 0x180) + lVar8 * 0x28 + 8);
        if (plVar2 == (long *)0x0) {
LAB_00102f36:
          pEVar6 = (Element *)0x0;
        }
        else {
          pEVar6 = (Element *)*plVar2;
          iVar4 = *(int *)(this + 0x1a8);
          if (0 < iVar4) {
            if (pEVar6 != (Element *)0x0) {
              do {
                pEVar6 = *(Element **)(pEVar6 + 0x48);
                iVar4 = iVar4 + -1;
                if (iVar4 == 0) {
                  *(undefined4 *)(this + 0x1a8) = 0;
                  goto LAB_00102ea4;
                }
              } while (pEVar6 != (Element *)0x0);
              *(int *)(this + 0x1a8) = iVar4;
            }
            goto LAB_00102f36;
          }
        }
LAB_00102ea4:
        _process_operation_list(this,pEVar6,param_1);
        *(long *)(this + 0x1a0) = *(long *)(this + 0x1a0) + 1;
        if ((_redo(bool)::{lambda()#1}::operator()()::sname == '\0') &&
           (iVar4 = __cxa_guard_acquire(&_redo(bool)::{lambda()#1}::operator()()::sname), iVar4 != 0
           )) {
          _scs_create((char *)&_redo(bool)::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&_redo(bool)::{lambda()#1}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&_redo(bool)::{lambda()#1}::operator()()::sname);
        }
        (**(code **)(*(long *)this + 0xd0))
                  (this,&_redo(bool)::{lambda()#1}::operator()()::sname,0,0);
        if (Variant::needs_deinit[0] != '\0') {
          Variant::_clear_internal();
        }
        uVar5 = 1;
        goto LAB_00102f0c;
      }
    }
  }
  else {
    _err_print_error("_redo","core/object/undo_redo.cpp",0x43,
                     "Condition \"action_level > 0\" is true. Returning: false",0,0);
  }
  uVar5 = 0;
LAB_00102f0c:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* UndoRedo::redo() */

void __thiscall UndoRedo::redo(UndoRedo *this)

{
  _redo(this,true);
  return;
}



/* UndoRedo::add_undo_reference(Object*) */

void __thiscall UndoRedo::add_undo_reference(UndoRedo *this,Object *param_1)

{
  code *pcVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  int iVar8;
  Object *pOVar9;
  long lVar10;
  long lVar11;
  UndoRedo UVar12;
  long in_FS_OFFSET;
  undefined4 local_88;
  UndoRedo local_84;
  Object *local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  int local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (Object *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = 0x100;
      pcVar6 = "Parameter \"p_object\" is null.";
LAB_00103366:
      _err_print_error("add_undo_reference","core/object/undo_redo.cpp",uVar7,pcVar6,0,0);
      return;
    }
    goto LAB_00103467;
  }
  if (*(int *)(this + 400) < 1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = 0x101;
      pcVar6 = "Condition \"action_level <= 0\" is true.";
      goto LAB_00103366;
    }
    goto LAB_00103467;
  }
  lVar10 = *(long *)(this + 0x180);
  iVar8 = *(int *)(this + 0x188) + 1;
  lVar11 = (long)iVar8;
  if (lVar10 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar10 + -8);
  }
  if (lVar5 <= lVar11) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = 0x102;
      pcVar6 = "Condition \"(current_action + 1) >= actions.size()\" is true.";
      goto LAB_00103366;
    }
    goto LAB_00103467;
  }
  UVar12 = this[0x18c];
  if ((UVar12 == (UndoRedo)0x0) && (*(int *)(this + 0x198) == 1)) {
LAB_0010328b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
LAB_00103467:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_78 = *(undefined8 *)(param_1 + 0x60);
  local_84 = (UndoRedo)0x0;
  local_70 = (undefined1  [16])0x0;
  local_80 = (Object *)0x0;
  local_60 = 0;
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  pOVar4 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&RefCounted::typeinfo,0);
  if (pOVar4 != (Object *)0x0) {
    cVar3 = RefCounted::init_ref();
    pOVar2 = local_80;
    if (cVar3 == '\0') {
      if (local_80 != (Object *)0x0) {
        local_80 = (Object *)0x0;
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          pOVar4 = (Object *)0x0;
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') goto LAB_00103422;
        }
      }
    }
    else {
      pOVar9 = local_80;
      if (pOVar4 != local_80) {
        local_80 = pOVar4;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_80 = (Object *)0x0;
        }
        pOVar9 = pOVar4;
        if (((pOVar2 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
           (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
LAB_00103422:
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
          pOVar9 = pOVar4;
          if (pOVar4 == (Object *)0x0) goto LAB_001031d3;
        }
      }
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar9), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
    }
LAB_001031d3:
    UVar12 = this[0x18c];
    lVar10 = *(long *)(this + 0x180);
    iVar8 = *(int *)(this + 0x188) + 1;
    lVar11 = (long)iVar8;
  }
  local_88 = 2;
  local_84 = UVar12;
  if (iVar8 < 0) {
    if (lVar10 != 0) {
      lVar10 = *(long *)(lVar10 + -8);
      goto LAB_001032fe;
    }
  }
  else if (lVar10 != 0) {
    lVar10 = *(long *)(lVar10 + -8);
    if (lVar10 <= lVar11) goto LAB_001032fe;
    CowData<UndoRedo::Action>::_copy_on_write((CowData<UndoRedo::Action> *)(this + 0x180));
    List<UndoRedo::Operation,DefaultAllocator>::push_back
              ((List<UndoRedo::Operation,DefaultAllocator> *)
               (*(long *)(this + 0x180) + 0x10 + lVar11 * 0x28),(Operation *)&local_88);
    if (Variant::needs_deinit[local_58] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable((Callable *)(local_70 + 8));
    if ((StringName::configured != '\0') && (local_70._0_8_ != 0)) {
      StringName::unref();
    }
    if (((local_80 != (Object *)0x0) &&
        (cVar3 = RefCounted::unreference(), pOVar4 = local_80, cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_80), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
    goto LAB_0010328b;
  }
  lVar10 = 0;
LAB_001032fe:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar11,lVar10,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* UndoRedo::add_do_reference(Object*) */

void __thiscall UndoRedo::add_do_reference(UndoRedo *this,Object *param_1)

{
  code *pcVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  int iVar8;
  Object *pOVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  undefined4 local_78;
  undefined1 local_74;
  Object *local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  int local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (Object *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = 0xf2;
      pcVar6 = "Parameter \"p_object\" is null.";
LAB_00103746:
      _err_print_error("add_do_reference","core/object/undo_redo.cpp",uVar7,pcVar6,0,0);
      return;
    }
    goto LAB_00103847;
  }
  if (*(int *)(this + 400) < 1) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = 0xf3;
      pcVar6 = "Condition \"action_level <= 0\" is true.";
      goto LAB_00103746;
    }
    goto LAB_00103847;
  }
  lVar10 = *(long *)(this + 0x180);
  iVar8 = *(int *)(this + 0x188) + 1;
  lVar11 = (long)iVar8;
  if (lVar10 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar10 + -8);
  }
  if (lVar5 <= lVar11) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = 0xf4;
      pcVar6 = "Condition \"(current_action + 1) >= actions.size()\" is true.";
      goto LAB_00103746;
    }
    goto LAB_00103847;
  }
  local_68 = *(undefined8 *)(param_1 + 0x60);
  local_74 = 0;
  local_60 = (undefined1  [16])0x0;
  local_70 = (Object *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  pOVar4 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&RefCounted::typeinfo,0);
  if (pOVar4 != (Object *)0x0) {
    cVar3 = RefCounted::init_ref();
    pOVar2 = local_70;
    if (cVar3 == '\0') {
      if (local_70 != (Object *)0x0) {
        local_70 = (Object *)0x0;
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          pOVar4 = (Object *)0x0;
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') goto LAB_00103802;
        }
      }
    }
    else {
      pOVar9 = local_70;
      if (pOVar4 != local_70) {
        local_70 = pOVar4;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_70 = (Object *)0x0;
        }
        pOVar9 = pOVar4;
        if (((pOVar2 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
           (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
LAB_00103802:
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
          pOVar9 = pOVar4;
          if (pOVar4 == (Object *)0x0) goto LAB_001035d3;
        }
      }
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar9), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
    }
LAB_001035d3:
    lVar10 = *(long *)(this + 0x180);
    iVar8 = *(int *)(this + 0x188) + 1;
    lVar11 = (long)iVar8;
  }
  local_78 = 2;
  if (iVar8 < 0) {
    if (lVar10 != 0) {
      lVar10 = *(long *)(lVar10 + -8);
      goto LAB_001036de;
    }
  }
  else if (lVar10 != 0) {
    lVar10 = *(long *)(lVar10 + -8);
    if (lVar11 < lVar10) {
      CowData<UndoRedo::Action>::_copy_on_write((CowData<UndoRedo::Action> *)(this + 0x180));
      List<UndoRedo::Operation,DefaultAllocator>::push_back
                ((List<UndoRedo::Operation,DefaultAllocator> *)
                 (*(long *)(this + 0x180) + 8 + lVar11 * 0x28),(Operation *)&local_78);
      if (Variant::needs_deinit[local_48] != '\0') {
        Variant::_clear_internal();
      }
      Callable::~Callable((Callable *)(local_60 + 8));
      if ((StringName::configured != '\0') && (local_60._0_8_ != 0)) {
        StringName::unref();
      }
      if (((local_70 != (Object *)0x0) &&
          (cVar3 = RefCounted::unreference(), pOVar4 = local_70, cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_70), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
LAB_00103847:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    goto LAB_001036de;
  }
  lVar10 = 0;
LAB_001036de:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar11,lVar10,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* UndoRedo::add_undo_property(Object*, StringName const&, Variant const&) */

void __thiscall
UndoRedo::add_undo_property(UndoRedo *this,Object *param_1,StringName *param_2,Variant *param_3)

{
  code *pcVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  UndoRedo UVar9;
  Object *pOVar10;
  long in_FS_OFFSET;
  undefined4 local_88;
  UndoRedo local_84;
  Object *local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (Object *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0xdb;
      pcVar5 = "Parameter \"p_object\" is null.";
LAB_00103b86:
      _err_print_error("add_undo_property","core/object/undo_redo.cpp",uVar6,pcVar5,0,0);
      return;
    }
    goto LAB_00103c87;
  }
  if (*(int *)(this + 400) < 1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0xdc;
      pcVar5 = "Condition \"action_level <= 0\" is true.";
      goto LAB_00103b86;
    }
    goto LAB_00103c87;
  }
  if (*(long *)(this + 0x180) == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)(this + 0x180) + -8);
  }
  if (lVar7 <= *(int *)(this + 0x188) + 1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0xdd;
      pcVar5 = "Condition \"(current_action + 1) >= actions.size()\" is true.";
      goto LAB_00103b86;
    }
    goto LAB_00103c87;
  }
  UVar9 = this[0x18c];
  if ((UVar9 == (UndoRedo)0x0) && (*(int *)(this + 0x198) == 1)) {
LAB_00103aa9:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
LAB_00103c87:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_78 = *(undefined8 *)(param_1 + 0x60);
  local_84 = (UndoRedo)0x0;
  local_70 = (undefined1  [16])0x0;
  local_80 = (Object *)0x0;
  local_60 = 0;
  local_58[0] = 0;
  local_50 = (undefined1  [16])0x0;
  pOVar4 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&RefCounted::typeinfo,0);
  if (pOVar4 != (Object *)0x0) {
    cVar3 = RefCounted::init_ref();
    pOVar2 = local_80;
    if (cVar3 == '\0') {
      if (local_80 != (Object *)0x0) {
        local_80 = (Object *)0x0;
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          pOVar4 = (Object *)0x0;
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') goto LAB_00103c43;
        }
      }
    }
    else {
      pOVar10 = local_80;
      if (pOVar4 != local_80) {
        local_80 = pOVar4;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_80 = (Object *)0x0;
        }
        pOVar10 = pOVar4;
        if (((pOVar2 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
           (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
LAB_00103c43:
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
          pOVar10 = pOVar4;
          if (pOVar4 == (Object *)0x0) goto LAB_001039d3;
        }
      }
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar10), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
    }
LAB_001039d3:
    UVar9 = this[0x18c];
  }
  local_88 = 1;
  local_84 = UVar9;
  StringName::operator=((StringName *)local_70,param_2);
  Variant::operator=((Variant *)local_58,param_3);
  lVar8 = (long)(*(int *)(this + 0x188) + 1);
  lVar7 = *(long *)(this + 0x180);
  if (*(int *)(this + 0x188) + 1 < 0) {
    if (lVar7 != 0) {
      lVar7 = *(long *)(lVar7 + -8);
      goto LAB_00103b1d;
    }
  }
  else if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + -8);
    if (lVar7 <= lVar8) goto LAB_00103b1d;
    CowData<UndoRedo::Action>::_copy_on_write((CowData<UndoRedo::Action> *)(this + 0x180));
    List<UndoRedo::Operation,DefaultAllocator>::push_back
              ((List<UndoRedo::Operation,DefaultAllocator> *)
               (*(long *)(this + 0x180) + 0x10 + lVar8 * 0x28),(Operation *)&local_88);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable((Callable *)(local_70 + 8));
    if ((StringName::configured != '\0') && (local_70._0_8_ != 0)) {
      StringName::unref();
    }
    if (((local_80 != (Object *)0x0) &&
        (cVar3 = RefCounted::unreference(), pOVar4 = local_80, cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_80), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
    goto LAB_00103aa9;
  }
  lVar7 = 0;
LAB_00103b1d:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar8,lVar7,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* UndoRedo::add_do_property(Object*, StringName const&, Variant const&) */

void __thiscall
UndoRedo::add_do_property(UndoRedo *this,Object *param_1,StringName *param_2,Variant *param_3)

{
  code *pcVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  Object *pOVar9;
  long in_FS_OFFSET;
  undefined4 local_88;
  undefined1 local_84;
  Object *local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (Object *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0xcb;
      pcVar5 = "Parameter \"p_object\" is null.";
LAB_00103fc6:
      _err_print_error("add_do_property","core/object/undo_redo.cpp",uVar6,pcVar5,0,0);
      return;
    }
    goto LAB_0010408b;
  }
  if (*(int *)(this + 400) < 1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0xcc;
      pcVar5 = "Condition \"action_level <= 0\" is true.";
      goto LAB_00103fc6;
    }
    goto LAB_0010408b;
  }
  if (*(long *)(this + 0x180) == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)(this + 0x180) + -8);
  }
  if (lVar7 <= *(int *)(this + 0x188) + 1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = 0xcd;
      pcVar5 = "Condition \"(current_action + 1) >= actions.size()\" is true.";
      goto LAB_00103fc6;
    }
    goto LAB_0010408b;
  }
  local_78 = *(undefined8 *)(param_1 + 0x60);
  local_84 = 0;
  local_70 = (undefined1  [16])0x0;
  local_80 = (Object *)0x0;
  local_60 = 0;
  local_58[0] = 0;
  local_50 = (undefined1  [16])0x0;
  pOVar4 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&RefCounted::typeinfo,0);
  if (pOVar4 != (Object *)0x0) {
    cVar3 = RefCounted::init_ref();
    pOVar2 = local_80;
    if (cVar3 == '\0') {
      if (local_80 != (Object *)0x0) {
        local_80 = (Object *)0x0;
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          pOVar4 = (Object *)0x0;
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') goto LAB_00103efa;
        }
      }
    }
    else {
      pOVar9 = local_80;
      if (pOVar4 != local_80) {
        local_80 = pOVar4;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_80 = (Object *)0x0;
        }
        pOVar9 = pOVar4;
        if (((pOVar2 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
           (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
LAB_00103efa:
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
          pOVar9 = pOVar4;
          if (pOVar4 == (Object *)0x0) goto LAB_00103dd0;
        }
      }
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar9), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
    }
  }
LAB_00103dd0:
  local_88 = 1;
  StringName::operator=((StringName *)local_70,param_2);
  Variant::operator=((Variant *)local_58,param_3);
  lVar8 = (long)(*(int *)(this + 0x188) + 1);
  lVar7 = *(long *)(this + 0x180);
  if (*(int *)(this + 0x188) + 1 < 0) {
    if (lVar7 != 0) {
      lVar7 = *(long *)(lVar7 + -8);
      goto LAB_00103f5d;
    }
  }
  else if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + -8);
    if (lVar8 < lVar7) {
      CowData<UndoRedo::Action>::_copy_on_write((CowData<UndoRedo::Action> *)(this + 0x180));
      List<UndoRedo::Operation,DefaultAllocator>::push_back
                ((List<UndoRedo::Operation,DefaultAllocator> *)
                 (*(long *)(this + 0x180) + 8 + lVar8 * 0x28),(Operation *)&local_88);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Callable::~Callable((Callable *)(local_70 + 8));
      if ((StringName::configured != '\0') && (local_70._0_8_ != 0)) {
        StringName::unref();
      }
      if (((local_80 != (Object *)0x0) &&
          (cVar3 = RefCounted::unreference(), pOVar4 = local_80, cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_80), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
LAB_0010408b:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    goto LAB_00103f5d;
  }
  lVar7 = 0;
LAB_00103f5d:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar8,lVar7,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* UndoRedo::add_undo_method(Callable const&) */

void __thiscall UndoRedo::add_undo_method(UndoRedo *this,Callable *param_1)

{
  ulong uVar1;
  code *pcVar2;
  Object *pOVar3;
  undefined1 auVar4 [16];
  char cVar5;
  ulong uVar6;
  Object *pOVar7;
  uint uVar8;
  ulong *puVar9;
  char *pcVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long in_FS_OFFSET;
  bool bVar14;
  Callable aCStack_98 [8];
  StringName local_90;
  undefined7 uStack_8f;
  undefined4 local_88;
  UndoRedo local_84;
  Object *local_80;
  ulong local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  int local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar5 = Callable::is_valid();
  if (cVar5 == '\0') {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001046b9;
    uVar12 = 0xac;
    pcVar10 = "Condition \"!p_callable.is_valid()\" is true.";
    goto LAB_00104533;
  }
  if (*(int *)(this + 400) < 1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar12 = 0xad;
      pcVar10 = "Condition \"action_level <= 0\" is true.";
      goto LAB_00104533;
    }
    goto LAB_001046b9;
  }
  if (*(long *)(this + 0x180) == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(*(long *)(this + 0x180) + -8);
  }
  if (lVar11 <= *(int *)(this + 0x188) + 1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar12 = 0xae;
      pcVar10 = "Condition \"(current_action + 1) >= actions.size()\" is true.";
      goto LAB_00104533;
    }
    goto LAB_001046b9;
  }
  if ((this[0x18c] == (UndoRedo)0x0) && (*(int *)(this + 0x198) == 1)) {
LAB_00104381:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    uVar6 = Callable::get_object_id();
    uVar8 = (uint)uVar6 & 0xffffff;
    if (uVar8 < (uint)ObjectDB::slot_max) {
      while( true ) {
        local_90 = (StringName)0x0;
        LOCK();
        bVar14 = (char)ObjectDB::spin_lock == '\0';
        if (bVar14) {
          ObjectDB::spin_lock._0_1_ = '\x01';
        }
        UNLOCK();
        if (bVar14) break;
        do {
        } while ((char)ObjectDB::spin_lock != '\0');
      }
      puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
      if ((uVar6 >> 0x18 & 0x7fffffffff) != (*puVar9 & 0x7fffffffff)) {
        ObjectDB::spin_lock._0_1_ = '\0';
        goto joined_r0x001045e1;
      }
      uVar1 = puVar9[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if ((uVar6 == 0) || (uVar1 != 0)) {
        local_84 = (UndoRedo)0x0;
        local_70 = (undefined1  [16])0x0;
        local_80 = (Object *)0x0;
        local_78 = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = (undefined1  [16])0x0;
        Callable::operator=((Callable *)(local_70 + 8),param_1);
        local_78 = uVar6;
        if ((uVar1 != 0) &&
           (pOVar7 = (Object *)__dynamic_cast(uVar1,&Object::typeinfo,&RefCounted::typeinfo,0),
           pOVar7 != (Object *)0x0)) {
          cVar5 = RefCounted::init_ref();
          pOVar3 = local_80;
          if (cVar5 == '\0') {
            if (local_80 != (Object *)0x0) {
              local_80 = (Object *)0x0;
              cVar5 = RefCounted::unreference();
              if (cVar5 != '\0') {
                pOVar7 = (Object *)0x0;
                cVar5 = predelete_handler(pOVar3);
                if (cVar5 != '\0') goto LAB_0010446b;
              }
            }
          }
          else {
            if (pOVar7 != local_80) {
              local_80 = pOVar7;
              cVar5 = RefCounted::reference();
              if (cVar5 == '\0') {
                local_80 = (Object *)0x0;
              }
              if (((pOVar3 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0'))
                 && (cVar5 = predelete_handler(pOVar3), cVar5 != '\0')) {
LAB_0010446b:
                (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                Memory::free_static(pOVar3,false);
                if (pOVar7 == (Object *)0x0) goto LAB_00104290;
              }
            }
            cVar5 = RefCounted::unreference();
            if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar7), cVar5 != '\0')) {
              (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
              Memory::free_static(pOVar7,false);
            }
          }
        }
        goto LAB_00104290;
      }
    }
    else {
      _err_print_error("get_instance","./core/object/object.h",0x418,
                       "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
joined_r0x001045e1:
      if (uVar6 == 0) {
        local_84 = (UndoRedo)0x0;
        local_70 = (undefined1  [16])0x0;
        local_80 = (Object *)0x0;
        local_78 = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = (undefined1  [16])0x0;
        Callable::operator=((Callable *)(local_70 + 8),param_1);
        local_78 = uVar6;
LAB_00104290:
        local_84 = this[0x18c];
        local_88 = 0;
        Callable::get_method();
        if (local_70._0_8_ == CONCAT71(uStack_8f,local_90)) {
          lVar11 = local_70._0_8_;
          if (StringName::configured == '\0') goto joined_r0x001043e4;
          if (local_70._0_8_ != 0) {
            StringName::unref();
            lVar11 = local_70._0_8_;
            goto joined_r0x001043e4;
          }
LAB_001043ea:
          Callable::operator_cast_to_String(aCStack_98);
          StringName::StringName(&local_90,(String *)aCStack_98,false);
          if (local_70._0_8_ == CONCAT71(uStack_8f,local_90)) {
            if ((StringName::configured != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
              StringName::unref();
            }
          }
          else {
            StringName::unref();
            auVar4 = local_70;
            local_70._1_7_ = uStack_8f;
            local_70[0] = local_90;
            local_70._8_8_ = auVar4._8_8_;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)aCStack_98);
        }
        else {
          StringName::unref();
          local_70._0_8_ = CONCAT71(uStack_8f,local_90);
          lVar11 = CONCAT71(uStack_8f,local_90);
joined_r0x001043e4:
          if (lVar11 == 0) goto LAB_001043ea;
        }
        lVar11 = *(long *)(this + 0x180);
        lVar13 = (long)(*(int *)(this + 0x188) + 1);
        if (*(int *)(this + 0x188) + 1 < 0) {
          if (lVar11 != 0) {
            lVar11 = *(long *)(lVar11 + -8);
            goto LAB_001044cc;
          }
        }
        else if (lVar11 != 0) {
          lVar11 = *(long *)(lVar11 + -8);
          if (lVar11 <= lVar13) goto LAB_001044cc;
          CowData<UndoRedo::Action>::_copy_on_write((CowData<UndoRedo::Action> *)(this + 0x180));
          List<UndoRedo::Operation,DefaultAllocator>::push_back
                    ((List<UndoRedo::Operation,DefaultAllocator> *)
                     (*(long *)(this + 0x180) + 0x10 + lVar13 * 0x28),(Operation *)&local_88);
          if (Variant::needs_deinit[local_58] != '\0') {
            Variant::_clear_internal();
          }
          Callable::~Callable((Callable *)(local_70 + 8));
          if ((StringName::configured != '\0') && (local_70._0_8_ != 0)) {
            StringName::unref();
          }
          if (((local_80 != (Object *)0x0) &&
              (cVar5 = RefCounted::unreference(), pOVar7 = local_80, cVar5 != '\0')) &&
             (cVar5 = predelete_handler(local_80), cVar5 != '\0')) {
            (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
            Memory::free_static(pOVar7,false);
          }
          goto LAB_00104381;
        }
        lVar11 = 0;
LAB_001044cc:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar13,lVar11,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar12 = 0xb7;
      pcVar10 = "Condition \"object_id.is_valid() && object == nullptr\" is true.";
LAB_00104533:
      _err_print_error("add_undo_method","core/object/undo_redo.cpp",uVar12,pcVar10,0,0);
      return;
    }
  }
LAB_001046b9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* UndoRedo::add_do_method(Callable const&) */

void __thiscall UndoRedo::add_do_method(UndoRedo *this,Callable *param_1)

{
  ulong uVar1;
  code *pcVar2;
  Object *pOVar3;
  undefined1 auVar4 [16];
  char cVar5;
  ulong uVar6;
  Object *pOVar7;
  uint uVar8;
  ulong *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long in_FS_OFFSET;
  bool bVar14;
  Callable aCStack_98 [8];
  StringName local_90;
  undefined7 uStack_8f;
  undefined4 local_88;
  undefined1 local_84;
  Object *local_80;
  ulong local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  int local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar5 = Callable::is_valid();
  if (cVar5 == '\0') {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00104ccc;
    uVar11 = 0x93;
    pcVar10 = "Condition \"!p_callable.is_valid()\" is true.";
    goto LAB_00104b46;
  }
  if (*(int *)(this + 400) < 1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar11 = 0x94;
      pcVar10 = "Condition \"action_level <= 0\" is true.";
      goto LAB_00104b46;
    }
    goto LAB_00104ccc;
  }
  if (*(long *)(this + 0x180) == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(*(long *)(this + 0x180) + -8);
  }
  if (lVar12 <= *(int *)(this + 0x188) + 1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar11 = 0x95;
      pcVar10 = "Condition \"(current_action + 1) >= actions.size()\" is true.";
      goto LAB_00104b46;
    }
    goto LAB_00104ccc;
  }
  uVar6 = Callable::get_object_id();
  uVar8 = (uint)uVar6 & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_90 = (StringName)0x0;
      LOCK();
      bVar14 = (char)ObjectDB::spin_lock == '\0';
      if (bVar14) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar14) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((uVar6 >> 0x18 & 0x7fffffffff) != (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto joined_r0x00104bed;
    }
    uVar1 = puVar9[1];
    ObjectDB::spin_lock._0_1_ = '\0';
    if ((uVar6 == 0) || (uVar1 != 0)) {
      local_84 = 0;
      local_70 = (undefined1  [16])0x0;
      local_80 = (Object *)0x0;
      local_78 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = (undefined1  [16])0x0;
      Callable::operator=((Callable *)(local_70 + 8),param_1);
      local_78 = uVar6;
      if ((uVar1 != 0) &&
         (pOVar7 = (Object *)__dynamic_cast(uVar1,&Object::typeinfo,&RefCounted::typeinfo,0),
         pOVar7 != (Object *)0x0)) {
        cVar5 = RefCounted::init_ref();
        pOVar3 = local_80;
        if (cVar5 == '\0') {
          if (local_80 != (Object *)0x0) {
            local_80 = (Object *)0x0;
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
              pOVar7 = (Object *)0x0;
              cVar5 = predelete_handler(pOVar3);
              if (cVar5 != '\0') goto LAB_0010486f;
            }
          }
        }
        else {
          if (pOVar7 != local_80) {
            local_80 = pOVar7;
            cVar5 = RefCounted::reference();
            if (cVar5 == '\0') {
              local_80 = (Object *)0x0;
            }
            if (((pOVar3 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
               (cVar5 = predelete_handler(pOVar3), cVar5 != '\0')) {
LAB_0010486f:
              (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
              Memory::free_static(pOVar3,false);
              if (pOVar7 == (Object *)0x0) goto LAB_00104890;
            }
          }
          cVar5 = RefCounted::unreference();
          if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar7), cVar5 != '\0')) {
            (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
            Memory::free_static(pOVar7,false);
          }
        }
      }
      goto LAB_00104890;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
joined_r0x00104bed:
    if (uVar6 == 0) {
      local_84 = 0;
      local_70 = (undefined1  [16])0x0;
      local_80 = (Object *)0x0;
      local_78 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = (undefined1  [16])0x0;
      Callable::operator=((Callable *)(local_70 + 8),param_1);
      local_78 = uVar6;
LAB_00104890:
      local_88 = 0;
      Callable::get_method();
      if (local_70._0_8_ == CONCAT71(uStack_8f,local_90)) {
        lVar12 = local_70._0_8_;
        if (StringName::configured == '\0') goto joined_r0x001049dc;
        if (local_70._0_8_ != 0) {
          StringName::unref();
          lVar12 = local_70._0_8_;
          goto joined_r0x001049dc;
        }
LAB_001049e2:
        Callable::operator_cast_to_String(aCStack_98);
        StringName::StringName(&local_90,(String *)aCStack_98,false);
        if (local_70._0_8_ == CONCAT71(uStack_8f,local_90)) {
          if ((StringName::configured != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
            StringName::unref();
          }
        }
        else {
          StringName::unref();
          auVar4 = local_70;
          local_70._1_7_ = uStack_8f;
          local_70[0] = local_90;
          local_70._8_8_ = auVar4._8_8_;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)aCStack_98);
      }
      else {
        StringName::unref();
        local_70._0_8_ = CONCAT71(uStack_8f,local_90);
        lVar12 = CONCAT71(uStack_8f,local_90);
joined_r0x001049dc:
        if (lVar12 == 0) goto LAB_001049e2;
      }
      lVar12 = *(long *)(this + 0x180);
      lVar13 = (long)(*(int *)(this + 0x188) + 1);
      if (*(int *)(this + 0x188) + 1 < 0) {
        if (lVar12 != 0) {
          lVar12 = *(long *)(lVar12 + -8);
          goto LAB_00104aaf;
        }
      }
      else if (lVar12 != 0) {
        lVar12 = *(long *)(lVar12 + -8);
        if (lVar12 <= lVar13) goto LAB_00104aaf;
        CowData<UndoRedo::Action>::_copy_on_write((CowData<UndoRedo::Action> *)(this + 0x180));
        List<UndoRedo::Operation,DefaultAllocator>::push_back
                  ((List<UndoRedo::Operation,DefaultAllocator> *)
                   (*(long *)(this + 0x180) + 8 + lVar13 * 0x28),(Operation *)&local_88);
        if (Variant::needs_deinit[local_58] != '\0') {
          Variant::_clear_internal();
        }
        Callable::~Callable((Callable *)(local_70 + 8));
        if ((StringName::configured != '\0') && (local_70._0_8_ != 0)) {
          StringName::unref();
        }
        if (((local_80 != (Object *)0x0) &&
            (cVar5 = RefCounted::unreference(), pOVar7 = local_80, cVar5 != '\0')) &&
           (cVar5 = predelete_handler(local_80), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_00104ccc;
      }
      lVar12 = 0;
LAB_00104aaf:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,lVar13,lVar12,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar11 = 0x99;
    pcVar10 = "Condition \"object_id.is_valid() && object == nullptr\" is true.";
LAB_00104b46:
    _err_print_error("add_do_method","core/object/undo_redo.cpp",uVar11,pcVar10,0,0);
    return;
  }
LAB_00104ccc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* UndoRedo::discard_redo() */

void __thiscall UndoRedo::discard_redo(UndoRedo *this)

{
  undefined8 *puVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  
  iVar5 = *(int *)(this + 0x188);
  if (*(long *)(this + 0x180) == 0) {
    if ((long)iVar5 == -1) {
      return;
    }
    lVar8 = (long)(iVar5 + 1);
    if (iVar5 + 1 < 0) {
      lVar6 = 0;
LAB_00104e26:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,lVar8,lVar6,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 0x180) + -8);
    if ((long)iVar5 == lVar6 + -1) {
      return;
    }
    lVar8 = (long)(iVar5 + 1);
    if (lVar8 < lVar6) {
      if (iVar5 + 1 < 0) goto LAB_00104e26;
      do {
        CowData<UndoRedo::Action>::_copy_on_write((CowData<UndoRedo::Action> *)(this + 0x180));
        lVar6 = *(long *)(this + 0x180);
        puVar1 = *(undefined8 **)(lVar6 + 8 + lVar8 * 0x28);
        if ((puVar1 != (undefined8 *)0x0) && (piVar7 = (int *)*puVar1, piVar7 != (int *)0x0)) {
LAB_00104d8a:
          do {
            if (*piVar7 == 2) {
              if (*(long *)(piVar7 + 2) == 0) {
                Operation::delete_reference(*(Operation **)(piVar7 + 4));
                piVar7 = *(int **)(piVar7 + 0x12);
                if (piVar7 == (int *)0x0) break;
                goto LAB_00104d8a;
              }
              cVar4 = RefCounted::unreference();
              if (cVar4 != '\0') {
                pOVar2 = *(Object **)(piVar7 + 2);
                cVar4 = predelete_handler(pOVar2);
                if (cVar4 != '\0') {
                  (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                  Memory::free_static(pOVar2,false);
                }
              }
              piVar7[2] = 0;
              piVar7[3] = 0;
            }
            piVar7 = *(int **)(piVar7 + 0x12);
          } while (piVar7 != (int *)0x0);
          lVar6 = *(long *)(this + 0x180);
        }
        lVar8 = lVar8 + 1;
      } while ((lVar6 != 0) && (lVar8 < *(long *)(lVar6 + -8)));
      iVar5 = *(int *)(this + 0x188);
    }
  }
  CowData<UndoRedo::Action>::resize<false>
            ((CowData<UndoRedo::Action> *)(this + 0x180),(long)(iVar5 + 1));
  return;
}



/* UndoRedo::_pop_history_tail() */

void __thiscall UndoRedo::_pop_history_tail(UndoRedo *this)

{
  CowData<UndoRedo::Action> *this_00;
  undefined8 uVar1;
  void *pvVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  int *piVar6;
  undefined8 *puVar7;
  long lVar8;
  CowData<char32_t> *this_01;
  long local_58;
  
  discard_redo(this);
  if (*(long *)(this + 0x180) == 0) {
    return;
  }
  lVar8 = *(long *)(*(long *)(this + 0x180) + -8);
  if (lVar8 == 0) {
    return;
  }
  if (lVar8 < 1) {
    _err_print_index_error
              ("operator[]","./core/templates/vector.h",0x38,0,lVar8,"p_index",
               "((Vector<T> *)(this))->_cowdata.size()","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  this_00 = (CowData<UndoRedo::Action> *)(this + 0x180);
  CowData<UndoRedo::Action>::_copy_on_write(this_00);
  lVar8 = *(long *)(this + 0x180);
  if ((*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) ||
     (piVar6 = (int *)**(undefined8 **)(lVar8 + 0x10), piVar6 == (int *)0x0)) {
LAB_00104f3e:
    lVar8 = *(long *)(lVar8 + -8);
    if (0 < lVar8) {
      CowData<UndoRedo::Action>::_copy_on_write(this_00);
      this_01 = *(CowData<char32_t> **)(this + 0x180);
      if (this_01 == (CowData<char32_t> *)0x0) {
        lVar8 = -1;
      }
      else {
        lVar8 = *(long *)(this_01 + -8) + -1;
        if (0 < lVar8) {
          local_58 = 0;
          do {
            if (*(long *)this_01 != *(long *)(this_01 + 0x28)) {
              CowData<char32_t>::_unref(this_01);
              uVar1 = *(undefined8 *)(this_01 + 0x28);
              *(undefined8 *)(this_01 + 0x28) = 0;
              *(undefined8 *)this_01 = uVar1;
            }
            puVar7 = *(undefined8 **)(this_01 + 8);
            if (puVar7 != (undefined8 *)0x0) {
              do {
                pvVar2 = (void *)*puVar7;
                if (pvVar2 == (void *)0x0) goto LAB_00105086;
                if (puVar7 == *(undefined8 **)((long)pvVar2 + 0x58)) {
                  *puVar7 = *(undefined8 *)((long)pvVar2 + 0x48);
                  if (pvVar2 == (void *)puVar7[1]) {
                    puVar7[1] = *(undefined8 *)((long)pvVar2 + 0x50);
                  }
                  if (*(long *)((long)pvVar2 + 0x50) != 0) {
                    *(undefined8 *)(*(long *)((long)pvVar2 + 0x50) + 0x48) =
                         *(undefined8 *)((long)pvVar2 + 0x48);
                  }
                  if (*(long *)((long)pvVar2 + 0x48) != 0) {
                    *(undefined8 *)(*(long *)((long)pvVar2 + 0x48) + 0x50) =
                         *(undefined8 *)((long)pvVar2 + 0x50);
                  }
                  if (Variant::needs_deinit[*(int *)((long)pvVar2 + 0x30)] != '\0') {
                    Variant::_clear_internal();
                  }
                  Callable::~Callable((Callable *)((long)pvVar2 + 0x20));
                  if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x18) != 0)) {
                    StringName::unref();
                  }
                  if ((*(long *)((long)pvVar2 + 8) != 0) &&
                     (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
                    pOVar3 = *(Object **)((long)pvVar2 + 8);
                    cVar5 = predelete_handler(pOVar3);
                    if (cVar5 != '\0') {
                      (**(code **)(*(long *)pOVar3 + 0x140))();
                      Memory::free_static(pOVar3,false);
                    }
                  }
                  Memory::free_static(pvVar2,false);
                  *(int *)(puVar7 + 2) = *(int *)(puVar7 + 2) + -1;
                }
                else {
                  _err_print_error("erase","./core/templates/list.h",0xe7,
                                   "Condition \"p_I->data != this\" is true. Returning: false",0,0);
                }
                puVar7 = *(undefined8 **)(this_01 + 8);
              } while (*(int *)(puVar7 + 2) != 0);
              Memory::free_static(puVar7,false);
            }
LAB_00105086:
            uVar1 = *(undefined8 *)(this_01 + 0x30);
            puVar7 = *(undefined8 **)(this_01 + 0x10);
            *(undefined8 *)(this_01 + 0x30) = 0;
            *(undefined8 *)(this_01 + 8) = uVar1;
            if (puVar7 != (undefined8 *)0x0) {
              do {
                pvVar2 = (void *)*puVar7;
                if (pvVar2 == (void *)0x0) goto LAB_0010515d;
                if (puVar7 == *(undefined8 **)((long)pvVar2 + 0x58)) {
                  *puVar7 = *(undefined8 *)((long)pvVar2 + 0x48);
                  if (pvVar2 == (void *)puVar7[1]) {
                    puVar7[1] = *(undefined8 *)((long)pvVar2 + 0x50);
                  }
                  if (*(long *)((long)pvVar2 + 0x50) != 0) {
                    *(undefined8 *)(*(long *)((long)pvVar2 + 0x50) + 0x48) =
                         *(undefined8 *)((long)pvVar2 + 0x48);
                  }
                  if (*(long *)((long)pvVar2 + 0x48) != 0) {
                    *(undefined8 *)(*(long *)((long)pvVar2 + 0x48) + 0x50) =
                         *(undefined8 *)((long)pvVar2 + 0x50);
                  }
                  if (Variant::needs_deinit[*(int *)((long)pvVar2 + 0x30)] != '\0') {
                    Variant::_clear_internal();
                  }
                  Callable::~Callable((Callable *)((long)pvVar2 + 0x20));
                  if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x18) != 0)) {
                    StringName::unref();
                  }
                  if ((*(long *)((long)pvVar2 + 8) != 0) &&
                     (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
                    pOVar3 = *(Object **)((long)pvVar2 + 8);
                    cVar5 = predelete_handler(pOVar3);
                    if (cVar5 != '\0') {
                      (**(code **)(*(long *)pOVar3 + 0x140))();
                      Memory::free_static(pOVar3,false);
                    }
                  }
                  Memory::free_static(pvVar2,false);
                  *(int *)(puVar7 + 2) = *(int *)(puVar7 + 2) + -1;
                }
                else {
                  _err_print_error("erase","./core/templates/list.h",0xe7,
                                   "Condition \"p_I->data != this\" is true. Returning: false",0,0);
                }
                puVar7 = *(undefined8 **)(this_01 + 0x10);
              } while (*(int *)(puVar7 + 2) != 0);
              Memory::free_static(puVar7,false);
            }
LAB_0010515d:
            uVar1 = *(undefined8 *)(this_01 + 0x38);
            local_58 = local_58 + 1;
            *(undefined8 *)(this_01 + 0x38) = 0;
            *(undefined8 *)(this_01 + 0x10) = uVar1;
            *(undefined8 *)(this_01 + 0x18) = *(undefined8 *)(this_01 + 0x40);
            this_01[0x20] = this_01[0x48];
            this_01 = this_01 + 0x28;
          } while (local_58 != lVar8);
        }
      }
      CowData<UndoRedo::Action>::resize<false>(this_00,lVar8);
      goto LAB_001051a3;
    }
  }
  else {
LAB_00104f0e:
    do {
      if (*piVar6 == 2) {
        if (*(long *)(piVar6 + 2) == 0) {
          Operation::delete_reference(*(Operation **)(piVar6 + 4));
          piVar6 = *(int **)(piVar6 + 0x12);
          if (piVar6 == (int *)0x0) break;
          goto LAB_00104f0e;
        }
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = *(Object **)(piVar6 + 2);
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
        piVar6[2] = 0;
        piVar6[3] = 0;
      }
      piVar6 = *(int **)(piVar6 + 0x12);
    } while (piVar6 != (int *)0x0);
    lVar8 = *(long *)(this + 0x180);
    if (lVar8 != 0) goto LAB_00104f3e;
    lVar8 = 0;
  }
  _err_print_index_error
            ("remove_at","./core/templates/cowdata.h",0xe4,0,lVar8,"p_index","size()","",false,false
            );
LAB_001051a3:
  if (-1 < *(int *)(this + 0x188)) {
    *(int *)(this + 0x188) = *(int *)(this + 0x188) + -1;
  }
  return;
}



/* UndoRedo::commit_action(bool) */

void __thiscall UndoRedo::commit_action(UndoRedo *this,bool param_1)

{
  UndoRedo UVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (*(int *)(this + 400) < 1) {
    _err_print_error("commit_action","core/object/undo_redo.cpp",0x138,
                     "Condition \"action_level <= 0\" is true.",0,0);
    return;
  }
  iVar3 = *(int *)(this + 400) + -1;
  *(int *)(this + 400) = iVar3;
  if (iVar3 != 0) {
    return;
  }
  UVar1 = this[0x19c];
  if (UVar1 != (UndoRedo)0x0) {
    *(long *)(this + 0x1a0) = *(long *)(this + 0x1a0) + -1;
    this[0x19c] = (UndoRedo)0x0;
  }
  lVar5 = *(long *)(this + 0x180);
  if (lVar5 == 0) {
    lVar4 = -1;
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar5 + -8);
    lVar4 = lVar6 + -1;
    if (-1 < lVar4) {
      if (*(char *)(lVar5 + 0x20 + lVar4 * 0x28) != '\0') {
        CowData<UndoRedo::Action>::_copy_on_write((CowData<UndoRedo::Action> *)(this + 0x180));
        List<UndoRedo::Operation,DefaultAllocator>::reverse
                  (*(List<UndoRedo::Operation,DefaultAllocator> **)
                    (*(long *)(this + 0x180) + 0x10 + lVar4 * 0x28));
      }
      *(int *)(this + 0x1e0) = *(int *)(this + 0x1e0) + 1;
      _redo(this,param_1);
      iVar3 = *(int *)(this + 0x194);
      *(int *)(this + 0x1e0) = *(int *)(this + 0x1e0) + -1;
      if (0 < iVar3) {
        while( true ) {
          if (*(long *)(this + 0x180) == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(long *)(*(long *)(this + 0x180) + -8);
          }
          if (lVar5 <= iVar3) break;
          _pop_history_tail(this);
          iVar3 = *(int *)(this + 0x194);
        }
      }
      if (UVar1 != (UndoRedo)0x0) {
        return;
      }
      if (*(code **)(this + 0x1b0) == (code *)0x0) {
        return;
      }
      lVar5 = *(long *)(this + 0x180);
      if (lVar5 == 0) {
        return;
      }
      if (*(long *)(lVar5 + -8) < 1) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00105477. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this + 0x1b0))
                (*(undefined8 *)(this + 0x1b8),lVar5 + (*(long *)(lVar5 + -8) * 5 + -5) * 8);
      return;
    }
  }
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* UndoRedo::clear_history(bool) */

void __thiscall UndoRedo::clear_history(UndoRedo *this,bool param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 400) < 1) {
    discard_redo(this);
    lVar2 = *(long *)(this + 0x180);
    while ((lVar2 != 0 && (*(long *)(lVar2 + -8) != 0))) {
      _pop_history_tail(this);
      lVar2 = *(long *)(this + 0x180);
    }
    if (param_1) {
      *(long *)(this + 0x1a0) = *(long *)(this + 0x1a0) + 1;
      if ((clear_history(bool)::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar3 = __cxa_guard_acquire(&clear_history(bool)::{lambda()#1}::operator()()::sname),
         iVar3 != 0)) {
        _scs_create((char *)&clear_history(bool)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&clear_history(bool)::{lambda()#1}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&clear_history(bool)::{lambda()#1}::operator()()::sname);
      }
      (**(code **)(*(long *)this + 0xd0))
                (this,&clear_history(bool)::{lambda()#1}::operator()()::sname,0,0);
      if (Variant::needs_deinit[0] != '\0') {
        Variant::_clear_internal();
      }
    }
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("clear_history","core/object/undo_redo.cpp",0x1c9,
                     "Condition \"action_level > 0\" is true.",0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* UndoRedo::~UndoRedo() */

void __thiscall UndoRedo::~UndoRedo(UndoRedo *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001128c0;
  clear_history(this,true);
  CowData<UndoRedo::Action>::_unref((CowData<UndoRedo::Action> *)(this + 0x180));
  Object::~Object((Object *)this);
  return;
}



/* UndoRedo::~UndoRedo() */

void __thiscall UndoRedo::~UndoRedo(UndoRedo *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001128c0;
  clear_history(this,true);
  CowData<UndoRedo::Action>::_unref((CowData<UndoRedo::Action> *)(this + 0x180));
  Object::~Object((Object *)this);
  operator_delete(this,0x1e8);
  return;
}



/* UndoRedo::create_action(String const&, UndoRedo::MergeMode, bool) */

void __thiscall
UndoRedo::create_action(UndoRedo *this,String *param_1,int param_3,CowData<char32_t> param_4)

{
  CowData<char32_t> *this_00;
  long *plVar1;
  Object *pOVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  CowData *pCVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  Operation *pOVar14;
  long lVar15;
  undefined4 uVar16;
  undefined8 *puVar17;
  long in_FS_OFFSET;
  Action *local_b8;
  CowData *local_b0;
  undefined1 local_98 [16];
  long *local_88;
  ulong local_80;
  CowData<char32_t> local_78;
  long local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  ulong local_50;
  CowData<char32_t> local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  OS::get_singleton();
  uVar7 = OS::get_ticks_msec();
  iVar6 = *(int *)(this + 400);
  if (iVar6 != 0) goto LAB_001057c9;
  discard_redo(this);
  if (((param_3 == 0) || (lVar12 = *(long *)(this + 0x180), lVar12 == 0)) ||
     (lVar15 = *(long *)(lVar12 + -8), lVar15 == 0)) {
LAB_00105990:
    local_88 = (long *)0x0;
    local_80 = 0;
    local_78 = (CowData<char32_t>)0x0;
    local_98 = (undefined1  [16])0x0;
    if (*(long *)param_1 == 0) {
      local_68 = 0;
      local_60 = (undefined8 *)0x0;
      local_58 = (undefined8 *)0x0;
      local_80 = uVar7;
      local_78 = param_4;
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_98,(CowData *)param_1);
      plVar1 = local_88;
      uVar4 = local_98._8_8_;
      local_68 = 0;
      local_80 = uVar7;
      local_78 = param_4;
      if (local_98._0_8_ != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)local_98);
      }
      local_60 = (undefined8 *)0x0;
      if (((long *)uVar4 != (long *)0x0) &&
         (pOVar14 = *(Operation **)uVar4, pOVar14 != (Operation *)0x0)) {
        do {
          List<UndoRedo::Operation,DefaultAllocator>::push_back
                    ((List<UndoRedo::Operation,DefaultAllocator> *)&local_60,pOVar14);
          pOVar14 = *(Operation **)(pOVar14 + 0x48);
        } while (pOVar14 != (Operation *)0x0);
      }
      local_58 = (undefined8 *)0x0;
      if ((plVar1 != (long *)0x0) && (pOVar14 = (Operation *)*plVar1, pOVar14 != (Operation *)0x0))
      {
        do {
          List<UndoRedo::Operation,DefaultAllocator>::push_back
                    ((List<UndoRedo::Operation,DefaultAllocator> *)&local_58,pOVar14);
          pOVar14 = *(Operation **)(pOVar14 + 0x48);
        } while (pOVar14 != (Operation *)0x0);
      }
    }
    local_b0 = (CowData *)&local_68;
    local_b8 = (Action *)local_98;
    if (*(long *)(this + 0x180) == 0) {
      lVar12 = 1;
    }
    else {
      lVar12 = *(long *)(*(long *)(this + 0x180) + -8) + 1;
    }
    local_50 = uVar7;
    local_48 = param_4;
    iVar6 = CowData<UndoRedo::Action>::resize<false>
                      ((CowData<UndoRedo::Action> *)(this + 0x180),lVar12);
    if (iVar6 == 0) {
      if (*(long *)(this + 0x180) == 0) {
        lVar15 = -1;
        lVar12 = 0;
      }
      else {
        lVar12 = *(long *)(*(long *)(this + 0x180) + -8);
        lVar15 = lVar12 + -1;
        if (-1 < lVar15) {
          CowData<UndoRedo::Action>::_copy_on_write((CowData<UndoRedo::Action> *)(this + 0x180));
          this_00 = (CowData<char32_t> *)(*(long *)(this + 0x180) + lVar15 * 0x28);
          if (*(long *)this_00 != local_68) {
            CowData<char32_t>::_ref(this_00,local_b0);
          }
          puVar17 = *(undefined8 **)(this_00 + 8);
          if (puVar17 != (undefined8 *)0x0) {
            do {
              pOVar14 = (Operation *)*puVar17;
              if (pOVar14 == (Operation *)0x0) goto LAB_00105b88;
              if (puVar17 == *(undefined8 **)(pOVar14 + 0x58)) {
                *puVar17 = *(undefined8 *)(pOVar14 + 0x48);
                if (pOVar14 == (Operation *)puVar17[1]) {
                  puVar17[1] = *(undefined8 *)(pOVar14 + 0x50);
                }
                if (*(long *)(pOVar14 + 0x50) != 0) {
                  *(undefined8 *)(*(long *)(pOVar14 + 0x50) + 0x48) =
                       *(undefined8 *)(pOVar14 + 0x48);
                }
                if (*(long *)(pOVar14 + 0x48) != 0) {
                  *(undefined8 *)(*(long *)(pOVar14 + 0x48) + 0x50) =
                       *(undefined8 *)(pOVar14 + 0x50);
                }
                Operation::~Operation(pOVar14);
                Memory::free_static(pOVar14,false);
                *(int *)(puVar17 + 2) = *(int *)(puVar17 + 2) + -1;
              }
              else {
                _err_print_error("erase","./core/templates/list.h",0xe7,
                                 "Condition \"p_I->data != this\" is true. Returning: false",0,0);
              }
              puVar17 = *(undefined8 **)(this_00 + 8);
            } while (*(int *)(puVar17 + 2) != 0);
            Memory::free_static(puVar17,false);
            *(undefined8 *)(this_00 + 8) = 0;
          }
LAB_00105b88:
          if (local_60 != (undefined8 *)0x0) {
            for (pOVar14 = (Operation *)*local_60; pOVar14 != (Operation *)0x0;
                pOVar14 = *(Operation **)(pOVar14 + 0x48)) {
              List<UndoRedo::Operation,DefaultAllocator>::push_back
                        ((List<UndoRedo::Operation,DefaultAllocator> *)(this_00 + 8),pOVar14);
            }
          }
          puVar17 = *(undefined8 **)(this_00 + 0x10);
          if (puVar17 != (undefined8 *)0x0) {
            do {
              pOVar14 = (Operation *)*puVar17;
              if (pOVar14 == (Operation *)0x0) goto LAB_00105c3f;
              if (puVar17 == *(undefined8 **)(pOVar14 + 0x58)) {
                *puVar17 = *(undefined8 *)(pOVar14 + 0x48);
                if (pOVar14 == (Operation *)puVar17[1]) {
                  puVar17[1] = *(undefined8 *)(pOVar14 + 0x50);
                }
                if (*(long *)(pOVar14 + 0x50) != 0) {
                  *(undefined8 *)(*(long *)(pOVar14 + 0x50) + 0x48) =
                       *(undefined8 *)(pOVar14 + 0x48);
                }
                if (*(long *)(pOVar14 + 0x48) != 0) {
                  *(undefined8 *)(*(long *)(pOVar14 + 0x48) + 0x50) =
                       *(undefined8 *)(pOVar14 + 0x50);
                }
                Operation::~Operation(pOVar14);
                Memory::free_static(pOVar14,false);
                *(int *)(puVar17 + 2) = *(int *)(puVar17 + 2) + -1;
              }
              else {
                _err_print_error("erase","./core/templates/list.h",0xe7,
                                 "Condition \"p_I->data != this\" is true. Returning: false",0,0);
              }
              puVar17 = *(undefined8 **)(this_00 + 0x10);
            } while (*(int *)(puVar17 + 2) != 0);
            Memory::free_static(puVar17,false);
            *(undefined8 *)(this_00 + 0x10) = 0;
          }
LAB_00105c3f:
          if (local_58 != (undefined8 *)0x0) {
            for (pOVar14 = (Operation *)*local_58; pOVar14 != (Operation *)0x0;
                pOVar14 = *(Operation **)(pOVar14 + 0x48)) {
              List<UndoRedo::Operation,DefaultAllocator>::push_back
                        ((List<UndoRedo::Operation,DefaultAllocator> *)(this_00 + 0x10),pOVar14);
            }
          }
          *(ulong *)(this_00 + 0x18) = uVar7;
          this_00[0x20] = param_4;
          goto LAB_00105c74;
        }
      }
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar15,lVar12,"p_index","size()","",false,
                 false);
    }
    else {
      _err_print_error("push_back","./core/templates/vector.h",0x142,
                       "Condition \"err\" is true. Returning: true",0,0);
    }
LAB_00105c74:
    Action::~Action((Action *)local_b0);
    *(undefined4 *)(this + 0x198) = 0;
    *(undefined4 *)(this + 0x1a8) = 0;
    Action::~Action(local_b8);
    iVar6 = *(int *)(this + 400);
    goto LAB_001057c9;
  }
  lVar9 = lVar15 + -1;
  if (lVar9 < 0) goto LAB_00105e07;
  cVar5 = String::operator==((String *)(lVar12 + lVar9 * 0x28),param_1);
  if (cVar5 == '\0') goto LAB_00105990;
  lVar12 = *(long *)(this + 0x180);
  if (lVar12 == 0) {
    lVar15 = 0;
    lVar9 = -1;
    goto LAB_00105e07;
  }
  lVar15 = *(long *)(lVar12 + -8);
  lVar9 = lVar15 + -1;
  if (lVar9 < 0) goto LAB_00105e07;
  lVar9 = lVar12 + lVar9 * 0x28;
  if ((*(CowData<char32_t> *)(lVar9 + 0x20) != param_4) || (*(long *)(lVar9 + 0x18) + 800U <= uVar7)
     ) goto LAB_00105990;
  iVar6 = (int)lVar15;
  *(int *)(this + 0x188) = iVar6 + -2;
  uVar16 = 0;
  if (param_3 == 1) {
    pCVar10 = (CowData *)(long)(int)(iVar6 - 1U);
    if (((long)pCVar10 < 0) || (lVar15 <= (long)pCVar10)) goto LAB_001060d7;
    CowData<UndoRedo::Action>::_copy_on_write((CowData<UndoRedo::Action> *)(this + 0x180));
    lVar12 = *(long *)(this + 0x180);
    plVar1 = *(long **)(lVar12 + 8 + (ulong)(iVar6 - 1U) * 0x28);
    if ((plVar1 != (long *)0x0) && (lVar15 = *plVar1, lVar15 != 0)) {
      local_b0 = (CowData *)0x0;
      uVar11 = 0;
      uVar13 = 0;
      do {
        if (*(char *)(lVar15 + 4) == '\0') {
          if (uVar13 == uVar11) {
            uVar8 = (ulong)(uVar13 * 2);
            if (uVar13 * 2 == 0) {
              uVar8 = 1;
            }
            uVar11 = (uint)uVar8;
            local_b0 = (CowData *)Memory::realloc_static(local_b0,uVar8 << 3,false);
            if (local_b0 == (CowData *)0x0) {
              _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                               "FATAL: Condition \"!data\" is true.","Out of memory",0,0,pCVar10);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
          }
          uVar8 = (ulong)uVar13;
          uVar13 = uVar13 + 1;
          *(long *)((long)local_b0 + uVar8 * 8) = lVar15;
          pCVar10 = local_b0;
        }
        lVar15 = *(long *)(lVar15 + 0x48);
      } while (lVar15 != 0);
      if ((CowData *)((long)local_b0 + (ulong)uVar13 * 8) != local_b0) {
        local_b8 = (Action *)local_b0;
        do {
          pOVar14 = *(Operation **)local_b8;
          Operation::delete_reference(pOVar14);
          puVar17 = *(undefined8 **)(pOVar14 + 0x58);
          if (pOVar14 == (Operation *)*puVar17) {
            *puVar17 = *(undefined8 *)(pOVar14 + 0x48);
          }
          if (pOVar14 == (Operation *)puVar17[1]) {
            puVar17[1] = *(undefined8 *)(pOVar14 + 0x50);
          }
          if (*(long *)(pOVar14 + 0x50) != 0) {
            *(undefined8 *)(*(long *)(pOVar14 + 0x50) + 0x48) = *(undefined8 *)(pOVar14 + 0x48);
          }
          if (*(long *)(pOVar14 + 0x48) != 0) {
            *(undefined8 *)(*(long *)(pOVar14 + 0x48) + 0x50) = *(undefined8 *)(pOVar14 + 0x50);
          }
          if (Variant::needs_deinit[*(int *)(pOVar14 + 0x30)] != '\0') {
            Variant::_clear_internal();
          }
          Callable::~Callable((Callable *)(pOVar14 + 0x20));
          if ((StringName::configured != '\0') && (*(long *)(pOVar14 + 0x18) != 0)) {
            StringName::unref();
          }
          if ((*(long *)(pOVar14 + 8) != 0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
            pOVar2 = *(Object **)(pOVar14 + 8);
            cVar5 = predelete_handler(pOVar2);
            if (cVar5 != '\0') {
              (**(code **)(*(long *)pOVar2 + 0x140))();
              Memory::free_static(pOVar2,false);
            }
          }
          Memory::free_static(pOVar14,false);
          local_b8 = (Action *)((long)local_b8 + 8);
          *(int *)(puVar17 + 2) = *(int *)(puVar17 + 2) + -1;
        } while ((Action *)((long)local_b0 + (ulong)uVar13 * 8) != local_b8);
      }
      if (local_b0 != (CowData *)0x0) {
        Memory::free_static(local_b0,false);
      }
      lVar12 = *(long *)(this + 0x180);
    }
LAB_001058fe:
    *(undefined4 *)(this + 0x1a8) = uVar16;
    if (lVar12 == 0) {
      lVar15 = 0;
      pCVar10 = (CowData *)0xffffffffffffffff;
      goto LAB_001060d7;
    }
  }
  else {
    if (param_3 == 2) {
      uVar11 = iVar6 - 1;
      pCVar10 = (CowData *)(long)(int)uVar11;
      if (((int)uVar11 < 0) || (lVar15 <= (long)pCVar10)) goto LAB_001060d7;
      CowData<UndoRedo::Action>::_copy_on_write((CowData<UndoRedo::Action> *)(this + 0x180));
      lVar12 = *(long *)(this + 0x180);
      lVar15 = *(long *)(lVar12 + 8 + (ulong)uVar11 * 0x28);
      if (lVar15 != 0) {
        uVar16 = *(undefined4 *)(lVar15 + 0x10);
      }
      goto LAB_001058fe;
    }
    *(undefined4 *)(this + 0x1a8) = 0;
  }
  lVar15 = *(long *)(lVar12 + -8);
  pCVar10 = (CowData *)(lVar15 + -1);
  if (-1 < (long)pCVar10) {
    CowData<UndoRedo::Action>::_copy_on_write((CowData<UndoRedo::Action> *)(this + 0x180));
    lVar12 = *(long *)(this + 0x180);
    *(ulong *)(lVar12 + 0x18 + (long)pCVar10 * 0x28) = uVar7;
    if (lVar12 == 0) {
      lVar15 = 0;
      lVar9 = -1;
    }
    else {
      lVar15 = *(long *)(lVar12 + -8);
      lVar9 = lVar15 + -1;
      if (-1 < lVar9) {
        if (*(char *)(lVar12 + 0x20 + lVar9 * 0x28) != '\0') {
          CowData<UndoRedo::Action>::_copy_on_write((CowData<UndoRedo::Action> *)(this + 0x180));
          List<UndoRedo::Operation,DefaultAllocator>::reverse
                    (*(List<UndoRedo::Operation,DefaultAllocator> **)
                      (*(long *)(this + 0x180) + 0x10 + lVar9 * 0x28));
        }
        *(int *)(this + 0x198) = param_3;
        iVar6 = *(int *)(this + 400);
        this[0x19c] = (UndoRedo)0x1;
LAB_001057c9:
        this[0x18c] = (UndoRedo)0x0;
        *(int *)(this + 400) = iVar6 + 1;
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
LAB_00105e07:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar15,"p_index","size()","",false,true
              );
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
LAB_001060d7:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,(long)pCVar10,lVar15,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
  if ((configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* MethodBind::is_valid() const */

undefined8 MethodBind::is_valid(void)

{
  return 1;
}



/* MethodBind::is_vararg() const */

undefined8 MethodBind::is_vararg(void)

{
  return 0;
}



/* UndoRedo::is_class_ptr(void*) const */

uint __thiscall UndoRedo::is_class_ptr(UndoRedo *this,void *param_1)

{
  return (uint)CONCAT71(0x112f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x112f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* UndoRedo::_getv(StringName const&, Variant&) const */

undefined8 UndoRedo::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* UndoRedo::_setv(StringName const&, Variant const&) */

undefined8 UndoRedo::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* UndoRedo::_validate_propertyv(PropertyInfo&) const */

void UndoRedo::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* UndoRedo::_property_can_revertv(StringName const&) const */

undefined8 UndoRedo::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* UndoRedo::_property_get_revertv(StringName const&, Variant&) const */

undefined8 UndoRedo::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* UndoRedo::_notificationv(int, bool) */

void UndoRedo::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTR<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTR<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTR<bool>::get_argument_meta(int) const */

undefined8 MethodBindTR<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
}



/* MethodBindT<int>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<int>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int>::get_argument_meta(MethodBindT<int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<unsigned long>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<unsigned_long>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<unsigned long>::get_argument_meta(int) const */

int __thiscall
MethodBindTRC<unsigned_long>::get_argument_meta(MethodBindTRC<unsigned_long> *this,int param_1)

{
  return (param_1 >> 0x1f) * -8;
}



/* MethodBindTRC<String>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<String>::_gen_argument_type(int param_1)

{
  return 4;
}



/* MethodBindTRC<String>::get_argument_meta(int) const */

undefined8 MethodBindTRC<String>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<String, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<String,int>::_gen_argument_type(MethodBindTR<String,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xfffffffe) + 4;
}



/* MethodBindTR<String, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTR<String,int>::get_argument_meta(MethodBindTR<String,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTR<int>::_gen_argument_type(int) const */

undefined8 MethodBindTR<int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTR<int>::get_argument_meta(int) const */

uint __thiscall MethodBindTR<int>::get_argument_meta(MethodBindTR<int> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
}



/* MethodBindT<>::_gen_argument_type(int) const */

undefined8 MethodBindT<>::_gen_argument_type(int param_1)

{
  return 0;
}



/* MethodBindT<>::_gen_argument_type_info(int) const */

undefined8 MethodBindT<>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined4 *)CONCAT44(in_register_0000003c,param_1) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x18) = 0;
  *(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x20) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x28) = 6;
  *(undefined1 (*) [16])(CONCAT44(in_register_0000003c,param_1) + 8) = (undefined1  [16])0x0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* MethodBindT<>::get_argument_meta(int) const */

undefined8 MethodBindT<>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Object*>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<Object*>::_gen_argument_type(MethodBindT<Object*> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Object*>::get_argument_meta(int) const */

undefined8 MethodBindT<Object*>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Object*, StringName const&, Variant const&>::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindT<Object*,StringName_const&,Variant_const&>::_gen_argument_type
          (MethodBindT<Object*,StringName_const&,Variant_const&> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((((uint)param_1 < 3) && (uVar1 = 0x18, param_1 != 0)) && (uVar1 = 0x15, param_1 != 1)) {
    uVar1 = 0;
  }
  return uVar1;
}



/* MethodBindT<Object*, StringName const&, Variant const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Object*,StringName_const&,Variant_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Callable const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Callable_const&>::_gen_argument_type(MethodBindT<Callable_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x19;
}



/* MethodBindT<Callable const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Callable_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTRC<bool>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<bool>::_gen_argument_type(int) const */

bool __thiscall MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this,int param_1)

{
  return param_1 == 0;
}



/* MethodBindT<bool>::get_argument_meta(int) const */

undefined8 MethodBindT<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&, UndoRedo::MergeMode, bool>::get_argument_meta(int) const */

undefined8 MethodBindT<String_const&,UndoRedo::MergeMode,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&, UndoRedo::MergeMode, bool>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,UndoRedo::MergeMode,bool>::~MethodBindT
          (MethodBindT<String_const&,UndoRedo::MergeMode,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112a20;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&, UndoRedo::MergeMode, bool>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,UndoRedo::MergeMode,bool>::~MethodBindT
          (MethodBindT<String_const&,UndoRedo::MergeMode,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112a20;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Callable const&>::~MethodBindT() */

void __thiscall MethodBindT<Callable_const&>::~MethodBindT(MethodBindT<Callable_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112b40;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Callable const&>::~MethodBindT() */

void __thiscall MethodBindT<Callable_const&>::~MethodBindT(MethodBindT<Callable_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112b40;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Object*, StringName const&, Variant const&>::~MethodBindT() */

void __thiscall
MethodBindT<Object*,StringName_const&,Variant_const&>::~MethodBindT
          (MethodBindT<Object*,StringName_const&,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112ba0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Object*, StringName const&, Variant const&>::~MethodBindT() */

void __thiscall
MethodBindT<Object*,StringName_const&,Variant_const&>::~MethodBindT
          (MethodBindT<Object*,StringName_const&,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112ba0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Object*>::~MethodBindT() */

void __thiscall MethodBindT<Object*>::~MethodBindT(MethodBindT<Object*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112c00;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Object*>::~MethodBindT() */

void __thiscall MethodBindT<Object*>::~MethodBindT(MethodBindT<Object*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112c00;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112c60;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112c60;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<int>::~MethodBindTR() */

void __thiscall MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112cc0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<int>::~MethodBindTR() */

void __thiscall MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112cc0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<String, int>::~MethodBindTR() */

void __thiscall MethodBindTR<String,int>::~MethodBindTR(MethodBindTR<String,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112d20;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<String, int>::~MethodBindTR() */

void __thiscall MethodBindTR<String,int>::~MethodBindTR(MethodBindTR<String,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112d20;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112a80;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112a80;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112d80;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112d80;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112ae0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112ae0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<unsigned long>::~MethodBindTRC() */

void __thiscall MethodBindTRC<unsigned_long>::~MethodBindTRC(MethodBindTRC<unsigned_long> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112de0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<unsigned long>::~MethodBindTRC() */

void __thiscall MethodBindTRC<unsigned_long>::~MethodBindTRC(MethodBindTRC<unsigned_long> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112de0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112e40;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112e40;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112ea0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112ea0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112f00;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112f00;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&, UndoRedo::MergeMode, bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<String_const&,UndoRedo::MergeMode,bool>::_gen_argument_type
          (MethodBindT<String_const&,UndoRedo::MergeMode,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if (((uint)param_1 < 3) && (cVar1 = '\x04', param_1 != 0)) {
    cVar1 = (param_1 == 1) + '\x01';
  }
  return cVar1;
}



/* UndoRedo::get_save_class() const */

UndoRedo * __thiscall UndoRedo::get_save_class(UndoRedo *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* UndoRedo::_get_class_namev() const */

undefined8 * UndoRedo::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00106f83:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106f83;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"UndoRedo");
      goto LAB_00106fee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"UndoRedo");
LAB_00106fee:
  return &_get_class_namev()::_class_name_static;
}



/* UndoRedo::get_class() const */

void UndoRedo::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* UndoRedo::is_class(String const&) const */

undefined8 __thiscall UndoRedo::is_class(UndoRedo *this,String *param_1)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_0010717f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010717f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00107233;
  }
  cVar6 = String::operator==(param_1,"UndoRedo");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_001072e3;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_001072e3:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00107233;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00107233:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<bool>::_gen_argument_type_info(int param_1)

{
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
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC14;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 1;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x001074dc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001074dc:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

{
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
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC14;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 1;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010765c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010765c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<int>::_gen_argument_type_info(int param_1)

{
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
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC14;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x001077dc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001077dc:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String>::_gen_argument_type_info(int param_1)

{
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
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC14;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 4;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010795c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010795c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<unsigned long>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<unsigned_long>::_gen_argument_type_info(int param_1)

{
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
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC14;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00107adc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00107adc:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int>::_gen_argument_type_info(int param_1)

{
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
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC14;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00107c5c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00107c5c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* UndoRedo::Operation::~Operation() */

void __thiscall UndoRedo::Operation::~Operation(Operation *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (Variant::needs_deinit[*(int *)(this + 0x30)] != '\0') {
    Variant::_clear_internal();
  }
  Callable::~Callable((Callable *)(this + 0x20));
  if ((StringName::configured != '\0') && (*(long *)(this + 0x18) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        return;
      }
    }
  }
  return;
}



/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x10);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plVar1[-1];
      *(undefined8 *)(this + 0x10) = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* CowData<char32_t>::_unref() */

void __thiscall CowData<char32_t>::_unref(CowData<char32_t> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00108080) */
/* String vformat<String, String>(String const&, String const, String const) */

undefined8 *
vformat<String,String>(undefined8 *param_1,bool *param_2,String *param_3,String *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  local_d0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x10820f);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC23;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (long *)0x0) {
      lVar7 = 0;
      lVar6 = -2;
    }
    else {
      lVar7 = local_50[-1];
      lVar6 = lVar7 + -2;
      if (-1 < lVar6) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar6));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_001082ba;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_60 = 0;
  local_48 = &_LC23;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_001082ba:
  plVar4 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar5 = local_50 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar7 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar7 != 0) {
        lVar6 = 0;
        plVar5 = plVar4;
        do {
          if (*plVar5 != 0) {
            LOCK();
            plVar1 = (long *)(*plVar5 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar2 = *plVar5;
              *plVar5 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar7 != lVar6);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<UndoRedo::MergeMode, void>::get_class_info() */

GetTypeInfo<UndoRedo::MergeMode,void> * __thiscall
GetTypeInfo<UndoRedo::MergeMode,void>::get_class_info(GetTypeInfo<UndoRedo::MergeMode,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "UndoRedo::MergeMode";
  local_40 = 0x13;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* UndoRedo::Action::~Action() */

void __thiscall UndoRedo::Action::~Action(Action *this)

{
  void *pvVar1;
  Object *pOVar2;
  char cVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(this + 0x10);
  if (puVar4 != (undefined8 *)0x0) {
    do {
      pvVar1 = (void *)*puVar4;
      if (pvVar1 == (void *)0x0) {
        if (*(int *)(puVar4 + 2) != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_001086ce;
        }
        break;
      }
      if (*(undefined8 **)((long)pvVar1 + 0x58) == puVar4) {
        *puVar4 = *(undefined8 *)((long)pvVar1 + 0x48);
        if (pvVar1 == (void *)puVar4[1]) {
          puVar4[1] = *(undefined8 *)((long)pvVar1 + 0x50);
        }
        if (*(long *)((long)pvVar1 + 0x50) != 0) {
          *(undefined8 *)(*(long *)((long)pvVar1 + 0x50) + 0x48) =
               *(undefined8 *)((long)pvVar1 + 0x48);
        }
        if (*(long *)((long)pvVar1 + 0x48) != 0) {
          *(undefined8 *)(*(long *)((long)pvVar1 + 0x48) + 0x50) =
               *(undefined8 *)((long)pvVar1 + 0x50);
        }
        if (Variant::needs_deinit[*(int *)((long)pvVar1 + 0x30)] != '\0') {
          Variant::_clear_internal();
        }
        Callable::~Callable((Callable *)((long)pvVar1 + 0x20));
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x18) != 0)) {
          StringName::unref();
        }
        if (*(long *)((long)pvVar1 + 8) != 0) {
          cVar3 = RefCounted::unreference();
          if (cVar3 != '\0') {
            pOVar2 = *(Object **)((long)pvVar1 + 8);
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
              (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
              Memory::free_static(pOVar2,false);
            }
          }
        }
        Memory::free_static(pvVar1,false);
        *(int *)(puVar4 + 2) = *(int *)(puVar4 + 2) + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      puVar4 = *(undefined8 **)(this + 0x10);
    } while (*(int *)(puVar4 + 2) != 0);
    Memory::free_static(puVar4,false);
  }
LAB_001086ce:
  puVar4 = *(undefined8 **)(this + 8);
  if (puVar4 != (undefined8 *)0x0) {
    do {
      pvVar1 = (void *)*puVar4;
      if (pvVar1 == (void *)0x0) {
        if (*(int *)(puVar4 + 2) != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_0010879c;
        }
        break;
      }
      if (*(undefined8 **)((long)pvVar1 + 0x58) == puVar4) {
        *puVar4 = *(undefined8 *)((long)pvVar1 + 0x48);
        if (pvVar1 == (void *)puVar4[1]) {
          puVar4[1] = *(undefined8 *)((long)pvVar1 + 0x50);
        }
        if (*(long *)((long)pvVar1 + 0x50) != 0) {
          *(undefined8 *)(*(long *)((long)pvVar1 + 0x50) + 0x48) =
               *(undefined8 *)((long)pvVar1 + 0x48);
        }
        if (*(long *)((long)pvVar1 + 0x48) != 0) {
          *(undefined8 *)(*(long *)((long)pvVar1 + 0x48) + 0x50) =
               *(undefined8 *)((long)pvVar1 + 0x50);
        }
        if (Variant::needs_deinit[*(int *)((long)pvVar1 + 0x30)] != '\0') {
          Variant::_clear_internal();
        }
        Callable::~Callable((Callable *)((long)pvVar1 + 0x20));
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x18) != 0)) {
          StringName::unref();
        }
        if (*(long *)((long)pvVar1 + 8) != 0) {
          cVar3 = RefCounted::unreference();
          if (cVar3 != '\0') {
            pOVar2 = *(Object **)((long)pvVar1 + 8);
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
              (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
              Memory::free_static(pOVar2,false);
            }
          }
        }
        Memory::free_static(pvVar1,false);
        *(int *)(puVar4 + 2) = *(int *)(puVar4 + 2) + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      puVar4 = *(undefined8 **)(this + 8);
    } while (*(int *)(puVar4 + 2) != 0);
    Memory::free_static(puVar4,false);
  }
LAB_0010879c:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    pvVar1 = (void *)*plVar4;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x40) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x30);
      lVar2 = *(long *)((long)pvVar1 + 0x38);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x30) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x30);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x38) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
      Memory::free_static(pvVar1,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar4 = *(long **)this;
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
  return;
}



/* UndoRedo::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void UndoRedo::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
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
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = "UndoRedo";
  local_88 = 0;
  local_90 = 0;
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "UndoRedo";
  local_98 = 0;
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00108bcd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108bcd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x00108bef;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x00108bef:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar5 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)pLVar5;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"UndoRedo",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<String, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<String,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
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
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX != 0) {
    local_a0 = 0;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._0_8_;
    local_60 = auVar2 << 0x40;
    local_68 = &_LC14;
    String::parse_latin1((StrRange *)&local_a0);
    local_a8 = 0;
    *puVar7 = 4;
    puVar7[6] = 0;
    *(undefined8 *)(puVar7 + 8) = 0;
    *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
    if (local_a0 == 0) {
      puVar7[10] = 6;
LAB_00108f97:
      StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_a0);
      puVar7[10] = 6;
      if (puVar7[6] != 0x11) goto LAB_00108f97;
      StringName::StringName((StringName *)&local_68,(String *)(puVar7 + 8),false);
      if (*(undefined **)(puVar7 + 4) == local_68) {
        if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar7 + 4) = local_68;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    goto LAB_00108fd2;
  }
  local_80 = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_78 = 0;
  local_70 = 6;
  local_a8 = 0;
  local_b0 = 0;
  local_68 = &_LC14;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._0_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_b0);
  local_b8 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_b0 == 0) {
LAB_00109008:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_a8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_b0);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00109008;
    StringName::StringName((StringName *)&local_a0,(String *)&local_48,false);
    if (local_60._8_8_ == local_a0) {
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_a0;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
  local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
  if (local_90._0_8_ != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
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
  local_80 = CONCAT44(local_80._4_4_,local_50);
  if (local_78 != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_78 = local_48;
    local_48 = 0;
  }
  local_70 = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  uVar6 = local_90._8_8_;
  uVar5 = local_90._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_90._8_8_;
  local_90 = auVar4 << 0x40;
  *puVar7 = (undefined4)local_98;
  *(undefined8 *)(puVar7 + 2) = uVar5;
  *(undefined8 *)(puVar7 + 4) = uVar6;
  puVar7[6] = (undefined4)local_80;
  *(long *)(puVar7 + 8) = local_78;
  puVar7[10] = local_70;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
LAB_00108fd2:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<Object*>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Object*>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_78;
  long local_70;
  char *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_78 = 0;
    local_68 = "Object";
    local_60 = 6;
    String::parse_latin1((StrRange *)&local_78);
    StringName::StringName((StringName *)&local_70,(String *)&local_78,false);
    local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
    local_60 = 0;
    StringName::StringName((StringName *)&local_58,(StringName *)&local_70);
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Callable const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Callable_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00109389;
  local_78 = 0;
  local_68 = &_LC14;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x19);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00109485:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00109485;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00109389:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_001095f9;
  local_78 = 0;
  local_68 = &_LC14;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001096f5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001096f5;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_001095f9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00109869;
  local_78 = 0;
  local_68 = &_LC14;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00109965:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00109965;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00109869:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBind* create_method_bind<UndoRedo, String const&, UndoRedo::MergeMode, bool>(void
   (UndoRedo::*)(String const&, UndoRedo::MergeMode, bool)) */

MethodBind *
create_method_bind<UndoRedo,String_const&,UndoRedo::MergeMode,bool>
          (_func_void_String_ptr_MergeMode_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_String_ptr_MergeMode_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112a20;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "UndoRedo";
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<UndoRedo, bool>(void (UndoRedo::*)(bool)) */

MethodBind * create_method_bind<UndoRedo,bool>(_func_void_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112a80;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "UndoRedo";
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<UndoRedo, bool>(bool (UndoRedo::*)() const) */

MethodBind * create_method_bind<UndoRedo,bool>(_func_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112ae0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "UndoRedo";
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<UndoRedo, Callable const&>(void (UndoRedo::*)(Callable const&)) */

MethodBind * create_method_bind<UndoRedo,Callable_const&>(_func_void_Callable_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Callable_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112b40;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "UndoRedo";
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<UndoRedo, Object*, StringName const&, Variant const&>(void
   (UndoRedo::*)(Object*, StringName const&, Variant const&)) */

MethodBind *
create_method_bind<UndoRedo,Object*,StringName_const&,Variant_const&>
          (_func_void_Object_ptr_StringName_ptr_Variant_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Object_ptr_StringName_ptr_Variant_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112ba0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "UndoRedo";
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<UndoRedo, Object*>(void (UndoRedo::*)(Object*)) */

MethodBind * create_method_bind<UndoRedo,Object*>(_func_void_Object_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Object_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112c00;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "UndoRedo";
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<UndoRedo>(void (UndoRedo::*)()) */

MethodBind * create_method_bind<UndoRedo>(_func_void *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_00112c60;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "UndoRedo";
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<UndoRedo, int>(int (UndoRedo::*)()) */

MethodBind * create_method_bind<UndoRedo,int>(_func_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112cc0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "UndoRedo";
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<UndoRedo, String, int>(String (UndoRedo::*)(int)) */

MethodBind * create_method_bind<UndoRedo,String,int>(_func_String_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_String_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112d20;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "UndoRedo";
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<UndoRedo, String>(String (UndoRedo::*)() const) */

MethodBind * create_method_bind<UndoRedo,String>(_func_String *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112d80;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "UndoRedo";
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<UndoRedo, unsigned long>(unsigned long (UndoRedo::*)() const) */

MethodBind * create_method_bind<UndoRedo,unsigned_long>(_func_ulong *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_ulong **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112de0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "UndoRedo";
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<UndoRedo, int>(void (UndoRedo::*)(int)) */

MethodBind * create_method_bind<UndoRedo,int>(_func_void_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112e40;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "UndoRedo";
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<UndoRedo, int>(int (UndoRedo::*)() const) */

MethodBind * create_method_bind<UndoRedo,int>(_func_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112ea0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "UndoRedo";
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<UndoRedo, bool>(bool (UndoRedo::*)()) */

MethodBind * create_method_bind<UndoRedo,bool>(_func_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112f00;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "UndoRedo";
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Variant>::_unref() */

void __thiscall CowData<Variant>::_unref(CowData<Variant> *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    piVar2 = *(int **)this;
    if (piVar2 != (int *)0x0) {
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar6 = 0;
        piVar5 = piVar2;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar3 != lVar6);
      }
      Memory::free_static(piVar2 + -4,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* UndoRedo::_initialize_classv() */

void UndoRedo::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "UndoRedo";
    local_60 = 0;
    local_40 = 8;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<UndoRedo::Action>::_unref() */

void __thiscall CowData<UndoRedo::Action>::_unref(CowData<UndoRedo::Action> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  Object *pOVar6;
  code *pcVar7;
  char cVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  lVar3 = plVar1[-1];
  lVar10 = 0;
  *(undefined8 *)this = 0;
  plVar9 = plVar1;
  if (lVar3 != 0) {
    do {
      puVar11 = (undefined8 *)plVar9[2];
      if (puVar11 != (undefined8 *)0x0) {
        do {
          pvVar4 = (void *)*puVar11;
          if (pvVar4 == (void *)0x0) {
            if (*(int *)(puVar11 + 2) == 0) {
              Memory::free_static(puVar11,false);
            }
            else {
              _err_print_error("~List","./core/templates/list.h",0x316,
                               "Condition \"_data->size_cache\" is true.",0,0);
            }
            goto LAB_0010adce;
          }
          if (*(undefined8 **)((long)pvVar4 + 0x58) == puVar11) {
            *puVar11 = *(undefined8 *)((long)pvVar4 + 0x48);
            if (pvVar4 == (void *)puVar11[1]) {
              puVar11[1] = *(undefined8 *)((long)pvVar4 + 0x50);
            }
            if (*(long *)((long)pvVar4 + 0x50) != 0) {
              *(undefined8 *)(*(long *)((long)pvVar4 + 0x50) + 0x48) =
                   *(undefined8 *)((long)pvVar4 + 0x48);
            }
            if (*(long *)((long)pvVar4 + 0x48) != 0) {
              *(undefined8 *)(*(long *)((long)pvVar4 + 0x48) + 0x50) =
                   *(undefined8 *)((long)pvVar4 + 0x50);
            }
            if (Variant::needs_deinit[*(int *)((long)pvVar4 + 0x30)] != '\0') {
              Variant::_clear_internal();
            }
            Callable::~Callable((Callable *)((long)pvVar4 + 0x20));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + 0x18) != 0)) {
              StringName::unref();
            }
            if ((*(long *)((long)pvVar4 + 8) != 0) &&
               (cVar8 = RefCounted::unreference(), cVar8 != '\0')) {
              pOVar6 = *(Object **)((long)pvVar4 + 8);
              cVar8 = predelete_handler(pOVar6);
              if (cVar8 != '\0') {
                (**(code **)(*(long *)pOVar6 + 0x140))();
                Memory::free_static(pOVar6,false);
              }
            }
            Memory::free_static(pvVar4,false);
            *(int *)(puVar11 + 2) = *(int *)(puVar11 + 2) + -1;
          }
          else {
            _err_print_error("erase","./core/templates/list.h",0xe7,
                             "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          }
          puVar11 = (undefined8 *)plVar9[2];
        } while (*(int *)(puVar11 + 2) != 0);
        Memory::free_static(puVar11,false);
        plVar9[2] = 0;
      }
LAB_0010adce:
      puVar11 = (undefined8 *)plVar9[1];
      if (puVar11 != (undefined8 *)0x0) {
        do {
          pvVar4 = (void *)*puVar11;
          if (pvVar4 == (void *)0x0) {
            if (*(int *)(puVar11 + 2) == 0) {
              Memory::free_static(puVar11,false);
            }
            else {
              _err_print_error("~List","./core/templates/list.h",0x316,
                               "Condition \"_data->size_cache\" is true.",0,0);
            }
            goto LAB_0010ae9c;
          }
          if (puVar11 == *(undefined8 **)((long)pvVar4 + 0x58)) {
            *puVar11 = *(undefined8 *)((long)pvVar4 + 0x48);
            if (pvVar4 == (void *)puVar11[1]) {
              puVar11[1] = *(undefined8 *)((long)pvVar4 + 0x50);
            }
            if (*(long *)((long)pvVar4 + 0x50) != 0) {
              *(undefined8 *)(*(long *)((long)pvVar4 + 0x50) + 0x48) =
                   *(undefined8 *)((long)pvVar4 + 0x48);
            }
            if (*(long *)((long)pvVar4 + 0x48) != 0) {
              *(undefined8 *)(*(long *)((long)pvVar4 + 0x48) + 0x50) =
                   *(undefined8 *)((long)pvVar4 + 0x50);
            }
            if (Variant::needs_deinit[*(int *)((long)pvVar4 + 0x30)] != '\0') {
              Variant::_clear_internal();
            }
            Callable::~Callable((Callable *)((long)pvVar4 + 0x20));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + 0x18) != 0)) {
              StringName::unref();
            }
            if ((*(long *)((long)pvVar4 + 8) != 0) &&
               (cVar8 = RefCounted::unreference(), cVar8 != '\0')) {
              pOVar6 = *(Object **)((long)pvVar4 + 8);
              cVar8 = predelete_handler(pOVar6);
              if (cVar8 != '\0') {
                (**(code **)(*(long *)pOVar6 + 0x140))();
                Memory::free_static(pOVar6,false);
              }
            }
            Memory::free_static(pvVar4,false);
            *(int *)(puVar11 + 2) = *(int *)(puVar11 + 2) + -1;
          }
          else {
            _err_print_error("erase","./core/templates/list.h",0xe7,
                             "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          }
          puVar11 = (undefined8 *)plVar9[1];
        } while (*(int *)(puVar11 + 2) != 0);
        Memory::free_static(puVar11,false);
        plVar9[1] = 0;
      }
LAB_0010ae9c:
      if (*plVar9 != 0) {
        LOCK();
        plVar2 = (long *)(*plVar9 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          lVar5 = *plVar9;
          *plVar9 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      lVar10 = lVar10 + 1;
      plVar9 = plVar9 + 5;
    } while (lVar3 != lVar10);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* CowData<UndoRedo::Action>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<UndoRedo::Action>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<UndoRedo::Action>::_realloc(long) */

undefined8 __thiscall
CowData<UndoRedo::Action>::_realloc(CowData<UndoRedo::Action> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<UndoRedo::Action>::resize<false>(long) */

undefined8 __thiscall
CowData<UndoRedo::Action>::resize<false>(CowData<UndoRedo::Action> *this,long param_1)

{
  CowData<char32_t> *this_00;
  void *pvVar1;
  Object *pOVar2;
  code *pcVar3;
  undefined1 (*pauVar4) [16];
  char cVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined1 (*pauVar9) [16];
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar14 = 0;
    lVar6 = 0;
  }
  else {
    lVar14 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar14) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar6 = lVar14 * 0x28;
    if (lVar6 != 0) {
      uVar7 = lVar6 - 1U | lVar6 - 1U >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      lVar6 = (uVar7 | uVar7 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x28 == 0) {
LAB_0010b800:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar7 = param_1 * 0x28 - 1;
  uVar7 = uVar7 >> 1 | uVar7;
  uVar7 = uVar7 | uVar7 >> 2;
  uVar7 = uVar7 | uVar7 >> 4;
  uVar7 = uVar7 | uVar7 >> 8;
  uVar7 = uVar7 | uVar7 >> 0x10;
  uVar7 = uVar7 | uVar7 >> 0x20;
  lVar13 = uVar7 + 1;
  if (lVar13 == 0) goto LAB_0010b800;
  uVar12 = param_1;
  if (param_1 <= lVar14) {
    while (puVar11 = *(undefined8 **)this, puVar11 != (undefined8 *)0x0) {
      if ((ulong)puVar11[-1] <= uVar12) {
        if (lVar13 != lVar6) {
          uVar10 = _realloc(this,lVar13);
          if ((int)uVar10 != 0) {
            return uVar10;
          }
          puVar11 = *(undefined8 **)this;
          if (puVar11 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        goto LAB_0010b359;
      }
      this_00 = (CowData<char32_t> *)(puVar11 + uVar12 * 5);
      puVar11 = *(undefined8 **)(this_00 + 0x10);
      if (puVar11 != (undefined8 *)0x0) {
        do {
          pvVar1 = (void *)*puVar11;
          if (pvVar1 == (void *)0x0) {
            if (*(int *)(puVar11 + 2) == 0) {
              Memory::free_static(puVar11,false);
            }
            else {
              _err_print_error("~List","./core/templates/list.h",0x316,
                               "Condition \"_data->size_cache\" is true.",0,0);
            }
            goto LAB_0010b492;
          }
          if (puVar11 == *(undefined8 **)((long)pvVar1 + 0x58)) {
            *puVar11 = *(undefined8 *)((long)pvVar1 + 0x48);
            if (pvVar1 == (void *)puVar11[1]) {
              puVar11[1] = *(undefined8 *)((long)pvVar1 + 0x50);
            }
            if (*(long *)((long)pvVar1 + 0x50) != 0) {
              *(undefined8 *)(*(long *)((long)pvVar1 + 0x50) + 0x48) =
                   *(undefined8 *)((long)pvVar1 + 0x48);
            }
            if (*(long *)((long)pvVar1 + 0x48) != 0) {
              *(undefined8 *)(*(long *)((long)pvVar1 + 0x48) + 0x50) =
                   *(undefined8 *)((long)pvVar1 + 0x50);
            }
            if (Variant::needs_deinit[*(int *)((long)pvVar1 + 0x30)] != '\0') {
              Variant::_clear_internal();
            }
            Callable::~Callable((Callable *)((long)pvVar1 + 0x20));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x18) != 0)) {
              StringName::unref();
            }
            if ((*(long *)((long)pvVar1 + 8) != 0) &&
               (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
              pOVar2 = *(Object **)((long)pvVar1 + 8);
              cVar5 = predelete_handler(pOVar2);
              if (cVar5 != '\0') {
                (**(code **)(*(long *)pOVar2 + 0x140))();
                Memory::free_static(pOVar2,false);
              }
            }
            Memory::free_static(pvVar1,false);
            *(int *)(puVar11 + 2) = *(int *)(puVar11 + 2) + -1;
          }
          else {
            _err_print_error("erase","./core/templates/list.h",0xe7,
                             "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          }
          puVar11 = *(undefined8 **)(this_00 + 0x10);
        } while (*(int *)(puVar11 + 2) != 0);
        Memory::free_static(puVar11,false);
      }
LAB_0010b492:
      puVar11 = *(undefined8 **)(this_00 + 8);
      if (puVar11 != (undefined8 *)0x0) {
        do {
          pvVar1 = (void *)*puVar11;
          if (pvVar1 == (void *)0x0) {
            if (*(int *)(puVar11 + 2) == 0) {
              Memory::free_static(puVar11,false);
            }
            else {
              _err_print_error("~List","./core/templates/list.h",0x316,
                               "Condition \"_data->size_cache\" is true.",0,0);
            }
            goto LAB_0010b56c;
          }
          if (puVar11 == *(undefined8 **)((long)pvVar1 + 0x58)) {
            *puVar11 = *(undefined8 *)((long)pvVar1 + 0x48);
            if (pvVar1 == (void *)puVar11[1]) {
              puVar11[1] = *(undefined8 *)((long)pvVar1 + 0x50);
            }
            if (*(long *)((long)pvVar1 + 0x50) != 0) {
              *(undefined8 *)(*(long *)((long)pvVar1 + 0x50) + 0x48) =
                   *(undefined8 *)((long)pvVar1 + 0x48);
            }
            if (*(long *)((long)pvVar1 + 0x48) != 0) {
              *(undefined8 *)(*(long *)((long)pvVar1 + 0x48) + 0x50) =
                   *(undefined8 *)((long)pvVar1 + 0x50);
            }
            if (Variant::needs_deinit[*(int *)((long)pvVar1 + 0x30)] != '\0') {
              Variant::_clear_internal();
            }
            Callable::~Callable((Callable *)((long)pvVar1 + 0x20));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x18) != 0)) {
              StringName::unref();
            }
            if ((*(long *)((long)pvVar1 + 8) != 0) &&
               (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
              pOVar2 = *(Object **)((long)pvVar1 + 8);
              cVar5 = predelete_handler(pOVar2);
              if (cVar5 != '\0') {
                (**(code **)(*(long *)pOVar2 + 0x140))();
                Memory::free_static(pOVar2,false);
              }
            }
            Memory::free_static(pvVar1,false);
            *(int *)(puVar11 + 2) = *(int *)(puVar11 + 2) + -1;
          }
          else {
            _err_print_error("erase","./core/templates/list.h",0xe7,
                             "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          }
          puVar11 = *(undefined8 **)(this_00 + 8);
        } while (*(int *)(puVar11 + 2) != 0);
        Memory::free_static(puVar11,false);
      }
LAB_0010b56c:
      CowData<char32_t>::_unref(this_00);
      uVar12 = uVar12 + 1;
    }
    goto LAB_0010b856;
  }
  if (lVar13 == lVar6) {
LAB_0010b6cd:
    puVar11 = *(undefined8 **)this;
    if (puVar11 == (undefined8 *)0x0) {
LAB_0010b856:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar14 = puVar11[-1];
    if (param_1 <= lVar14) goto LAB_0010b359;
  }
  else {
    if (lVar14 != 0) {
      uVar10 = _realloc(this,lVar13);
      if ((int)uVar10 != 0) {
        return uVar10;
      }
      goto LAB_0010b6cd;
    }
    puVar8 = (undefined8 *)Memory::alloc_static(uVar7 + 0x11,false);
    if (puVar8 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar11 = puVar8 + 2;
    *puVar8 = 1;
    puVar8[1] = 0;
    *(undefined8 **)this = puVar11;
    lVar14 = 0;
  }
  pauVar9 = (undefined1 (*) [16])(puVar11 + lVar14 * 5);
  do {
    *(undefined8 *)pauVar9[1] = 0;
    pauVar4 = pauVar9 + 2;
    *pauVar9 = (undefined1  [16])0x0;
    *(undefined8 *)(pauVar9[1] + 8) = 0;
    pauVar9[2][0] = 0;
    pauVar9 = (undefined1 (*) [16])(*pauVar4 + 8);
  } while ((undefined1 (*) [16])(*pauVar4 + 8) != (undefined1 (*) [16])(puVar11 + param_1 * 5));
LAB_0010b359:
  puVar11[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x0010b978) */
/* WARNING: Removing unreachable block (ram,0x0010bb0d) */
/* WARNING: Removing unreachable block (ram,0x0010bb19) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  Variant *this;
  int iVar1;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC98,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010bd10;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      bVar2 = (bool)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,bVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_0010bd10:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<bool>::validated_call
          (MethodBindTR<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010bfb2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar1;
LAB_0010bfb2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<bool>::ptrcall(MethodBindTR<bool> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c171;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar1;
LAB_0010c171:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC98,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c3a0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_0010c3a0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int>::validated_call
          (MethodBindTRC<int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c5b4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_0010c5b4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c763;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar1;
LAB_0010c763:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010caa1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010c92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010caa1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010cc81;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010cb0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0010cc81:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<unsigned long>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<unsigned_long>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC98,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010cd50;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      uVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,uVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_0010cd50:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<unsigned long>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<unsigned_long>::validated_call
          (MethodBindTRC<unsigned_long> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined8 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010cf62;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)(param_3 + 8) = uVar1;
LAB_0010cf62:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<unsigned long>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<unsigned_long>::ptrcall
          (MethodBindTRC<unsigned_long> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined8 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d111;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar1;
LAB_0010d111:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC98,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d350;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)((CowData<char32_t> *)&local_58);
      Variant::Variant((Variant *)local_48,(String *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
LAB_0010d350:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<String>::validated_call
          (MethodBindTRC<String> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10bb68;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d58c;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0010d58c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<String>::ptrcall
          (MethodBindTRC<String> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x10bb68;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d75d;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0010d75d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<String, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<String,int>::validated_call
          (MethodBindTR<String,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d932;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),
            *(undefined4 *)(*param_2 + 8));
  if (*(char **)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0010d932:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<String, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<String,int>::ptrcall
          (MethodBindTR<String,int> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010db20;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0010db20:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC98,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010dd60;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_0010dd60:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<int>::validated_call
          (MethodBindTR<int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010df74;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_0010df74:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<int>::ptrcall(MethodBindTR<int> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e123;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar1;
LAB_0010e123:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC98,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e3b0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)();
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
LAB_0010e3b0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010e72f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e5d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010e72f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010e8ef;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e796. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010e8ef:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Object*>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Object*>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010ead1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e95d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 0x10));
    return;
  }
LAB_0010ead1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Object*, StringName const&, Variant const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<Object*,StringName_const&,Variant_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010eca7;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010eb4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 0x10),*(long *)(param_3 + 8) + 8,
               *(undefined8 *)(param_3 + 0x10));
    return;
  }
LAB_0010eca7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Callable const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Callable_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010ee81;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010ed0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0010ee81:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Callable const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Callable_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010f061;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010eee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010f061:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC98,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f130;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      bVar2 = (bool)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,bVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_0010f130:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool>::validated_call
          (MethodBindTRC<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f342;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar1;
LAB_0010f342:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f4f1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar1;
LAB_0010f4f1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010f831;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f6bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010f831:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010fa19;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f8a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_0010fa19:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, UndoRedo::MergeMode, bool>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<String_const&,UndoRedo::MergeMode,bool>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010fc01;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010fa8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(undefined4 *)(*(long *)(param_3 + 8) + 8),
               *(undefined1 *)(*(long *)(param_3 + 0x10) + 8));
    return;
  }
LAB_0010fc01:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, UndoRedo::MergeMode, bool>::ptrcall(Object*, void const**, void*)
   const */

void MethodBindT<String_const&,UndoRedo::MergeMode,bool>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010fdf1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010fc7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               **(undefined4 **)((long)param_3 + 8),**(char **)((long)param_3 + 0x10) != '\0');
    return;
  }
LAB_0010fdf1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Object*, StringName const&, Variant const&>::ptrcall(Object*, void const**, void*)
   const */

void MethodBindT<Object*,StringName_const&,Variant_const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010ffe1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  plVar1 = *param_3;
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010fe6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),plVar1,
               *(undefined8 *)((long)param_3 + 8),*(undefined8 *)((long)param_3 + 0x10));
    return;
  }
LAB_0010ffe1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Object*>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Object*>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001101c9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  plVar1 = *param_3;
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00110051. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),plVar1);
    return;
  }
LAB_001101c9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<String, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<String,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC98,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00110310;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00110360;
LAB_00110350:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00110360:
        uVar7 = 4;
        goto LAB_00110305;
      }
      if (in_R8D == 1) goto LAB_00110350;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC103;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    (*(code *)pVVar12)((CowData<char32_t> *)&local_68,(Variant *)((long)plVar10 + (long)pVVar1),
                       iVar6);
    Variant::Variant((Variant *)local_58,(String *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_00110305:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00110310:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<Object*>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Object*>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  Object *pOVar7;
  long *plVar8;
  Object *pOVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar8 = (long *)plVar11[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar8 = (long *)(plVar11[1] + 0x20);
    }
    if (local_48 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC98,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00110670;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar6 = 3;
LAB_00110665:
    *in_R9 = uVar6;
    in_R9[2] = 1;
    goto LAB_00110670;
  }
  pVVar13 = param_2[5];
  if (pVVar13 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_001106c0;
LAB_001106b0:
    pVVar13 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar13 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001106c0:
      uVar6 = 4;
      goto LAB_00110665;
    }
    if (in_R8D == 1) goto LAB_001106b0;
    lVar10 = (long)((int)lVar2 + -1);
    if (lVar2 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar13 = pVVar13 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar12 & 1) != 0) {
    pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar13,0x18);
  if (cVar5 == '\0') {
LAB_00110636:
    uVar4 = _LC105;
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  else {
    pOVar7 = Variant::operator_cast_to_Object_(pVVar13);
    pOVar9 = Variant::operator_cast_to_Object_(pVVar13);
    if ((pOVar9 == (Object *)0x0) && (pOVar7 != (Object *)0x0)) goto LAB_00110636;
  }
  pOVar7 = Variant::operator_cast_to_Object_(pVVar13);
  (*(code *)pVVar12)((Variant *)((long)plVar11 + (long)pVVar1),pOVar7);
LAB_00110670:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<Object*, StringName const&, Variant const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Object*,StringName_const&,Variant_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  Object *pOVar8;
  long *plVar9;
  Object *pOVar10;
  int iVar11;
  uint uVar12;
  Variant *pVVar13;
  undefined4 in_register_00000014;
  long *plVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  Variant *local_78 [4];
  int local_58 [6];
  long local_40;
  
  plVar14 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar14 != (long *)0x0) && (plVar14[1] != 0)) && (*(char *)(plVar14[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar14[1] == 0) {
      plVar9 = (long *)plVar14[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar14 + 0x40))();
      }
    }
    else {
      plVar9 = (long *)(plVar14[1] + 0x20);
    }
    if (local_88 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC98,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_00110a82;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar6 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar11 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar11 = (int)lVar15;
    }
    if ((int)(3 - in_R8D) <= iVar11) {
      lVar7 = 0;
      do {
        if ((int)lVar7 < (int)in_R8D) {
          pVVar13 = *(Variant **)(param_4 + lVar7 * 8);
        }
        else {
          uVar12 = iVar11 + -3 + (int)lVar7;
          if (lVar15 <= (int)uVar12) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar12,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar13 = pVVar2 + (ulong)uVar12 * 0x18;
        }
        local_78[lVar7] = pVVar13;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar14 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[2],0);
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = 2;
      }
      Variant::Variant((Variant *)local_58,local_78[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[1],0x15);
      uVar4 = _LC107;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_StringName((Variant *)&local_88);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[0],0x18);
      if (cVar5 == '\0') {
LAB_00110a0a:
        uVar4 = _LC105;
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      else {
        pOVar8 = Variant::operator_cast_to_Object_(local_78[0]);
        pOVar10 = Variant::operator_cast_to_Object_(local_78[0]);
        if ((pOVar8 != (Object *)0x0) && (pOVar10 == (Object *)0x0)) goto LAB_00110a0a;
      }
      pOVar8 = Variant::operator_cast_to_Object_(local_78[0]);
      (*(code *)pVVar16)((Variant *)((long)plVar14 + (long)pVVar1),pOVar8,(Variant *)&local_88,
                         (Variant *)local_58);
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00110a82;
    }
    uVar6 = 4;
  }
  *in_R9 = uVar6;
  in_R9[2] = 3;
LAB_00110a82:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<Callable const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Callable_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC98,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00110e10;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00110e60;
LAB_00110e50:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00110e60:
        uVar6 = 4;
        goto LAB_00110e05;
      }
      if (in_R8D == 1) goto LAB_00110e50;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x19);
    uVar4 = _LC108;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Callable((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    Callable::~Callable((Callable *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_00110e05:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00110e10:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, UndoRedo::MergeMode, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<String_const&,UndoRedo::MergeMode,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  int iVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *pVVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  Variant *local_58 [3];
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar10 = (long *)plVar13[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar10 = (long *)(plVar13[1] + 0x20);
    }
    if (local_68 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC98,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001111b2;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar7 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar12 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar12 = (int)lVar15;
    }
    if ((int)(3 - in_R8D) <= iVar12) {
      lVar8 = 0;
      do {
        if ((int)lVar8 < (int)in_R8D) {
          pVVar14 = *(Variant **)(param_4 + lVar8 * 8);
        }
        else {
          uVar11 = iVar12 + -3 + (int)lVar8;
          if (lVar15 <= (int)uVar11) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar11,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar14 = pVVar2 + (ulong)uVar11 * 0x18;
        }
        local_58[lVar8] = pVVar14;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_58[2],1);
      uVar4 = _LC109;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      bVar6 = Variant::operator_cast_to_bool(local_58[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_58[1],2);
      uVar4 = _LC110;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      uVar9 = Variant::operator_cast_to_long(local_58[1]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_58[0],4);
      uVar4 = _LC111;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_68);
      (*(code *)pVVar16)((Variant *)((long)plVar13 + (long)pVVar1),(Variant *)&local_68,
                         uVar9 & 0xffffffff,bVar6);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      goto LAB_001111b2;
    }
    uVar7 = 4;
  }
  *in_R9 = uVar7;
  in_R9[2] = 3;
LAB_001111b2:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,int>
               (__UnexistingClass *param_1,_func_void_int *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
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
    goto LAB_001114bd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00111520;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00111520:
      uVar6 = 4;
LAB_001114bd:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0011143b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011143b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC103;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x00111496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC98,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00111586;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int>
            (p_Var2,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00111586:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,bool>
               (__UnexistingClass *param_1,_func_void_bool *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
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
    goto LAB_0011184d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001118b0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001118b0:
      uVar6 = 4;
LAB_0011184d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_001117cb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001117cb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC112;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x00111827. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC98,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00111916;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var2,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00111916:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<String const&, UndoRedo::MergeMode, bool>(int, PropertyInfo&) */

void call_get_argument_type_info<String_const&,UndoRedo::MergeMode,bool>
               (int param_1,PropertyInfo *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    if (param_1 == 1) {
      GetTypeInfo<UndoRedo::MergeMode,void>::get_class_info
                ((GetTypeInfo<UndoRedo::MergeMode,void> *)&local_68);
    }
    else {
      if (param_1 != 2) goto LAB_00111b29;
      local_78 = 0;
      local_80 = 0;
      local_68 = &_LC14;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      String::parse_latin1((StrRange *)&local_80);
      local_88 = 0;
      local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
      local_50 = 0;
      local_48 = 0;
      local_60 = (undefined1  [16])0x0;
      if (local_80 == 0) {
LAB_00111d98:
        local_40 = 6;
        StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
        local_40 = 6;
        if (local_50 != 0x11) goto LAB_00111d98;
        StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
        if (local_60._8_8_ == local_70) {
          if ((StringName::configured != '\0') && (local_70 != 0)) {
            StringName::unref();
          }
        }
        else {
          StringName::unref();
          local_60._8_8_ = local_70;
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
    }
    *(undefined4 *)param_2 = local_68._0_4_;
    if (*(long *)(param_2 + 8) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      uVar5 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8 *)(param_2 + 8) = uVar5;
    }
    if (*(long *)(param_2 + 0x10) != local_60._8_8_) {
      StringName::unref();
      uVar5 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(param_2 + 0x10) = uVar5;
    }
    *(int *)(param_2 + 0x18) = local_50;
    if (*(long *)(param_2 + 0x20) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar6 = local_48;
      local_48 = 0;
      *(long *)(param_2 + 0x20) = lVar6;
    }
    *(undefined4 *)(param_2 + 0x28) = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    goto LAB_00111b29;
  }
  local_78 = 0;
  local_68 = &_LC14;
  local_80 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._8_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00111ded:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00111ded;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_2 = local_68._0_4_;
  if (*(long *)(param_2 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
    uVar5 = local_60._0_8_;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_60._8_8_;
    local_60 = auVar4 << 0x40;
    *(undefined8 *)(param_2 + 8) = uVar5;
  }
  if (*(long *)(param_2 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar5;
  }
  *(int *)(param_2 + 0x18) = local_50;
  if (*(long *)(param_2 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
    lVar6 = local_48;
    local_48 = 0;
    *(long *)(param_2 + 0x20) = lVar6;
  }
  *(undefined4 *)(param_2 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00111b29:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<String const&, UndoRedo::MergeMode, bool>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<String_const&,UndoRedo::MergeMode,bool>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  call_get_argument_type_info<String_const&,UndoRedo::MergeMode,bool>(in_EDX,pPVar1);
  return pPVar1;
}



/* void call_get_argument_type_info_helper<Object*>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Object*>(int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_78;
  long local_70;
  char *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_78 = 0;
    local_68 = "Object";
    local_60 = 6;
    String::parse_latin1((StrRange *)&local_78);
    StringName::StringName((StringName *)&local_70,(String *)&local_78,false);
    local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
    local_60 = 0;
    StringName::StringName((StringName *)&local_58,(StringName *)&local_70);
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    *(undefined4 *)param_3 = local_68._0_4_;
    if (*(long *)(param_3 + 8) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x18) = local_50;
    if (*(long *)(param_3 + 0x20) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<Object*, StringName const&, Variant const&>(int, PropertyInfo&)
    */

void call_get_argument_type_info<Object*,StringName_const&,Variant_const&>
               (int param_1,PropertyInfo *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  int local_8c;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  ulong local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  call_get_argument_type_info_helper<Object*>(param_1,&local_8c,param_2);
  if (param_1 == local_8c) {
    local_78 = 0;
    local_68 = &_LC14;
    local_80 = 0;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    String::parse_latin1((StrRange *)&local_80);
    local_88 = 0;
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x15);
    local_50 = local_50 & 0xffffffff00000000;
    local_48 = 0;
    local_60 = (undefined1  [16])0x0;
    if (local_80 == 0) {
LAB_001123b5:
      local_40 = 6;
      StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
      local_40 = 6;
      if ((int)local_50 != 0x11) goto LAB_001123b5;
      StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
      if (local_60._8_8_ == local_70) {
        if ((StringName::configured != '\0') && (local_70 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_60._8_8_ = local_70;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    if ((StringName::configured != '\0') && (local_78 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_2 = local_68._0_4_;
    if (*(long *)(param_2 + 8) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      uVar4 = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      *(undefined8 *)(param_2 + 8) = uVar4;
    }
    if (*(long *)(param_2 + 0x10) != local_60._8_8_) {
      StringName::unref();
      uVar4 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(param_2 + 0x10) = uVar4;
    }
    *(int *)(param_2 + 0x18) = (int)local_50;
    if (*(long *)(param_2 + 0x20) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar5 = local_48;
      local_48 = 0;
      *(long *)(param_2 + 0x20) = lVar5;
    }
    *(undefined4 *)(param_2 + 0x28) = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
      StringName::unref();
    }
  }
  else {
    local_8c = local_8c + 1;
    if (param_1 != local_8c) goto LAB_0011216f;
    local_70 = 0;
    local_60 = (undefined1  [16])0x0;
    local_78 = 0;
    local_80 = 0;
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x20006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_2 = local_68._0_4_;
    if (*(long *)(param_2 + 8) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      uVar4 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8 *)(param_2 + 8) = uVar4;
    }
    if (*(long *)(param_2 + 0x10) != local_60._8_8_) {
      StringName::unref();
      uVar4 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(param_2 + 0x10) = uVar4;
    }
    *(int *)(param_2 + 0x18) = (int)local_50;
    if (*(long *)(param_2 + 0x20) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar5 = local_48;
      local_48 = 0;
      *(long *)(param_2 + 0x20) = lVar5;
    }
    *(undefined4 *)(param_2 + 0x28) = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
      StringName::unref();
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_0011216f:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<Object*, StringName const&, Variant const&>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<Object*,StringName_const&,Variant_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  call_get_argument_type_info<Object*,StringName_const&,Variant_const&>(in_EDX,pPVar1);
  return pPVar1;
}



/* WARNING: Control flow encountered bad instruction data */
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* UndoRedo::Action::~Action() */

void __thiscall UndoRedo::Action::~Action(Action *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* UndoRedo::Operation::~Operation() */

void __thiscall UndoRedo::Operation::~Operation(Operation *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<unsigned long>::~MethodBindTRC() */

void __thiscall MethodBindTRC<unsigned_long>::~MethodBindTRC(MethodBindTRC<unsigned_long> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<String, int>::~MethodBindTR() */

void __thiscall MethodBindTR<String,int>::~MethodBindTR(MethodBindTR<String,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<int>::~MethodBindTR() */

void __thiscall MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Object*>::~MethodBindT() */

void __thiscall MethodBindT<Object*>::~MethodBindT(MethodBindT<Object*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Object*, StringName const&, Variant const&>::~MethodBindT() */

void __thiscall
MethodBindT<Object*,StringName_const&,Variant_const&>::~MethodBindT
          (MethodBindT<Object*,StringName_const&,Variant_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Callable const&>::~MethodBindT() */

void __thiscall MethodBindT<Callable_const&>::~MethodBindT(MethodBindT<Callable_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&, UndoRedo::MergeMode, bool>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,UndoRedo::MergeMode,bool>::~MethodBindT
          (MethodBindT<String_const&,UndoRedo::MergeMode,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// This is taking way too long.