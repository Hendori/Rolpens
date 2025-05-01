
/* EditorUndoRedoManager::is_committing_action() const */

EditorUndoRedoManager __thiscall
EditorUndoRedoManager::is_committing_action(EditorUndoRedoManager *this)

{
  return this[0x1c9];
}



/* EditorUndoRedoManager::force_fixed_history() */

void __thiscall EditorUndoRedoManager::force_fixed_history(EditorUndoRedoManager *this)

{
  if (*(int *)(this + 0x1a8) != -99) {
    this[0x1c8] = (EditorUndoRedoManager)0x1;
    return;
  }
  _err_print_error("force_fixed_history","editor/editor_undo_redo_manager.cpp",0x7c,
                   "Condition \"pending_action.history_id == INVALID_HISTORY\" is true.",
                   "The current action has no valid history assigned.",0,0);
  return;
}



/* HashMap<int, EditorUndoRedoManager::History, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, EditorUndoRedoManager::History> > >::_lookup_pos(int
   const&, unsigned int&) const [clone .isra.0] */

undefined8 __thiscall
HashMap<int,EditorUndoRedoManager::History,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorUndoRedoManager::History>>>
::_lookup_pos(HashMap<int,EditorUndoRedoManager::History,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorUndoRedoManager::History>>>
              *this,int *param_1,uint *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if ((*(long *)(this + 8) == 0) || (*(int *)(this + 0x2c) == 0)) {
    return 0;
  }
  uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar10 = ((uint)((ulong)param_1 >> 0x10) & 0xffff ^ (uint)param_1) * -0x7a143595;
  uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
  uVar14 = uVar10 ^ uVar10 >> 0x10;
  if (uVar10 == uVar10 >> 0x10) {
    uVar14 = 1;
    uVar12 = uVar1;
  }
  else {
    uVar12 = uVar14 * uVar1;
  }
  uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar15;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar12;
  lVar13 = SUB168(auVar2 * auVar6,8);
  uVar10 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
  uVar11 = SUB164(auVar2 * auVar6,8);
  if (uVar10 != 0) {
    uVar16 = 0;
    do {
      if ((uVar14 == uVar10) &&
         (*(uint *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == (uint)param_1)) {
        *param_2 = uVar11;
        return 1;
      }
      uVar16 = uVar16 + 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (uVar11 + 1) * uVar1;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      lVar13 = SUB168(auVar3 * auVar7,8);
      uVar10 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
      uVar11 = SUB164(auVar3 * auVar7,8);
    } while ((uVar10 != 0) &&
            (auVar4._8_8_ = 0, auVar4._0_8_ = uVar10 * uVar1, auVar8._8_8_ = 0,
            auVar8._0_8_ = uVar15, auVar5._8_8_ = 0,
            auVar5._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4) +
                            uVar11) - SUB164(auVar4 * auVar8,8)) * uVar1, auVar9._8_8_ = 0,
            auVar9._0_8_ = uVar15, uVar16 <= SUB164(auVar5 * auVar9,8)));
  }
  return 0;
}



/* EditorUndoRedoManager::get_history_undo_redo(int) const */

undefined8 __thiscall
EditorUndoRedoManager::get_history_undo_redo(EditorUndoRedoManager *this,int param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  code *pcVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  ulong uVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  
  lVar2 = *(long *)(this + 0x180);
  if ((lVar2 != 0) && (*(int *)(this + 0x1a4) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4);
    uVar28 = CONCAT44(0,uVar1);
    uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a0) * 8);
    uVar20 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar20 = (uVar20 ^ uVar20 >> 0xd) * -0x3d4d51cb;
    uVar29 = uVar20 ^ uVar20 >> 0x10;
    if (uVar20 == uVar20 >> 0x10) {
      uVar29 = 1;
      uVar26 = uVar3;
    }
    else {
      uVar26 = uVar29 * uVar3;
    }
    lVar4 = *(long *)(this + 0x188);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar28;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar26;
    lVar23 = SUB168(auVar5 * auVar12,8);
    uVar20 = *(uint *)(lVar4 + lVar23 * 4);
    uVar21 = SUB164(auVar5 * auVar12,8);
    if (uVar20 != 0) {
      uVar25 = 0;
      lVar24 = lVar23;
      uVar27 = uVar20;
      uVar22 = uVar21;
      do {
        if ((uVar27 == uVar29) && (*(int *)(*(long *)(lVar2 + lVar24 * 8) + 0x10) == param_1)) {
          uVar27 = 0;
          do {
            if ((uVar29 == uVar20) && (*(int *)(*(long *)(lVar2 + lVar23 * 8) + 0x10) == param_1)) {
              return *(undefined8 *)(*(long *)(lVar2 + (ulong)uVar21 * 8) + 0x20);
            }
            uVar27 = uVar27 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (uVar21 + 1) * uVar3;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar28;
            lVar23 = SUB168(auVar9 * auVar16,8);
            uVar20 = *(uint *)(lVar4 + lVar23 * 4);
            uVar21 = SUB164(auVar9 * auVar16,8);
          } while ((uVar20 != 0) &&
                  (auVar10._8_8_ = 0, auVar10._0_8_ = uVar20 * uVar3, auVar17._8_8_ = 0,
                  auVar17._0_8_ = uVar28, auVar11._8_8_ = 0,
                  auVar11._0_8_ = ((uVar1 + uVar21) - SUB164(auVar10 * auVar17,8)) * uVar3,
                  auVar18._8_8_ = 0, auVar18._0_8_ = uVar28, uVar27 <= SUB164(auVar11 * auVar18,8)))
          ;
          _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                           "FATAL: Condition \"!exists\" is true.",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar19 = (code *)invalidInstructionException();
          (*pcVar19)();
        }
        uVar25 = uVar25 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (uVar22 + 1) * uVar3;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar28;
        lVar24 = SUB168(auVar6 * auVar13,8);
        uVar27 = *(uint *)(lVar4 + lVar24 * 4);
        uVar22 = SUB164(auVar6 * auVar13,8);
      } while ((uVar27 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = uVar27 * uVar3, auVar14._8_8_ = 0,
              auVar14._0_8_ = uVar28, auVar8._8_8_ = 0,
              auVar8._0_8_ = ((uVar1 + uVar22) - SUB164(auVar7 * auVar14,8)) * uVar3,
              auVar15._8_8_ = 0, auVar15._0_8_ = uVar28, uVar25 <= SUB164(auVar8 * auVar15,8)));
    }
  }
  _err_print_error("get_history_undo_redo","editor/editor_undo_redo_manager.cpp",0x39,
                   "Condition \"!history_map.has(p_idx)\" is true. Returning: nullptr",0,0);
  return 0;
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



/* List<EditorUndoRedoManager::Action, DefaultAllocator>::push_back(EditorUndoRedoManager::Action
   const&) [clone .isra.0] */

void __thiscall
List<EditorUndoRedoManager::Action,DefaultAllocator>::push_back
          (List<EditorUndoRedoManager::Action,DefaultAllocator> *this,Action *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined1 (*pauVar6) [16];
  
  if (*(long *)this == 0) {
    pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar6;
    *(undefined4 *)pauVar6[1] = 0;
    *pauVar6 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x38,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 2) = 0;
  *(undefined8 *)(puVar5 + 4) = 0;
  lVar4 = *(long *)(param_1 + 0x10);
  *(undefined1 (*) [16])(puVar5 + 8) = (undefined1  [16])0x0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *puVar5 = 0xffffff9d;
  puVar5[6] = 0;
  *(undefined1 *)(puVar5 + 7) = 0;
  *(undefined8 *)(puVar5 + 0xc) = 0;
  uVar2 = *(undefined4 *)param_1;
  *(undefined8 *)(puVar5 + 2) = uVar1;
  *puVar5 = uVar2;
  if (lVar4 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 4),(CowData *)(param_1 + 0x10));
  }
  puVar5[6] = *(undefined4 *)(param_1 + 0x18);
  *(Action *)(puVar5 + 7) = param_1[0x1c];
  plVar3 = *(long **)this;
  lVar4 = plVar3[1];
  *(undefined8 *)(puVar5 + 8) = 0;
  *(long **)(puVar5 + 0xc) = plVar3;
  *(long *)(puVar5 + 10) = lVar4;
  if (lVar4 != 0) {
    *(undefined4 **)(lVar4 + 0x20) = puVar5;
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



/* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */

void __thiscall
List<PropertyInfo,DefaultAllocator>::push_back
          (List<PropertyInfo,DefaultAllocator> *this,PropertyInfo *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 (*pauVar4) [16];
  
  if (*(long *)this == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar3 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  lVar2 = *(long *)(param_1 + 8);
  *puVar3 = 0;
  puVar3[6] = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = *(undefined4 *)param_1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(param_1 + 8));
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_1 + 0x10));
  puVar3[6] = *(undefined4 *)(param_1 + 0x18);
  if (*(long *)(puVar3 + 8) != *(long *)(param_1 + 0x20)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(param_1 + 0x20));
  }
  puVar3[10] = *(undefined4 *)(param_1 + 0x28);
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(long **)(puVar3 + 0x10) = plVar1;
  *(long *)(puVar3 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar3;
  }
  plVar1[1] = (long)puVar3;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)puVar3;
  return;
}



/* EditorUndoRedoManager::has_undo() */

undefined8 __thiscall EditorUndoRedoManager::has_undo(EditorUndoRedoManager *this)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  puVar2 = *(undefined8 **)(this + 400);
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = *(int *)(puVar2 + 2);
    if ((((iVar1 == 0) || (iVar1 == -9)) ||
        (iVar3 = EditorData::get_current_edited_scene_history_id(), iVar1 == iVar3)) &&
       ((puVar2[6] != 0 && (*(int *)(puVar2[6] + 0x10) != 0)))) break;
    puVar2 = (undefined8 *)*puVar2;
  }
  return 1;
}



/* EditorUndoRedoManager::has_redo() */

undefined8 __thiscall EditorUndoRedoManager::has_redo(EditorUndoRedoManager *this)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  puVar2 = *(undefined8 **)(this + 400);
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = *(int *)(puVar2 + 2);
    if ((((iVar1 == 0) || (iVar1 == -9)) ||
        (iVar3 = EditorData::get_current_edited_scene_history_id(), iVar1 == iVar3)) &&
       ((puVar2[7] != 0 && (*(int *)(puVar2[7] + 0x10) != 0)))) break;
    puVar2 = (undefined8 *)*puVar2;
  }
  return 1;
}



/* EditorUndoRedoManager::has_history(int) const */

undefined8 __thiscall EditorUndoRedoManager::has_history(EditorUndoRedoManager *this,int param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if ((*(long *)(this + 0x180) == 0) || (*(int *)(this + 0x1a4) == 0)) {
    return 0;
  }
  uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a0) * 8);
  uVar10 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
  uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
  uVar14 = uVar10 ^ uVar10 >> 0x10;
  if (uVar10 == uVar10 >> 0x10) {
    uVar14 = 1;
    uVar12 = uVar1;
  }
  else {
    uVar12 = uVar14 * uVar1;
  }
  uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4));
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar15;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar12;
  lVar13 = SUB168(auVar2 * auVar6,8);
  uVar10 = *(uint *)(*(long *)(this + 0x188) + lVar13 * 4);
  iVar11 = SUB164(auVar2 * auVar6,8);
  if (uVar10 != 0) {
    uVar16 = 0;
    do {
      if ((uVar14 == uVar10) &&
         (*(int *)(*(long *)(*(long *)(this + 0x180) + lVar13 * 8) + 0x10) == param_1)) {
        return 1;
      }
      uVar16 = uVar16 + 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (iVar11 + 1) * uVar1;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      lVar13 = SUB168(auVar3 * auVar7,8);
      uVar10 = *(uint *)(*(long *)(this + 0x188) + lVar13 * 4);
      iVar11 = SUB164(auVar3 * auVar7,8);
    } while ((uVar10 != 0) &&
            (auVar4._8_8_ = 0, auVar4._0_8_ = uVar10 * uVar1, auVar8._8_8_ = 0,
            auVar8._0_8_ = uVar15, auVar5._8_8_ = 0,
            auVar5._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4)
                            + iVar11) - SUB164(auVar4 * auVar8,8)) * uVar1, auVar9._8_8_ = 0,
            auVar9._0_8_ = uVar15, uVar16 <= SUB164(auVar5 * auVar9,8)));
  }
  return 0;
}



/* EditorUndoRedoManager::get_singleton() */

undefined8 EditorUndoRedoManager::get_singleton(void)

{
  return singleton;
}



/* EditorUndoRedoManager::EditorUndoRedoManager() */

void __thiscall EditorUndoRedoManager::EditorUndoRedoManager(EditorUndoRedoManager *this)

{
  bool bVar1;
  
  Object::Object((Object *)this);
  *(undefined8 *)(this + 0x1a0) = 2;
  *(undefined ***)this = &PTR__initialize_classv_0010f070;
  bVar1 = singleton != (EditorUndoRedoManager *)0x0;
  *(undefined4 *)(this + 0x1a8) = 0xffffff9d;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1c0) = 0;
  this[0x1c4] = (EditorUndoRedoManager)0x0;
  *(undefined2 *)(this + 0x1c8) = 0;
  *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
  if (bVar1) {
    return;
  }
  singleton = this;
  return;
}



/* EditorUndoRedoManager::get_history_id_for_object(Object*) const */

int __thiscall
EditorUndoRedoManager::get_history_id_for_object(EditorUndoRedoManager *this,Object *param_1)

{
  String *pSVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  Node *pNVar5;
  Node *pNVar6;
  int iVar7;
  long in_FS_OFFSET;
  CowData<char32_t> local_50 [8];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (Object *)0x0) {
    lVar4 = __dynamic_cast(param_1,&Object::typeinfo,&EditorDebuggerRemoteObject::typeinfo,0);
    if (lVar4 != 0) {
      iVar3 = -9;
      goto LAB_00100ac5;
    }
    pNVar5 = (Node *)__dynamic_cast(param_1,&Object::typeinfo,&Node::typeinfo,0);
    if ((((pNVar5 == (Node *)0x0) ||
         (pNVar6 = (Node *)EditorData::get_edited_scene_root((int)EditorNode::singleton + 0x430),
         pNVar6 == (Node *)0x0)) ||
        ((pNVar6 != pNVar5 && (cVar2 = Node::is_ancestor_of(pNVar6), cVar2 == '\0')))) ||
       (iVar3 = EditorData::get_current_edited_scene_history_id(), iVar3 < 1)) {
      lVar4 = __dynamic_cast(param_1,&Object::typeinfo,&Resource::typeinfo,0);
      iVar7 = -99;
      if (lVar4 == 0) goto LAB_00100b30;
    }
    else {
      lVar4 = __dynamic_cast(param_1,&Object::typeinfo,&Resource::typeinfo,0);
      iVar7 = iVar3;
      if (lVar4 == 0) goto LAB_00100ac5;
    }
    if ((*(long *)(lVar4 + 0x188) == 0) || (*(uint *)(*(long *)(lVar4 + 0x188) + -8) < 2)) {
LAB_001009cb:
      Resource::get_path();
      if ((local_48 == 0) || (iVar3 = (int)*(undefined8 *)(local_48 + -8), iVar3 == 0)) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_00100a60:
        iVar3 = EditorData::get_current_edited_scene_history_id();
      }
      else {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        if (iVar3 == 1) goto LAB_00100a60;
        pSVar1 = (String *)(EditorNode::singleton + 0x430);
        Resource::get_path();
        String::get_slice((char *)&local_48,(int)local_50);
        iVar3 = EditorData::get_scene_history_id_from_path(pSVar1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref(local_50);
      }
      if (0 < iVar3) goto LAB_00100ac5;
    }
    else {
      iVar3 = String::find((char *)(lVar4 + 0x188),0x1056ff);
      if ((iVar3 != -1) || (cVar2 = String::begins_with((char *)(lVar4 + 0x188)), cVar2 != '\0'))
      goto LAB_001009cb;
    }
    iVar3 = iVar7;
    if (iVar7 != -99) goto LAB_00100ac5;
  }
LAB_00100b30:
  iVar3 = *(int *)(this + 0x1a8);
  if (iVar3 == -99) {
    iVar3 = 0;
  }
LAB_00100ac5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* EditorUndoRedoManager::discard_history(int, bool) */

void __thiscall
EditorUndoRedoManager::discard_history(EditorUndoRedoManager *this,int param_1,bool param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint *puVar4;
  Object *pOVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar29;
  char cVar30;
  uint uVar31;
  ulong uVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  uint uVar36;
  long *plVar37;
  uint uVar38;
  ulong uVar39;
  ulong uVar40;
  uint *puVar41;
  long in_FS_OFFSET;
  int local_4c [2];
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c[0] = param_1;
  if ((*(long *)(this + 0x180) != 0) && (*(int *)(this + 0x1a4) != 0)) {
    uVar39 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a0) * 8);
    uVar31 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar31 = (uVar31 ^ uVar31 >> 0xd) * -0x3d4d51cb;
    uVar38 = uVar31 ^ uVar31 >> 0x10;
    if (uVar31 == uVar31 >> 0x10) {
      uVar38 = 1;
      uVar32 = uVar39;
    }
    else {
      uVar32 = uVar38 * uVar39;
    }
    uVar40 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4));
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar40;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar32;
    lVar34 = SUB168(auVar9 * auVar19,8);
    uVar31 = *(uint *)(*(long *)(this + 0x188) + lVar34 * 4);
    iVar33 = SUB164(auVar9 * auVar19,8);
    if (uVar31 != 0) {
      uVar36 = 0;
      do {
        if ((uVar38 == uVar31) &&
           (param_1 == *(int *)(*(long *)(*(long *)(this + 0x180) + lVar34 * 8) + 0x10))) {
          lVar34 = HashMap<int,EditorUndoRedoManager::History,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorUndoRedoManager::History>>>
                   ::operator[]((HashMap<int,EditorUndoRedoManager::History,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorUndoRedoManager::History>>>
                                 *)(this + 0x178),local_4c);
          pOVar5 = *(Object **)(lVar34 + 8);
          if (pOVar5 != (Object *)0x0) {
            cVar30 = predelete_handler(pOVar5);
            if (cVar30 != '\0') {
              (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
              Memory::free_static(pOVar5,false);
            }
            *(undefined8 *)(lVar34 + 8) = 0;
          }
          if (!param_2) goto LAB_00100ceb;
          local_44 = 0;
          cVar30 = HashMap<int,EditorUndoRedoManager::History,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorUndoRedoManager::History>>>
                   ::_lookup_pos((HashMap<int,EditorUndoRedoManager::History,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorUndoRedoManager::History>>>
                                  *)(this + 0x178),(int *)(ulong)(uint)param_1,&local_44);
          if (cVar30 == '\0') goto LAB_00100ceb;
          lVar34 = *(long *)(this + 0x188);
          lVar6 = *(long *)(this + 0x180);
          uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4);
          uVar39 = CONCAT44(0,uVar31);
          lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a0) * 8);
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(local_44 + 1) * lVar7;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = uVar39;
          lVar35 = SUB168(auVar13 * auVar23,8);
          puVar41 = (uint *)(lVar34 + lVar35 * 4);
          uVar36 = SUB164(auVar13 * auVar23,8);
          uVar38 = *puVar41;
          if ((uVar38 == 0) ||
             (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar38 * lVar7, auVar24._8_8_ = 0,
             auVar24._0_8_ = uVar39, auVar15._8_8_ = 0,
             auVar15._0_8_ = (ulong)((uVar31 + uVar36) - SUB164(auVar14 * auVar24,8)) * lVar7,
             auVar25._8_8_ = 0, auVar25._0_8_ = uVar39, uVar29 = local_44,
             SUB164(auVar15 * auVar25,8) == 0)) goto LAB_00100e35;
          goto LAB_00100de6;
        }
        uVar36 = uVar36 + 1;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (iVar33 + 1) * uVar39;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar40;
        lVar34 = SUB168(auVar10 * auVar20,8);
        uVar31 = *(uint *)(*(long *)(this + 0x188) + lVar34 * 4);
        iVar33 = SUB164(auVar10 * auVar20,8);
      } while ((uVar31 != 0) &&
              (auVar11._8_8_ = 0, auVar11._0_8_ = uVar31 * uVar39, auVar21._8_8_ = 0,
              auVar21._0_8_ = uVar40, auVar12._8_8_ = 0,
              auVar12._0_8_ =
                   ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4) + iVar33
                    ) - SUB164(auVar11 * auVar21,8)) * uVar39, auVar22._8_8_ = 0,
              auVar22._0_8_ = uVar40, uVar36 <= SUB164(auVar12 * auVar22,8)));
    }
  }
  _err_print_error("discard_history","editor/editor_undo_redo_manager.cpp",0x1c2,
                   "Condition \"!history_map.has(p_idx)\" is true.",0,0);
  goto LAB_00100ceb;
  while (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)uVar38 * lVar7, auVar26._8_8_ = 0,
        auVar26._0_8_ = uVar39, auVar17._8_8_ = 0,
        auVar17._0_8_ = (ulong)((uVar36 + uVar31) - SUB164(auVar16 * auVar26,8)) * lVar7,
        auVar27._8_8_ = 0, auVar27._0_8_ = uVar39, uVar29 = local_44,
        SUB164(auVar17 * auVar27,8) != 0) {
LAB_00100de6:
    local_44 = uVar36;
    puVar4 = (uint *)(lVar34 + (ulong)uVar29 * 4);
    *puVar41 = *puVar4;
    puVar1 = (undefined8 *)(lVar6 + lVar35 * 8);
    *puVar4 = uVar38;
    puVar2 = (undefined8 *)(lVar6 + (ulong)uVar29 * 8);
    uVar8 = *puVar1;
    *puVar1 = *puVar2;
    *puVar2 = uVar8;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)(local_44 + 1) * lVar7;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar39;
    lVar35 = SUB168(auVar18 * auVar28,8);
    puVar41 = (uint *)(lVar34 + lVar35 * 4);
    uVar36 = SUB164(auVar18 * auVar28,8);
    uVar38 = *puVar41;
    if (uVar38 == 0) break;
  }
LAB_00100e35:
  uVar39 = (ulong)local_44;
  *(undefined4 *)(lVar34 + uVar39 * 4) = 0;
  plVar3 = (long *)(lVar6 + uVar39 * 8);
  plVar37 = (long *)*plVar3;
  if (*(long **)(this + 400) == plVar37) {
    *(long *)(this + 400) = *plVar37;
    plVar37 = (long *)*plVar3;
  }
  if (*(long **)(this + 0x198) == plVar37) {
    *(long *)(this + 0x198) = plVar37[1];
    plVar37 = (long *)*plVar3;
  }
  if ((long *)plVar37[1] != (long *)0x0) {
    *(long *)plVar37[1] = *plVar37;
    plVar37 = (long *)*plVar3;
  }
  if (*plVar37 != 0) {
    *(long *)(*plVar37 + 8) = plVar37[1];
    plVar37 = (long *)*plVar3;
  }
  List<EditorUndoRedoManager::Action,DefaultAllocator>::~List
            ((List<EditorUndoRedoManager::Action,DefaultAllocator> *)(plVar37 + 7));
  List<EditorUndoRedoManager::Action,DefaultAllocator>::~List
            ((List<EditorUndoRedoManager::Action,DefaultAllocator> *)(plVar37 + 6));
  Memory::free_static(plVar37,false);
  *(undefined8 *)(*(long *)(this + 0x180) + uVar39 * 8) = 0;
  *(int *)(this + 0x1a4) = *(int *)(this + 0x1a4) + -1;
LAB_00100ceb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorUndoRedoManager::~EditorUndoRedoManager() */

void __thiscall EditorUndoRedoManager::~EditorUndoRedoManager(EditorUndoRedoManager *this)

{
  uint uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  long lVar8;
  
  puVar2 = *(undefined8 **)(this + 400);
  *(undefined ***)this = &PTR__initialize_classv_0010f070;
  for (; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
    discard_history(this,*(int *)(puVar2 + 2),false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x1b8));
  pvVar7 = *(void **)(this + 0x180);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0x1a4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1a4) = 0;
        *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
      }
      else {
        lVar8 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x188) + lVar8) != 0) {
            pvVar7 = *(void **)((long)pvVar7 + lVar8 * 2);
            *(int *)(*(long *)(this + 0x188) + lVar8) = 0;
            plVar6 = *(long **)((long)pvVar7 + 0x38);
            if (plVar6 != (long *)0x0) {
              do {
                pvVar3 = (void *)*plVar6;
                if (pvVar3 == (void *)0x0) {
                  if ((int)plVar6[2] != 0) {
                    _err_print_error("~List","./core/templates/list.h",0x316,
                                     "Condition \"_data->size_cache\" is true.",0,0);
                    goto LAB_00101079;
                  }
                  break;
                }
                if (plVar6 == *(long **)((long)pvVar3 + 0x30)) {
                  lVar5 = *(long *)((long)pvVar3 + 0x20);
                  lVar4 = *(long *)((long)pvVar3 + 0x28);
                  *plVar6 = lVar5;
                  if (pvVar3 == (void *)plVar6[1]) {
                    plVar6[1] = lVar4;
                  }
                  if (lVar4 != 0) {
                    *(long *)(lVar4 + 0x20) = lVar5;
                    lVar5 = *(long *)((long)pvVar3 + 0x20);
                  }
                  if (lVar5 != 0) {
                    *(long *)(lVar5 + 0x28) = lVar4;
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
                  Memory::free_static(pvVar3,false);
                  *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
                }
                else {
                  _err_print_error("erase","./core/templates/list.h",0xe7,
                                   "Condition \"p_I->data != this\" is true. Returning: false",0,0);
                }
                plVar6 = *(long **)((long)pvVar7 + 0x38);
              } while ((int)plVar6[2] != 0);
              Memory::free_static(plVar6,false);
            }
LAB_00101079:
            plVar6 = *(long **)((long)pvVar7 + 0x30);
            if (plVar6 != (long *)0x0) {
              do {
                pvVar3 = (void *)*plVar6;
                if (pvVar3 == (void *)0x0) {
                  if ((int)plVar6[2] != 0) {
                    _err_print_error("~List","./core/templates/list.h",0x316,
                                     "Condition \"_data->size_cache\" is true.",0,0);
                    goto LAB_001010f6;
                  }
                  break;
                }
                if (plVar6 == *(long **)((long)pvVar3 + 0x30)) {
                  lVar5 = *(long *)((long)pvVar3 + 0x20);
                  lVar4 = *(long *)((long)pvVar3 + 0x28);
                  *plVar6 = lVar5;
                  if (pvVar3 == (void *)plVar6[1]) {
                    plVar6[1] = lVar4;
                  }
                  if (lVar4 != 0) {
                    *(long *)(lVar4 + 0x20) = lVar5;
                    lVar5 = *(long *)((long)pvVar3 + 0x20);
                  }
                  if (lVar5 != 0) {
                    *(long *)(lVar5 + 0x28) = lVar4;
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
                  Memory::free_static(pvVar3,false);
                  *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
                }
                else {
                  _err_print_error("erase","./core/templates/list.h",0xe7,
                                   "Condition \"p_I->data != this\" is true. Returning: false",0,0);
                }
                plVar6 = *(long **)((long)pvVar7 + 0x30);
              } while ((int)plVar6[2] != 0);
              Memory::free_static(plVar6,false);
            }
LAB_001010f6:
            Memory::free_static(pvVar7,false);
            pvVar7 = *(void **)(this + 0x180);
            *(undefined8 *)((long)pvVar7 + lVar8 * 2) = 0;
          }
          lVar8 = lVar8 + 4;
        } while (lVar8 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1a4) = 0;
        *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_00101136;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0x188),false);
  }
LAB_00101136:
  Object::~Object((Object *)this);
  return;
}



/* EditorUndoRedoManager::~EditorUndoRedoManager() */

void __thiscall EditorUndoRedoManager::~EditorUndoRedoManager(EditorUndoRedoManager *this)

{
  ~EditorUndoRedoManager(this);
  operator_delete(this,0x1d0);
  return;
}



/* EditorUndoRedoManager::get_or_create_history(int) */

void __thiscall
EditorUndoRedoManager::get_or_create_history(EditorUndoRedoManager *this,int param_1)

{
  HashMap<int,EditorUndoRedoManager::History,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorUndoRedoManager::History>>>
  *this_00;
  void *pvVar1;
  long lVar2;
  char cVar3;
  Object *this_01;
  int *piVar4;
  long lVar5;
  undefined4 in_register_00000034;
  long *plVar6;
  long in_FS_OFFSET;
  int local_6c;
  uint local_68 [2];
  Object *local_60;
  undefined8 local_58;
  List<EditorUndoRedoManager::Action,DefaultAllocator> local_50 [16];
  long local_40;
  
  this_00 = (HashMap<int,EditorUndoRedoManager::History,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorUndoRedoManager::History>>>
             *)(this + 0x178);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_6c = param_1;
  cVar3 = HashMap<int,EditorUndoRedoManager::History,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorUndoRedoManager::History>>>
          ::_lookup_pos(this_00,(int *)CONCAT44(in_register_00000034,param_1),local_68);
  if (cVar3 == '\0') {
    local_58 = 1;
    local_50[0] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_50[1] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_50[2] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_50[3] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_50[4] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_50[5] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_50[6] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_50[7] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_50[8] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_50[9] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_50[10] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_50[0xb] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_50[0xc] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_50[0xd] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_50[0xe] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_50[0xf] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    this_01 = (Object *)operator_new(0x1e8,"");
    Object::Object(this_01);
    *(code **)this_01 = EditorLog::register_undo_redo;
    *(undefined8 *)(this_01 + 0x180) = 0;
    *(undefined4 *)(this_01 + 0x188) = 0xffffffff;
    this_01[0x18c] = (Object)0x0;
    *(undefined8 *)(this_01 + 400) = 0;
    *(undefined4 *)(this_01 + 0x198) = 0;
    this_01[0x19c] = (Object)0x0;
    *(undefined8 *)(this_01 + 0x1a0) = 1;
    *(undefined4 *)(this_01 + 0x1a8) = 0;
    *(undefined8 *)(this_01 + 0x1b0) = 0;
    *(undefined8 *)(this_01 + 0x1c8) = 0;
    *(undefined4 *)(this_01 + 0x1e0) = 0;
    *(undefined1 (*) [16])(this_01 + 0x1b8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_01 + 0x1d0) = (undefined1  [16])0x0;
    postinitialize_handler(this_01);
    local_68[0] = param_1;
    local_60 = this_01;
    piVar4 = (int *)HashMap<int,EditorUndoRedoManager::History,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorUndoRedoManager::History>>>
                    ::operator[](this_00,&local_6c);
    plVar6 = *(long **)(piVar4 + 6);
    *piVar4 = param_1;
    *(Object **)(piVar4 + 2) = this_01;
    piVar4[4] = 1;
    piVar4[5] = 0;
    if (plVar6 != (long *)0x0) {
      do {
        pvVar1 = (void *)*plVar6;
        if (pvVar1 == (void *)0x0) goto LAB_00101472;
        if (*(long **)((long)pvVar1 + 0x30) == plVar6) {
          lVar5 = *(long *)((long)pvVar1 + 0x20);
          lVar2 = *(long *)((long)pvVar1 + 0x28);
          *plVar6 = lVar5;
          if (pvVar1 == (void *)plVar6[1]) {
            plVar6[1] = lVar2;
          }
          if (lVar2 != 0) {
            *(long *)(lVar2 + 0x20) = lVar5;
            lVar5 = *(long *)((long)pvVar1 + 0x20);
          }
          if (lVar5 != 0) {
            *(long *)(lVar5 + 0x28) = lVar2;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x10));
          Memory::free_static(pvVar1,false);
          *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        plVar6 = *(long **)(piVar4 + 6);
      } while ((int)plVar6[2] != 0);
      Memory::free_static(plVar6,false);
      piVar4[6] = 0;
      piVar4[7] = 0;
    }
LAB_00101472:
    plVar6 = *(long **)(piVar4 + 8);
    if (plVar6 != (long *)0x0) {
      do {
        pvVar1 = (void *)*plVar6;
        if (pvVar1 == (void *)0x0) goto LAB_001014ee;
        if (*(long **)((long)pvVar1 + 0x30) == plVar6) {
          lVar5 = *(long *)((long)pvVar1 + 0x20);
          lVar2 = *(long *)((long)pvVar1 + 0x28);
          *plVar6 = lVar5;
          if (pvVar1 == (void *)plVar6[1]) {
            plVar6[1] = lVar2;
          }
          if (lVar2 != 0) {
            *(long *)(lVar2 + 0x20) = lVar5;
            lVar5 = *(long *)((long)pvVar1 + 0x20);
          }
          if (lVar5 != 0) {
            *(long *)(lVar5 + 0x28) = lVar2;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x10));
          Memory::free_static(pvVar1,false);
          *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        plVar6 = *(long **)(piVar4 + 8);
      } while ((int)plVar6[2] != 0);
      Memory::free_static(plVar6,false);
      piVar4[8] = 0;
      piVar4[9] = 0;
    }
LAB_001014ee:
    EditorLog::register_undo_redo(*(UndoRedo **)(EditorNode::singleton + 0x5d0));
    EditorDebuggerNode::register_undo_redo(EditorDebuggerNode::singleton);
    List<EditorUndoRedoManager::Action,DefaultAllocator>::~List(local_50 + 8);
    List<EditorUndoRedoManager::Action,DefaultAllocator>::~List(local_50);
  }
  HashMap<int,EditorUndoRedoManager::History,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorUndoRedoManager::History>>>
  ::operator[](this_00,&local_6c);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorUndoRedoManager::get_history_for_object(Object*) */

long __thiscall
EditorUndoRedoManager::get_history_for_object(EditorUndoRedoManager *this,Object *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x1c8] == (EditorUndoRedoManager)0x0) {
    iVar3 = get_history_id_for_object(this,param_1);
    iVar1 = *(int *)(this + 0x1a8);
    if ((iVar1 != iVar3) && (iVar1 != -99)) {
      local_40 = 0;
      String::parse_latin1((String *)&local_40,"UndoRedo history mismatch: expected %d, got %d.");
      vformat<int,int>(local_38,(int)(String *)&local_40,iVar1);
      _err_print_error("get_history_for_object","editor/editor_undo_redo_manager.cpp",0x6d,
                       "Condition \"pending_action.history_id != INVALID_HISTORY && history_id != pending_action.history_id\" is true. Returning: get_or_create_history(pending_action.history_id)"
                       ,local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        lVar4 = get_or_create_history(this,*(int *)(this + 0x1a8));
        return lVar4;
      }
      goto LAB_0010170a;
    }
  }
  else {
    iVar3 = *(int *)(this + 0x1a8);
  }
  lVar4 = get_or_create_history(this,iVar3);
  if (*(int *)(this + 0x1a8) == -99) {
    uVar2 = *(undefined8 *)(lVar4 + 8);
    *(int *)(this + 0x1a8) = iVar3;
    UndoRedo::create_action(uVar2,this + 0x1b8,*(undefined4 *)(this + 0x1c0),this[0x1c4]);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
  }
LAB_0010170a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorUndoRedoManager::add_do_methodp(Object*, StringName const&, Variant const**, int) */

void EditorUndoRedoManager::add_do_methodp
               (Object *param_1,StringName *param_2,Variant **param_3,int param_4)

{
  Callable *pCVar1;
  long lVar2;
  long in_FS_OFFSET;
  Callable aCStack_68 [16];
  Callable local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = get_history_for_object((EditorUndoRedoManager *)param_1,(Object *)param_2);
  pCVar1 = *(Callable **)(lVar2 + 8);
  Callable::Callable(aCStack_68,(Object *)param_2,(StringName *)param_3);
  Callable::bindp((Variant **)local_58,(int)aCStack_68);
  UndoRedo::add_do_method(pCVar1);
  Callable::~Callable(local_58);
  Callable::~Callable(aCStack_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorUndoRedoManager::_add_do_method(Variant const**, int, Callable::CallError&) */

void __thiscall
EditorUndoRedoManager::_add_do_method
          (EditorUndoRedoManager *this,Variant **param_1,int param_2,CallError *param_3)

{
  Variant *this_00;
  undefined4 uVar1;
  Object *pOVar2;
  long in_FS_OFFSET;
  Variant *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 2) {
    *(undefined4 *)param_3 = 4;
    uVar1 = 2;
  }
  else {
    this_00 = *param_1;
    if (*(int *)this_00 == 0x18) {
      if ((*(int *)param_1[1] == 4) || (*(int *)param_1[1] == 0x15)) {
        *(undefined4 *)param_3 = 0;
        pOVar2 = Variant::operator_cast_to_Object_(this_00);
        Variant::operator_cast_to_StringName((Variant *)&local_38);
        add_do_methodp((Object *)this,(StringName *)pOVar2,&local_38,(int)param_1 + 0x10);
        if ((StringName::configured != '\0') && (local_38 != (Variant *)0x0)) {
          StringName::unref();
        }
        goto LAB_001017f2;
      }
      *(undefined8 *)param_3 = 0x100000002;
      uVar1 = 0x15;
    }
    else {
      *(undefined8 *)param_3 = 2;
      uVar1 = 0x18;
    }
  }
  *(undefined4 *)(param_3 + 8) = uVar1;
LAB_001017f2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorUndoRedoManager::add_undo_methodp(Object*, StringName const&, Variant const**, int) */

void EditorUndoRedoManager::add_undo_methodp
               (Object *param_1,StringName *param_2,Variant **param_3,int param_4)

{
  Callable *pCVar1;
  long lVar2;
  long in_FS_OFFSET;
  Callable aCStack_68 [16];
  Callable local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = get_history_for_object((EditorUndoRedoManager *)param_1,(Object *)param_2);
  pCVar1 = *(Callable **)(lVar2 + 8);
  Callable::Callable(aCStack_68,(Object *)param_2,(StringName *)param_3);
  Callable::bindp((Variant **)local_58,(int)aCStack_68);
  UndoRedo::add_undo_method(pCVar1);
  Callable::~Callable(local_58);
  Callable::~Callable(aCStack_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorUndoRedoManager::_add_undo_method(Variant const**, int, Callable::CallError&) */

void __thiscall
EditorUndoRedoManager::_add_undo_method
          (EditorUndoRedoManager *this,Variant **param_1,int param_2,CallError *param_3)

{
  Variant *this_00;
  undefined4 uVar1;
  Object *pOVar2;
  long in_FS_OFFSET;
  Variant *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 2) {
    *(undefined4 *)param_3 = 4;
    uVar1 = 2;
  }
  else {
    this_00 = *param_1;
    if (*(int *)this_00 == 0x18) {
      if ((*(int *)param_1[1] == 4) || (*(int *)param_1[1] == 0x15)) {
        *(undefined4 *)param_3 = 0;
        pOVar2 = Variant::operator_cast_to_Object_(this_00);
        Variant::operator_cast_to_StringName((Variant *)&local_38);
        add_undo_methodp((Object *)this,(StringName *)pOVar2,&local_38,(int)param_1 + 0x10);
        if ((StringName::configured != '\0') && (local_38 != (Variant *)0x0)) {
          StringName::unref();
        }
        goto LAB_00101992;
      }
      *(undefined8 *)param_3 = 0x100000002;
      uVar1 = 0x15;
    }
    else {
      *(undefined8 *)param_3 = 2;
      uVar1 = 0x18;
    }
  }
  *(undefined4 *)(param_3 + 8) = uVar1;
LAB_00101992:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorUndoRedoManager::add_do_property(Object*, StringName const&, Variant const&) */

void EditorUndoRedoManager::add_do_property(Object *param_1,StringName *param_2,Variant *param_3)

{
  long lVar1;
  
  lVar1 = get_history_for_object((EditorUndoRedoManager *)param_1,(Object *)param_2);
  UndoRedo::add_do_property(*(Object **)(lVar1 + 8),param_2,param_3);
  return;
}



/* EditorUndoRedoManager::add_undo_property(Object*, StringName const&, Variant const&) */

void EditorUndoRedoManager::add_undo_property(Object *param_1,StringName *param_2,Variant *param_3)

{
  long lVar1;
  
  lVar1 = get_history_for_object((EditorUndoRedoManager *)param_1,(Object *)param_2);
  UndoRedo::add_undo_property(*(Object **)(lVar1 + 8),param_2,param_3);
  return;
}



/* EditorUndoRedoManager::add_do_reference(Object*) */

void __thiscall EditorUndoRedoManager::add_do_reference(EditorUndoRedoManager *this,Object *param_1)

{
  long lVar1;
  
  lVar1 = get_history_for_object(this,param_1);
  UndoRedo::add_do_reference(*(Object **)(lVar1 + 8));
  return;
}



/* EditorUndoRedoManager::add_undo_reference(Object*) */

void __thiscall
EditorUndoRedoManager::add_undo_reference(EditorUndoRedoManager *this,Object *param_1)

{
  long lVar1;
  
  lVar1 = get_history_for_object(this,param_1);
  UndoRedo::add_undo_reference(*(Object **)(lVar1 + 8));
  return;
}



/* EditorUndoRedoManager::create_action_for_history(String const&, int, UndoRedo::MergeMode, bool)
    */

void __thiscall
EditorUndoRedoManager::create_action_for_history
          (EditorUndoRedoManager *this,CowData *param_1,int param_2,undefined4 param_4,
          EditorUndoRedoManager param_5)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(this + 0x1a8);
  if (*(int *)(this + 0x1a8) == -99) {
    if (*(long *)(this + 0x1b8) != *(long *)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x1b8),param_1);
    }
    plVar3 = (long *)OS::get_singleton();
    uVar4 = (**(code **)(*plVar3 + 0x1f0))(plVar3);
    *(undefined4 *)(this + 0x1c0) = param_4;
    this[0x1c4] = param_5;
    *(undefined8 *)(this + 0x1b0) = uVar4;
    iVar1 = param_2;
    if (param_2 == -99) {
      return;
    }
  }
  *(int *)(this + 0x1a8) = iVar1;
  lVar2 = get_or_create_history(this,iVar1);
  UndoRedo::create_action
            (*(undefined8 *)(lVar2 + 8),this + 0x1b8,*(undefined4 *)(this + 0x1c0),this[0x1c4]);
  return;
}



/* EditorUndoRedoManager::set_history_as_saved(int) */

void __thiscall EditorUndoRedoManager::set_history_as_saved(EditorUndoRedoManager *this,int param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = get_or_create_history(this,param_1);
  uVar2 = UndoRedo::get_version();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  return;
}



/* EditorUndoRedoManager::set_history_as_unsaved(int) */

void __thiscall
EditorUndoRedoManager::set_history_as_unsaved(EditorUndoRedoManager *this,int param_1)

{
  long lVar1;
  
  lVar1 = get_or_create_history(this,param_1);
  *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
  return;
}



/* EditorUndoRedoManager::is_history_unsaved(int) */

bool __thiscall EditorUndoRedoManager::is_history_unsaved(EditorUndoRedoManager *this,int param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = get_or_create_history(this,param_1);
  lVar2 = UndoRedo::get_version();
  return *(long *)(lVar1 + 0x10) != lVar2;
}



/* EditorUndoRedoManager::_get_newest_undo() */

long __thiscall EditorUndoRedoManager::_get_newest_undo(EditorUndoRedoManager *this)

{
  double dVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double local_20;
  
  lVar3 = get_or_create_history(this,0);
  local_20 = 0.0;
  lVar5 = *(long *)(lVar3 + 0x18);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x10) == 0) {
      lVar5 = 0;
    }
    else {
      local_20 = *(double *)(*(long *)(lVar5 + 8) + 8);
      lVar5 = lVar3;
    }
  }
  lVar4 = get_or_create_history(this,-9);
  lVar3 = *(long *)(lVar4 + 0x18);
  if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) != 0)) &&
     (dVar1 = *(double *)(*(long *)(lVar3 + 8) + 8), local_20 < dVar1)) {
    lVar5 = lVar4;
    local_20 = dVar1;
  }
  iVar2 = EditorData::get_current_edited_scene_history_id();
  lVar4 = get_or_create_history(this,iVar2);
  lVar3 = *(long *)(lVar4 + 0x18);
  if ((lVar3 != 0) && (*(int *)(lVar3 + 0x10) != 0)) {
    if (local_20 < *(double *)(*(long *)(lVar3 + 8) + 8)) {
      lVar5 = lVar4;
    }
    return lVar5;
  }
  return lVar5;
}



/* EditorUndoRedoManager::get_current_action_name() */

void EditorUndoRedoManager::get_current_action_name(void)

{
  long lVar1;
  char cVar2;
  long lVar3;
  EditorUndoRedoManager *in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = has_undo(in_RSI);
  if (cVar2 != '\0') {
    lVar3 = _get_newest_undo(in_RSI);
    if (lVar3 != 0) {
      UndoRedo::get_current_action_name();
      goto LAB_00101d86;
    }
  }
  *(undefined8 *)in_RDI = 0;
  String::parse_latin1(in_RDI);
LAB_00101d86:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorUndoRedoManager::get_current_action_history_id() */

undefined4 __thiscall
EditorUndoRedoManager::get_current_action_history_id(EditorUndoRedoManager *this)

{
  char cVar1;
  undefined4 *puVar2;
  
  cVar1 = has_undo(this);
  if (cVar1 != '\0') {
    puVar2 = (undefined4 *)_get_newest_undo(this);
    if (puVar2 != (undefined4 *)0x0) {
      return *puVar2;
    }
  }
  return 0xffffff9d;
}



/* EditorUndoRedoManager::undo_history(int) */

undefined4 __thiscall EditorUndoRedoManager::undo_history(EditorUndoRedoManager *this,int param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  long *plVar8;
  undefined1 (*pauVar9) [16];
  long lVar10;
  long lVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  long in_FS_OFFSET;
  long local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == -99) {
    uVar4 = 0;
    _err_print_error("undo_history","editor/editor_undo_redo_manager.cpp",0x130,
                     "Condition \"p_id == INVALID_HISTORY\" is true. Returning: false",0,0);
    goto LAB_00101f62;
  }
  lVar6 = get_or_create_history(this,param_1);
  plVar8 = *(long **)(lVar6 + 0x18);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_68 = 0;
  puVar7 = (undefined4 *)plVar8[1];
  uVar4 = *puVar7;
  uVar1 = *(undefined8 *)(puVar7 + 2);
  if (*(long *)(puVar7 + 4) == 0) {
    uVar13 = puVar7[6];
    uVar12 = *(undefined1 *)(puVar7 + 7);
LAB_00102018:
    lVar11 = local_68;
    local_60 = uVar13;
    local_5c = uVar12;
    if (plVar8 == *(long **)(puVar7 + 0xc)) {
      lVar10 = *(long *)(puVar7 + 8);
      if ((undefined4 *)*plVar8 == puVar7) {
        *plVar8 = lVar10;
      }
      lVar2 = *(long *)(puVar7 + 10);
      plVar8[1] = lVar2;
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x20) = lVar10;
        lVar10 = *(long *)(puVar7 + 8);
      }
      if (lVar10 != 0) {
        *(long *)(lVar10 + 0x28) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 4));
      Memory::free_static(puVar7,false);
      *(int *)(plVar8 + 2) = (int)plVar8[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    if (*(int *)((long)*(void **)(lVar6 + 0x18) + 0x10) == 0) {
      Memory::free_static(*(void **)(lVar6 + 0x18),false);
      *(undefined8 *)(lVar6 + 0x18) = 0;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(puVar7 + 4));
    uVar13 = puVar7[6];
    uVar12 = *(undefined1 *)(puVar7 + 7);
    plVar8 = *(long **)(lVar6 + 0x18);
    lVar11 = local_68;
    local_60 = uVar13;
    local_5c = uVar12;
    if ((plVar8 != (long *)0x0) && (puVar7 = (undefined4 *)plVar8[1], puVar7 != (undefined4 *)0x0))
    goto LAB_00102018;
  }
  if (*(long *)(lVar6 + 0x20) == 0) {
    pauVar9 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])(lVar6 + 0x20) = pauVar9;
    *(undefined4 *)pauVar9[1] = 0;
    *pauVar9 = (undefined1  [16])0x0;
  }
  puVar7 = (undefined4 *)operator_new(0x38,DefaultAllocator::alloc);
  *(undefined8 *)(puVar7 + 4) = 0;
  puVar7[6] = 0;
  *(undefined1 *)(puVar7 + 7) = 0;
  *(undefined8 *)(puVar7 + 0xc) = 0;
  *puVar7 = uVar4;
  *(undefined1 (*) [16])(puVar7 + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(puVar7 + 2) = uVar1;
  if (lVar11 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 4),(CowData *)&local_68);
  }
  plVar8 = *(long **)(lVar6 + 0x20);
  puVar7[6] = uVar13;
  *(undefined1 *)(puVar7 + 7) = uVar12;
  lVar6 = plVar8[1];
  *(undefined8 *)(puVar7 + 8) = 0;
  *(long **)(puVar7 + 0xc) = plVar8;
  *(long *)(puVar7 + 10) = lVar6;
  if (lVar6 != 0) {
    *(undefined4 **)(lVar6 + 0x20) = puVar7;
  }
  plVar8[1] = (long)puVar7;
  if (*plVar8 == 0) {
    *plVar8 = (long)puVar7;
  }
  *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
  uVar4 = UndoRedo::undo();
  if ((char)uVar4 != '\0') {
    if (undo_history(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&undo_history(int)::{lambda()#1}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&undo_history(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&undo_history(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&undo_history(int)::{lambda()#1}::operator()()::sname);
      }
    }
    local_58 = 0;
    local_50 = (undefined1  [16])0x0;
    (**(code **)(*(long *)this + 0xd0))
              (this,&undo_history(int)::{lambda()#1}::operator()()::sname,0,0);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_00101f62:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorUndoRedoManager::undo() */

undefined8 __thiscall EditorUndoRedoManager::undo(EditorUndoRedoManager *this)

{
  char cVar1;
  int *piVar2;
  undefined8 uVar3;
  
  cVar1 = has_undo(this);
  if (cVar1 != '\0') {
    piVar2 = (int *)_get_newest_undo(this);
    if (piVar2 != (int *)0x0) {
      uVar3 = undo_history(this,*piVar2);
      return uVar3;
    }
  }
  return 0;
}



/* EditorUndoRedoManager::redo_history(int) */

undefined4 __thiscall EditorUndoRedoManager::redo_history(EditorUndoRedoManager *this,int param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  long *plVar8;
  undefined1 (*pauVar9) [16];
  long lVar10;
  long lVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  long in_FS_OFFSET;
  long local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == -99) {
    uVar4 = 0;
    _err_print_error("redo_history","editor/editor_undo_redo_manager.cpp",0x165,
                     "Condition \"p_id == INVALID_HISTORY\" is true. Returning: false",0,0);
    goto LAB_00102392;
  }
  lVar6 = get_or_create_history(this,param_1);
  plVar8 = *(long **)(lVar6 + 0x20);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_68 = 0;
  puVar7 = (undefined4 *)plVar8[1];
  uVar4 = *puVar7;
  uVar1 = *(undefined8 *)(puVar7 + 2);
  if (*(long *)(puVar7 + 4) == 0) {
    uVar13 = puVar7[6];
    uVar12 = *(undefined1 *)(puVar7 + 7);
LAB_00102448:
    lVar11 = local_68;
    local_60 = uVar13;
    local_5c = uVar12;
    if (plVar8 == *(long **)(puVar7 + 0xc)) {
      lVar10 = *(long *)(puVar7 + 8);
      if ((undefined4 *)*plVar8 == puVar7) {
        *plVar8 = lVar10;
      }
      lVar2 = *(long *)(puVar7 + 10);
      plVar8[1] = lVar2;
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x20) = lVar10;
        lVar10 = *(long *)(puVar7 + 8);
      }
      if (lVar10 != 0) {
        *(long *)(lVar10 + 0x28) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 4));
      Memory::free_static(puVar7,false);
      *(int *)(plVar8 + 2) = (int)plVar8[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    if (*(int *)((long)*(void **)(lVar6 + 0x20) + 0x10) == 0) {
      Memory::free_static(*(void **)(lVar6 + 0x20),false);
      *(undefined8 *)(lVar6 + 0x20) = 0;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(puVar7 + 4));
    uVar13 = puVar7[6];
    uVar12 = *(undefined1 *)(puVar7 + 7);
    plVar8 = *(long **)(lVar6 + 0x20);
    lVar11 = local_68;
    local_60 = uVar13;
    local_5c = uVar12;
    if ((plVar8 != (long *)0x0) && (puVar7 = (undefined4 *)plVar8[1], puVar7 != (undefined4 *)0x0))
    goto LAB_00102448;
  }
  if (*(long *)(lVar6 + 0x18) == 0) {
    pauVar9 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])(lVar6 + 0x18) = pauVar9;
    *(undefined4 *)pauVar9[1] = 0;
    *pauVar9 = (undefined1  [16])0x0;
  }
  puVar7 = (undefined4 *)operator_new(0x38,DefaultAllocator::alloc);
  *(undefined8 *)(puVar7 + 4) = 0;
  puVar7[6] = 0;
  *(undefined1 *)(puVar7 + 7) = 0;
  *(undefined8 *)(puVar7 + 0xc) = 0;
  *puVar7 = uVar4;
  *(undefined1 (*) [16])(puVar7 + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(puVar7 + 2) = uVar1;
  if (lVar11 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 4),(CowData *)&local_68);
  }
  plVar8 = *(long **)(lVar6 + 0x18);
  puVar7[6] = uVar13;
  *(undefined1 *)(puVar7 + 7) = uVar12;
  lVar6 = plVar8[1];
  *(undefined8 *)(puVar7 + 8) = 0;
  *(long **)(puVar7 + 0xc) = plVar8;
  *(long *)(puVar7 + 10) = lVar6;
  if (lVar6 != 0) {
    *(undefined4 **)(lVar6 + 0x20) = puVar7;
  }
  plVar8[1] = (long)puVar7;
  if (*plVar8 == 0) {
    *plVar8 = (long)puVar7;
  }
  *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
  uVar4 = UndoRedo::redo();
  if ((char)uVar4 != '\0') {
    if (redo_history(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&redo_history(int)::{lambda()#1}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&redo_history(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&redo_history(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&redo_history(int)::{lambda()#1}::operator()()::sname);
      }
    }
    local_58 = 0;
    local_50 = (undefined1  [16])0x0;
    (**(code **)(*(long *)this + 0xd0))
              (this,&redo_history(int)::{lambda()#1}::operator()()::sname,0,0);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_00102392:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorUndoRedoManager::redo() */

undefined8 __thiscall EditorUndoRedoManager::redo(EditorUndoRedoManager *this)

{
  double *pdVar1;
  double dVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  int iVar8;
  double dVar9;
  
  cVar4 = has_redo(this);
  if (cVar4 != '\0') {
    piVar6 = (int *)get_or_create_history(this,0);
    lVar3 = *(long *)(piVar6 + 8);
    dVar9 = _LC54;
    if (lVar3 == 0) {
      iVar8 = -99;
    }
    else if (*(int *)(lVar3 + 0x10) == 0) {
      iVar8 = -99;
    }
    else {
      iVar8 = *piVar6;
      dVar9 = *(double *)(*(long *)(lVar3 + 8) + 8);
    }
    piVar6 = (int *)get_or_create_history(this,-9);
    lVar3 = *(long *)(piVar6 + 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) != 0)) &&
       (dVar2 = *(double *)(*(long *)(lVar3 + 8) + 8), dVar2 < dVar9)) {
      iVar8 = *piVar6;
      dVar9 = dVar2;
    }
    iVar5 = EditorData::get_current_edited_scene_history_id();
    piVar6 = (int *)get_or_create_history(this,iVar5);
    lVar3 = *(long *)(piVar6 + 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) != 0)) &&
       (pdVar1 = (double *)(*(long *)(lVar3 + 8) + 8), *pdVar1 <= dVar9 && dVar9 != *pdVar1)) {
      iVar8 = *piVar6;
    }
    if (iVar8 != -99) {
      uVar7 = redo_history(this,iVar8);
      return uVar7;
    }
  }
  return 0;
}



/* EditorUndoRedoManager::create_action(String const&, UndoRedo::MergeMode, Object*, bool) */

void __thiscall
EditorUndoRedoManager::create_action
          (EditorUndoRedoManager *this,CowData *param_1,undefined4 param_3,Object *param_4,
          EditorUndoRedoManager param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if (*(int *)(this + 0x1a8) == -99) {
    if (*(long *)(this + 0x1b8) != *(long *)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x1b8),param_1);
    }
    plVar2 = (long *)OS::get_singleton();
    uVar3 = (**(code **)(*plVar2 + 0x1f0))(plVar2);
    *(undefined4 *)(this + 0x1c0) = param_3;
    this[0x1c4] = param_5;
    *(undefined8 *)(this + 0x1b0) = uVar3;
  }
  else {
    lVar1 = get_or_create_history(this,*(int *)(this + 0x1a8));
    UndoRedo::create_action
              (*(undefined8 *)(lVar1 + 8),this + 0x1b8,*(undefined4 *)(this + 0x1c0),this[0x1c4]);
  }
  if (param_4 != (Object *)0x0) {
    get_history_for_object(this,param_4);
    return;
  }
  return;
}



/* EditorUndoRedoManager::clear_history(int, bool) */

void __thiscall
EditorUndoRedoManager::clear_history(EditorUndoRedoManager *this,int param_1,bool param_2)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  undefined1 *puVar10;
  long *plVar11;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == -99) {
    puVar2 = *(undefined8 **)(this + 400);
    while (puVar2 != (undefined8 *)0x0) {
      UndoRedo::clear_history(SUB81(puVar2[4],0));
      lVar6 = get_or_create_history(this,*(int *)(puVar2 + 2));
      uVar7 = UndoRedo::get_version();
      puVar2 = (undefined8 *)*puVar2;
      *(undefined8 *)(lVar6 + 0x10) = uVar7;
    }
    pcVar9 = (char *)&clear_history(int,bool)::{lambda()#2}::operator()()::sname;
    if (clear_history(int,bool)::{lambda()#2}::operator()()::sname != '\0') goto LAB_00102889;
    puVar10 = &clear_history(int,bool)::{lambda()#2}::operator()()::sname;
    pcVar9 = (char *)&clear_history(int,bool)::{lambda()#2}::operator()()::sname;
    iVar5 = __cxa_guard_acquire(&clear_history(int,bool)::{lambda()#2}::operator()()::sname);
  }
  else {
    lVar6 = get_or_create_history(this,param_1);
    UndoRedo::clear_history(SUB81(*(undefined8 *)(lVar6 + 8),0));
    plVar11 = *(long **)(lVar6 + 0x18);
    if (plVar11 != (long *)0x0) {
      do {
        pvVar3 = (void *)*plVar11;
        if (pvVar3 == (void *)0x0) goto LAB_001029db;
        if (*(long **)((long)pvVar3 + 0x30) == plVar11) {
          lVar8 = *(long *)((long)pvVar3 + 0x20);
          lVar4 = *(long *)((long)pvVar3 + 0x28);
          *plVar11 = lVar8;
          if (pvVar3 == (void *)plVar11[1]) {
            plVar11[1] = lVar4;
          }
          if (lVar4 != 0) {
            *(long *)(lVar4 + 0x20) = lVar8;
            lVar8 = *(long *)((long)pvVar3 + 0x20);
          }
          if (lVar8 != 0) {
            *(long *)(lVar8 + 0x28) = lVar4;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
          Memory::free_static(pvVar3,false);
          *(int *)(plVar11 + 2) = (int)plVar11[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        plVar11 = *(long **)(lVar6 + 0x18);
      } while ((int)plVar11[2] != 0);
      Memory::free_static(plVar11,false);
      *(undefined8 *)(lVar6 + 0x18) = 0;
    }
LAB_001029db:
    plVar11 = *(long **)(lVar6 + 0x20);
    if (plVar11 != (long *)0x0) {
      do {
        pvVar3 = (void *)*plVar11;
        if (pvVar3 == (void *)0x0) goto LAB_00102a57;
        if (*(long **)((long)pvVar3 + 0x30) == plVar11) {
          lVar8 = *(long *)((long)pvVar3 + 0x20);
          lVar4 = *(long *)((long)pvVar3 + 0x28);
          *plVar11 = lVar8;
          if (pvVar3 == (void *)plVar11[1]) {
            plVar11[1] = lVar4;
          }
          if (lVar4 != 0) {
            *(long *)(lVar4 + 0x20) = lVar8;
            lVar8 = *(long *)((long)pvVar3 + 0x20);
          }
          if (lVar8 != 0) {
            *(long *)(lVar8 + 0x28) = lVar4;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
          Memory::free_static(pvVar3,false);
          *(int *)(plVar11 + 2) = (int)plVar11[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        plVar11 = *(long **)(lVar6 + 0x20);
      } while ((int)plVar11[2] != 0);
      Memory::free_static(plVar11,false);
      *(undefined8 *)(lVar6 + 0x20) = 0;
    }
LAB_00102a57:
    if (!param_2) {
      lVar6 = get_or_create_history(this,param_1);
      uVar7 = UndoRedo::get_version();
      *(undefined8 *)(lVar6 + 0x10) = uVar7;
    }
    pcVar9 = (char *)&clear_history(int,bool)::{lambda()#1}::operator()()::sname;
    if (clear_history(int,bool)::{lambda()#1}::operator()()::sname != '\0') goto LAB_00102889;
    puVar10 = &clear_history(int,bool)::{lambda()#1}::operator()()::sname;
    pcVar9 = (char *)&clear_history(int,bool)::{lambda()#1}::operator()()::sname;
    iVar5 = __cxa_guard_acquire(&clear_history(int,bool)::{lambda()#1}::operator()()::sname);
  }
  if (iVar5 != 0) {
    _scs_create(pcVar9,true);
    __cxa_atexit(StringName::~StringName,pcVar9,&__dso_handle);
    __cxa_guard_release(puVar10);
  }
LAB_00102889:
  (**(code **)(*(long *)this + 0xd0))(this,pcVar9,0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorUndoRedoManager::commit_action(bool) */

void EditorUndoRedoManager::commit_action(bool param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined7 in_register_00000039;
  EditorUndoRedoManager *this;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  this = (EditorUndoRedoManager *)CONCAT71(in_register_00000039,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x1a8) != -99) {
    *(undefined2 *)(this + 0x1c8) = 0x100;
    piVar6 = (int *)get_or_create_history(this,*(int *)(this + 0x1a8));
    cVar4 = UndoRedo::is_merging();
    UndoRedo::commit_action(SUB81(*(undefined8 *)(piVar6 + 2),0));
    plVar9 = *(long **)(piVar6 + 8);
    if (plVar9 != (long *)0x0) {
      do {
        pvVar1 = (void *)*plVar9;
        if (pvVar1 == (void *)0x0) goto LAB_00102c22;
        if (*(long **)((long)pvVar1 + 0x30) == plVar9) {
          lVar7 = *(long *)((long)pvVar1 + 0x20);
          lVar8 = *(long *)((long)pvVar1 + 0x28);
          *plVar9 = lVar7;
          if (pvVar1 == (void *)plVar9[1]) {
            plVar9[1] = lVar8;
          }
          if (lVar8 != 0) {
            *(long *)(lVar8 + 0x20) = lVar7;
            lVar7 = *(long *)((long)pvVar1 + 0x20);
          }
          if (lVar7 != 0) {
            *(long *)(lVar7 + 0x28) = lVar8;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x10));
          Memory::free_static(pvVar1,false);
          *(int *)(plVar9 + 2) = (int)plVar9[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        plVar9 = *(long **)(piVar6 + 8);
      } while ((int)plVar9[2] != 0);
      Memory::free_static(plVar9,false);
      piVar6[8] = 0;
      piVar6[9] = 0;
    }
LAB_00102c22:
    iVar5 = UndoRedo::get_action_level();
    if (iVar5 < 1) {
      if (cVar4 == '\0') {
        List<EditorUndoRedoManager::Action,DefaultAllocator>::push_back
                  ((List<EditorUndoRedoManager::Action,DefaultAllocator> *)(piVar6 + 6),
                   (Action *)(this + 0x1a8));
      }
      if (*piVar6 == 0) {
        for (puVar2 = *(undefined8 **)(this + 400); puVar2 != (undefined8 *)0x0;
            puVar2 = (undefined8 *)*puVar2) {
          if (*(int *)(puVar2 + 2) != 0) {
            plVar9 = (long *)puVar2[7];
            if (plVar9 != (long *)0x0) {
              do {
                pvVar1 = (void *)*plVar9;
                if (pvVar1 == (void *)0x0) goto LAB_00102cec;
                if (plVar9 == *(long **)((long)pvVar1 + 0x30)) {
                  lVar7 = *(long *)((long)pvVar1 + 0x20);
                  lVar8 = *(long *)((long)pvVar1 + 0x28);
                  *plVar9 = lVar7;
                  if (pvVar1 == (void *)plVar9[1]) {
                    plVar9[1] = lVar8;
                  }
                  if (lVar8 != 0) {
                    *(long *)(lVar8 + 0x20) = lVar7;
                    lVar7 = *(long *)((long)pvVar1 + 0x20);
                  }
                  if (lVar7 != 0) {
                    *(long *)(lVar7 + 0x28) = lVar8;
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x10));
                  Memory::free_static(pvVar1,false);
                  *(int *)(plVar9 + 2) = (int)plVar9[2] + -1;
                }
                else {
                  _err_print_error("erase","./core/templates/list.h",0xe7,
                                   "Condition \"p_I->data != this\" is true. Returning: false",0,0);
                }
                plVar9 = (long *)puVar2[7];
              } while ((int)plVar9[2] != 0);
              Memory::free_static(plVar9,false);
              puVar2[7] = 0;
            }
LAB_00102cec:
            UndoRedo::discard_redo();
          }
        }
      }
      else {
        lVar7 = get_or_create_history(this,0);
        plVar9 = *(long **)(lVar7 + 0x20);
        if (plVar9 != (long *)0x0) {
          do {
            pvVar1 = (void *)*plVar9;
            if (pvVar1 == (void *)0x0) goto LAB_00102f7b;
            if (plVar9 == *(long **)((long)pvVar1 + 0x30)) {
              lVar8 = *(long *)((long)pvVar1 + 0x20);
              lVar3 = *(long *)((long)pvVar1 + 0x28);
              *plVar9 = lVar8;
              if (pvVar1 == (void *)plVar9[1]) {
                plVar9[1] = lVar3;
              }
              if (lVar3 != 0) {
                *(long *)(lVar3 + 0x20) = lVar8;
                lVar8 = *(long *)((long)pvVar1 + 0x20);
              }
              if (lVar8 != 0) {
                *(long *)(lVar8 + 0x28) = lVar3;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x10));
              Memory::free_static(pvVar1,false);
              *(int *)(plVar9 + 2) = (int)plVar9[2] + -1;
            }
            else {
              _err_print_error("erase","./core/templates/list.h",0xe7,
                               "Condition \"p_I->data != this\" is true. Returning: false",0,0);
            }
            plVar9 = *(long **)(lVar7 + 0x20);
          } while ((int)plVar9[2] != 0);
          Memory::free_static(plVar9,false);
          *(undefined8 *)(lVar7 + 0x20) = 0;
        }
LAB_00102f7b:
        UndoRedo::discard_redo();
      }
      local_50 = 0;
      local_4c = 0;
      local_58 = 0;
      *(undefined4 *)(this + 0x1a8) = 0xffffff9d;
      *(undefined8 *)(this + 0x1b0) = 0;
      if (*(long *)(this + 0x1b8) != 0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x1b8));
        *(undefined8 *)(this + 0x1b8) = 0;
      }
      *(undefined4 *)(this + 0x1c0) = 0;
      this[0x1c4] = (EditorUndoRedoManager)0x0;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      this[0x1c9] = (EditorUndoRedoManager)0x0;
      if ((commit_action(bool)::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar5 = __cxa_guard_acquire(&commit_action(bool)::{lambda()#1}::operator()()::sname),
         iVar5 != 0)) {
        _scs_create((char *)&commit_action(bool)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&commit_action(bool)::{lambda()#1}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&commit_action(bool)::{lambda()#1}::operator()()::sname);
      }
      local_48 = 0;
      local_40 = (undefined1  [16])0x0;
      (**(code **)(*(long *)this + 0xd0))
                (this,&commit_action(bool)::{lambda()#1}::operator()()::sname,0,0);
      if (Variant::needs_deinit[(int)local_48] != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      this[0x1c9] = (EditorUndoRedoManager)0x0;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorUndoRedoManager::_bind_methods() */

void EditorUndoRedoManager::_bind_methods(void)

{
  long *plVar1;
  Variant *pVVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  MethodBind *pMVar6;
  uint uVar7;
  Variant *pVVar8;
  long in_FS_OFFSET;
  undefined8 local_288;
  long local_280;
  long local_278;
  long local_270;
  long local_268;
  long local_260;
  long local_258;
  undefined8 local_250;
  long local_248;
  int local_240;
  undefined8 local_238;
  undefined4 local_230;
  long local_228 [2];
  long lStack_218;
  long lStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8 [2];
  undefined8 local_1d8;
  undefined8 local_1d0;
  long local_1c0;
  undefined *local_1b8;
  char *pcStack_1b0;
  undefined8 local_1a8;
  undefined *local_198;
  char *pcStack_190;
  char *local_188;
  undefined8 local_180;
  undefined *local_178;
  char *pcStack_170;
  char *local_168;
  undefined8 local_160;
  undefined *local_158;
  char *pcStack_150;
  char *local_148;
  char *pcStack_140;
  undefined8 local_138;
  Variant *local_128;
  Variant *pVStack_120;
  Variant *local_118;
  char **ppcStack_110;
  Variant local_f8 [24];
  Variant local_e0 [24];
  undefined8 local_c8;
  undefined1 local_c0 [16];
  Variant local_b0 [8];
  Variant *local_a8;
  undefined1 auStack_a0 [16];
  int local_90 [2];
  undefined1 local_88 [16];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  puVar4 = PTR__LC71_0010f8f8;
  puVar3 = PTR__LC69_0010f8f0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_138 = 0;
  local_128 = (Variant *)&local_158;
  local_158 = &_LC73;
  pcStack_150 = "merge_mode";
  local_148 = "custom_context";
  pcStack_140 = "backward_undo_ops";
  pVStack_120 = (Variant *)&pcStack_150;
  local_118 = (Variant *)&local_148;
  ppcStack_110 = &pcStack_140;
  D_METHODP((char *)local_228,(char ***)"create_action",(uint)&local_128);
  Variant::Variant((Variant *)&local_a8,0);
  Variant::Variant((Variant *)local_90,(Object *)0x0);
  Variant::Variant(local_78,false);
  pVVar8 = local_48;
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_128 = (Variant *)&local_a8;
  pVStack_120 = (Variant *)local_90;
  local_118 = local_78;
  pMVar6 = create_method_bind<EditorUndoRedoManager,String_const&,UndoRedo::MergeMode,Object*,bool>
                     (create_action);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_228,&local_128,3);
  do {
    pVVar2 = pVVar8 + -0x18;
    pVVar8 = pVVar8 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar8 != (Variant *)&local_a8);
  CowData<StringName>::_unref((CowData<StringName> *)&lStack_218);
  if ((StringName::configured != '\0') && (local_228[0] != 0)) {
    StringName::unref();
  }
  local_128 = (Variant *)0x1057cf;
  pVStack_120 = (Variant *)0x0;
  uVar7 = (uint)(Variant *)&local_a8;
  local_a8 = (Variant *)&local_128;
  D_METHODP((char *)local_228,(char ***)"commit_action",uVar7);
  Variant::Variant((Variant *)&local_a8,true);
  local_88 = (undefined1  [16])0x0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_128 = (Variant *)&local_a8;
  pMVar6 = create_method_bind<EditorUndoRedoManager,bool>(commit_action);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_228,&local_128,1);
  if (Variant::needs_deinit[local_90[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&lStack_218);
  if ((StringName::configured != '\0') && (local_228[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_228,(char ***)"is_committing_action",0);
  auStack_a0 = (undefined1  [16])0x0;
  local_a8 = (Variant *)0x0;
  pMVar6 = create_method_bind<EditorUndoRedoManager,bool>(is_committing_action);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_228,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&lStack_218);
  if ((StringName::configured != '\0') && (local_228[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_228,(char ***)"force_fixed_history",0);
  auStack_a0 = (undefined1  [16])0x0;
  local_a8 = (Variant *)0x0;
  pMVar6 = create_method_bind<EditorUndoRedoManager>(force_fixed_history);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_228,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&lStack_218);
  if ((StringName::configured != '\0') && (local_228[0] != 0)) {
    StringName::unref();
  }
  local_228[0] = 0;
  lStack_218 = 0;
  lStack_210 = 0;
  local_228[1] = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 6;
  local_1f0 = 1;
  local_1e8[0] = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c0 = 0;
  String::parse_latin1((String *)local_228,"add_do_method");
  local_260 = 0;
  local_268 = 0;
  String::parse_latin1((String *)&local_268,"");
  local_270 = 0;
  String::parse_latin1((String *)&local_270,"object");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_258,0x18,(String *)&local_270,0,(String *)&local_268,6,
             (StringName *)&local_260);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_1e8,(PropertyInfo *)&local_258);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_258);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_270);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  if ((StringName::configured != '\0') && (local_260 != 0)) {
    StringName::unref();
  }
  local_268 = 0;
  local_270 = 0;
  String::parse_latin1((String *)&local_270,"");
  local_278 = 0;
  String::parse_latin1((String *)&local_278,"method");
  local_258 = CONCAT44(local_258._4_4_,0x15);
  local_250 = 0;
  if (local_278 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_250,(CowData *)&local_278);
  }
  local_248 = 0;
  local_240 = 0;
  local_238 = 0;
  if (local_270 == 0) {
LAB_0010376b:
    local_230 = 6;
    StringName::operator=((StringName *)&local_248,(StringName *)&local_268);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_238,(CowData *)&local_270);
    local_230 = 6;
    if (local_240 != 0x11) goto LAB_0010376b;
    StringName::StringName((StringName *)&local_260,(String *)&local_238,false);
    if (local_248 == local_260) {
      if ((StringName::configured != '\0') && (local_260 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_248 = local_260;
    }
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_1e8,(PropertyInfo *)&local_258);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_258);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_270);
  if ((StringName::configured != '\0') && (local_268 != 0)) {
    StringName::unref();
  }
  local_250 = 0;
  StringName::StringName((StringName *)&local_270,"add_do_method",false);
  _global_lock();
  pMVar6 = (MethodBind *)operator_new(0xd8,"");
  MethodBindVarArgBase<MethodBindVarArgT<EditorUndoRedoManager>,EditorUndoRedoManager,void,false>::
  MethodBindVarArgBase
            ((_func_void_Variant_ptr_ptr_int_CallError_ptr *)pMVar6,(MethodInfo *)_add_do_method,
             false);
  *(undefined ***)pMVar6 = &PTR__gen_argument_type_0010f3b8;
  local_268 = 0;
  String::parse_latin1((String *)&local_268,"EditorUndoRedoManager");
  StringName::StringName((StringName *)&local_260,(String *)&local_268,false);
  StringName::operator=((StringName *)(pMVar6 + 0x18),(StringName *)&local_260);
  if ((StringName::configured == '\0') || (local_260 == 0)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  }
  else {
    StringName::unref();
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  }
  ClassDB::_bind_vararg_method(pMVar6,(StringName *)&local_270,(Vector *)&local_258,false);
  _global_unlock();
  if ((StringName::configured != '\0') && (local_270 != 0)) {
    StringName::unref();
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_250);
  lVar5 = local_1c0;
  if (local_1c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_1c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_1c0 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_1d8);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_1e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_200);
  if ((StringName::configured != '\0') && (lStack_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_218);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_228);
  lStack_218 = 0;
  lStack_210 = 0;
  local_228[0] = 0;
  local_228[1] = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 6;
  local_1f0 = 1;
  local_1e8[0] = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c0 = 0;
  String::parse_latin1((String *)local_228,"add_undo_method");
  local_268 = 0;
  local_270 = 0;
  String::parse_latin1((String *)&local_270,"");
  local_278 = 0;
  String::parse_latin1((String *)&local_278,"object");
  local_258 = CONCAT44(local_258._4_4_,0x18);
  local_250 = 0;
  if (local_278 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_250,(CowData *)&local_278);
  }
  local_248 = 0;
  local_240 = 0;
  local_238 = 0;
  if (local_270 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_238,(CowData *)&local_270);
    local_230 = 6;
    if (local_240 == 0x11) {
      StringName::StringName((StringName *)&local_260,(String *)&local_238,false);
      if (local_248 == local_260) {
        if ((StringName::configured != '\0') && (local_260 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_248 = local_260;
      }
      goto LAB_00103b0b;
    }
  }
  local_230 = 6;
  StringName::operator=((StringName *)&local_248,(StringName *)&local_268);
LAB_00103b0b:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_1e8,(PropertyInfo *)&local_258);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_258);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_270);
  if ((StringName::configured != '\0') && (local_268 != 0)) {
    StringName::unref();
  }
  local_260 = 0;
  local_268 = 0;
  String::parse_latin1((String *)&local_268,"");
  local_270 = 0;
  String::parse_latin1((String *)&local_270,"method");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_258,0x15,(String *)&local_270,0,(String *)&local_268,6,
             (StringName *)&local_260);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_1e8,(PropertyInfo *)&local_258);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_258);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_270);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  if ((StringName::configured != '\0') && (local_260 != 0)) {
    StringName::unref();
  }
  local_250 = 0;
  StringName::StringName((StringName *)&local_270,"add_undo_method",false);
  _global_lock();
  pMVar6 = (MethodBind *)operator_new(0xd8,"");
  MethodBindVarArgBase<MethodBindVarArgT<EditorUndoRedoManager>,EditorUndoRedoManager,void,false>::
  MethodBindVarArgBase
            ((_func_void_Variant_ptr_ptr_int_CallError_ptr *)pMVar6,(MethodInfo *)_add_undo_method,
             false);
  *(undefined ***)pMVar6 = &PTR__gen_argument_type_0010f3b8;
  local_268 = 0;
  String::parse_latin1((String *)&local_268,"EditorUndoRedoManager");
  StringName::StringName((StringName *)&local_260,(String *)&local_268,false);
  StringName::operator=((StringName *)(pMVar6 + 0x18),(StringName *)&local_260);
  if ((StringName::configured == '\0') || (local_260 == 0)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  }
  else {
    StringName::unref();
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  }
  ClassDB::_bind_vararg_method(pMVar6,(StringName *)&local_270,(Vector *)&local_258,false);
  _global_unlock();
  if ((StringName::configured != '\0') && (local_270 != 0)) {
    StringName::unref();
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_250);
  lVar5 = local_1c0;
  if (local_1c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_1c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_1c0 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_1d8);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_1e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_200);
  if ((StringName::configured != '\0') && (lStack_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_218);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_228);
  local_178 = puVar4;
  pcStack_170 = "property";
  auStack_a0._8_8_ = &local_168;
  auStack_a0._0_8_ = &pcStack_170;
  local_160 = 0;
  local_168 = "value";
  local_a8 = (Variant *)&local_178;
  D_METHODP((char *)local_228,(char ***)"add_do_property",uVar7);
  auStack_a0 = (undefined1  [16])0x0;
  local_a8 = (Variant *)0x0;
  pMVar6 = create_method_bind<EditorUndoRedoManager,Object*,StringName_const&,Variant_const&>
                     (add_do_property);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_228,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&lStack_218);
  if ((StringName::configured != '\0') && (local_228[0] != 0)) {
    StringName::unref();
  }
  local_198 = puVar4;
  pcStack_190 = "property";
  auStack_a0._8_8_ = &local_188;
  auStack_a0._0_8_ = &pcStack_190;
  local_180 = 0;
  local_188 = "value";
  local_a8 = (Variant *)&local_198;
  D_METHODP((char *)local_228,(char ***)"add_undo_property",uVar7);
  auStack_a0 = (undefined1  [16])0x0;
  local_a8 = (Variant *)0x0;
  pMVar6 = create_method_bind<EditorUndoRedoManager,Object*,StringName_const&,Variant_const&>
                     (add_undo_property);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_228,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&lStack_218);
  if ((StringName::configured != '\0') && (local_228[0] != 0)) {
    StringName::unref();
  }
  local_128 = (Variant *)0x105780;
  pVStack_120 = (Variant *)0x0;
  local_a8 = (Variant *)&local_128;
  D_METHODP((char *)local_228,(char ***)"add_do_reference",uVar7);
  auStack_a0 = (undefined1  [16])0x0;
  local_a8 = (Variant *)0x0;
  pMVar6 = create_method_bind<EditorUndoRedoManager,Object*>(add_do_reference);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_228,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&lStack_218);
  if ((StringName::configured != '\0') && (local_228[0] != 0)) {
    StringName::unref();
  }
  local_128 = (Variant *)0x105780;
  pVStack_120 = (Variant *)0x0;
  local_a8 = (Variant *)&local_128;
  D_METHODP((char *)local_228,(char ***)"add_undo_reference",uVar7);
  auStack_a0 = (undefined1  [16])0x0;
  local_a8 = (Variant *)0x0;
  pMVar6 = create_method_bind<EditorUndoRedoManager,Object*>(add_undo_reference);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_228,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&lStack_218);
  if ((StringName::configured != '\0') && (local_228[0] != 0)) {
    StringName::unref();
  }
  local_128 = (Variant *)0x105780;
  pVStack_120 = (Variant *)0x0;
  local_a8 = (Variant *)&local_128;
  D_METHODP((char *)local_228,(char ***)"get_object_history_id",uVar7);
  auStack_a0 = (undefined1  [16])0x0;
  local_a8 = (Variant *)0x0;
  pMVar6 = create_method_bind<EditorUndoRedoManager,int,Object*>(get_history_id_for_object);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_228,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&lStack_218);
  if ((StringName::configured != '\0') && (local_228[0] != 0)) {
    StringName::unref();
  }
  local_128 = (Variant *)&_LC69;
  pVStack_120 = (Variant *)0x0;
  local_a8 = (Variant *)&local_128;
  D_METHODP((char *)local_228,(char ***)"get_history_undo_redo",uVar7);
  auStack_a0 = (undefined1  [16])0x0;
  local_a8 = (Variant *)0x0;
  pMVar6 = create_method_bind<EditorUndoRedoManager,UndoRedo*,int>(get_history_undo_redo);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_228,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&lStack_218);
  if ((StringName::configured != '\0') && (local_228[0] != 0)) {
    StringName::unref();
  }
  local_1a8 = 0;
  local_1b8 = puVar3;
  pcStack_1b0 = "increase_version";
  local_a8 = (Variant *)&local_1b8;
  auStack_a0._0_8_ = &pcStack_1b0;
  D_METHODP((char *)local_228,(char ***)"clear_history",uVar7);
  Variant::Variant(local_f8,-99);
  Variant::Variant(local_e0,true);
  local_c0 = (undefined1  [16])0x0;
  auStack_a0._0_8_ = local_e0;
  local_c8 = 0;
  local_a8 = local_f8;
  pMVar6 = create_method_bind<EditorUndoRedoManager,int,bool>(clear_history);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)local_228,&local_a8,2);
  pVVar8 = local_b0;
  do {
    pVVar2 = pVVar8 + -0x18;
    pVVar8 = pVVar8 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar8 != local_f8);
  CowData<StringName>::_unref((CowData<StringName> *)&lStack_218);
  if ((StringName::configured != '\0') && (local_228[0] != 0)) {
    StringName::unref();
  }
  local_260 = 0;
  String::parse_latin1((String *)&local_260,"history_changed");
  lStack_218 = 0;
  lStack_210 = 0;
  local_228[0] = 0;
  local_228[1] = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 6;
  local_1f0 = 1;
  local_1e8[0] = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)local_228,(CowData *)&local_260);
  local_268 = 0;
  String::parse_latin1((String *)&local_268,"EditorUndoRedoManager");
  StringName::StringName((StringName *)&local_258,(String *)&local_268,false);
  ClassDB::add_signal((StringName *)&local_258,(MethodInfo *)local_228);
  if ((StringName::configured != '\0') && (local_258 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  lVar5 = local_1c0;
  if (local_1c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_1c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_1c0 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_1d8);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_1e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_200);
  if ((StringName::configured != '\0') && (lStack_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_218);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_228);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_260);
  local_260 = 0;
  String::parse_latin1((String *)&local_260,"version_changed");
  lStack_218 = 0;
  lStack_210 = 0;
  local_228[0] = 0;
  local_228[1] = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 6;
  local_1f0 = 1;
  local_1e8[0] = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)local_228,(CowData *)&local_260);
  local_268 = 0;
  String::parse_latin1((String *)&local_268,"EditorUndoRedoManager");
  StringName::StringName((StringName *)&local_258,(String *)&local_268,false);
  ClassDB::add_signal((StringName *)&local_258,(MethodInfo *)local_228);
  if ((StringName::configured != '\0') && (local_258 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  lVar5 = local_1c0;
  if (local_1c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_1c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_1c0 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_1d8);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_1e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_200);
  if ((StringName::configured != '\0') && (lStack_210 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_218);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_228);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_260);
  StringName::StringName((StringName *)&local_280,"GLOBAL_HISTORY",false);
  local_288 = 0;
  String::parse_latin1((String *)&local_288,"GLOBAL_HISTORY");
  local_268 = 0;
  String::parse_latin1((String *)&local_268,"EditorUndoRedoManager::SpecialHistory");
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_260,(String *)&local_268)
  ;
  StringName::StringName((StringName *)&local_258,(String *)&local_260,false);
  local_270 = 0;
  local_278 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_228,2,(String *)&local_278,0,(String *)&local_270,0x10006,
             (PropertyInfo *)&local_258);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_270);
  if ((StringName::configured != '\0') && (local_258 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_260);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  local_258 = lStack_218;
  lStack_218 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_228);
  local_260 = 0;
  String::parse_latin1((String *)&local_260,"EditorUndoRedoManager");
  StringName::StringName((StringName *)local_228,(String *)&local_260,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_228,(StringName *)&local_258,(StringName *)&local_280,0,false);
  if ((StringName::configured != '\0') && (local_228[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_260);
  if ((StringName::configured != '\0') && (local_258 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  if ((StringName::configured != '\0') && (local_280 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_280,"REMOTE_HISTORY",false);
  local_288 = 0;
  String::parse_latin1((String *)&local_288,"REMOTE_HISTORY");
  local_268 = 0;
  String::parse_latin1((String *)&local_268,"EditorUndoRedoManager::SpecialHistory");
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_260,(String *)&local_268)
  ;
  StringName::StringName((StringName *)&local_258,(String *)&local_260,false);
  local_270 = 0;
  local_278 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_228,2,(String *)&local_278,0,(String *)&local_270,0x10006,
             (PropertyInfo *)&local_258);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_270);
  if ((StringName::configured != '\0') && (local_258 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_260);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  local_258 = lStack_218;
  lStack_218 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_228);
  local_260 = 0;
  String::parse_latin1((String *)&local_260,"EditorUndoRedoManager");
  StringName::StringName((StringName *)local_228,(String *)&local_260,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_228,(StringName *)&local_258,(StringName *)&local_280,-9,false);
  if ((StringName::configured != '\0') && (local_228[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_260);
  if ((StringName::configured != '\0') && (local_258 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  if ((StringName::configured != '\0') && (local_280 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_280,"INVALID_HISTORY",false);
  local_288 = 0;
  String::parse_latin1((String *)&local_288,"INVALID_HISTORY");
  local_268 = 0;
  String::parse_latin1((String *)&local_268,"EditorUndoRedoManager::SpecialHistory");
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_260,(String *)&local_268)
  ;
  StringName::StringName((StringName *)&local_258,(String *)&local_260,false);
  local_228[1] = 0;
  lStack_218 = 0;
  local_270 = 0;
  local_278 = 0;
  local_228[0] = 2;
  lStack_210 = 0;
  local_208 = 0;
  local_200 = CONCAT44(local_200._4_4_,0x10006);
  StringName::operator=((StringName *)&lStack_218,(StringName *)&local_258);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_270);
  if ((StringName::configured != '\0') && (local_258 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_260);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  local_258 = lStack_218;
  lStack_218 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_228);
  local_260 = 0;
  String::parse_latin1((String *)&local_260,"EditorUndoRedoManager");
  StringName::StringName((StringName *)local_228,(String *)&local_260,false);
  ClassDB::bind_integer_constant
            ((StringName *)local_228,(StringName *)&local_258,(StringName *)&local_280,-99,false);
  if ((StringName::configured != '\0') && (local_228[0] != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_260);
  if ((StringName::configured != '\0') && (local_258 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_288);
  if ((StringName::configured != '\0') && (local_280 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* Object::get_save_class() const */

void Object::get_save_class(void)

{
  long lVar1;
  long *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*in_RSI + 0x48))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* EditorUndoRedoManager::is_class_ptr(void*) const */

uint __thiscall EditorUndoRedoManager::is_class_ptr(EditorUndoRedoManager *this,void *param_1)

{
  return (uint)CONCAT71(0x10f6,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f6,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* EditorUndoRedoManager::_getv(StringName const&, Variant&) const */

undefined8 EditorUndoRedoManager::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorUndoRedoManager::_setv(StringName const&, Variant const&) */

undefined8 EditorUndoRedoManager::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorUndoRedoManager::_validate_propertyv(PropertyInfo&) const */

void EditorUndoRedoManager::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorUndoRedoManager::_property_can_revertv(StringName const&) const */

undefined8 EditorUndoRedoManager::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorUndoRedoManager::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorUndoRedoManager::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorUndoRedoManager::_notificationv(int, bool) */

void EditorUndoRedoManager::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindT<int, bool>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int,bool>::_gen_argument_type(MethodBindT<int,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = (param_1 == 0) + '\x01';
  if (1 < (uint)param_1) {
    cVar1 = '\0';
  }
  return cVar1;
}



/* MethodBindT<int, bool>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int,bool>::get_argument_meta(MethodBindT<int,bool> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<UndoRedo*, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<UndoRedo*,int>::_gen_argument_type(MethodBindTRC<UndoRedo*,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
}



/* MethodBindTRC<UndoRedo*, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<UndoRedo*,int>::get_argument_meta(MethodBindTRC<UndoRedo*,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<int, Object*>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<int,Object*>::_gen_argument_type(MethodBindTRC<int,Object*> *this,int param_1)

{
  return (-(param_1 == 0) & 0x16U) + 2;
}



/* MethodBindTRC<int, Object*>::get_argument_meta(int) const */

uint __thiscall
MethodBindTRC<int,Object*>::get_argument_meta(MethodBindTRC<int,Object*> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
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



/* MethodBindVarArgBase<MethodBindVarArgT<EditorUndoRedoManager>, EditorUndoRedoManager, void,
   false>::get_argument_meta(int) const */

undefined8
MethodBindVarArgBase<MethodBindVarArgT<EditorUndoRedoManager>,EditorUndoRedoManager,void,false>::
get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindVarArgBase<MethodBindVarArgT<EditorUndoRedoManager>, EditorUndoRedoManager, void,
   false>::is_vararg() const */

undefined8
MethodBindVarArgBase<MethodBindVarArgT<EditorUndoRedoManager>,EditorUndoRedoManager,void,false>::
is_vararg(void)

{
  return 1;
}



/* MethodBindVarArgBase<MethodBindVarArgT<EditorUndoRedoManager>, EditorUndoRedoManager, void,
   false>::is_const() const */

undefined8
MethodBindVarArgBase<MethodBindVarArgT<EditorUndoRedoManager>,EditorUndoRedoManager,void,false>::
is_const(void)

{
  return 0;
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



/* MethodBindT<String const&, UndoRedo::MergeMode, Object*, bool>::get_argument_meta(int) const */

undefined8
MethodBindT<String_const&,UndoRedo::MergeMode,Object*,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindVarArgBase<MethodBindVarArgT<EditorUndoRedoManager>, EditorUndoRedoManager, void,
   false>::ptrcall(Object*, void const**, void*) const */

void MethodBindVarArgBase<MethodBindVarArgT<EditorUndoRedoManager>,EditorUndoRedoManager,void,false>
     ::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  _err_print_error("ptrcall","./core/object/method_bind.h",0xb0,"Method/function failed.",
                   "ptrcall can\'t be used with vararg methods. This is a bug.",0,0);
  return;
}



/* MethodBindVarArgBase<MethodBindVarArgT<EditorUndoRedoManager>, EditorUndoRedoManager, void,
   false>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindVarArgBase<MethodBindVarArgT<EditorUndoRedoManager>,EditorUndoRedoManager,void,false>
     ::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  _err_print_error("validated_call","./core/object/method_bind.h",0xac,"Method/function failed.",
                   "Validated call can\'t be used with vararg methods. This is a bug.",0,0);
  return;
}



/* MethodBindT<String const&, UndoRedo::MergeMode, Object*, bool>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,UndoRedo::MergeMode,Object*,bool>::~MethodBindT
          (MethodBindT<String_const&,UndoRedo::MergeMode,Object*,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f1d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&, UndoRedo::MergeMode, Object*, bool>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,UndoRedo::MergeMode,Object*,bool>::~MethodBindT
          (MethodBindT<String_const&,UndoRedo::MergeMode,Object*,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f1d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f230;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f230;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f290;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f290;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f2f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f2f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Object*, StringName const&, Variant const&>::~MethodBindT() */

void __thiscall
MethodBindT<Object*,StringName_const&,Variant_const&>::~MethodBindT
          (MethodBindT<Object*,StringName_const&,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f420;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Object*, StringName const&, Variant const&>::~MethodBindT() */

void __thiscall
MethodBindT<Object*,StringName_const&,Variant_const&>::~MethodBindT
          (MethodBindT<Object*,StringName_const&,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f420;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Object*>::~MethodBindT() */

void __thiscall MethodBindT<Object*>::~MethodBindT(MethodBindT<Object*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f480;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Object*>::~MethodBindT() */

void __thiscall MethodBindT<Object*>::~MethodBindT(MethodBindT<Object*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f480;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int, Object*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,Object*>::~MethodBindTRC(MethodBindTRC<int,Object*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f4e0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int, Object*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,Object*>::~MethodBindTRC(MethodBindTRC<int,Object*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f4e0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<UndoRedo*, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<UndoRedo*,int>::~MethodBindTRC(MethodBindTRC<UndoRedo*,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f540;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<UndoRedo*, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<UndoRedo*,int>::~MethodBindTRC(MethodBindTRC<UndoRedo*,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f540;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f5a0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f5a0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&, UndoRedo::MergeMode, Object*, bool>::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindT<String_const&,UndoRedo::MergeMode,Object*,bool>::_gen_argument_type
          (MethodBindT<String_const&,UndoRedo::MergeMode,Object*,bool> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((((uint)param_1 < 4) && (uVar1 = 4, param_1 != 0)) && (uVar1 = 2, param_1 != 1)) &&
     (uVar1 = 1, param_1 == 2)) {
    uVar1 = 0x18;
  }
  return uVar1;
}



/* EditorUndoRedoManager::_get_class_namev() const */

undefined8 * EditorUndoRedoManager::_get_class_namev(void)

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
LAB_00105943:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105943;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorUndoRedoManager");
      goto LAB_001059ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorUndoRedoManager");
LAB_001059ae:
  return &_get_class_namev()::_class_name_static;
}



/* String::parse_latin1(char const*) */

void __thiscall String::parse_latin1(String *this,char *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (char *)0x0) {
    strlen(param_1);
  }
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall
PropertyInfo::PropertyInfo
          (PropertyInfo *this,undefined4 param_2,CowData *param_3,int param_4,CowData *param_5,
          undefined4 param_6,StringName *param_7)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  lVar1 = *(long *)param_3;
  *(undefined4 *)this = param_2;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
  }
  *(undefined8 *)(this + 0x20) = 0;
  lVar1 = *(long *)param_5;
  *(undefined8 *)(this + 0x10) = 0;
  *(int *)(this + 0x18) = param_4;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),param_5);
    param_4 = *(int *)(this + 0x18);
  }
  *(undefined4 *)(this + 0x28) = param_6;
  if (param_4 == 0x11) {
    StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
    if (*(long *)(this + 0x10) == local_48) {
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(long *)(this + 0x10) = local_48;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    StringName::operator=((StringName *)(this + 0x10),param_7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* EditorUndoRedoManager::get_class() const */

void EditorUndoRedoManager::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  long *plVar1;
  long lVar2;
  
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20));
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



/* WARNING: Removing unreachable block (ram,0x00105ee0) */
/* String vformat<int, int>(String const&, int const, int const) */

String * vformat<int,int>(String *param_1,int param_2,int param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int in_ECX;
  undefined4 in_register_00000034;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d0 [8];
  undefined8 local_c8 [8];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,in_ECX);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d0);
  iVar3 = (int)local_d0;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_c8,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_c8[0];
  local_c8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d0);
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
  String::split(local_58,SUB81(param_1,0),0x1056ff);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC19;
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
        goto LAB_001060fa;
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
  local_48 = &_LC19;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_001060fa:
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



/* MethodBindVarArgBase<MethodBindVarArgT<EditorUndoRedoManager>, EditorUndoRedoManager, void,
   false>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindVarArgBase<MethodBindVarArgT<EditorUndoRedoManager>,EditorUndoRedoManager,void,false>::
_gen_argument_type_info(int param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint in_EDX;
  undefined4 *puVar4;
  long in_RSI;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  CowData<char32_t> local_50 [8];
  long local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)in_EDX < 0) {
    *puVar5 = 0;
    puVar5[6] = 0;
    *(undefined8 *)(puVar5 + 8) = 0;
    puVar5[10] = 6;
    *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
    goto LAB_00106337;
  }
  puVar2 = *(undefined8 **)(in_RSI + 0xa8);
  if ((puVar2 == (undefined8 *)0x0) || (*(int *)(puVar2 + 2) <= (int)in_EDX)) {
    local_38 = 0;
    local_40 = 0;
    itos((long)local_50);
    operator+((char *)&local_48,(String *)&_LC32);
    *puVar5 = 0;
    *(undefined8 *)(puVar5 + 2) = 0;
    if (local_48 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_48);
    }
    puVar5[6] = 0;
    *(undefined8 *)(puVar5 + 4) = 0;
    *(undefined8 *)(puVar5 + 8) = 0;
    puVar5[10] = 0x20006;
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_38);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
    goto LAB_00106337;
  }
  puVar4 = (undefined4 *)*puVar2;
  if (in_EDX != 0) {
    uVar3 = 0;
    if ((in_EDX & 1) != 0) {
      puVar4 = *(undefined4 **)(puVar4 + 0xc);
      uVar3 = 1;
      if (in_EDX == 1) goto LAB_001062ef;
    }
    do {
      uVar3 = uVar3 + 2;
      puVar4 = *(undefined4 **)(*(long *)(puVar4 + 0xc) + 0x30);
    } while (in_EDX != uVar3);
  }
LAB_001062ef:
  uVar1 = *puVar4;
  *(undefined8 *)(puVar5 + 2) = 0;
  *puVar5 = uVar1;
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)(puVar4 + 2));
  StringName::StringName((StringName *)(puVar5 + 4),(StringName *)(puVar4 + 4));
  uVar1 = puVar4[6];
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[6] = uVar1;
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)(puVar4 + 8));
  puVar5[10] = puVar4[10];
LAB_00106337:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorUndoRedoManager::is_class(String const&) const */

undefined8 __thiscall EditorUndoRedoManager::is_class(EditorUndoRedoManager *this,String *param_1)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_001064df;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001064df:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00106593;
  }
  cVar6 = String::operator==(param_1,"EditorUndoRedoManager");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00106593;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_00106593:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<EditorUndoRedoManager::Action, DefaultAllocator>::clear() */

void __thiscall
List<EditorUndoRedoManager::Action,DefaultAllocator>::clear
          (List<EditorUndoRedoManager::Action,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 != (long *)0x0) {
    do {
      pvVar1 = (void *)*plVar4;
      if (pvVar1 == (void *)0x0) {
        return;
      }
      if (*(long **)((long)pvVar1 + 0x30) == plVar4) {
        lVar3 = *(long *)((long)pvVar1 + 0x20);
        lVar2 = *(long *)((long)pvVar1 + 0x28);
        *plVar4 = lVar3;
        if (pvVar1 == (void *)plVar4[1]) {
          plVar4[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x20) = lVar3;
          lVar3 = *(long *)((long)pvVar1 + 0x20);
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x28) = lVar2;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x10));
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
    *(undefined8 *)this = 0;
  }
  return;
}



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC30;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 1;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_001068a5;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_001068a5:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<EditorUndoRedoManager::Action, DefaultAllocator>::~List() */

void __thiscall
List<EditorUndoRedoManager::Action,DefaultAllocator>::~List
          (List<EditorUndoRedoManager::Action,DefaultAllocator> *this)

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
    if (*(long **)((long)pvVar1 + 0x30) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x20);
      lVar2 = *(long *)((long)pvVar1 + 0x28);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x20) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x20);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x28) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x10));
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, EditorUndoRedoManager::History, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, EditorUndoRedoManager::History> > >::operator[](int
   const&) */

undefined1 * __thiscall
HashMap<int,EditorUndoRedoManager::History,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorUndoRedoManager::History>>>
::operator[](HashMap<int,EditorUndoRedoManager::History,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorUndoRedoManager::History>>>
             *this,int *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *__s;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 (*pauVar23) [16];
  char cVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  undefined8 uVar29;
  void *__s_00;
  undefined1 (*pauVar30) [16];
  void *pvVar31;
  int iVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  undefined8 uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined1 (*pauVar40) [16];
  long in_FS_OFFSET;
  uint local_c0;
  uint local_bc [3];
  undefined8 local_b0;
  undefined8 local_a8;
  List<EditorUndoRedoManager::Action,DefaultAllocator> local_a0 [24];
  undefined1 local_88 [16];
  uint local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  List<EditorUndoRedoManager::Action,DefaultAllocator> local_58 [24];
  long local_40;
  
  uVar26 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = 0;
  cVar24 = _lookup_pos(this,(int *)(ulong)uVar26,&local_c0);
  if (cVar24 != '\0') {
    pauVar30 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_c0 * 8);
    goto LAB_00106f7f;
  }
  local_b0 = 0;
  local_bc[1] = 0xffffff9d;
  uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  local_a8 = 1;
  local_a0[0] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
  local_a0[1] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
  local_a0[2] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
  local_a0[3] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
  local_a0[4] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
  local_a0[5] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
  local_a0[6] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
  local_a0[7] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
  local_a0[8] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
  local_a0[9] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
  local_a0[10] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
  local_a0[0xb] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
  local_a0[0xc] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
  local_a0[0xd] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
  local_a0[0xe] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
  local_a0[0xf] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
  if (*(long *)(this + 8) == 0) {
    uVar35 = (ulong)uVar27;
    uVar28 = uVar35 * 4;
    uVar39 = uVar35 * 8;
    uVar29 = Memory::alloc_static(uVar28,false);
    *(undefined8 *)(this + 0x10) = uVar29;
    pvVar31 = (void *)Memory::alloc_static(uVar39,false);
    *(void **)(this + 8) = pvVar31;
    if (uVar27 != 0) {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)pvVar31 + uVar39)) && (pvVar31 < (void *)((long)pvVar4 + uVar28))
         ) {
        uVar28 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar28 * 4) = 0;
          *(undefined8 *)((long)pvVar31 + uVar28 * 8) = 0;
          uVar28 = uVar28 + 1;
        } while (uVar35 != uVar28);
      }
      else {
        memset(pvVar4,0,uVar28);
        memset(pvVar31,0,uVar39);
      }
    }
    uVar26 = *param_1;
  }
  local_bc[0] = 0;
  cVar24 = _lookup_pos(this,(int *)(ulong)uVar26,local_bc);
  if (cVar24 == '\0') {
    if ((float)uVar27 * __LC39 < (float)(*(int *)(this + 0x2c) + 1)) {
      uVar26 = *(uint *)(this + 0x28);
      if (uVar26 == 0x1c) {
        pauVar30 = (undefined1 (*) [16])0x0;
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        goto LAB_00106f64;
      }
      uVar28 = (ulong)(uVar26 + 1);
      *(undefined4 *)(this + 0x2c) = 0;
      uVar27 = *(uint *)(hash_table_size_primes + (ulong)uVar26 * 4);
      if (uVar26 + 1 < 2) {
        uVar28 = 2;
      }
      uVar26 = *(uint *)(hash_table_size_primes + uVar28 * 4);
      uVar35 = (ulong)uVar26;
      *(int *)(this + 0x28) = (int)uVar28;
      pvVar31 = *(void **)(this + 8);
      uVar28 = uVar35 * 4;
      uVar39 = uVar35 * 8;
      pvVar4 = *(void **)(this + 0x10);
      uVar29 = Memory::alloc_static(uVar28,false);
      *(undefined8 *)(this + 0x10) = uVar29;
      __s_00 = (void *)Memory::alloc_static(uVar39,false);
      *(void **)(this + 8) = __s_00;
      if (uVar26 != 0) {
        __s = *(void **)(this + 0x10);
        if ((__s < (void *)((long)__s_00 + uVar39)) && (__s_00 < (void *)((long)__s + uVar28))) {
          uVar28 = 0;
          do {
            *(undefined4 *)((long)__s + uVar28 * 4) = 0;
            *(undefined8 *)((long)__s_00 + uVar28 * 8) = 0;
            uVar28 = uVar28 + 1;
          } while (uVar35 != uVar28);
        }
        else {
          memset(__s,0,uVar28);
          memset(__s_00,0,uVar39);
        }
      }
      if (uVar27 == 0) {
        uVar26 = *param_1;
      }
      else {
        uVar28 = 0;
        do {
          uVar26 = *(uint *)((long)pvVar4 + uVar28 * 4);
          if (uVar26 != 0) {
            lVar5 = *(long *)(this + 0x10);
            uVar37 = 0;
            uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
            uVar39 = CONCAT44(0,uVar3);
            lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar26 * lVar6;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar39;
            lVar33 = SUB168(auVar7 * auVar15,8);
            puVar1 = (uint *)(lVar5 + lVar33 * 4);
            iVar32 = SUB164(auVar7 * auVar15,8);
            uVar38 = *puVar1;
            uVar29 = *(undefined8 *)((long)pvVar31 + uVar28 * 8);
            while (uVar38 != 0) {
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (ulong)uVar38 * lVar6;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar39;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = (ulong)((uVar3 + iVar32) - SUB164(auVar8 * auVar16,8)) * lVar6;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar39;
              uVar25 = SUB164(auVar9 * auVar17,8);
              uVar36 = uVar29;
              if (uVar25 < uVar37) {
                *puVar1 = uVar26;
                puVar2 = (undefined8 *)((long)__s_00 + lVar33 * 8);
                uVar36 = *puVar2;
                *puVar2 = uVar29;
                uVar26 = uVar38;
                uVar37 = uVar25;
              }
              uVar37 = uVar37 + 1;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = (ulong)(iVar32 + 1) * lVar6;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = uVar39;
              lVar33 = SUB168(auVar10 * auVar18,8);
              puVar1 = (uint *)(lVar5 + lVar33 * 4);
              iVar32 = SUB164(auVar10 * auVar18,8);
              uVar29 = uVar36;
              uVar38 = *puVar1;
            }
            *(undefined8 *)((long)__s_00 + lVar33 * 8) = uVar29;
            *puVar1 = uVar26;
            *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
          }
          uVar28 = uVar28 + 1;
        } while (uVar27 != uVar28);
        Memory::free_static(pvVar31,false);
        Memory::free_static(pvVar4,false);
        uVar26 = *param_1;
      }
    }
    local_88 = (undefined1  [16])0x0;
    local_58[0] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_58[1] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_58[2] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_58[3] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_58[4] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_58[5] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_58[6] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_58[7] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_58[8] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_58[9] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_58[10] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_58[0xb] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_58[0xc] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_58[0xd] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_58[0xe] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_58[0xf] = (List<EditorUndoRedoManager::Action,DefaultAllocator>)0x0;
    local_70 = 0xffffff9d;
    local_68 = 0;
    local_60 = 1;
    local_78 = uVar26;
    pauVar30 = (undefined1 (*) [16])operator_new(0x40,"");
    *(uint *)pauVar30[1] = uVar26;
    *(undefined4 *)(pauVar30[1] + 8) = 0xffffff9d;
    *(undefined8 *)pauVar30[2] = 0;
    *(undefined8 *)(pauVar30[2] + 8) = 1;
    *pauVar30 = (undefined1  [16])0x0;
    pauVar30[3] = (undefined1  [16])0x0;
    List<EditorUndoRedoManager::Action,DefaultAllocator>::~List(local_58 + 8);
    List<EditorUndoRedoManager::Action,DefaultAllocator>::~List(local_58);
    puVar2 = *(undefined8 **)(this + 0x20);
    if (puVar2 == (undefined8 *)0x0) {
      *(undefined1 (**) [16])(this + 0x18) = pauVar30;
    }
    else {
      *puVar2 = pauVar30;
      *(undefined8 **)(*pauVar30 + 8) = puVar2;
    }
    uVar26 = *param_1;
    *(undefined1 (**) [16])(this + 0x20) = pauVar30;
    uVar26 = (uVar26 >> 0x10 ^ uVar26) * -0x7a143595;
    uVar27 = (uVar26 ^ uVar26 >> 0xd) * -0x3d4d51cb;
    uVar26 = uVar27 ^ uVar27 >> 0x10;
    if (uVar27 == uVar27 >> 0x10) {
      uVar28 = 1;
      uVar26 = 1;
    }
    else {
      uVar28 = (ulong)uVar26;
    }
    uVar38 = 0;
    lVar5 = *(long *)(this + 0x10);
    lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar39 = CONCAT44(0,uVar27);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar28 * lVar6;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar39;
    lVar34 = SUB168(auVar11 * auVar19,8);
    lVar33 = *(long *)(this + 8);
    puVar1 = (uint *)(lVar5 + lVar34 * 4);
    iVar32 = SUB164(auVar11 * auVar19,8);
    uVar3 = *puVar1;
    pauVar23 = pauVar30;
    while (uVar3 != 0) {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar3 * lVar6;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar39;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)((uVar27 + iVar32) - SUB164(auVar12 * auVar20,8)) * lVar6;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar39;
      uVar37 = SUB164(auVar13 * auVar21,8);
      pauVar40 = pauVar23;
      if (uVar37 < uVar38) {
        *puVar1 = uVar26;
        puVar2 = (undefined8 *)(lVar33 + lVar34 * 8);
        pauVar40 = (undefined1 (*) [16])*puVar2;
        *puVar2 = pauVar23;
        uVar26 = uVar3;
        uVar38 = uVar37;
      }
      uVar38 = uVar38 + 1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)(iVar32 + 1) * lVar6;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar39;
      lVar34 = SUB168(auVar14 * auVar22,8);
      puVar1 = (uint *)(lVar5 + lVar34 * 4);
      iVar32 = SUB164(auVar14 * auVar22,8);
      pauVar23 = pauVar40;
      uVar3 = *puVar1;
    }
    *(undefined1 (**) [16])(lVar33 + lVar34 * 8) = pauVar23;
    *puVar1 = uVar26;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  else {
    uVar28 = (ulong)local_bc[0];
    lVar5 = *(long *)(*(long *)(this + 8) + uVar28 * 8);
    *(undefined4 *)(lVar5 + 0x18) = 0xffffff9d;
    *(undefined8 *)(lVar5 + 0x20) = 0;
    *(undefined8 *)(lVar5 + 0x28) = 1;
    List<EditorUndoRedoManager::Action,DefaultAllocator>::clear
              ((List<EditorUndoRedoManager::Action,DefaultAllocator> *)(lVar5 + 0x30));
    List<EditorUndoRedoManager::Action,DefaultAllocator>::clear
              ((List<EditorUndoRedoManager::Action,DefaultAllocator> *)(lVar5 + 0x38));
    pauVar30 = *(undefined1 (**) [16])(*(long *)(this + 8) + uVar28 * 8);
  }
LAB_00106f64:
  List<EditorUndoRedoManager::Action,DefaultAllocator>::~List(local_a0 + 8);
  List<EditorUndoRedoManager::Action,DefaultAllocator>::~List(local_a0);
LAB_00106f7f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar30[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 0x18);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x38));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x28) != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x20));
            if (*(long *)((long)pvVar5 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x10);
                *(undefined8 *)((long)pvVar5 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00107256;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00107256:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* MethodBindVarArgBase<MethodBindVarArgT<EditorUndoRedoManager>, EditorUndoRedoManager, void,
   false>::_gen_argument_type(int) const */

undefined4 __thiscall
MethodBindVarArgBase<MethodBindVarArgT<EditorUndoRedoManager>,EditorUndoRedoManager,void,false>::
_gen_argument_type(MethodBindVarArgBase<MethodBindVarArgT<EditorUndoRedoManager>,EditorUndoRedoManager,void,false>
                   *this,int param_1)

{
  long in_FS_OFFSET;
  undefined4 local_48 [2];
  CowData<char32_t> local_40 [8];
  long local_38;
  CowData<char32_t> local_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)this + 8))(local_48,this,param_1);
  CowData<char32_t>::_unref(local_28);
  if ((StringName::configured != '\0') && (local_38 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_40);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_48[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int,bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar6 = 0;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  puVar6[10] = 6;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_88 = 0;
    local_90 = 0;
    local_78 = &_LC30;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_70._8_8_;
    local_70 = auVar1 << 0x40;
    String::parse_latin1((StrRange *)&local_90);
    local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
  }
  else {
    if (in_EDX != 1) goto LAB_0010738a;
    local_88 = 0;
    local_90 = 0;
    local_78 = &_LC30;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_70._8_8_;
    local_70 = auVar3 << 0x40;
    String::parse_latin1((StrRange *)&local_90);
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
  }
  local_98 = 0;
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_00107480:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00107480;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_70._8_8_ == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_70._8_8_ = local_80;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  *puVar6 = local_78._0_4_;
  if (*(long *)(puVar6 + 2) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
    uVar4 = local_70._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    *(undefined8 *)(puVar6 + 2) = uVar4;
  }
  if (*(long *)(puVar6 + 4) != local_70._8_8_) {
    StringName::unref();
    uVar4 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(puVar6 + 4) = uVar4;
  }
  puVar6[6] = local_60;
  if (*(long *)(puVar6 + 8) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
    lVar5 = local_58;
    local_58 = 0;
    *(long *)(puVar6 + 8) = lVar5;
  }
  puVar6[10] = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
LAB_0010738a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
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



/* EditorUndoRedoManager::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void EditorUndoRedoManager::_get_property_listv(List *param_1,bool param_2)

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
  local_78 = "EditorUndoRedoManager";
  local_88 = 0;
  local_90 = 0;
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorUndoRedoManager";
  local_98 = 0;
  local_70 = 0x15;
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
LAB_0010787d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010787d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0010789f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0010789f:
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
  StringName::StringName((StringName *)&local_78,"EditorUndoRedoManager",false);
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



/* EditorUndoRedoManager::undo_history(int) [clone .cold] */

void EditorUndoRedoManager::undo_history(int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorUndoRedoManager::redo_history(int) [clone .cold] */

void EditorUndoRedoManager::redo_history(int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* MethodBindTRC<UndoRedo*, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<UndoRedo*,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
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
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    local_78 = 0;
    local_70 = 6;
    local_a0 = 0;
    local_a8 = 0;
    String::parse_latin1((String *)&local_a8,"");
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,2,(CowData<char32_t> *)&local_b0,0,(String *)&local_a8,6,
               &local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    if (local_90._0_8_ != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_90._0_8_ = local_60;
      local_60 = 0;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      local_90._8_8_ = local_58;
      local_58 = 0;
    }
    local_80 = CONCAT44(local_80._4_4_,local_50);
    if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_48;
      local_48 = 0;
    }
    local_70 = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    uVar3 = local_90._8_8_;
    uVar2 = local_90._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_98;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_80;
    *(long *)(puVar4 + 8) = local_78;
    puVar4[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
  }
  else {
    local_60 = 8;
    local_68 = "UndoRedo";
    String::parse_latin1((StrRange *)&local_98);
    StringName::StringName((StringName *)&local_68,(String *)&local_98,false);
    *puVar4 = 0x18;
    *(undefined8 *)(puVar4 + 2) = 0;
    StringName::StringName((StringName *)(puVar4 + 4),(StringName *)&local_68);
    bVar5 = StringName::configured != '\0';
    puVar4[6] = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    puVar4[10] = 6;
    if ((bVar5) && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  if (in_EDX != 0) goto LAB_00107f19;
  local_78 = 0;
  local_68 = &_LC30;
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
LAB_00108015:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00108015;
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
LAB_00107f19:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBind* create_method_bind<EditorUndoRedoManager, String const&, UndoRedo::MergeMode,
   Object*, bool>(void (EditorUndoRedoManager::*)(String const&, UndoRedo::MergeMode, Object*,
   bool)) */

MethodBind *
create_method_bind<EditorUndoRedoManager,String_const&,UndoRedo::MergeMode,Object*,bool>
          (_func_void_String_ptr_MergeMode_Object_ptr_bool *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_String_ptr_MergeMode_Object_ptr_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f1d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 4;
  local_40 = 0;
  local_38 = "EditorUndoRedoManager";
  local_30 = 0x15;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EditorUndoRedoManager, bool>(void
   (EditorUndoRedoManager::*)(bool)) */

MethodBind * create_method_bind<EditorUndoRedoManager,bool>(_func_void_bool *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f230;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "EditorUndoRedoManager";
  local_30 = 0x15;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EditorUndoRedoManager, bool>(bool (EditorUndoRedoManager::*)()
   const) */

MethodBind * create_method_bind<EditorUndoRedoManager,bool>(_func_bool *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f290;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "EditorUndoRedoManager";
  local_30 = 0x15;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EditorUndoRedoManager>(void (EditorUndoRedoManager::*)()) */

MethodBind * create_method_bind<EditorUndoRedoManager>(_func_void *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_0010f2f0;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "EditorUndoRedoManager";
  local_30 = 0x15;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EditorUndoRedoManager, Object*, StringName const&, Variant
   const&>(void (EditorUndoRedoManager::*)(Object*, StringName const&, Variant const&)) */

MethodBind *
create_method_bind<EditorUndoRedoManager,Object*,StringName_const&,Variant_const&>
          (_func_void_Object_ptr_StringName_ptr_Variant_ptr *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Object_ptr_StringName_ptr_Variant_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f420;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "EditorUndoRedoManager";
  local_30 = 0x15;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EditorUndoRedoManager, Object*>(void
   (EditorUndoRedoManager::*)(Object*)) */

MethodBind * create_method_bind<EditorUndoRedoManager,Object*>(_func_void_Object_ptr *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Object_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f480;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "EditorUndoRedoManager";
  local_30 = 0x15;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EditorUndoRedoManager, int, Object*>(int
   (EditorUndoRedoManager::*)(Object*) const) */

MethodBind * create_method_bind<EditorUndoRedoManager,int,Object*>(_func_int_Object_ptr *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_int_Object_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f4e0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "EditorUndoRedoManager";
  local_30 = 0x15;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EditorUndoRedoManager, UndoRedo*, int>(UndoRedo*
   (EditorUndoRedoManager::*)(int) const) */

MethodBind *
create_method_bind<EditorUndoRedoManager,UndoRedo*,int>(_func_UndoRedo_ptr_int *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_UndoRedo_ptr_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f540;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "EditorUndoRedoManager";
  local_30 = 0x15;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EditorUndoRedoManager, int, bool>(void
   (EditorUndoRedoManager::*)(int, bool)) */

MethodBind * create_method_bind<EditorUndoRedoManager,int,bool>(_func_void_int_bool *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_int_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f5a0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "EditorUndoRedoManager";
  local_30 = 0x15;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
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



/* MethodBindVarArgT<EditorUndoRedoManager>::~MethodBindVarArgT() */

void __thiscall
MethodBindVarArgT<EditorUndoRedoManager>::~MethodBindVarArgT
          (MethodBindVarArgT<EditorUndoRedoManager> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__gen_argument_type_0010f350;
  if (*(long *)(this + 0xd0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xd0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xd0);
      *(undefined8 *)(this + 0xd0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)(this + 0xb8));
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)(this + 0xa8));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x90));
  if ((StringName::configured != '\0') && (*(long *)(this + 0x80) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x78));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x68));
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindVarArgT<EditorUndoRedoManager>::~MethodBindVarArgT() */

void __thiscall
MethodBindVarArgT<EditorUndoRedoManager>::~MethodBindVarArgT
          (MethodBindVarArgT<EditorUndoRedoManager> *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__gen_argument_type_0010f350;
  if (*(long *)(this + 0xd0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xd0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xd0);
      *(undefined8 *)(this + 0xd0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)(this + 0xb8));
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)(this + 0xa8));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x90));
  if ((StringName::configured != '\0') && (*(long *)(this + 0x80) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x78));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x68));
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0xd8);
  return;
}



/* CowData<StringName>::_unref() */

void __thiscall CowData<StringName>::_unref(CowData<StringName> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[-1];
      *(undefined8 *)this = 0;
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
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<StringName>::_realloc(long) */

undefined8 __thiscall CowData<StringName>::_realloc(CowData<StringName> *this,long param_1)

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
/* MethodBindVarArgBase<MethodBindVarArgT<EditorUndoRedoManager>, EditorUndoRedoManager, void,
   false>::MethodBindVarArgBase(void (EditorUndoRedoManager::*)(Variant const**, int,
   Callable::CallError&), MethodInfo const&, bool) */

void MethodBindVarArgBase<MethodBindVarArgT<EditorUndoRedoManager>,EditorUndoRedoManager,void,false>
     ::MethodBindVarArgBase
               (_func_void_Variant_ptr_ptr_int_CallError_ptr *param_1,MethodInfo *param_2,
               bool param_3)

{
  size_t __n;
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 (*pauVar7) [16];
  undefined4 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  CowData *in_RCX;
  StringName *this;
  undefined7 in_register_00000011;
  StringName *pSVar14;
  long lVar15;
  char in_R8B;
  long in_FS_OFFSET;
  bool bVar16;
  long local_80;
  undefined4 local_78;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  MethodBind::MethodBind((MethodBind *)param_1);
  *(MethodInfo **)(param_1 + 0x58) = param_2;
  *(ulong *)(param_1 + 0x60) = CONCAT71(in_register_00000011,param_3);
  *(undefined8 *)(param_1 + 0x68) = 0;
  lVar15 = *(long *)in_RCX;
  *(undefined ***)param_1 = &PTR__gen_argument_type_0010f350;
  if (lVar15 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_1 + 0x68),in_RCX);
  }
  uVar1 = *(undefined4 *)(in_RCX + 8);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  CowData<char32_t>::_ref((CowData<char32_t> *)(param_1 + 0x78),in_RCX + 0x10);
  StringName::StringName((StringName *)(param_1 + 0x80),(StringName *)(in_RCX + 0x18));
  uVar1 = *(undefined4 *)(in_RCX + 0x20);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  CowData<char32_t>::_ref((CowData<char32_t> *)(param_1 + 0x90),in_RCX + 0x28);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(in_RCX + 0x30);
  uVar3 = *(undefined8 *)(in_RCX + 0x38);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  if ((*(undefined8 **)(in_RCX + 0x40) != (undefined8 *)0x0) &&
     (puVar10 = (undefined4 *)**(undefined8 **)(in_RCX + 0x40), puVar10 != (undefined4 *)0x0)) {
    pauVar7 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])(param_1 + 0xa8) = pauVar7;
    *(undefined4 *)pauVar7[1] = 0;
    *pauVar7 = (undefined1  [16])0x0;
    do {
      while( true ) {
        puVar8 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
        *(undefined8 *)(puVar8 + 8) = 0;
        *(undefined1 (*) [16])(puVar8 + 2) = (undefined1  [16])0x0;
        lVar15 = *(long *)(puVar10 + 2);
        *puVar8 = 0;
        puVar8[6] = 0;
        puVar8[10] = 6;
        *(undefined8 *)(puVar8 + 0x10) = 0;
        *(undefined1 (*) [16])(puVar8 + 0xc) = (undefined1  [16])0x0;
        *puVar8 = *puVar10;
        if (lVar15 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar8 + 2),(CowData *)(puVar10 + 2));
        }
        StringName::operator=((StringName *)(puVar8 + 4),(StringName *)(puVar10 + 4));
        puVar8[6] = puVar10[6];
        if (*(long *)(puVar8 + 8) != *(long *)(puVar10 + 8)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar8 + 8),(CowData *)(puVar10 + 8));
        }
        puVar8[10] = puVar10[10];
        plVar4 = *(long **)(param_1 + 0xa8);
        lVar15 = plVar4[1];
        *(undefined8 *)(puVar8 + 0xc) = 0;
        *(long **)(puVar8 + 0x10) = plVar4;
        *(long *)(puVar8 + 0xe) = lVar15;
        if (lVar15 != 0) {
          *(undefined4 **)(lVar15 + 0x30) = puVar8;
        }
        plVar4[1] = (long)puVar8;
        if (*plVar4 != 0) break;
        puVar10 = *(undefined4 **)(puVar10 + 0xc);
        *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
        *plVar4 = (long)puVar8;
        if (puVar10 == (undefined4 *)0x0) goto LAB_0010908d;
      }
      puVar10 = *(undefined4 **)(puVar10 + 0xc);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
    } while (puVar10 != (undefined4 *)0x0);
  }
LAB_0010908d:
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (*(long *)(in_RCX + 0x50) != 0) {
    CowData<Variant>::_unref((CowData<Variant> *)(param_1 + 0xb8));
    if (*(long *)(in_RCX + 0x50) != 0) {
      plVar4 = (long *)(*(long *)(in_RCX + 0x50) + -0x10);
      do {
        lVar15 = *plVar4;
        if (lVar15 == 0) goto LAB_001090dc;
        LOCK();
        lVar9 = *plVar4;
        bVar16 = lVar15 == lVar9;
        if (bVar16) {
          *plVar4 = lVar15 + 1;
          lVar9 = lVar15;
        }
        UNLOCK();
      } while (!bVar16);
      if (lVar9 != -1) {
        *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(in_RCX + 0x50);
      }
    }
  }
LAB_001090dc:
  uVar1 = *(undefined4 *)(in_RCX + 0x58);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xc0) = uVar1;
  plVar4 = (long *)(*(long *)(in_RCX + 0x68) + -0x10);
  if (*(long *)(in_RCX + 0x68) != 0) {
    do {
      lVar15 = *plVar4;
      if (lVar15 == 0) goto LAB_00109122;
      LOCK();
      lVar9 = *plVar4;
      bVar16 = lVar15 == lVar9;
      if (bVar16) {
        *plVar4 = lVar15 + 1;
        lVar9 = lVar15;
      }
      UNLOCK();
    } while (!bVar16);
    if (lVar9 != -1) {
      *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(in_RCX + 0x68);
    }
  }
LAB_00109122:
  if (*(long *)(param_1 + 0xa8) == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    uVar11 = 4;
    lVar15 = 1;
  }
  else {
    iVar2 = *(int *)(*(long *)(param_1 + 0xa8) + 0x10);
    *(int *)(param_1 + 0x34) = iVar2;
    lVar15 = (long)(iVar2 + 1);
    if (lVar15 == 0) goto LAB_001095b0;
    uVar11 = lVar15 * 4;
  }
  puVar10 = (undefined4 *)Memory::alloc_static(uVar11,true);
  if (puVar10 == (undefined4 *)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
LAB_001095b0:
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(long *)(puVar10 + -2) = lVar15;
  local_78 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 6;
  local_70 = (undefined1  [16])0x0;
  *puVar10 = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_70._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  if (*(long *)(param_1 + 0xa8) != 0) {
    iVar2 = *(int *)(*(long *)(param_1 + 0xa8) + 0x10);
    if (iVar2 != 0) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_70._8_8_;
      local_70 = auVar6 << 0x40;
      if (iVar2 < 0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x157,
                         "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
      }
      else {
        __n = (long)iVar2 * 8;
        uVar11 = __n - 1;
        uVar11 = uVar11 | uVar11 >> 1;
        uVar11 = uVar11 | uVar11 >> 2;
        uVar11 = uVar11 | uVar11 >> 4;
        uVar11 = uVar11 | uVar11 >> 8;
        uVar11 = uVar11 | uVar11 >> 0x10;
        puVar12 = (undefined8 *)Memory::alloc_static((uVar11 | uVar11 >> 0x20) + 0x11,false);
        if (puVar12 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
        }
        else {
          *puVar12 = 1;
          local_70._0_8_ = puVar12 + 2;
          memset(puVar12 + 2,0,__n);
          puVar12[1] = (long)iVar2;
        }
      }
      if ((*(undefined8 **)(param_1 + 0xa8) != (undefined8 *)0x0) &&
         (puVar8 = (undefined4 *)**(undefined8 **)(param_1 + 0xa8), puVar8 != (undefined4 *)0x0)) {
        lVar15 = 0;
        do {
          puVar10[lVar15 + 1] = *puVar8;
          StringName::StringName((StringName *)&local_80,(String *)(puVar8 + 2),false);
          if (local_70._0_8_ == 0) {
            lVar9 = 0;
LAB_001093d3:
            _err_print_index_error
                      ("operator[]","./core/templates/vector.h",0x38,lVar15,lVar9,"p_index",
                       "((Vector<T> *)(this))->_cowdata.size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          lVar9 = *(long *)(local_70._0_8_ + -8);
          if (lVar9 <= lVar15) goto LAB_001093d3;
          if (*(ulong *)(local_70._0_8_ + -0x10) < 2) {
LAB_0010935c:
            pSVar14 = (StringName *)local_70._0_8_;
          }
          else {
            if (local_70._0_8_ == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            lVar9 = *(long *)(local_70._0_8_ + -8);
            uVar11 = 0x10;
            if (lVar9 * 8 != 0) {
              uVar11 = lVar9 * 8 - 1;
              uVar11 = uVar11 | uVar11 >> 1;
              uVar11 = uVar11 | uVar11 >> 2;
              uVar11 = uVar11 | uVar11 >> 4;
              uVar11 = uVar11 | uVar11 >> 8;
              uVar11 = uVar11 | uVar11 >> 0x10;
              uVar11 = (uVar11 | uVar11 >> 0x20) + 0x11;
            }
            puVar12 = (undefined8 *)Memory::alloc_static(uVar11,false);
            if (puVar12 == (undefined8 *)0x0) {
              _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                               "Parameter \"mem_new\" is null.",0,0);
              goto LAB_0010935c;
            }
            pSVar14 = (StringName *)(puVar12 + 2);
            *puVar12 = 1;
            puVar12[1] = lVar9;
            lVar13 = 0;
            this = pSVar14;
            if (lVar9 != 0) {
              do {
                StringName::StringName(this,(StringName *)(local_70._0_8_ + lVar13 * 8));
                lVar13 = lVar13 + 1;
                this = this + 8;
              } while (lVar9 != lVar13);
            }
            CowData<StringName>::_unref((CowData<StringName> *)local_70);
            local_70._0_8_ = pSVar14;
          }
          if (*(long *)(pSVar14 + lVar15 * 8) == local_80) {
            if ((StringName::configured != '\0') && (local_80 != 0)) {
              StringName::unref();
            }
          }
          else {
            StringName::unref();
            *(long *)(pSVar14 + lVar15 * 8) = local_80;
          }
          puVar8 = *(undefined4 **)(puVar8 + 0xc);
          lVar15 = lVar15 + 1;
        } while (puVar8 != (undefined4 *)0x0);
      }
      MethodBind::set_argument_names((Vector *)param_1);
      CowData<StringName>::_unref((CowData<StringName> *)local_70);
      *(undefined4 **)(param_1 + 0x40) = puVar10;
      goto joined_r0x001091e6;
    }
  }
  *(undefined4 **)(param_1 + 0x40) = puVar10;
joined_r0x001091e6:
  if (in_R8B != '\0') {
    *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 0x20000;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    MethodBind::_set_returns(SUB81(param_1,0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorUndoRedoManager::_initialize_classv() */

void EditorUndoRedoManager::_initialize_classv(void)

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
    local_48 = "EditorUndoRedoManager";
    local_60 = 0;
    local_40 = 0x15;
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



/* WARNING: Removing unreachable block (ram,0x00109838) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c0 [8];
  undefined8 local_b8 [8];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c0);
  iVar2 = (int)local_c0;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_b8,param_2);
  *param_1 = local_b8[0];
  local_b8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  Array::~Array(local_c0);
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindVarArgT<EditorUndoRedoManager>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindVarArgT<EditorUndoRedoManager>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long *plVar2;
  undefined4 in_register_00000014;
  long *plVar3;
  undefined4 in_R8D;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar3 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar3 != (long *)0x0) && (plVar3[1] != 0)) && (*(char *)(plVar3[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar3[1] == 0) {
      plVar2 = (long *)plVar3[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*plVar3 + 0x40))(plVar3);
      }
    }
    else {
      plVar2 = (long *)(plVar3[1] + 0x20);
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
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC99,"./core/object/method_bind.h",0xe6,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == MethodBind::get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00109aed;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar1 = param_2[0xb];
  if (((ulong)pVVar1 & 1) != 0) {
    pVVar1 = *(Variant **)(pVVar1 + *(long *)((long)plVar3 + (long)param_2[0xc]) + -1);
  }
  (*(code *)pVVar1)((Variant *)((long)plVar3 + (long)param_2[0xc]),param_4,in_R8D);
LAB_00109aed:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00109f11;
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
                    /* WARNING: Could not recover jumptable at 0x00109d96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined1 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_00109f11:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010a101;
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
                    /* WARNING: Could not recover jumptable at 0x00109f8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(char **)((long)param_3 + 8) != '\0');
    return;
  }
LAB_0010a101:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, Object*>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int,Object*>::validated_call
          (MethodBindTRC<int,Object*> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010a15b;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined8 *)(*param_2 + 0x10));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_0010a15b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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
      goto LAB_0010a4c1;
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
                    /* WARNING: Could not recover jumptable at 0x0010a34d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 0x10));
    return;
  }
LAB_0010a4c1:
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
      goto LAB_0010a697;
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
                    /* WARNING: Could not recover jumptable at 0x0010a53f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 0x10),*(long *)(param_3 + 8) + 8,
               *(undefined8 *)(param_3 + 0x10));
    return;
  }
LAB_0010a697:
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a7c0;
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
LAB_0010a7c0:
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
      goto LAB_0010ab3f;
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
                    /* WARNING: Could not recover jumptable at 0x0010a9e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010ab3f:
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
      goto LAB_0010acff;
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
                    /* WARNING: Could not recover jumptable at 0x0010aba6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010acff:
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ae60;
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
LAB_0010ae60:
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
      goto LAB_0010b072;
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
LAB_0010b072:
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
      goto LAB_0010b221;
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
LAB_0010b221:
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
      goto LAB_0010b561;
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
                    /* WARNING: Could not recover jumptable at 0x0010b3ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010b561:
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
      goto LAB_0010b749;
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
                    /* WARNING: Could not recover jumptable at 0x0010b5d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_0010b749:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, UndoRedo::MergeMode, Object*, bool>::validated_call(Object*, Variant
   const**, Variant*) const */

void MethodBindT<String_const&,UndoRedo::MergeMode,Object*,bool>::validated_call
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
      goto LAB_0010b941;
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
                    /* WARNING: Could not recover jumptable at 0x0010b7c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(undefined4 *)(*(long *)(param_3 + 8) + 8),
               *(undefined8 *)(*(long *)(param_3 + 0x10) + 0x10),
               *(undefined1 *)(*(long *)(param_3 + 0x18) + 8));
    return;
  }
LAB_0010b941:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<UndoRedo*, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<UndoRedo*,int>::validated_call
          (MethodBindTRC<UndoRedo*,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
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
      goto LAB_0010bb31;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Variant::ObjData::ref_pointer((Object *)(param_3 + 8));
    return;
  }
LAB_0010bb31:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<UndoRedo*, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<UndoRedo*,int>::ptrcall
          (MethodBindTRC<UndoRedo*,int> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010bb88;
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
  uVar2 = (*pcVar1)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined8 *)param_3 = uVar2;
LAB_0010bb88:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, UndoRedo::MergeMode, Object*, bool>::ptrcall(Object*, void const**,
   void*) const */

void MethodBindT<String_const&,UndoRedo::MergeMode,Object*,bool>::ptrcall
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
      goto LAB_0010bf11;
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
  plVar1 = *(long **)((long)param_3 + 0x10);
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010bd9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               **(undefined4 **)((long)param_3 + 8),plVar1,**(char **)((long)param_3 + 0x18) != '\0'
              );
    return;
  }
LAB_0010bf11:
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
      goto LAB_0010c101;
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
                    /* WARNING: Could not recover jumptable at 0x0010bf8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),plVar1,
               *(undefined8 *)((long)param_3 + 8),*(undefined8 *)((long)param_3 + 0x10));
    return;
  }
LAB_0010c101:
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
      goto LAB_0010c2e9;
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
                    /* WARNING: Could not recover jumptable at 0x0010c171. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),plVar1);
    return;
  }
LAB_0010c2e9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, Object*>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int,Object*>::ptrcall
          (MethodBindTRC<int,Object*> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010c340;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  plVar3 = (long *)*param_2;
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),plVar3);
  *(long *)param_3 = (long)iVar1;
LAB_0010c340:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<UndoRedo*, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<UndoRedo*,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  Object *pOVar8;
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
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c600;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010c640;
LAB_0010c630:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010c640:
        uVar7 = 4;
        goto LAB_0010c5f5;
      }
      if (in_R8D == 1) goto LAB_0010c630;
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
      pVVar12 = pVVar12 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC103;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar12);
    pOVar8 = (Object *)(*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,pOVar8);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_0010c5f5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0010c600:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c950;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar6 = 3;
LAB_0010c945:
    *in_R9 = uVar6;
    in_R9[2] = 1;
    goto LAB_0010c950;
  }
  pVVar13 = param_2[5];
  if (pVVar13 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_0010c9a0;
LAB_0010c990:
    pVVar13 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar13 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010c9a0:
      uVar6 = 4;
      goto LAB_0010c945;
    }
    if (in_R8D == 1) goto LAB_0010c990;
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
LAB_0010c916:
    uVar4 = _LC104;
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  else {
    pOVar7 = Variant::operator_cast_to_Object_(pVVar13);
    pOVar9 = Variant::operator_cast_to_Object_(pVVar13);
    if ((pOVar9 == (Object *)0x0) && (pOVar7 != (Object *)0x0)) goto LAB_0010c916;
  }
  pOVar7 = Variant::operator_cast_to_Object_(pVVar13);
  (*(code *)pVVar12)((Variant *)((long)plVar11 + (long)pVVar1),pOVar7);
LAB_0010c950:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<int, Object*>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int,Object*>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  Object *pOVar8;
  long *plVar9;
  Object *pOVar10;
  long lVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar9 = (long *)plVar12[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar9 = (long *)(plVar12[1] + 0x20);
    }
    if (local_58 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ccf0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_0010cce5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_0010ccf0;
  }
  pVVar14 = param_2[5];
  if (pVVar14 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_0010cd30;
LAB_0010cd20:
    pVVar14 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar14 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010cd30:
      uVar7 = 4;
      goto LAB_0010cce5;
    }
    if (in_R8D == 1) goto LAB_0010cd20;
    lVar11 = (long)((int)lVar2 + -1);
    if (lVar2 <= lVar11) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar14 = pVVar14 + lVar11 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar14,0x18);
  if (cVar5 == '\0') {
LAB_0010cc86:
    uVar4 = _LC104;
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  else {
    pOVar8 = Variant::operator_cast_to_Object_(pVVar14);
    pOVar10 = Variant::operator_cast_to_Object_(pVVar14);
    if ((pOVar10 == (Object *)0x0) && (pOVar8 != (Object *)0x0)) goto LAB_0010cc86;
  }
  pOVar8 = Variant::operator_cast_to_Object_(pVVar14);
  iVar6 = (*(code *)pVVar13)((Variant *)((long)plVar12 + (long)pVVar1),pOVar8);
  Variant::Variant((Variant *)local_48,iVar6);
  if (Variant::needs_deinit[*(int *)param_1] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined4 *)param_1 = local_48[0];
  *(undefined8 *)(param_1 + 8) = local_40;
  *(undefined8 *)(param_1 + 0x10) = uStack_38;
LAB_0010ccf0:
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d112;
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
      uVar4 = _LC105;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_StringName((Variant *)&local_88);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[0],0x18);
      if (cVar5 == '\0') {
LAB_0010d09a:
        uVar4 = _LC104;
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      else {
        pOVar8 = Variant::operator_cast_to_Object_(local_78[0]);
        pOVar10 = Variant::operator_cast_to_Object_(local_78[0]);
        if ((pOVar8 != (Object *)0x0) && (pOVar10 == (Object *)0x0)) goto LAB_0010d09a;
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
      goto LAB_0010d112;
    }
    uVar6 = 4;
  }
  *in_R9 = uVar6;
  in_R9[2] = 3;
LAB_0010d112:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<String const&, UndoRedo::MergeMode, Object*, bool>::call(Object*, Variant const**,
   int, Callable::CallError&) const */

Object * MethodBindT<String_const&,UndoRedo::MergeMode,Object*,bool>::call
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
  Object *pOVar9;
  ulong uVar10;
  long *plVar11;
  Object *pOVar12;
  uint uVar13;
  int iVar14;
  undefined4 in_register_00000014;
  long *plVar15;
  Variant *pVVar16;
  Variant *pVVar17;
  long lVar18;
  uint in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  Variant *local_68 [5];
  long local_40;
  
  plVar15 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar15 != (long *)0x0) && (plVar15[1] != 0)) && (*(char *)(plVar15[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar15[1] == 0) {
      plVar11 = (long *)plVar15[0x23];
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar15 + 0x40))(plVar15);
      }
    }
    else {
      plVar11 = (long *)(plVar15[1] + 0x20);
    }
    if (local_78 == (char *)*plVar11) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d570;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar17 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 5) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar14 = 0;
      lVar18 = 0;
    }
    else {
      lVar18 = *(long *)(pVVar2 + -8);
      iVar14 = (int)lVar18;
    }
    if ((int)(4 - in_R8D) <= iVar14) {
      lVar8 = 0;
      do {
        if ((int)lVar8 < (int)in_R8D) {
          pVVar16 = *(Variant **)(param_4 + lVar8 * 8);
        }
        else {
          uVar13 = iVar14 + -4 + (int)lVar8;
          if (lVar18 <= (int)uVar13) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar13,lVar18,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar16 = pVVar2 + (ulong)uVar13 * 0x18;
        }
        local_68[lVar8] = pVVar16;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 4);
      *in_R9 = 0;
      if (((ulong)pVVar17 & 1) != 0) {
        pVVar17 = *(Variant **)(pVVar17 + *(long *)((long)plVar15 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[3],1);
      uVar4 = _LC106;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      bVar6 = Variant::operator_cast_to_bool(local_68[3]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[2],0x18);
      if (cVar5 == '\0') {
LAB_0010d493:
        uVar4 = _LC107;
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      else {
        pOVar9 = Variant::operator_cast_to_Object_(local_68[2]);
        pOVar12 = Variant::operator_cast_to_Object_(local_68[2]);
        if ((pOVar9 != (Object *)0x0) && (pOVar12 == (Object *)0x0)) goto LAB_0010d493;
      }
      pOVar9 = Variant::operator_cast_to_Object_(local_68[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[1],2);
      uVar4 = _LC108;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      uVar10 = Variant::operator_cast_to_long(local_68[1]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[0],4);
      uVar4 = _LC109;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_78);
      (*(code *)pVVar17)((Variant *)((long)plVar15 + (long)pVVar1),(Variant *)&local_78,
                         uVar10 & 0xffffffff,pOVar9,bVar6);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      goto LAB_0010d570;
    }
    uVar7 = 4;
  }
  else {
    uVar7 = 3;
  }
  *in_R9 = uVar7;
  in_R9[2] = 4;
LAB_0010d570:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void call_with_variant_args_dv<__UnexistingClass, int, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, bool), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,int,bool>
               (__UnexistingClass *param_1,_func_void_int_bool *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
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
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar10 = (uint)param_5;
  if (2 < uVar10) {
    uVar7 = 3;
    goto LAB_0010d8cd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_0010d8fd:
      this_00 = (Variant *)plVar8[1];
      goto LAB_0010d835;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_0010d918;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0010d8fd;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0010d918:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_0010d835:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_int_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,1);
      uVar4 = _LC110;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_bool(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC103;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      iVar6 = Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0010d8bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((int)(param_1 + (long)param_3),SUB41(iVar6,0));
      return;
    }
  }
  uVar7 = 4;
LAB_0010d8cd:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<int, bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010d9b6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,bool>
            (p_Var2,(_func_void_int_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010d9b6:
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
    goto LAB_0010dc7d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0010dce0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0010dce0:
      uVar6 = 4;
LAB_0010dc7d:
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
      goto LAB_0010dbfb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0010dbfb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC111;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x0010dc57. Too many branches */
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
      _err_print_error(&_LC99,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010dd46;
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
LAB_0010dd46:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* MethodBindTRC<int, Object*>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int,Object*>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<Object*>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_0010e178;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC30;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 2;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_0010e25f:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_0010e25f;
    StringName::StringName((StringName *)&local_68,(String *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010e178:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
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
  if (param_1 != local_8c) {
    local_8c = local_8c + 1;
    if (param_1 == local_8c) {
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
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    }
    goto LAB_0010e321;
  }
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC30;
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
LAB_0010e548:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if ((int)local_50 != 0x11) goto LAB_0010e548;
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0010e321:
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



/* void call_get_argument_type_info<String const&, UndoRedo::MergeMode, Object*, bool>(int,
   PropertyInfo&) */

void call_get_argument_type_info<String_const&,UndoRedo::MergeMode,Object*,bool>
               (int param_1,PropertyInfo *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  int local_94;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  ulong local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_94 = 0;
  if (param_1 == 0) {
    local_78 = 0;
    local_80 = 0;
    String::parse_latin1((String *)&local_80,"");
    local_88 = 0;
    local_68 = CONCAT44(local_68._4_4_,4);
    local_50 = local_50 & 0xffffffff00000000;
    local_48 = 0;
    local_60 = (undefined1  [16])0x0;
    if (local_80 == 0) {
LAB_0010ea18:
      local_40 = 6;
      StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
      local_40 = 6;
      if ((int)local_50 != 0x11) goto LAB_0010ea18;
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
LAB_0010e977:
    *(undefined4 *)param_2 = (undefined4)local_68;
    if (*(long *)(param_2 + 8) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      uVar3 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8 *)(param_2 + 8) = uVar3;
    }
    if (*(long *)(param_2 + 0x10) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(param_2 + 0x10) = uVar3;
    }
    *(int *)(param_2 + 0x18) = (int)local_50;
    if (*(long *)(param_2 + 0x20) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar4 = local_48;
      local_48 = 0;
      *(long *)(param_2 + 0x20) = lVar4;
    }
    *(undefined4 *)(param_2 + 0x28) = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  else {
    local_94 = 1;
    if (param_1 == 1) {
      local_80 = 0;
      String::parse_latin1((String *)&local_80,"UndoRedo::MergeMode");
      godot::details::enum_qualified_name_to_class_info_name
                ((details *)&local_78,(String *)&local_80);
      StringName::StringName((StringName *)&local_70,(String *)&local_78,false);
      local_60 = (undefined1  [16])0x0;
      local_88 = 0;
      local_90 = 0;
      local_68 = 2;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0x10006;
      StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      goto LAB_0010e977;
    }
  }
  local_94 = 2;
  call_get_argument_type_info_helper<Object*>(param_1,&local_94,param_2);
  if (param_1 != local_94) goto LAB_0010e706;
  local_78 = 0;
  local_80 = 0;
  String::parse_latin1((String *)&local_80,"");
  local_88 = 0;
  local_68 = CONCAT44(local_68._4_4_,1);
  local_50 = local_50 & 0xffffffff00000000;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010ea70:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if ((int)local_50 != 0x11) goto LAB_0010ea70;
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
  *(undefined4 *)param_2 = (undefined4)local_68;
  if (*(long *)(param_2 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_2 + 8) = uVar3;
  }
  if (*(long *)(param_2 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar3;
  }
  *(int *)(param_2 + 0x18) = (int)local_50;
  if (*(long *)(param_2 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_2 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_2 + 0x28) = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0010e706:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<String const&, UndoRedo::MergeMode, Object*, bool>::_gen_argument_type_info(int)
   const */

PropertyInfo *
MethodBindT<String_const&,UndoRedo::MergeMode,Object*,bool>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info<String_const&,UndoRedo::MergeMode,Object*,bool>(in_EDX,pPVar1);
  return pPVar1;
}



/* EditorUndoRedoManager::singleton */

void EditorUndoRedoManager::_GLOBAL__sub_I_singleton(void)

{
  undefined8 uStack_8;
  
  if (PopupMenu::base_property_helper == '\0') {
    PopupMenu::base_property_helper = '\x01';
    PopupMenu::base_property_helper._64_8_ = 0;
    PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,
                 &__dso_handle);
  }
  if (OptionButton::base_property_helper != '\0') {
    return;
  }
  OptionButton::base_property_helper = 1;
  OptionButton::base_property_helper._64_8_ = 0;
  OptionButton::base_property_helper._56_8_ = 2;
  OptionButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
  OptionButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
  OptionButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,OptionButton::base_property_helper,
               &__dso_handle,uStack_8);
  return;
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
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<EditorUndoRedoManager::Action, DefaultAllocator>::~List() */

void __thiscall
List<EditorUndoRedoManager::Action,DefaultAllocator>::~List
          (List<EditorUndoRedoManager::Action,DefaultAllocator> *this)

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
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<UndoRedo*, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<UndoRedo*,int>::~MethodBindTRC(MethodBindTRC<UndoRedo*,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int, Object*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,Object*>::~MethodBindTRC(MethodBindTRC<int,Object*> *this)

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
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

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
/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&, UndoRedo::MergeMode, Object*, bool>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,UndoRedo::MergeMode,Object*,bool>::~MethodBindT
          (MethodBindT<String_const&,UndoRedo::MergeMode,Object*,bool> *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindVarArgBase<MethodBindVarArgT<EditorUndoRedoManager>, EditorUndoRedoManager, void,
   false>::MethodBindVarArgBase(void (EditorUndoRedoManager::*)(Variant const**, int,
   Callable::CallError&), MethodInfo const&, bool) */

void MethodBindVarArgBase<MethodBindVarArgT<EditorUndoRedoManager>,EditorUndoRedoManager,void,false>
     ::MethodBindVarArgBase
               (_func_void_Variant_ptr_ptr_int_CallError_ptr *param_1,MethodInfo *param_2,
               bool param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindVarArgT<EditorUndoRedoManager>::~MethodBindVarArgT() */

void __thiscall
MethodBindVarArgT<EditorUndoRedoManager>::~MethodBindVarArgT
          (MethodBindVarArgT<EditorUndoRedoManager> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


