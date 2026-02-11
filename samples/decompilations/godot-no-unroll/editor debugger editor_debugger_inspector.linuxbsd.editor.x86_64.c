
/* HashMap<ObjectID, EditorDebuggerRemoteObject*, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID,
   EditorDebuggerRemoteObject*> > >::_lookup_pos(ObjectID const&, unsigned int&) const [clone
   .isra.0] */

undefined8 __thiscall
HashMap<ObjectID,EditorDebuggerRemoteObject*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,EditorDebuggerRemoteObject*>>>
::_lookup_pos(HashMap<ObjectID,EditorDebuggerRemoteObject*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,EditorDebuggerRemoteObject*>>>
              *this,ObjectID *param_1,uint *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar10 = (long)param_1 * 0x3ffff - 1;
    uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
    uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
    uVar10 = uVar10 >> 0x16 ^ uVar10;
    uVar13 = uVar10 & 0xffffffff;
    if ((int)uVar10 == 0) {
      uVar13 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar13 * lVar1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar15;
    lVar12 = SUB168(auVar2 * auVar6,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar12 * 4);
    uVar11 = SUB164(auVar2 * auVar6,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if (((uint)uVar13 == uVar14) &&
           (*(ObjectID **)(*(long *)(*(long *)(this + 8) + lVar12 * 8) + 0x10) == param_1)) {
          *param_2 = uVar11;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(uVar11 + 1) * lVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar15;
        lVar12 = SUB168(auVar3 * auVar7,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar12 * 4);
        uVar11 = SUB164(auVar3 * auVar7,8);
        if (uVar14 == 0) {
          return 0;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar14 * lVar1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4
                                         ) + uVar11) - SUB164(auVar4 * auVar8,8)) * lVar1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar15;
      } while (uVar16 <= SUB164(auVar5 * auVar9,8));
      return 0;
    }
  }
  return 0;
}



/* EditorDebuggerInspector::_object_selected(ObjectID) */

void __thiscall
EditorDebuggerInspector::_object_selected(EditorDebuggerInspector *this,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((_object_selected(ObjectID)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&_object_selected(ObjectID)::{lambda()#1}::operator()()::sname),
     iVar2 != 0)) {
    _scs_create((char *)&_object_selected(ObjectID)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_object_selected(ObjectID)::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_object_selected(ObjectID)::{lambda()#1}::operator()()::sname);
  }
  local_80 = param_2;
  Variant::Variant((Variant *)local_68,(ObjectID *)&local_80);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_object_selected(ObjectID)::{lambda()#1}::operator()()::sname,local_78,1);
  if (Variant::needs_deinit[(int)local_50] == '\0') {
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorDebuggerInspector::EditorDebuggerInspector() */

void __thiscall EditorDebuggerInspector::EditorDebuggerInspector(EditorDebuggerInspector *this)

{
  undefined8 uVar1;
  Object *this_00;
  
  EditorInspector::EditorInspector((EditorInspector *)this);
  uVar1 = _LC7;
  *(undefined ***)this = &PTR__initialize_classv_0010f900;
  *(undefined8 *)(this + 0xce0) = uVar1;
  *(undefined8 *)(this + 0xd08) = uVar1;
  *(undefined8 *)(this + 0xcb0) = 0;
  *(undefined8 *)(this + 0xd10) = 0;
  *(undefined1 (*) [16])(this + 0xcc0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xcd0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xce8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xcf8) = (undefined1  [16])0x0;
  this_00 = (Object *)operator_new(0x1c0,"");
  Object::Object(this_00);
  *(undefined8 *)(this_00 + 0x1b8) = uVar1;
  *(undefined ***)this_00 = &PTR__initialize_classv_0010f7a0;
  *(undefined8 *)(this_00 + 0x178) = 0;
  *(undefined1 (*) [16])(this_00 + 0x180) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x198) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x1a8) = (undefined1  [16])0x0;
  postinitialize_handler(this_00);
  *(Object **)(this + 0xd10) = this_00;
  return;
}



/* EditorDebuggerInspector::_notification(int) */

void __thiscall EditorDebuggerInspector::_notification(EditorDebuggerInspector *this,int param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  CallableCustom *this_00;
  long in_FS_OFFSET;
  long local_50;
  Callable local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    pcVar1 = *(code **)(*(long *)this + 0x108);
    this_00 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(this_00);
    *(undefined **)(this_00 + 0x20) = &_LC8;
    *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)this_00 = &PTR_hash_0010fc78;
    *(undefined8 *)(this_00 + 0x40) = 0;
    uVar2 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined8 *)(this_00 + 0x30) = uVar2;
    *(code **)(this_00 + 0x38) = _object_selected;
    *(EditorDebuggerInspector **)(this_00 + 0x28) = this;
    CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
    *(char **)(this_00 + 0x20) = "EditorDebuggerInspector::_object_selected";
    Callable::Callable(local_48,this_00);
    StringName::StringName((StringName *)&local_50,"object_id_selected",false);
    (*pcVar1)(this,(StringName *)&local_50,local_48,0);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    Callable::~Callable(local_48);
  }
  else if (param_1 == 10) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorInspector::edit((Object *)this);
      return;
    }
    goto LAB_001004bc;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001004bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerInspector::get_object(ObjectID) */

long __thiscall EditorDebuggerInspector::get_object(EditorDebuggerInspector *this,long param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long local_40 [2];
  
  lVar18 = *(long *)(this + 0xcc0);
  if (lVar18 != 0) {
    if (*(int *)(this + 0xce4) != 0) {
      uVar17 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xce0) * 4));
      lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xce0) * 8);
      uVar10 = param_2 * 0x3ffff - 1;
      uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
      uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
      uVar10 = uVar10 >> 0x16 ^ uVar10;
      uVar14 = uVar10 & 0xffffffff;
      if ((int)uVar10 == 0) {
        uVar14 = 1;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar14 * lVar1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar17;
      lVar13 = SUB168(auVar2 * auVar6,8);
      uVar16 = *(uint *)(*(long *)(this + 0xcc8) + lVar13 * 4);
      iVar12 = SUB164(auVar2 * auVar6,8);
      if (uVar16 != 0) {
        uVar15 = 0;
        do {
          if (((uint)uVar14 == uVar16) &&
             (param_2 == *(long *)(*(long *)(lVar18 + lVar13 * 8) + 0x10))) {
            local_40[0] = param_2;
            plVar11 = (long *)HashMap<ObjectID,EditorDebuggerRemoteObject*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,EditorDebuggerRemoteObject*>>>
                              ::operator[]((HashMap<ObjectID,EditorDebuggerRemoteObject*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,EditorDebuggerRemoteObject*>>>
                                            *)(this + 0xcb8),(ObjectID *)local_40);
            return *plVar11;
          }
          uVar15 = uVar15 + 1;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (ulong)(iVar12 + 1) * lVar1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar17;
          lVar13 = SUB168(auVar3 * auVar7,8);
          uVar16 = *(uint *)(*(long *)(this + 0xcc8) + lVar13 * 4);
          iVar12 = SUB164(auVar3 * auVar7,8);
        } while ((uVar16 != 0) &&
                (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar16 * lVar1, auVar8._8_8_ = 0,
                auVar8._0_8_ = uVar17, auVar5._8_8_ = 0,
                auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(this + 0xce0) * 4) + iVar12) -
                                      SUB164(auVar4 * auVar8,8)) * lVar1, auVar9._8_8_ = 0,
                auVar9._0_8_ = uVar17, uVar15 <= SUB164(auVar5 * auVar9,8)));
      }
    }
    lVar18 = 0;
  }
  return lVar18;
}



/* EditorDebuggerInspector::clear_cache() */

void __thiscall EditorDebuggerInspector::clear_cache(EditorDebuggerInspector *this)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  Object *pOVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pOVar4 = EditorNode::singleton;
  for (puVar3 = *(undefined8 **)(this + 0xcd0); EditorNode::singleton = pOVar4,
      puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
    lVar7 = *(long *)(puVar3[3] + 0x60);
    lVar6 = EditorSelectionHistory::get_current();
    if (lVar7 == lVar6) {
      local_48 = &_LC8;
      local_50 = 0;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_50);
      EditorNode::push_item(pOVar4,(String *)0x0,SUB81((StrRange *)&local_50,0));
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    }
    pOVar4 = (Object *)puVar3[3];
    cVar5 = predelete_handler(pOVar4);
    if (cVar5 != '\0') {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
    pOVar4 = EditorNode::singleton;
  }
  if ((*(long *)(this + 0xcc0) != 0) && (*(int *)(this + 0xce4) != 0)) {
    lVar7 = 0;
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xce0) * 4);
    if (uVar2 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0xcc8) + lVar7) != 0) {
          *(int *)(*(long *)(this + 0xcc8) + lVar7) = 0;
          Memory::free_static(*(void **)(*(long *)(this + 0xcc0) + lVar7 * 2),false);
          *(undefined8 *)(*(long *)(this + 0xcc0) + lVar7 * 2) = 0;
        }
        lVar7 = lVar7 + 4;
      } while (lVar7 != (ulong)uVar2 << 2);
    }
    *(undefined4 *)(this + 0xce4) = 0;
    *(undefined1 (*) [16])(this + 0xcd0) = (undefined1  [16])0x0;
  }
  lVar7 = *(long *)(this + 0xce8);
  if ((lVar7 != 0) && (*(int *)(this + 0xd0c) != 0)) {
    if ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xd08) * 4) == 0) ||
       (memset(*(void **)(this + 0xd00),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xd08) * 4) * 4),
       *(int *)(this + 0xd0c) != 0)) {
      lVar6 = 0;
      do {
        plVar1 = (long *)(lVar7 + lVar6 * 8);
        if ((*plVar1 == 0) || (cVar5 = RefCounted::unreference(), cVar5 == '\0')) {
LAB_00100810:
          if (*(uint *)(this + 0xd0c) <= (int)lVar6 + 1U) break;
        }
        else {
          pOVar4 = (Object *)*plVar1;
          cVar5 = predelete_handler(pOVar4);
          if (cVar5 == '\0') goto LAB_00100810;
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
          if (*(uint *)(this + 0xd0c) <= (int)lVar6 + 1U) break;
        }
        lVar6 = lVar6 + 1;
        lVar7 = *(long *)(this + 0xce8);
      } while( true );
    }
    *(undefined4 *)(this + 0xd0c) = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _unref(this);
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
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



/* EditorDebuggerInspector::_object_edited(ObjectID, String const&, Variant const&) */

void __thiscall
EditorDebuggerInspector::_object_edited
          (EditorDebuggerInspector *this,undefined8 param_2,CowData *param_3,Variant *param_4)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  long in_FS_OFFSET;
  undefined8 local_f8;
  undefined8 local_f0;
  int local_e8 [8];
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_e8,param_4);
  local_f8 = 0;
  if (*(long *)param_3 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,param_3);
  }
  if (_object_edited(ObjectID,String_const&,Variant_const&)::{lambda()#1}::operator()()::sname ==
      '\0') {
    iVar2 = __cxa_guard_acquire(&_object_edited(ObjectID,String_const&,Variant_const&)::{lambda()#1}
                                 ::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_object_edited(ObjectID,String_const&,Variant_const&)::{lambda()#1}::
                           operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_object_edited(ObjectID,String_const&,Variant_const&)::{lambda()#1}::
                    operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_object_edited(ObjectID,String_const&,Variant_const&)::{lambda()#1}::
                           operator()()::sname);
    }
  }
  local_f0 = param_2;
  Variant::Variant(local_a8,(ObjectID *)&local_f0);
  Variant::Variant(local_90,(String *)&local_f8);
  Variant::Variant(local_78,(Variant *)local_e8);
  local_58 = (undefined1  [16])0x0;
  pVVar3 = local_48;
  local_60 = 0;
  local_c8 = local_a8;
  pVStack_c0 = local_90;
  local_b8 = local_78;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_object_edited(ObjectID,String_const&,Variant_const&)::{lambda()#1}::operator()()
                   ::sname,&local_c8,3);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if (Variant::needs_deinit[local_e8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerRemoteObject::get_title() */

void EditorDebuggerRemoteObject::get_title(void)

{
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  String local_80 [8];
  undefined8 local_78;
  CowData<char32_t> local_70 [8];
  undefined8 local_68;
  CowData<char32_t> local_60 [8];
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 0x178) == 0) {
    *(undefined8 *)in_RDI = 0;
    local_58 = "<null>";
    local_50 = 6;
    String::parse_latin1(in_RDI);
  }
  else {
    itos((long)local_60);
    local_68 = 0;
    local_58 = " ";
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_68);
    local_78 = 0;
    if (*(long *)(in_RSI + 0x180) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)(in_RSI + 0x180));
    }
    local_88 = 0;
    local_58 = "";
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_58 = "Remote %s:";
    local_90 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_90);
    TTR(local_80,(String *)&local_90);
    vformat<String>(local_70,local_80,(CowData<char32_t> *)&local_78);
    String::operator+((String *)&local_58,(String *)local_70);
    String::operator+((String *)in_RDI,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref(local_60);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerRemoteObject::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void __thiscall
EditorDebuggerRemoteObject::_get_property_list(EditorDebuggerRemoteObject *this,List *param_1)

{
  void *pvVar1;
  long lVar2;
  undefined4 *puVar3;
  char cVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined1 (*pauVar7) [16];
  long *plVar8;
  
  plVar8 = *(long **)param_1;
  if (plVar8 != (long *)0x0) {
    do {
      pvVar1 = (void *)*plVar8;
      if (pvVar1 == (void *)0x0) goto LAB_00100ec1;
      if (*(long **)((long)pvVar1 + 0x40) == plVar8) {
        lVar5 = *(long *)((long)pvVar1 + 0x30);
        lVar2 = *(long *)((long)pvVar1 + 0x38);
        *plVar8 = lVar5;
        if (pvVar1 == (void *)plVar8[1]) {
          plVar8[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x30) = lVar5;
          lVar5 = *(long *)((long)pvVar1 + 0x30);
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x38) = lVar2;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
        Memory::free_static(pvVar1,false);
        *(int *)(plVar8 + 2) = (int)plVar8[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar8 = *(long **)param_1;
    } while ((int)plVar8[2] != 0);
    Memory::free_static(plVar8,false);
    *(undefined8 *)param_1 = 0;
  }
LAB_00100ec1:
  if (*(undefined8 **)(this + 0x188) != (undefined8 *)0x0) {
    for (puVar3 = (undefined4 *)**(undefined8 **)(this + 0x188); puVar3 != (undefined4 *)0x0;
        puVar3 = *(undefined4 **)(puVar3 + 0xc)) {
      cVar4 = String::operator==((String *)(puVar3 + 2),"script");
      if (cVar4 == '\0') {
        if (*(long *)param_1 == 0) {
          pauVar7 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined1 (**) [16])param_1 = pauVar7;
          *(undefined4 *)pauVar7[1] = 0;
          *pauVar7 = (undefined1  [16])0x0;
        }
        puVar6 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
        *(undefined8 *)(puVar6 + 8) = 0;
        *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
        lVar5 = *(long *)(puVar3 + 2);
        *puVar6 = 0;
        puVar6[6] = 0;
        puVar6[10] = 6;
        *(undefined8 *)(puVar6 + 0x10) = 0;
        *(undefined1 (*) [16])(puVar6 + 0xc) = (undefined1  [16])0x0;
        *puVar6 = *puVar3;
        if (lVar5 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 2),(CowData *)(puVar3 + 2));
        }
        StringName::operator=((StringName *)(puVar6 + 4),(StringName *)(puVar3 + 4));
        puVar6[6] = puVar3[6];
        if (*(long *)(puVar6 + 8) != *(long *)(puVar3 + 8)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 8),(CowData *)(puVar3 + 8));
        }
        puVar6[10] = puVar3[10];
        plVar8 = *(long **)param_1;
        lVar5 = plVar8[1];
        *(undefined8 *)(puVar6 + 0xc) = 0;
        *(long **)(puVar6 + 0x10) = plVar8;
        *(long *)(puVar6 + 0xe) = lVar5;
        if (lVar5 != 0) {
          *(undefined4 **)(lVar5 + 0x30) = puVar6;
        }
        plVar8[1] = (long)puVar6;
        if (*plVar8 == 0) {
          *plVar8 = (long)puVar6;
        }
        *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
      }
    }
  }
  return;
}



/* EditorDebuggerInspector::clear_stack_variables() */

void __thiscall EditorDebuggerInspector::clear_stack_variables(EditorDebuggerInspector *this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(this + 0xd10);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  plVar8 = *(long **)(lVar2 + 0x188);
  if (plVar8 != (long *)0x0) {
    do {
      pvVar4 = (void *)*plVar8;
      if (pvVar4 == (void *)0x0) goto LAB_00101154;
      if (*(long **)((long)pvVar4 + 0x40) == plVar8) {
        lVar7 = *(long *)((long)pvVar4 + 0x30);
        lVar5 = *(long *)((long)pvVar4 + 0x38);
        *plVar8 = lVar7;
        if (pvVar4 == (void *)plVar8[1]) {
          plVar8[1] = lVar5;
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x30) = lVar7;
          lVar7 = *(long *)((long)pvVar4 + 0x30);
        }
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x38) = lVar5;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar4 + 0x20));
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + 0x10) != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar4 + 8));
        Memory::free_static(pvVar4,false);
        *(int *)(plVar8 + 2) = (int)plVar8[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar8 = *(long **)(lVar2 + 0x188);
    } while ((int)plVar8[2] != 0);
    Memory::free_static(plVar8,false);
    *(undefined8 *)(lVar2 + 0x188) = 0;
  }
LAB_00101154:
  if ((*(long *)(lVar2 + 0x198) != 0) && (*(int *)(lVar2 + 0x1bc) != 0)) {
    lVar7 = 0;
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar2 + 0x1b8) * 4);
    if (uVar1 != 0) {
      do {
        piVar6 = (int *)(*(long *)(lVar2 + 0x1a0) + lVar7);
        if (*piVar6 != 0) {
          *piVar6 = 0;
          pvVar4 = *(void **)(*(long *)(lVar2 + 0x198) + lVar7 * 2);
          if (Variant::needs_deinit[*(int *)((long)pvVar4 + 0x18)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar4,false);
          *(undefined8 *)(*(long *)(lVar2 + 0x198) + lVar7 * 2) = 0;
        }
        lVar7 = lVar7 + 4;
      } while ((ulong)uVar1 << 2 != lVar7);
    }
    *(undefined4 *)(lVar2 + 0x1bc) = 0;
    *(undefined1 (*) [16])(lVar2 + 0x1a8) = (undefined1  [16])0x0;
  }
  Object::notify_property_list_changed();
  Control::set_custom_minimum_size((Vector2 *)this);
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerInspector::_bind_methods() */

void EditorDebuggerInspector::_bind_methods(void)

{
  long in_FS_OFFSET;
  undefined8 local_218;
  undefined8 local_210;
  long local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  long local_1f0;
  long local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8 [6];
  long local_1a8;
  CowData local_1a0 [8];
  StringName local_198 [8];
  undefined4 local_190;
  CowData local_188 [8];
  undefined4 local_180;
  long local_178;
  undefined8 local_170;
  StringName local_168 [8];
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 local_140;
  StringName local_138 [8];
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  char *local_118;
  undefined8 local_110;
  StringName local_108 [8];
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  char *local_e8;
  undefined8 local_e0;
  StringName local_d8 [8];
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = "";
  local_178 = 0;
  local_1a8 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_1a8);
  local_1d8[0] = 0;
  local_b8 = "id";
  local_b0 = 2;
  String::parse_latin1((StrRange *)local_1d8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,2,(StrRange *)local_1d8,0,(StrRange *)&local_1a8,6,
             (StrRange *)&local_178);
  local_b8 = "object_selected";
  local_148 = 0;
  local_b0 = 0xf;
  String::parse_latin1((StrRange *)&local_148);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_148);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  local_118 = "EditorDebuggerInspector";
  local_1e0 = 0;
  local_110 = 0x17;
  String::parse_latin1((StrRange *)&local_1e0);
  StringName::StringName((StringName *)&local_118,(String *)&local_1e0,false);
  ClassDB::add_signal((StringName *)&local_118,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1e8,"value",false);
  local_178 = CONCAT44(local_178._4_4_,0x18);
  local_170 = 0;
  StringName::StringName(local_168,(StringName *)&local_1e8);
  local_160 = 0;
  local_b8 = "";
  local_158 = 0;
  local_150 = 6;
  local_1f0 = 0;
  local_1f8 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_1f8);
  local_200 = 0;
  local_b8 = "property";
  local_b0 = 8;
  String::parse_latin1((StrRange *)&local_200);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1a8,4,(StrRange *)&local_200,0,(StrRange *)&local_1f8,6,
             (StrRange *)&local_1f0);
  local_208 = 0;
  local_b8 = "";
  local_210 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_210);
  local_218 = 0;
  local_b8 = "id";
  local_b0 = 2;
  String::parse_latin1((StrRange *)&local_218);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_1d8,2,(StrRange *)&local_218,0,(StrRange *)&local_210,6,
             &local_208);
  local_b8 = "object_edited";
  local_1e0 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_1e0);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_1e0);
  local_118 = (char *)CONCAT44(local_118._4_4_,(undefined4)local_178);
  local_110 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_170);
  StringName::StringName(local_108,local_168);
  local_f8 = 0;
  local_100 = local_160;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_158);
  local_140 = 0;
  local_f0 = local_150;
  local_148 = CONCAT44(local_148._4_4_,(undefined4)local_1a8);
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_140,local_1a0);
  StringName::StringName(local_138,local_198);
  local_128 = 0;
  local_130 = local_190;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,local_188);
  local_120 = local_180;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)local_1d8);
  local_e0 = 0;
  local_e8 = (char *)CONCAT44(local_e8._4_4_,local_118._0_4_);
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_110);
  StringName::StringName(local_d8,local_108);
  local_c8 = 0;
  local_d0 = local_100;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
  local_c0 = local_f0;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_148);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  local_e8 = "EditorDebuggerInspector";
  local_118 = (char *)0x0;
  local_e0 = 0x17;
  String::parse_latin1((StrRange *)&local_118);
  StringName::StringName((StringName *)&local_e8,(String *)&local_118,false);
  ClassDB::add_signal((StringName *)&local_e8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_210);
  if ((StringName::configured != '\0') && (local_208 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_200);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
  if ((StringName::configured != '\0') && (local_1f0 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
  if ((StringName::configured != '\0') && (local_1e8 != 0)) {
    StringName::unref();
  }
  local_1a8 = 0;
  local_b8 = "";
  local_1d8[0] = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)local_1d8);
  local_b8 = "property";
  local_1e0 = 0;
  local_b0 = 8;
  String::parse_latin1((StrRange *)&local_1e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_118,4,(StrRange *)&local_1e0,0,(StrRange *)local_1d8,6,
             (StrRange *)&local_1a8);
  local_b8 = "";
  local_1e8 = 0;
  local_1f0 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_1f0);
  local_1f8 = 0;
  local_b8 = "id";
  local_b0 = 2;
  String::parse_latin1((StrRange *)&local_1f8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_148,2,(StrRange *)&local_1f8,0,(StrRange *)&local_1f0,6,
             (StringName *)&local_1e8);
  local_b8 = "object_property_updated";
  local_178 = 0;
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_178);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_178);
  local_e0 = 0;
  local_e8 = (char *)CONCAT44(local_e8._4_4_,local_118._0_4_);
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_110);
  StringName::StringName(local_d8,local_108);
  local_c8 = 0;
  local_d0 = local_100;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
  local_c0 = local_f0;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_148);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "EditorDebuggerInspector";
  local_200 = 0;
  local_e0 = 0x17;
  String::parse_latin1((StrRange *)&local_200);
  StringName::StringName((StringName *)&local_e8,(String *)&local_200,false);
  ClassDB::add_signal((StringName *)&local_e8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_200);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  if ((StringName::configured != '\0') && (local_1e8 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
  if ((StringName::configured != '\0') && (local_1a8 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerRemoteObject::_get(StringName const&, Variant&) const */

undefined4 __thiscall
EditorDebuggerRemoteObject::_get
          (EditorDebuggerRemoteObject *this,StringName *param_1,Variant *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x198) != 0) && (*(int *)(this + 0x1bc) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1b8) * 4);
    uVar18 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1b8) * 8);
    if (*(long *)param_1 == 0) {
      uVar13 = StringName::get_empty_hash();
    }
    else {
      uVar13 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar13 == 0) {
      uVar13 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar18;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar16 = *(uint *)(*(long *)(this + 0x1a0) + lVar15 * 4);
    iVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar16 != 0) {
      uVar17 = 0;
      do {
        if ((uVar13 == uVar16) &&
           (*(long *)(*(long *)(*(long *)(this + 0x198) + lVar15 * 8) + 0x10) == *(long *)param_1))
        {
          local_44 = 0;
          uVar12 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                   ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                  *)(this + 400),param_1,&local_44);
          if ((char)uVar12 == '\0') {
            _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                             "FATAL: Condition \"!exists\" is true.",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar11 = (code *)invalidInstructionException();
            (*pcVar11)();
          }
          Variant::operator=(param_2,(Variant *)
                                     (*(long *)(*(long *)(this + 0x198) + (ulong)local_44 * 8) +
                                     0x18));
          goto LAB_0010200b;
        }
        uVar17 = uVar17 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar18;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar16 = *(uint *)(*(long *)(this + 0x1a0) + lVar15 * 4);
        iVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar16 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar16 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar18, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar14) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar18, uVar17 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  uVar12 = 0;
LAB_0010200b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerRemoteObject::get_variant(StringName const&) */

StringName * EditorDebuggerRemoteObject::get_variant(StringName *param_1)

{
  StringName *in_RDX;
  EditorDebuggerRemoteObject *in_RSI;
  
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  _get(in_RSI,in_RDX,(Variant *)param_1);
  return param_1;
}



/* EditorDebuggerInspector::get_stack_variable(String const&) */

String * EditorDebuggerInspector::get_stack_variable(String *param_1)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  EditorDebuggerRemoteObject *this;
  char cVar4;
  String *in_RDX;
  long *plVar5;
  long in_RSI;
  long in_FS_OFFSET;
  long local_70;
  char *local_68;
  size_t local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar5 = *(long **)(*(long *)(in_RSI + 0xd10) + 0x1a8);
  if (plVar5 != (long *)0x0) {
    do {
      lVar3 = plVar5[2];
      if (lVar3 == 0) {
        local_70 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_70 = 0;
        if (pcVar2 == (char *)0x0) {
          if (*(long *)(lVar3 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar3 + 0x10));
          }
        }
        else {
          local_60 = strlen(pcVar2);
          local_68 = pcVar2;
          String::parse_latin1((StrRange *)&local_70);
        }
      }
      String::get_slice((char *)&local_68,(int)(StrRange *)&local_70);
      cVar4 = String::operator==((String *)&local_68,in_RDX);
      pcVar2 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar3 = local_70;
      if (cVar4 != '\0') {
        this = *(EditorDebuggerRemoteObject **)(in_RSI + 0xd10);
        StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
        local_50 = (undefined1  [16])0x0;
        local_58[0] = 0;
        EditorDebuggerRemoteObject::_get(this,(StringName *)&local_68,(Variant *)local_58);
        Variant::operator_cast_to_String((Variant *)param_1);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        goto LAB_0010221c;
      }
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
  }
  *(undefined8 *)param_1 = 0;
LAB_0010221c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerInspector::add_stack_variable(Array const&, int) */

void __thiscall
EditorDebuggerInspector::add_stack_variable
          (EditorDebuggerInspector *this,Array *param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  Variant *this_00;
  Object *pOVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined4 uVar11;
  long in_FS_OFFSET;
  float fVar12;
  float fVar13;
  CowData<char32_t> *local_120;
  undefined8 local_100;
  long local_f8;
  undefined8 local_f0;
  String local_e8 [8];
  long local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  long local_b8;
  undefined4 local_b0;
  float local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  float local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  int local_60 [2];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_68 = 0;
  local_60[0] = 0;
  local_48 = 0xffffffffffffffff;
  DebuggerMarshalls::ScriptStackVariable::deserialize((Array *)&local_68);
  local_100 = 0;
  if (local_68 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_68);
  }
  Variant::Variant((Variant *)local_a8,(Variant *)local_60);
  local_f8 = 0;
  if (local_48._4_4_ == 0x18) {
    bVar6 = Variant::operator_cast_to_bool((Variant *)local_a8);
    if (!bVar6) goto LAB_001023b0;
    pOVar8 = Variant::operator_cast_to_Object_((Variant *)local_a8);
    if (pOVar8 != (Object *)0x0) {
      __dynamic_cast(pOVar8,&Object::typeinfo,&EncodedObjectAsID::typeinfo,0);
    }
    local_d8 = EncodedObjectAsID::get_object_id();
    Variant::Variant((Variant *)local_88,(ObjectID *)&local_d8);
    if (Variant::needs_deinit[(int)local_a8[0]] != '\0') {
      Variant::_clear_internal();
    }
    uVar11 = 0x16;
    local_a8[0] = local_88[0];
    local_a0 = local_80;
    uStack_98 = uStack_78;
    String::parse_latin1((String *)&local_f8,"Object");
  }
  else {
LAB_001023b0:
    uVar11 = 0;
  }
  local_f0 = 0;
  if ((int)local_48 == 2) {
    String::parse_latin1((String *)&local_f0,"Globals/");
  }
  else if ((int)local_48 < 3) {
    if ((int)local_48 == 0) {
      String::parse_latin1((String *)&local_f0,"Locals/");
    }
    else {
      if ((int)local_48 != 1) goto LAB_00102688;
      String::parse_latin1((String *)&local_f0,"Members/");
    }
  }
  else if ((int)local_48 == 3) {
    String::parse_latin1((String *)&local_f0,"Evaluated/");
  }
  else {
LAB_00102688:
    String::parse_latin1((String *)&local_f0,"Unknown/");
  }
  local_d8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 6;
  local_d0 = (undefined1  [16])0x0;
  String::operator+((String *)&local_e0,(String *)&local_f0);
  if (local_d0._0_8_ != local_e0) {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
    lVar1 = local_e0;
    local_e0 = 0;
    local_d0._0_8_ = lVar1;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_c0 = CONCAT44(local_c0._4_4_,uVar11);
  local_d8 = CONCAT44(local_d8._4_4_,local_a8[0]);
  if (local_b8 != local_f8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f8);
  }
  lVar1 = *(long *)(this + 0xd10);
  if (((param_2 != -1) && (plVar2 = *(long **)(lVar1 + 0x188), plVar2 != (long *)0x0)) &&
     ((int)plVar2[2] != 0)) {
    lVar10 = *plVar2;
    if (0 < param_2) {
      iVar7 = 0;
      do {
        iVar7 = iVar7 + 1;
        lVar10 = *(long *)(lVar10 + 0x30);
      } while (param_2 != iVar7);
    }
    if (lVar10 != 0) {
      if (plVar2 != *(long **)(lVar10 + 0x40)) {
        _err_print_error("insert_before","./core/templates/list.h",0x187,
                         "FATAL: Condition \"p_element && (!_data || p_element->data != _data)\" is true."
                         ,0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      puVar9 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
      *(undefined1 (*) [16])(puVar9 + 2) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar9 + 0xc) = (undefined1  [16])0x0;
      *puVar9 = 0;
      puVar9[6] = 0;
      *(undefined8 *)(puVar9 + 8) = 0;
      puVar9[10] = 6;
      *(undefined8 *)(puVar9 + 0x10) = 0;
      *puVar9 = (undefined4)local_d8;
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar9 + 2),(CowData *)local_d0);
      StringName::operator=((StringName *)(puVar9 + 4),(StringName *)(local_d0 + 8));
      puVar9[6] = (undefined4)local_c0;
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar9 + 8),(CowData *)&local_b8);
      lVar3 = *(long *)(lVar10 + 0x38);
      puVar9[10] = local_b0;
      puVar4 = *(undefined8 **)(lVar1 + 0x188);
      *(undefined8 **)(puVar9 + 0x10) = puVar4;
      *(long *)(puVar9 + 0xc) = lVar10;
      *(long *)(puVar9 + 0xe) = lVar3;
      if (lVar3 == 0) {
        *puVar4 = puVar9;
      }
      else {
        *(undefined4 **)(lVar3 + 0x30) = puVar9;
      }
      *(undefined4 **)(lVar10 + 0x38) = puVar9;
      *(int *)(puVar4 + 2) = *(int *)(puVar4 + 2) + 1;
      goto LAB_00102527;
    }
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)(lVar1 + 0x188),(PropertyInfo *)&local_d8);
LAB_00102527:
  local_120 = (CowData<char32_t> *)local_d0;
  lVar1 = *(long *)(this + 0xd10);
  String::operator+(local_e8,(String *)&local_f0);
  StringName::StringName((StringName *)&local_e0,local_e8,false);
  this_00 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)(lVar1 + 400),(StringName *)&local_e0);
  Variant::operator=(this_00,(Variant *)local_a8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  Object::notify_property_list_changed();
  EditorInspector::edit((Object *)this);
  fVar12 = (float)Control::get_size();
  fVar13 = (float)Control::get_custom_minimum_size();
  if (fVar13 < (float)(int)fVar12) {
    local_88[1] = 0.0;
    local_88[0] = (float)(int)fVar12;
    Control::set_custom_minimum_size((Vector2 *)this);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_d0._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if (Variant::needs_deinit[(int)local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if (Variant::needs_deinit[local_60[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerInspector::add_object(Array const&) */

ObjectID * EditorDebuggerInspector::add_object(Array *param_1)

{
  String *pSVar1;
  HashMap<ObjectID,EditorDebuggerRemoteObject*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,EditorDebuggerRemoteObject*>>>
  *this;
  HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
  *this_00;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  char cVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  Variant *this_01;
  undefined8 *puVar17;
  CallableCustom *this_02;
  Variant *pVVar18;
  Variant *pVVar19;
  long lVar20;
  Object *pOVar21;
  long lVar22;
  long *plVar23;
  CowData<char32_t> *this_03;
  CowData<char32_t> *pCVar24;
  PropertyInfo *pPVar25;
  ulong uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  ObjectID *pOVar30;
  int iVar31;
  long in_FS_OFFSET;
  CowData<char32_t> *local_138;
  Variant local_120 [8];
  CowData<char32_t> local_118 [8];
  Object *local_110;
  Object *local_108;
  undefined8 local_100;
  ObjectID *local_f8;
  undefined1 local_f0 [24];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [2];
  undefined1 local_80 [16];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_f0._0_16_ = (undefined1  [16])0x0;
  local_f8 = (ObjectID *)0x0;
  SceneDebuggerObject::deserialize((Array *)&local_f8);
  if (local_f8 == (ObjectID *)0x0) {
    pOVar30 = (ObjectID *)0x0;
    _err_print_error("add_object","editor/debugger/editor_debugger_inspector.cpp",0x84,
                     "Condition \"obj.id.is_null()\" is true. Returning: ObjectID()",0,0);
  }
  else {
    this = (HashMap<ObjectID,EditorDebuggerRemoteObject*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,EditorDebuggerRemoteObject*>>>
            *)(param_1 + 0xcb8);
    cVar13 = HashMap<ObjectID,EditorDebuggerRemoteObject*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,EditorDebuggerRemoteObject*>>>
             ::_lookup_pos(this,local_f8,(uint *)local_d8);
    if (cVar13 == '\0') {
      this_01 = (Variant *)operator_new(0x1c0,"");
      Object::Object((Object *)this_01);
      uVar26 = _LC7;
      *(undefined1 (*) [16])((Object *)this_01 + 0x180) = (undefined1  [16])0x0;
      *(undefined ***)this_01 = &PTR__initialize_classv_0010f7a0;
      *(undefined8 *)((Object *)this_01 + 0x178) = 0;
      *(ulong *)((Object *)this_01 + 0x1b8) = uVar26;
      *(undefined1 (*) [16])((Object *)this_01 + 0x198) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])((Object *)this_01 + 0x1a8) = (undefined1  [16])0x0;
      postinitialize_handler((Object *)this_01);
      *(ObjectID **)((Object *)this_01 + 0x178) = local_f8;
      if (*(long *)((Object *)this_01 + 0x180) != local_f0._0_8_) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)((Object *)this_01 + 0x180),(CowData *)local_f0);
      }
      puVar17 = (undefined8 *)
                HashMap<ObjectID,EditorDebuggerRemoteObject*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,EditorDebuggerRemoteObject*>>>
                ::operator[](this,(ObjectID *)&local_f8);
      *puVar17 = this_01;
      pcVar3 = *(code **)(*(long *)this_01 + 0x108);
      this_02 = (CallableCustom *)operator_new(0x48,"");
      CallableCustom::CallableCustom(this_02);
      *(undefined **)(this_02 + 0x20) = &_LC8;
      *(undefined1 (*) [16])(this_02 + 0x30) = (undefined1  [16])0x0;
      *(undefined ***)this_02 = &PTR_hash_0010fd08;
      *(undefined8 *)(this_02 + 0x40) = 0;
      *(Array **)(this_02 + 0x28) = param_1;
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(this_02 + 0x10) = 0;
      *(undefined8 *)(this_02 + 0x30) = uVar4;
      *(code **)(this_02 + 0x38) = _object_edited;
      CallableCustomMethodPointerBase::_setup((uint *)this_02,(int)this_02 + 0x28);
      *(char **)(this_02 + 0x20) = "EditorDebuggerInspector::_object_edited";
      Callable::Callable((Callable *)local_d8,this_02);
      StringName::StringName((StringName *)&local_108,"value_edited",false);
      (*pcVar3)(this_01,(StringName *)&local_108,(Callable *)local_d8,0);
      if ((StringName::configured != '\0') && (local_108 != (Object *)0x0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_d8);
    }
    else {
      puVar17 = (undefined8 *)
                HashMap<ObjectID,EditorDebuggerRemoteObject*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,EditorDebuggerRemoteObject*>>>
                ::operator[](this,(ObjectID *)&local_f8);
      this_01 = (Variant *)*puVar17;
      uVar26 = _LC7;
    }
    plVar23 = *(long **)(this_01 + 0x188);
    iVar29 = 0;
    if (plVar23 != (long *)0x0) {
      iVar29 = (int)plVar23[2];
    }
    local_b8 = uVar26;
    if (plVar23 != (long *)0x0) {
      do {
        pPVar25 = (PropertyInfo *)*plVar23;
        if (pPVar25 == (PropertyInfo *)0x0) {
          local_d8 = (undefined1  [16])0x0;
          local_c8 = (undefined1  [16])0x0;
          pPVar25 = (PropertyInfo *)local_f0._8_8_;
          if (((CowData<char32_t> *)local_f0._8_8_ != (CowData<char32_t> *)0x0) &&
             (pPVar25 = *(PropertyInfo **)local_f0._8_8_, pPVar25 != (PropertyInfo *)0x0))
          goto LAB_00102c90;
          bVar14 = true;
          goto LAB_00102f0a;
        }
        if (*(long **)(pPVar25 + 0x40) == plVar23) {
          lVar20 = *(long *)(pPVar25 + 0x30);
          lVar22 = *(long *)(pPVar25 + 0x38);
          *plVar23 = lVar20;
          if (pPVar25 == (PropertyInfo *)plVar23[1]) {
            plVar23[1] = lVar22;
          }
          if (lVar22 != 0) {
            *(long *)(lVar22 + 0x30) = lVar20;
            lVar20 = *(long *)(pPVar25 + 0x30);
          }
          if (lVar20 != 0) {
            *(long *)(lVar20 + 0x38) = lVar22;
          }
          PropertyInfo::~PropertyInfo(pPVar25);
          Memory::free_static(pPVar25,false);
          *(int *)(plVar23 + 2) = (int)plVar23[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        plVar23 = *(long **)(this_01 + 0x188);
      } while ((int)plVar23[2] != 0);
      Memory::free_static(plVar23,false);
      *(undefined8 *)(this_01 + 0x188) = 0;
    }
    local_d8 = (undefined1  [16])0x0;
    local_c8 = (undefined1  [16])0x0;
    pPVar25 = (PropertyInfo *)local_f0._8_8_;
    if (((CowData<char32_t> *)local_f0._8_8_ == (CowData<char32_t> *)0x0) ||
       (pPVar25 = *(PropertyInfo **)local_f0._8_8_, pPVar25 == (PropertyInfo *)0x0)) {
      bVar14 = true;
      iVar31 = 0;
    }
    else {
LAB_00102c90:
      local_c8 = (undefined1  [16])0x0;
      local_d8 = (undefined1  [16])0x0;
      this_00 = (HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                 *)(this_01 + 400);
      iVar31 = 0;
      do {
        pVVar19 = (Variant *)(pPVar25 + 0x30);
        if ((*(int *)pPVar25 == 0x18) &&
           ((*(int *)(pPVar25 + 0x30) == 4 || (*(int *)(pPVar25 + 0x30) == 0x15)))) {
          Variant::operator_cast_to_String(local_120);
          iVar16 = String::find((char *)local_120,0x104c5b);
          if (iVar16 != -1) {
            String::get_slice((char *)local_118,(int)local_120);
            local_108 = (Object *)0x0;
            String::parse_latin1((String *)&local_108,"");
            ResourceLoader::load((StrRange *)&local_110,local_118,(String *)&local_108,1,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
            if ((((local_110 != (Object *)0x0) &&
                 (HashSet<Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>>
                  ::insert((Ref *)&local_108), local_110 != (Object *)0x0)) &&
                (cVar13 = RefCounted::unreference(), pOVar21 = local_110, cVar13 != '\0')) &&
               (cVar13 = predelete_handler(local_110), cVar13 != '\0')) {
              (**(code **)(*(long *)pOVar21 + 0x140))();
              Memory::free_static(pOVar21,false);
            }
            CowData<char32_t>::_unref(local_118);
          }
          local_108 = (Object *)&_LC8;
          local_110 = (Object *)0x0;
          local_100 = 0;
          String::parse_latin1((StrRange *)&local_110);
          ResourceLoader::load((String *)&local_108,local_120,(StrRange *)&local_110,1,0);
          Variant::Variant((Variant *)local_88,local_108);
          if (pVVar19 == (Variant *)local_88) {
            if (Variant::needs_deinit[local_88[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          else {
            if (Variant::needs_deinit[*(int *)(pPVar25 + 0x30)] != '\0') {
              Variant::_clear_internal();
            }
            *(int *)(pPVar25 + 0x30) = local_88[0];
            *(undefined8 *)(pPVar25 + 0x38) = local_80._0_8_;
            *(undefined8 *)(pPVar25 + 0x40) = local_80._8_8_;
          }
          if (((local_108 != (Object *)0x0) &&
              (cVar13 = RefCounted::unreference(), pOVar21 = local_108, cVar13 != '\0')) &&
             (cVar13 = predelete_handler(local_108), cVar13 != '\0')) {
            (**(code **)(*(long *)pOVar21 + 0x140))();
            Memory::free_static(pOVar21,false);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
          cVar13 = String::operator==((String *)(pPVar25 + 0x20),"Script");
          if (cVar13 != '\0') {
            (**(code **)(*(long *)this_01 + 0x98))((Variant *)local_88,this_01);
            cVar13 = Variant::operator!=((Variant *)local_88,pVVar19);
            if (Variant::needs_deinit[local_88[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (cVar13 != '\0') {
              pcVar3 = *(code **)(*(long *)this_01 + 0x90);
              Variant::Variant((Variant *)local_88,(Object *)0x0);
              (*pcVar3)(this_01,(Variant *)local_88);
              if (Variant::needs_deinit[local_88[0]] != '\0') {
                Variant::_clear_internal();
              }
              lVar20 = Variant::get_validated_object();
              if (((lVar20 != 0) &&
                  (pOVar21 = (Object *)__dynamic_cast(lVar20,&Object::typeinfo,&Script::typeinfo,0),
                  pOVar21 != (Object *)0x0)) && (cVar13 = RefCounted::reference(), cVar13 != '\0'))
              {
                if ((*(code **)(*(long *)pOVar21 + 0x200) != Script::placeholder_instance_create) &&
                   (lVar20 = (**(code **)(*(long *)pOVar21 + 0x200))(pOVar21), lVar20 != 0)) {
                  Object::set_script_and_instance(this_01,(ScriptInstance *)pVVar19);
                }
                cVar13 = RefCounted::unreference();
                if ((cVar13 != '\0') && (cVar13 = predelete_handler(pOVar21), cVar13 != '\0')) {
                  (**(code **)(*(long *)pOVar21 + 0x140))(pOVar21);
                  Memory::free_static(pOVar21,false);
                }
              }
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)local_120);
        }
        List<PropertyInfo,DefaultAllocator>::push_back
                  ((List<PropertyInfo,DefaultAllocator> *)(this_01 + 0x188),pPVar25);
        pSVar1 = (String *)(pPVar25 + 8);
        StringName::StringName((StringName *)&local_108,pSVar1,false);
        if ((*(long *)(this_01 + 0x198) == 0) || (*(int *)(this_01 + 0x1bc) == 0)) {
joined_r0x00103007:
          if ((StringName::configured != '\0') && (local_108 != (Object *)0x0)) {
            StringName::unref();
          }
LAB_0010301d:
          iVar31 = iVar31 + 1;
          StringName::StringName((StringName *)&local_108,pSVar1,false);
          pVVar18 = (Variant *)
                    HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                    ::operator[](this_00,(StringName *)&local_108);
          Variant::operator=(pVVar18,pVVar19);
          if ((StringName::configured != '\0') && (local_108 != (Object *)0x0)) {
            StringName::unref();
          }
        }
        else {
          uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this_01 + 0x1b8) * 4);
          lVar20 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this_01 + 0x1b8) * 8);
          if (local_108 == (Object *)0x0) {
            uVar15 = StringName::get_empty_hash();
          }
          else {
            uVar15 = *(uint *)(local_108 + 0x20);
          }
          uVar26 = CONCAT44(0,uVar2);
          if (uVar15 == 0) {
            uVar15 = 1;
          }
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)uVar15 * lVar20;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar26;
          lVar22 = SUB168(auVar5 * auVar9,8);
          uVar27 = *(uint *)(*(long *)(this_01 + 0x1a0) + lVar22 * 4);
          iVar16 = SUB164(auVar5 * auVar9,8);
          if (uVar27 == 0) goto joined_r0x00103007;
          uVar28 = 0;
          do {
            if ((uVar15 == uVar27) &&
               (*(Object **)(*(long *)(*(long *)(this_01 + 0x198) + lVar22 * 8) + 0x10) == local_108
               )) {
              bVar14 = true;
              goto LAB_00102e08;
            }
            uVar28 = uVar28 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)(iVar16 + 1) * lVar20;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar26;
            lVar22 = SUB168(auVar6 * auVar10,8);
            uVar27 = *(uint *)(*(long *)(this_01 + 0x1a0) + lVar22 * 4);
            iVar16 = SUB164(auVar6 * auVar10,8);
          } while ((uVar27 != 0) &&
                  (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar27 * lVar20, auVar11._8_8_ = 0,
                  auVar11._0_8_ = uVar26, auVar8._8_8_ = 0,
                  auVar8._0_8_ = (ulong)((uVar2 + iVar16) - SUB164(auVar7 * auVar11,8)) * lVar20,
                  auVar12._8_8_ = 0, auVar12._0_8_ = uVar26, uVar28 <= SUB164(auVar8 * auVar12,8)));
          bVar14 = false;
LAB_00102e08:
          if ((StringName::configured != '\0') && (local_108 != (Object *)0x0)) {
            StringName::unref();
          }
          if (!bVar14) goto LAB_0010301d;
          StringName::StringName((StringName *)&local_108,pSVar1,false);
          pVVar18 = (Variant *)
                    HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                    ::operator[](this_00,(StringName *)&local_108);
          local_110 = (Object *)CONCAT44(local_110._4_4_,1);
          local_80 = (undefined1  [16])0x0;
          local_118[0] = (CowData<char32_t>)0x1;
          local_88[0] = 0;
          Variant::evaluate((Operator *)&local_110,pVVar18,pVVar19,(Variant *)local_88,
                            (bool *)local_118);
          bVar14 = Variant::operator_cast_to_bool((Variant *)local_88);
          if (Variant::needs_deinit[local_88[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_108 != (Object *)0x0)) {
            StringName::unref();
          }
          if (bVar14) {
            StringName::StringName((StringName *)&local_108,pSVar1,false);
            pVVar18 = (Variant *)
                      HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                      ::operator[](this_00,(StringName *)&local_108);
            Variant::operator=(pVVar18,pVVar19);
            if ((StringName::configured != '\0') && (local_108 != (Object *)0x0)) {
              StringName::unref();
            }
            HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                      ((String *)&local_108);
          }
        }
        pPVar25 = *(PropertyInfo **)(pPVar25 + 0x48);
      } while (pPVar25 != (PropertyInfo *)0x0);
      plVar23 = *(long **)(this_01 + 0x188);
      bVar14 = iVar31 == 0;
      iVar31 = 0;
      pPVar25 = (PropertyInfo *)local_d8._0_8_;
      if (plVar23 != (long *)0x0) {
LAB_00102f0a:
        iVar31 = (int)plVar23[2];
      }
    }
    if ((iVar29 == iVar31) && (bVar14)) {
      iVar29 = local_b8._4_4_;
      if (local_b8._4_4_ != 0) {
        iVar31 = 0;
        while( true ) {
          local_110 = (Object *)0x0;
          if (*(long *)pPVar25 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)pPVar25);
          }
          if ((add_object(Array_const&)::{lambda()#1}::operator()()::sname == '\0') &&
             (iVar16 = __cxa_guard_acquire(&add_object(Array_const&)::{lambda()#1}::operator()()::
                                            sname), iVar16 != 0)) {
            _scs_create((char *)&add_object(Array_const&)::{lambda()#1}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &add_object(Array_const&)::{lambda()#1}::operator()()::sname,&__dso_handle)
            ;
            __cxa_guard_release(&add_object(Array_const&)::{lambda()#1}::operator()()::sname);
          }
          local_108 = *(Object **)(this_01 + 0x178);
          Variant::Variant((Variant *)local_88,(ObjectID *)&local_108);
          Variant::Variant(local_70,(String *)&local_110);
          local_58 = 0;
          local_50 = (undefined1  [16])0x0;
          local_a8 = (Variant *)local_88;
          pVStack_a0 = local_70;
          (**(code **)(*(long *)param_1 + 0xd0))
                    (param_1,&add_object(Array_const&)::{lambda()#1}::operator()()::sname,&local_a8,
                     2);
          pVVar19 = (Variant *)local_40;
          do {
            pVVar18 = pVVar19 + -0x18;
            pVVar19 = pVVar19 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar18] != '\0') {
              Variant::_clear_internal();
            }
          } while (pVVar19 != (Variant *)local_88);
          iVar31 = iVar31 + 1;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
          if (iVar29 <= iVar31) break;
          pPVar25 = (PropertyInfo *)((CowData *)pPVar25 + 8);
        }
        pPVar25 = (PropertyInfo *)local_d8._0_8_;
      }
    }
    else {
      Object::notify_property_list_changed();
    }
    pOVar30 = local_f8;
    if (pPVar25 != (PropertyInfo *)0x0) {
      uVar26 = (ulong)local_b8._4_4_;
      uVar4 = local_c8._8_8_;
      if (local_b8._4_4_ != 0) {
        if (*(uint *)(hash_table_size_primes + (local_b8 & 0xffffffff) * 4) != 0) {
          memset((void *)local_c8._8_8_,0,
                 (ulong)*(uint *)(hash_table_size_primes + (local_b8 & 0xffffffff) * 4) * 4);
        }
        this_03 = (CowData<char32_t> *)pPVar25;
        do {
          pCVar24 = this_03 + 8;
          CowData<char32_t>::_unref(this_03);
          this_03 = pCVar24;
        } while (pCVar24 != (CowData<char32_t> *)pPVar25 + uVar26 * 8);
      }
      Memory::free_static(pPVar25,false);
      Memory::free_static((void *)local_c8._0_8_,false);
      Memory::free_static((void *)local_d8._8_8_,false);
      Memory::free_static((void *)uVar4,false);
    }
  }
  local_138 = (CowData<char32_t> *)local_f0;
  List<Pair<PropertyInfo,Variant>,DefaultAllocator>::~List
            ((List<Pair<PropertyInfo,Variant>,DefaultAllocator> *)(local_f0 + 8));
  CowData<char32_t>::_unref(local_138);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pOVar30;
}



/* EditorDebuggerRemoteObject::_set(StringName const&, Variant const&) */

undefined4 __thiscall
EditorDebuggerRemoteObject::_set
          (EditorDebuggerRemoteObject *this,StringName *param_1,Variant *param_2)

{
  Variant *pVVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  Variant *pVVar6;
  long in_FS_OFFSET;
  long local_f8;
  ulong local_f0;
  int local_e8 [8];
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f0 = local_f0 & 0xffffffff00000000;
  uVar4 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
          ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                         *)(this + 400),param_1,(uint *)&local_f0);
  if ((char)uVar4 != '\0') {
    lVar2 = *(long *)param_1;
    if (lVar2 == 0) {
      local_f0 = 0;
    }
    else {
      local_f0 = 0;
      if (*(char **)(lVar2 + 8) == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        String::parse_latin1((String *)&local_f0,*(char **)(lVar2 + 8));
      }
    }
    cVar3 = String::begins_with((char *)&local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    if (cVar3 == '\0') {
      pVVar6 = (Variant *)
               HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
               ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                             *)(this + 400),param_1);
      Variant::operator=(pVVar6,param_2);
      Variant::Variant((Variant *)local_e8,param_2);
      StringName::StringName((StringName *)&local_f8,param_1);
      if ((_set(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar5 = __cxa_guard_acquire(&_set(StringName_const&,Variant_const&)::{lambda()#1}::
                                       operator()()::sname), iVar5 != 0)) {
        _scs_create((char *)&_set(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::
                             sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_set(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_set(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::
                             sname);
      }
      local_f0 = *(ulong *)(this + 0x178);
      Variant::Variant(local_a8,(ObjectID *)&local_f0);
      Variant::Variant(local_90,(StringName *)&local_f8);
      Variant::Variant(local_78,(Variant *)local_e8);
      local_58 = (undefined1  [16])0x0;
      pVVar6 = local_48;
      local_60 = 0;
      local_c8 = local_a8;
      pVStack_c0 = local_90;
      local_b8 = local_78;
      (**(code **)(*(long *)this + 0xd0))
                (this,&_set(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname,
                 &local_c8,3);
      do {
        pVVar1 = pVVar6 + -0x18;
        pVVar6 = pVVar6 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar6 != local_a8);
      if ((StringName::configured != '\0') && (local_f8 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_e8[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_001038f7;
    }
  }
  uVar4 = 0;
LAB_001038f7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* EditorDebuggerRemoteObject::_bind_methods() */

void EditorDebuggerRemoteObject::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  MethodBind *pMVar8;
  long *plVar9;
  long lVar10;
  long in_FS_OFFSET;
  undefined8 local_228;
  undefined8 local_220;
  long local_218;
  undefined8 local_210;
  undefined8 local_208;
  long local_200;
  long local_1f8;
  undefined8 local_1f0;
  PropertyInfo local_1e8 [48];
  undefined4 local_1b8 [2];
  CowData local_1b0 [8];
  StringName local_1a8 [8];
  undefined4 local_1a0;
  CowData local_198 [8];
  undefined4 local_190;
  undefined4 local_188 [2];
  undefined8 local_180;
  StringName local_178 [8];
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_158 [2];
  undefined8 local_150;
  StringName local_148 [8];
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 local_120;
  StringName local_118 [8];
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  char *local_f8;
  undefined8 local_f0;
  StringName local_e8 [8];
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)&local_c8,(char ***)"get_title",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar8 = create_method_bind<EditorDebuggerRemoteObject,String>(get_title);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar7 = local_b8._0_8_;
  if ((long *)local_b8._0_8_ != (long *)0x0) {
    LOCK();
    plVar9 = (long *)(local_b8._0_8_ + -0x10);
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if ((long *)local_b8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_b8._0_8_ + -8);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_b8._8_8_;
      local_b8 = auVar3 << 0x40;
      if (lVar1 != 0) {
        lVar10 = 0;
        plVar9 = (long *)uVar7;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar10);
      }
      Memory::free_static((long *)(uVar7 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_c8,(char ***)"get_variant",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar8 = create_method_bind<EditorDebuggerRemoteObject,Variant,StringName_const&>(get_variant);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar7 = local_b8._0_8_;
  if ((long *)local_b8._0_8_ != (long *)0x0) {
    LOCK();
    plVar9 = (long *)(local_b8._0_8_ + -0x10);
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if ((long *)local_b8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_b8._0_8_ + -8);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_b8._8_8_;
      local_b8 = auVar4 << 0x40;
      if (lVar1 != 0) {
        lVar10 = 0;
        plVar9 = (long *)uVar7;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar10);
      }
      Memory::free_static((long *)(uVar7 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_c8,(char ***)"clear",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar8 = create_method_bind<EditorDebuggerRemoteObject>(clear);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar7 = local_b8._0_8_;
  if ((long *)local_b8._0_8_ != (long *)0x0) {
    LOCK();
    plVar9 = (long *)(local_b8._0_8_ + -0x10);
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if ((long *)local_b8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_b8._0_8_ + -8);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_b8._8_8_;
      local_b8 = auVar5 << 0x40;
      if (lVar1 != 0) {
        lVar10 = 0;
        plVar9 = (long *)uVar7;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar10);
      }
      Memory::free_static((long *)(uVar7 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_c8,(char ***)"get_remote_object_id",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar8 = create_method_bind<EditorDebuggerRemoteObject,ObjectID>(get_remote_object_id);
  ClassDB::bind_methodfi(1,pMVar8,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar7 = local_b8._0_8_;
  if ((long *)local_b8._0_8_ != (long *)0x0) {
    LOCK();
    plVar9 = (long *)(local_b8._0_8_ + -0x10);
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if ((long *)local_b8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_b8._0_8_ + -8);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_b8._8_8_;
      local_b8 = auVar6 << 0x40;
      if (lVar1 != 0) {
        lVar10 = 0;
        plVar9 = (long *)uVar7;
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar10);
      }
      Memory::free_static((long *)(uVar7 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1f8,"value",false);
  local_188[0] = 0x18;
  local_180 = 0;
  StringName::StringName(local_178,(StringName *)&local_1f8);
  local_170 = 0;
  local_168 = 0;
  local_160 = 6;
  local_200 = 0;
  local_208 = 0;
  local_c8 = "";
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_208);
  local_210 = 0;
  local_c8 = "property";
  local_c0 = 8;
  String::parse_latin1((StrRange *)&local_210);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_1b8,4,(StrRange *)&local_210,0,(StrRange *)&local_208,6,
             &local_200);
  local_c8 = "";
  local_218 = 0;
  local_220 = 0;
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_220);
  local_228 = 0;
  local_c8 = "object_id";
  local_c0 = 9;
  String::parse_latin1((StrRange *)&local_228);
  PropertyInfo::PropertyInfo
            (local_1e8,2,(StrRange *)&local_228,0,(StrRange *)&local_220,6,&local_218);
  local_c8 = "value_edited";
  local_1f0 = 0;
  local_c0 = 0xc;
  String::parse_latin1((StrRange *)&local_1f0);
  local_b8 = (undefined1  [16])0x0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_1f0);
  local_128 = CONCAT44(local_128._4_4_,local_188[0]);
  local_120 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_120,(CowData *)&local_180);
  StringName::StringName(local_118,local_178);
  local_108 = 0;
  local_110 = local_170;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_168);
  local_100 = local_160;
  local_150 = 0;
  local_158[0] = local_1b8[0];
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_150,local_1b0);
  StringName::StringName(local_148,local_1a8);
  local_138 = 0;
  local_140 = local_1a0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,local_198);
  local_130 = local_190;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,local_1e8);
  local_f0 = 0;
  local_f8 = (char *)CONCAT44(local_f8._4_4_,(undefined4)local_128);
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_120);
  StringName::StringName(local_e8,local_118);
  local_d8 = 0;
  local_e0 = local_110;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_108);
  local_d0 = local_100;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)local_158);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_158);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  local_f8 = "EditorDebuggerRemoteObject";
  local_128 = 0;
  local_f0 = 0x1a;
  String::parse_latin1((StrRange *)&local_128);
  StringName::StringName((StringName *)&local_f8,(String *)&local_128,false);
  ClassDB::add_signal((StringName *)&local_f8,(MethodInfo *)&local_c8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  PropertyInfo::~PropertyInfo(local_1e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_1b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_210);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  if ((StringName::configured != '\0') && (local_200 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_188);
  if ((StringName::configured != '\0') && (local_1f8 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerInspector::~EditorDebuggerInspector() */

void __thiscall EditorDebuggerInspector::~EditorDebuggerInspector(EditorDebuggerInspector *this)

{
  long *plVar1;
  uint uVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  
  *(undefined ***)this = &PTR__initialize_classv_0010f900;
  clear_cache(this);
  pOVar3 = *(Object **)(this + 0xd10);
  cVar4 = predelete_handler(pOVar3);
  if (cVar4 != '\0') {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  pvVar6 = *(void **)(this + 0xce8);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0xd0c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xd08) * 4) != 0) {
        memset(*(void **)(this + 0xd00),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xd08) * 4) << 2);
        if (*(int *)(this + 0xd0c) == 0) goto LAB_00104537;
      }
      lVar5 = 0;
      do {
        plVar1 = (long *)((long)pvVar6 + lVar5 * 8);
        if (*plVar1 != 0) {
          cVar4 = RefCounted::unreference();
          if (cVar4 != '\0') {
            pOVar3 = (Object *)*plVar1;
            cVar4 = predelete_handler(pOVar3);
            if (cVar4 != '\0') {
              (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
              Memory::free_static(pOVar3,false);
            }
          }
          pvVar6 = *(void **)(this + 0xce8);
        }
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < *(uint *)(this + 0xd0c));
      *(undefined4 *)(this + 0xd0c) = 0;
      if (pvVar6 == (void *)0x0) goto LAB_0010456b;
    }
LAB_00104537:
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0xcf8),false);
    Memory::free_static(*(void **)(this + 0xcf0),false);
    Memory::free_static(*(void **)(this + 0xd00),false);
  }
LAB_0010456b:
  pvVar6 = *(void **)(this + 0xcc0);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0xce4) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xce0) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xce4) = 0;
        *(undefined1 (*) [16])(this + 0xcd0) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xcc8) + lVar5) != 0) {
            *(int *)(*(long *)(this + 0xcc8) + lVar5) = 0;
            Memory::free_static(*(void **)((long)pvVar6 + lVar5 * 2),false);
            pvVar6 = *(void **)(this + 0xcc0);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while ((ulong)uVar2 << 2 != lVar5);
        *(undefined4 *)(this + 0xce4) = 0;
        *(undefined1 (*) [16])(this + 0xcd0) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_001045fb;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0xcc8),false);
  }
LAB_001045fb:
  EditorInspector::~EditorInspector((EditorInspector *)this);
  return;
}



/* EditorDebuggerInspector::~EditorDebuggerInspector() */

void __thiscall EditorDebuggerInspector::~EditorDebuggerInspector(EditorDebuggerInspector *this)

{
  ~EditorDebuggerInspector(this);
  operator_delete(this,0xd18);
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



/* Object::_bind_compatibility_methods() */

void Object::_bind_compatibility_methods(void)

{
  return;
}



/* Object::_set(StringName const&, Variant const&) */

undefined8 Object::_set(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get(StringName const&, Variant&) const */

undefined8 Object::_get(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void Object::_get_property_list(List *param_1)

{
  return;
}



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
  return;
}



/* Object::_property_can_revert(StringName const&) const */

undefined8 Object::_property_can_revert(StringName *param_1)

{
  return 0;
}



/* Object::_property_get_revert(StringName const&, Variant&) const */

undefined8 Object::_property_get_revert(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_notification(int) */

void Object::_notification(int param_1)

{
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* EditorDebuggerRemoteObject::is_class_ptr(void*) const */

uint __thiscall
EditorDebuggerRemoteObject::is_class_ptr(EditorDebuggerRemoteObject *this,void *param_1)

{
  return (uint)CONCAT71(0x1100,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ff,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* EditorDebuggerRemoteObject::_validate_propertyv(PropertyInfo&) const */

void EditorDebuggerRemoteObject::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorDebuggerRemoteObject::_property_can_revertv(StringName const&) const */

undefined8 EditorDebuggerRemoteObject::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorDebuggerRemoteObject::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorDebuggerRemoteObject::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorDebuggerRemoteObject::_notificationv(int, bool) */

void EditorDebuggerRemoteObject::_notificationv(int param_1,bool param_2)

{
  return;
}



/* EditorDebuggerRemoteObject::get_remote_object_id() */

undefined8 __thiscall
EditorDebuggerRemoteObject::get_remote_object_id(EditorDebuggerRemoteObject *this)

{
  return *(undefined8 *)(this + 0x178);
}



/* Script::placeholder_instance_create(Object*) */

undefined8 Script::placeholder_instance_create(Object *param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<EditorDebuggerInspector, void, ObjectID, String const&, Variant
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerInspector,void,ObjectID,String_const&,Variant_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerInspector,void,ObjectID,String_const&,Variant_const&>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerInspector, void,
   ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerInspector,void,ObjectID>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerInspector,void,ObjectID> *this)

{
  return;
}



/* MethodBindTR<ObjectID>::_gen_argument_type(int) const */

undefined8 MethodBindTR<ObjectID>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTR<ObjectID>::get_argument_meta(int) const */

int __thiscall MethodBindTR<ObjectID>::get_argument_meta(MethodBindTR<ObjectID> *this,int param_1)

{
  return (param_1 >> 0x1f) * -8;
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



/* MethodBindTR<Variant, StringName const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindTR<Variant,StringName_const&>::_gen_argument_type
          (MethodBindTR<Variant,StringName_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x15;
}



/* MethodBindTR<Variant, StringName const&>::get_argument_meta(int) const */

undefined8 MethodBindTR<Variant,StringName_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<String>::_gen_argument_type(int) const */

undefined8 MethodBindTR<String>::_gen_argument_type(int param_1)

{
  return 4;
}



/* MethodBindTR<String>::get_argument_meta(int) const */

undefined8 MethodBindTR<String>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<EditorDebuggerInspector, void, ObjectID, String const&, Variant
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerInspector,void,ObjectID,String_const&,Variant_const&>::
get_argument_count(CallableCustomMethodPointer<EditorDebuggerInspector,void,ObjectID,String_const&,Variant_const&>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<EditorDebuggerInspector, void, ObjectID>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerInspector,void,ObjectID>::get_argument_count
          (CallableCustomMethodPointer<EditorDebuggerInspector,void,ObjectID> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerInspector, void,
   ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerInspector,void,ObjectID>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerInspector,void,ObjectID> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerInspector, void, ObjectID, String const&, Variant
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerInspector,void,ObjectID,String_const&,Variant_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerInspector,void,ObjectID,String_const&,Variant_const&>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindTR<String>::~MethodBindTR() */

void __thiscall MethodBindTR<String>::~MethodBindTR(MethodBindTR<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fd98;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<String>::~MethodBindTR() */

void __thiscall MethodBindTR<String>::~MethodBindTR(MethodBindTR<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fd98;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Variant, StringName const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Variant,StringName_const&>::~MethodBindTR
          (MethodBindTR<Variant,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fdf8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Variant, StringName const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Variant,StringName_const&>::~MethodBindTR
          (MethodBindTR<Variant,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fdf8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fe58;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fe58;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<ObjectID>::~MethodBindTR() */

void __thiscall MethodBindTR<ObjectID>::~MethodBindTR(MethodBindTR<ObjectID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010feb8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<ObjectID>::~MethodBindTR() */

void __thiscall MethodBindTR<ObjectID>::~MethodBindTR(MethodBindTR<ObjectID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010feb8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* EditorInspector::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorInspector::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorDebuggerInspector::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorDebuggerInspector::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorInspector::_property_can_revertv(StringName const&) const */

undefined8 EditorInspector::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00114008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorDebuggerInspector::_property_can_revertv(StringName const&) const */

undefined8 EditorDebuggerInspector::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00114008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<EditorDebuggerInspector, void, ObjectID, String const&, Variant
   const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerInspector,void,ObjectID,String_const&,Variant_const&>::
get_object(CallableCustomMethodPointer<EditorDebuggerInspector,void,ObjectID,String_const&,Variant_const&>
           *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00104d9d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00104d9d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00104d9d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorDebuggerInspector, void, ObjectID>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerInspector,void,ObjectID>::get_object
          (CallableCustomMethodPointer<EditorDebuggerInspector,void,ObjectID> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00104e9d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00104e9d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00104e9d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* EditorInspector::_validate_propertyv(PropertyInfo&) const */

void EditorInspector::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00114010 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* EditorDebuggerInspector::_validate_propertyv(PropertyInfo&) const */

void EditorDebuggerInspector::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00114010 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* EditorInspector::_setv(StringName const&, Variant const&) */

undefined8 EditorInspector::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00114018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorDebuggerInspector::_setv(StringName const&, Variant const&) */

undefined8 EditorDebuggerInspector::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00114018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00105148) */
/* EditorInspector::_getv(StringName const&, Variant&) const */

undefined8 EditorInspector::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00114020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001051b8) */
/* EditorDebuggerInspector::_getv(StringName const&, Variant&) const */

undefined8 EditorDebuggerInspector::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00114020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* EditorInspector::is_class_ptr(void*) const */

uint EditorInspector::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1100,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1100,in_RSI == &ScrollContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1100,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1100,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1100,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorDebuggerInspector::is_class_ptr(void*) const */

ulong EditorDebuggerInspector::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &EditorInspector::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x10ff,in_RSI == &EditorInspector::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x1100,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1100,in_RSI == &ScrollContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1100,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1100,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1100,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* WARNING: Removing unreachable block (ram,0x001053e6) */
/* EditorInspector::_notificationv(int, bool) */

void __thiscall EditorInspector::_notificationv(EditorInspector *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00114028 != ScrollContainer::_notification) {
      EditorInspector::_notification(iVar1);
    }
    ScrollContainer::_notification(iVar1);
    Container::_notification(iVar1);
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  Container::_notification(iVar1);
  ScrollContainer::_notification(iVar1);
  if ((code *)PTR__notification_00114028 == ScrollContainer::_notification) {
    return;
  }
  EditorInspector::_notification(iVar1);
  return;
}



/* CallableCustomMethodPointerBase::get_as_text() const */

void CallableCustomMethodPointerBase::get_as_text(void)

{
  char *__s;
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  __s = *(char **)(in_RSI + 0x20);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI = 0;
  if (__s != (char *)0x0) {
    strlen(__s);
  }
  String::parse_latin1(in_RDI);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerRemoteObject::_get_class_namev() const */

undefined8 * EditorDebuggerRemoteObject::_get_class_namev(void)

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
LAB_001054f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001054f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorDebuggerRemoteObject")
      ;
      goto LAB_0010555e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorDebuggerRemoteObject");
LAB_0010555e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorInspector::_get_class_namev() const */

undefined8 * EditorInspector::_get_class_namev(void)

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
LAB_001055e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001055e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorInspector");
      goto LAB_0010564e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorInspector");
LAB_0010564e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorDebuggerInspector::_get_class_namev() const */

undefined8 * EditorDebuggerInspector::_get_class_namev(void)

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
LAB_001056d3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001056d3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorDebuggerInspector");
      goto LAB_0010573e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorDebuggerInspector");
LAB_0010573e:
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



/* EditorDebuggerInspector::_notificationv(int, bool) */

void __thiscall
EditorDebuggerInspector::_notificationv(EditorDebuggerInspector *this,int param_1,bool param_2)

{
  if (param_2) {
    _notification(this,param_1);
    EditorInspector::_notificationv((EditorInspector *)this,param_1,true);
    return;
  }
  EditorInspector::_notificationv((EditorInspector *)this,param_1,false);
  _notification(this,param_1);
  return;
}



/* HashMap<StringName, List<EditorProperty*, DefaultAllocator>, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   List<EditorProperty*, DefaultAllocator> > > >::~HashMap() */

void __thiscall
HashMap<StringName,List<EditorProperty*,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,List<EditorProperty*,DefaultAllocator>>>>
::~HashMap(HashMap<StringName,List<EditorProperty*,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,List<EditorProperty*,DefaultAllocator>>>>
           *this)

{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  
  pvVar6 = *(void **)(this + 8);
  if (pvVar6 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar7 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar7) != 0) {
          pvVar6 = *(void **)((long)pvVar6 + lVar7 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar7) = 0;
          plVar5 = *(long **)((long)pvVar6 + 0x18);
          if (plVar5 != (long *)0x0) {
            do {
              pvVar2 = (void *)*plVar5;
              if (pvVar2 == (void *)0x0) {
                if ((int)plVar5[2] != 0) {
                  _err_print_error("~List","./core/templates/list.h",0x316,
                                   "Condition \"_data->size_cache\" is true.",0,0);
                  goto LAB_00105adb;
                }
                break;
              }
              if (*(long **)((long)pvVar2 + 0x18) == plVar5) {
                lVar4 = *(long *)((long)pvVar2 + 8);
                lVar3 = *(long *)((long)pvVar2 + 0x10);
                *plVar5 = lVar4;
                if (pvVar2 == (void *)plVar5[1]) {
                  plVar5[1] = lVar3;
                }
                if (lVar3 != 0) {
                  *(long *)(lVar3 + 8) = lVar4;
                  lVar4 = *(long *)((long)pvVar2 + 8);
                }
                if (lVar4 != 0) {
                  *(long *)(lVar4 + 0x10) = lVar3;
                }
                Memory::free_static(pvVar2,false);
                *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
              }
              else {
                _err_print_error("erase","./core/templates/list.h",0xe7,
                                 "Condition \"p_I->data != this\" is true. Returning: false",0,0);
              }
              plVar5 = *(long **)((long)pvVar6 + 0x18);
            } while ((int)plVar5[2] != 0);
            Memory::free_static(plVar5,false);
          }
LAB_00105adb:
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar6,false);
          pvVar6 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar6 + lVar7 * 2) = 0;
        }
        lVar7 = lVar7 + 4;
      } while (lVar7 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar6 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar6,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<ObjectID, EditorDebuggerRemoteObject*, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID,
   EditorDebuggerRemoteObject*> > >::operator[](ObjectID const&) */

undefined1 * __thiscall
HashMap<ObjectID,EditorDebuggerRemoteObject*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,EditorDebuggerRemoteObject*>>>
::operator[](HashMap<ObjectID,EditorDebuggerRemoteObject*,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,EditorDebuggerRemoteObject*>>>
             *this,ObjectID *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  void *__s;
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
  undefined1 auVar29 [16];
  undefined1 (*pauVar30) [16];
  char cVar31;
  ulong uVar32;
  void *pvVar33;
  ulong uVar34;
  undefined8 uVar35;
  void *__s_00;
  undefined1 (*pauVar36) [16];
  uint uVar37;
  int iVar38;
  long lVar39;
  long lVar40;
  uint uVar41;
  ulong uVar42;
  undefined8 uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  ObjectID *pOVar47;
  undefined1 (*pauVar48) [16];
  long in_FS_OFFSET;
  uint local_c8;
  uint local_6c [5];
  undefined8 local_58;
  long local_40;
  
  lVar3 = *(long *)(this + 8);
  pOVar47 = *(ObjectID **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar41 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar34 = CONCAT44(0,uVar41);
  if (lVar3 == 0) {
    uVar32 = uVar34 * 4;
    uVar42 = uVar34 * 8;
    uVar35 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(this + 0x10) = uVar35;
    pvVar33 = (void *)Memory::alloc_static(uVar42,false);
    *(void **)(this + 8) = pvVar33;
    if (uVar41 != 0) {
      pvVar5 = *(void **)(this + 0x10);
      if ((pvVar5 < (void *)((long)pvVar33 + uVar42)) && (pvVar33 < (void *)((long)pvVar5 + uVar32))
         ) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)pvVar5 + uVar32 * 4) = 0;
          *(undefined8 *)((long)pvVar33 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar34 != uVar32);
      }
      else {
        memset(pvVar5,0,uVar32);
        memset(pvVar33,0,uVar42);
      }
    }
    pOVar47 = *(ObjectID **)param_1;
  }
  else if (*(int *)(this + 0x2c) != 0) {
    lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar32 = (long)pOVar47 * 0x3ffff - 1;
    uVar32 = (uVar32 ^ uVar32 >> 0x1f) * 0x15;
    uVar32 = (uVar32 ^ uVar32 >> 0xb) * 0x41;
    uVar32 = uVar32 >> 0x16 ^ uVar32;
    uVar42 = uVar32 & 0xffffffff;
    if ((int)uVar32 == 0) {
      uVar42 = 1;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar42 * lVar4;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar34;
    lVar39 = SUB168(auVar6 * auVar18,8);
    uVar44 = *(uint *)(*(long *)(this + 0x10) + lVar39 * 4);
    uVar37 = SUB164(auVar6 * auVar18,8);
    if (uVar44 != 0) {
      uVar46 = 0;
      do {
        if (((uint)uVar42 == uVar44) &&
           (pOVar47 == *(ObjectID **)(*(long *)(lVar3 + lVar39 * 8) + 0x10))) {
          pauVar36 = *(undefined1 (**) [16])(lVar3 + (ulong)uVar37 * 8);
          goto LAB_00106238;
        }
        uVar46 = uVar46 + 1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (ulong)(uVar37 + 1) * lVar4;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar34;
        lVar39 = SUB168(auVar7 * auVar19,8);
        uVar44 = *(uint *)(*(long *)(this + 0x10) + lVar39 * 4);
        uVar37 = SUB164(auVar7 * auVar19,8);
      } while ((uVar44 != 0) &&
              (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar44 * lVar4, auVar20._8_8_ = 0,
              auVar20._0_8_ = uVar34, auVar9._8_8_ = 0,
              auVar9._0_8_ = (ulong)((uVar37 + uVar41) - SUB164(auVar8 * auVar20,8)) * lVar4,
              auVar21._8_8_ = 0, auVar21._0_8_ = uVar34, uVar46 <= SUB164(auVar9 * auVar21,8)));
    }
  }
  local_6c[0] = 0;
  cVar31 = _lookup_pos(this,pOVar47,local_6c);
  if (cVar31 == '\0') {
    if ((float)uVar34 * __LC17 < (float)(*(int *)(this + 0x2c) + 1)) {
      uVar41 = *(uint *)(this + 0x28);
      if (uVar41 == 0x1c) {
        pauVar36 = (undefined1 (*) [16])0x0;
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        goto LAB_00106238;
      }
      uVar34 = (ulong)(uVar41 + 1);
      *(undefined4 *)(this + 0x2c) = 0;
      uVar44 = *(uint *)(hash_table_size_primes + (ulong)uVar41 * 4);
      if (uVar41 + 1 < 2) {
        uVar34 = 2;
      }
      uVar41 = *(uint *)(hash_table_size_primes + uVar34 * 4);
      uVar42 = (ulong)uVar41;
      *(int *)(this + 0x28) = (int)uVar34;
      pvVar33 = *(void **)(this + 8);
      uVar34 = uVar42 * 4;
      uVar32 = uVar42 * 8;
      pvVar5 = *(void **)(this + 0x10);
      uVar35 = Memory::alloc_static(uVar34,false);
      *(undefined8 *)(this + 0x10) = uVar35;
      __s_00 = (void *)Memory::alloc_static(uVar32,false);
      *(void **)(this + 8) = __s_00;
      if (uVar41 != 0) {
        __s = *(void **)(this + 0x10);
        if ((__s < (void *)((long)__s_00 + uVar32)) && (__s_00 < (void *)((long)__s + uVar34))) {
          uVar34 = 0;
          do {
            *(undefined4 *)((long)__s + uVar34 * 4) = 0;
            *(undefined8 *)((long)__s_00 + uVar34 * 8) = 0;
            uVar34 = uVar34 + 1;
          } while (uVar42 != uVar34);
        }
        else {
          memset(__s,0,uVar34);
          memset(__s_00,0,uVar32);
        }
      }
      if (uVar44 != 0) {
        uVar34 = 0;
        do {
          uVar41 = *(uint *)((long)pvVar5 + uVar34 * 4);
          if (uVar41 != 0) {
            lVar3 = *(long *)(this + 0x10);
            uVar45 = 0;
            uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
            uVar32 = CONCAT44(0,uVar37);
            lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar41 * lVar4;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar32;
            lVar39 = SUB168(auVar10 * auVar22,8);
            puVar1 = (uint *)(lVar3 + lVar39 * 4);
            iVar38 = SUB164(auVar10 * auVar22,8);
            uVar46 = *puVar1;
            uVar35 = *(undefined8 *)((long)pvVar33 + uVar34 * 8);
            while (uVar46 != 0) {
              auVar11._8_8_ = 0;
              auVar11._0_8_ = (ulong)uVar46 * lVar4;
              auVar23._8_8_ = 0;
              auVar23._0_8_ = uVar32;
              auVar12._8_8_ = 0;
              auVar12._0_8_ = (ulong)((uVar37 + iVar38) - SUB164(auVar11 * auVar23,8)) * lVar4;
              auVar24._8_8_ = 0;
              auVar24._0_8_ = uVar32;
              local_c8 = SUB164(auVar12 * auVar24,8);
              uVar43 = uVar35;
              if (local_c8 < uVar45) {
                *puVar1 = uVar41;
                puVar2 = (undefined8 *)((long)__s_00 + lVar39 * 8);
                uVar43 = *puVar2;
                *puVar2 = uVar35;
                uVar41 = uVar46;
                uVar45 = local_c8;
              }
              uVar45 = uVar45 + 1;
              auVar13._8_8_ = 0;
              auVar13._0_8_ = (ulong)(iVar38 + 1) * lVar4;
              auVar25._8_8_ = 0;
              auVar25._0_8_ = uVar32;
              lVar39 = SUB168(auVar13 * auVar25,8);
              puVar1 = (uint *)(lVar3 + lVar39 * 4);
              iVar38 = SUB164(auVar13 * auVar25,8);
              uVar35 = uVar43;
              uVar46 = *puVar1;
            }
            *(undefined8 *)((long)__s_00 + lVar39 * 8) = uVar35;
            *puVar1 = uVar41;
            *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
          }
          uVar34 = uVar34 + 1;
        } while (uVar34 != uVar44);
        Memory::free_static(pvVar33,false);
        Memory::free_static(pvVar5,false);
      }
    }
    local_58 = *(undefined8 *)param_1;
    pauVar36 = (undefined1 (*) [16])operator_new(0x20,"");
    *pauVar36 = (undefined1  [16])0x0;
    *(undefined8 *)(pauVar36[1] + 8) = 0;
    *(undefined8 *)pauVar36[1] = local_58;
    puVar2 = *(undefined8 **)(this + 0x20);
    if (puVar2 == (undefined8 *)0x0) {
      *(undefined1 (**) [16])(this + 0x18) = pauVar36;
    }
    else {
      *puVar2 = pauVar36;
      *(undefined8 **)(*pauVar36 + 8) = puVar2;
    }
    lVar3 = *(long *)(this + 0x10);
    *(undefined1 (**) [16])(this + 0x20) = pauVar36;
    uVar34 = *(long *)param_1 * 0x3ffff - 1;
    uVar34 = (uVar34 ^ uVar34 >> 0x1f) * 0x15;
    uVar34 = (uVar34 ^ uVar34 >> 0xb) * 0x41;
    uVar34 = uVar34 >> 0x16 ^ uVar34;
    uVar32 = uVar34 & 0xffffffff;
    if ((int)uVar34 == 0) {
      uVar32 = 1;
    }
    uVar46 = 0;
    lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar37 = (uint)uVar32;
    uVar41 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar34 = CONCAT44(0,uVar41);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar32 * lVar4;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar34;
    lVar40 = SUB168(auVar14 * auVar26,8);
    lVar39 = *(long *)(this + 8);
    puVar1 = (uint *)(lVar3 + lVar40 * 4);
    iVar38 = SUB164(auVar14 * auVar26,8);
    uVar44 = *puVar1;
    pauVar30 = pauVar36;
    while (uVar44 != 0) {
      auVar15._8_8_ = 0;
      auVar15._0_8_ = (ulong)uVar44 * lVar4;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar34;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)((uVar41 + iVar38) - SUB164(auVar15 * auVar27,8)) * lVar4;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar34;
      local_c8 = SUB164(auVar16 * auVar28,8);
      pauVar48 = pauVar30;
      if (local_c8 < uVar46) {
        *puVar1 = (uint)uVar32;
        uVar32 = (ulong)uVar44;
        puVar2 = (undefined8 *)(lVar39 + lVar40 * 8);
        pauVar48 = (undefined1 (*) [16])*puVar2;
        *puVar2 = pauVar30;
        uVar46 = local_c8;
      }
      uVar37 = (uint)uVar32;
      uVar46 = uVar46 + 1;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = (ulong)(iVar38 + 1) * lVar4;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar34;
      lVar40 = SUB168(auVar17 * auVar29,8);
      puVar1 = (uint *)(lVar3 + lVar40 * 4);
      iVar38 = SUB164(auVar17 * auVar29,8);
      pauVar30 = pauVar48;
      uVar44 = *puVar1;
    }
    *(undefined1 (**) [16])(lVar39 + lVar40 * 8) = pauVar30;
    *puVar1 = uVar37;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  else {
    pauVar36 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_6c[0] * 8);
    *(undefined8 *)(pauVar36[1] + 8) = 0;
  }
LAB_00106238:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar36[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<Ref<Resource>, HashMapHasherDefault, HashMapComparatorDefault<Ref<Resource> >
   >::insert(Ref<Resource> const&) */

undefined1  [16]
HashSet<Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>>::insert
          (Ref *param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
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
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  char cVar32;
  uint uVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  uint *puVar37;
  int iVar38;
  long *in_RDX;
  long lVar39;
  ulong uVar40;
  long *in_RSI;
  ulong uVar41;
  uint uVar42;
  undefined4 uVar43;
  ulong uVar44;
  uint uVar45;
  undefined1 auVar46 [16];
  ulong uStack_98;
  ulong local_88;
  ulong local_70;
  
  lVar35 = *in_RSI;
  uVar33 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (lVar35 == 0) {
    uVar34 = (ulong)uVar33 * 4;
    lVar35 = Memory::alloc_static(uVar34,false);
    in_RSI[3] = lVar35;
    lVar35 = Memory::alloc_static((ulong)uVar33 * 8,false);
    *in_RSI = lVar35;
    lVar35 = Memory::alloc_static(uVar34,false);
    in_RSI[2] = lVar35;
    lVar35 = Memory::alloc_static(uVar34,false);
    in_RSI[1] = lVar35;
    if (uVar33 != 0) {
      memset((void *)in_RSI[3],0,uVar34);
    }
    lVar35 = *in_RSI;
    lVar36 = *in_RDX;
    uVar3 = *(uint *)((long)in_RSI + 0x24);
    local_88 = (ulong)uVar3;
    if (lVar35 != 0) goto LAB_001063c8;
  }
  else {
    lVar36 = *in_RDX;
    uVar3 = *(uint *)((long)in_RSI + 0x24);
LAB_001063c8:
    local_88 = (ulong)uVar3;
    if (uVar3 != 0) {
      uVar40 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4));
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      uVar34 = lVar36 * 0x3ffff - 1;
      uVar34 = (uVar34 ^ uVar34 >> 0x1f) * 0x15;
      uVar34 = (uVar34 ^ uVar34 >> 0xb) * 0x41;
      uVar34 = uVar34 >> 0x16 ^ uVar34;
      uVar44 = uVar34 & 0xffffffff;
      if ((int)uVar34 == 0) {
        uVar44 = 1;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar44 * lVar4;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar40;
      lVar39 = SUB168(auVar8 * auVar20,8);
      uVar42 = *(uint *)(in_RSI[3] + lVar39 * 4);
      uVar34 = (ulong)uVar42;
      iVar38 = SUB164(auVar8 * auVar20,8);
      if (uVar42 != 0) {
        uVar42 = 0;
        do {
          if ((int)uVar34 == (int)uVar44) {
            uVar45 = *(uint *)(in_RSI[1] + lVar39 * 4);
            uStack_98 = (ulong)uVar45;
            if (*(long *)(lVar35 + uStack_98 * 8) == lVar36) goto LAB_001064da;
          }
          uVar42 = uVar42 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)(iVar38 + 1) * lVar4;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar40;
          lVar39 = SUB168(auVar9 * auVar21,8);
          uVar45 = *(uint *)(in_RSI[3] + lVar39 * 4);
          uVar34 = (ulong)uVar45;
          iVar38 = SUB164(auVar9 * auVar21,8);
        } while ((uVar45 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = uVar34 * lVar4, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar40, auVar11._8_8_ = 0,
                auVar11._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4) +
                             iVar38) - SUB164(auVar10 * auVar22,8)) * lVar4, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar40, uVar42 <= SUB164(auVar11 * auVar23,8)));
      }
    }
  }
  if ((float)uVar33 * __LC17 < (float)(uVar3 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      lVar35 = *in_RSI;
      uVar45 = 0xffffffff;
      uVar3 = *(uint *)((long)in_RSI + 0x24);
      goto LAB_001064da;
    }
    uVar33 = (int)in_RSI[4] + 1;
    uVar34 = (ulong)uVar33;
    if (uVar33 < 2) {
      uVar34 = 2;
    }
    uVar33 = *(uint *)(hash_table_size_primes + uVar34 * 4);
    *(int *)(in_RSI + 4) = (int)uVar34;
    pvVar5 = (void *)in_RSI[3];
    uVar34 = (ulong)uVar33 * 4;
    pvVar6 = (void *)in_RSI[2];
    lVar35 = Memory::alloc_static(uVar34,false);
    in_RSI[3] = lVar35;
    lVar35 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar33 * 8,false);
    *in_RSI = lVar35;
    lVar35 = Memory::alloc_static(uVar34,false);
    in_RSI[2] = lVar35;
    lVar35 = Memory::realloc_static((void *)in_RSI[1],uVar34,false);
    in_RSI[1] = lVar35;
    if (uVar33 != 0) {
      memset((void *)in_RSI[3],0,uVar34);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      lVar36 = in_RSI[2];
      lVar4 = in_RSI[3];
      local_70 = 0;
      do {
        uVar45 = 0;
        uVar40 = local_70 & 0xffffffff;
        uVar43 = (undefined4)local_70;
        uVar33 = *(uint *)((long)pvVar5 + (ulong)*(uint *)((long)pvVar6 + local_70 * 4) * 4);
        uVar34 = (ulong)uVar33;
        lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar41 = CONCAT44(0,uVar3);
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar34 * lVar7;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar41;
        lVar39 = SUB168(auVar12 * auVar24,8) * 4;
        iVar38 = SUB164(auVar12 * auVar24,8);
        puVar1 = (uint *)(lVar4 + lVar39);
        uVar42 = *puVar1;
        uVar44 = local_70;
        while (uVar42 != 0) {
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)uVar42 * lVar7;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar41;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)((iVar38 + uVar3) - SUB164(auVar13 * auVar25,8)) * lVar7;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar41;
          uVar33 = SUB164(auVar14 * auVar26,8);
          if (uVar33 < uVar45) {
            *(int *)(lVar36 + uVar40 * 4) = iVar38;
            uVar42 = *puVar1;
            *puVar1 = (uint)uVar34;
            uVar45 = *(uint *)(lVar39 + lVar35);
            uVar34 = (ulong)uVar42;
            *(uint *)(lVar39 + lVar35) = (uint)uVar40;
            uVar40 = (ulong)uVar45;
            uVar45 = uVar33;
          }
          uVar43 = (undefined4)uVar40;
          uVar33 = (uint)uVar34;
          uVar45 = uVar45 + 1;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = (ulong)(iVar38 + 1) * lVar7;
          auVar27._8_8_ = 0;
          auVar27._0_8_ = uVar41;
          lVar39 = SUB168(auVar15 * auVar27,8) * 4;
          iVar38 = SUB164(auVar15 * auVar27,8);
          puVar1 = (uint *)(lVar4 + lVar39);
          uVar44 = uVar40;
          uVar42 = *puVar1;
        }
        *puVar1 = uVar33;
        *(int *)(lVar36 + uVar44 * 4) = iVar38;
        local_70 = local_70 + 1;
        *(undefined4 *)(lVar35 + lVar39) = uVar43;
      } while ((uint)local_70 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(pvVar6,false);
    lVar35 = *in_RSI;
    local_88 = (ulong)*(uint *)((long)in_RSI + 0x24);
  }
  lVar36 = *in_RDX;
  plVar2 = (long *)(lVar35 + local_88 * 8);
  *plVar2 = 0;
  uVar34 = lVar36 * 0x3ffff - 1;
  uVar34 = (uVar34 ^ uVar34 >> 0x1f) * 0x15;
  uVar34 = (uVar34 ^ uVar34 >> 0xb) * 0x41;
  uVar34 = uVar34 >> 0x16 ^ uVar34;
  uVar40 = uVar34 & 0xffffffff;
  if ((int)uVar34 == 0) {
    uVar40 = 1;
  }
  uVar33 = (uint)uVar40;
  if (*in_RDX != 0) {
    *plVar2 = *in_RDX;
    cVar32 = RefCounted::reference();
    if (cVar32 == '\0') {
      *plVar2 = 0;
    }
    lVar35 = *in_RSI;
    local_88 = (ulong)*(uint *)((long)in_RSI + 0x24);
  }
  uVar45 = 0;
  lVar4 = in_RSI[3];
  lVar39 = in_RSI[1];
  lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar41 = CONCAT44(0,uVar3);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar40 * lVar7;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar41;
  lVar36 = SUB168(auVar16 * auVar28,8) * 4;
  iVar38 = SUB164(auVar16 * auVar28,8);
  uVar34 = in_RSI[2];
  puVar1 = (uint *)(lVar4 + lVar36);
  uVar42 = *puVar1;
  uStack_98 = uVar34;
  uVar44 = local_88;
  while (uVar42 != 0) {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)uVar42 * lVar7;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar41;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)((uVar3 + iVar38) - SUB164(auVar17 * auVar29,8)) * lVar7;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar41;
    uVar33 = SUB164(auVar18 * auVar30,8);
    if (uVar33 < uVar45) {
      puVar37 = (uint *)(lVar36 + lVar39);
      *(int *)(uVar34 + uVar44 * 4) = iVar38;
      uVar42 = *puVar1;
      *puVar1 = (uint)uVar40;
      uVar45 = *puVar37;
      uVar40 = (ulong)uVar42;
      *puVar37 = (uint)local_88;
      local_88 = (ulong)uVar45;
      uVar44 = local_88;
      uVar45 = uVar33;
    }
    uVar33 = (uint)uVar40;
    uVar45 = uVar45 + 1;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)(iVar38 + 1) * lVar7;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar41;
    uStack_98 = SUB168(auVar19 * auVar31,8);
    lVar36 = uStack_98 * 4;
    iVar38 = SUB164(auVar19 * auVar31,8);
    puVar1 = (uint *)(lVar4 + lVar36);
    uVar42 = *puVar1;
  }
  *puVar1 = uVar33;
  *(int *)(uVar34 + uVar44 * 4) = iVar38;
  *(uint *)(lVar39 + lVar36) = (uint)local_88;
  uVar45 = *(uint *)((long)in_RSI + 0x24);
  *(uint *)((long)in_RSI + 0x24) = uVar45 + 1;
  uVar3 = uVar45 + 1;
LAB_001064da:
  local_88._0_4_ = uVar3;
  *(uint *)(param_1 + 0xc) = uVar45;
  *(long *)param_1 = lVar35;
  *(uint *)(param_1 + 8) = (uint)local_88;
  auVar46._8_8_ = uStack_98;
  auVar46._0_8_ = param_1;
  return auVar46;
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



/* WARNING: Removing unreachable block (ram,0x00106c08) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* EditorDebuggerInspector::get_class() const */

void EditorDebuggerInspector::get_class(void)

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



/* EditorInspector::get_class() const */

void EditorInspector::get_class(void)

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



/* EditorDebuggerRemoteObject::get_class() const */

void EditorDebuggerRemoteObject::get_class(void)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::insert(String const&)
    */

String * HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                   (String *param_1)

{
  CowData<char32_t> *this;
  void *pvVar1;
  void *pvVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
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
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  char cVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  int iVar35;
  uint uVar36;
  String *in_RDX;
  ulong uVar37;
  long lVar38;
  long *in_RSI;
  long lVar39;
  uint uVar40;
  ulong uVar41;
  undefined4 uVar42;
  ulong uVar43;
  uint uVar44;
  uint *puVar45;
  uint local_88;
  long local_68;
  
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
    uVar31 = (ulong)uVar28 * 4;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[3] = lVar32;
    lVar32 = Memory::alloc_static((ulong)uVar28 * 8,false);
    *in_RSI = lVar32;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[2] = lVar32;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[1] = lVar32;
    if (uVar28 != 0) {
      memset((void *)in_RSI[3],0,uVar31);
    }
    iVar35 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_0010705c;
  }
  else {
    iVar35 = *(int *)((long)in_RSI + 0x24);
LAB_0010705c:
    if (iVar35 != 0) {
      uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      uVar44 = String::hash();
      uVar31 = CONCAT44(0,uVar29);
      lVar39 = in_RSI[3];
      uVar36 = 1;
      if (uVar44 != 0) {
        uVar36 = uVar44;
      }
      uVar40 = 0;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar36 * lVar32;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar31;
      lVar38 = SUB168(auVar11 * auVar23,8);
      uVar44 = *(uint *)(lVar39 + lVar38 * 4);
      iVar35 = SUB164(auVar11 * auVar23,8);
      if (uVar44 == 0) {
        iVar35 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        do {
          if (uVar36 == uVar44) {
            cVar27 = String::operator==((String *)
                                        (*in_RSI + (ulong)*(uint *)(in_RSI[1] + lVar38 * 4) * 8),
                                        in_RDX);
            if (cVar27 != '\0') {
              iVar35 = *(int *)((long)in_RSI + 0x24);
              iVar30 = *(int *)(in_RSI[1] + lVar38 * 4);
              goto LAB_001073bb;
            }
            lVar39 = in_RSI[3];
          }
          uVar40 = uVar40 + 1;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)(iVar35 + 1) * lVar32;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar31;
          lVar38 = SUB168(auVar12 * auVar24,8);
          uVar44 = *(uint *)(lVar39 + lVar38 * 4);
          iVar35 = SUB164(auVar12 * auVar24,8);
        } while ((uVar44 != 0) &&
                (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar44 * lVar32, auVar25._8_8_ = 0,
                auVar25._0_8_ = uVar31, auVar14._8_8_ = 0,
                auVar14._0_8_ = (ulong)((uVar29 + iVar35) - SUB164(auVar13 * auVar25,8)) * lVar32,
                auVar26._8_8_ = 0, auVar26._0_8_ = uVar31, uVar40 <= SUB164(auVar14 * auVar26,8)));
        iVar35 = *(int *)((long)in_RSI + 0x24);
      }
    }
  }
  if ((float)uVar28 * __LC17 < (float)(iVar35 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar35 = *(int *)((long)in_RSI + 0x24);
      iVar30 = -1;
      goto LAB_001073bb;
    }
    uVar28 = (int)in_RSI[4] + 1;
    uVar31 = (ulong)uVar28;
    if (uVar28 < 2) {
      uVar31 = 2;
    }
    uVar28 = *(uint *)(hash_table_size_primes + uVar31 * 4);
    *(int *)(in_RSI + 4) = (int)uVar31;
    pvVar1 = (void *)in_RSI[3];
    uVar31 = (ulong)uVar28 * 4;
    pvVar2 = (void *)in_RSI[2];
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[3] = lVar32;
    lVar32 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar28 * 8,false);
    *in_RSI = lVar32;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[2] = lVar32;
    lVar32 = Memory::realloc_static((void *)in_RSI[1],uVar31,false);
    in_RSI[1] = lVar32;
    if (uVar28 != 0) {
      memset((void *)in_RSI[3],0,uVar31);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar31 = 0;
      lVar39 = in_RSI[3];
      lVar38 = in_RSI[2];
      do {
        uVar43 = uVar31 & 0xffffffff;
        uVar42 = (undefined4)uVar31;
        uVar44 = 0;
        uVar28 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar31 * 4) * 4);
        uVar37 = (ulong)uVar28;
        uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar41 = CONCAT44(0,uVar29);
        lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar37 * lVar33;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar41;
        lVar34 = SUB168(auVar3 * auVar15,8) * 4;
        iVar35 = SUB164(auVar3 * auVar15,8);
        puVar45 = (uint *)(lVar39 + lVar34);
        uVar36 = *puVar45;
        if (uVar36 == 0) {
          lVar33 = uVar31 * 4;
        }
        else {
          do {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar36 * lVar33;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar41;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)((uVar29 + iVar35) - SUB164(auVar4 * auVar16,8)) * lVar33;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar41;
            local_88 = SUB164(auVar5 * auVar17,8);
            if (local_88 < uVar44) {
              *(int *)(lVar38 + uVar43 * 4) = iVar35;
              uVar28 = *puVar45;
              *puVar45 = (uint)uVar37;
              uVar36 = *(uint *)(lVar34 + lVar32);
              uVar37 = (ulong)uVar28;
              *(uint *)(lVar34 + lVar32) = (uint)uVar43;
              uVar43 = (ulong)uVar36;
              uVar44 = local_88;
            }
            uVar42 = (undefined4)uVar43;
            uVar28 = (uint)uVar37;
            uVar44 = uVar44 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)(iVar35 + 1) * lVar33;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar41;
            lVar34 = SUB168(auVar6 * auVar18,8) * 4;
            iVar35 = SUB164(auVar6 * auVar18,8);
            puVar45 = (uint *)(lVar39 + lVar34);
            uVar36 = *puVar45;
          } while (uVar36 != 0);
          lVar33 = uVar43 << 2;
        }
        *puVar45 = uVar28;
        uVar31 = uVar31 + 1;
        *(int *)(lVar38 + lVar33) = iVar35;
        *(undefined4 *)(lVar32 + lVar34) = uVar42;
      } while ((uint)uVar31 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
  }
  uVar29 = String::hash();
  uVar28 = 1;
  if (uVar29 != 0) {
    uVar28 = uVar29;
  }
  uVar31 = (ulong)uVar28;
  this = (CowData<char32_t> *)(*in_RSI + (ulong)*(uint *)((long)in_RSI + 0x24) * 8);
  *(undefined8 *)this = 0;
  CowData<char32_t>::_ref(this,(CowData *)in_RDX);
  uVar29 = *(uint *)((long)in_RSI + 0x24);
  lVar39 = in_RSI[3];
  uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar37 = CONCAT44(0,uVar36);
  lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar31 * lVar38;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar37;
  lVar32 = SUB168(auVar7 * auVar19,8) * 4;
  iVar35 = SUB164(auVar7 * auVar19,8);
  puVar45 = (uint *)(lVar39 + lVar32);
  uVar44 = *puVar45;
  if (uVar44 == 0) {
    local_68 = in_RSI[2];
    lVar34 = in_RSI[1];
  }
  else {
    uVar40 = 0;
    local_68 = in_RSI[2];
    lVar34 = in_RSI[1];
    do {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar44 * lVar38;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar37;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)((uVar36 + iVar35) - SUB164(auVar8 * auVar20,8)) * lVar38;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar37;
      local_88 = SUB164(auVar9 * auVar21,8);
      if (local_88 < uVar40) {
        *(int *)(local_68 + (ulong)uVar29 * 4) = iVar35;
        uVar28 = *puVar45;
        *puVar45 = (uint)uVar31;
        uVar44 = *(uint *)(lVar32 + lVar34);
        uVar31 = (ulong)uVar28;
        *(uint *)(lVar32 + lVar34) = uVar29;
        uVar29 = uVar44;
        uVar40 = local_88;
      }
      uVar28 = (uint)uVar31;
      uVar40 = uVar40 + 1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)(iVar35 + 1) * lVar38;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar37;
      lVar32 = SUB168(auVar10 * auVar22,8) * 4;
      iVar35 = SUB164(auVar10 * auVar22,8);
      puVar45 = (uint *)(lVar39 + lVar32);
      uVar44 = *puVar45;
    } while (uVar44 != 0);
  }
  *puVar45 = uVar28;
  *(int *)(local_68 + (ulong)uVar29 * 4) = iVar35;
  *(uint *)(lVar34 + lVar32) = uVar29;
  iVar30 = *(int *)((long)in_RSI + 0x24);
  iVar35 = iVar30 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar35;
LAB_001073bb:
  lVar32 = *in_RSI;
  *(int *)(param_1 + 0xc) = iVar30;
  *(long *)param_1 = lVar32;
  *(int *)(param_1 + 8) = iVar35;
  return param_1;
}



/* Object::is_class(String const&) const */

ulong __thiscall Object::is_class(Object *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  lVar2 = *(long *)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (lVar2 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = String::operator==(param_1,"Object");
        return uVar5;
      }
LAB_00107797:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_50 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_50 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_40 = strlen(__s);
        local_48 = __s;
        String::parse_latin1((StrRange *)&local_50);
      }
    }
    uVar4 = String::operator==(param_1,(String *)&local_50);
    lVar3 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if ((char)uVar4 != '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)uVar4;
      }
      goto LAB_00107797;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
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



/* MethodBindTR<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<String>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC8;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 4;
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
      goto LAB_001079c5;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_001079c5:
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



/* MethodBindTR<ObjectID>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<ObjectID>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC8;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 2;
  puVar1[6] = 0x1d;
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
      goto LAB_00107b25;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00107b25:
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



/* EditorDebuggerRemoteObject::is_class(String const&) const */

undefined8 __thiscall
EditorDebuggerRemoteObject::is_class(EditorDebuggerRemoteObject *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00107c8b;
  }
  cVar5 = String::operator==(param_1,"EditorDebuggerRemoteObject");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          if (*(long *)(lVar4 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar5 != '\0') goto LAB_00107c8b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_00107c8b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorDebuggerInspector, void, ObjectID>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerInspector,void,ObjectID>::call
          (CallableCustomMethodPointer<EditorDebuggerInspector,void,ObjectID> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar7;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar7 = (char)ObjectDB::spin_lock == '\0';
      if (bVar7) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar7) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00108019;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_00108019;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar3 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar4 = _LC40;
        if (cVar3 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        uVar4 = Variant::operator_cast_to_ObjectID(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00107fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar4);
          return;
        }
        goto LAB_001080ca;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00108019:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC39,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001080ca:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorDebuggerInspector, void, ObjectID, String const&, Variant
   const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerInspector,void,ObjectID,String_const&,Variant_const&>::
call(CallableCustomMethodPointer<EditorDebuggerInspector,void,ObjectID,String_const&,Variant_const&>
     *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong *puVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> aCStack_78 [8];
  CowData<char32_t> local_70 [8];
  undefined8 local_68;
  Variant local_60 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_60[0] = (Variant)0x0;
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar6[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar7 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 4) {
          if (param_2 == 3) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar7 & 1) != 0) {
              pcVar7 = *(code **)(pcVar7 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar3 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0);
            if (cVar3 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = 2;
            }
            Variant::Variant((Variant *)local_58,param_1[2]);
            cVar3 = Variant::can_convert_strict(*(undefined4 *)param_1[1],4);
            uVar4 = _LC41;
            if (cVar3 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String(local_60);
            cVar3 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
            uVar4 = _LC40;
            if (cVar3 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            uVar4 = Variant::operator_cast_to_ObjectID(*param_1);
            (*pcVar7)((long *)(lVar1 + lVar2),uVar4,local_60,(Variant *)local_58);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          else {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 3;
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
        }
        goto LAB_00108195;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"\', can\'t call method.");
  uitos((ulong)aCStack_78);
  operator+((char *)local_70,(String *)"Invalid Object id \'");
  String::operator+((String *)local_60,(String *)local_70);
  _err_print_error(&_LC39,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_60,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref(aCStack_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_00108195:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CanvasItem::is_class(String const&) const */

undefined8 __thiscall CanvasItem::is_class(CanvasItem *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_001084cb;
  }
  cVar5 = String::operator==(param_1,"CanvasItem");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_001084cb;
    }
    cVar5 = String::operator==(param_1,"Node");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Object::is_class((Object *)this,param_1);
        return uVar6;
      }
      goto LAB_001085ce;
    }
  }
LAB_001084cb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001085ce:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::is_class(String const&) const */

undefined8 __thiscall Container::is_class(Container *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_001086eb;
  }
  cVar5 = String::operator==(param_1,"Container");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_001086eb;
    }
    cVar5 = String::operator==(param_1,"Control");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar6;
      }
      goto LAB_001087ee;
    }
  }
LAB_001086eb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001087ee:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspector::is_class(String const&) const */

undefined8 __thiscall EditorInspector::is_class(EditorInspector *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010890b;
  }
  cVar5 = String::operator==(param_1,"EditorInspector");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0010890b;
    }
    cVar5 = String::operator==(param_1,"ScrollContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_00108a0e;
    }
  }
LAB_0010890b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00108a0e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerInspector::is_class(String const&) const */

undefined8 __thiscall
EditorDebuggerInspector::is_class(EditorDebuggerInspector *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar4 != '\0') goto LAB_00108b1b;
  }
  cVar4 = String::operator==(param_1,"EditorDebuggerInspector");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = EditorInspector::is_class((EditorInspector *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00108b1b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspector::_initialize_classv() */

void EditorInspector::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (ScrollContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Object");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              local_70 = 0;
              String::parse_latin1((String *)&local_70,"Node");
              StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
              ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
              if ((StringName::configured != '\0') && (local_68 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((code *)PTR__bind_methods_00114040 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Node");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"CanvasItem");
            StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
            ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
            if ((StringName::configured != '\0') && (local_68 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_00114030 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"CanvasItem");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Control");
          StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Control");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Container");
        StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
        if ((StringName::configured != '\0') && (local_68 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "Container";
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "ScrollContainer";
      local_70 = 0;
      local_50 = 0xf;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      ScrollContainer::_bind_methods();
      ScrollContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "ScrollContainer";
    local_68 = 0;
    local_50 = 0xf;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorInspector";
    local_70 = 0;
    local_50 = 0xf;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if ((code *)PTR__bind_methods_00114038 != ScrollContainer::_bind_methods) {
      EditorInspector::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 0x18);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar2) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar3 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x38));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x28) != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x20));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0010926f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010926f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* EditorDebuggerRemoteObject::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void EditorDebuggerRemoteObject::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  List<PropertyInfo,DefaultAllocator> *this;
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
  
  this = (List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = "EditorDebuggerRemoteObject";
  local_88 = 0;
  local_90 = 0;
  local_70 = 0x1a;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorDebuggerRemoteObject";
  local_98 = 0;
  local_70 = 0x1a;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010942c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010942c:
  List<PropertyInfo,DefaultAllocator>::push_back(this,(PropertyInfo *)&local_78);
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
  StringName::StringName((StringName *)&local_78,"EditorDebuggerRemoteObject",false);
  ClassDB::get_property_list((StringName *)&local_78,(List *)this,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  _get_property_list((EditorDebuggerRemoteObject *)param_1,(List *)this);
  return;
}



/* List<Pair<PropertyInfo, Variant>, DefaultAllocator>::~List() */

void __thiscall
List<Pair<PropertyInfo,Variant>,DefaultAllocator>::~List
          (List<Pair<PropertyInfo,Variant>,DefaultAllocator> *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)this;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  do {
    pvVar1 = (void *)*puVar2;
    if (pvVar1 == (void *)0x0) {
      if (*(int *)(puVar2 + 2) != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(undefined8 **)((long)pvVar1 + 0x58) == puVar2) {
      *puVar2 = *(undefined8 *)((long)pvVar1 + 0x48);
      if (pvVar1 == (void *)puVar2[1]) {
        puVar2[1] = *(undefined8 *)((long)pvVar1 + 0x50);
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
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
      Memory::free_static(pvVar1,false);
      *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    puVar2 = *(undefined8 **)this;
  } while (*(int *)(puVar2 + 2) != 0);
  Memory::free_static(puVar2,false);
  return;
}



/* EditorDebuggerRemoteObject::clear() */

void __thiscall EditorDebuggerRemoteObject::clear(EditorDebuggerRemoteObject *this)

{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(this + 0x188);
  if (plVar5 != (long *)0x0) {
    do {
      pvVar2 = (void *)*plVar5;
      if (pvVar2 == (void *)0x0) goto LAB_0010975d;
      if (*(long **)((long)pvVar2 + 0x40) == plVar5) {
        lVar4 = *(long *)((long)pvVar2 + 0x30);
        lVar3 = *(long *)((long)pvVar2 + 0x38);
        *plVar5 = lVar4;
        if (pvVar2 == (void *)plVar5[1]) {
          plVar5[1] = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x30) = lVar4;
          lVar4 = *(long *)((long)pvVar2 + 0x30);
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x38) = lVar3;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x20));
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 8));
        Memory::free_static(pvVar2,false);
        *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar5 = *(long **)(this + 0x188);
    } while ((int)plVar5[2] != 0);
    Memory::free_static(plVar5,false);
    *(undefined8 *)(this + 0x188) = 0;
  }
LAB_0010975d:
  if ((*(long *)(this + 0x198) != 0) && (*(int *)(this + 0x1bc) != 0)) {
    lVar4 = 0;
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1b8) * 4);
    if (uVar1 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0x1a0) + lVar4) != 0) {
          *(int *)(*(long *)(this + 0x1a0) + lVar4) = 0;
          pvVar2 = *(void **)(*(long *)(this + 0x198) + lVar4 * 2);
          if (Variant::needs_deinit[*(int *)((long)pvVar2 + 0x18)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar2,false);
          *(undefined8 *)(*(long *)(this + 0x198) + lVar4 * 2) = 0;
        }
        lVar4 = lVar4 + 4;
      } while (lVar4 != (ulong)uVar1 << 2);
    }
    *(undefined4 *)(this + 0x1bc) = 0;
    *(undefined1 (*) [16])(this + 0x1a8) = (undefined1  [16])0x0;
  }
  return;
}



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  CowData<char32_t> *local_a8;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    local_80 = 0;
    local_88 = 0;
    local_78 = "Node";
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "Node";
    local_90 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_90);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
               &local_80);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref(local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  local_a8 = local_58;
  local_b0 = (CowData<char32_t> *)&local_70;
  local_80 = 0;
  local_88 = 0;
  local_78 = "CanvasItem";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "CanvasItem";
  local_90 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_a8);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00114048 != Object::_get_property_list) {
    CanvasItem::_get_property_list((List *)this);
  }
  if (param_2) {
    local_80 = 0;
    local_88 = 0;
    local_78 = "Node";
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "Node";
    local_90 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_90);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
               &local_80);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref(local_a8);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref(local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Control::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Control::_get_property_listv(Control *this,List *param_1,bool param_2)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    CanvasItem::_get_property_listv((CanvasItem *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Control";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Control";
  local_98 = 0;
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00109e31;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00109e31:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00114050 != CanvasItem::_get_property_list) {
    Control::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::_get_property_listv((CanvasItem *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Container::_get_property_listv(Container *this,List *param_1,bool param_2)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Container";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Container";
  local_98 = 0;
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010a101;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010a101:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Container",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Control::_get_property_listv((Control *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ScrollContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ScrollContainer::_get_property_listv(ScrollContainer *this,List *param_1,bool param_2)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ScrollContainer";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ScrollContainer";
  local_98 = 0;
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010a3b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010a3b1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"ScrollContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Container::_get_property_listv((Container *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspector::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorInspector::_get_property_listv(EditorInspector *this,List *param_1,bool param_2)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    ScrollContainer::_get_property_listv((ScrollContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorInspector";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorInspector";
  local_98 = 0;
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010a661;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010a661:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorInspector",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      ScrollContainer::_get_property_listv((ScrollContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerInspector::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
EditorDebuggerInspector::_get_property_listv
          (EditorDebuggerInspector *this,List *param_1,bool param_2)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    EditorInspector::_get_property_listv((EditorInspector *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorDebuggerInspector";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorDebuggerInspector";
  local_98 = 0;
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010a911;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010a911:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorDebuggerInspector",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorInspector::_get_property_listv((EditorInspector *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerRemoteObject::~EditorDebuggerRemoteObject() */

void __thiscall
EditorDebuggerRemoteObject::~EditorDebuggerRemoteObject(EditorDebuggerRemoteObject *this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0010f7a0;
  pvVar4 = *(void **)(this + 0x198);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0x1bc) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1b8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1bc) = 0;
        *(undefined1 (*) [16])(this + 0x1a8) = (undefined1  [16])0x0;
      }
      else {
        lVar3 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1a0) + lVar3) != 0) {
            pvVar4 = *(void **)((long)pvVar4 + lVar3 * 2);
            *(int *)(*(long *)(this + 0x1a0) + lVar3) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar4 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar4,false);
            pvVar4 = *(void **)(this + 0x198);
            *(undefined8 *)((long)pvVar4 + lVar3 * 2) = 0;
          }
          lVar3 = lVar3 + 4;
        } while (lVar3 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1bc) = 0;
        *(undefined1 (*) [16])(this + 0x1a8) = (undefined1  [16])0x0;
        if (pvVar4 == (void *)0x0) goto LAB_0010ab41;
      }
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0x1a0),false);
  }
LAB_0010ab41:
  plVar5 = *(long **)(this + 0x188);
  if (plVar5 != (long *)0x0) {
    do {
      pvVar4 = (void *)*plVar5;
      if (pvVar4 == (void *)0x0) {
        if ((int)plVar5[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_0010abee;
        }
        break;
      }
      if (*(long **)((long)pvVar4 + 0x40) == plVar5) {
        lVar3 = *(long *)((long)pvVar4 + 0x30);
        lVar2 = *(long *)((long)pvVar4 + 0x38);
        *plVar5 = lVar3;
        if (pvVar4 == (void *)plVar5[1]) {
          plVar5[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x30) = lVar3;
          lVar3 = *(long *)((long)pvVar4 + 0x30);
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x38) = lVar2;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar4 + 0x20));
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + 0x10) != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar4 + 8));
        Memory::free_static(pvVar4,false);
        *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar5 = *(long **)(this + 0x188);
    } while ((int)plVar5[2] != 0);
    Memory::free_static(plVar5,false);
  }
LAB_0010abee:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x180));
  Object::~Object((Object *)this);
  return;
}



/* EditorDebuggerRemoteObject::~EditorDebuggerRemoteObject() */

void __thiscall
EditorDebuggerRemoteObject::~EditorDebuggerRemoteObject(EditorDebuggerRemoteObject *this)

{
  ~EditorDebuggerRemoteObject(this);
  operator_delete(this,0x1c0);
  return;
}



/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
  int *piVar1;
  void *pvVar2;
  code *pcVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar7 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      lVar4 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x50) != 0) {
    LOCK();
    plVar7 = (long *)(*(long *)(this + 0x50) + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      piVar1 = *(int **)(this + 0x50);
      if (piVar1 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar4 = *(long *)(piVar1 + -2);
      lVar6 = 0;
      *(undefined8 *)(this + 0x50) = 0;
      piVar5 = piVar1;
      if (lVar4 != 0) {
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar4 != lVar6);
      }
      Memory::free_static(piVar1 + -4,false);
    }
  }
  plVar7 = *(long **)(this + 0x40);
  if (plVar7 != (long *)0x0) {
    do {
      pvVar2 = (void *)*plVar7;
      if (pvVar2 == (void *)0x0) {
        if ((int)plVar7[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_0010ae2a;
        }
        break;
      }
      if (*(long **)((long)pvVar2 + 0x40) == plVar7) {
        lVar4 = *(long *)((long)pvVar2 + 0x30);
        lVar6 = *(long *)((long)pvVar2 + 0x38);
        *plVar7 = lVar4;
        if (pvVar2 == (void *)plVar7[1]) {
          plVar7[1] = lVar6;
        }
        if (lVar6 != 0) {
          *(long *)(lVar6 + 0x30) = lVar4;
          lVar4 = *(long *)((long)pvVar2 + 0x30);
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x38) = lVar6;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x20));
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 8));
        Memory::free_static(pvVar2,false);
        *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar7 = *(long **)(this + 0x40);
    } while ((int)plVar7[2] != 0);
    Memory::free_static(plVar7,false);
  }
LAB_0010ae2a:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x28));
  if ((StringName::configured != '\0') && (*(long *)(this + 0x18) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x10));
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* EditorDebuggerInspector::_initialize_classv() */

void EditorDebuggerInspector::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (EditorInspector::initialize_class()::initialized == '\0') {
      if (ScrollContainer::initialize_class()::initialized == '\0') {
        if (Container::initialize_class()::initialized == '\0') {
          if (Control::initialize_class()::initialized == '\0') {
            if (CanvasItem::initialize_class()::initialized == '\0') {
              if (Node::initialize_class()::initialized == '\0') {
                Object::initialize_class();
                local_60 = 0;
                String::parse_latin1((String *)&local_60,"Object");
                StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
                local_70 = 0;
                String::parse_latin1((String *)&local_70,"Node");
                StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
                ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
                if ((StringName::configured != '\0') && (local_68 != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
                if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
                if ((code *)PTR__bind_methods_00114040 != Node::_bind_methods) {
                  Node::_bind_methods();
                }
                Node::initialize_class()::initialized = '\x01';
              }
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Node");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              local_70 = 0;
              String::parse_latin1((String *)&local_70,"CanvasItem");
              StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
              ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
              if ((StringName::configured != '\0') && (local_68 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              CanvasItem::_bind_methods();
              if ((code *)PTR__bind_compatibility_methods_00114030 !=
                  Object::_bind_compatibility_methods) {
                CanvasItem::_bind_compatibility_methods();
              }
              CanvasItem::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"CanvasItem");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"Control");
            StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
            ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
            if ((StringName::configured != '\0') && (local_68 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            Control::_bind_methods();
            Control::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Control");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Container");
          StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          Container::_bind_methods();
          Container::initialize_class()::initialized = '\x01';
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"ScrollContainer");
        StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
        if ((StringName::configured != '\0') && (local_68 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        ScrollContainer::_bind_methods();
        ScrollContainer::initialize_class()::initialized = '\x01';
      }
      local_58 = "ScrollContainer";
      local_68 = 0;
      local_50 = 0xf;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorInspector";
      local_70 = 0;
      local_50 = 0xf;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00114038 != ScrollContainer::_bind_methods) {
        EditorInspector::_bind_methods();
      }
      EditorInspector::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorInspector";
    local_68 = 0;
    local_50 = 0xf;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorDebuggerInspector";
    local_70 = 0;
    local_50 = 0x17;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::_lookup_pos(StringName const&,
   unsigned int&) const */

undefined8 __thiscall
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::_lookup_pos(HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              *this,StringName *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar15 = CONCAT44(0,uVar1);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar15;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == *(long *)param_1)) {
          *param_2 = uVar12;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar15, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar15, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::operator[](StringName const&) */

Variant * __thiscall
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::operator[](HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  void *__s;
  long lVar6;
  long lVar7;
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
  undefined1 auVar23 [16];
  char cVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  undefined8 uVar28;
  void *__s_00;
  undefined8 *puVar29;
  void *pvVar30;
  int iVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  undefined8 uVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  undefined8 *puVar39;
  long in_FS_OFFSET;
  Variant *local_e0;
  uint local_a0;
  uint local_9c;
  int local_98 [2];
  undefined1 local_90 [16];
  undefined1 local_78 [16];
  long local_68;
  int local_60 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = 0;
  cVar24 = _lookup_pos(this,param_1,&local_a0);
  if (cVar24 != '\0') {
    local_e0 = (Variant *)(*(long *)(*(long *)(this + 8) + (ulong)local_a0 * 8) + 0x18);
    goto LAB_0010bbf0;
  }
  local_90 = (undefined1  [16])0x0;
  local_98[0] = 0;
  local_98[1] = 0;
  uVar26 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
    uVar34 = (ulong)uVar26;
    uVar27 = uVar34 * 4;
    uVar38 = uVar34 * 8;
    uVar28 = Memory::alloc_static(uVar27,false);
    *(undefined8 *)(this + 0x10) = uVar28;
    pvVar30 = (void *)Memory::alloc_static(uVar38,false);
    *(void **)(this + 8) = pvVar30;
    if (uVar26 != 0) {
      pvVar5 = *(void **)(this + 0x10);
      if ((pvVar5 < (void *)((long)pvVar30 + uVar38)) && (pvVar30 < (void *)((long)pvVar5 + uVar27))
         ) {
        uVar27 = 0;
        do {
          *(undefined4 *)((long)pvVar5 + uVar27 * 4) = 0;
          *(undefined8 *)((long)pvVar30 + uVar27 * 8) = 0;
          uVar27 = uVar27 + 1;
        } while (uVar34 != uVar27);
      }
      else {
        memset(pvVar5,0,uVar27);
        memset(pvVar30,0,uVar38);
      }
    }
  }
  local_9c = 0;
  cVar24 = _lookup_pos(this,param_1,&local_9c);
  if (cVar24 == '\0') {
    if ((float)uVar26 * __LC17 < (float)(*(int *)(this + 0x2c) + 1)) {
      uVar26 = *(uint *)(this + 0x28);
      if (uVar26 == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        local_e0 = (Variant *)0x18;
        goto LAB_0010bbdb;
      }
      uVar27 = (ulong)(uVar26 + 1);
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar26 * 4);
      *(undefined4 *)(this + 0x2c) = 0;
      if (uVar26 + 1 < 2) {
        uVar27 = 2;
      }
      uVar26 = *(uint *)(hash_table_size_primes + uVar27 * 4);
      uVar34 = (ulong)uVar26;
      *(int *)(this + 0x28) = (int)uVar27;
      pvVar30 = *(void **)(this + 8);
      uVar27 = uVar34 * 4;
      uVar38 = uVar34 * 8;
      pvVar5 = *(void **)(this + 0x10);
      uVar28 = Memory::alloc_static(uVar27,false);
      *(undefined8 *)(this + 0x10) = uVar28;
      __s_00 = (void *)Memory::alloc_static(uVar38,false);
      *(void **)(this + 8) = __s_00;
      if (uVar26 != 0) {
        __s = *(void **)(this + 0x10);
        if ((__s < (void *)((long)__s_00 + uVar38)) && (__s_00 < (void *)((long)__s + uVar27))) {
          uVar27 = 0;
          do {
            *(undefined4 *)((long)__s + uVar27 * 4) = 0;
            *(undefined8 *)((long)__s_00 + uVar27 * 8) = 0;
            uVar27 = uVar27 + 1;
          } while (uVar34 != uVar27);
        }
        else {
          memset(__s,0,uVar27);
          memset(__s_00,0,uVar38);
        }
      }
      if (uVar3 != 0) {
        local_e0 = (Variant *)0x0;
        do {
          uVar26 = *(uint *)((long)pvVar5 + (long)local_e0 * 4);
          if (uVar26 != 0) {
            uVar36 = 0;
            lVar6 = *(long *)(this + 0x10);
            uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
            uVar27 = CONCAT44(0,uVar4);
            lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar26 * lVar7;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar27;
            lVar32 = SUB168(auVar8 * auVar16,8);
            puVar1 = (uint *)(lVar6 + lVar32 * 4);
            iVar31 = SUB164(auVar8 * auVar16,8);
            uVar37 = *puVar1;
            uVar28 = *(undefined8 *)((long)pvVar30 + (long)local_e0 * 8);
            while (uVar37 != 0) {
              auVar9._8_8_ = 0;
              auVar9._0_8_ = (ulong)uVar37 * lVar7;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar27;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = (ulong)((uVar4 + iVar31) - SUB164(auVar9 * auVar17,8)) * lVar7;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = uVar27;
              uVar25 = SUB164(auVar10 * auVar18,8);
              uVar35 = uVar28;
              if (uVar25 < uVar36) {
                puVar29 = (undefined8 *)((long)__s_00 + lVar32 * 8);
                *puVar1 = uVar26;
                uVar35 = *puVar29;
                *puVar29 = uVar28;
                uVar26 = uVar37;
                uVar36 = uVar25;
              }
              uVar36 = uVar36 + 1;
              auVar11._8_8_ = 0;
              auVar11._0_8_ = (ulong)(iVar31 + 1) * lVar7;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = uVar27;
              lVar32 = SUB168(auVar11 * auVar19,8);
              puVar1 = (uint *)(lVar6 + lVar32 * 4);
              iVar31 = SUB164(auVar11 * auVar19,8);
              uVar28 = uVar35;
              uVar37 = *puVar1;
            }
            *(undefined8 *)((long)__s_00 + lVar32 * 8) = uVar28;
            *puVar1 = uVar26;
            *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
          }
          local_e0 = (Variant *)((long)local_e0 + 1);
        } while ((Variant *)(ulong)uVar3 != local_e0);
        Memory::free_static(pvVar30,false);
        Memory::free_static(pvVar5,false);
      }
    }
    local_78 = (undefined1  [16])0x0;
    StringName::StringName((StringName *)&local_68,param_1);
    Variant::Variant((Variant *)local_60,(Variant *)local_98);
    puVar29 = (undefined8 *)operator_new(0x30,"");
    *puVar29 = local_78._0_8_;
    puVar29[1] = local_78._8_8_;
    StringName::StringName((StringName *)(puVar29 + 2),(StringName *)&local_68);
    local_e0 = (Variant *)(puVar29 + 3);
    Variant::Variant(local_e0,(Variant *)local_60);
    if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    if (*(undefined8 **)(this + 0x20) == (undefined8 *)0x0) {
      *(undefined8 **)(this + 0x18) = puVar29;
    }
    else {
      **(undefined8 **)(this + 0x20) = puVar29;
      puVar29[1] = *(undefined8 *)(this + 0x20);
    }
    *(undefined8 **)(this + 0x20) = puVar29;
    if (*(long *)param_1 == 0) {
      uVar26 = StringName::get_empty_hash();
    }
    else {
      uVar26 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar26 == 0) {
      uVar26 = 1;
    }
    uVar27 = (ulong)uVar26;
    uVar37 = 0;
    lVar6 = *(long *)(this + 0x10);
    lVar7 = *(long *)(this + 8);
    uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar38 = CONCAT44(0,uVar3);
    lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar27 * lVar32;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar38;
    lVar33 = SUB168(auVar12 * auVar20,8);
    puVar1 = (uint *)(lVar6 + lVar33 * 4);
    iVar31 = SUB164(auVar12 * auVar20,8);
    uVar4 = *puVar1;
    while (uVar4 != 0) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar4 * lVar32;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar38;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)((uVar3 + iVar31) - SUB164(auVar13 * auVar21,8)) * lVar32;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar38;
      uVar26 = SUB164(auVar14 * auVar22,8);
      puVar39 = puVar29;
      if (uVar26 < uVar37) {
        puVar2 = (undefined8 *)(lVar7 + lVar33 * 8);
        *puVar1 = (uint)uVar27;
        uVar27 = (ulong)uVar4;
        puVar39 = (undefined8 *)*puVar2;
        *puVar2 = puVar29;
        uVar37 = uVar26;
      }
      uVar26 = (uint)uVar27;
      uVar37 = uVar37 + 1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = (ulong)(iVar31 + 1) * lVar32;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar38;
      lVar33 = SUB168(auVar15 * auVar23,8);
      puVar1 = (uint *)(lVar6 + lVar33 * 4);
      iVar31 = SUB164(auVar15 * auVar23,8);
      puVar29 = puVar39;
      uVar4 = *puVar1;
    }
    *(undefined8 **)(lVar7 + lVar33 * 8) = puVar29;
    *puVar1 = uVar26;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  else {
    uVar27 = (ulong)local_9c;
    Variant::operator=((Variant *)(*(long *)(*(long *)(this + 8) + uVar27 * 8) + 0x18),
                       (Variant *)local_98);
    local_e0 = (Variant *)(*(long *)(*(long *)(this + 8) + uVar27 * 8) + 0x18);
  }
LAB_0010bbdb:
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0010bbf0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_e0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerRemoteObject::_setv(StringName const&, Variant const&) */

void __thiscall
EditorDebuggerRemoteObject::_setv
          (EditorDebuggerRemoteObject *this,StringName *param_1,Variant *param_2)

{
  _set(this,param_1,param_2);
  return;
}



/* EditorDebuggerRemoteObject::_getv(StringName const&, Variant&) const */

undefined4 __thiscall
EditorDebuggerRemoteObject::_getv
          (EditorDebuggerRemoteObject *this,StringName *param_1,Variant *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x198) != 0) && (*(int *)(this + 0x1bc) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1b8) * 4);
    uVar18 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1b8) * 8);
    if (*(long *)param_1 == 0) {
      uVar13 = StringName::get_empty_hash();
    }
    else {
      uVar13 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar13 == 0) {
      uVar13 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar18;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar16 = *(uint *)(*(long *)(this + 0x1a0) + lVar15 * 4);
    iVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar16 != 0) {
      uVar17 = 0;
      do {
        if ((uVar13 == uVar16) &&
           (*(long *)(*(long *)(*(long *)(this + 0x198) + lVar15 * 8) + 0x10) == *(long *)param_1))
        {
          local_44 = 0;
          uVar12 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                   ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                  *)(this + 400),param_1,&local_44);
          if ((char)uVar12 == '\0') {
            _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                             "FATAL: Condition \"!exists\" is true.",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar11 = (code *)invalidInstructionException();
            (*pcVar11)();
          }
          Variant::operator=(param_2,(Variant *)
                                     (*(long *)(*(long *)(this + 0x198) + (ulong)local_44 * 8) +
                                     0x18));
          goto LAB_0010bf4b;
        }
        uVar17 = uVar17 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar18;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar16 = *(uint *)(*(long *)(this + 0x1a0) + lVar15 * 4);
        iVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar16 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar16 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar18, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar14) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar18, uVar17 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  uVar12 = 0;
LAB_0010bf4b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EditorDebuggerRemoteObject, String>(String
   (EditorDebuggerRemoteObject::*)()) */

MethodBind * create_method_bind<EditorDebuggerRemoteObject,String>(_func_String *param_1)

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
  *(_func_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010fd98;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "EditorDebuggerRemoteObject";
  local_30 = 0x1a;
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



/* MethodBind* create_method_bind<EditorDebuggerRemoteObject, Variant, StringName const&>(Variant
   (EditorDebuggerRemoteObject::*)(StringName const&)) */

MethodBind *
create_method_bind<EditorDebuggerRemoteObject,Variant,StringName_const&>
          (_func_Variant_StringName_ptr *param_1)

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
  *(_func_Variant_StringName_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010fdf8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "EditorDebuggerRemoteObject";
  local_30 = 0x1a;
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



/* MethodBind* create_method_bind<EditorDebuggerRemoteObject>(void
   (EditorDebuggerRemoteObject::*)()) */

MethodBind * create_method_bind<EditorDebuggerRemoteObject>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0010fe58;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "EditorDebuggerRemoteObject";
  local_30 = 0x1a;
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



/* MethodBind* create_method_bind<EditorDebuggerRemoteObject, ObjectID>(ObjectID
   (EditorDebuggerRemoteObject::*)()) */

MethodBind * create_method_bind<EditorDebuggerRemoteObject,ObjectID>(_func_ObjectID *param_1)

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
  *(_func_ObjectID **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010feb8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "EditorDebuggerRemoteObject";
  local_30 = 0x1a;
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



/* EditorDebuggerRemoteObject::_bind_methods() [clone .cold] */

void EditorDebuggerRemoteObject::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorDebuggerRemoteObject::_initialize_classv() */

void EditorDebuggerRemoteObject::_initialize_classv(void)

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
    local_48 = "EditorDebuggerRemoteObject";
    local_60 = 0;
    local_40 = 0x1a;
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



/* void memdelete<HashMapElement<StringName, HashMap<StringName, EditorInspector::DocCacheInfo,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorInspector::DocCacheInfo> > > >
   >(HashMapElement<StringName, HashMap<StringName, EditorInspector::DocCacheInfo,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorInspector::DocCacheInfo> > > >*) */

void memdelete<HashMapElement<StringName,HashMap<StringName,EditorInspector::DocCacheInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorInspector::DocCacheInfo>>>>>
               (HashMapElement *param_1)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(param_1 + 0x20);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x40) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x28) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(param_1 + 0x28) + lVar2) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x20));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x18));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(param_1 + 0x20);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0010c5e5;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(param_1 + 0x28),false);
  }
LAB_0010c5e5:
  if ((StringName::configured != '\0') && (*(long *)(param_1 + 0x10) != 0)) {
    StringName::unref();
  }
  Memory::free_static(param_1,false);
  return;
}



/* EditorInspector::~EditorInspector() */

void __thiscall EditorInspector::~EditorInspector(EditorInspector *this)

{
  uint uVar1;
  CowData<char32_t> *pCVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  void *pvVar9;
  CowData<char32_t> *this_00;
  bool bVar10;
  
  *(undefined ***)this = &PTR__initialize_classv_0010f428;
  pvVar9 = *(void **)(this + 0xc68);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0xc8c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xc88) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xc8c) = 0;
        *(undefined1 (*) [16])(this + 0xc78) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xc70) + lVar6) != 0) {
            bVar10 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0xc70) + lVar6) = 0;
            pvVar9 = *(void **)((long)pvVar9 + lVar6 * 2);
            if ((bVar10) && (*(long *)((long)pvVar9 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar9,false);
            pvVar9 = *(void **)(this + 0xc68);
            *(undefined8 *)((long)pvVar9 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar1 << 2 != lVar6);
        *(undefined4 *)(this + 0xc8c) = 0;
        *(undefined1 (*) [16])(this + 0xc78) = (undefined1  [16])0x0;
        if (pvVar9 == (void *)0x0) goto LAB_0010c71a;
      }
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0xc70),false);
  }
LAB_0010c71a:
  if (Variant::needs_deinit[*(int *)(this + 0xc40)] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xc38));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xc30));
  pvVar9 = *(void **)(this + 0xc08);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0xc2c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xc28) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xc2c) = 0;
        *(undefined1 (*) [16])(this + 0xc18) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xc10) + lVar6) != 0) {
            *(int *)(*(long *)(this + 0xc10) + lVar6) = 0;
            Memory::free_static(*(void **)((long)pvVar9 + lVar6 * 2),false);
            pvVar9 = *(void **)(this + 0xc08);
            *(undefined8 *)((long)pvVar9 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xc2c) = 0;
        *(undefined1 (*) [16])(this + 0xc18) = (undefined1  [16])0x0;
        if (pvVar9 == (void *)0x0) goto LAB_0010c7e9;
      }
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0xc10),false);
  }
LAB_0010c7e9:
  pvVar9 = *(void **)(this + 0xbd8);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0xbfc) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xbf8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xbfc) = 0;
        *(undefined1 (*) [16])(this + 0xbe8) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xbe0) + lVar6) != 0) {
            pvVar9 = *(void **)((long)pvVar9 + lVar6 * 2);
            *(int *)(*(long *)(this + 0xbe0) + lVar6) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar9 + 0x18));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar9 + 0x10));
            Memory::free_static(pvVar9,false);
            pvVar9 = *(void **)(this + 0xbd8);
            *(undefined8 *)((long)pvVar9 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar1 << 2 != lVar6);
        *(undefined4 *)(this + 0xbfc) = 0;
        *(undefined1 (*) [16])(this + 0xbe8) = (undefined1  [16])0x0;
        if (pvVar9 == (void *)0x0) goto LAB_0010c8a0;
      }
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0xbe0),false);
  }
LAB_0010c8a0:
  pvVar9 = *(void **)(this + 0xba8);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0xbcc) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xbc8) * 4) != 0) {
        memset(*(void **)(this + 0xbc0),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xbc8) * 4) << 2);
        if (*(int *)(this + 0xbcc) == 0) goto LAB_0010cd80;
      }
      lVar6 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar9 + lVar6 * 8) != 0)) {
          StringName::unref();
          pvVar9 = *(void **)(this + 0xba8);
        }
        lVar6 = lVar6 + 1;
      } while ((uint)lVar6 < *(uint *)(this + 0xbcc));
      *(undefined4 *)(this + 0xbcc) = 0;
      if (pvVar9 == (void *)0x0) goto LAB_0010c93e;
    }
LAB_0010cd80:
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 3000),false);
    Memory::free_static(*(void **)(this + 0xbb0),false);
    Memory::free_static(*(void **)(this + 0xbc0),false);
  }
LAB_0010c93e:
  pvVar9 = *(void **)(this + 0xb80);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0xba4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xba0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xba4) = 0;
        *(undefined1 (*) [16])(this + 0xb90) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xb88) + lVar6) != 0) {
            *(int *)(*(long *)(this + 0xb88) + lVar6) = 0;
            memdelete<HashMapElement<StringName,HashMap<StringName,EditorInspector::DocCacheInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorInspector::DocCacheInfo>>>>>
                      (*(HashMapElement **)((long)pvVar9 + lVar6 * 2));
            pvVar9 = *(void **)(this + 0xb80);
            *(undefined8 *)((long)pvVar9 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xba4) = 0;
        *(undefined1 (*) [16])(this + 0xb90) = (undefined1  [16])0x0;
        if (pvVar9 == (void *)0x0) goto LAB_0010c9d7;
      }
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0xb88),false);
  }
LAB_0010c9d7:
  if (StringName::configured != '\0') {
    if (*(long *)(this + 0xb68) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ca15;
    }
    if (*(long *)(this + 0xb60) != 0) {
      StringName::unref();
    }
  }
LAB_0010ca15:
  pvVar9 = *(void **)(this + 0xaf8);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0xb1c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb18) * 4) != 0) {
        memset(*(void **)(this + 0xb10),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb18) * 4) << 2);
        if (*(int *)(this + 0xb1c) == 0) goto LAB_0010cc98;
      }
      lVar6 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar9 + lVar6 * 8) != 0)) {
          StringName::unref();
          pvVar9 = *(void **)(this + 0xaf8);
        }
        lVar6 = lVar6 + 1;
      } while ((uint)lVar6 < *(uint *)(this + 0xb1c));
      *(undefined4 *)(this + 0xb1c) = 0;
      if (pvVar9 == (void *)0x0) goto LAB_0010caae;
    }
LAB_0010cc98:
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0xb08),false);
    Memory::free_static(*(void **)(this + 0xb00),false);
    Memory::free_static(*(void **)(this + 0xb10),false);
  }
LAB_0010caae:
  plVar7 = *(long **)(this + 0xaf0);
  if (plVar7 != (long *)0x0) {
    do {
      pvVar9 = (void *)*plVar7;
      if (pvVar9 == (void *)0x0) {
        if ((int)plVar7[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_0010cb20;
        }
        break;
      }
      if (plVar7 == *(long **)((long)pvVar9 + 0x18)) {
        lVar6 = *(long *)((long)pvVar9 + 8);
        lVar8 = *(long *)((long)pvVar9 + 0x10);
        *plVar7 = lVar6;
        if (pvVar9 == (void *)plVar7[1]) {
          plVar7[1] = lVar8;
        }
        if (lVar8 != 0) {
          *(long *)(lVar8 + 8) = lVar6;
          lVar6 = *(long *)((long)pvVar9 + 8);
        }
        if (lVar6 != 0) {
          *(long *)(lVar6 + 0x10) = lVar8;
        }
        Memory::free_static(pvVar9,false);
        *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar7 = *(long **)(this + 0xaf0);
    } while ((int)plVar7[2] != 0);
    Memory::free_static(plVar7,false);
  }
LAB_0010cb20:
  HashMap<StringName,List<EditorProperty*,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,List<EditorProperty*,DefaultAllocator>>>>
  ::~HashMap((HashMap<StringName,List<EditorProperty*,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,List<EditorProperty*,DefaultAllocator>>>>
              *)(this + 0xac0));
  if (*(long *)(this + 0xa70) != 0) {
    LOCK();
    plVar7 = (long *)(*(long *)(this + 0xa70) + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      pCVar2 = *(CowData<char32_t> **)(this + 0xa70);
      if (pCVar2 == (CowData<char32_t> *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar6 = *(long *)(pCVar2 + -8);
      lVar8 = 0;
      *(undefined8 *)(this + 0xa70) = 0;
      this_00 = pCVar2;
      if (lVar6 != 0) {
        do {
          lVar8 = lVar8 + 1;
          CowData<char32_t>::_unref(this_00);
          this_00 = this_00 + 8;
        } while (lVar6 != lVar8);
      }
      Memory::free_static(pCVar2 + -0x10,false);
    }
  }
  *(code **)this = Control::~Control;
  if (*(long *)(this + 0xa58) != 0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      pOVar3 = *(Object **)(this + 0xa58);
      cVar5 = predelete_handler(pOVar3);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      pOVar3 = *(Object **)(this + 0xa50);
      cVar5 = predelete_handler(pOVar3);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  bVar10 = StringName::configured != '\0';
  *(code **)this = MethodBind::get_name;
  if (bVar10) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cc14;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010cc14:
  Control::~Control((Control *)this);
  return;
}



/* EditorInspector::~EditorInspector() */

void __thiscall EditorInspector::~EditorInspector(EditorInspector *this)

{
  ~EditorInspector(this);
  operator_delete(this,0xcb0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010cfd8) */
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



/* MethodBindTR<ObjectID>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<ObjectID>::call
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
      _err_print_error(&_LC39,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d310;
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
      local_58 = (char *)(*(code *)pVVar2)();
      Variant::Variant((Variant *)local_48,(ObjectID *)&local_58);
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
LAB_0010d310:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<ObjectID>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<ObjectID>::validated_call
          (MethodBindTR<ObjectID> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d5b2;
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
LAB_0010d5b2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<ObjectID>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<ObjectID>::ptrcall
          (MethodBindTR<ObjectID> *this,Object *param_1,void **param_2,void *param_3)

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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d771;
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
LAB_0010d771:
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
      _err_print_error(&_LC39,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d9f0;
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
LAB_0010d9f0:
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
      goto LAB_0010dd6f;
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
                    /* WARNING: Could not recover jumptable at 0x0010dc16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010dd6f:
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
      goto LAB_0010df2f;
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
                    /* WARNING: Could not recover jumptable at 0x0010ddd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010df2f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Variant, StringName const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<Variant,StringName_const&>::validated_call
          (MethodBindTR<Variant,StringName_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010dfad;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((Variant *)local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8);
  Variant::operator=(param_3,(Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0010dfad:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Variant, StringName const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Variant,StringName_const&>::ptrcall
          (MethodBindTR<Variant,StringName_const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e1bb;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((Variant *)local_48,param_1 + *(long *)(this + 0x60),*param_2);
  Variant::operator=((Variant *)param_3,(Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0010e1bb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<String>::call
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
      _err_print_error(&_LC39,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e430;
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
LAB_0010e430:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<String>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<String>::validated_call
          (MethodBindTR<String> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      local_48 = (Variant **)0x10d158;
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_0010e66c;
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
LAB_0010e66c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<String>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<String>::ptrcall
          (MethodBindTR<String> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (void **)0x10d158;
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_0010e83d;
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
LAB_0010e83d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Variant, StringName const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Variant,StringName_const&>::call
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
  bool bVar12;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_68 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC39,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010eb08;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010eb50;
LAB_0010eb40:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010eb50:
        uVar6 = 4;
        goto LAB_0010eafd;
      }
      if (in_R8D == 1) goto LAB_0010eb40;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x15);
    uVar4 = _LC91;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_68);
    (*(code *)pVVar11)(local_58,(Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    bVar12 = StringName::configured != '\0';
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if ((bVar12) && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    uVar6 = 3;
LAB_0010eafd:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0010eb08:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void call_get_argument_type_info_helper<StringName const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<StringName_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC8;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0x15,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88
               ,6,&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78._0_4_;
    if (*(long *)(param_3 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x18) = local_60;
    if (*(long *)(param_3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Variant, StringName const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindTR<Variant,StringName_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar4;
  long in_FS_OFFSET;
  undefined8 local_78;
  ulong local_70;
  long local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar4 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0;
  if (in_EDX == 0) {
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<StringName_const&>
              (0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined4 *)pPVar4 = (undefined4)local_68;
    *(undefined8 *)(pPVar4 + 8) = uVar2;
    *(undefined8 *)(pPVar4 + 0x10) = uVar3;
    *(undefined4 *)(pPVar4 + 0x18) = (undefined4)local_50;
    *(undefined8 *)(pPVar4 + 0x20) = local_48;
    *(undefined4 *)(pPVar4 + 0x28) = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  else {
    local_70 = 0;
    local_78 = 0;
    PropertyInfo::PropertyInfo
              (pPVar4,0,&local_78,0,(CowData<char32_t> *)&local_70,0x20006,&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerRemoteObject::_set(StringName const&, Variant const&) */

void EditorDebuggerRemoteObject::_GLOBAL__sub_I__set(void)

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
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

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
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, List<EditorProperty*, DefaultAllocator>, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   List<EditorProperty*, DefaultAllocator> > > >::~HashMap() */

void __thiscall
HashMap<StringName,List<EditorProperty*,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,List<EditorProperty*,DefaultAllocator>>>>
::~HashMap(HashMap<StringName,List<EditorProperty*,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,List<EditorProperty*,DefaultAllocator>>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<ObjectID>::~MethodBindTR() */

void __thiscall MethodBindTR<ObjectID>::~MethodBindTR(MethodBindTR<ObjectID> *this)

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
/* MethodBindTR<Variant, StringName const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Variant,StringName_const&>::~MethodBindTR
          (MethodBindTR<Variant,StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<String>::~MethodBindTR() */

void __thiscall MethodBindTR<String>::~MethodBindTR(MethodBindTR<String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorDebuggerInspector, void,
   ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerInspector,void,ObjectID>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerInspector,void,ObjectID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorDebuggerInspector, void, ObjectID, String const&, Variant
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerInspector,void,ObjectID,String_const&,Variant_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerInspector,void,ObjectID,String_const&,Variant_const&>
           *this)

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
/* EditorInspector::~EditorInspector() */

void __thiscall EditorInspector::~EditorInspector(EditorInspector *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorDebuggerRemoteObject::~EditorDebuggerRemoteObject() */

void __thiscall
EditorDebuggerRemoteObject::~EditorDebuggerRemoteObject(EditorDebuggerRemoteObject *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Pair<PropertyInfo, Variant>, DefaultAllocator>::~List() */

void __thiscall
List<Pair<PropertyInfo,Variant>,DefaultAllocator>::~List
          (List<Pair<PropertyInfo,Variant>,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


