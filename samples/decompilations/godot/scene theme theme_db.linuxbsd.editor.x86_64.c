
/* ThemeDB::get_fallback_base_scale() */

undefined4 __thiscall ThemeDB::get_fallback_base_scale(ThemeDB *this)

{
  return *(undefined4 *)(this + 0x188);
}



/* ThemeDB::get_fallback_font_size() */

undefined4 __thiscall ThemeDB::get_fallback_font_size(ThemeDB *this)

{
  return *(undefined4 *)(this + 0x198);
}



/* HashMap<Node*, ThemeContext*, HashMapHasherDefault, HashMapComparatorDefault<Node*>,
   DefaultTypedAllocator<HashMapElement<Node*, ThemeContext*> > >::_lookup_pos(Node* const&,
   unsigned int&) const [clone .isra.0] */

undefined8 __thiscall
HashMap<Node*,ThemeContext*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,ThemeContext*>>>
::_lookup_pos(HashMap<Node*,ThemeContext*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,ThemeContext*>>>
              *this,Node **param_1,uint *param_2)

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
           (*(Node ***)(*(long *)(*(long *)(this + 8) + lVar12 * 8) + 0x10) == param_1)) {
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



/* HashMap<Node*, ThemeContext*, HashMapHasherDefault, HashMapComparatorDefault<Node*>,
   DefaultTypedAllocator<HashMapElement<Node*, ThemeContext*> > >::erase(Node* const&) [clone
   .isra.0] */

void __thiscall
HashMap<Node*,ThemeContext*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,ThemeContext*>>>
::erase(HashMap<Node*,ThemeContext*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,ThemeContext*>>>
        *this,Node **param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
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
  uint uVar25;
  char cVar26;
  uint uVar27;
  int iVar28;
  long lVar29;
  ulong uVar30;
  long *plVar31;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  cVar26 = _lookup_pos(this,(Node **)*param_1,&local_44);
  if (cVar26 == '\0') goto LAB_001002e3;
  lVar8 = *(long *)(this + 0x10);
  lVar9 = *(long *)(this + 8);
  uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar30 = CONCAT44(0,uVar6);
  lVar10 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = (ulong)(local_44 + 1) * lVar10;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar30;
  lVar29 = SUB168(auVar13 * auVar19,8);
  puVar1 = (uint *)(lVar8 + lVar29 * 4);
  uVar27 = SUB164(auVar13 * auVar19,8);
  uVar7 = *puVar1;
  if (uVar7 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar7 * lVar10;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar30;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar6 + uVar27) - SUB164(auVar14 * auVar20,8)) * lVar10;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar30;
    iVar28 = SUB164(auVar15 * auVar21,8);
    while (uVar25 = uVar27, iVar28 != 0) {
      puVar2 = (uint *)(lVar8 + (ulong)local_44 * 4);
      *puVar1 = *puVar2;
      puVar3 = (undefined8 *)(lVar9 + lVar29 * 8);
      *puVar2 = uVar7;
      puVar4 = (undefined8 *)(lVar9 + (ulong)local_44 * 8);
      uVar11 = *puVar3;
      *puVar3 = *puVar4;
      *puVar4 = uVar11;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = (ulong)(uVar25 + 1) * lVar10;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar30;
      lVar29 = SUB168(auVar18 * auVar24,8);
      puVar1 = (uint *)(lVar8 + lVar29 * 4);
      uVar27 = SUB164(auVar18 * auVar24,8);
      uVar7 = *puVar1;
      local_44 = uVar25;
      if (uVar7 == 0) break;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)uVar7 * lVar10;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar30;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = (ulong)((uVar27 + uVar6) - SUB164(auVar16 * auVar22,8)) * lVar10;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar30;
      iVar28 = SUB164(auVar17 * auVar23,8);
    }
  }
  uVar30 = (ulong)local_44;
  plVar5 = (long *)(lVar9 + uVar30 * 8);
  *(undefined4 *)(lVar8 + uVar30 * 4) = 0;
  plVar31 = (long *)*plVar5;
  if (*(long **)(this + 0x18) == plVar31) {
    *(long *)(this + 0x18) = *plVar31;
    plVar31 = (long *)*plVar5;
    if (*(long **)(this + 0x20) != plVar31) goto LAB_001002a6;
LAB_00100308:
    *(long *)(this + 0x20) = plVar31[1];
    plVar31 = (long *)*plVar5;
    plVar12 = (long *)plVar31[1];
  }
  else {
    if (*(long **)(this + 0x20) == plVar31) goto LAB_00100308;
LAB_001002a6:
    plVar12 = (long *)plVar31[1];
  }
  if (plVar12 != (long *)0x0) {
    *plVar12 = *plVar31;
    plVar31 = (long *)*plVar5;
  }
  if (*plVar31 != 0) {
    *(long *)(*plVar31 + 8) = plVar31[1];
    plVar31 = (long *)*plVar5;
  }
  Memory::free_static(plVar31,false);
  *(undefined8 *)(*(long *)(this + 8) + uVar30 * 8) = 0;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
LAB_001002e3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ThemeDB::get_fallback_icon() */

void ThemeDB::get_fallback_icon(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x1a0) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x1a0);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* ThemeDB::get_fallback_stylebox() */

void ThemeDB::get_fallback_stylebox(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x1a8) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x1a8);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* List<ThemeDB::ThemeItemBind, DefaultAllocator>::push_back(ThemeDB::ThemeItemBind const&) [clone
   .isra.0] */

void __thiscall
List<ThemeDB::ThemeItemBind,DefaultAllocator>::push_back
          (List<ThemeDB::ThemeItemBind,DefaultAllocator> *this,ThemeItemBind *param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined4 *puVar3;
  code *pcVar4;
  undefined1 (*pauVar5) [16];
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined1 local_48 [16];
  code *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)this == 0) {
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  puVar3 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
  *(undefined1 (*) [16])(puVar3 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0x12) = (undefined1  [16])0x0;
  *(undefined8 *)(puVar3 + 6) = 0;
  *(undefined1 *)(puVar3 + 8) = 0;
  *(undefined8 *)(puVar3 + 0xe) = 0;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x16) = 0;
  *puVar3 = *(undefined4 *)param_1;
  StringName::operator=((StringName *)(puVar3 + 2),(StringName *)(param_1 + 8));
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_1 + 0x10));
  StringName::operator=((StringName *)(puVar3 + 6),(StringName *)(param_1 + 0x18));
  uVar6 = 0;
  local_30 = 0;
  *(ThemeItemBind *)(puVar3 + 8) = param_1[0x20];
  pcVar4 = *(code **)(param_1 + 0x38);
  local_38 = (code *)0x0;
  local_48 = (undefined1  [16])0x0;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(local_48,param_1 + 0x28,2);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    pcVar4 = *(code **)(param_1 + 0x38);
  }
  auVar2 = *(undefined1 (*) [16])(puVar3 + 10);
  local_38 = *(code **)(puVar3 + 0xe);
  *(code **)(puVar3 + 0xe) = pcVar4;
  local_30 = *(undefined8 *)(puVar3 + 0x10);
  *(undefined8 *)(puVar3 + 0x10) = uVar6;
  *(undefined8 *)(puVar3 + 10) = local_48._0_8_;
  *(undefined8 *)(puVar3 + 0xc) = local_48._8_8_;
  local_48 = auVar2;
  if (local_38 != (code *)0x0) {
    (*local_38)(local_48,local_48,3);
  }
  uVar6 = *(undefined8 *)(*(long *)this + 8);
  *(long *)(puVar3 + 0x16) = *(long *)this;
  plVar1 = *(long **)this;
  *(undefined8 *)(puVar3 + 0x12) = 0;
  *(undefined8 *)(puVar3 + 0x14) = uVar6;
  if (plVar1[1] != 0) {
    *(undefined4 **)(plVar1[1] + 0x48) = puVar3;
  }
  plVar1[1] = (long)puVar3;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar3;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ThemeDB::get_fallback_font() */

void ThemeDB::get_fallback_font(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 400) != 0) {
    *in_RDI = *(long *)(in_RSI + 400);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* ThemeDB::get_project_theme() */

void ThemeDB::get_project_theme(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x180) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x180);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* ThemeDB::get_default_theme() */

void ThemeDB::get_default_theme(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x178) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x178);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* ThemeContext::_emit_changed() */

void __thiscall ThemeContext::_emit_changed(ThemeContext *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)this + 0xd0))(this,CoreStringNames::singleton + 8,0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ThemeDB::set_fallback_font_size(int) */

void __thiscall ThemeDB::set_fallback_font_size(ThemeDB *this,int param_1)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x198) != param_1) {
    *(int *)(this + 0x198) = param_1;
    if (set_fallback_font_size(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar2 = __cxa_guard_acquire(&set_fallback_font_size(int)::{lambda()#1}::operator()()::sname);
      if (iVar2 != 0) {
        _scs_create((char *)&set_fallback_font_size(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &set_fallback_font_size(int)::{lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&set_fallback_font_size(int)::{lambda()#1}::operator()()::sname);
      }
    }
    (**(code **)(*(long *)this + 0xd0))
              (this,&set_fallback_font_size(int)::{lambda()#1}::operator()()::sname,0,0);
    if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ThemeDB::set_fallback_font(Ref<Font> const&) [clone .part.0] [clone .isra.0] */

void __thiscall ThemeDB::set_fallback_font(ThemeDB *this,Ref *param_1)

{
  Object *pOVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long in_FS_OFFSET;
  
  pOVar1 = *(Object **)(this + 400);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (Ref *)pOVar1) {
    *(Ref **)(this + 400) = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(this + 400) = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(pOVar1);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
  }
  if (set_fallback_font(Ref<Font>const&)::{lambda()#1}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&set_fallback_font(Ref<Font>const&)::{lambda()#1}::operator()()::
                                 sname);
    if (iVar4 != 0) {
      _scs_create((char *)&set_fallback_font(Ref<Font>const&)::{lambda()#1}::operator()()::sname,
                  true);
      __cxa_atexit(StringName::~StringName,
                   &set_fallback_font(Ref<Font>const&)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&set_fallback_font(Ref<Font>const&)::{lambda()#1}::operator()()::sname);
    }
  }
  (**(code **)(*(long *)this + 0xd0))
            (this,&set_fallback_font(Ref<Font>const&)::{lambda()#1}::operator()()::sname,0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ThemeDB::set_fallback_font(Ref<Font> const&) */

void __thiscall ThemeDB::set_fallback_font(ThemeDB *this,Ref *param_1)

{
  if (*(Ref **)(this + 400) != *(Ref **)param_1) {
    set_fallback_font(this,*(Ref **)param_1);
    return;
  }
  return;
}



/* ThemeDB::set_fallback_base_scale(float) */

void __thiscall ThemeDB::set_fallback_base_scale(ThemeDB *this,float param_1)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != *(float *)(this + 0x188)) {
    *(float *)(this + 0x188) = param_1;
    if ((set_fallback_base_scale(float)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar2 = __cxa_guard_acquire(&set_fallback_base_scale(float)::{lambda()#1}::operator()()::
                                     sname), iVar2 != 0)) {
      _scs_create((char *)&set_fallback_base_scale(float)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &set_fallback_base_scale(float)::{lambda()#1}::operator()()::sname,&__dso_handle)
      ;
      __cxa_guard_release(&set_fallback_base_scale(float)::{lambda()#1}::operator()()::sname);
    }
    (**(code **)(*(long *)this + 0xd0))
              (this,&set_fallback_base_scale(float)::{lambda()#1}::operator()()::sname,0,0);
    if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ThemeDB::set_fallback_icon(Ref<Texture2D> const&) */

void __thiscall ThemeDB::set_fallback_icon(ThemeDB *this,Ref *param_1)

{
  Object *pOVar1;
  Object *pOVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long in_FS_OFFSET;
  
  pOVar1 = *(Object **)(this + 0x1a0);
  pOVar2 = *(Object **)param_1;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if (pOVar1 != pOVar2) {
    *(Object **)(this + 0x1a0) = pOVar2;
    if (pOVar2 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)(this + 0x1a0) = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(pOVar1);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
    if (set_fallback_icon(Ref<Texture2D>const&)::{lambda()#1}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&set_fallback_icon(Ref<Texture2D>const&)::{lambda()#1}::
                                   operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&set_fallback_icon(Ref<Texture2D>const&)::{lambda()#1}::operator()()::
                             sname,true);
        __cxa_atexit(StringName::~StringName,
                     &set_fallback_icon(Ref<Texture2D>const&)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&set_fallback_icon(Ref<Texture2D>const&)::{lambda()#1}::operator()()::
                             sname);
      }
    }
    (**(code **)(*(long *)this + 0xd0))
              (this,&set_fallback_icon(Ref<Texture2D>const&)::{lambda()#1}::operator()()::sname,0,0)
    ;
    if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ThemeDB::set_fallback_stylebox(Ref<StyleBox> const&) */

void __thiscall ThemeDB::set_fallback_stylebox(ThemeDB *this,Ref *param_1)

{
  Object *pOVar1;
  Object *pOVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long in_FS_OFFSET;
  
  pOVar1 = *(Object **)(this + 0x1a8);
  pOVar2 = *(Object **)param_1;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if (pOVar1 != pOVar2) {
    *(Object **)(this + 0x1a8) = pOVar2;
    if (pOVar2 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)(this + 0x1a8) = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(pOVar1);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
    if (set_fallback_stylebox(Ref<StyleBox>const&)::{lambda()#1}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&set_fallback_stylebox(Ref<StyleBox>const&)::{lambda()#1}::
                                   operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&set_fallback_stylebox(Ref<StyleBox>const&)::{lambda()#1}::operator()()
                             ::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &set_fallback_stylebox(Ref<StyleBox>const&)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&set_fallback_stylebox(Ref<StyleBox>const&)::{lambda()#1}::operator()()
                             ::sname);
      }
    }
    (**(code **)(*(long *)this + 0xd0))
              (this,&set_fallback_stylebox(Ref<StyleBox>const&)::{lambda()#1}::operator()()::sname,0
               ,0);
    if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* ThemeDB::set_default_theme(Ref<Theme> const&) */

void __thiscall ThemeDB::set_default_theme(ThemeDB *this,Ref *param_1)

{
  Object *pOVar1;
  Object *pOVar2;
  char cVar3;
  
  pOVar1 = *(Object **)param_1;
  pOVar2 = *(Object **)(this + 0x178);
  if (pOVar1 != pOVar2) {
    *(Object **)(this + 0x178) = pOVar1;
    if (pOVar1 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(this + 0x178) = 0;
      }
    }
    if (pOVar2 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(pOVar2);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
          return;
        }
      }
    }
  }
  return;
}



/* ThemeDB::set_project_theme(Ref<Theme> const&) */

void __thiscall ThemeDB::set_project_theme(ThemeDB *this,Ref *param_1)

{
  Object *pOVar1;
  Object *pOVar2;
  char cVar3;
  
  pOVar1 = *(Object **)param_1;
  pOVar2 = *(Object **)(this + 0x180);
  if (pOVar1 != pOVar2) {
    *(Object **)(this + 0x180) = pOVar1;
    if (pOVar1 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(this + 0x180) = 0;
      }
    }
    if (pOVar2 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(pOVar2);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
          return;
        }
      }
    }
  }
  return;
}



/* ThemeDB::_finalize_theme_contexts() */

void __thiscall ThemeDB::_finalize_theme_contexts(ThemeDB *this)

{
  Object *pOVar1;
  long lVar2;
  char cVar3;
  
  pOVar1 = *(Object **)(this + 0x1b0);
  if (pOVar1 != (Object *)0x0) {
    cVar3 = predelete_handler(pOVar1);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
    *(undefined8 *)(this + 0x1b0) = 0;
  }
  if (*(int *)(this + 0x1e4) != 0) {
    do {
      lVar2 = *(long *)(this + 0x1d0);
      pOVar1 = *(Object **)(lVar2 + 0x18);
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
      HashMap<Node*,ThemeContext*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,ThemeContext*>>>
      ::erase((HashMap<Node*,ThemeContext*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,ThemeContext*>>>
               *)(this + 0x1b8),(Node **)(lVar2 + 0x10));
    } while (*(int *)(this + 0x1e4) != 0);
  }
  return;
}



/* ThemeDB::finalize_theme() */

void __thiscall ThemeDB::finalize_theme(ThemeDB *this)

{
  Object *pOVar1;
  char cVar2;
  long lVar3;
  
  lVar3 = RenderingServer::get_singleton();
  if (lVar3 == 0) {
    _err_print_error("finalize_theme","scene/theme/theme_db.cpp",0x69,
                     "Finalizing theme when there is no RenderingServer is an error; check the order of operations."
                     ,0,1);
  }
  _finalize_theme_contexts(this);
  if (*(long *)(this + 0x178) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x178);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined8 *)(this + 0x178) = 0;
  if (*(long *)(this + 400) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 400);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined8 *)(this + 400) = 0;
  if (*(long *)(this + 0x1a0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x1a0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined8 *)(this + 0x1a0) = 0;
  if (*(long *)(this + 0x1a8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x1a8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined8 *)(this + 0x1a8) = 0;
  return;
}



/* ThemeDB::get_theme_context(Node*) const */

long __thiscall ThemeDB::get_theme_context(ThemeDB *this,Node *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
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
  code *pcVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  long local_58;
  
  local_58 = *(long *)(this + 0x1c0);
  if (local_58 != 0) {
    if (*(int *)(this + 0x1e4) != 0) {
      lVar2 = *(long *)(this + 0x1c8);
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4);
      uVar28 = CONCAT44(0,uVar1);
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1e0) * 8);
      uVar20 = (long)param_1 * 0x3ffff - 1;
      uVar20 = (uVar20 ^ uVar20 >> 0x1f) * 0x15;
      uVar20 = (uVar20 ^ uVar20 >> 0xb) * 0x41;
      uVar19 = (uint)(uVar20 >> 0x16) ^ (uint)uVar20;
      uVar21 = 1;
      if (uVar19 != 0) {
        uVar21 = uVar19;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar21 * lVar3;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar28;
      lVar24 = SUB168(auVar4 * auVar11,8);
      uVar19 = *(uint *)(lVar2 + lVar24 * 4);
      uVar22 = SUB164(auVar4 * auVar11,8);
      if (uVar19 != 0) {
        uVar26 = 0;
        lVar25 = lVar24;
        uVar27 = uVar19;
        uVar23 = uVar22;
        do {
          if ((uVar21 == uVar27) && (*(Node **)(*(long *)(local_58 + lVar25 * 8) + 0x10) == param_1)
             ) {
            uVar27 = 0;
            do {
              if ((uVar21 == uVar19) &&
                 (*(Node **)(*(long *)(local_58 + lVar24 * 8) + 0x10) == param_1)) {
                return *(long *)(*(long *)(local_58 + (ulong)uVar22 * 8) + 0x18);
              }
              uVar27 = uVar27 + 1;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (ulong)(uVar22 + 1) * lVar3;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = uVar28;
              lVar24 = SUB168(auVar8 * auVar15,8);
              uVar19 = *(uint *)(lVar2 + lVar24 * 4);
              uVar22 = SUB164(auVar8 * auVar15,8);
            } while ((uVar19 != 0) &&
                    (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar19 * lVar3, auVar16._8_8_ = 0,
                    auVar16._0_8_ = uVar28, auVar10._8_8_ = 0,
                    auVar10._0_8_ = (ulong)((uVar1 + uVar22) - SUB164(auVar9 * auVar16,8)) * lVar3,
                    auVar17._8_8_ = 0, auVar17._0_8_ = uVar28, uVar27 <= SUB164(auVar10 * auVar17,8)
                    ));
            _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                             "FATAL: Condition \"!exists\" is true.",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar18 = (code *)invalidInstructionException();
            (*pcVar18)();
          }
          uVar26 = uVar26 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar23 + 1) * lVar3;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar28;
          lVar25 = SUB168(auVar5 * auVar12,8);
          uVar27 = *(uint *)(lVar2 + lVar25 * 4);
          uVar23 = SUB164(auVar5 * auVar12,8);
        } while ((uVar27 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar27 * lVar3, auVar13._8_8_ = 0,
                auVar13._0_8_ = uVar28, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar1 + uVar23) - SUB164(auVar6 * auVar13,8)) * lVar3,
                auVar14._8_8_ = 0, auVar14._0_8_ = uVar28, uVar26 <= SUB164(auVar7 * auVar14,8)));
      }
    }
    local_58 = 0;
  }
  return local_58;
}



/* ThemeDB::get_default_theme_context() const */

undefined8 __thiscall ThemeDB::get_default_theme_context(ThemeDB *this)

{
  return *(undefined8 *)(this + 0x1b0);
}



/* ThemeDB::get_nearest_theme_context(Node*) const */

undefined8 __thiscall ThemeDB::get_nearest_theme_context(ThemeDB *this,Node *param_1)

{
  long lVar1;
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
  char cVar12;
  Node **ppNVar13;
  ulong uVar14;
  undefined8 uVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((byte)param_1[0x2fa] & 0x40) == 0) {
    _err_print_error("get_nearest_theme_context","scene/theme/theme_db.cpp",0x13a,
                     "Condition \"!p_for_node->is_inside_tree()\" is true. Returning: nullptr",0,0);
    uVar15 = 0;
  }
  else {
    ppNVar13 = (Node **)Node::get_parent();
    while (ppNVar13 != (Node **)0x0) {
      lVar1 = *(long *)(this + 0x1c0);
      if ((lVar1 != 0) && (*(int *)(this + 0x1e4) != 0)) {
        uVar20 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4));
        lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1e0) * 8);
        uVar14 = (long)ppNVar13 * 0x3ffff - 1;
        uVar14 = (uVar14 ^ uVar14 >> 0x1f) * 0x15;
        uVar14 = (uVar14 ^ uVar14 >> 0xb) * 0x41;
        uVar14 = uVar14 >> 0x16 ^ uVar14;
        uVar18 = uVar14 & 0xffffffff;
        if ((int)uVar14 == 0) {
          uVar18 = 1;
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar18 * lVar2;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar20;
        lVar17 = SUB168(auVar3 * auVar7,8);
        uVar19 = *(uint *)(*(long *)(this + 0x1c8) + lVar17 * 4);
        iVar16 = SUB164(auVar3 * auVar7,8);
        if (uVar19 != 0) {
          uVar21 = 0;
          do {
            if ((uVar19 == (uint)uVar18) &&
               (ppNVar13 == *(Node ***)(*(long *)(lVar1 + lVar17 * 8) + 0x10))) {
              local_44 = 0;
              cVar12 = HashMap<Node*,ThemeContext*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,ThemeContext*>>>
                       ::_lookup_pos((HashMap<Node*,ThemeContext*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,ThemeContext*>>>
                                      *)(this + 0x1b8),ppNVar13,&local_44);
              if (cVar12 == '\0') {
                _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                                 "FATAL: Condition \"!exists\" is true.",0,0);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar11 = (code *)invalidInstructionException();
                (*pcVar11)();
              }
              uVar15 = *(undefined8 *)(*(long *)(lVar1 + (ulong)local_44 * 8) + 0x18);
              goto LAB_0010163a;
            }
            uVar21 = uVar21 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)(iVar16 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar20;
            lVar17 = SUB168(auVar4 * auVar8,8);
            uVar19 = *(uint *)(*(long *)(this + 0x1c8) + lVar17 * 4);
            iVar16 = SUB164(auVar4 * auVar8,8);
          } while ((uVar19 != 0) &&
                  (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar19 * lVar2, auVar9._8_8_ = 0,
                  auVar9._0_8_ = uVar20, auVar6._8_8_ = 0,
                  auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                   (ulong)*(uint *)(this + 0x1e0) * 4) + iVar16) -
                                        SUB164(auVar5 * auVar9,8)) * lVar2, auVar10._8_8_ = 0,
                  auVar10._0_8_ = uVar20, uVar21 <= SUB164(auVar6 * auVar10,8)));
        }
      }
      ppNVar13 = (Node **)Node::get_parent();
    }
    uVar15 = 0;
  }
LAB_0010163a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ThemeDB::get_singleton() */

undefined8 ThemeDB::get_singleton(void)

{
  return singleton;
}



/* ThemeDB::ThemeDB() */

void __thiscall ThemeDB::ThemeDB(ThemeDB *this)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  CallableCustom *this_00;
  long in_FS_OFFSET;
  Callable aCStack_48 [16];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Object::Object((Object *)this);
  *(undefined ***)this = &PTR__initialize_classv_00116870;
  uVar1 = _LC18;
  *(undefined4 *)(this + 0x188) = 0x3f800000;
  *(undefined8 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x198) = 0x10;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1e0) = uVar1;
  *(undefined8 *)(this + 0x210) = uVar1;
  *(undefined8 *)(this + 0x240) = uVar1;
  singleton = this;
  *(undefined1 (*) [16])(this + 0x178) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x220) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x230) = (undefined1  [16])0x0;
  MessageQueue::thread_singleton();
  lVar2 = lRam00000000001017bf;
  lVar3 = MessageQueue::main_singleton;
  if (*(long *)(in_FS_OFFSET + lRam00000000001017bf) != 0) {
    MessageQueue::thread_singleton();
    lVar3 = *(long *)(in_FS_OFFSET + lVar2);
  }
  if (lVar3 != 0) {
    this_00 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(this_00);
    *(ThemeDB **)(this_00 + 0x28) = this;
    *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)this_00 = &PTR_hash_00116a60;
    *(undefined8 *)(this_00 + 0x40) = 0;
    uVar1 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined8 *)(this_00 + 0x30) = uVar1;
    *(code **)(this_00 + 0x38) = _sort_theme_items;
    *(undefined **)(this_00 + 0x20) = &_LC19;
    CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
    *(char **)(this_00 + 0x20) = "ThemeDB::_sort_theme_items";
    Callable::Callable(aCStack_48,this_00);
    Variant::Variant((Variant *)local_38,0);
    Callable::call_deferredp((Variant **)aCStack_48,0);
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable(aCStack_48);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ThemeContext::get_fallback_theme() const */

void ThemeContext::get_fallback_theme(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  long lVar5;
  long in_RSI;
  long *in_RDI;
  
  lVar5 = ThemeDB::singleton;
  lVar1 = *(long *)(in_RSI + 400);
  if ((lVar1 == 0) || (lVar2 = *(long *)(lVar1 + -8), lVar2 == 0)) {
    *in_RDI = 0;
    if (*(long *)(lVar5 + 0x178) == 0) {
      return;
    }
    *in_RDI = *(long *)(lVar5 + 0x178);
    cVar4 = RefCounted::reference();
  }
  else {
    lVar5 = lVar2 + -1;
    if (lVar5 < 0) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *in_RDI = 0;
    lVar1 = *(long *)(lVar1 + lVar5 * 8);
    if (lVar1 == 0) {
      return;
    }
    *in_RDI = lVar1;
    cVar4 = RefCounted::reference();
  }
  if (cVar4 == '\0') {
    *in_RDI = 0;
  }
  return;
}



/* ThemeDB::_propagate_theme_context(Node*, ThemeContext*) */

void __thiscall ThemeDB::_propagate_theme_context(ThemeDB *this,Node *param_1,ThemeContext *param_2)

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
  int iVar10;
  ThemeContext *pTVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  long in_FS_OFFSET;
  Node *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (Node *)0x0) {
    pTVar11 = (ThemeContext *)__dynamic_cast(param_1,&Object::typeinfo,&Control::typeinfo,0);
    if (pTVar11 == (ThemeContext *)0x0) {
      pTVar11 = (ThemeContext *)__dynamic_cast(param_1,&Object::typeinfo,&Window::typeinfo,0);
      if (pTVar11 != (ThemeContext *)0x0) {
        Window::set_theme_context(pTVar11,SUB81(param_2,0));
      }
    }
    else {
      Control::set_theme_context(pTVar11,SUB81(param_2,0));
    }
  }
  iVar15 = 0;
  do {
    iVar10 = Node::get_child_count(SUB81(param_1,0));
    if (iVar10 <= iVar15) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_48 = (Node *)Node::get_child((int)param_1,SUB41(iVar15,0));
    if ((*(long *)(this + 0x1c0) != 0) && (*(int *)(this + 0x1e4) != 0)) {
      uVar18 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4));
      lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1e0) * 8);
      uVar12 = (long)local_48 * 0x3ffff - 1;
      uVar12 = (uVar12 ^ uVar12 >> 0x1f) * 0x15;
      uVar12 = (uVar12 ^ uVar12 >> 0xb) * 0x41;
      uVar12 = uVar12 >> 0x16 ^ uVar12;
      uVar16 = uVar12 & 0xffffffff;
      if ((int)uVar12 == 0) {
        uVar16 = 1;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar16 * lVar1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar18;
      lVar14 = SUB168(auVar2 * auVar6,8);
      uVar17 = *(uint *)(*(long *)(this + 0x1c8) + lVar14 * 4);
      iVar10 = SUB164(auVar2 * auVar6,8);
      if (uVar17 != 0) {
        uVar19 = 0;
        do {
          if (((uint)uVar16 == uVar17) &&
             (local_48 == *(Node **)(*(long *)(*(long *)(this + 0x1c0) + lVar14 * 8) + 0x10))) {
            plVar13 = (long *)HashMap<Node*,ThemeContext*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,ThemeContext*>>>
                              ::operator[]((HashMap<Node*,ThemeContext*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,ThemeContext*>>>
                                            *)(this + 0x1b8),&local_48);
            *(ThemeContext **)(*plVar13 + 0x180) = param_2;
            goto LAB_00101b82;
          }
          uVar19 = uVar19 + 1;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (ulong)(iVar10 + 1) * lVar1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar18;
          lVar14 = SUB168(auVar3 * auVar7,8);
          uVar17 = *(uint *)(*(long *)(this + 0x1c8) + lVar14 * 4);
          iVar10 = SUB164(auVar3 * auVar7,8);
        } while ((uVar17 != 0) &&
                (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar17 * lVar1, auVar8._8_8_ = 0,
                auVar8._0_8_ = uVar18, auVar5._8_8_ = 0,
                auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(this + 0x1e0) * 4) + iVar10) -
                                      SUB164(auVar4 * auVar8,8)) * lVar1, auVar9._8_8_ = 0,
                auVar9._0_8_ = uVar18, uVar19 <= SUB164(auVar5 * auVar9,8)));
      }
    }
    _propagate_theme_context(this,local_48,param_2);
LAB_00101b82:
    iVar15 = iVar15 + 1;
  } while( true );
}



/* ThemeDB::destroy_theme_context(Node*) */

void __thiscall ThemeDB::destroy_theme_context(ThemeDB *this,Node *param_1)

{
  long lVar1;
  code *pcVar2;
  Object *pOVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char cVar12;
  ulong uVar13;
  undefined8 *puVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  Node *local_60;
  ThemeDB local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = param_1;
  if ((*(long *)(this + 0x1c0) != 0) && (*(int *)(this + 0x1e4) != 0)) {
    uVar18 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1e0) * 8);
    uVar13 = (long)param_1 * 0x3ffff - 1;
    uVar13 = (uVar13 ^ uVar13 >> 0x1f) * 0x15;
    uVar13 = (uVar13 ^ uVar13 >> 0xb) * 0x41;
    uVar13 = uVar13 >> 0x16 ^ uVar13;
    uVar20 = uVar13 & 0xffffffff;
    if ((int)uVar13 == 0) {
      uVar20 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar20 * lVar1;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar18;
    lVar16 = SUB168(auVar4 * auVar8,8);
    uVar17 = *(uint *)(*(long *)(this + 0x1c8) + lVar16 * 4);
    iVar15 = SUB164(auVar4 * auVar8,8);
    if (uVar17 != 0) {
      uVar19 = 0;
      do {
        if (((uint)uVar20 == uVar17) &&
           (param_1 == *(Node **)(*(long *)(*(long *)(this + 0x1c0) + lVar16 * 8) + 0x10))) {
          pcVar2 = *(code **)(*(long *)param_1 + 0x110);
          create_custom_callable_function_pointer<ThemeDB,Node*>
                    (local_58,(char *)this,(_func_void_Node_ptr *)"&ThemeDB::destroy_theme_context")
          ;
          (*pcVar2)(param_1,SceneStringNames::singleton + 0x48,local_58);
          Callable::~Callable((Callable *)local_58);
          puVar14 = (undefined8 *)
                    HashMap<Node*,ThemeContext*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,ThemeContext*>>>
                    ::operator[]((HashMap<Node*,ThemeContext*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,ThemeContext*>>>
                                  *)(this + 0x1b8),&local_60);
          pOVar3 = (Object *)*puVar14;
          HashMap<Node*,ThemeContext*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,ThemeContext*>>>
          ::erase((HashMap<Node*,ThemeContext*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,ThemeContext*>>>
                   *)(this + 0x1b8),&local_60);
          _propagate_theme_context(this,param_1,*(ThemeContext **)(pOVar3 + 0x180));
          cVar12 = predelete_handler(pOVar3);
          if (cVar12 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
          goto LAB_00101df8;
        }
        uVar19 = uVar19 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(iVar15 + 1) * lVar1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar18;
        lVar16 = SUB168(auVar5 * auVar9,8);
        uVar17 = *(uint *)(*(long *)(this + 0x1c8) + lVar16 * 4);
        iVar15 = SUB164(auVar5 * auVar9,8);
      } while ((uVar17 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar17 * lVar1, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar18, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                               (ulong)*(uint *)(this + 0x1e0) * 4) + iVar15) -
                                    SUB164(auVar6 * auVar10,8)) * lVar1, auVar11._8_8_ = 0,
              auVar11._0_8_ = uVar18, uVar19 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  _err_print_error("destroy_theme_context","scene/theme/theme_db.cpp",0xea,
                   "Condition \"!theme_contexts.has(p_node)\" is true.",0,0);
LAB_00101df8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ThemeDB::get_class_items(StringName const&, List<ThemeDB::ThemeItemBind, DefaultAllocator>*,
   bool, Theme::DataType) */

void __thiscall
ThemeDB::get_class_items
          (ThemeDB *this,StringName *param_1,List<ThemeDB::ThemeItemBind,DefaultAllocator> *param_2,
          char param_3,int param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
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
  undefined8 uVar20;
  uint uVar21;
  undefined1 (*pauVar22) [16];
  StringName *this_00;
  uint uVar23;
  int iVar24;
  long lVar25;
  long *plVar26;
  ThemeItemBind *pTVar27;
  ulong uVar28;
  ulong uVar29;
  uint uVar30;
  uint uVar31;
  long *plVar32;
  long in_FS_OFFSET;
  undefined1 (*local_88) [16];
  long local_80;
  StringName local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (undefined1 (*) [16])0x0;
  StringName::StringName((StringName *)&local_80,param_1);
  if (local_80 != 0) {
    pauVar22 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)pauVar22[1] = 0;
    *pauVar22 = (undefined1  [16])0x0;
    local_88 = pauVar22;
    do {
      while( true ) {
        this_00 = (StringName *)operator_new(0x20,DefaultAllocator::alloc);
        *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
        StringName::operator=(this_00,(StringName *)&local_80);
        lVar2 = *(long *)*pauVar22;
        *(undefined1 (**) [16])(this_00 + 0x18) = pauVar22;
        *(undefined8 *)(this_00 + 0x10) = 0;
        *(long *)(this_00 + 8) = lVar2;
        if (lVar2 != 0) {
          *(StringName **)(lVar2 + 0x10) = this_00;
        }
        lVar2 = *(long *)(*pauVar22 + 8);
        *(StringName **)*pauVar22 = this_00;
        if (lVar2 == 0) {
          *(StringName **)(*pauVar22 + 8) = this_00;
        }
        *(int *)pauVar22[1] = *(int *)pauVar22[1] + 1;
        ClassDB::get_parent_class_nocheck((StringName *)local_68);
        if (local_80 == local_68._0_8_) break;
        StringName::unref();
        local_80 = local_68._0_8_;
joined_r0x00102371:
        if (local_80 == 0) goto LAB_00101f79;
      }
      if (StringName::configured != '\0') {
        if (local_80 != 0) {
          StringName::unref();
          goto joined_r0x00102371;
        }
        break;
      }
    } while (local_80 != 0);
LAB_00101f79:
    local_48 = 2;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    plVar26 = *(long **)*pauVar22;
    if (plVar26 != (long *)0x0) {
      plVar32 = (long *)0x0;
      do {
        if ((*(long *)(this + 0x220) != 0) && (*(int *)(this + 0x244) != 0)) {
          uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x240) * 4);
          uVar29 = CONCAT44(0,uVar1);
          lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x240) * 8);
          if (*plVar26 == 0) {
            uVar21 = StringName::get_empty_hash();
          }
          else {
            uVar21 = *(uint *)(*plVar26 + 0x20);
          }
          if (uVar21 == 0) {
            uVar21 = 1;
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)uVar21 * lVar2;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar29;
          lVar25 = SUB168(auVar4 * auVar12,8);
          uVar30 = *(uint *)(*(long *)(this + 0x228) + lVar25 * 4);
          uVar23 = SUB164(auVar4 * auVar12,8);
          if (uVar30 != 0) {
            uVar31 = 0;
            while ((uVar21 != uVar30 ||
                   (*(long *)(*(long *)(*(long *)(this + 0x220) + lVar25 * 8) + 0x10) != *plVar26)))
            {
              uVar31 = uVar31 + 1;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = (ulong)(uVar23 + 1) * lVar2;
              auVar13._8_8_ = 0;
              auVar13._0_8_ = uVar29;
              lVar25 = SUB168(auVar5 * auVar13,8);
              uVar30 = *(uint *)(*(long *)(this + 0x228) + lVar25 * 4);
              uVar23 = SUB164(auVar5 * auVar13,8);
              if ((uVar30 == 0) ||
                 (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar30 * lVar2, auVar14._8_8_ = 0,
                 auVar14._0_8_ = uVar29, auVar7._8_8_ = 0,
                 auVar7._0_8_ = (ulong)((uVar1 + uVar23) - SUB164(auVar6 * auVar14,8)) * lVar2,
                 auVar15._8_8_ = 0, auVar15._0_8_ = uVar29, SUB164(auVar7 * auVar15,8) < uVar31))
              goto LAB_001020f3;
            }
            lVar2 = *(long *)(*(long *)(this + 0x220) + (ulong)uVar23 * 8);
            if ((lVar2 != 0) &&
               (puVar3 = *(undefined8 **)(lVar2 + 0x18), puVar3 != (undefined8 *)0x0)) {
              for (pTVar27 = (ThemeItemBind *)*puVar3; pTVar27 != (ThemeItemBind *)0x0;
                  pTVar27 = *(ThemeItemBind **)(pTVar27 + 0x48)) {
                while( true ) {
                  if (param_5 != 6) {
                    while (*(int *)pTVar27 != param_5) {
                      pTVar27 = *(ThemeItemBind **)(pTVar27 + 0x48);
                      if (pTVar27 == (ThemeItemBind *)0x0) goto LAB_001020f3;
                    }
                  }
                  if ((plVar32 != (long *)0x0) && (local_48._4_4_ != 0)) {
                    uVar1 = *(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4);
                    lVar2 = *(long *)(hash_table_size_primes_inv + (local_48 & 0xffffffff) * 8);
                    if (*(long *)(pTVar27 + 0x10) == 0) {
                      uVar21 = StringName::get_empty_hash();
                    }
                    else {
                      uVar21 = *(uint *)(*(long *)(pTVar27 + 0x10) + 0x20);
                    }
                    uVar29 = CONCAT44(0,uVar1);
                    if (uVar21 == 0) {
                      uVar21 = 1;
                    }
                    auVar8._8_8_ = 0;
                    auVar8._0_8_ = (ulong)uVar21 * lVar2;
                    auVar16._8_8_ = 0;
                    auVar16._0_8_ = uVar29;
                    lVar25 = SUB168(auVar8 * auVar16,8);
                    uVar30 = *(uint *)(local_58._8_8_ + lVar25 * 4);
                    uVar28 = (ulong)uVar30;
                    iVar24 = SUB164(auVar8 * auVar16,8);
                    if (uVar30 != 0) {
                      uVar30 = 0;
                      do {
                        if ((uVar21 == (uint)uVar28) &&
                           (plVar32[*(uint *)(local_68._8_8_ + lVar25 * 4)] ==
                            *(long *)(pTVar27 + 0x10))) goto LAB_001022d2;
                        uVar30 = uVar30 + 1;
                        auVar9._8_8_ = 0;
                        auVar9._0_8_ = (ulong)(iVar24 + 1) * lVar2;
                        auVar17._8_8_ = 0;
                        auVar17._0_8_ = uVar29;
                        lVar25 = SUB168(auVar9 * auVar17,8);
                        uVar23 = *(uint *)(local_58._8_8_ + lVar25 * 4);
                        uVar28 = (ulong)uVar23;
                        iVar24 = SUB164(auVar9 * auVar17,8);
                      } while ((uVar23 != 0) &&
                              (auVar10._8_8_ = 0, auVar10._0_8_ = uVar28 * lVar2, auVar18._8_8_ = 0,
                              auVar18._0_8_ = uVar29, auVar11._8_8_ = 0,
                              auVar11._0_8_ =
                                   (ulong)((uVar1 + iVar24) - SUB164(auVar10 * auVar18,8)) * lVar2,
                              auVar19._8_8_ = 0, auVar19._0_8_ = uVar29,
                              uVar30 <= SUB164(auVar11 * auVar19,8)));
                    }
                  }
                  if ((pTVar27[0x20] == (ThemeItemBind)0x0) &&
                     (*(long *)(pTVar27 + 8) == *(long *)param_1)) break;
                  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
                  insert(local_78);
                  plVar32 = (long *)local_68._0_8_;
                  if (param_3 != '\0') break;
LAB_001022d2:
                  pTVar27 = *(ThemeItemBind **)(pTVar27 + 0x48);
                  if (pTVar27 == (ThemeItemBind *)0x0) goto LAB_001020f3;
                }
                List<ThemeDB::ThemeItemBind,DefaultAllocator>::push_back(param_2,pTVar27);
              }
            }
          }
        }
LAB_001020f3:
        plVar26 = (long *)plVar26[1];
      } while (plVar26 != (long *)0x0);
      if (plVar32 != (long *)0x0) {
        uVar29 = (ulong)local_48._4_4_;
        uVar20 = local_58._8_8_;
        if (local_48._4_4_ != 0) {
          if (*(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4) != 0) {
            memset((void *)local_58._8_8_,0,
                   (ulong)*(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4) * 4);
          }
          plVar26 = plVar32;
          do {
            if ((StringName::configured != '\0') && (*plVar26 != 0)) {
              StringName::unref();
            }
            plVar26 = plVar26 + 1;
          } while (plVar26 != plVar32 + uVar29);
        }
        Memory::free_static(plVar32,false);
        Memory::free_static((void *)local_58._0_8_,false);
        Memory::free_static((void *)local_68._8_8_,false);
        Memory::free_static((void *)uVar20,false);
      }
    }
  }
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_88);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ThemeDB::_sort_theme_items() */

void __thiscall ThemeDB::_sort_theme_items(ThemeDB *this)

{
  undefined8 *puVar1;
  
  for (puVar1 = *(undefined8 **)(this + 0x230); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    List<ThemeDB::ThemeItemBind,DefaultAllocator>::sort_custom<ThemeDB::ThemeItemBind::SortByType>
              ((List<ThemeDB::ThemeItemBind,DefaultAllocator> *)(puVar1 + 3));
  }
  return;
}



/* ThemeDB::update_class_instance_items(Node*) */

void __thiscall ThemeDB::update_class_instance_items(ThemeDB *this,Node *param_1)

{
  long lVar1;
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
  long *plVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  long in_FS_OFFSET;
  Node *local_50;
  Node *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (Node *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("update_class_instance_items","scene/theme/theme_db.cpp",0x167,
                       "Parameter \"p_instance\" is null.",0,0);
      return;
    }
  }
  else {
    (**(code **)(*(long *)param_1 + 0x48))((CowData<char32_t> *)&local_48);
    StringName::StringName((StringName *)&local_50,(String *)&local_48,false);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0010244c:
    if (local_50 != (Node *)0x0) {
LAB_00102455:
      lVar1 = *(long *)(this + 0x1f0);
      if ((lVar1 != 0) && (*(int *)(this + 0x214) != 0)) {
        uVar16 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x210) * 4));
        lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x210) * 8);
        uVar11 = *(uint *)(local_50 + 0x20);
        if (*(uint *)(local_50 + 0x20) == 0) {
          uVar11 = 1;
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)uVar11 * lVar2;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar16;
        lVar13 = SUB168(auVar3 * auVar7,8);
        uVar15 = *(uint *)(*(long *)(this + 0x1f8) + lVar13 * 4);
        uVar12 = SUB164(auVar3 * auVar7,8);
        if (uVar15 != 0) {
          uVar17 = 0;
          while ((uVar11 != uVar15 || (local_50 != *(Node **)(*(long *)(lVar1 + lVar13 * 8) + 0x10))
                 )) {
            uVar17 = uVar17 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar16;
            lVar13 = SUB168(auVar4 * auVar8,8);
            uVar15 = *(uint *)(*(long *)(this + 0x1f8) + lVar13 * 4);
            uVar12 = SUB164(auVar4 * auVar8,8);
            if ((uVar15 == 0) ||
               (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar15 * lVar2, auVar9._8_8_ = 0,
               auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
               auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                (ulong)*(uint *)(this + 0x210) * 4) + uVar12) -
                                     SUB164(auVar5 * auVar9,8)) * lVar2, auVar10._8_8_ = 0,
               auVar10._0_8_ = uVar16, SUB164(auVar6 * auVar10,8) < uVar17)) goto LAB_0010256b;
          }
          lVar1 = *(long *)(lVar1 + (ulong)uVar12 * 8);
          if ((lVar1 != 0) && (plVar14 = *(long **)(lVar1 + 0x30), plVar14 != (long *)0x0))
          goto LAB_00102540;
        }
      }
      goto LAB_0010256b;
    }
LAB_001025a1:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_0010262c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    (*(code *)plVar14[0xb])(plVar14 + 8,(CowData<char32_t> *)&local_48,plVar14 + 5,plVar14 + 6);
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) break;
LAB_00102540:
    local_48 = param_1;
    if (plVar14[10] == 0) {
      std::__throw_bad_function_call();
      goto LAB_0010262c;
    }
  }
LAB_0010256b:
  ClassDB::get_parent_class_nocheck((StringName *)&local_48);
  if (local_50 == local_48) goto LAB_001025c0;
  StringName::unref();
  local_50 = local_48;
  if (local_48 == (Node *)0x0) goto LAB_001025a1;
  goto LAB_00102455;
LAB_001025c0:
  if (StringName::configured != '\0') {
    if (local_50 == (Node *)0x0) goto LAB_001025a1;
    StringName::unref();
  }
  goto LAB_0010244c;
}



/* ThemeContext::_bind_methods() */

void ThemeContext::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_d8;
  long local_d0;
  char *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  CowData<char32_t> local_a8 [8];
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  int *local_68;
  undefined8 local_60;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = 0;
  local_b0 = 7;
  local_b8 = "changed";
  String::parse_latin1((StrRange *)&local_d0);
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  _local_a8 = (undefined1  [16])0x0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_d0);
  }
  local_d8 = 0;
  local_c0 = 0xc;
  local_c8 = "ThemeContext";
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_d8,false);
  ClassDB::add_signal((StringName *)&local_c8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
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
  piVar4 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_68 + -2);
      local_68 = (int *)0x0;
      if (lVar2 != 0) {
        lVar6 = 0;
        piVar5 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ThemeDB::~ThemeDB() */

void __thiscall ThemeDB::~ThemeDB(ThemeDB *this)

{
  uint uVar1;
  uint uVar2;
  Object *pOVar3;
  char cVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  
  *(undefined ***)this = &PTR__initialize_classv_00116870;
  _finalize_theme_contexts(this);
  if (*(long *)(this + 0x178) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x178);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  *(undefined8 *)(this + 0x178) = 0;
  if (*(long *)(this + 0x180) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x180);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  *(undefined8 *)(this + 0x180) = 0;
  if (*(long *)(this + 400) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 400);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  *(undefined8 *)(this + 400) = 0;
  if (*(long *)(this + 0x1a0) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x1a0);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  *(undefined8 *)(this + 0x1a0) = 0;
  if (*(long *)(this + 0x1a8) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x1a8);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  pvVar9 = *(void **)(this + 0x220);
  *(undefined8 *)(this + 0x1a8) = 0;
  singleton = 0;
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0x244) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x240) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x244) = 0;
        *(undefined1 (*) [16])(this + 0x230) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x228) + lVar6) != 0) {
            pvVar9 = *(void **)((long)pvVar9 + lVar6 * 2);
            *(int *)(*(long *)(this + 0x228) + lVar6) = 0;
            List<ThemeDB::ThemeItemBind,DefaultAllocator>::~List
                      ((List<ThemeDB::ThemeItemBind,DefaultAllocator> *)((long)pvVar9 + 0x18));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar9 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar9,false);
            pvVar9 = *(void **)(this + 0x220);
            *(undefined8 *)((long)pvVar9 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x244) = 0;
        *(undefined1 (*) [16])(this + 0x230) = (undefined1  [16])0x0;
        if (pvVar9 == (void *)0x0) goto LAB_00102a81;
      }
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0x228),false);
  }
LAB_00102a81:
  pvVar9 = *(void **)(this + 0x1f0);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0x214) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x210) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x214) = 0;
        *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1f8) + lVar6) != 0) {
            pvVar9 = *(void **)((long)pvVar9 + lVar6 * 2);
            *(int *)(*(long *)(this + 0x1f8) + lVar6) = 0;
            pvVar8 = *(void **)((long)pvVar9 + 0x20);
            if (pvVar8 != (void *)0x0) {
              if (*(int *)((long)pvVar9 + 0x44) != 0) {
                uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar9 + 0x40) * 4
                                 );
                if (uVar2 == 0) {
                  *(undefined4 *)((long)pvVar9 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar9 + 0x30) = (undefined1  [16])0x0;
                }
                else {
                  lVar7 = 0;
                  do {
                    piVar5 = (int *)(*(long *)((long)pvVar9 + 0x28) + lVar7);
                    if (*piVar5 != 0) {
                      pvVar8 = *(void **)((long)pvVar8 + lVar7 * 2);
                      *piVar5 = 0;
                      if (*(code **)((long)pvVar8 + 0x50) != (code *)0x0) {
                        (**(code **)((long)pvVar8 + 0x50))
                                  ((long)pvVar8 + 0x40,(long)pvVar8 + 0x40,3);
                      }
                      if (StringName::configured != '\0') {
                        if (*(long *)((long)pvVar8 + 0x30) != 0) {
                          StringName::unref();
                          if (StringName::configured == '\0') goto LAB_00102bd1;
                        }
                        if (*(long *)((long)pvVar8 + 0x28) != 0) {
                          StringName::unref();
                          if (StringName::configured == '\0') goto LAB_00102bd1;
                        }
                        if (*(long *)((long)pvVar8 + 0x20) != 0) {
                          StringName::unref();
                          if (StringName::configured == '\0') goto LAB_00102bd1;
                        }
                        if (*(long *)((long)pvVar8 + 0x10) != 0) {
                          StringName::unref();
                        }
                      }
LAB_00102bd1:
                      Memory::free_static(pvVar8,false);
                      pvVar8 = *(void **)((long)pvVar9 + 0x20);
                      *(undefined8 *)((long)pvVar8 + lVar7 * 2) = 0;
                    }
                    lVar7 = lVar7 + 4;
                  } while (lVar7 != (ulong)uVar2 << 2);
                  *(undefined4 *)((long)pvVar9 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar9 + 0x30) = (undefined1  [16])0x0;
                  if (pvVar8 == (void *)0x0) goto LAB_00102c16;
                }
              }
              Memory::free_static(pvVar8,false);
              Memory::free_static(*(void **)((long)pvVar9 + 0x28),false);
            }
LAB_00102c16:
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar9 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar9,false);
            pvVar9 = *(void **)(this + 0x1f0);
            *(undefined8 *)((long)pvVar9 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar1 << 2 != lVar6);
        *(undefined4 *)(this + 0x214) = 0;
        *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
        if (pvVar9 == (void *)0x0) goto LAB_00102c7c;
      }
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0x1f8),false);
  }
LAB_00102c7c:
  pvVar9 = *(void **)(this + 0x1c0);
  if (pvVar9 != (void *)0x0) {
    if (*(int *)(this + 0x1e4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1e4) = 0;
        *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1c8) + lVar6) != 0) {
            *(int *)(*(long *)(this + 0x1c8) + lVar6) = 0;
            Memory::free_static(*(void **)((long)pvVar9 + lVar6 * 2),false);
            pvVar9 = *(void **)(this + 0x1c0);
            *(undefined8 *)((long)pvVar9 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1e4) = 0;
        *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
        if (pvVar9 == (void *)0x0) goto LAB_00102d17;
      }
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static(*(void **)(this + 0x1c8),false);
  }
LAB_00102d17:
  if (*(long *)(this + 0x1a8) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x1a8);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0x1a0) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x1a0);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 400) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 400);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0x180) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x180);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0x178) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x178);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  Object::~Object((Object *)this);
  return;
}



/* ThemeDB::~ThemeDB() */

void __thiscall ThemeDB::~ThemeDB(ThemeDB *this)

{
  ~ThemeDB(this);
  operator_delete(this,0x248);
  return;
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<StringName>::_copy_on_write(CowData<StringName> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  StringName *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar6 = lVar2 * 8 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar2;
    this_00 = (StringName *)(puVar4 + 2);
    if (lVar2 != 0) {
      do {
        lVar1 = lVar5 * 8;
        lVar5 = lVar5 + 1;
        StringName::StringName(this_00,(StringName *)(*(long *)this + lVar1));
        this_00 = this_00 + 8;
      } while (lVar2 != lVar5);
    }
    _unref(this);
    *(StringName **)this = (StringName *)(puVar4 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* ThemeDB::_bind_methods() */

void ThemeDB::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  MethodBind *pMVar5;
  uint uVar6;
  int *piVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  long local_f8;
  long local_f0;
  char *local_e8;
  undefined8 local_e0;
  char *local_d8;
  undefined8 local_d0;
  CowData<StringName> local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98 [2];
  int *local_88;
  undefined8 local_80;
  long local_70;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)&local_d8,(char ***)"get_default_theme",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<ThemeDB,Ref<Theme>>(get_default_theme);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"get_project_theme",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<ThemeDB,Ref<Theme>>(get_project_theme);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "base_scale";
  local_60 = 0;
  uVar6 = (uint)&local_58;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_fallback_base_scale",uVar6);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<ThemeDB,float>(set_fallback_base_scale);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"get_fallback_base_scale",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<ThemeDB,float>(get_fallback_base_scale);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "font";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_fallback_font",uVar6);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<ThemeDB,Ref<Font>const&>(set_fallback_font);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"get_fallback_font",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<ThemeDB,Ref<Font>>(get_fallback_font);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "font_size";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_fallback_font_size",uVar6);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<ThemeDB,int>(set_fallback_font_size);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"get_fallback_font_size",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<ThemeDB,int>(get_fallback_font_size);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "icon";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_fallback_icon",uVar6);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<ThemeDB,Ref<Texture2D>const&>(set_fallback_icon);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"get_fallback_icon",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<ThemeDB,Ref<Texture2D>>(get_fallback_icon);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "stylebox";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_fallback_stylebox",uVar6);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<ThemeDB,Ref<StyleBox>const&>(set_fallback_stylebox);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"get_fallback_stylebox",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<ThemeDB,Ref<StyleBox>>(get_fallback_stylebox);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_e8 = (char *)0x0;
  local_d8 = "fallback_";
  local_d0 = 9;
  String::parse_latin1((StrRange *)&local_e8);
  local_d8 = "Fallback values";
  local_f0 = 0;
  local_d0 = 0xf;
  String::parse_latin1((StrRange *)&local_f0);
  local_f8 = 0;
  String::parse_latin1((String *)&local_f8,"ThemeDB");
  StringName::StringName((StringName *)&local_d8,(String *)&local_f8,false);
  ClassDB::add_property_group((StringName *)&local_d8,(String *)&local_f0,(String *)&local_e8,0);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  _scs_create((char *)&local_f0,true);
  _scs_create((char *)&local_f8,true);
  local_100 = 0;
  local_d8 = "0.0,2.0,0.01,or_greater";
  local_108 = 0;
  local_d0 = 0x17;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  local_d8 = "fallback_base_scale";
  local_d0 = 0x13;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,3,(StrRange *)&local_110,1,(StrRange *)&local_108,6,
             &local_100);
  local_e8 = "ThemeDB";
  local_118 = 0;
  local_e0 = 7;
  String::parse_latin1((StrRange *)&local_118);
  StringName::StringName((StringName *)&local_e8,(String *)&local_118,false);
  ClassDB::add_property
            ((StringName *)&local_e8,(PropertyInfo *)&local_d8,(StringName *)&local_f8,
             (StringName *)&local_f0,-1);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((((StringName::configured != '\0') &&
       ((local_100 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_f8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_f0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_f0,true);
  _scs_create((char *)&local_f8,true);
  local_d8 = "Font";
  local_100 = 0;
  local_108 = 0;
  local_d0 = 4;
  String::parse_latin1((StrRange *)&local_108);
  local_d8 = "fallback_font";
  local_110 = 0;
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,0x18,(StrRange *)&local_110,0x11,(StrRange *)&local_108,0,
             &local_100);
  local_e8 = "ThemeDB";
  local_118 = 0;
  local_e0 = 7;
  String::parse_latin1((StrRange *)&local_118);
  StringName::StringName((StringName *)&local_e8,(String *)&local_118,false);
  ClassDB::add_property
            ((StringName *)&local_e8,(PropertyInfo *)&local_d8,(StringName *)&local_f8,
             (StringName *)&local_f0,-1);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((((StringName::configured != '\0') &&
       ((local_100 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_f8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_f0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_f0,true);
  _scs_create((char *)&local_f8,true);
  local_d8 = "0,256,1,or_greater,suffix:px";
  local_100 = 0;
  local_108 = 0;
  local_d0 = 0x1c;
  String::parse_latin1((StrRange *)&local_108);
  local_d8 = "fallback_font_size";
  local_110 = 0;
  local_d0 = 0x12;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,2,(StrRange *)&local_110,1,(StrRange *)&local_108,6,
             &local_100);
  local_e8 = "ThemeDB";
  local_118 = 0;
  local_e0 = 7;
  String::parse_latin1((StrRange *)&local_118);
  StringName::StringName((StringName *)&local_e8,(String *)&local_118,false);
  ClassDB::add_property
            ((StringName *)&local_e8,(PropertyInfo *)&local_d8,(StringName *)&local_f8,
             (StringName *)&local_f0,-1);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((((StringName::configured != '\0') &&
       ((local_100 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_f8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_f0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_f0,true);
  _scs_create((char *)&local_f8,true);
  local_d8 = "Texture2D";
  local_100 = 0;
  local_108 = 0;
  local_d0 = 9;
  String::parse_latin1((StrRange *)&local_108);
  local_d8 = "fallback_icon";
  local_110 = 0;
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,0x18,(StrRange *)&local_110,0x11,(StrRange *)&local_108,0,
             &local_100);
  local_e8 = "ThemeDB";
  local_118 = 0;
  local_e0 = 7;
  String::parse_latin1((StrRange *)&local_118);
  StringName::StringName((StringName *)&local_e8,(String *)&local_118,false);
  ClassDB::add_property
            ((StringName *)&local_e8,(PropertyInfo *)&local_d8,(StringName *)&local_f8,
             (StringName *)&local_f0,-1);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if (((StringName::configured != '\0') &&
      ((local_100 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_f8 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_f0 != 0)))
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_f0,true);
  _scs_create((char *)&local_f8,true);
  local_d8 = "StyleBox";
  local_100 = 0;
  local_108 = 0;
  local_d0 = 8;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  local_d8 = "fallback_stylebox";
  local_d0 = 0x11;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,0x18,(StrRange *)&local_110,0x11,(StrRange *)&local_108,0,
             &local_100);
  local_118 = 0;
  String::parse_latin1((String *)&local_118,"ThemeDB");
  StringName::StringName((StringName *)&local_e8,(String *)&local_118,false);
  ClassDB::add_property
            ((StringName *)&local_e8,(PropertyInfo *)&local_d8,(StringName *)&local_f8,
             (StringName *)&local_f0,-1);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((((StringName::configured != '\0') &&
       ((local_100 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_f8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_f0 != 0)
     ) {
    StringName::unref();
  }
  local_f0 = 0;
  local_d8 = "fallback_changed";
  local_d0 = 0x10;
  String::parse_latin1((StrRange *)&local_f0);
  local_c8[0] = (CowData<StringName>)0x0;
  local_c8[1] = (CowData<StringName>)0x0;
  local_c8[2] = (CowData<StringName>)0x0;
  local_c8[3] = (CowData<StringName>)0x0;
  local_c8[4] = (CowData<StringName>)0x0;
  local_c8[5] = (CowData<StringName>)0x0;
  local_c8[6] = (CowData<StringName>)0x0;
  local_c8[7] = (CowData<StringName>)0x0;
  local_c8[8] = (CowData<StringName>)0x0;
  local_c8[9] = (CowData<StringName>)0x0;
  local_c8[10] = (CowData<StringName>)0x0;
  local_c8[0xb] = (CowData<StringName>)0x0;
  local_c8[0xc] = (CowData<StringName>)0x0;
  local_c8[0xd] = (CowData<StringName>)0x0;
  local_c8[0xe] = (CowData<StringName>)0x0;
  local_c8[0xf] = (CowData<StringName>)0x0;
  local_d8 = (char *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 6;
  local_a0 = 1;
  local_98[0] = 0;
  local_88 = (int *)0x0;
  local_80 = 0;
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_f0);
  local_e8 = "ThemeDB";
  local_f8 = 0;
  local_e0 = 7;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_e8,(String *)&local_f8,false);
  ClassDB::add_signal((StringName *)&local_e8,(MethodInfo *)&local_d8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  piVar4 = local_88;
  if (local_88 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_88 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_88 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_88 + -2);
      lVar8 = 0;
      local_88 = (int *)0x0;
      piVar7 = piVar4;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar7] != '\0') {
            Variant::_clear_internal();
          }
          lVar8 = lVar8 + 1;
          piVar7 = piVar7 + 6;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ThemeDB::get_native_type_dependencies(StringName const&, Vector<StringName>&) */

void __thiscall
ThemeDB::get_native_type_dependencies(ThemeDB *this,StringName *param_1,Vector *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 == 0) goto LAB_001044b9;
  cVar1 = ClassDB::get_inheritance_chain_nocheck(param_1,param_2);
  if (cVar1 != '\0') goto LAB_001044b9;
  StringName::StringName((StringName *)&local_38,param_1);
  if (*(long *)(param_2 + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_2 + 8) + -8) + 1;
  }
  iVar2 = CowData<StringName>::resize<false>((CowData<StringName> *)(param_2 + 8),lVar3);
  if (iVar2 == 0) {
    if (*(long *)(param_2 + 8) == 0) {
      lVar4 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(param_2 + 8) + -8);
      lVar4 = lVar3 + -1;
      if (-1 < lVar4) {
        CowData<StringName>::_copy_on_write((CowData<StringName> *)(param_2 + 8));
        StringName::operator=
                  ((StringName *)(*(long *)(param_2 + 8) + lVar4 * 8),(StringName *)&local_38);
        goto LAB_00104545;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar4,lVar3,"p_index","size()","",false,false
              );
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_00104545:
  if ((StringName::configured != '\0') && (local_38 != 0)) {
    StringName::unref();
  }
LAB_001044b9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ThemeContext::get_themes() const */

void ThemeContext::get_themes(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long in_RSI;
  long in_RDI;
  bool bVar4;
  
  *(undefined8 *)(in_RDI + 8) = 0;
  if (*(long *)(in_RSI + 400) != 0) {
    CowData<Ref<Theme>>::_unref((CowData<Ref<Theme>> *)(in_RDI + 8));
    if (*(long *)(in_RSI + 400) != 0) {
      plVar1 = (long *)(*(long *)(in_RSI + 400) + -0x10);
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
        *(undefined8 *)(in_RDI + 8) = *(undefined8 *)(in_RSI + 400);
      }
    }
  }
  return;
}



/* CowData<Ref<Theme> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<Theme>>::_copy_on_write(CowData<Ref<Theme>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar7 = lVar1 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  plVar6 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *plVar6 = 0;
      lVar2 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar6 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* Vector<Ref<Theme> >::push_back(Ref<Theme>) [clone .isra.0] */

void __thiscall Vector<Ref<Theme>>::push_back(Vector<Ref<Theme>> *this,long *param_2)

{
  long *plVar1;
  Object *pOVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(this + 8) == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar5 = CowData<Ref<Theme>>::resize<false>((CowData<Ref<Theme>> *)(this + 8),lVar6);
  if (iVar5 != 0) {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
    return;
  }
  if (*(long *)(this + 8) == 0) {
    lVar7 = -1;
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8);
    lVar7 = lVar6 + -1;
    if (-1 < lVar7) {
      CowData<Ref<Theme>>::_copy_on_write((CowData<Ref<Theme>> *)(this + 8));
      pOVar2 = (Object *)*param_2;
      plVar1 = (long *)(*(long *)(this + 8) + lVar7 * 8);
      pOVar3 = (Object *)*plVar1;
      if (pOVar2 == pOVar3) {
        return;
      }
      *plVar1 = (long)pOVar2;
      if ((pOVar2 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        *plVar1 = 0;
      }
      if (pOVar3 == (Object *)0x0) {
        return;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 == '\0') {
        return;
      }
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 == '\0') {
        return;
      }
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
      return;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar6,"p_index","size()","",false,false);
  return;
}



/* ThemeContext::set_themes(Vector<Ref<Theme> >&) */

void __thiscall ThemeContext::set_themes(ThemeContext *this,Vector *param_1)

{
  CowData<Ref<Theme>> *this_00;
  Callable *pCVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  Object *local_68 [2];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (CowData<Ref<Theme>> *)(this + 400);
  CowData<Ref<Theme>>::_copy_on_write(this_00);
  puVar6 = *(undefined8 **)(this + 400);
  CowData<Ref<Theme>>::_copy_on_write(this_00);
  lVar4 = *(long *)(this + 400);
  if (lVar4 == 0) {
    puVar5 = (undefined8 *)0x0;
    if (puVar6 == (undefined8 *)0x0) goto LAB_001049e4;
LAB_0010497c:
    do {
      pCVar1 = (Callable *)*puVar6;
      puVar6 = puVar6 + 1;
      create_custom_callable_function_pointer<ThemeContext>
                ((ThemeContext *)local_68,(char *)this,(_func_void *)"&ThemeContext::_emit_changed")
      ;
      Resource::disconnect_changed(pCVar1);
      Callable::~Callable((Callable *)local_68);
    } while (puVar5 != puVar6);
    lVar4 = *(long *)(this + 400);
    if (lVar4 == 0) goto LAB_001049e4;
  }
  else {
    puVar5 = (undefined8 *)(lVar4 + *(long *)(lVar4 + -8) * 8);
    if (puVar6 != puVar5) goto LAB_0010497c;
  }
  if (*(long *)(lVar4 + -8) != 0) {
    CowData<Ref<Theme>>::_unref(this_00);
  }
LAB_001049e4:
  CowData<Ref<Theme>>::_copy_on_write((CowData<Ref<Theme>> *)(param_1 + 8));
  puVar5 = *(undefined8 **)(param_1 + 8);
  CowData<Ref<Theme>>::_copy_on_write((CowData<Ref<Theme>> *)(param_1 + 8));
  puVar6 = *(undefined8 **)(param_1 + 8);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6 = puVar6 + puVar6[-1];
  }
  for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    pOVar2 = (Object *)*puVar5;
    if (pOVar2 != (Object *)0x0) {
      local_68[0] = pOVar2;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        local_68[0] = (Object *)0x0;
        Vector<Ref<Theme>>::push_back((Vector<Ref<Theme>> *)(this + 0x188),(ThemeContext *)local_68)
        ;
      }
      else {
        Vector<Ref<Theme>>::push_back((Vector<Ref<Theme>> *)(this + 0x188));
        cVar3 = RefCounted::unreference();
        if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      pCVar1 = (Callable *)*puVar5;
      create_custom_callable_function_pointer<ThemeContext>
                ((ThemeContext *)local_68,(char *)this,(_func_void *)"&ThemeContext::_emit_changed")
      ;
      Resource::connect_changed(pCVar1,(uint)(ThemeContext *)local_68);
      Callable::~Callable((Callable *)local_68);
    }
  }
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  (**(code **)(*(long *)this + 0xd0))(this,CoreStringNames::singleton + 8,0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ThemeDB::create_theme_context(Node*, Vector<Ref<Theme> >&) */

Object * __thiscall ThemeDB::create_theme_context(ThemeDB *this,Node *param_1,Vector *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulong uVar11;
  Object *this_00;
  undefined8 uVar12;
  undefined8 *puVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  Node *local_b0;
  ThemeDB local_a8 [16];
  Callable local_98 [16];
  Variant *local_88;
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = param_1;
  if (((byte)param_1[0x2fa] & 0x40) == 0) {
    _err_print_error("create_theme_context","scene/theme/theme_db.cpp",0xd8,
                     "Condition \"!p_node->is_inside_tree()\" is true. Returning: nullptr",0,0);
  }
  else {
    if ((*(long *)(this + 0x1c0) != 0) && (*(int *)(this + 0x1e4) != 0)) {
      uVar17 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4));
      lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1e0) * 8);
      uVar11 = (long)param_1 * 0x3ffff - 1;
      uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
      uVar11 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
      uVar11 = uVar11 >> 0x16 ^ uVar11;
      uVar19 = uVar11 & 0xffffffff;
      if ((int)uVar11 == 0) {
        uVar19 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar19 * lVar1;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar17;
      lVar15 = SUB168(auVar3 * auVar7,8);
      uVar16 = *(uint *)(*(long *)(this + 0x1c8) + lVar15 * 4);
      iVar14 = SUB164(auVar3 * auVar7,8);
      if (uVar16 != 0) {
        uVar18 = 0;
        do {
          if ((uVar16 == (uint)uVar19) &&
             (param_1 == *(Node **)(*(long *)(*(long *)(this + 0x1c0) + lVar15 * 8) + 0x10))) {
            _err_print_error("create_theme_context","scene/theme/theme_db.cpp",0xd9,
                             "Condition \"theme_contexts.has(p_node)\" is true. Returning: nullptr",
                             0,0);
            goto LAB_00104cee;
          }
          uVar18 = uVar18 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(iVar14 + 1) * lVar1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar17;
          lVar15 = SUB168(auVar4 * auVar8,8);
          uVar16 = *(uint *)(*(long *)(this + 0x1c8) + lVar15 * 4);
          iVar14 = SUB164(auVar4 * auVar8,8);
        } while ((uVar16 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar16 * lVar1, auVar9._8_8_ = 0,
                auVar9._0_8_ = uVar17, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(this + 0x1e0) * 4) + iVar14) -
                                      SUB164(auVar5 * auVar9,8)) * lVar1, auVar10._8_8_ = 0,
                auVar10._0_8_ = uVar17, uVar18 <= SUB164(auVar6 * auVar10,8)));
      }
    }
    if (*(long *)(param_2 + 8) != 0) {
      this_00 = (Object *)operator_new(0x198,"");
      Object::Object(this_00);
      *(undefined ***)this_00 = &PTR__initialize_classv_00116710;
      *(undefined8 *)(this_00 + 400) = 0;
      *(undefined1 (*) [16])(this_00 + 0x178) = (undefined1  [16])0x0;
      postinitialize_handler(this_00);
      *(Node **)(this_00 + 0x178) = param_1;
      uVar12 = get_nearest_theme_context(this,param_1);
      *(undefined8 *)(this_00 + 0x180) = uVar12;
      ThemeContext::set_themes((ThemeContext *)this_00,param_2);
      puVar13 = (undefined8 *)
                HashMap<Node*,ThemeContext*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,ThemeContext*>>>
                ::operator[]((HashMap<Node*,ThemeContext*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,ThemeContext*>>>
                              *)(this + 0x1b8),&local_b0);
      *puVar13 = this_00;
      _propagate_theme_context(this,param_1,(ThemeContext *)this_00);
      pcVar2 = *(code **)(*(long *)param_1 + 0x108);
      create_custom_callable_function_pointer<ThemeDB,Node*>
                (local_a8,(char *)this,(_func_void_Node_ptr *)"&ThemeDB::destroy_theme_context");
      Variant::Variant((Variant *)local_78,(Object *)param_1);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_88 = (Variant *)local_78;
      Callable::bindp((Variant **)local_98,(int)local_a8);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      (*pcVar2)(param_1,SceneStringNames::singleton + 0x48,local_98,0);
      Callable::~Callable(local_98);
      Callable::~Callable((Callable *)local_a8);
      goto LAB_00104e57;
    }
    _err_print_error("create_theme_context","scene/theme/theme_db.cpp",0xda,
                     "Condition \"p_themes.is_empty()\" is true. Returning: nullptr",0,0);
  }
LAB_00104cee:
  this_00 = (Object *)0x0;
LAB_00104e57:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ThemeDB::_init_default_theme_context() */

void __thiscall ThemeDB::_init_default_theme_context(ThemeDB *this)

{
  char cVar1;
  Object *pOVar2;
  long lVar3;
  long in_FS_OFFSET;
  Object *local_50;
  Vector local_48 [8];
  undefined8 local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pOVar2 = (Object *)operator_new(0x198,"");
  Object::Object(pOVar2);
  *(undefined ***)pOVar2 = &PTR__initialize_classv_00116710;
  *(undefined8 *)(pOVar2 + 400) = 0;
  *(undefined1 (*) [16])(pOVar2 + 0x178) = (undefined1  [16])0x0;
  postinitialize_handler(pOVar2);
  *(Object **)(this + 0x1b0) = pOVar2;
  local_40[0] = 0;
  lVar3 = Engine::get_singleton();
  if (*(char *)(lVar3 + 0xc0) == '\0') {
    pOVar2 = *(Object **)(this + 0x180);
    if ((pOVar2 == (Object *)0x0) ||
       (local_50 = pOVar2, cVar1 = RefCounted::reference(), cVar1 == '\0')) {
      local_50 = (Object *)0x0;
      Vector<Ref<Theme>>::push_back((Vector<Ref<Theme>> *)local_48,&local_50);
    }
    else {
      Vector<Ref<Theme>>::push_back((Vector<Ref<Theme>> *)local_48);
      cVar1 = RefCounted::unreference();
      if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  local_50 = (Object *)0x0;
  pOVar2 = *(Object **)(this + 0x178);
  if (pOVar2 == (Object *)0x0) {
    Vector<Ref<Theme>>::push_back((Vector<Ref<Theme>> *)local_48,&local_50);
  }
  else {
    local_50 = pOVar2;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      local_50 = (Object *)0x0;
      Vector<Ref<Theme>>::push_back((Vector<Ref<Theme>> *)local_48,&local_50);
    }
    else {
      Vector<Ref<Theme>>::push_back((Vector<Ref<Theme>> *)local_48);
      cVar1 = RefCounted::unreference();
      if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  ThemeContext::set_themes(*(ThemeContext **)(this + 0x1b0),local_48);
  CowData<Ref<Theme>>::_unref((CowData<Ref<Theme>> *)local_40);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ThemeDB::initialize_theme() */

void __thiscall ThemeDB::initialize_theme(ThemeDB *this)

{
  Object *pOVar1;
  Ref *pRVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  String *pSVar9;
  long lVar10;
  Ref *pRVar11;
  Object *pOVar12;
  bool bVar13;
  long in_FS_OFFSET;
  float fVar14;
  long local_d0;
  long local_c8;
  Object *local_c0;
  undefined8 local_b8;
  Ref *local_b0;
  char *local_a8;
  undefined8 local_a0;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,_LC110);
  local_a8 = "0.5,8,0.01";
  local_b0 = (Ref *)0x0;
  local_b8 = 0;
  local_a0 = 10;
  String::parse_latin1((StrRange *)&local_b8);
  local_c0 = (Object *)0x0;
  local_a8 = "gui/theme/default_theme_scale";
  local_a0 = 0x1d;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo((PropertyInfo *)&local_a8,3,(StrRange *)&local_c0);
  bVar13 = SUB81((Variant *)local_78,0);
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar13,false,false,false);
  fVar14 = Variant::operator_cast_to_float((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_b0 != (Ref *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,"");
  local_a8 = "*.tres,*.res,*.theme";
  local_b0 = (Ref *)0x0;
  local_b8 = 0;
  local_a0 = 0x14;
  String::parse_latin1((StrRange *)&local_b8);
  local_c0 = (Object *)0x0;
  local_a8 = "gui/theme/custom";
  local_a0 = 0x10;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,4,(StrRange *)&local_c0,0xd,(StrRange *)&local_b8,0x806,
             (StrRange *)&local_b0);
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar13,true,false,true);
  Variant::operator_cast_to_String((Variant *)&local_d0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_b0 != (Ref *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,"");
  local_a8 = "*.tres,*.res,*.otf,*.ttf,*.woff,*.woff2,*.fnt,*.font,*.pfb,*.pfm";
  local_b0 = (Ref *)0x0;
  local_b8 = 0;
  local_a0 = 0x40;
  String::parse_latin1((StrRange *)&local_b8);
  local_c0 = (Object *)0x0;
  local_a8 = "gui/theme/custom_font";
  local_a0 = 0x15;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,4,(StrRange *)&local_c0,0xd,(StrRange *)&local_b8,0x806,
             (StrRange *)&local_b0);
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar13,true,false,true);
  Variant::operator_cast_to_String((Variant *)&local_c8);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_b0 != (Ref *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,1);
  local_a8 = "None,Grayscale,LCD Subpixel";
  local_b0 = (Ref *)0x0;
  local_b8 = 0;
  local_a0 = 0x1b;
  String::parse_latin1((StrRange *)&local_b8);
  local_c0 = (Object *)0x0;
  local_a8 = "gui/theme/default_font_antialiasing";
  local_a0 = 0x23;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(StrRange *)&local_c0,2,(StrRange *)&local_b8,0x806,
             (StrRange *)&local_b0);
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar13,true,false,false);
  iVar6 = Variant::operator_cast_to_int((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_b0 != (Ref *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,1);
  local_a8 = "None,Light,Normal";
  local_b0 = (Ref *)0x0;
  local_b8 = 0;
  local_a0 = 0x11;
  String::parse_latin1((StrRange *)&local_b8);
  local_c0 = (Object *)0x0;
  local_a8 = "gui/theme/default_font_hinting";
  local_a0 = 0x1e;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(StrRange *)&local_c0,2,(StrRange *)&local_b8,0x806,
             (StrRange *)&local_b0);
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar13,true,false,false);
  iVar7 = Variant::operator_cast_to_int((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_b0 != (Ref *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,1);
  local_a8 = "Disabled,Auto,One Half of a Pixel,One Quarter of a Pixel";
  local_b0 = (Ref *)0x0;
  local_b8 = 0;
  local_a0 = 0x38;
  String::parse_latin1((StrRange *)&local_b8);
  local_c0 = (Object *)0x0;
  local_a8 = "gui/theme/default_font_subpixel_positioning";
  local_a0 = 0x2b;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(StrRange *)&local_c0,2,(StrRange *)&local_b8,0x806,
             (StrRange *)&local_b0);
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar13,true,false,false);
  iVar8 = Variant::operator_cast_to_int((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_b0 != (Ref *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,false);
  local_b0 = (Ref *)0x0;
  local_a8 = "gui/theme/default_font_multichannel_signed_distance_field";
  local_a0 = 0x39;
  String::parse_latin1((StrRange *)&local_b0);
  _GLOBAL_DEF((String *)local_58,(Variant *)&local_b0,bVar13,true,false,false);
  bVar3 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,false);
  local_b0 = (Ref *)0x0;
  local_a8 = "gui/theme/default_font_generate_mipmaps";
  local_a0 = 0x27;
  String::parse_latin1((StrRange *)&local_b0);
  _GLOBAL_DEF((String *)local_58,(Variant *)&local_b0,bVar13,true,false,false);
  bVar4 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,1);
  local_a8 = "Disabled,Horizontal RGB,Horizontal BGR,Vertical RGB,Vertical BGR";
  local_b0 = (Ref *)0x0;
  local_b8 = 0;
  local_a0 = 0x40;
  String::parse_latin1((StrRange *)&local_b8);
  local_c0 = (Object *)0x0;
  local_a8 = "gui/theme/lcd_subpixel_layout";
  local_a0 = 0x1d;
  String::parse_latin1((StrRange *)&local_c0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,2,(StrRange *)&local_c0,2,(StrRange *)&local_b8,6,
             (StrRange *)&local_b0);
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar13,true,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_b0 != (Ref *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  pSVar9 = (String *)ProjectSettings::get_singleton();
  local_b0 = (Ref *)0x0;
  local_a0 = 0x1d;
  local_a8 = "gui/theme/lcd_subpixel_layout";
  String::parse_latin1((StrRange *)&local_b0);
  ProjectSettings::set_restart_if_changed(pSVar9,SUB81((StrRange *)&local_b0,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((local_d0 != 0) && (1 < *(uint *)(local_d0 + -8))) {
    local_b8 = 0;
    String::parse_latin1((String *)&local_b8,"");
    ResourceLoader::load((StrRange *)&local_b0,(Variant *)&local_d0,(StrRange *)&local_b8,1,0);
    local_c0 = (Object *)0x0;
    if (local_b0 == (Ref *)0x0) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
LAB_00105f68:
      local_b0 = (Ref *)0x0;
      String::parse_latin1((String *)&local_b0,"\'");
      operator+((char *)&local_b8,(String *)"Error loading custom project theme \'");
      String::operator+((String *)&local_a8,(String *)&local_b8);
      _err_print_error("initialize_theme","scene/theme/theme_db.cpp",0x48,(PropertyInfo *)&local_a8,
                       0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    }
    else {
      pOVar12 = (Object *)__dynamic_cast(local_b0,&Object::typeinfo,&Theme::typeinfo,0);
      if (pOVar12 == (Object *)0x0) {
LAB_00105d77:
        cVar5 = RefCounted::unreference();
        pRVar11 = local_b0;
        if (cVar5 != '\0') {
          cVar5 = predelete_handler((Object *)local_b0);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)pRVar11 + 0x140))(pRVar11);
            Memory::free_static(pRVar11,false);
          }
        }
      }
      else {
        local_a8 = (char *)0x0;
        local_c0 = pOVar12;
        cVar5 = RefCounted::reference();
        if (cVar5 == '\0') {
          local_c0 = (Object *)0x0;
          pOVar12 = (Object *)0x0;
        }
        Ref<Theme>::unref((Ref<Theme> *)&local_a8);
        if (local_b0 != (Ref *)0x0) goto LAB_00105d77;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      if (pOVar12 == (Object *)0x0) goto LAB_00105f68;
      pOVar1 = *(Object **)(this + 0x180);
      if (pOVar12 != pOVar1) {
        *(Object **)(this + 0x180) = pOVar12;
        cVar5 = RefCounted::reference();
        if (cVar5 == '\0') {
          *(undefined8 *)(this + 0x180) = 0;
        }
        if (pOVar1 != (Object *)0x0) {
          cVar5 = RefCounted::unreference();
          if (cVar5 != '\0') {
            cVar5 = predelete_handler(pOVar1);
            if (cVar5 != '\0') {
              (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
              Memory::free_static(pOVar1,false);
            }
          }
        }
      }
    }
    Ref<Theme>::unref((Ref<Theme> *)&local_c0);
  }
  if ((local_c8 == 0) || (*(uint *)(local_c8 + -8) < 2)) {
LAB_00105ab9:
    lVar10 = RenderingServer::get_singleton();
    if (lVar10 == 0) {
      _init_default_theme_context(this);
      goto LAB_00105acd;
    }
    pRVar11 = (Ref *)0x0;
    local_b0 = (Ref *)0x0;
LAB_00105b27:
    make_default_theme(fVar14,(StrRange *)&local_b0,iVar8,iVar7,iVar6,bVar3,bVar4);
    Ref<Font>::unref((Ref<Font> *)&local_b0);
    _init_default_theme_context(this);
    if (pRVar11 == (Ref *)0x0) goto LAB_00105acd;
  }
  else {
    local_b8 = 0;
    String::parse_latin1((String *)&local_b8,"");
    ResourceLoader::load((StrRange *)&local_b0,(Variant *)&local_c8,(StrRange *)&local_b8,1,0);
    if (local_b0 == (Ref *)0x0) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
LAB_00105fe8:
      local_b0 = (Ref *)0x0;
      String::parse_latin1((String *)&local_b0,"\'");
      operator+((char *)&local_b8,(String *)"Error loading custom project font \'");
      String::operator+((String *)&local_a8,(String *)&local_b8);
      _err_print_error("initialize_theme","scene/theme/theme_db.cpp",0x52,(PropertyInfo *)&local_a8,
                       0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      goto LAB_00105ab9;
    }
    pRVar11 = (Ref *)__dynamic_cast(local_b0,&Object::typeinfo,&Font::typeinfo,0);
    if (pRVar11 == (Ref *)0x0) {
LAB_00105c2c:
      cVar5 = RefCounted::unreference();
      pRVar2 = local_b0;
      if (cVar5 != '\0') {
        cVar5 = predelete_handler((Object *)local_b0);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pRVar2 + 0x140))(pRVar2);
          Memory::free_static(pRVar2,false);
        }
      }
    }
    else {
      local_a8 = (char *)0x0;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        pRVar11 = (Ref *)0x0;
      }
      Ref<Font>::unref((Ref<Font> *)&local_a8);
      if (local_b0 != (Ref *)0x0) goto LAB_00105c2c;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if (pRVar11 == (Ref *)0x0) goto LAB_00105fe8;
    if (*(Ref **)(this + 400) == pRVar11) {
      lVar10 = RenderingServer::get_singleton();
      if (lVar10 == 0) goto LAB_00105e2e;
LAB_00105c99:
      local_a8 = (char *)0x0;
      local_b0 = pRVar11;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        local_b0 = (Ref *)0x0;
      }
      Ref<Font>::unref((Ref<Font> *)&local_a8);
      goto LAB_00105b27;
    }
    set_fallback_font(this,pRVar11);
    lVar10 = RenderingServer::get_singleton();
    if (lVar10 != 0) goto LAB_00105c99;
LAB_00105e2e:
    _init_default_theme_context(this);
  }
  cVar5 = RefCounted::unreference();
  if (cVar5 != '\0') {
    cVar5 = predelete_handler((Object *)pRVar11);
    if (cVar5 != '\0') {
      (**(code **)(*(long *)pRVar11 + 0x140))(pRVar11);
      Memory::free_static(pRVar11,false);
    }
  }
LAB_00105acd:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ThemeDB::initialize_theme_noproject() */

void __thiscall ThemeDB::initialize_theme_noproject(ThemeDB *this)

{
  Object *pOVar1;
  char cVar2;
  long lVar3;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = RenderingServer::get_singleton();
  if (lVar3 != 0) {
    local_28 = (Object *)0x0;
    make_default_theme(_LC17,&local_28,1,1,1,0,0);
    if (((local_28 != (Object *)0x0) &&
        (cVar2 = RefCounted::unreference(), pOVar1 = local_28, cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_28), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  _init_default_theme_context(this);
  return;
}



/* ThemeDB::bind_class_item(Theme::DataType, StringName const&, StringName const&, StringName
   const&, std::function<void (Node*, StringName const&, StringName const&)>) */

void __thiscall
ThemeDB::bind_class_item
          (ThemeDB *this,undefined4 param_2,StringName *param_3,StringName *param_4,
          StringName *param_5,long param_6)

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
  uint uVar12;
  long lVar13;
  HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>
  *this_00;
  undefined4 *puVar14;
  List<ThemeDB::ThemeItemBind,DefaultAllocator> *this_01;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  bool bVar21;
  code *pcVar22;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  CowData<char32_t> local_b0 [8];
  undefined1 local_a8 [16];
  code *local_98;
  undefined8 uStack_90;
  undefined4 local_88 [2];
  undefined1 local_80 [16];
  long local_70;
  undefined1 local_68;
  undefined1 local_60 [16];
  code *local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar13 = HashMap<StringName,HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>>>>
           ::operator[]((HashMap<StringName,HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>>>>
                         *)(this + 0x1e8),param_3);
  if ((*(long *)(lVar13 + 8) != 0) && (*(int *)(lVar13 + 0x2c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar13 + 0x28) * 4);
    uVar20 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar13 + 0x28) * 8);
    if (*(long *)param_4 == 0) {
      uVar12 = StringName::get_empty_hash();
    }
    else {
      uVar12 = *(uint *)(*(long *)param_4 + 0x20);
    }
    if (uVar12 == 0) {
      uVar12 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar12 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar20;
    lVar16 = SUB168(auVar3 * auVar7,8);
    uVar18 = *(uint *)(*(long *)(lVar13 + 0x10) + lVar16 * 4);
    iVar15 = SUB164(auVar3 * auVar7,8);
    if (uVar18 != 0) {
      uVar19 = 0;
      do {
        if ((uVar18 == uVar12) &&
           (*(long *)(*(long *)(*(long *)(lVar13 + 8) + lVar16 * 8) + 0x10) == *(long *)param_4)) {
          StringName::StringName((StringName *)&local_b8,param_3);
          StringName::StringName((StringName *)&local_c0,param_4);
          local_c8 = 0;
          String::parse_latin1
                    ((String *)&local_c8,
                     "Failed to bind theme item \'%s\' in class \'%s\': already bound");
          vformat<StringName,StringName>
                    (local_b0,(String *)&local_c8,(StringName *)&local_c0,(StringName *)&local_b8);
          _err_print_error("bind_class_item","scene/theme/theme_db.cpp",0x14b,
                           "Condition \"theme_item_binds[p_class_name].has(p_prop_name)\" is true.",
                           local_b0,0,0);
          CowData<char32_t>::_unref(local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          if (StringName::configured == '\0') goto LAB_00106350;
          if (local_c0 != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00106350;
          }
          if (local_b8 != 0) {
            StringName::unref();
          }
          goto LAB_00106350;
        }
        uVar19 = uVar19 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar15 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar20;
        lVar16 = SUB168(auVar4 * auVar8,8);
        uVar18 = *(uint *)(*(long *)(lVar13 + 0x10) + lVar16 * 4);
        iVar15 = SUB164(auVar4 * auVar8,8);
      } while ((uVar18 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar18 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar20, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar15) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar20, uVar19 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  local_80 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  local_70 = 0;
  local_68 = 0;
  local_50 = (code *)0x0;
  uStack_48 = 0;
  local_88[0] = param_2;
  StringName::operator=((StringName *)local_80,param_3);
  StringName::operator=((StringName *)(local_80 + 8),param_5);
  local_98 = (code *)0x0;
  local_a8 = (undefined1  [16])0x0;
  pcVar22 = (code *)0x0;
  uVar17 = 0;
  uStack_90 = 0;
  if (*(code **)(param_6 + 0x10) != (code *)0x0) {
    (**(code **)(param_6 + 0x10))(local_a8,param_6,2);
    pcVar22 = *(code **)(param_6 + 0x10);
    uVar17 = *(undefined8 *)(param_6 + 0x18);
  }
  pcVar11 = local_50;
  auVar3 = local_60;
  local_60 = local_a8;
  local_a8 = auVar3;
  local_98 = local_50;
  uStack_90 = uStack_48;
  bVar21 = local_50 != (code *)0x0;
  local_50 = pcVar22;
  uStack_48 = uVar17;
  if (bVar21) {
    (*pcVar11)(local_a8,local_a8,3);
  }
  this_00 = (HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>
             *)HashMap<StringName,HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>>>>
               ::operator[]((HashMap<StringName,HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>>>>
                             *)(this + 0x1e8),param_3);
  puVar14 = (undefined4 *)
            HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>
            ::operator[](this_00,param_4);
  *puVar14 = local_88[0];
  StringName::operator=((StringName *)(puVar14 + 2),(StringName *)local_80);
  StringName::operator=((StringName *)(puVar14 + 4),(StringName *)(local_80 + 8));
  StringName::operator=((StringName *)(puVar14 + 6),(StringName *)&local_70);
  *(undefined1 *)(puVar14 + 8) = local_68;
  local_98 = (code *)0x0;
  uStack_90 = 0;
  local_a8 = (undefined1  [16])0x0;
  uVar17 = 0;
  if (local_50 != (code *)0x0) {
    (*local_50)(local_a8,local_60,2);
    uVar17 = uStack_48;
  }
  auVar3 = *(undefined1 (*) [16])(puVar14 + 10);
  local_98 = *(code **)(puVar14 + 0xe);
  *(undefined8 *)(puVar14 + 10) = local_a8._0_8_;
  *(undefined8 *)(puVar14 + 0xc) = local_a8._8_8_;
  *(code **)(puVar14 + 0xe) = local_50;
  uStack_90 = *(undefined8 *)(puVar14 + 0x10);
  *(undefined8 *)(puVar14 + 0x10) = uVar17;
  local_a8 = auVar3;
  if (local_98 != (code *)0x0) {
    (*local_98)(local_a8,local_a8,3);
  }
  this_01 = (List<ThemeDB::ThemeItemBind,DefaultAllocator> *)
            HashMap<StringName,List<ThemeDB::ThemeItemBind,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,List<ThemeDB::ThemeItemBind,DefaultAllocator>>>>
            ::operator[]((HashMap<StringName,List<ThemeDB::ThemeItemBind,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,List<ThemeDB::ThemeItemBind,DefaultAllocator>>>>
                          *)(this + 0x218),param_3);
  List<ThemeDB::ThemeItemBind,DefaultAllocator>::push_back(this_01,(ThemeItemBind *)local_88);
  if (local_50 != (code *)0x0) {
    (*local_50)(local_60,local_60,3);
  }
  if (StringName::configured != '\0') {
    if (local_70 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106350;
    }
    if (local_80._8_8_ != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106350;
    }
    if (local_80._0_8_ != 0) {
      StringName::unref();
    }
  }
LAB_00106350:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ThemeDB::bind_class_external_item(Theme::DataType, StringName const&, StringName const&,
   StringName const&, StringName const&, std::function<void (Node*, StringName const&, StringName
   const&)>) */

void __thiscall
ThemeDB::bind_class_external_item
          (ThemeDB *this,undefined4 param_2,StringName *param_3,StringName *param_4,
          StringName *param_5,StringName *param_6,long param_7)

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
  uint uVar12;
  long lVar13;
  HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>
  *this_00;
  undefined4 *puVar14;
  List<ThemeDB::ThemeItemBind,DefaultAllocator> *this_01;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  bool bVar21;
  code *pcVar22;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  CowData<char32_t> local_b0 [8];
  undefined1 local_a8 [16];
  code *local_98;
  undefined8 uStack_90;
  undefined4 local_88 [2];
  undefined1 local_80 [16];
  long local_70;
  undefined1 local_68;
  undefined1 local_60 [16];
  code *local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar13 = HashMap<StringName,HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>>>>
           ::operator[]((HashMap<StringName,HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>>>>
                         *)(this + 0x1e8),param_3);
  if ((*(long *)(lVar13 + 8) != 0) && (*(int *)(lVar13 + 0x2c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar13 + 0x28) * 4);
    uVar20 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar13 + 0x28) * 8);
    if (*(long *)param_4 == 0) {
      uVar12 = StringName::get_empty_hash();
    }
    else {
      uVar12 = *(uint *)(*(long *)param_4 + 0x20);
    }
    if (uVar12 == 0) {
      uVar12 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar12 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar20;
    lVar16 = SUB168(auVar3 * auVar7,8);
    uVar18 = *(uint *)(*(long *)(lVar13 + 0x10) + lVar16 * 4);
    iVar15 = SUB164(auVar3 * auVar7,8);
    if (uVar18 != 0) {
      uVar19 = 0;
      do {
        if ((uVar18 == uVar12) &&
           (*(long *)(*(long *)(*(long *)(lVar13 + 8) + lVar16 * 8) + 0x10) == *(long *)param_4)) {
          StringName::StringName((StringName *)&local_b8,param_3);
          StringName::StringName((StringName *)&local_c0,param_4);
          local_c8 = 0;
          String::parse_latin1
                    ((String *)&local_c8,
                     "Failed to bind theme item \'%s\' in class \'%s\': already bound");
          vformat<StringName,StringName>
                    (local_b0,(String *)&local_c8,(StringName *)&local_c0,(StringName *)&local_b8);
          _err_print_error("bind_class_external_item","scene/theme/theme_db.cpp",0x158,
                           "Condition \"theme_item_binds[p_class_name].has(p_prop_name)\" is true.",
                           local_b0,0,0);
          CowData<char32_t>::_unref(local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          if (StringName::configured == '\0') goto LAB_00106838;
          if (local_c0 != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00106838;
          }
          if (local_b8 != 0) {
            StringName::unref();
          }
          goto LAB_00106838;
        }
        uVar19 = uVar19 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar15 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar20;
        lVar16 = SUB168(auVar4 * auVar8,8);
        uVar18 = *(uint *)(*(long *)(lVar13 + 0x10) + lVar16 * 4);
        iVar15 = SUB164(auVar4 * auVar8,8);
      } while ((uVar18 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar18 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar20, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar15) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar20, uVar19 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  local_80 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  local_70 = 0;
  local_68 = 0;
  local_50 = (code *)0x0;
  uStack_48 = 0;
  local_88[0] = param_2;
  StringName::operator=((StringName *)local_80,param_3);
  StringName::operator=((StringName *)(local_80 + 8),param_5);
  StringName::operator=((StringName *)&local_70,param_6);
  local_68 = 1;
  local_a8 = (undefined1  [16])0x0;
  pcVar22 = (code *)0x0;
  uVar17 = 0;
  local_98 = (code *)0x0;
  uStack_90 = 0;
  if (*(code **)(param_7 + 0x10) != (code *)0x0) {
    (**(code **)(param_7 + 0x10))(local_a8,param_7,2);
    pcVar22 = *(code **)(param_7 + 0x10);
    uVar17 = *(undefined8 *)(param_7 + 0x18);
  }
  pcVar11 = local_50;
  auVar3 = local_60;
  local_60 = local_a8;
  local_a8 = auVar3;
  local_98 = local_50;
  uStack_90 = uStack_48;
  bVar21 = local_50 != (code *)0x0;
  local_50 = pcVar22;
  uStack_48 = uVar17;
  if (bVar21) {
    (*pcVar11)(local_a8,local_a8,3);
  }
  this_00 = (HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>
             *)HashMap<StringName,HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>>>>
               ::operator[]((HashMap<StringName,HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>>>>
                             *)(this + 0x1e8),param_3);
  puVar14 = (undefined4 *)
            HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>
            ::operator[](this_00,param_4);
  *puVar14 = local_88[0];
  StringName::operator=((StringName *)(puVar14 + 2),(StringName *)local_80);
  StringName::operator=((StringName *)(puVar14 + 4),(StringName *)(local_80 + 8));
  StringName::operator=((StringName *)(puVar14 + 6),(StringName *)&local_70);
  *(undefined1 *)(puVar14 + 8) = local_68;
  local_98 = (code *)0x0;
  uStack_90 = 0;
  local_a8 = (undefined1  [16])0x0;
  uVar17 = 0;
  if (local_50 != (code *)0x0) {
    (*local_50)(local_a8,local_60,2);
    uVar17 = uStack_48;
  }
  auVar3 = *(undefined1 (*) [16])(puVar14 + 10);
  local_98 = *(code **)(puVar14 + 0xe);
  *(undefined8 *)(puVar14 + 10) = local_a8._0_8_;
  *(undefined8 *)(puVar14 + 0xc) = local_a8._8_8_;
  *(code **)(puVar14 + 0xe) = local_50;
  uStack_90 = *(undefined8 *)(puVar14 + 0x10);
  *(undefined8 *)(puVar14 + 0x10) = uVar17;
  local_a8 = auVar3;
  if (local_98 != (code *)0x0) {
    (*local_98)(local_a8,local_a8,3);
  }
  this_01 = (List<ThemeDB::ThemeItemBind,DefaultAllocator> *)
            HashMap<StringName,List<ThemeDB::ThemeItemBind,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,List<ThemeDB::ThemeItemBind,DefaultAllocator>>>>
            ::operator[]((HashMap<StringName,List<ThemeDB::ThemeItemBind,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,List<ThemeDB::ThemeItemBind,DefaultAllocator>>>>
                          *)(this + 0x218),param_3);
  List<ThemeDB::ThemeItemBind,DefaultAllocator>::push_back(this_01,(ThemeItemBind *)local_88);
  if (local_50 != (code *)0x0) {
    (*local_50)(local_60,local_60,3);
  }
  if (StringName::configured != '\0') {
    if (local_70 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106838;
    }
    if (local_80._8_8_ != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106838;
    }
    if (local_80._0_8_ != 0) {
      StringName::unref();
    }
  }
LAB_00106838:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* ThemeDB::is_class_ptr(void*) const */

uint __thiscall ThemeDB::is_class_ptr(ThemeDB *this,void *param_1)

{
  return (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* ThemeDB::_getv(StringName const&, Variant&) const */

undefined8 ThemeDB::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ThemeDB::_setv(StringName const&, Variant const&) */

undefined8 ThemeDB::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ThemeDB::_validate_propertyv(PropertyInfo&) const */

void ThemeDB::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ThemeDB::_property_can_revertv(StringName const&) const */

undefined8 ThemeDB::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ThemeDB::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ThemeDB::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ThemeDB::_notificationv(int, bool) */

void ThemeDB::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ThemeContext::is_class_ptr(void*) const */

uint __thiscall ThemeContext::is_class_ptr(ThemeContext *this,void *param_1)

{
  return (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* ThemeContext::_getv(StringName const&, Variant&) const */

undefined8 ThemeContext::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ThemeContext::_setv(StringName const&, Variant const&) */

undefined8 ThemeContext::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ThemeContext::_validate_propertyv(PropertyInfo&) const */

void ThemeContext::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ThemeContext::_property_can_revertv(StringName const&) const */

undefined8 ThemeContext::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ThemeContext::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ThemeContext::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ThemeContext::_notificationv(int, bool) */

void ThemeContext::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomMethodPointer<ThemeContext, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ThemeContext,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ThemeContext,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<ThemeDB, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ThemeDB,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ThemeDB,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<ThemeDB, void, Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ThemeDB,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ThemeDB,void,Node*> *this)

{
  return;
}



/* MethodBindTR<Ref<StyleBox>>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Ref<StyleBox>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTR<Ref<StyleBox>>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<StyleBox>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<StyleBox> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<StyleBox>const&>::_gen_argument_type
          (MethodBindT<Ref<StyleBox>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<StyleBox> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<StyleBox>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Ref<Texture2D>>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Ref<Texture2D>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTR<Ref<Texture2D>>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<Texture2D>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<Texture2D> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<Texture2D>const&>::_gen_argument_type
          (MethodBindT<Ref<Texture2D>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<Texture2D> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<Texture2D>const&>::get_argument_meta(int param_1)

{
  return 0;
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



/* MethodBindTR<Ref<Font>>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Ref<Font>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTR<Ref<Font>>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<Font>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<Font> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<Font>const&>::_gen_argument_type(MethodBindT<Ref<Font>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<Font> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<Font>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<float>::_gen_argument_type(int) const */

undefined8 MethodBindTR<float>::_gen_argument_type(int param_1)

{
  return 3;
}



/* MethodBindTR<float>::get_argument_meta(int) const */

uint __thiscall MethodBindTR<float>::get_argument_meta(MethodBindTR<float> *this,int param_1)

{
  return param_1 >> 0x1f & 9;
}



/* MethodBindT<float>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<float>::_gen_argument_type(MethodBindT<float> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<float>::get_argument_meta(int) const */

byte __thiscall MethodBindT<float>::get_argument_meta(MethodBindT<float> *this,int param_1)

{
  return -(param_1 == 0) & 9;
}



/* MethodBindTR<Ref<Theme>>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Ref<Theme>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTR<Ref<Theme>>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<Theme>>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<ThemeContext, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ThemeContext,void>::get_argument_count
          (CallableCustomMethodPointer<ThemeContext,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<ThemeDB, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ThemeDB,void>::get_argument_count
          (CallableCustomMethodPointer<ThemeDB,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<ThemeDB, void, Node*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ThemeDB,void,Node*>::get_argument_count
          (CallableCustomMethodPointer<ThemeDB,void,Node*> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ThemeDB, void, Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ThemeDB,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ThemeDB,void,Node*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ThemeDB, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ThemeDB,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ThemeDB,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ThemeContext, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ThemeContext,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ThemeContext,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* MethodBindTR<Ref<Theme>>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<Theme>>::~MethodBindTR(MethodBindTR<Ref<Theme>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116b80;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<Theme>>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<Theme>>::~MethodBindTR(MethodBindTR<Ref<Theme>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116b80;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116be0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116be0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<float>::~MethodBindTR() */

void __thiscall MethodBindTR<float>::~MethodBindTR(MethodBindTR<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116c40;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<float>::~MethodBindTR() */

void __thiscall MethodBindTR<float>::~MethodBindTR(MethodBindTR<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116c40;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<Font> const&>::~MethodBindT() */

void __thiscall MethodBindT<Ref<Font>const&>::~MethodBindT(MethodBindT<Ref<Font>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116ca0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Font> const&>::~MethodBindT() */

void __thiscall MethodBindT<Ref<Font>const&>::~MethodBindT(MethodBindT<Ref<Font>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116ca0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<Font>>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<Font>>::~MethodBindTR(MethodBindTR<Ref<Font>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116d00;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<Font>>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<Font>>::~MethodBindTR(MethodBindTR<Ref<Font>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116d00;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116d60;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116d60;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<int>::~MethodBindTR() */

void __thiscall MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116dc0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<int>::~MethodBindTR() */

void __thiscall MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116dc0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Texture2D>const&>::~MethodBindT(MethodBindT<Ref<Texture2D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116e20;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Texture2D>const&>::~MethodBindT(MethodBindT<Ref<Texture2D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116e20;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<Texture2D>>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<Texture2D>>::~MethodBindTR(MethodBindTR<Ref<Texture2D>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116e80;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<Texture2D>>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<Texture2D>>::~MethodBindTR(MethodBindTR<Ref<Texture2D>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116e80;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<StyleBox> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<StyleBox>const&>::~MethodBindT(MethodBindT<Ref<StyleBox>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116ee0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<StyleBox> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<StyleBox>const&>::~MethodBindT(MethodBindT<Ref<StyleBox>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116ee0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<StyleBox>>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<StyleBox>>::~MethodBindTR(MethodBindTR<Ref<StyleBox>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116f40;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<StyleBox>>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<StyleBox>>::~MethodBindTR(MethodBindTR<Ref<StyleBox>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116f40;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* CallableCustomMethodPointer<ThemeDB, void, Node*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ThemeDB,void,Node*>::get_object
          (CallableCustomMethodPointer<ThemeDB,void,Node*> *this)

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
      goto LAB_001073ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001073ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001073ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ThemeContext, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ThemeContext,void>::get_object
          (CallableCustomMethodPointer<ThemeContext,void> *this)

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
      goto LAB_001074ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001074ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001074ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ThemeDB, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ThemeDB,void>::get_object
          (CallableCustomMethodPointer<ThemeDB,void> *this)

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
      goto LAB_001075ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001075ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001075ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* SortArray<List<ThemeDB::ThemeItemBind, DefaultAllocator>::Element*, List<ThemeDB::ThemeItemBind,
   DefaultAllocator>::AuxiliaryComparator<ThemeDB::ThemeItemBind::SortByType>,
   true>::introsort(long, long, List<ThemeDB::ThemeItemBind, DefaultAllocator>::Element**, long)
   const [clone .isra.0] */

void SortArray<List<ThemeDB::ThemeItemBind,DefaultAllocator>::Element*,List<ThemeDB::ThemeItemBind,DefaultAllocator>::AuxiliaryComparator<ThemeDB::ThemeItemBind::SortByType>,true>
     ::introsort(long param_1,long param_2,Element **param_3,long param_4)

{
  int iVar1;
  Element *pEVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  Element **ppEVar7;
  int iVar8;
  Element **ppEVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  Element *pEVar13;
  Element *pEVar14;
  Element **ppEVar15;
  long lVar16;
  long local_58;
  
  lVar16 = param_2 - param_1;
  if (lVar16 < 0x11) {
    return;
  }
  if (param_4 == 0) {
LAB_0010787d:
    lVar11 = lVar16 + -2 >> 1;
    lVar12 = lVar11 * 2 + 2;
    ppEVar9 = param_3 + param_1 + lVar11;
    pEVar13 = *ppEVar9;
    lVar6 = lVar11;
    lVar10 = lVar12;
    if (lVar16 <= lVar12) goto LAB_00107985;
LAB_001078c3:
    do {
      pEVar2 = param_3[param_1 + lVar12];
      pEVar14 = param_3[param_1 + lVar12 + -1];
      lVar3 = lVar12 + -1;
      lVar5 = lVar12;
      ppEVar7 = param_3 + param_1 + lVar12 + -1;
      if (*(int *)pEVar14 <= *(int *)pEVar2) {
        lVar5 = lVar12 + 1;
        lVar3 = lVar12;
        pEVar14 = pEVar2;
        ppEVar7 = param_3 + param_1 + lVar12;
      }
      lVar12 = lVar5 * 2;
      param_3[lVar6 + param_1] = pEVar14;
      lVar6 = lVar3;
    } while (lVar16 != lVar12 && SBORROW8(lVar16,lVar12) == lVar16 + lVar5 * -2 < 0);
    ppEVar15 = ppEVar7;
    if (lVar16 == lVar12) goto LAB_0010798b;
    do {
      lVar12 = lVar10;
      lVar10 = lVar3 + -1;
      if (lVar3 <= lVar11) goto LAB_00107ac1;
      iVar4 = *(int *)pEVar13;
      do {
        lVar6 = lVar10 >> 1;
        pEVar2 = param_3[param_1 + lVar6];
        if (iVar4 <= *(int *)pEVar2) {
          param_3[lVar3 + param_1] = pEVar13;
          goto joined_r0x00107965;
        }
        param_3[lVar3 + param_1] = pEVar2;
        lVar10 = (lVar6 + -1) - (lVar6 + -1 >> 0x3f);
        lVar3 = lVar6;
      } while (lVar11 < lVar6);
      param_3[param_1 + lVar6] = pEVar13;
joined_r0x00107965:
      if (lVar11 == 0) {
        ppEVar9 = param_3 + param_1;
        lVar16 = (param_2 + -1) - param_1;
        goto LAB_001079c0;
      }
      while( true ) {
        ppEVar9 = ppEVar9 + -1;
        lVar12 = lVar12 + -2;
        lVar11 = lVar11 + -1;
        pEVar13 = *ppEVar9;
        lVar6 = lVar11;
        lVar10 = lVar12;
        if (lVar12 < lVar16) goto LAB_001078c3;
LAB_00107985:
        lVar10 = lVar12;
        ppEVar15 = ppEVar9;
        ppEVar7 = ppEVar9;
        if (lVar12 == lVar16) break;
LAB_00107ac1:
        *ppEVar7 = pEVar13;
      }
LAB_0010798b:
      lVar3 = lVar12 + -1;
      ppEVar7 = param_3 + param_1 + lVar3;
      *ppEVar15 = *ppEVar7;
    } while( true );
  }
  lVar12 = param_2;
  local_58 = param_4;
LAB_001076d1:
  pEVar13 = param_3[lVar12 + -1];
  local_58 = local_58 + -1;
  iVar4 = *(int *)pEVar13;
  iVar8 = *(int *)param_3[param_1];
  iVar1 = *(int *)param_3[(lVar16 >> 1) + param_1];
  if (iVar8 < iVar1) {
    if (iVar1 < iVar4) {
LAB_00107850:
      pEVar13 = param_3[(lVar16 >> 1) + param_1];
      iVar4 = iVar1;
      goto LAB_0010770f;
    }
    if (iVar8 < iVar4) goto LAB_0010770f;
  }
  else if (iVar4 <= iVar8) {
    if (iVar1 < iVar4) goto LAB_0010770f;
    goto LAB_00107850;
  }
  pEVar13 = param_3[param_1];
  iVar4 = iVar8;
LAB_0010770f:
  lVar16 = lVar12;
  param_2 = param_1;
  do {
    if (iVar8 < iVar4) {
      if (lVar12 + -1 == param_2) {
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                         "bad comparison function; sorting will be broken",0,0);
        iVar4 = *(int *)pEVar13;
        goto LAB_0010774f;
      }
    }
    else {
LAB_0010774f:
      lVar10 = lVar16 + -1;
      ppEVar9 = param_3 + lVar10;
      if (iVar4 < *(int *)*ppEVar9) {
        ppEVar7 = param_3 + lVar16 + -2;
        while (param_1 != lVar10) {
          lVar10 = lVar10 + -1;
          ppEVar9 = ppEVar7;
          if (*(int *)*ppEVar7 <= iVar4) goto LAB_001077b4;
          ppEVar7 = ppEVar7 + -1;
        }
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                         "bad comparison function; sorting will be broken",0,0);
      }
LAB_001077b4:
      if (lVar10 <= param_2) break;
      pEVar2 = param_3[param_2];
      param_3[param_2] = *ppEVar9;
      *ppEVar9 = pEVar2;
      iVar4 = *(int *)pEVar13;
      lVar16 = lVar10;
    }
    lVar10 = param_2 + 1;
    param_2 = param_2 + 1;
    iVar8 = *(int *)param_3[lVar10];
  } while( true );
  introsort(param_2,lVar12,param_3,local_58);
  lVar16 = param_2 - param_1;
  if (lVar16 < 0x11) {
    return;
  }
  lVar12 = param_2;
  if (local_58 == 0) goto LAB_0010787d;
  goto LAB_001076d1;
LAB_001079c0:
  pEVar13 = ppEVar9[lVar16];
  ppEVar9[lVar16] = *ppEVar9;
  if (lVar16 < 3) {
    if (lVar16 != 2) {
      *ppEVar9 = pEVar13;
      return;
    }
    lVar12 = param_1 + 1;
    lVar10 = 0;
    lVar16 = 1;
    *ppEVar9 = param_3[lVar12];
LAB_00107a48:
    iVar4 = *(int *)pEVar13;
    while( true ) {
      ppEVar7 = param_3 + lVar12;
      pEVar2 = param_3[param_1 + lVar10];
      if (iVar4 <= *(int *)pEVar2) break;
      *ppEVar7 = pEVar2;
      if (lVar10 == 0) {
        param_3[param_1 + lVar10] = pEVar13;
        goto LAB_001079c0;
      }
      lVar12 = param_1 + lVar10;
      lVar10 = (lVar10 + -1) / 2;
    }
  }
  else {
    lVar12 = 2;
    lVar10 = 0;
    do {
      pEVar2 = param_3[param_1 + lVar12];
      pEVar14 = param_3[param_1 + lVar12 + -1];
      lVar6 = lVar12 + -1;
      ppEVar7 = param_3 + param_1 + lVar12 + -1;
      lVar11 = lVar12;
      if (*(int *)pEVar14 <= *(int *)pEVar2) {
        lVar11 = lVar12 + 1;
        lVar6 = lVar12;
        ppEVar7 = param_3 + param_1 + lVar12;
        pEVar14 = pEVar2;
      }
      lVar12 = lVar11 * 2;
      param_3[lVar10 + param_1] = pEVar14;
      lVar10 = lVar6;
    } while (lVar16 != lVar12 && SBORROW8(lVar16,lVar12) == lVar16 + lVar11 * -2 < 0);
    if (lVar16 == lVar12) {
      lVar12 = param_1 + lVar16 + -1;
      lVar10 = lVar16 + -2 >> 1;
      *ppEVar7 = param_3[lVar12];
      lVar16 = lVar16 + -1;
      goto LAB_00107a48;
    }
    lVar12 = param_1 + lVar6;
    lVar16 = lVar16 + -1;
    lVar10 = (lVar6 + -1) / 2;
    if (0 < lVar6) goto LAB_00107a48;
  }
  *ppEVar7 = pEVar13;
  goto LAB_001079c0;
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



/* ThemeDB::_get_class_namev() const */

undefined8 * ThemeDB::_get_class_namev(void)

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
LAB_00107fe3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107fe3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ThemeDB");
      goto LAB_0010804e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ThemeDB");
LAB_0010804e:
  return &_get_class_namev()::_class_name_static;
}



/* ThemeContext::_get_class_namev() const */

undefined8 * ThemeContext::_get_class_namev(void)

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
LAB_001080d3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001080d3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ThemeContext");
      goto LAB_0010813e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ThemeContext");
LAB_0010813e:
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



/* ThemeDB::ThemeItemBind::~ThemeItemBind() */

void __thiscall ThemeDB::ThemeItemBind::~ThemeItemBind(ThemeItemBind *this)

{
  if (*(code **)(this + 0x38) != (code *)0x0) {
    (**(code **)(this + 0x38))(this + 0x28,this + 0x28,3);
  }
  if (StringName::configured != '\0') {
    if ((*(long *)(this + 0x18) != 0) && (StringName::unref(), StringName::configured == '\0')) {
      return;
    }
    if ((*(long *)(this + 0x10) != 0) && (StringName::unref(), StringName::configured == '\0')) {
      return;
    }
    if (*(long *)(this + 8) != 0) {
      StringName::unref();
      return;
    }
  }
  return;
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



/* ThemeDB::get_class() const */

void ThemeDB::get_class(void)

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



/* ThemeContext::get_class() const */

void ThemeContext::get_class(void)

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



/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    plVar1 = (long *)*plVar4;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar1[3] == plVar4) {
      lVar3 = plVar1[1];
      lVar2 = plVar1[2];
      *plVar4 = lVar3;
      if (plVar1 == (long *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar3;
        lVar3 = plVar1[1];
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      if ((StringName::configured != '\0') && (*plVar1 != 0)) {
        StringName::unref();
      }
      Memory::free_static(plVar1,false);
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



/* Ref<Theme>::unref() */

void __thiscall Ref<Theme>::unref(Ref<Theme> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* Ref<Font>::unref() */

void __thiscall Ref<Font>::unref(Ref<Font> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* Ref<Texture2D>::unref() */

void __thiscall Ref<Texture2D>::unref(Ref<Texture2D> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* Ref<StyleBox>::unref() */

void __thiscall Ref<StyleBox>::unref(Ref<StyleBox> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Node*, ThemeContext*, HashMapHasherDefault, HashMapComparatorDefault<Node*>,
   DefaultTypedAllocator<HashMapElement<Node*, ThemeContext*> > >::operator[](Node* const&) */

undefined1 * __thiscall
HashMap<Node*,ThemeContext*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,ThemeContext*>>>
::operator[](HashMap<Node*,ThemeContext*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,ThemeContext*>>>
             *this,Node **param_1)

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
  ulong uVar25;
  undefined8 uVar26;
  void *__s_00;
  undefined1 (*pauVar27) [16];
  void *pvVar28;
  int iVar29;
  long lVar30;
  long lVar31;
  uint uVar32;
  ulong uVar33;
  Node *pNVar34;
  undefined8 uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined1 (*pauVar40) [16];
  long in_FS_OFFSET;
  uint local_98;
  uint local_48;
  uint local_44;
  long local_40;
  
  pNVar34 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  cVar24 = _lookup_pos(this,(Node **)pNVar34,&local_48);
  if (cVar24 == '\0') {
    uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (*(long *)(this + 8) == 0) {
      uVar33 = (ulong)uVar32;
      uVar25 = uVar33 * 4;
      uVar39 = uVar33 * 8;
      uVar26 = Memory::alloc_static(uVar25,false);
      *(undefined8 *)(this + 0x10) = uVar26;
      pvVar28 = (void *)Memory::alloc_static(uVar39,false);
      *(void **)(this + 8) = pvVar28;
      if (uVar32 != 0) {
        pvVar4 = *(void **)(this + 0x10);
        if ((pvVar4 < (void *)((long)pvVar28 + uVar39)) &&
           (pvVar28 < (void *)((long)pvVar4 + uVar25))) {
          uVar25 = 0;
          do {
            *(undefined4 *)((long)pvVar4 + uVar25 * 4) = 0;
            *(undefined8 *)((long)pvVar28 + uVar25 * 8) = 0;
            uVar25 = uVar25 + 1;
          } while (uVar33 != uVar25);
        }
        else {
          memset(pvVar4,0,uVar25);
          memset(pvVar28,0,uVar39);
        }
      }
      pNVar34 = *param_1;
    }
    local_44 = 0;
    cVar24 = _lookup_pos(this,(Node **)pNVar34,&local_44);
    if (cVar24 == '\0') {
      if ((float)uVar32 * __LC32 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar32 = *(uint *)(this + 0x28);
        if (uVar32 == 0x1c) {
          pauVar27 = (undefined1 (*) [16])0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_00109258;
        }
        uVar25 = (ulong)(uVar32 + 1);
        *(undefined4 *)(this + 0x2c) = 0;
        uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
        if (uVar32 + 1 < 2) {
          uVar25 = 2;
        }
        uVar32 = *(uint *)(hash_table_size_primes + uVar25 * 4);
        uVar33 = (ulong)uVar32;
        *(int *)(this + 0x28) = (int)uVar25;
        pvVar28 = *(void **)(this + 8);
        uVar25 = uVar33 * 4;
        uVar39 = uVar33 * 8;
        pvVar4 = *(void **)(this + 0x10);
        uVar26 = Memory::alloc_static(uVar25,false);
        *(undefined8 *)(this + 0x10) = uVar26;
        __s_00 = (void *)Memory::alloc_static(uVar39,false);
        *(void **)(this + 8) = __s_00;
        if (uVar32 != 0) {
          __s = *(void **)(this + 0x10);
          if ((__s < (void *)((long)__s_00 + uVar39)) && (__s_00 < (void *)((long)__s + uVar25))) {
            uVar25 = 0;
            do {
              *(undefined4 *)((long)__s + uVar25 * 4) = 0;
              *(undefined8 *)((long)__s_00 + uVar25 * 8) = 0;
              uVar25 = uVar25 + 1;
            } while (uVar25 != uVar33);
          }
          else {
            memset(__s,0,uVar25);
            memset(__s_00,0,uVar39);
          }
        }
        if (uVar3 == 0) {
          pNVar34 = *param_1;
        }
        else {
          uVar25 = 0;
          do {
            uVar32 = *(uint *)((long)pvVar4 + uVar25 * 4);
            if (uVar32 != 0) {
              lVar5 = *(long *)(this + 0x10);
              uVar36 = 0;
              uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
              uVar39 = CONCAT44(0,uVar38);
              lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)uVar32 * lVar6;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = uVar39;
              lVar30 = SUB168(auVar7 * auVar15,8);
              puVar1 = (uint *)(lVar5 + lVar30 * 4);
              iVar29 = SUB164(auVar7 * auVar15,8);
              uVar37 = *puVar1;
              uVar26 = *(undefined8 *)((long)pvVar28 + uVar25 * 8);
              while (uVar37 != 0) {
                auVar8._8_8_ = 0;
                auVar8._0_8_ = (ulong)uVar37 * lVar6;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar39;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = (ulong)((uVar38 + iVar29) - SUB164(auVar8 * auVar16,8)) * lVar6;
                auVar17._8_8_ = 0;
                auVar17._0_8_ = uVar39;
                local_98 = SUB164(auVar9 * auVar17,8);
                uVar35 = uVar26;
                if (local_98 < uVar36) {
                  *puVar1 = uVar32;
                  puVar2 = (undefined8 *)((long)__s_00 + lVar30 * 8);
                  uVar35 = *puVar2;
                  *puVar2 = uVar26;
                  uVar32 = uVar37;
                  uVar36 = local_98;
                }
                uVar36 = uVar36 + 1;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = (ulong)(iVar29 + 1) * lVar6;
                auVar18._8_8_ = 0;
                auVar18._0_8_ = uVar39;
                lVar30 = SUB168(auVar10 * auVar18,8);
                puVar1 = (uint *)(lVar5 + lVar30 * 4);
                iVar29 = SUB164(auVar10 * auVar18,8);
                uVar26 = uVar35;
                uVar37 = *puVar1;
              }
              *(undefined8 *)((long)__s_00 + lVar30 * 8) = uVar26;
              *puVar1 = uVar32;
              *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
            }
            uVar25 = uVar25 + 1;
          } while (uVar25 != uVar3);
          Memory::free_static(pvVar28,false);
          Memory::free_static(pvVar4,false);
          pNVar34 = *param_1;
        }
      }
      pauVar27 = (undefined1 (*) [16])operator_new(0x20,"");
      *(Node **)pauVar27[1] = pNVar34;
      *(undefined8 *)(pauVar27[1] + 8) = 0;
      *pauVar27 = (undefined1  [16])0x0;
      puVar2 = *(undefined8 **)(this + 0x20);
      if (puVar2 == (undefined8 *)0x0) {
        *(undefined1 (**) [16])(this + 0x18) = pauVar27;
      }
      else {
        *puVar2 = pauVar27;
        *(undefined8 **)(*pauVar27 + 8) = puVar2;
      }
      pNVar34 = *param_1;
      *(undefined1 (**) [16])(this + 0x20) = pauVar27;
      lVar5 = *(long *)(this + 0x10);
      uVar25 = (long)pNVar34 * 0x3ffff - 1;
      uVar25 = (uVar25 ^ uVar25 >> 0x1f) * 0x15;
      uVar25 = (uVar25 ^ uVar25 >> 0xb) * 0x41;
      uVar25 = uVar25 >> 0x16 ^ uVar25;
      uVar39 = uVar25 & 0xffffffff;
      if ((int)uVar25 == 0) {
        uVar39 = 1;
      }
      uVar37 = 0;
      lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar38 = (uint)uVar39;
      uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar25 = CONCAT44(0,uVar32);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar39 * lVar6;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar25;
      lVar31 = SUB168(auVar11 * auVar19,8);
      lVar30 = *(long *)(this + 8);
      puVar1 = (uint *)(lVar5 + lVar31 * 4);
      iVar29 = SUB164(auVar11 * auVar19,8);
      uVar3 = *puVar1;
      pauVar23 = pauVar27;
      while (uVar3 != 0) {
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)uVar3 * lVar6;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar25;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)((uVar32 + iVar29) - SUB164(auVar12 * auVar20,8)) * lVar6;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar25;
        local_98 = SUB164(auVar13 * auVar21,8);
        pauVar40 = pauVar23;
        if (local_98 < uVar37) {
          *puVar1 = (uint)uVar39;
          uVar39 = (ulong)uVar3;
          puVar2 = (undefined8 *)(lVar30 + lVar31 * 8);
          pauVar40 = (undefined1 (*) [16])*puVar2;
          *puVar2 = pauVar23;
          uVar37 = local_98;
        }
        uVar38 = (uint)uVar39;
        uVar37 = uVar37 + 1;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)(iVar29 + 1) * lVar6;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar25;
        lVar31 = SUB168(auVar14 * auVar22,8);
        puVar1 = (uint *)(lVar5 + lVar31 * 4);
        iVar29 = SUB164(auVar14 * auVar22,8);
        pauVar23 = pauVar40;
        uVar3 = *puVar1;
      }
      *(undefined1 (**) [16])(lVar30 + lVar31 * 8) = pauVar23;
      *puVar1 = uVar38;
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    }
    else {
      pauVar27 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_44 * 8);
      *(undefined8 *)(pauVar27[1] + 8) = 0;
    }
  }
  else {
    pauVar27 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_48 * 8);
  }
LAB_00109258:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar27[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable create_custom_callable_function_pointer<ThemeDB, Node*>(ThemeDB*, char const*, void
   (ThemeDB::*)(Node*)) */

ThemeDB * create_custom_callable_function_pointer<ThemeDB,Node*>
                    (ThemeDB *param_1,char *param_2,_func_void_Node_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC19;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001169d0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_Node_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::insert(StringName const&) */

StringName *
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
          (StringName *param_1)

{
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
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  StringName *in_RDX;
  long lVar34;
  ulong uVar35;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  undefined4 uVar39;
  uint uVar40;
  ulong uVar41;
  uint uVar42;
  uint *puVar43;
  int iVar44;
  uint local_88;
  long local_68;
  
  uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
    uVar29 = (ulong)uVar27 * 4;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[3] = lVar30;
    lVar30 = Memory::alloc_static((ulong)uVar27 * 8,false);
    *in_RSI = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[2] = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[1] = lVar30;
    if (uVar27 != 0) {
      memset((void *)in_RSI[3],0,uVar29);
    }
    iVar44 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_0010951c;
  }
  else {
    iVar44 = *(int *)((long)in_RSI + 0x24);
LAB_0010951c:
    if (iVar44 != 0) {
      uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      uVar29 = CONCAT44(0,uVar40);
      lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      if (*(long *)in_RDX == 0) {
        uVar28 = StringName::get_empty_hash();
        iVar44 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        uVar28 = *(uint *)(*(long *)in_RDX + 0x20);
      }
      if (uVar28 == 0) {
        uVar28 = 1;
      }
      uVar37 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar28 * lVar30;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar29;
      lVar34 = SUB168(auVar3 * auVar15,8);
      iVar33 = SUB164(auVar3 * auVar15,8);
      uVar42 = *(uint *)(in_RSI[3] + lVar34 * 4);
      if (uVar42 != 0) {
        do {
          if (uVar28 == uVar42) {
            lVar36 = *in_RSI;
            uVar42 = *(uint *)(in_RSI[1] + lVar34 * 4);
            if (*(long *)(lVar36 + (ulong)uVar42 * 8) == *(long *)in_RDX) goto LAB_00109968;
          }
          uVar37 = uVar37 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(iVar33 + 1) * lVar30;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar29;
          lVar34 = SUB168(auVar4 * auVar16,8);
          uVar42 = *(uint *)(in_RSI[3] + lVar34 * 4);
          iVar33 = SUB164(auVar4 * auVar16,8);
        } while ((uVar42 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar42 * lVar30, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar29, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar40 + iVar33) - SUB164(auVar5 * auVar17,8)) * lVar30,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar29, uVar37 <= SUB164(auVar6 * auVar18,8)));
      }
    }
  }
  if ((float)(iVar44 + 1) <= (float)uVar27 * __LC32) {
    lVar30 = *(long *)in_RDX;
    if (lVar30 != 0) goto LAB_00109845;
LAB_001099a6:
    uVar27 = StringName::get_empty_hash();
  }
  else {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      uVar42 = 0xffffffff;
      iVar44 = *(int *)((long)in_RSI + 0x24);
      lVar36 = *in_RSI;
      goto LAB_00109968;
    }
    uVar27 = (int)in_RSI[4] + 1;
    uVar29 = (ulong)uVar27;
    if (uVar27 < 2) {
      uVar29 = 2;
    }
    uVar27 = *(uint *)(hash_table_size_primes + uVar29 * 4);
    *(int *)(in_RSI + 4) = (int)uVar29;
    pvVar1 = (void *)in_RSI[3];
    uVar29 = (ulong)uVar27 * 4;
    pvVar2 = (void *)in_RSI[2];
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[3] = lVar30;
    lVar30 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar27 * 8,false);
    *in_RSI = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[2] = lVar30;
    lVar30 = Memory::realloc_static((void *)in_RSI[1],uVar29,false);
    in_RSI[1] = lVar30;
    if (uVar27 != 0) {
      memset((void *)in_RSI[3],0,uVar29);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar29 = 0;
      lVar34 = in_RSI[3];
      lVar36 = in_RSI[2];
      do {
        uVar41 = uVar29 & 0xffffffff;
        uVar39 = (undefined4)uVar29;
        uVar42 = 0;
        uVar27 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar29 * 4) * 4);
        uVar35 = (ulong)uVar27;
        uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar40);
        lVar31 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar35 * lVar31;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar38;
        lVar32 = SUB168(auVar7 * auVar19,8) * 4;
        iVar44 = SUB164(auVar7 * auVar19,8);
        puVar43 = (uint *)(lVar34 + lVar32);
        uVar28 = *puVar43;
        if (uVar28 == 0) {
          lVar31 = uVar29 * 4;
        }
        else {
          do {
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar28 * lVar31;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar38;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)((uVar40 + iVar44) - SUB164(auVar8 * auVar20,8)) * lVar31;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar38;
            local_88 = SUB164(auVar9 * auVar21,8);
            if (local_88 < uVar42) {
              *(int *)(lVar36 + uVar41 * 4) = iVar44;
              uVar27 = *puVar43;
              *puVar43 = (uint)uVar35;
              uVar28 = *(uint *)(lVar32 + lVar30);
              uVar35 = (ulong)uVar27;
              *(uint *)(lVar32 + lVar30) = (uint)uVar41;
              uVar41 = (ulong)uVar28;
              uVar42 = local_88;
            }
            uVar39 = (undefined4)uVar41;
            uVar27 = (uint)uVar35;
            uVar42 = uVar42 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)(iVar44 + 1) * lVar31;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar38;
            lVar32 = SUB168(auVar10 * auVar22,8) * 4;
            iVar44 = SUB164(auVar10 * auVar22,8);
            puVar43 = (uint *)(lVar34 + lVar32);
            uVar28 = *puVar43;
          } while (uVar28 != 0);
          lVar31 = uVar41 << 2;
        }
        *puVar43 = uVar27;
        uVar29 = uVar29 + 1;
        *(int *)(lVar36 + lVar31) = iVar44;
        *(undefined4 *)(lVar30 + lVar32) = uVar39;
      } while ((uint)uVar29 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
    lVar30 = *(long *)in_RDX;
    if (lVar30 == 0) goto LAB_001099a6;
LAB_00109845:
    uVar27 = *(uint *)(lVar30 + 0x20);
  }
  if (uVar27 == 0) {
    uVar27 = 1;
  }
  uVar29 = (ulong)uVar27;
  StringName::StringName((StringName *)(*in_RSI + (ulong)*(uint *)((long)in_RSI + 0x24) * 8),in_RDX)
  ;
  uVar40 = *(uint *)((long)in_RSI + 0x24);
  lVar34 = in_RSI[3];
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar35 = CONCAT44(0,uVar28);
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar29 * lVar36;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar35;
  lVar30 = SUB168(auVar11 * auVar23,8) * 4;
  iVar44 = SUB164(auVar11 * auVar23,8);
  puVar43 = (uint *)(lVar34 + lVar30);
  uVar42 = *puVar43;
  if (uVar42 == 0) {
    local_68 = in_RSI[2];
    lVar32 = in_RSI[1];
  }
  else {
    uVar37 = 0;
    local_68 = in_RSI[2];
    lVar32 = in_RSI[1];
    do {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar42 * lVar36;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar35;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)((uVar28 + iVar44) - SUB164(auVar12 * auVar24,8)) * lVar36;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar35;
      local_88 = SUB164(auVar13 * auVar25,8);
      if (local_88 < uVar37) {
        *(int *)(local_68 + (ulong)uVar40 * 4) = iVar44;
        uVar27 = *puVar43;
        *puVar43 = (uint)uVar29;
        uVar42 = *(uint *)(lVar30 + lVar32);
        uVar29 = (ulong)uVar27;
        *(uint *)(lVar30 + lVar32) = uVar40;
        uVar40 = uVar42;
        uVar37 = local_88;
      }
      uVar27 = (uint)uVar29;
      uVar37 = uVar37 + 1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)(iVar44 + 1) * lVar36;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar35;
      lVar30 = SUB168(auVar14 * auVar26,8) * 4;
      iVar44 = SUB164(auVar14 * auVar26,8);
      puVar43 = (uint *)(lVar34 + lVar30);
      uVar42 = *puVar43;
    } while (uVar42 != 0);
  }
  *puVar43 = uVar27;
  *(int *)(local_68 + (ulong)uVar40 * 4) = iVar44;
  *(uint *)(lVar32 + lVar30) = uVar40;
  uVar42 = *(uint *)((long)in_RSI + 0x24);
  lVar36 = *in_RSI;
  iVar44 = uVar42 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar44;
LAB_00109968:
  *(uint *)(param_1 + 0xc) = uVar42;
  *(long *)param_1 = lVar36;
  *(int *)(param_1 + 8) = iVar44;
  return param_1;
}



/* void List<ThemeDB::ThemeItemBind,
   DefaultAllocator>::sort_custom<ThemeDB::ThemeItemBind::SortByType>() */

void __thiscall
List<ThemeDB::ThemeItemBind,DefaultAllocator>::sort_custom<ThemeDB::ThemeItemBind::SortByType>
          (List<ThemeDB::ThemeItemBind,DefaultAllocator> *this)

{
  size_t __n;
  int iVar1;
  int iVar2;
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
  
  if (*(long *)this == 0) {
    return;
  }
  iVar1 = *(int *)(*(long *)this + 0x10);
  if (iVar1 < 2) {
    return;
  }
  pEVar4 = (Element *)(long)iVar1;
  __src = (Element **)Memory::alloc_static((long)pEVar4 * 8,true);
  if (__src == (Element **)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
    local_60 = (Element **)0x8;
  }
  else {
    __src[-1] = pEVar4;
    local_60 = __src + 1;
  }
  if (*(long **)this != (long *)0x0) {
    ppEVar7 = __src;
    for (pEVar13 = (Element *)**(long **)this; pEVar13 != (Element *)0x0;
        pEVar13 = *(Element **)(pEVar13 + 0x48)) {
      *ppEVar7 = pEVar13;
      ppEVar7 = ppEVar7 + 1;
    }
  }
  lVar9 = 0;
  pEVar13 = pEVar4;
  do {
    pEVar13 = (Element *)((long)pEVar13 >> 1);
    lVar9 = lVar9 + 1;
  } while (pEVar13 != (Element *)0x1);
  SortArray<List<ThemeDB::ThemeItemBind,DefaultAllocator>::Element*,List<ThemeDB::ThemeItemBind,DefaultAllocator>::AuxiliaryComparator<ThemeDB::ThemeItemBind::SortByType>,true>
  ::introsort(0,(long)pEVar4,__src,lVar9 * 2);
  if ((long)pEVar4 < 0x11) {
    pEVar13 = (Element *)0x1;
    pEVar8 = *__src;
    do {
      while( true ) {
        pEVar6 = __src[(long)pEVar13];
        __n = (long)pEVar13 * 8;
        iVar2 = *(int *)pEVar6;
        if (iVar2 < *(int *)pEVar8) break;
        pEVar8 = __src[(long)(pEVar13 + -1)];
        ppEVar7 = __src + (long)pEVar13;
        pEVar10 = pEVar13 + -1;
        if (iVar2 < *(int *)pEVar8) {
          do {
            pEVar11 = pEVar10;
            if (pEVar11 == (Element *)0x0) {
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              ppEVar7 = local_60;
              goto LAB_00109ea3;
            }
            __src[(long)(pEVar11 + 1)] = pEVar8;
            pEVar8 = __src[(long)(pEVar11 + -1)];
            pEVar10 = pEVar11 + -1;
          } while (iVar2 < *(int *)pEVar8);
          ppEVar7 = __src + (long)pEVar11;
        }
LAB_00109ea3:
        pEVar13 = pEVar13 + 1;
        *ppEVar7 = pEVar6;
        pEVar6 = *__src;
        pEVar8 = pEVar6;
        if (pEVar4 == pEVar13) goto LAB_00109d50;
      }
      pEVar13 = pEVar13 + 1;
      memmove(__src + 1,__src,__n);
      *__src = pEVar6;
      pEVar8 = pEVar6;
    } while (pEVar4 != pEVar13);
  }
  else {
    ppEVar7 = __src + 1;
    lVar9 = 1;
    do {
      while( true ) {
        lVar14 = lVar9;
        pEVar13 = *ppEVar7;
        iVar2 = *(int *)pEVar13;
        if (iVar2 < *(int *)*__src) break;
        pEVar8 = ppEVar7[-1];
        lVar9 = lVar14 + -1;
        ppEVar12 = ppEVar7;
        if (iVar2 < *(int *)pEVar8) {
          do {
            lVar5 = lVar9;
            if (lVar5 == 0) {
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              ppEVar12 = local_60;
              goto LAB_00109c9f;
            }
            __src[lVar5 + 1] = pEVar8;
            pEVar8 = __src[lVar5 + -1];
            lVar9 = lVar5 + -1;
          } while (iVar2 < *(int *)pEVar8);
          ppEVar12 = __src + lVar5;
        }
LAB_00109c9f:
        *ppEVar12 = pEVar13;
        ppEVar7 = ppEVar7 + 1;
        lVar9 = lVar14 + 1;
        if (lVar14 + 1 == 0x10) goto LAB_00109cb0;
      }
      memmove(__src + 1,__src,lVar14 * 8);
      ppEVar7 = ppEVar7 + 1;
      *__src = pEVar13;
      lVar9 = lVar14 + 1;
    } while (lVar14 + 1 != 0x10);
LAB_00109cb0:
    pEVar13 = (Element *)(lVar14 + 1);
    ppEVar7 = __src + 0x10;
    do {
      pEVar6 = *ppEVar7;
      pEVar10 = ppEVar7[-1];
      pEVar8 = pEVar13 + -1;
      iVar2 = *(int *)pEVar6;
      ppEVar12 = ppEVar7;
      if (iVar2 < *(int *)pEVar10) {
        do {
          __src[(long)(pEVar8 + 1)] = pEVar10;
          pEVar11 = pEVar8 + -1;
          pEVar10 = __src[(long)pEVar11];
          if (*(int *)pEVar10 <= iVar2) {
            ppEVar12 = __src + (long)pEVar8;
            goto LAB_00109d33;
          }
          pEVar8 = pEVar11;
        } while (pEVar11 != (Element *)0x0);
        _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                         "bad comparison function; sorting will be broken",0,0);
        ppEVar12 = local_60;
      }
LAB_00109d33:
      pEVar13 = pEVar13 + 1;
      *ppEVar12 = pEVar6;
      ppEVar7 = ppEVar7 + 1;
    } while (pEVar4 != pEVar13);
    pEVar6 = *__src;
  }
LAB_00109d50:
  puVar3 = *(undefined8 **)this;
  *puVar3 = pEVar6;
  *(undefined8 *)(pEVar6 + 0x50) = 0;
  *(Element **)(*__src + 0x48) = __src[1];
  pEVar13 = __src[(long)(pEVar4 + -1)];
  puVar3[1] = pEVar13;
  *(Element **)(pEVar13 + 0x50) = __src[(long)(pEVar4 + -2)];
  *(undefined8 *)(__src[(long)(pEVar4 + -1)] + 0x48) = 0;
  if (iVar1 != 2) {
    ppEVar7 = __src;
    do {
      ppEVar12 = ppEVar7 + 1;
      *(Element **)(ppEVar7[1] + 0x50) = *ppEVar7;
      *(Element **)(*ppEVar12 + 0x48) = ppEVar7[2];
      ppEVar7 = ppEVar12;
    } while (ppEVar12 != __src + (iVar1 - 2));
  }
  Memory::free_static(__src,true);
  return;
}



/* Callable create_custom_callable_function_pointer<ThemeContext>(ThemeContext*, char const*, void
   (ThemeContext::*)()) */

ThemeContext *
create_custom_callable_function_pointer<ThemeContext>
          (ThemeContext *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC19;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00116af0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010a250) */
/* String vformat<StringName, StringName>(String const&, StringName const, StringName const) */

undefined8 *
vformat<StringName,StringName>
          (undefined8 *param_1,bool *param_2,StringName *param_3,StringName *param_4)

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



/* MethodBindTR<Ref<StyleBox>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Ref<StyleBox>>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "StyleBox";
  local_40 = 8;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 0x18;
  puVar1[6] = 0x11;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] != 0x11) {
      StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
      goto LAB_0010a475;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
  if (*(char **)(puVar1 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar1 + 4) = local_48;
  }
LAB_0010a475:
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



/* MethodBindTR<Ref<Texture2D>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Ref<Texture2D>>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "Texture2D";
  local_40 = 9;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 0x18;
  puVar1[6] = 0x11;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] != 0x11) {
      StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
      goto LAB_0010a5e5;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
  if (*(char **)(puVar1 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar1 + 4) = local_48;
  }
LAB_0010a5e5:
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



/* MethodBindTR<Ref<Font>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Ref<Font>>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC55;
  local_40 = 4;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 0x18;
  puVar1[6] = 0x11;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] != 0x11) {
      StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
      goto LAB_0010a755;
    }
  }
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
LAB_0010a755:
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



/* MethodBindTR<Ref<Theme>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Ref<Theme>>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "Theme";
  local_40 = 5;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 0x18;
  puVar1[6] = 0x11;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] != 0x11) {
      StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
      goto LAB_0010a8c5;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
  if (*(char **)(puVar1 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar1 + 4) = local_48;
  }
LAB_0010a8c5:
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



/* CallableCustomMethodPointer<ThemeContext, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ThemeContext,void>::call
          (CallableCustomMethodPointer<ThemeContext,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010ab5f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010ab5f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010ab38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010ac21;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010ab5f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC61,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010ac21:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ThemeDB, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ThemeDB,void>::call
          (CallableCustomMethodPointer<ThemeDB,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010ad7f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010ad7f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010ad58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010ae41;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010ad7f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC61,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010ae41:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ThemeDB, void, Node*>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ThemeDB,void,Node*>::call
          (CallableCustomMethodPointer<ThemeDB,void,Node*> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  Object *pOVar5;
  Object *pOVar6;
  long lVar7;
  uint uVar8;
  ulong *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (String)0x0;
      LOCK();
      bVar10 = (char)ObjectDB::spin_lock == '\0';
      if (bVar10) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar10) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010b085;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_0010b085;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_0010af90:
          uVar3 = _LC62;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Node::typeinfo,0), lVar7 == 0)) &&
             (pOVar5 != (Object *)0x0)) goto LAB_0010af90;
        }
        pOVar5 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Node::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010aff7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5);
          return;
        }
        goto LAB_0010b136;
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
LAB_0010b085:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC61,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010b136:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
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
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC19;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,2,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
               &local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
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
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<int>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC19;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 2;
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
      goto LAB_0010b3e5;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_0010b3e5:
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



/* MethodBindTR<float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<float>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC19;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 3;
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
      goto LAB_0010b545;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_0010b545:
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



/* MethodBindT<Ref<Font> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<Font>const&>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
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
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC55;
    local_60 = 4;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,0x18,(CowData<char32_t> *)&local_80,0x11,
               (StrRange *)&local_78,6,&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
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
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Texture2D> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<Texture2D>const&>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
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
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = "Texture2D";
    local_60 = 9;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,0x18,(CowData<char32_t> *)&local_80,0x11,
               (StrRange *)&local_78,6,&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
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
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<float>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
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
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC19;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,3,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
               &local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
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
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<StyleBox> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<StyleBox>const&>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
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
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = "StyleBox";
    local_60 = 8;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,0x18,(CowData<char32_t> *)&local_80,0x11,
               (StrRange *)&local_78,6,&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
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
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ThemeContext::is_class(String const&) const */

undefined8 __thiscall ThemeContext::is_class(ThemeContext *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010bcdf;
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
LAB_0010bcdf:
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
    if (cVar6 != '\0') goto LAB_0010bd93;
  }
  cVar6 = String::operator==(param_1,"ThemeContext");
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
              if (lVar5 == 0) goto LAB_0010be3f;
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
LAB_0010be3f:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010bd93;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_0010bd93:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ThemeDB::is_class(String const&) const */

undefined8 __thiscall ThemeDB::is_class(ThemeDB *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010bf2f;
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
LAB_0010bf2f:
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
    if (cVar6 != '\0') goto LAB_0010bfe3;
  }
  cVar6 = String::operator==(param_1,"ThemeDB");
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
              if (lVar5 == 0) goto LAB_0010c08f;
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
LAB_0010c08f:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010bfe3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_0010bfe3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ThemeContext::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void ThemeContext::_get_property_listv(List *param_1,bool param_2)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = "ThemeContext";
  local_88 = 0;
  local_90 = 0;
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ThemeContext";
  local_98 = 0;
  local_70 = 0xc;
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
      goto LAB_0010c26c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c26c:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
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
  StringName::StringName((StringName *)&local_78,"ThemeContext",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ThemeDB::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void ThemeDB::_get_property_listv(List *param_1,bool param_2)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = "ThemeDB";
  local_88 = 0;
  local_90 = 0;
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ThemeDB";
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
      goto LAB_0010c4bc;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c4bc:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
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
  StringName::StringName((StringName *)&local_78,"ThemeDB",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* ThemeContext::_bind_methods() [clone .cold] */

void ThemeContext::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<StringName>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ThemeDB::_bind_methods() [clone .cold] */

void ThemeDB::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<Theme> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<Theme>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ThemeContext::_initialize_classv() */

void ThemeContext::_initialize_classv(void)

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
    local_48 = "ThemeContext";
    local_60 = 0;
    local_40 = 0xc;
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



/* KeyValue<StringName, List<ThemeDB::ThemeItemBind, DefaultAllocator> >::~KeyValue() */

void __thiscall
KeyValue<StringName,List<ThemeDB::ThemeItemBind,DefaultAllocator>>::~KeyValue
          (KeyValue<StringName,List<ThemeDB::ThemeItemBind,DefaultAllocator>> *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 8);
  if (puVar2 != (undefined8 *)0x0) {
    do {
      pvVar1 = (void *)*puVar2;
      if (pvVar1 == (void *)0x0) {
        if (*(int *)(puVar2 + 2) != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_0010c92d;
        }
        break;
      }
      if (puVar2 == *(undefined8 **)((long)pvVar1 + 0x58)) {
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
        if (*(code **)((long)pvVar1 + 0x38) != (code *)0x0) {
          (**(code **)((long)pvVar1 + 0x38))((long)pvVar1 + 0x28,(long)pvVar1 + 0x28,3);
        }
        if (StringName::configured != '\0') {
          if (*(long *)((long)pvVar1 + 0x18) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010c905;
          }
          if (*(long *)((long)pvVar1 + 0x10) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010c905;
          }
          if (*(long *)((long)pvVar1 + 8) != 0) {
            StringName::unref();
          }
        }
LAB_0010c905:
        Memory::free_static(pvVar1,false);
        *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      puVar2 = *(undefined8 **)(this + 8);
    } while (*(int *)(puVar2 + 2) != 0);
    Memory::free_static(puVar2,false);
  }
LAB_0010c92d:
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* List<ThemeDB::ThemeItemBind, DefaultAllocator>::~List() */

void __thiscall
List<ThemeDB::ThemeItemBind,DefaultAllocator>::~List
          (List<ThemeDB::ThemeItemBind,DefaultAllocator> *this)

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
    if (puVar2 == *(undefined8 **)((long)pvVar1 + 0x58)) {
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
      if (*(code **)((long)pvVar1 + 0x38) != (code *)0x0) {
        (**(code **)((long)pvVar1 + 0x38))((long)pvVar1 + 0x28,(long)pvVar1 + 0x28,3);
      }
      if (StringName::configured != '\0') {
        if (*(long *)((long)pvVar1 + 0x18) != 0) {
          StringName::unref();
          if (StringName::configured == '\0') goto LAB_0010ca94;
        }
        if (*(long *)((long)pvVar1 + 0x10) != 0) {
          StringName::unref();
          if (StringName::configured == '\0') goto LAB_0010ca94;
        }
        if (*(long *)((long)pvVar1 + 8) != 0) {
          StringName::unref();
        }
      }
LAB_0010ca94:
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, List<ThemeDB::ThemeItemBind, DefaultAllocator>, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   List<ThemeDB::ThemeItemBind, DefaultAllocator> > > >::operator[](StringName const&) */

List<ThemeDB::ThemeItemBind,DefaultAllocator> * __thiscall
HashMap<StringName,List<ThemeDB::ThemeItemBind,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,List<ThemeDB::ThemeItemBind,DefaultAllocator>>>>
::operator[](HashMap<StringName,List<ThemeDB::ThemeItemBind,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,List<ThemeDB::ThemeItemBind,DefaultAllocator>>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  ThemeItemBind *pTVar4;
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
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined8 *puVar42;
  long lVar43;
  void *pvVar44;
  ulong uVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  ulong uVar50;
  List<ThemeDB::ThemeItemBind,DefaultAllocator> *this_00;
  undefined8 uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  undefined8 *puVar55;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined1 local_68 [16];
  StringName local_58 [8];
  undefined8 *local_50;
  long local_40;
  
  lVar43 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  if (lVar43 == 0) {
LAB_0010d280:
    local_70 = 0;
    uVar45 = uVar40 * 4;
    uVar50 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar45,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar44 = (void *)Memory::alloc_static(uVar50,false);
    *(void **)(this + 8) = pvVar44;
    if ((int)uVar40 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar44 + uVar50)) && (pvVar44 < (void *)((long)pvVar3 + uVar45))
         ) {
        uVar45 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar45 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar45 * 8) = 0;
          uVar45 = uVar45 + 1;
        } while (uVar40 != uVar45);
      }
      else {
        memset(pvVar3,0,uVar45);
        memset(pvVar44,0,uVar50);
      }
LAB_0010cc91:
      iVar46 = *(int *)(this + 0x2c);
      if (iVar46 != 0) {
LAB_0010cc9d:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar39 = StringName::get_empty_hash();
        }
        else {
          uVar39 = *(uint *)(*(long *)param_1 + 0x20);
        }
        uVar45 = CONCAT44(0,uVar38);
        if (uVar39 == 0) {
          uVar39 = 1;
        }
        uVar54 = 0;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)uVar39 * lVar43;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = uVar45;
        lVar48 = SUB168(auVar9 * auVar25,8);
        uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar48 * 4);
        uVar53 = SUB164(auVar9 * auVar25,8);
        if (uVar52 != 0) {
          do {
            if ((uVar39 == uVar52) &&
               (lVar47 = *(long *)(this + 8),
               *(long *)(*(long *)(lVar47 + lVar48 * 8) + 0x10) == *(long *)param_1)) {
              lVar43 = *(long *)(lVar47 + (ulong)uVar53 * 8);
              puVar42 = *(undefined8 **)(lVar43 + 0x18);
              if (puVar42 != (undefined8 *)0x0) goto LAB_0010cd75;
              goto LAB_0010cdf7;
            }
            uVar54 = uVar54 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)(uVar53 + 1) * lVar43;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar45;
            lVar48 = SUB168(auVar10 * auVar26,8);
            uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar48 * 4);
            uVar53 = SUB164(auVar10 * auVar26,8);
          } while ((uVar52 != 0) &&
                  (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar52 * lVar43, auVar27._8_8_ = 0,
                  auVar27._0_8_ = uVar45, auVar12._8_8_ = 0,
                  auVar12._0_8_ = (ulong)((uVar38 + uVar53) - SUB164(auVar11 * auVar27,8)) * lVar43,
                  auVar28._8_8_ = 0, auVar28._0_8_ = uVar45, uVar54 <= SUB164(auVar12 * auVar28,8)))
          ;
        }
        iVar46 = *(int *)(this + 0x2c);
      }
      goto LAB_0010ce14;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_0010ce14;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0010cc9d;
LAB_0010ce3a:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      this_00 = (List<ThemeDB::ThemeItemBind,DefaultAllocator> *)0x18;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010d1e6;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar50 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar44 = *(void **)(this + 8);
    uVar40 = uVar50 * 4;
    uVar45 = uVar50 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar50);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar43 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar52 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar52);
          lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)uVar38 * lVar48;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar45;
          lVar47 = SUB168(auVar13 * auVar29,8);
          puVar1 = (uint *)(lVar43 + lVar47 * 4);
          iVar46 = SUB164(auVar13 * auVar29,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)pvVar44 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)uVar53 * lVar48;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar45;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)((iVar46 + uVar52) - SUB164(auVar14 * auVar30,8)) * lVar48;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar45;
            uVar37 = SUB164(auVar15 * auVar31,8);
            uVar51 = uVar41;
            if (uVar37 < uVar54) {
              *puVar1 = uVar38;
              puVar42 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar51 = *puVar42;
              *puVar42 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar37;
            }
            uVar54 = uVar54 + 1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)(iVar46 + 1) * lVar48;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar45;
            lVar47 = SUB168(auVar16 * auVar32,8);
            puVar1 = (uint *)(lVar43 + lVar47 * 4);
            iVar46 = SUB164(auVar16 * auVar32,8);
            uVar41 = uVar51;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar39 = StringName::get_empty_hash();
        lVar43 = *(long *)(this + 8);
      }
      else {
        uVar39 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar48;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21,8);
      uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
      uVar53 = SUB164(auVar5 * auVar21,8);
      if (uVar52 != 0) {
        uVar54 = 0;
        do {
          if ((uVar39 == uVar52) &&
             (*(long *)(*(long *)(lVar43 + lVar47 * 8) + 0x10) == *(long *)param_1)) {
            this_00 = (List<ThemeDB::ThemeItemBind,DefaultAllocator> *)
                      (*(long *)(lVar43 + (ulong)uVar53 * 8) + 0x18);
            goto LAB_0010cc3c;
          }
          uVar54 = uVar54 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar48;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar40;
          lVar47 = SUB168(auVar6 * auVar22,8);
          uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
          uVar53 = SUB164(auVar6 * auVar22,8);
        } while ((uVar52 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar52 * lVar48, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar40, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar53 + uVar38) - SUB164(auVar7 * auVar23,8)) * lVar48,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar40, uVar54 <= SUB164(auVar8 * auVar24,8)));
      }
      local_70 = 0;
      uVar40 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar43 == 0) goto LAB_0010d280;
      goto LAB_0010cc91;
    }
    local_70 = 0;
    iVar46 = 0;
LAB_0010ce14:
    if ((float)uVar40 * __LC32 < (float)(iVar46 + 1)) goto LAB_0010ce3a;
  }
  local_68 = (undefined1  [16])0x0;
  StringName::StringName(local_58,param_1);
  local_50 = (undefined8 *)0x0;
  puVar42 = (undefined8 *)operator_new(0x20,"");
  *puVar42 = local_68._0_8_;
  puVar42[1] = local_68._8_8_;
  StringName::StringName((StringName *)(puVar42 + 2),local_58);
  puVar42[3] = 0;
  this_00 = (List<ThemeDB::ThemeItemBind,DefaultAllocator> *)(puVar42 + 3);
  if (local_50 != (undefined8 *)0x0) {
    for (pTVar4 = (ThemeItemBind *)*local_50; pTVar4 != (ThemeItemBind *)0x0;
        pTVar4 = *(ThemeItemBind **)(pTVar4 + 0x48)) {
      List<ThemeDB::ThemeItemBind,DefaultAllocator>::push_back(this_00,pTVar4);
    }
  }
  KeyValue<StringName,List<ThemeDB::ThemeItemBind,DefaultAllocator>>::~KeyValue
            ((KeyValue<StringName,List<ThemeDB::ThemeItemBind,DefaultAllocator>> *)local_58);
  puVar55 = *(undefined8 **)(this + 0x20);
  if (puVar55 == (undefined8 *)0x0) {
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar42;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 == 0) goto LAB_0010d235;
LAB_0010d0fc:
    uVar38 = *(uint *)(lVar43 + 0x20);
  }
  else {
    *puVar55 = puVar42;
    puVar42[1] = puVar55;
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 != 0) goto LAB_0010d0fc;
LAB_0010d235:
    uVar38 = StringName::get_empty_hash();
  }
  if (uVar38 == 0) {
    uVar38 = 1;
  }
  uVar40 = (ulong)uVar38;
  lVar43 = *(long *)(this + 0x10);
  uVar53 = 0;
  lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar39);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar40 * lVar48;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar45;
  lVar49 = SUB168(auVar17 * auVar33,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar43 + lVar49 * 4);
  iVar46 = SUB164(auVar17 * auVar33,8);
  uVar52 = *puVar1;
  while (uVar52 != 0) {
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)uVar52 * lVar48;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar45;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)((uVar39 + iVar46) - SUB164(auVar18 * auVar34,8)) * lVar48;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar45;
    uVar38 = SUB164(auVar19 * auVar35,8);
    puVar55 = puVar42;
    if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8 *)(lVar47 + lVar49 * 8);
      puVar55 = (undefined8 *)*puVar2;
      *puVar2 = puVar42;
      uVar53 = uVar38;
    }
    uVar38 = (uint)uVar40;
    uVar53 = uVar53 + 1;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = (ulong)(iVar46 + 1) * lVar48;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar45;
    lVar49 = SUB168(auVar20 * auVar36,8);
    puVar1 = (uint *)(lVar43 + lVar49 * 4);
    iVar46 = SUB164(auVar20 * auVar36,8);
    puVar42 = puVar55;
    uVar52 = *puVar1;
  }
  *(undefined8 **)(lVar47 + lVar49 * 8) = puVar42;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010d1e6:
  List<ThemeDB::ThemeItemBind,DefaultAllocator>::~List
            ((List<ThemeDB::ThemeItemBind,DefaultAllocator> *)&local_70);
LAB_0010cc3c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    if (*(undefined8 **)(pTVar4 + 0x58) == puVar42) {
      *puVar42 = *(undefined8 *)(pTVar4 + 0x48);
      if (pTVar4 == (ThemeItemBind *)puVar42[1]) {
        puVar42[1] = *(undefined8 *)(pTVar4 + 0x50);
      }
      if (*(long *)(pTVar4 + 0x50) != 0) {
        *(undefined8 *)(*(long *)(pTVar4 + 0x50) + 0x48) = *(undefined8 *)(pTVar4 + 0x48);
      }
      if (*(long *)(pTVar4 + 0x48) != 0) {
        *(undefined8 *)(*(long *)(pTVar4 + 0x48) + 0x50) = *(undefined8 *)(pTVar4 + 0x50);
      }
      ThemeDB::ThemeItemBind::~ThemeItemBind(pTVar4);
      Memory::free_static(pTVar4,false);
      *(int *)(puVar42 + 2) = *(int *)(puVar42 + 2) + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    puVar42 = *(undefined8 **)(lVar43 + 0x18);
    if (*(int *)(puVar42 + 2) == 0) break;
LAB_0010cd75:
    pTVar4 = (ThemeItemBind *)*puVar42;
    if (pTVar4 == (ThemeItemBind *)0x0) {
      lVar47 = *(long *)(this + 8);
      goto LAB_0010cdf7;
    }
  }
  Memory::free_static(puVar42,false);
  *(undefined8 *)(lVar43 + 0x18) = 0;
  lVar47 = *(long *)(this + 8);
LAB_0010cdf7:
  this_00 = (List<ThemeDB::ThemeItemBind,DefaultAllocator> *)
            (*(long *)(lVar47 + (ulong)uVar53 * 8) + 0x18);
  goto LAB_0010d1e6;
}



/* MethodBind* create_method_bind<ThemeDB, Ref<Theme>>(Ref<Theme> (ThemeDB::*)()) */

MethodBind * create_method_bind<ThemeDB,Ref<Theme>>(_func_Ref *param_1)

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
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00116b80;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "ThemeDB";
  local_30 = 7;
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



/* MethodBind* create_method_bind<ThemeDB, float>(void (ThemeDB::*)(float)) */

MethodBind * create_method_bind<ThemeDB,float>(_func_void_float *param_1)

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
  *(_func_void_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00116be0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "ThemeDB";
  local_30 = 7;
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



/* MethodBind* create_method_bind<ThemeDB, float>(float (ThemeDB::*)()) */

MethodBind * create_method_bind<ThemeDB,float>(_func_float *param_1)

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
  *(_func_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00116c40;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "ThemeDB";
  local_30 = 7;
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



/* MethodBind* create_method_bind<ThemeDB, Ref<Font> const&>(void (ThemeDB::*)(Ref<Font> const&)) */

MethodBind * create_method_bind<ThemeDB,Ref<Font>const&>(_func_void_Ref_ptr *param_1)

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
  *(_func_void_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00116ca0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "ThemeDB";
  local_30 = 7;
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



/* MethodBind* create_method_bind<ThemeDB, Ref<Font>>(Ref<Font> (ThemeDB::*)()) */

MethodBind * create_method_bind<ThemeDB,Ref<Font>>(_func_Ref *param_1)

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
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00116d00;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "ThemeDB";
  local_30 = 7;
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



/* MethodBind* create_method_bind<ThemeDB, int>(void (ThemeDB::*)(int)) */

MethodBind * create_method_bind<ThemeDB,int>(_func_void_int *param_1)

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
  *(_func_void_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00116d60;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "ThemeDB";
  local_30 = 7;
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



/* MethodBind* create_method_bind<ThemeDB, int>(int (ThemeDB::*)()) */

MethodBind * create_method_bind<ThemeDB,int>(_func_int *param_1)

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
  *(_func_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00116dc0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "ThemeDB";
  local_30 = 7;
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



/* MethodBind* create_method_bind<ThemeDB, Ref<Texture2D> const&>(void (ThemeDB::*)(Ref<Texture2D>
   const&)) */

MethodBind * create_method_bind<ThemeDB,Ref<Texture2D>const&>(_func_void_Ref_ptr *param_1)

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
  *(_func_void_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00116e20;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "ThemeDB";
  local_30 = 7;
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



/* MethodBind* create_method_bind<ThemeDB, Ref<Texture2D>>(Ref<Texture2D> (ThemeDB::*)()) */

MethodBind * create_method_bind<ThemeDB,Ref<Texture2D>>(_func_Ref *param_1)

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
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00116e80;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "ThemeDB";
  local_30 = 7;
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



/* MethodBind* create_method_bind<ThemeDB, Ref<StyleBox> const&>(void (ThemeDB::*)(Ref<StyleBox>
   const&)) */

MethodBind * create_method_bind<ThemeDB,Ref<StyleBox>const&>(_func_void_Ref_ptr *param_1)

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
  *(_func_void_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00116ee0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "ThemeDB";
  local_30 = 7;
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



/* MethodBind* create_method_bind<ThemeDB, Ref<StyleBox>>(Ref<StyleBox> (ThemeDB::*)()) */

MethodBind * create_method_bind<ThemeDB,Ref<StyleBox>>(_func_Ref *param_1)

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
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00116f40;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "ThemeDB";
  local_30 = 7;
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



/* ThemeDB::_initialize_classv() */

void ThemeDB::_initialize_classv(void)

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
    local_48 = "ThemeDB";
    local_60 = 0;
    local_40 = 7;
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
/* Error CowData<StringName>::resize<false>(long) */

undefined8 __thiscall CowData<StringName>::resize<false>(CowData<StringName> *this,long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  
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
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)this + -8);
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
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010e470:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar6 = param_1 * 8 - 1;
  uVar6 = uVar6 >> 1 | uVar6;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar6 = uVar6 | uVar6 >> 0x10;
  uVar6 = uVar6 | uVar6 >> 0x20;
  lVar8 = uVar6 + 1;
  if (lVar8 == 0) goto LAB_0010e470;
  if (param_1 <= lVar4) {
    lVar4 = *(long *)this;
    uVar6 = param_1;
    while (lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar6) {
LAB_0010e34a:
        if (lVar8 != lVar5) {
          uVar2 = _realloc(this,lVar8);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          lVar4 = *(long *)this;
          if (lVar4 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar4 + -8) = param_1;
        return 0;
      }
      while ((StringName::configured == '\0' || (*(long *)(lVar4 + uVar6 * 8) == 0))) {
        uVar6 = uVar6 + 1;
        if (*(ulong *)(lVar4 + -8) <= uVar6) goto LAB_0010e34a;
      }
      StringName::unref();
      uVar6 = uVar6 + 1;
      lVar4 = *(long *)this;
    }
    goto LAB_0010e317;
  }
  if (lVar8 == lVar5) {
LAB_0010e3eb:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0010e317:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0010e3cb;
  }
  else {
    if (lVar4 != 0) {
      uVar2 = _realloc(this,lVar8);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      goto LAB_0010e3eb;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar4 = 0;
  }
  memset(puVar7 + lVar4,0,(param_1 - lVar4) * 8);
LAB_0010e3cb:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<Ref<Theme> >::_unref() */

void __thiscall CowData<Ref<Theme>>::_unref(CowData<Ref<Theme>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_0010e52d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_0010e52d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* ThemeContext::~ThemeContext() */

void __thiscall ThemeContext::~ThemeContext(ThemeContext *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00116710;
  CowData<Ref<Theme>>::_unref((CowData<Ref<Theme>> *)(this + 400));
  Object::~Object((Object *)this);
  return;
}



/* ThemeContext::~ThemeContext() */

void __thiscall ThemeContext::~ThemeContext(ThemeContext *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00116710;
  CowData<Ref<Theme>>::_unref((CowData<Ref<Theme>> *)(this + 400));
  Object::~Object((Object *)this);
  operator_delete(this,0x198);
  return;
}



/* HashMap<StringName, ThemeDB::ThemeItemBind, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ThemeDB::ThemeItemBind> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>
::_resize_and_rehash
          (HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)param_1 * 4);
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, ThemeDB::ThemeItemBind, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ThemeDB::ThemeItemBind> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>
::operator[](HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *__s;
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
  undefined8 *puVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  undefined8 uVar32;
  void *__s_00;
  int iVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  undefined8 *puVar37;
  uint uVar38;
  ulong uVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  ulong uVar43;
  undefined8 *puVar44;
  long in_FS_OFFSET;
  uint local_118;
  long lStack_f0;
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  code *local_c0;
  undefined8 uStack_b8;
  undefined1 local_a8 [16];
  code *local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined1 local_70;
  undefined1 local_68 [16];
  code *local_58;
  undefined8 uStack_50;
  long local_40;
  
  lVar31 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar42 = CONCAT44(0,uVar29);
  if (lVar31 == 0) {
LAB_0010e9a0:
    local_d8 = 0;
    uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    local_e0 = 0;
    local_c0 = (code *)0x0;
    uStack_b8 = 0;
    lStack_f0 = 0;
    local_e8 = 0;
    local_d0 = (undefined1  [16])0x0;
    if (lVar31 != 0) goto LAB_0010e9f2;
    uVar43 = (ulong)uVar29;
    uVar42 = uVar43 * 4;
    uVar39 = uVar43 * 8;
    uVar32 = Memory::alloc_static(uVar42,false);
    *(undefined8 *)(this + 0x10) = uVar32;
    __s_00 = (void *)Memory::alloc_static(uVar39,false);
    *(void **)(this + 8) = __s_00;
    if (uVar29 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar39)) && (__s_00 < (void *)((long)__s + uVar42))) {
        uVar42 = 0;
        do {
          *(undefined4 *)((long)__s + uVar42 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar42 * 8) = 0;
          uVar42 = uVar42 + 1;
        } while (uVar43 != uVar42);
      }
      else {
        memset(__s,0,uVar42);
        memset(__s_00,0,uVar39);
      }
      goto LAB_0010e9f2;
    }
    iVar33 = *(int *)(this + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_0010eba7;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0010e9fe;
LAB_0010ebc9:
    if (*(int *)(this + 0x28) == 0x1c) {
      puVar37 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010eeff;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      lVar35 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar28 = StringName::get_empty_hash();
        lVar31 = *(long *)(this + 8);
      }
      else {
        uVar28 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar28 == 0) {
        uVar28 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar28 * lVar35;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar42;
      lVar34 = SUB168(auVar3 * auVar15,8);
      uVar30 = *(uint *)(*(long *)(this + 0x10) + lVar34 * 4);
      uVar38 = SUB164(auVar3 * auVar15,8);
      if (uVar30 != 0) {
        uVar40 = 0;
        do {
          if ((uVar28 == uVar30) &&
             (*(long *)(*(long *)(lVar31 + lVar34 * 8) + 0x10) == *(long *)param_1)) {
            puVar37 = (undefined8 *)(*(long *)(lVar31 + (ulong)uVar38 * 8) + 0x18);
            goto LAB_0010e96b;
          }
          uVar40 = uVar40 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(uVar38 + 1) * lVar35;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar42;
          lVar34 = SUB168(auVar4 * auVar16,8);
          uVar30 = *(uint *)(*(long *)(this + 0x10) + lVar34 * 4);
          uVar38 = SUB164(auVar4 * auVar16,8);
        } while ((uVar30 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar30 * lVar35, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar42, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar38 + uVar29) - SUB164(auVar5 * auVar17,8)) * lVar35,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar42, uVar40 <= SUB164(auVar6 * auVar18,8)));
      }
      goto LAB_0010e9a0;
    }
    local_d8 = 0;
    uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    local_e0 = 0;
    local_c0 = (code *)0x0;
    uStack_b8 = 0;
    lStack_f0 = 0;
    local_e8 = 0;
    local_d0 = (undefined1  [16])0x0;
LAB_0010e9f2:
    iVar33 = *(int *)(this + 0x2c);
    if (iVar33 != 0) {
LAB_0010e9fe:
      uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar42 = CONCAT44(0,uVar28);
      lVar31 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar30 = StringName::get_empty_hash();
      }
      else {
        uVar30 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar30 == 0) {
        uVar30 = 1;
      }
      uVar41 = 0;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar30 * lVar31;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar42;
      lVar35 = SUB168(auVar7 * auVar19,8);
      uVar38 = *(uint *)(*(long *)(this + 0x10) + lVar35 * 4);
      uVar40 = SUB164(auVar7 * auVar19,8);
      if (uVar38 != 0) {
        do {
          if ((uVar30 == uVar38) &&
             (*(long *)(*(long *)(*(long *)(this + 8) + lVar35 * 8) + 0x10) == *(long *)param_1)) {
            lVar31 = *(long *)(*(long *)(this + 8) + (ulong)uVar40 * 8);
            *(undefined4 *)(lVar31 + 0x18) = 0;
            StringName::operator=((StringName *)(lVar31 + 0x20),(StringName *)&lStack_f0);
            StringName::operator=((StringName *)(lVar31 + 0x28),(StringName *)&local_e8);
            StringName::operator=((StringName *)(lVar31 + 0x30),(StringName *)&local_e0);
            *(undefined1 *)(lVar31 + 0x38) = (undefined1)local_d8;
            local_98 = (code *)0x0;
            local_90 = 0;
            local_a8 = (undefined1  [16])0x0;
            uVar32 = 0;
            if (local_c0 != (code *)0x0) {
              (*local_c0)(local_a8,local_d0,2);
              uVar32 = uStack_b8;
            }
            auVar3 = *(undefined1 (*) [16])(lVar31 + 0x40);
            local_98 = *(code **)(lVar31 + 0x50);
            *(undefined8 *)(lVar31 + 0x40) = local_a8._0_8_;
            *(undefined8 *)(lVar31 + 0x48) = local_a8._8_8_;
            *(code **)(lVar31 + 0x50) = local_c0;
            local_90 = *(long *)(lVar31 + 0x58);
            *(undefined8 *)(lVar31 + 0x58) = uVar32;
            local_a8 = auVar3;
            if (local_98 != (code *)0x0) {
              (*local_98)(local_a8,local_a8,3);
            }
            puVar37 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar40 * 8);
            goto LAB_0010eeff;
          }
          uVar41 = uVar41 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(uVar40 + 1) * lVar31;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar42;
          lVar35 = SUB168(auVar8 * auVar20,8);
          uVar38 = *(uint *)(*(long *)(this + 0x10) + lVar35 * 4);
          uVar40 = SUB164(auVar8 * auVar20,8);
        } while ((uVar38 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar38 * lVar31, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar42, auVar10._8_8_ = 0,
                auVar10._0_8_ = (ulong)((uVar28 + uVar40) - SUB164(auVar9 * auVar21,8)) * lVar31,
                auVar22._8_8_ = 0, auVar22._0_8_ = uVar42, uVar41 <= SUB164(auVar10 * auVar22,8)));
      }
      iVar33 = *(int *)(this + 0x2c);
    }
    uVar43 = (ulong)uVar29;
LAB_0010eba7:
    if ((float)uVar43 * __LC32 < (float)(iVar33 + 1)) goto LAB_0010ebc9;
  }
  local_a8 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_98,param_1);
  local_90 = (ulong)local_90._4_4_ << 0x20;
  StringName::StringName((StringName *)&local_88,(StringName *)&lStack_f0);
  StringName::StringName((StringName *)&local_80,(StringName *)&local_e8);
  StringName::StringName((StringName *)&local_78,(StringName *)&local_e0);
  local_58 = (code *)0x0;
  uStack_50 = 0;
  local_70 = (undefined1)local_d8;
  local_68 = (undefined1  [16])0x0;
  if (local_c0 != (code *)0x0) {
    (*local_c0)(local_68,local_d0,2);
    local_58 = local_c0;
    uStack_50 = uStack_b8;
  }
  puVar37 = (undefined8 *)operator_new(0x60,"");
  *puVar37 = local_a8._0_8_;
  puVar37[1] = local_a8._8_8_;
  StringName::StringName((StringName *)(puVar37 + 2),(StringName *)&local_98);
  *(undefined4 *)(puVar37 + 3) = (undefined4)local_90;
  StringName::StringName((StringName *)(puVar37 + 4),(StringName *)&local_88);
  StringName::StringName((StringName *)(puVar37 + 5),(StringName *)&local_80);
  StringName::StringName((StringName *)(puVar37 + 6),(StringName *)&local_78);
  puVar37[10] = 0;
  *(undefined1 (*) [16])(puVar37 + 8) = (undefined1  [16])0x0;
  *(undefined1 *)(puVar37 + 7) = local_70;
  puVar37[0xb] = 0;
  if (local_58 != (code *)0x0) {
    (*local_58)(puVar37 + 8,local_68,2);
    puVar37[10] = local_58;
    puVar37[0xb] = uStack_50;
    if (local_58 != (code *)0x0) {
      (*local_58)(local_68,local_68,3);
    }
  }
  if ((((StringName::configured != '\0') &&
       ((local_78 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_80 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_88 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_98 != (code *)0x0)))) {
    StringName::unref();
  }
  if (*(undefined8 **)(this + 0x20) == (undefined8 *)0x0) {
    lVar31 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar37;
    *(undefined8 **)(this + 0x20) = puVar37;
    if (lVar31 == 0) goto LAB_0010f004;
LAB_0010ee13:
    uVar29 = *(uint *)(lVar31 + 0x20);
  }
  else {
    **(undefined8 **)(this + 0x20) = puVar37;
    puVar37[1] = *(undefined8 *)(this + 0x20);
    lVar31 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar37;
    if (lVar31 != 0) goto LAB_0010ee13;
LAB_0010f004:
    uVar29 = StringName::get_empty_hash();
  }
  lVar31 = *(long *)(this + 0x10);
  if (uVar29 == 0) {
    uVar29 = 1;
  }
  uVar42 = (ulong)uVar29;
  uVar38 = 0;
  lVar35 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar28);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar42 * lVar35;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar39;
  lVar36 = SUB168(auVar11 * auVar23,8);
  lVar34 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar31 + lVar36 * 4);
  iVar33 = SUB164(auVar11 * auVar23,8);
  uVar30 = *puVar1;
  puVar27 = puVar37;
  while (uVar30 != 0) {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)uVar30 * lVar35;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar39;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)((iVar33 + uVar28) - SUB164(auVar12 * auVar24,8)) * lVar35;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar39;
    local_118 = SUB164(auVar13 * auVar25,8);
    puVar44 = puVar27;
    if (local_118 < uVar38) {
      *puVar1 = (uint)uVar42;
      uVar42 = (ulong)uVar30;
      puVar2 = (undefined8 *)(lVar34 + lVar36 * 8);
      puVar44 = (undefined8 *)*puVar2;
      *puVar2 = puVar27;
      uVar38 = local_118;
    }
    uVar29 = (uint)uVar42;
    uVar38 = uVar38 + 1;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)(iVar33 + 1) * lVar35;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar39;
    lVar36 = SUB168(auVar14 * auVar26,8);
    puVar1 = (uint *)(lVar31 + lVar36 * 4);
    iVar33 = SUB164(auVar14 * auVar26,8);
    puVar27 = puVar44;
    uVar30 = *puVar1;
  }
  *(undefined8 **)(lVar34 + lVar36 * 8) = puVar27;
  *puVar1 = uVar29;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010eeff:
  puVar37 = puVar37 + 3;
  if (local_c0 != (code *)0x0) {
    (*local_c0)(local_d0,local_d0,3);
  }
  if (((StringName::configured != '\0') &&
      ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_e8 == 0 || (StringName::unref(), StringName::configured != '\0')) && (lStack_f0 != 0))
     )) {
    StringName::unref();
  }
LAB_0010e96b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar37;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Ref<Theme> >::_realloc(long) */

undefined8 __thiscall CowData<Ref<Theme>>::_realloc(CowData<Ref<Theme>> *this,long param_1)

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
/* Error CowData<Ref<Theme> >::resize<false>(long) */

undefined8 __thiscall CowData<Ref<Theme>>::resize<false>(CowData<Ref<Theme>> *this,long param_1)

{
  long *plVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  
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
    lVar7 = 0;
    lVar8 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar8 = lVar7 * 8;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010f450:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 8 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar11 = uVar9 + 1;
  if (lVar11 == 0) goto LAB_0010f450;
  if (param_1 <= lVar7) {
    lVar7 = *(long *)this;
    uVar9 = param_1;
    while (lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar9) {
LAB_0010f2fa:
        if (lVar11 != lVar8) {
          uVar5 = _realloc(this,lVar11);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      while (plVar1 = (long *)(lVar7 + uVar9 * 8), *plVar1 == 0) {
        uVar9 = uVar9 + 1;
        if (*(ulong *)(lVar7 + -8) <= uVar9) goto LAB_0010f2fa;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        pOVar2 = (Object *)*plVar1;
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      uVar9 = uVar9 + 1;
      lVar7 = *(long *)this;
    }
    goto LAB_0010f2c0;
  }
  if (lVar11 == lVar8) {
LAB_0010f3cb:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
LAB_0010f2c0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar10[-1];
    if (param_1 <= lVar7) goto LAB_0010f3ab;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0010f3cb;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar10 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar10;
    lVar7 = 0;
  }
  memset(puVar10 + lVar7,0,(param_1 - lVar7) * 8);
LAB_0010f3ab:
  puVar10[-1] = param_1;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, ThemeDB::ThemeItemBind, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ThemeDB::ThemeItemBind> > >::insert(StringName const&, ThemeDB::ThemeItemBind const&, bool) */

StringName *
HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>
::insert(StringName *param_1,ThemeItemBind *param_2,bool param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  void *__s;
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
  ulong uVar21;
  undefined8 *puVar22;
  uint uVar23;
  uint uVar24;
  code *pcVar25;
  undefined8 *puVar26;
  long lVar27;
  undefined8 uVar28;
  void *__s_00;
  undefined4 *in_RCX;
  uint uVar29;
  int iVar30;
  undefined7 in_register_00000011;
  StringName *pSVar31;
  long lVar32;
  long lVar33;
  char in_R8B;
  uint uVar34;
  ulong uVar35;
  uint uVar36;
  ulong uVar37;
  undefined8 *puVar38;
  long in_FS_OFFSET;
  undefined1 local_a8 [16];
  code *local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined1 local_70;
  undefined1 local_68 [16];
  code *local_58;
  undefined8 uStack_50;
  long local_40;
  
  pSVar31 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar21 = (ulong)uVar23;
    uVar37 = uVar21 * 4;
    uVar35 = uVar21 * 8;
    uVar28 = Memory::alloc_static(uVar37,false);
    *(undefined8 *)(param_2 + 0x10) = uVar28;
    __s_00 = (void *)Memory::alloc_static(uVar35,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar23 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar35)) && (__s_00 < (void *)((long)__s + uVar37))) {
        uVar37 = 0;
        do {
          *(undefined4 *)((long)__s + uVar37 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar37 * 8) = 0;
          uVar37 = uVar37 + 1;
        } while (uVar21 != uVar37);
      }
      else {
        memset(__s,0,uVar37);
        memset(__s_00,0,uVar35);
      }
      goto LAB_0010f506;
    }
    iVar30 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_0010f6a8;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_0010f512;
LAB_0010f6ca:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      puVar26 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010f9d6;
    }
    _resize_and_rehash((HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_0010f506:
    iVar30 = *(int *)(param_2 + 0x2c);
    if (iVar30 != 0) {
LAB_0010f512:
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      uVar37 = CONCAT44(0,uVar3);
      lVar27 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      if (*(long *)pSVar31 == 0) {
        uVar24 = StringName::get_empty_hash();
      }
      else {
        uVar24 = *(uint *)(*(long *)pSVar31 + 0x20);
      }
      if (uVar24 == 0) {
        uVar24 = 1;
      }
      uVar36 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar24 * lVar27;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar37;
      lVar32 = SUB168(auVar5 * auVar13,8);
      uVar34 = *(uint *)(*(long *)(param_2 + 0x10) + lVar32 * 4);
      uVar29 = SUB164(auVar5 * auVar13,8);
      if (uVar34 != 0) {
        do {
          if ((uVar24 == uVar34) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar32 * 8) + 0x10) == *(long *)pSVar31))
          {
            lVar27 = *(long *)(*(long *)(param_2 + 8) + (ulong)uVar29 * 8);
            *(undefined4 *)(lVar27 + 0x18) = *in_RCX;
            StringName::operator=((StringName *)(lVar27 + 0x20),(StringName *)(in_RCX + 2));
            StringName::operator=((StringName *)(lVar27 + 0x28),(StringName *)(in_RCX + 4));
            StringName::operator=((StringName *)(lVar27 + 0x30),(StringName *)(in_RCX + 6));
            uVar28 = 0;
            *(undefined1 *)(lVar27 + 0x38) = *(undefined1 *)(in_RCX + 8);
            pcVar25 = *(code **)(in_RCX + 0xe);
            local_98 = (code *)0x0;
            local_90 = 0;
            local_a8 = (undefined1  [16])0x0;
            if (pcVar25 != (code *)0x0) {
              (*pcVar25)(local_a8,in_RCX + 10,2);
              uVar28 = *(undefined8 *)(in_RCX + 0x10);
              pcVar25 = *(code **)(in_RCX + 0xe);
            }
            auVar5 = *(undefined1 (*) [16])(lVar27 + 0x40);
            local_98 = *(code **)(lVar27 + 0x50);
            *(undefined8 *)(lVar27 + 0x40) = local_a8._0_8_;
            *(undefined8 *)(lVar27 + 0x48) = local_a8._8_8_;
            *(code **)(lVar27 + 0x50) = pcVar25;
            local_90 = *(undefined8 *)(lVar27 + 0x58);
            *(undefined8 *)(lVar27 + 0x58) = uVar28;
            local_a8 = auVar5;
            if (local_98 != (code *)0x0) {
              (*local_98)(local_a8,local_a8,3);
            }
            puVar26 = *(undefined8 **)(*(long *)(param_2 + 8) + (ulong)uVar29 * 8);
            goto LAB_0010f9d6;
          }
          uVar36 = uVar36 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar29 + 1) * lVar27;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar37;
          lVar32 = SUB168(auVar6 * auVar14,8);
          uVar34 = *(uint *)(*(long *)(param_2 + 0x10) + lVar32 * 4);
          uVar29 = SUB164(auVar6 * auVar14,8);
        } while ((uVar34 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar34 * lVar27, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar37, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar3 + uVar29) - SUB164(auVar7 * auVar15,8)) * lVar27,
                auVar16._8_8_ = 0, auVar16._0_8_ = uVar37, uVar36 <= SUB164(auVar8 * auVar16,8)));
      }
      iVar30 = *(int *)(param_2 + 0x2c);
    }
LAB_0010f6a8:
    if ((float)uVar23 * __LC32 < (float)(iVar30 + 1)) goto LAB_0010f6ca;
  }
  local_a8 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_98,pSVar31);
  local_90 = CONCAT44(local_90._4_4_,*in_RCX);
  StringName::StringName((StringName *)&local_88,(StringName *)(in_RCX + 2));
  StringName::StringName((StringName *)&local_80,(StringName *)(in_RCX + 4));
  StringName::StringName((StringName *)&local_78,(StringName *)(in_RCX + 6));
  local_70 = *(undefined1 *)(in_RCX + 8);
  local_58 = (code *)0x0;
  uStack_50 = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(code **)(in_RCX + 0xe) != (code *)0x0) {
    (**(code **)(in_RCX + 0xe))(local_68,in_RCX + 10,2);
    local_58 = *(code **)(in_RCX + 0xe);
    uStack_50 = *(undefined8 *)(in_RCX + 0x10);
  }
  puVar26 = (undefined8 *)operator_new(0x60,"");
  *puVar26 = local_a8._0_8_;
  puVar26[1] = local_a8._8_8_;
  StringName::StringName((StringName *)(puVar26 + 2),(StringName *)&local_98);
  *(undefined4 *)(puVar26 + 3) = (undefined4)local_90;
  StringName::StringName((StringName *)(puVar26 + 4),(StringName *)&local_88);
  StringName::StringName((StringName *)(puVar26 + 5),(StringName *)&local_80);
  StringName::StringName((StringName *)(puVar26 + 6),(StringName *)&local_78);
  puVar26[10] = 0;
  *(undefined1 (*) [16])(puVar26 + 8) = (undefined1  [16])0x0;
  *(undefined1 *)(puVar26 + 7) = local_70;
  puVar26[0xb] = 0;
  if (local_58 != (code *)0x0) {
    (*local_58)(puVar26 + 8,local_68,2);
    puVar26[10] = local_58;
    puVar26[0xb] = uStack_50;
    if (local_58 != (code *)0x0) {
      (*local_58)(local_68,local_68,3);
    }
  }
  if ((((StringName::configured != '\0') &&
       ((local_78 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_80 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_88 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_98 != (code *)0x0)))) {
    StringName::unref();
  }
  if (*(undefined8 **)(param_2 + 0x20) == (undefined8 *)0x0) {
    *(undefined8 **)(param_2 + 0x18) = puVar26;
    *(undefined8 **)(param_2 + 0x20) = puVar26;
LAB_0010f8d9:
    lVar27 = *(long *)pSVar31;
    if (lVar27 != 0) goto LAB_0010f8e5;
LAB_0010fa2f:
    uVar23 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B == '\0') {
      **(undefined8 **)(param_2 + 0x20) = puVar26;
      puVar26[1] = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 **)(param_2 + 0x20) = puVar26;
      goto LAB_0010f8d9;
    }
    *(undefined8 **)(*(long *)(param_2 + 0x18) + 8) = puVar26;
    *puVar26 = *(undefined8 *)(param_2 + 0x18);
    lVar27 = *(long *)pSVar31;
    *(undefined8 **)(param_2 + 0x18) = puVar26;
    if (lVar27 == 0) goto LAB_0010fa2f;
LAB_0010f8e5:
    uVar23 = *(uint *)(lVar27 + 0x20);
  }
  lVar27 = *(long *)(param_2 + 0x10);
  if (uVar23 == 0) {
    uVar23 = 1;
  }
  uVar37 = (ulong)uVar23;
  uVar34 = 0;
  lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar35 = CONCAT44(0,uVar3);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar37 * lVar32;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar35;
  lVar33 = SUB168(auVar9 * auVar17,8);
  lVar4 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar27 + lVar33 * 4);
  iVar30 = SUB164(auVar9 * auVar17,8);
  uVar24 = *puVar1;
  puVar22 = puVar26;
  while (uVar24 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar24 * lVar32;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar35;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((iVar30 + uVar3) - SUB164(auVar10 * auVar18,8)) * lVar32;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar35;
    uVar23 = SUB164(auVar11 * auVar19,8);
    puVar38 = puVar22;
    if (uVar23 < uVar34) {
      *puVar1 = (uint)uVar37;
      uVar37 = (ulong)uVar24;
      puVar2 = (undefined8 *)(lVar4 + lVar33 * 8);
      puVar38 = (undefined8 *)*puVar2;
      *puVar2 = puVar22;
      uVar34 = uVar23;
    }
    uVar23 = (uint)uVar37;
    uVar34 = uVar34 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar30 + 1) * lVar32;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar35;
    lVar33 = SUB168(auVar12 * auVar20,8);
    puVar1 = (uint *)(lVar27 + lVar33 * 4);
    iVar30 = SUB164(auVar12 * auVar20,8);
    puVar22 = puVar38;
    uVar24 = *puVar1;
  }
  *(undefined8 **)(lVar4 + lVar33 * 8) = puVar22;
  *puVar1 = uVar23;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0010f9d6:
  *(undefined8 **)param_1 = puVar26;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, HashMap<StringName, ThemeDB::ThemeItemBind, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ThemeDB::ThemeItemBind> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, ThemeDB::ThemeItemBind,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, ThemeDB::ThemeItemBind> > > > >
   >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>>>>
::operator[](HashMap<StringName,HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
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
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined8 *puVar41;
  long lVar42;
  void *pvVar43;
  ulong uVar44;
  int *piVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  ulong uVar50;
  undefined8 *puVar51;
  undefined8 uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  long *plVar56;
  long in_FS_OFFSET;
  undefined8 *local_c0;
  StringName local_90 [8];
  undefined1 local_88 [16];
  long local_78 [2];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  lVar42 = *(long *)(this + 8);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar38);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar42 == 0) {
LAB_001105a8:
    uVar44 = uVar39 * 4;
    uVar50 = uVar39 * 8;
    uVar40 = Memory::alloc_static(uVar44,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar43 = (void *)Memory::alloc_static(uVar50,false);
    *(void **)(this + 8) = pvVar43;
    if ((int)uVar39 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar43 + uVar50)) && (pvVar43 < (void *)((long)pvVar3 + uVar44))
         ) {
        uVar44 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar44 * 4) = 0;
          *(undefined8 *)((long)pvVar43 + uVar44 * 8) = 0;
          uVar44 = uVar44 + 1;
        } while (uVar39 != uVar44);
      }
      else {
        memset(pvVar3,0,uVar44);
        memset(pvVar43,0,uVar50);
      }
LAB_0011039c:
      iVar46 = *(int *)(this + 0x2c);
      if (iVar46 != 0) {
LAB_001103ac:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar42 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar37 = StringName::get_empty_hash();
        }
        else {
          uVar37 = *(uint *)(*(long *)param_1 + 0x20);
        }
        uVar44 = CONCAT44(0,uVar38);
        if (uVar37 == 0) {
          uVar37 = 1;
        }
        uVar55 = 0;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = (ulong)uVar37 * lVar42;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar44;
        lVar49 = SUB168(auVar16 * auVar32,8);
        uVar54 = SUB164(auVar16 * auVar32,8);
        uVar53 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
        if (uVar53 != 0) {
          do {
            if ((uVar53 == uVar37) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar49 * 8) + 0x10) == *(long *)param_1))
            {
              lVar42 = *(long *)(*(long *)(this + 8) + (ulong)uVar54 * 8);
              uVar38 = *(uint *)(lVar42 + 0x40);
              uVar37 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
              if ((*(int *)(lVar42 + 0x44) == 0) || (*(long *)(lVar42 + 0x20) == 0))
              goto LAB_001104a5;
              lVar49 = 0;
              if (uVar37 != 0) goto LAB_00110700;
              *(undefined4 *)(lVar42 + 0x44) = 0;
              *(undefined1 (*) [16])(lVar42 + 0x30) = (undefined1  [16])0x0;
              goto LAB_001104aa;
            }
            uVar55 = uVar55 + 1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)(uVar54 + 1) * lVar42;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar44;
            lVar49 = SUB168(auVar17 * auVar33,8);
            uVar53 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
            uVar54 = SUB164(auVar17 * auVar33,8);
          } while ((uVar53 != 0) &&
                  (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar53 * lVar42, auVar34._8_8_ = 0,
                  auVar34._0_8_ = uVar44, auVar19._8_8_ = 0,
                  auVar19._0_8_ = (ulong)((uVar38 + uVar54) - SUB164(auVar18 * auVar34,8)) * lVar42,
                  auVar35._8_8_ = 0, auVar35._0_8_ = uVar44, uVar55 <= SUB164(auVar19 * auVar35,8)))
          ;
        }
        iVar46 = *(int *)(this + 0x2c);
      }
      goto LAB_0010fd0b;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar43 == (void *)0x0) goto LAB_0010fd0b;
    if (*(int *)(this + 0x2c) != 0) goto LAB_001103ac;
LAB_0010fd31:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_c0 = (undefined8 *)0x18;
      goto LAB_0010fcd4;
    }
    uVar39 = (ulong)(uVar38 + 1);
    uVar37 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar38 + 1 < 2) {
      uVar39 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar43 = *(void **)(this + 8);
    uVar50 = (ulong)uVar38;
    uVar39 = uVar50 * 4;
    pvVar3 = *(void **)(this + 0x10);
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    uVar44 = uVar50 * 8;
    __s_00 = (void *)Memory::alloc_static(uVar44,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar44)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar50 != uVar39);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar44);
      }
    }
    if (uVar37 != 0) {
      uVar39 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar39 * 4);
        if (uVar38 != 0) {
          uVar55 = 0;
          lVar42 = *(long *)(this + 0x10);
          uVar53 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar44 = CONCAT44(0,uVar53);
          lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar38 * lVar49;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar44;
          lVar47 = SUB168(auVar8 * auVar24,8);
          puVar1 = (uint *)(lVar42 + lVar47 * 4);
          iVar46 = SUB164(auVar8 * auVar24,8);
          uVar54 = *puVar1;
          uVar40 = *(undefined8 *)((long)pvVar43 + uVar39 * 8);
          while (uVar54 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar54 * lVar49;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar44;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar53 + iVar46) - SUB164(auVar9 * auVar25,8)) * lVar49;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar44;
            uVar36 = SUB164(auVar10 * auVar26,8);
            uVar52 = uVar40;
            if (uVar36 < uVar55) {
              *puVar1 = uVar38;
              puVar41 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar52 = *puVar41;
              *puVar41 = uVar40;
              uVar38 = uVar54;
              uVar55 = uVar36;
            }
            uVar55 = uVar55 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar46 + 1) * lVar49;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar44;
            lVar47 = SUB168(auVar11 * auVar27,8);
            puVar1 = (uint *)(lVar42 + lVar47 * 4);
            iVar46 = SUB164(auVar11 * auVar27,8);
            uVar40 = uVar52;
            uVar54 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar40;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar39 != uVar37);
      Memory::free_static(pvVar43,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    iVar46 = *(int *)(this + 0x2c);
    if (iVar46 != 0) {
      lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar37 = StringName::get_empty_hash();
        lVar42 = *(long *)(this + 8);
      }
      else {
        uVar37 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar37 == 0) {
        uVar37 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar37 * lVar49;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar39;
      lVar47 = SUB168(auVar4 * auVar20,8);
      uVar54 = SUB164(auVar4 * auVar20,8);
      uVar53 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
      if (uVar53 != 0) {
        uVar55 = 0;
        do {
          if ((uVar53 == uVar37) &&
             (*(long *)(*(long *)(lVar42 + lVar47 * 8) + 0x10) == *(long *)param_1)) {
            local_c0 = (undefined8 *)(*(long *)(lVar42 + (ulong)uVar54 * 8) + 0x18);
            goto LAB_0010fcd4;
          }
          uVar55 = uVar55 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar54 + 1) * lVar49;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar39;
          lVar47 = SUB168(auVar5 * auVar21,8);
          uVar53 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
          uVar54 = SUB164(auVar5 * auVar21,8);
        } while ((uVar53 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar53 * lVar49, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar39, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar54 + uVar38) - SUB164(auVar6 * auVar22,8)) * lVar49,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar39, uVar55 <= SUB164(auVar7 * auVar23,8)));
      }
      uVar39 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar42 == 0) goto LAB_001105a8;
      goto LAB_0011039c;
    }
LAB_0010fd0b:
    if ((float)uVar39 * __LC32 < (float)(iVar46 + 1)) goto LAB_0010fd31;
  }
  local_88 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)local_78,param_1);
  uVar39 = 1;
  local_48 = 0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  do {
    if (0x16 < *(uint *)(hash_table_size_primes + uVar39 * 4)) {
      local_48 = uVar39 & 0xffffffff;
      goto LAB_0010ffd8;
    }
    uVar39 = uVar39 + 1;
  } while (uVar39 != 0x1d);
  _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                   "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
LAB_0010ffd8:
  puVar41 = (undefined8 *)operator_new(0x48,"");
  *puVar41 = local_88._0_8_;
  puVar41[1] = local_88._8_8_;
  StringName::StringName((StringName *)(puVar41 + 2),(StringName *)local_78);
  puVar41[8] = 0;
  uVar38 = *(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4);
  *(undefined1 (*) [16])(puVar41 + 4) = (undefined1  [16])0x0;
  lVar42 = 1;
  *(undefined1 (*) [16])(puVar41 + 6) = (undefined1  [16])0x0;
  if (5 < uVar38) {
    do {
      if (uVar38 <= *(uint *)(hash_table_size_primes + lVar42 * 4)) {
        *(int *)(puVar41 + 8) = (int)lVar42;
        goto LAB_00110079;
      }
      lVar42 = lVar42 + 1;
    } while (lVar42 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_00110079:
  pvVar43 = (void *)local_68._0_8_;
  if (local_48._4_4_ == 0) {
    if ((void *)local_68._0_8_ != (void *)0x0) goto LAB_00110362;
  }
  else if ((long *)local_58._0_8_ == (long *)0x0) {
    if ((void *)local_68._0_8_ != (void *)0x0) {
      uVar38 = *(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4);
      if (uVar38 != 0) goto LAB_0011010c;
LAB_001107c8:
      local_48 = local_48 & 0xffffffff;
      local_58 = (undefined1  [16])0x0;
      pvVar43 = (void *)local_68._0_8_;
      goto LAB_00110362;
    }
  }
  else {
    plVar56 = (long *)local_58._0_8_;
    do {
      HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>
      ::insert(local_90,(ThemeItemBind *)(puVar41 + 3),(bool)((char)plVar56 + '\x10'));
      plVar56 = (long *)*plVar56;
    } while (plVar56 != (long *)0x0);
    if ((void *)local_68._0_8_ != (void *)0x0) {
      pvVar43 = (void *)local_68._0_8_;
      if (local_48._4_4_ != 0) {
        uVar38 = *(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4);
        if (uVar38 == 0) goto LAB_001107c8;
LAB_0011010c:
        lVar42 = 0;
        do {
          if (*(int *)(local_68._8_8_ + lVar42) != 0) {
            pvVar43 = *(void **)((long)pvVar43 + lVar42 * 2);
            *(int *)(local_68._8_8_ + lVar42) = 0;
            if (*(code **)((long)pvVar43 + 0x50) != (code *)0x0) {
              (**(code **)((long)pvVar43 + 0x50))((long)pvVar43 + 0x40,(long)pvVar43 + 0x40,3);
            }
            if ((((StringName::configured != '\0') &&
                 ((*(long *)((long)pvVar43 + 0x30) == 0 ||
                  (StringName::unref(), StringName::configured != '\0')))) &&
                ((*(long *)((long)pvVar43 + 0x28) == 0 ||
                 (StringName::unref(), StringName::configured != '\0')))) &&
               (((*(long *)((long)pvVar43 + 0x20) == 0 ||
                 (StringName::unref(), StringName::configured != '\0')) &&
                (*(long *)((long)pvVar43 + 0x10) != 0)))) {
              StringName::unref();
            }
            Memory::free_static(pvVar43,false);
            *(undefined8 *)(local_68._0_8_ + lVar42 * 2) = 0;
            pvVar43 = (void *)local_68._0_8_;
          }
          lVar42 = lVar42 + 4;
        } while (lVar42 != (ulong)uVar38 * 4);
        local_48 = local_48 & 0xffffffff;
        local_58 = (undefined1  [16])0x0;
        if (pvVar43 == (void *)0x0) goto LAB_0011020a;
      }
LAB_00110362:
      Memory::free_static(pvVar43,false);
      Memory::free_static((void *)local_68._8_8_,false);
    }
  }
LAB_0011020a:
  local_c0 = puVar41 + 3;
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  puVar51 = *(undefined8 **)(this + 0x20);
  if (puVar51 == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar41;
  }
  else {
    *puVar51 = puVar41;
    puVar41[1] = puVar51;
  }
  *(undefined8 **)(this + 0x20) = puVar41;
  if (*(long *)param_1 == 0) {
    uVar38 = StringName::get_empty_hash();
  }
  else {
    uVar38 = *(uint *)(*(long *)param_1 + 0x20);
  }
  if (uVar38 == 0) {
    uVar38 = 1;
  }
  uVar39 = (ulong)uVar38;
  uVar54 = 0;
  lVar42 = *(long *)(this + 0x10);
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar44 = CONCAT44(0,uVar37);
  lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar39 * lVar49;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar44;
  lVar48 = SUB168(auVar12 * auVar28,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar42 + lVar48 * 4);
  iVar46 = SUB164(auVar12 * auVar28,8);
  uVar53 = *puVar1;
  while (uVar53 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar53 * lVar49;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar44;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar37 + iVar46) - SUB164(auVar13 * auVar29,8)) * lVar49;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar44;
    uVar38 = SUB164(auVar14 * auVar30,8);
    puVar51 = puVar41;
    if (uVar38 < uVar54) {
      puVar2 = (undefined8 *)(lVar47 + lVar48 * 8);
      *puVar1 = (uint)uVar39;
      uVar39 = (ulong)uVar53;
      puVar51 = (undefined8 *)*puVar2;
      *puVar2 = puVar41;
      uVar54 = uVar38;
    }
    uVar38 = (uint)uVar39;
    uVar54 = uVar54 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar46 + 1) * lVar49;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar44;
    lVar48 = SUB168(auVar15 * auVar31,8);
    puVar1 = (uint *)(lVar42 + lVar48 * 4);
    iVar46 = SUB164(auVar15 * auVar31,8);
    puVar41 = puVar51;
    uVar53 = *puVar1;
  }
  *(undefined8 **)(lVar47 + lVar48 * 8) = puVar41;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010fcd4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_c0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00110700:
  do {
    piVar45 = (int *)(*(long *)(lVar42 + 0x28) + lVar49);
    if (*piVar45 != 0) {
      *piVar45 = 0;
      pvVar43 = *(void **)(*(long *)(lVar42 + 0x20) + lVar49 * 2);
      ThemeDB::ThemeItemBind::~ThemeItemBind((ThemeItemBind *)((long)pvVar43 + 0x18));
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar43 + 0x10) != 0)) {
        StringName::unref();
      }
      Memory::free_static(pvVar43,false);
      *(undefined8 *)(*(long *)(lVar42 + 0x20) + lVar49 * 2) = 0;
    }
    lVar49 = lVar49 + 4;
  } while ((ulong)uVar37 << 2 != lVar49);
  uVar38 = *(uint *)(lVar42 + 0x40);
  *(undefined4 *)(lVar42 + 0x44) = 0;
  *(undefined1 (*) [16])(lVar42 + 0x30) = (undefined1  [16])0x0;
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
LAB_001104a5:
  if (uVar37 < 0x17) {
LAB_001104aa:
    if (uVar38 != 0x1c) {
      uVar39 = (ulong)uVar38;
      do {
        uVar37 = (int)uVar39 + 1;
        uVar39 = (ulong)uVar37;
        if (0x16 < *(uint *)(hash_table_size_primes + uVar39 * 4)) {
          if (uVar37 != uVar38) {
            if (*(long *)(lVar42 + 0x20) == 0) {
              *(uint *)(lVar42 + 0x40) = uVar37;
            }
            else {
              HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>
              ::_resize_and_rehash
                        ((HashMap<StringName,ThemeDB::ThemeItemBind,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ThemeDB::ThemeItemBind>>>
                          *)(lVar42 + 0x18),uVar37);
            }
          }
          goto LAB_00110503;
        }
      } while (uVar37 != 0x1c);
    }
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_00110503:
  local_c0 = (undefined8 *)(*(long *)(*(long *)(this + 8) + (ulong)uVar54 * 8) + 0x18);
  goto LAB_0010fcd4;
}



/* WARNING: Removing unreachable block (ram,0x00110958) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
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
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00110cb0;
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
LAB_00110cb0:
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
      goto LAB_00110f54;
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
LAB_00110f54:
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
      goto LAB_00111113;
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
LAB_00111113:
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
      goto LAB_00111451;
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
                    /* WARNING: Could not recover jumptable at 0x001112dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00111451:
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
      goto LAB_00111631;
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
                    /* WARNING: Could not recover jumptable at 0x001114bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00111631:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<float>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  float fVar5;
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
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00111700;
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
      fVar5 = (float)(*(code *)pVVar2)();
      Variant::Variant((Variant *)local_48,fVar5);
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
LAB_00111700:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<float>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<float>::validated_call
          (MethodBindTR<float> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  float fVar3;
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
      goto LAB_00111918;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(double *)(param_3 + 8) = (double)fVar3;
LAB_00111918:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<float>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<float>::ptrcall(MethodBindTR<float> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  float fVar3;
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
      goto LAB_00111ad7;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(double *)param_3 = (double)fVar3;
LAB_00111ad7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<float>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
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
      goto LAB_00111e29;
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
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)*(double *)(*(long *)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x00111cb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00111e29:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<float>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
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
      goto LAB_00112009;
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
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)**param_3;
                    /* WARNING: Could not recover jumptable at 0x00111e91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00112009:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<StyleBox>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Ref<StyleBox>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
  char cVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x110b08;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00112120;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)(&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar2 = local_58;
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_58);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
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
LAB_00112120:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<StyleBox>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<StyleBox>>::ptrcall
          (MethodBindTR<Ref<StyleBox>> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *extraout_RDX;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110b08;
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
      goto LAB_001123a6;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_001123a6;
    *(undefined8 *)param_3 = 0;
    goto LAB_001123e9;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_001123e9;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_001123e9:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_001123a6;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_001123a6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<StyleBox> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<StyleBox>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_58 == (Object *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x110b08;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001126a8;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*(long *)param_3 + 0x10));
  local_58 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_58;
  if (pOVar4 != local_58) {
    if (pOVar4 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_00112666:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    else {
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&StyleBox::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_00112666;
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1));
  if (local_58 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_58;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_58);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_001126a8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<StyleBox> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<StyleBox>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar4 = (long *)param_2[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar4 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110b08;
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
      goto LAB_0011296c;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_00112948:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00112948;
  }
  (*pcVar5)((long *)((long)param_2 + lVar1));
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_0011296c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Texture2D>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Ref<Texture2D>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
  char cVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x110b08;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00112c30;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)(&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar2 = local_58;
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_58);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
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
LAB_00112c30:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Texture2D>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<Texture2D>>::ptrcall
          (MethodBindTR<Ref<Texture2D>> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *extraout_RDX;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110b08;
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
      goto LAB_00112eb6;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_00112eb6;
    *(undefined8 *)param_3 = 0;
    goto LAB_00112ef9;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00112ef9;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00112ef9:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00112eb6;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_00112eb6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Texture2D> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<Texture2D>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_58 == (Object *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x110b08;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001131b8;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*(long *)param_3 + 0x10));
  local_58 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_58;
  if (pOVar4 != local_58) {
    if (pOVar4 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_00113176:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    else {
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Texture2D::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_00113176;
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1));
  if (local_58 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_58;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_58);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_001131b8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Texture2D> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Texture2D>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar4 = (long *)param_2[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar4 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110b08;
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
      goto LAB_0011347c;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_00113458:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00113458;
  }
  (*pcVar5)((long *)((long)param_2 + lVar1));
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_0011347c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Font>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Ref<Font>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
  char cVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x110b08;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00113740;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)(&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar2 = local_58;
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_58);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
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
LAB_00113740:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Font>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<Font>>::ptrcall
          (MethodBindTR<Ref<Font>> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *extraout_RDX;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110b08;
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
      goto LAB_001139c6;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_001139c6;
    *(undefined8 *)param_3 = 0;
    goto LAB_00113a09;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00113a09;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00113a09:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_001139c6;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_001139c6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Font> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<Font>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_58 == (Object *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x110b08;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00113cc8;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*(long *)param_3 + 0x10));
  local_58 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_58;
  if (pOVar4 != local_58) {
    if (pOVar4 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_00113c86:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    else {
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Font::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_00113c86;
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1));
  if (local_58 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_58;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_58);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_00113cc8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Font> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Font>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar4 = (long *)param_2[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar4 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110b08;
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
      goto LAB_00113f8c;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_00113f68:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00113f68;
  }
  (*pcVar5)((long *)((long)param_2 + lVar1));
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_00113f8c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Theme>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Ref<Theme>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
  char cVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x110b08;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00114250;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)(&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar2 = local_58;
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_58);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
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
LAB_00114250:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Theme>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<Theme>>::ptrcall
          (MethodBindTR<Ref<Theme>> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *extraout_RDX;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x110b08;
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
      goto LAB_001144d6;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_001144d6;
    *(undefined8 *)param_3 = 0;
    goto LAB_00114519;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00114519;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00114519:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_001144d6;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_001144d6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<StyleBox> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Ref<StyleBox>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  char *pcVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_58;
  char *local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_48 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (char *)0x0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001148d8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_001148cd:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_001148d8;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00114930;
LAB_00114920:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00114930:
      uVar7 = 4;
      goto LAB_001148cd;
    }
    if (in_R8D == 1) goto LAB_00114920;
    lVar10 = (long)((int)lVar2 + -1);
    if (lVar2 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    pVVar12 = pVVar12 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,0x18);
  uVar5 = _LC62;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar5;
  }
  local_50 = (char *)0x0;
  pcVar8 = (char *)Variant::get_validated_object();
  pcVar3 = local_50;
  if (pcVar8 != local_50) {
    if (pcVar8 == (char *)0x0) {
      if (local_50 != (char *)0x0) {
        local_50 = (char *)0x0;
        local_48 = pcVar3;
        goto LAB_0011489f;
      }
    }
    else {
      pcVar8 = (char *)__dynamic_cast(pcVar8,&Object::typeinfo,&StyleBox::typeinfo,0);
      if (pcVar3 != pcVar8) {
        local_48 = pcVar3;
        local_50 = pcVar8;
        if ((pcVar8 != (char *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
          local_50 = (char *)0x0;
        }
LAB_0011489f:
        Ref<StyleBox>::unref((Ref<StyleBox> *)&local_48);
      }
    }
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),(Ref<StyleBox> *)&local_50);
  Ref<StyleBox>::unref((Ref<StyleBox> *)&local_50);
LAB_001148d8:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<Ref<Texture2D> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Ref<Texture2D>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  char *pcVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_58;
  char *local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_48 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (char *)0x0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00114cb8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_00114cad:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_00114cb8;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00114d10;
LAB_00114d00:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00114d10:
      uVar7 = 4;
      goto LAB_00114cad;
    }
    if (in_R8D == 1) goto LAB_00114d00;
    lVar10 = (long)((int)lVar2 + -1);
    if (lVar2 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    pVVar12 = pVVar12 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,0x18);
  uVar5 = _LC62;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar5;
  }
  local_50 = (char *)0x0;
  pcVar8 = (char *)Variant::get_validated_object();
  pcVar3 = local_50;
  if (pcVar8 != local_50) {
    if (pcVar8 == (char *)0x0) {
      if (local_50 != (char *)0x0) {
        local_50 = (char *)0x0;
        local_48 = pcVar3;
        goto LAB_00114c7f;
      }
    }
    else {
      pcVar8 = (char *)__dynamic_cast(pcVar8,&Object::typeinfo,&Texture2D::typeinfo,0);
      if (pcVar3 != pcVar8) {
        local_48 = pcVar3;
        local_50 = pcVar8;
        if ((pcVar8 != (char *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
          local_50 = (char *)0x0;
        }
LAB_00114c7f:
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
      }
    }
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),(Ref<Texture2D> *)&local_50);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
LAB_00114cb8:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<Ref<Font> const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Ref<Font>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  char *pcVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_58;
  char *local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_48 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (char *)0x0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00115098;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_0011508d:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_00115098;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_001150f0;
LAB_001150e0:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001150f0:
      uVar7 = 4;
      goto LAB_0011508d;
    }
    if (in_R8D == 1) goto LAB_001150e0;
    lVar10 = (long)((int)lVar2 + -1);
    if (lVar2 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    pVVar12 = pVVar12 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,0x18);
  uVar5 = _LC62;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar5;
  }
  local_50 = (char *)0x0;
  pcVar8 = (char *)Variant::get_validated_object();
  pcVar3 = local_50;
  if (pcVar8 != local_50) {
    if (pcVar8 == (char *)0x0) {
      if (local_50 != (char *)0x0) {
        local_50 = (char *)0x0;
        local_48 = pcVar3;
        goto LAB_0011505f;
      }
    }
    else {
      pcVar8 = (char *)__dynamic_cast(pcVar8,&Object::typeinfo,&Font::typeinfo,0);
      if (pcVar3 != pcVar8) {
        local_48 = pcVar3;
        local_50 = pcVar8;
        if ((pcVar8 != (char *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
          local_50 = (char *)0x0;
        }
LAB_0011505f:
        Ref<Font>::unref((Ref<Font> *)&local_48);
      }
    }
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),(Ref<Font> *)&local_50);
  Ref<Font>::unref((Ref<Font> *)&local_50);
LAB_00115098:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Ref<Theme>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Ref<Theme>>::validated_call
          (MethodBindTR<Ref<Theme>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Variant **local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x110b08;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
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
      goto LAB_00115386;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_00115386:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<StyleBox>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Ref<StyleBox>>::validated_call
          (MethodBindTR<Ref<StyleBox>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Variant **local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x110b08;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
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
      goto LAB_001155b6;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_001155b6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Texture2D>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Ref<Texture2D>>::validated_call
          (MethodBindTR<Ref<Texture2D>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Variant **local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x110b08;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
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
      goto LAB_001157e6;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_001157e6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<Font>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Ref<Font>>::validated_call
          (MethodBindTR<Ref<Font>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Variant **local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x110b08;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
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
      goto LAB_00115a16;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_00115a16:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
    goto LAB_00115cbd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00115d20;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00115d20:
      uVar6 = 4;
LAB_00115cbd:
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
      goto LAB_00115c3b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00115c3b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC145;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x00115c96. Too many branches */
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
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00115d86;
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
LAB_00115d86:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, float>(__UnexistingClass*, void
   (__UnexistingClass::*)(float), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,float>
               (__UnexistingClass *param_1,_func_void_float *param_2,Variant **param_3,int param_4,
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
  float fVar9;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0011604d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001160b0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001160b0:
      uVar6 = 4;
LAB_0011604d:
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
      goto LAB_00115fcb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00115fcb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC146;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  fVar9 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x00116024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(fVar9);
  return;
}



/* MethodBindT<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<float>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00116116;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,float>
            (p_Var2,(_func_void_float *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00116116:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* ThemeContext::~ThemeContext() */

void __thiscall ThemeContext::~ThemeContext(ThemeContext *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<ThemeDB::ThemeItemBind, DefaultAllocator>::~List() */

void __thiscall
List<ThemeDB::ThemeItemBind,DefaultAllocator>::~List
          (List<ThemeDB::ThemeItemBind,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* KeyValue<StringName, List<ThemeDB::ThemeItemBind, DefaultAllocator> >::~KeyValue() */

void __thiscall
KeyValue<StringName,List<ThemeDB::ThemeItemBind,DefaultAllocator>>::~KeyValue
          (KeyValue<StringName,List<ThemeDB::ThemeItemBind,DefaultAllocator>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ThemeDB::ThemeItemBind::~ThemeItemBind() */

void __thiscall ThemeDB::ThemeItemBind::~ThemeItemBind(ThemeItemBind *this)

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
/* MethodBindTR<Ref<StyleBox>>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<StyleBox>>::~MethodBindTR(MethodBindTR<Ref<StyleBox>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<StyleBox> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<StyleBox>const&>::~MethodBindT(MethodBindT<Ref<StyleBox>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<Texture2D>>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<Texture2D>>::~MethodBindTR(MethodBindTR<Ref<Texture2D>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<Texture2D>const&>::~MethodBindT(MethodBindT<Ref<Texture2D>const&> *this)

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
/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<Font>>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<Font>>::~MethodBindTR(MethodBindTR<Ref<Font>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Font> const&>::~MethodBindT() */

void __thiscall MethodBindT<Ref<Font>const&>::~MethodBindT(MethodBindT<Ref<Font>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<float>::~MethodBindTR() */

void __thiscall MethodBindTR<float>::~MethodBindTR(MethodBindTR<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<Theme>>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<Theme>>::~MethodBindTR(MethodBindTR<Ref<Theme>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ThemeDB, void, Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ThemeDB,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ThemeDB,void,Node*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ThemeDB, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ThemeDB,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ThemeDB,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ThemeContext, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ThemeContext,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ThemeContext,void> *this)

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


