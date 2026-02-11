
/* GDScriptByteCodeGenerator::set_initial_line(int) */

void __thiscall
GDScriptByteCodeGenerator::set_initial_line(GDScriptByteCodeGenerator *this,int param_1)

{
  *(int *)(*(long *)(this + 0x10) + 0xf0) = param_1;
  return;
}



/* CowData<Variant>::_realloc(long) [clone .part.0] */

undefined8 CowData<Variant>::_realloc(long param_1)

{
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* RBMap<void (*)(Variant const*, Variant const*, Variant*), int, Comparator<void (*)(Variant
   const*, Variant const*, Variant*)>, DefaultAllocator>::_set_color(RBMap<void (*)(Variant const*,
   Variant const*, Variant*), int, Comparator<void (*)(Variant const*, Variant const*, Variant*)>,
   DefaultAllocator>::Element*, int) [clone .part.0] */

void RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
     ::_set_color(Element *param_1,int param_2)

{
  _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                   "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
  return;
}



/* GDScriptByteCodeGenerator::CallTarget::cleanup() [clone .part.0] [clone .isra.0] */

void __thiscall GDScriptByteCodeGenerator::CallTarget::cleanup(CallTarget *this)

{
                    /* WARNING: Could not recover jumptable at 0x00100083. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x30))();
  return;
}



/* HashSet<int, HashMapHasherDefault, HashMapComparatorDefault<int> >::_lookup_pos(int const&,
   unsigned int&) const [clone .isra.0] */

undefined8 __thiscall
HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_lookup_pos
          (HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,int *param_1,
          uint *param_2)

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
  
  if (*(long *)this != 0) {
    if (*(int *)(this + 0x24) == 0) {
      return 0;
    }
    uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
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
    uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4));
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar15;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar12;
    lVar13 = SUB168(auVar2 * auVar6,8);
    uVar10 = *(uint *)(*(long *)(this + 0x18) + lVar13 * 4);
    iVar11 = SUB164(auVar2 * auVar6,8);
    if (uVar10 != 0) {
      uVar16 = 0;
      do {
        if ((uVar14 == uVar10) &&
           (uVar10 = *(uint *)(*(long *)(this + 8) + lVar13 * 4),
           *(uint *)(*(long *)this + (ulong)uVar10 * 4) == (uint)param_1)) {
          *param_2 = uVar10;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (iVar11 + 1) * uVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar15;
        lVar13 = SUB168(auVar3 * auVar7,8);
        uVar10 = *(uint *)(*(long *)(this + 0x18) + lVar13 * 4);
        iVar11 = SUB164(auVar3 * auVar7,8);
      } while ((uVar10 != 0) &&
              (auVar4._8_8_ = 0, auVar4._0_8_ = uVar10 * uVar1, auVar8._8_8_ = 0,
              auVar8._0_8_ = uVar15, auVar5._8_8_ = 0,
              auVar5._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4)
                              + iVar11) - SUB164(auVar4 * auVar8,8)) * uVar1, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar15, uVar16 <= SUB164(auVar5 * auVar9,8)));
    }
  }
  return 0;
}



/* GDScriptByteCodeGenerator::is_local_dirty(GDScriptCodeGenerator::Address const&) const */

undefined8 __thiscall
GDScriptByteCodeGenerator::is_local_dirty(GDScriptByteCodeGenerator *this,Address *param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_1 == 4) {
    uVar1 = HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_lookup_pos
                      ((HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *)
                       (this + 0x80),(int *)(ulong)*(uint *)(param_1 + 4),&local_14);
  }
  else {
    _err_print_error("is_local_dirty","modules/gdscript/gdscript_byte_codegen.cpp",0x78d,
                     "Condition \"p_address.mode != Address::LOCAL_VARIABLE\" is true. Returning: false"
                     ,0,0);
    uVar1 = 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<int, DefaultAllocator>::erase(List<int, DefaultAllocator>::Element*) [clone .isra.0] */

void __thiscall List<int,DefaultAllocator>::erase(List<int,DefaultAllocator> *this,Element *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = *(long **)this;
  if ((param_1 != (Element *)0x0) && (plVar1 != (long *)0x0)) {
    if (plVar1 == *(long **)(param_1 + 0x18)) {
      lVar3 = *(long *)(param_1 + 8);
      if (param_1 == (Element *)*plVar1) {
        *plVar1 = lVar3;
      }
      lVar2 = *(long *)(param_1 + 0x10);
      if (param_1 == (Element *)plVar1[1]) {
        plVar1[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar3;
        lVar3 = *(long *)(param_1 + 8);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      Memory::free_static(param_1,false);
      *(int *)(plVar1 + 2) = (int)plVar1[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    if (*(int *)((long)*(void **)this + 0x10) == 0) {
      Memory::free_static(*(void **)this,false);
      *(undefined8 *)this = 0;
    }
  }
  return;
}



/* List<int, DefaultAllocator>::push_back(int const&) [clone .isra.0] */

void __thiscall List<int,DefaultAllocator>::push_back(List<int,DefaultAllocator> *this,int *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  int *piVar4;
  undefined1 (*pauVar5) [16];
  
  if (*(long *)this == 0) {
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  piVar4 = (int *)operator_new(0x20,DefaultAllocator::alloc);
  iVar1 = *param_1;
  piVar4[2] = 0;
  piVar4[3] = 0;
  *piVar4 = iVar1;
  plVar2 = *(long **)this;
  lVar3 = plVar2[1];
  *(long **)(piVar4 + 6) = plVar2;
  *(long *)(piVar4 + 4) = lVar3;
  if (lVar3 != 0) {
    *(int **)(lVar3 + 8) = piVar4;
  }
  plVar2[1] = (long)piVar4;
  if (*plVar2 != 0) {
    *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
    return;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  *plVar2 = (long)piVar4;
  return;
}



/* List<GDScriptFunction::StackDebug, DefaultAllocator>::push_back(GDScriptFunction::StackDebug
   const&) [clone .isra.0] */

void __thiscall
List<GDScriptFunction::StackDebug,DefaultAllocator>::push_back
          (List<GDScriptFunction::StackDebug,DefaultAllocator> *this,StackDebug *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 (*pauVar4) [16];
  
  if (*(long *)this == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar3 = (undefined8 *)operator_new(0x30,DefaultAllocator::alloc);
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 4) = (undefined1  [16])0x0;
  *puVar3 = *(undefined8 *)param_1;
  *(StackDebug *)(puVar3 + 1) = param_1[8];
  StringName::operator=((StringName *)(puVar3 + 2),(StringName *)(param_1 + 0x10));
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  puVar3[3] = 0;
  puVar3[5] = plVar1;
  puVar3[4] = lVar2;
  if (lVar2 != 0) {
    *(undefined8 **)(lVar2 + 0x18) = puVar3;
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



/* GDScriptByteCodeGenerator::set_signature(String const&) */

void __thiscall
GDScriptByteCodeGenerator::set_signature(GDScriptByteCodeGenerator *this,String *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_28,param_1,false);
  lVar1 = *(long *)(this + 0x10);
  if (*(long *)(lVar1 + 0x3d0) == local_28) {
    if ((StringName::configured != '\0') && (local_28 != 0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(long *)(lVar1 + 0x3d0) = local_28;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<List<int, DefaultAllocator>, DefaultAllocator>::push_back(List<int, DefaultAllocator>
   const&) [clone .isra.0] */

void __thiscall
List<List<int,DefaultAllocator>,DefaultAllocator>::push_back
          (List<List<int,DefaultAllocator>,DefaultAllocator> *this,List *param_1)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  List<int,DefaultAllocator> *this_00;
  undefined1 (*pauVar4) [16];
  
  if (*(long *)this == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  this_00 = (List<int,DefaultAllocator> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
  if (*(undefined8 **)param_1 != (undefined8 *)0x0) {
    for (piVar1 = (int *)**(undefined8 **)param_1; piVar1 != (int *)0x0;
        piVar1 = *(int **)(piVar1 + 2)) {
      List<int,DefaultAllocator>::push_back(this_00,piVar1);
    }
  }
  plVar2 = *(long **)this;
  lVar3 = plVar2[1];
  *(undefined8 *)(this_00 + 8) = 0;
  *(long **)(this_00 + 0x18) = plVar2;
  *(long *)(this_00 + 0x10) = lVar3;
  if (lVar3 != 0) {
    *(List<int,DefaultAllocator> **)(lVar3 + 8) = this_00;
  }
  plVar2[1] = (long)this_00;
  if (*plVar2 != 0) {
    *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
    return;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  *plVar2 = (long)this_00;
  return;
}



/* GDScriptByteCodeGenerator::start_while_condition() */

void __thiscall GDScriptByteCodeGenerator::start_while_condition(GDScriptByteCodeGenerator *this)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  int local_28 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28[0] = 0;
  local_28[1] = 0;
  List<List<int,DefaultAllocator>,DefaultAllocator>::push_back
            ((List<List<int,DefaultAllocator>,DefaultAllocator> *)(this + 0x398),(List *)local_28);
  List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)local_28);
  if (*(long *)(this + 0x28) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(long *)(this + 0x28) + -8);
  }
  local_28[0] = uVar1;
  List<int,DefaultAllocator>::push_back((List<int,DefaultAllocator> *)(this + 0x368),local_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* CowData<Variant>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Variant>::_copy_on_write(CowData<Variant> *this)

{
  Variant *this_00;
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  Variant *pVVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar1 * 0x18 != 0) {
    uVar6 = lVar1 * 0x18 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar3 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar4 = 0;
  lVar7 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      this_00 = (Variant *)((long)(puVar3 + 2) + lVar4);
      lVar7 = lVar7 + 1;
      pVVar5 = (Variant *)(*(long *)this + lVar4);
      lVar4 = lVar4 + 0x18;
      Variant::Variant(this_00,pVVar5);
    } while (lVar1 != lVar7);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
}



/* CowData<int>::_ref(CowData<int> const&) [clone .part.0] */

void __thiscall CowData<int>::_ref(CowData<int> *this,CowData *param_1)

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



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 4;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* GDScriptByteCodeGenerator::write_end_jump_if_shared() */

void __thiscall GDScriptByteCodeGenerator::write_end_jump_if_shared(GDScriptByteCodeGenerator *this)

{
  code *pcVar1;
  
  if (*(long *)(this + 0x340) != 0) {
    patch_jump(this,**(int **)(*(long *)(this + 0x340) + 8));
    List<int,DefaultAllocator>::pop_back((List<int,DefaultAllocator> *)(this + 0x340));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptByteCodeGenerator::end_parameters() */

void __thiscall GDScriptByteCodeGenerator::end_parameters(GDScriptByteCodeGenerator *this)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  
  lVar3 = *(long *)(this + 0x10);
  if (*(long *)(lVar3 + 0x188) != 0) {
    lVar6 = *(long *)(*(long *)(lVar3 + 0x188) + -8);
    for (uVar7 = 0; (long)uVar7 < lVar6 / 2; uVar7 = uVar7 + 1) {
      CowData<int>::_copy_on_write((CowData<int> *)(lVar3 + 0x188));
      lVar4 = *(long *)(lVar3 + 0x188);
      if (lVar4 == 0) {
        uVar2 = *(undefined4 *)(uVar7 * 4);
        *(undefined4 *)(uVar7 * 4) = *(undefined4 *)(~uVar7 << 2);
        *(undefined4 *)(~uVar7 << 2) = uVar2;
        return;
      }
      lVar6 = *(long *)(lVar4 + -8);
      puVar1 = (undefined4 *)(lVar4 + -4 + (lVar6 - uVar7) * 4);
      puVar5 = (undefined4 *)(lVar4 + uVar7 * 4);
      uVar2 = *puVar5;
      *puVar5 = *puVar1;
      *puVar1 = uVar2;
    }
  }
  return;
}



/* CowData<String>::_ref(CowData<String> const&) [clone .part.0] */

void __thiscall CowData<String>::_ref(CowData<String> *this,CowData *param_1)

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



/* CowData<String>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<String>::_copy_on_write(CowData<String> *this)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  CowData<char32_t> *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar7 = lVar2 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    this_00 = (CowData<char32_t> *)(puVar5 + 2);
    if (lVar2 != 0) {
      do {
        lVar3 = *(long *)this;
        *(undefined8 *)this_00 = 0;
        pCVar1 = (CowData *)(lVar3 + lVar6 * 8);
        if (*(long *)pCVar1 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar1);
        }
        lVar6 = lVar6 + 1;
        this_00 = this_00 + 8;
      } while (lVar2 != lVar6);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar5 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
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



/* GDScriptByteCodeGenerator::add_debug_name(Vector<String>&, int, String const&) [clone .isra.0] */

void GDScriptByteCodeGenerator::add_debug_name(Vector *param_1,int param_2,String *param_3)

{
  CowData<char32_t> *this;
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  String *pSVar7;
  String *extraout_RDX;
  int iVar8;
  Vector *pVVar9;
  Vector *pVVar10;
  Vector *this_00;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  Vector *local_50;
  
  lVar14 = (long)param_2;
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 == 0) {
    if (lVar14 < 0) goto LAB_00100e59;
    uVar11 = 0;
    local_50 = (Vector *)0x0;
    uVar13 = (ulong)(param_2 + 1);
LAB_00100cfe:
    iVar8 = param_2 + 1;
    this_00 = param_1 + 8;
    CowData<String>::_copy_on_write((CowData<String> *)this_00);
    uVar3 = uVar13 * 8 - 1;
    uVar3 = uVar3 >> 1 | uVar3;
    uVar3 = uVar3 >> 2 | uVar3;
    uVar3 = uVar3 >> 4 | uVar3;
    pSVar7 = (String *)(uVar3 >> 8 | uVar3);
    uVar3 = (ulong)pSVar7 >> 0x10 | (ulong)pSVar7;
    pVVar10 = (Vector *)(uVar3 >> 0x20 | uVar3);
    pVVar9 = pVVar10 + 1;
    uVar3 = uVar13;
    if (local_50 == (Vector *)0x0) {
      if ((long)uVar13 <= (long)uVar11) goto LAB_00100efd;
LAB_00100e75:
      if (uVar11 == 0) {
        puVar5 = (undefined8 *)Memory::alloc_static((ulong)(pVVar10 + 0x11),false);
        if (puVar5 != (undefined8 *)0x0) {
          puVar6 = puVar5 + 2;
          *puVar5 = 1;
          puVar5[1] = 0;
          *(undefined8 **)(param_1 + 8) = puVar6;
          lVar4 = 0;
          goto LAB_00100eb3;
        }
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        puVar6 = *(undefined8 **)(param_1 + 8);
      }
      else {
        iVar2 = CowData<String>::_realloc((CowData<String> *)this_00,(long)pVVar9);
        iVar8 = (int)pVVar9;
        pSVar7 = extraout_RDX;
        pVVar10 = this_00;
        if (iVar2 == 0) goto LAB_00100dbb;
        puVar6 = *(undefined8 **)(param_1 + 8);
      }
LAB_00100f7c:
      if (puVar6 == (undefined8 *)0x0) goto LAB_00100e59;
    }
    else {
      uVar12 = (ulong)(local_50 + -1) | (ulong)(local_50 + -1) >> 1;
      uVar12 = uVar12 | uVar12 >> 2;
      uVar12 = uVar12 | uVar12 >> 4;
      uVar12 = uVar12 | uVar12 >> 8;
      uVar12 = uVar12 | uVar12 >> 0x10;
      local_50 = (Vector *)(uVar12 | uVar12 >> 0x20);
      if ((long)uVar11 < (long)uVar13) {
        if (local_50 != pVVar10) goto LAB_00100e75;
LAB_00100dbb:
        puVar6 = *(undefined8 **)(param_1 + 8);
        if (puVar6 == (undefined8 *)0x0) {
          add_debug_name(pVVar10,iVar8,pSVar7);
          return;
        }
        lVar4 = puVar6[-1];
        if (lVar4 < (long)uVar13) {
LAB_00100eb3:
          memset(puVar6 + lVar4,0,(uVar13 - lVar4) * 8);
        }
        puVar6[-1] = uVar13;
      }
      else {
        local_50 = local_50 + 1;
LAB_00100efd:
        while( true ) {
          puVar6 = *(undefined8 **)(param_1 + 8);
          if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if ((ulong)puVar6[-1] <= uVar3) break;
          CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + uVar3));
          uVar3 = uVar3 + 1;
        }
        if (local_50 != pVVar9) {
          iVar8 = CowData<String>::_realloc((CowData<String> *)this_00,(long)pVVar9);
          puVar6 = *(undefined8 **)(param_1 + 8);
          if (iVar8 != 0) goto LAB_00100f7c;
          if (puVar6 == (undefined8 *)0x0) {
            FUN_00117090();
            return;
          }
        }
        puVar6[-1] = uVar13;
      }
    }
    if (lVar14 < (long)puVar6[-1]) {
LAB_00100c9a:
      CowData<String>::_copy_on_write((CowData<String> *)(param_1 + 8));
      this = (CowData<char32_t> *)(*(long *)(param_1 + 8) + lVar14 * 8);
      if (*(long *)this == *(long *)param_3) {
        return;
      }
      CowData<char32_t>::_ref(this,(CowData *)param_3);
      return;
    }
    lVar4 = *(long *)(param_1 + 8);
  }
  else {
    uVar11 = *(ulong *)(lVar4 + -8);
    if (lVar14 < (long)uVar11) {
      if (-1 < lVar14) goto LAB_00100c9a;
      goto LAB_00100e05;
    }
    iVar8 = param_2 + 1;
    uVar13 = (ulong)iVar8;
    if (iVar8 < 0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157,
                       "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    }
    else {
      if (uVar11 == uVar13) {
        if (lVar14 == -1) goto LAB_00100e05;
        goto LAB_00100e01;
      }
      local_50 = (Vector *)(uVar11 * 8);
      if (iVar8 != 0) goto LAB_00100cfe;
      CowData<String>::_unref((CowData<String> *)(param_1 + 8));
    }
    lVar4 = *(long *)(param_1 + 8);
    if (lVar4 == 0) {
LAB_00100e59:
      uVar11 = 0;
      goto LAB_00100e05;
    }
  }
LAB_00100e01:
  uVar11 = *(ulong *)(lVar4 + -8);
LAB_00100e05:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar14,uVar11,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptByteCodeGenerator::write_end_ternary() */

void __thiscall GDScriptByteCodeGenerator::write_end_ternary(GDScriptByteCodeGenerator *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  
  if (*(long *)(this + 0x390) != 0) {
    patch_jump(this,**(int **)(*(long *)(this + 0x390) + 8));
    List<int,DefaultAllocator>::pop_back((List<int,DefaultAllocator> *)(this + 0x390));
    plVar1 = *(long **)(this + 0x380);
    if ((plVar1 != (long *)0x0) && (pvVar2 = (void *)plVar1[1], pvVar2 != (void *)0x0)) {
      if (plVar1 == *(long **)((long)pvVar2 + 0x50)) {
        lVar5 = *(long *)((long)pvVar2 + 0x40);
        if (pvVar2 == (void *)*plVar1) {
          *plVar1 = lVar5;
        }
        lVar3 = *(long *)((long)pvVar2 + 0x48);
        plVar1[1] = lVar3;
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x40) = lVar5;
          lVar5 = *(long *)((long)pvVar2 + 0x40);
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x48) = lVar3;
        }
        GDScriptDataType::~GDScriptDataType((GDScriptDataType *)((long)pvVar2 + 8));
        Memory::free_static(pvVar2,false);
        *(int *)(plVar1 + 2) = (int)plVar1[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      if (*(int *)((long)*(void **)(this + 0x380) + 0x10) == 0) {
        Memory::free_static(*(void **)(this + 0x380),false);
        *(undefined8 *)(this + 0x380) = 0;
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* GDScriptByteCodeGenerator::write_start(GDScript*, StringName const&, bool, Variant,
   GDScriptDataType const&) */

void __thiscall
GDScriptByteCodeGenerator::write_start
          (GDScriptByteCodeGenerator *this,undefined8 param_1,StringName *param_2,undefined1 param_3
          ,Variant *param_5,GDScriptDataType *param_6)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  GDScriptFunction *this_00;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  CowData<char32_t> *local_b0;
  undefined8 local_80;
  undefined8 local_78;
  String local_70 [8];
  undefined8 local_68;
  CowData<char32_t> local_60 [8];
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (GDScriptFunction *)operator_new(0x480,"");
  GDScriptFunction::GDScriptFunction(this_00);
  bVar5 = EngineDebugger::singleton != 0;
  *(GDScriptFunction **)(this + 0x10) = this_00;
  this[0x18] = (GDScriptByteCodeGenerator)(bVar5 && EngineDebugger::script_debugger != 0);
  StringName::operator=((StringName *)this_00,param_2);
  *(undefined8 *)(*(long *)(this + 0x10) + 0xe8) = param_1;
  GDScript::get_script_path();
  StringName::StringName((StringName *)&local_58,(String *)local_60,false);
  lVar1 = *(long *)(this + 0x10);
  if ((char *)*(long *)(lVar1 + 8) == local_58) {
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(lVar1 + 8) = local_58;
  }
  CowData<char32_t>::_unref(local_60);
  lVar1 = *(long *)param_2;
  if (lVar1 == 0) {
    local_68 = 0;
  }
  else {
    pcVar2 = *(char **)(lVar1 + 8);
    local_68 = 0;
    if (pcVar2 == (char *)0x0) {
      if (*(long *)(lVar1 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar1 + 0x10));
      }
    }
    else {
      local_50 = strlen(pcVar2);
      local_58 = pcVar2;
      String::parse_latin1((StrRange *)&local_68);
    }
  }
  local_b0 = (CowData<char32_t> *)&local_68;
  local_78 = 0;
  local_58 = " - ";
  local_50 = 3;
  String::parse_latin1((StrRange *)&local_78);
  lVar1 = *(long *)(*(long *)(this + 0x10) + 8);
  if (lVar1 == 0) {
    local_80 = 0;
  }
  else {
    pcVar2 = *(char **)(lVar1 + 8);
    local_80 = 0;
    if (pcVar2 == (char *)0x0) {
      if (*(long *)(lVar1 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)(lVar1 + 0x10));
      }
    }
    else {
      local_50 = strlen(pcVar2);
      local_58 = pcVar2;
      String::parse_latin1((StrRange *)&local_80);
    }
  }
  String::operator+(local_70,(String *)&local_80);
  String::operator+((String *)local_60,local_70);
  String::utf8();
  lVar1 = *(long *)(this + 0x10);
  if (*(char **)(lVar1 + 0x350) != local_58) {
    CowData<char>::_unref((CowData<char> *)(lVar1 + 0x350));
    *(char **)(lVar1 + 0x350) = local_58;
    local_58 = (char *)0x0;
  }
  CowData<char>::_unref((CowData<char> *)&local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  lVar1 = *(long *)(this + 0x10);
  uVar4 = CharString::get_data();
  lVar3 = *(long *)(this + 0x10);
  *(undefined8 *)(lVar1 + 0x358) = uVar4;
  *(undefined1 *)(lVar3 + 0x10) = param_3;
  GDScriptDataType::operator=((GDScriptDataType *)(lVar3 + 0x28),param_6);
  Variant::operator=((Variant *)(*(long *)(this + 0x10) + 0xd0),param_5);
  *(undefined4 *)(*(long *)(this + 0x10) + 0xf4) = 0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::clear_temporaries() */

void __thiscall GDScriptByteCodeGenerator::clear_temporaries(GDScriptByteCodeGenerator *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  GDScriptDataType local_c8 [8];
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined4 local_88;
  int iStack_84;
  GDScriptDataType local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  iVar1 = *(int *)(this + 0xe4);
  lVar7 = *(long *)(this + 0xc0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar1 == 0) {
LAB_001014bb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar6 = 0;
  do {
    iVar2 = *(int *)(lVar7 + lVar6 * 4);
    lVar5 = (long)iVar2;
    lVar3 = *(long *)(this + 0xb0);
    if (lVar5 < 0) {
      if (lVar3 == 0) {
LAB_00101690:
        lVar7 = 0;
      }
      else {
LAB_00101645:
        lVar7 = *(long *)(lVar3 + -8);
      }
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar7,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (lVar3 == 0) goto LAB_00101690;
    if (*(long *)(lVar3 + -8) <= lVar5) goto LAB_00101645;
    if (*(char *)(lVar3 + 4 + lVar5 * 0x18) != '\0') {
      local_b8 = (undefined1  [16])0x0;
      pcVar4 = *(code **)(*(long *)this + 0x40);
      local_a8 = (undefined1  [16])0x0;
      local_60 = (undefined1  [16])0x0;
      local_98 = 0;
      _local_88 = CONCAT44(iVar2,6);
      local_c0 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_50 = 0;
      GDScriptDataType::operator=(local_80,local_c8);
      (*pcVar4)(this);
      GDScriptDataType::~GDScriptDataType(local_80);
      GDScriptDataType::~GDScriptDataType(local_c8);
    }
    if (iVar1 <= (int)lVar6 + 1) {
      if ((*(long *)(this + 0xc0) != 0) && (*(int *)(this + 0xe4) != 0)) {
        if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe0) * 4) != 0) {
          memset(*(void **)(this + 0xd8),0,
                 (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe0) * 4) * 4);
        }
        *(undefined4 *)(this + 0xe4) = 0;
      }
      goto LAB_001014bb;
    }
    lVar6 = lVar6 + 1;
  } while( true );
}



/* List<GDScriptCodeGenerator::Address, DefaultAllocator>::push_back(GDScriptCodeGenerator::Address
   const&) [clone .isra.0] */

void __thiscall
List<GDScriptCodeGenerator::Address,DefaultAllocator>::push_back
          (List<GDScriptCodeGenerator::Address,DefaultAllocator> *this,Address *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 (*pauVar4) [16];
  
  if (*(long *)this == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar3 = (undefined8 *)operator_new(0x58,DefaultAllocator::alloc);
  *puVar3 = 7;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined1 *)((long)puVar3 + 0x1c) = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(undefined1 (*) [16])(puVar3 + 5) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 7) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 9) = (undefined1  [16])0x0;
  *puVar3 = *(undefined8 *)param_1;
  GDScriptDataType::operator=((GDScriptDataType *)(puVar3 + 1),(GDScriptDataType *)(param_1 + 8));
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  puVar3[8] = 0;
  puVar3[10] = plVar1;
  puVar3[9] = lVar2;
  if (lVar2 != 0) {
    *(undefined8 **)(lVar2 + 0x40) = puVar3;
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



/* GDScriptByteCodeGenerator::start_for(GDScriptDataType const&, GDScriptDataType const&) */

void __thiscall
GDScriptByteCodeGenerator::start_for
          (GDScriptByteCodeGenerator *this,GDScriptDataType *param_1,GDScriptDataType *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  long local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  GDScriptDataType local_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  GDScriptDataType local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = *(code **)(*(long *)this + 8);
  StringName::StringName((StringName *)&local_88,"@counter_pos",false);
  uVar2 = (*pcVar1)(this,(StringName *)&local_88,param_1);
  local_a0 = (undefined1  [16])0x0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_90 = 0;
  _local_c8 = CONCAT44(uVar2,4);
  GDScriptDataType::operator=(local_c0,param_1);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  pcVar1 = *(code **)(*(long *)this + 8);
  StringName::StringName((StringName *)&local_d0,"@container_pos",false);
  uVar2 = (*pcVar1)(this,(StringName *)&local_d0,param_2);
  local_60 = (undefined1  [16])0x0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_50 = 0;
  local_88 = CONCAT44(uVar2,4);
  GDScriptDataType::operator=(local_80,param_2);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  List<GDScriptCodeGenerator::Address,DefaultAllocator>::push_back
            ((List<GDScriptCodeGenerator::Address,DefaultAllocator> *)(this + 0x350),
             (Address *)&local_c8);
  List<GDScriptCodeGenerator::Address,DefaultAllocator>::push_back
            ((List<GDScriptCodeGenerator::Address,DefaultAllocator> *)(this + 0x358),
             (Address *)&local_88);
  GDScriptDataType::~GDScriptDataType(local_80);
  GDScriptDataType::~GDScriptDataType(local_c0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_start_ternary(GDScriptCodeGenerator::Address const&) */

void __thiscall
GDScriptByteCodeGenerator::write_start_ternary(GDScriptByteCodeGenerator *this,Address *param_1)

{
  List<GDScriptCodeGenerator::Address,DefaultAllocator>::push_back
            ((List<GDScriptCodeGenerator::Address,DefaultAllocator> *)(this + 0x380),param_1);
  return;
}



/* GDScriptByteCodeGenerator::get_call_target(GDScriptCodeGenerator::Address const&, Variant::Type)
    */

undefined8 *
GDScriptByteCodeGenerator::get_call_target
          (undefined8 *param_1,long *param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  GDScriptDataType aGStack_b8 [8];
  undefined8 local_b0;
  uint local_a8;
  undefined1 local_a4;
  int local_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 local_78;
  GDScriptDataType local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_3 == 7) {
    local_b0 = 0;
    local_a0 = 0;
    local_88 = 0;
    local_98 = (undefined1  [16])0x0;
    local_a4 = param_4 != 0;
    if ((bool)local_a4) {
      local_a0 = param_4;
    }
    local_a8 = (uint)(byte)local_a4;
    uVar1 = (**(code **)(*param_2 + 0x28))(param_2,aGStack_b8);
    local_50 = (undefined1  [16])0x0;
    local_78 = CONCAT44(uVar1,6);
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_40 = 0;
    GDScriptDataType::operator=(local_70,aGStack_b8);
    *(undefined1 *)((long)param_1 + 0x1c) = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *param_1 = local_78;
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[7] = 0;
    *(undefined1 (*) [16])(param_1 + 5) = (undefined1  [16])0x0;
    GDScriptDataType::operator=((GDScriptDataType *)(param_1 + 1),local_70);
    *(undefined1 *)(param_1 + 8) = 1;
    param_1[9] = param_2;
    GDScriptDataType::~GDScriptDataType(local_70);
    GDScriptDataType::~GDScriptDataType(aGStack_b8);
  }
  else {
    local_78 = *(undefined8 *)param_3;
    local_50 = (undefined1  [16])0x0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_40 = 0;
    GDScriptDataType::operator=(local_70,(GDScriptDataType *)(param_3 + 2));
    *(undefined1 *)((long)param_1 + 0x1c) = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *param_1 = local_78;
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[7] = 0;
    *(undefined1 (*) [16])(param_1 + 5) = (undefined1  [16])0x0;
    GDScriptDataType::operator=((GDScriptDataType *)(param_1 + 1),local_70);
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[9] = param_2;
    GDScriptDataType::~GDScriptDataType(local_70);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<GDScriptDataType>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<GDScriptDataType>::_copy_on_write(CowData<GDScriptDataType> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  GDScriptDataType *this_00;
  ulong uVar5;
  long lVar6;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (lVar1 * 0x38 != 0) {
    uVar5 = lVar1 * 0x38 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar6 = 0;
  *puVar4 = 1;
  puVar4[1] = lVar1;
  this_00 = (GDScriptDataType *)(puVar4 + 2);
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      this_00[0x14] = (GDScriptDataType)0x0;
      *(undefined8 *)(this_00 + 8) = 0;
      lVar6 = lVar6 + 1;
      *(undefined4 *)(this_00 + 0x10) = 0;
      *(undefined4 *)(this_00 + 0x18) = 0;
      *(undefined8 *)(this_00 + 0x30) = 0;
      *(undefined1 (*) [16])(this_00 + 0x20) = (undefined1  [16])0x0;
      GDScriptDataType::operator=(this_00,this_00 + lVar2 + (-0x10 - (long)puVar4));
      this_00 = this_00 + 0x38;
    } while (lVar1 != lVar6);
  }
  _unref(this);
  *(GDScriptDataType **)this = (GDScriptDataType *)(puVar4 + 2);
  return;
}



/* GDScriptByteCodeGenerator::~GDScriptByteCodeGenerator() */

void __thiscall
GDScriptByteCodeGenerator::~GDScriptByteCodeGenerator(GDScriptByteCodeGenerator *this)

{
  uint uVar1;
  GDScriptFunction *this_00;
  List<int,DefaultAllocator> *this_01;
  long lVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR_add_parameter_0011f258;
  if ((this[8] == (GDScriptByteCodeGenerator)0x0) &&
     (this_00 = *(GDScriptFunction **)(this + 0x10), this_00 != (GDScriptFunction *)0x0)) {
    GDScriptFunction::~GDScriptFunction(this_00);
    Memory::free_static(this_00,false);
  }
  plVar3 = *(long **)(this + 0x398);
  if (plVar3 != (long *)0x0) {
    do {
      this_01 = (List<int,DefaultAllocator> *)*plVar3;
      if (this_01 == (List<int,DefaultAllocator> *)0x0) {
        if ((int)plVar3[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00101d73;
        }
        break;
      }
      if (*(long **)(this_01 + 0x18) == plVar3) {
        lVar4 = *(long *)(this_01 + 8);
        lVar2 = *(long *)(this_01 + 0x10);
        *plVar3 = lVar4;
        if (this_01 == (List<int,DefaultAllocator> *)plVar3[1]) {
          plVar3[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 8) = lVar4;
          lVar4 = *(long *)(this_01 + 8);
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x10) = lVar2;
        }
        List<int,DefaultAllocator>::~List(this_01);
        Memory::free_static(this_01,false);
        *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar3 = *(long **)(this + 0x398);
    } while ((int)plVar3[2] != 0);
    Memory::free_static(plVar3,false);
  }
LAB_00101d73:
  List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(this + 0x390));
  List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(this + 0x388));
  List<GDScriptCodeGenerator::Address,DefaultAllocator>::~List
            ((List<GDScriptCodeGenerator::Address,DefaultAllocator> *)(this + 0x380));
  List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(this + 0x378));
  List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(this + 0x370));
  List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(this + 0x368));
  List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(this + 0x360));
  List<GDScriptCodeGenerator::Address,DefaultAllocator>::~List
            ((List<GDScriptCodeGenerator::Address,DefaultAllocator> *)(this + 0x358));
  List<GDScriptCodeGenerator::Address,DefaultAllocator>::~List
            ((List<GDScriptCodeGenerator::Address,DefaultAllocator> *)(this + 0x350));
  List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(this + 0x348));
  List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(this + 0x340));
  CowData<String>::_unref((CowData<String> *)(this + 0x338));
  CowData<String>::_unref((CowData<String> *)(this + 0x328));
  CowData<String>::_unref((CowData<String> *)(this + 0x318));
  CowData<String>::_unref((CowData<String> *)(this + 0x308));
  CowData<String>::_unref((CowData<String> *)(this + 0x2f8));
  CowData<String>::_unref((CowData<String> *)(this + 0x2e8));
  CowData<String>::_unref((CowData<String> *)(this + 0x2d8));
  RBMap<GDScriptFunction*,int,Comparator<GDScriptFunction*>,DefaultAllocator>::clear
            ((RBMap<GDScriptFunction*,int,Comparator<GDScriptFunction*>,DefaultAllocator> *)
             (this + 0x2b8));
  if (*(void **)(this + 0x2b8) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x2b8),false);
  }
  RBMap<MethodBind*,int,Comparator<MethodBind*>,DefaultAllocator>::clear
            ((RBMap<MethodBind*,int,Comparator<MethodBind*>,DefaultAllocator> *)(this + 0x2a0));
  if (*(void **)(this + 0x2a0) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x2a0),false);
  }
  RBMap<void(*)(Variant*,Variant_const**,int,Callable::CallError&),int,Comparator<void(*)(Variant*,Variant_const**,int,Callable::CallError&)>,DefaultAllocator>
  ::clear((RBMap<void(*)(Variant*,Variant_const**,int,Callable::CallError&),int,Comparator<void(*)(Variant*,Variant_const**,int,Callable::CallError&)>,DefaultAllocator>
           *)(this + 0x288));
  if (*(void **)(this + 0x288) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x288),false);
  }
  RBMap<void(*)(Variant*,Variant_const**,int),int,Comparator<void(*)(Variant*,Variant_const**,int)>,DefaultAllocator>
  ::clear((RBMap<void(*)(Variant*,Variant_const**,int),int,Comparator<void(*)(Variant*,Variant_const**,int)>,DefaultAllocator>
           *)(this + 0x270));
  if (*(void **)(this + 0x270) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x270),false);
  }
  RBMap<void(*)(Variant*,Variant_const**),int,Comparator<void(*)(Variant*,Variant_const**)>,DefaultAllocator>
  ::clear((RBMap<void(*)(Variant*,Variant_const**),int,Comparator<void(*)(Variant*,Variant_const**)>,DefaultAllocator>
           *)(this + 600));
  if (*(void **)(this + 600) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 600),false);
  }
  RBMap<void(*)(Variant*,Variant_const**,int,Variant*),int,Comparator<void(*)(Variant*,Variant_const**,int,Variant*)>,DefaultAllocator>
  ::clear((RBMap<void(*)(Variant*,Variant_const**,int,Variant*),int,Comparator<void(*)(Variant*,Variant_const**,int,Variant*)>,DefaultAllocator>
           *)(this + 0x240));
  if (*(void **)(this + 0x240) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x240),false);
  }
  RBMap<void(*)(Variant_const*,long,Variant*,bool*),int,Comparator<void(*)(Variant_const*,long,Variant*,bool*)>,DefaultAllocator>
  ::clear((RBMap<void(*)(Variant_const*,long,Variant*,bool*),int,Comparator<void(*)(Variant_const*,long,Variant*,bool*)>,DefaultAllocator>
           *)(this + 0x228));
  if (*(void **)(this + 0x228) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x228),false);
  }
  RBMap<void(*)(Variant*,long,Variant_const*,bool*),int,Comparator<void(*)(Variant*,long,Variant_const*,bool*)>,DefaultAllocator>
  ::clear((RBMap<void(*)(Variant*,long,Variant_const*,bool*),int,Comparator<void(*)(Variant*,long,Variant_const*,bool*)>,DefaultAllocator>
           *)(this + 0x210));
  if (*(void **)(this + 0x210) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x210),false);
  }
  RBMap<void(*)(Variant_const*,Variant_const*,Variant*,bool*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*,bool*)>,DefaultAllocator>
  ::clear((RBMap<void(*)(Variant_const*,Variant_const*,Variant*,bool*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*,bool*)>,DefaultAllocator>
           *)(this + 0x1f8));
  if (*(void **)(this + 0x1f8) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x1f8),false);
  }
  RBMap<void(*)(Variant*,Variant_const*,Variant_const*,bool*),int,Comparator<void(*)(Variant*,Variant_const*,Variant_const*,bool*)>,DefaultAllocator>
  ::clear((RBMap<void(*)(Variant*,Variant_const*,Variant_const*,bool*),int,Comparator<void(*)(Variant*,Variant_const*,Variant_const*,bool*)>,DefaultAllocator>
           *)(this + 0x1e0));
  if (*(void **)(this + 0x1e0) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x1e0),false);
  }
  RBMap<void(*)(Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant*)>,DefaultAllocator>
  ::clear((RBMap<void(*)(Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant*)>,DefaultAllocator>
           *)(this + 0x1c8));
  if (*(void **)(this + 0x1c8) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x1c8),false);
  }
  RBMap<void(*)(Variant*,Variant_const*),int,Comparator<void(*)(Variant*,Variant_const*)>,DefaultAllocator>
  ::clear((RBMap<void(*)(Variant*,Variant_const*),int,Comparator<void(*)(Variant*,Variant_const*)>,DefaultAllocator>
           *)(this + 0x1b0));
  if (*(void **)(this + 0x1b0) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x1b0),false);
  }
  RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
  ::clear((RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
           *)(this + 0x198));
  if (*(void **)(this + 0x198) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x198),false);
  }
  CowData<StringName>::_unref((CowData<StringName> *)(this + 400));
  RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::~RBMap
            ((RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *)(this + 0x170));
  pvVar5 = *(void **)(this + 0x148);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x16c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x168) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x16c) = 0;
        *(undefined1 (*) [16])(this + 0x158) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x150) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x150) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x10)] != '\0') {
              Variant::_clear_internal();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x148);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x16c) = 0;
        *(undefined1 (*) [16])(this + 0x158) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_001020af;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x150),false);
  }
LAB_001020af:
  List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(this + 0x138));
  RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::~RBMap
            ((RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *)(this + 0x110));
  List<RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>,DefaultAllocator>::~List
            ((List<RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>,DefaultAllocator> *
             )(this + 0x108));
  plVar3 = *(long **)(this + 0x100);
  if (plVar3 != (long *)0x0) {
    do {
      pvVar5 = (void *)*plVar3;
      if (pvVar5 == (void *)0x0) {
        if ((int)plVar3[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_0010216a;
        }
        break;
      }
      if (*(long **)((long)pvVar5 + 0x28) == plVar3) {
        lVar4 = *(long *)((long)pvVar5 + 0x18);
        lVar2 = *(long *)((long)pvVar5 + 0x20);
        *plVar3 = lVar4;
        if (pvVar5 == (void *)plVar3[1]) {
          plVar3[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x18) = lVar4;
          lVar4 = *(long *)((long)pvVar5 + 0x18);
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x20) = lVar2;
        }
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
          StringName::unref();
        }
        Memory::free_static(pvVar5,false);
        *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar3 = *(long **)(this + 0x100);
    } while ((int)plVar3[2] != 0);
    Memory::free_static(plVar3,false);
  }
LAB_0010216a:
  RBMap<Variant::Type,List<int,DefaultAllocator>,Comparator<Variant::Type>,DefaultAllocator>::~RBMap
            ((RBMap<Variant::Type,List<int,DefaultAllocator>,Comparator<Variant::Type>,DefaultAllocator>
              *)(this + 0xe8));
  HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::~HashSet
            ((HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *)(this + 0xc0));
  List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(this + 0xb8));
  CowData<GDScriptByteCodeGenerator::StackSlot>::_unref
            ((CowData<GDScriptByteCodeGenerator::StackSlot> *)(this + 0xb0));
  HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::~HashSet
            ((HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *)(this + 0x80));
  CowData<GDScriptByteCodeGenerator::StackSlot>::_unref
            ((CowData<GDScriptByteCodeGenerator::StackSlot> *)(this + 0x78));
  RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::~RBMap
            ((RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *)(this + 0x58));
  List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(this + 0x50));
  RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::~RBMap
            ((RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *)(this + 0x38));
  List<RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>,DefaultAllocator>::~List
            ((List<RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>,DefaultAllocator> *
             )(this + 0x30));
  CowData<int>::_unref((CowData<int> *)(this + 0x28));
  return;
}



/* GDScriptByteCodeGenerator::~GDScriptByteCodeGenerator() */

void __thiscall
GDScriptByteCodeGenerator::~GDScriptByteCodeGenerator(GDScriptByteCodeGenerator *this)

{
  ~GDScriptByteCodeGenerator(this);
  operator_delete(this,0x3a0);
  return;
}



/* CowData<GDScriptByteCodeGenerator::StackSlot>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<GDScriptByteCodeGenerator::StackSlot>::_copy_on_write
          (CowData<GDScriptByteCodeGenerator::StackSlot> *this)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar2 * 0x18 != 0) {
    uVar7 = lVar2 * 0x18 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar9 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    puVar8 = puVar5 + 2;
    if (lVar2 != 0) {
      do {
        puVar6 = (undefined4 *)((long)puVar8 + *(long *)this + (-0x10 - (long)puVar5));
        *(undefined4 *)puVar8 = *puVar6;
        uVar1 = *(undefined1 *)(puVar6 + 1);
        puVar8[2] = 0;
        lVar3 = *(long *)(puVar6 + 4);
        *(undefined1 *)((long)puVar8 + 4) = uVar1;
        if (lVar3 != 0) {
          CowData<int>::_ref((CowData<int> *)(puVar8 + 2),(CowData *)(puVar6 + 4));
        }
        lVar9 = lVar9 + 1;
        puVar8 = puVar8 + 3;
      } while (lVar2 != lVar9);
    }
    _unref(this);
    *(undefined8 **)this = puVar5 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Vector<GDScriptByteCodeGenerator::StackSlot>::push_back(GDScriptByteCodeGenerator::StackSlot)
   [clone .isra.0] */

void __thiscall
Vector<GDScriptByteCodeGenerator::StackSlot>::push_back
          (Vector<GDScriptByteCodeGenerator::StackSlot> *this,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(this + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar2 = CowData<GDScriptByteCodeGenerator::StackSlot>::resize<false>
                    ((CowData<GDScriptByteCodeGenerator::StackSlot> *)(this + 8),lVar3);
  if (iVar2 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar4 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(this + 8) + -8);
      lVar4 = lVar3 + -1;
      if (-1 < lVar4) {
        CowData<GDScriptByteCodeGenerator::StackSlot>::_copy_on_write
                  ((CowData<GDScriptByteCodeGenerator::StackSlot> *)(this + 8));
        puVar1 = (undefined4 *)(*(long *)(this + 8) + lVar4 * 0x18);
        *puVar1 = *param_2;
        *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
        if (*(long *)(puVar1 + 4) == *(long *)(param_2 + 4)) {
          return;
        }
        CowData<int>::_ref((CowData<int> *)(puVar1 + 4),(CowData *)(param_2 + 4));
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar4,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* GDScriptByteCodeGenerator::add_or_get_constant(Variant const&) */

void __thiscall
GDScriptByteCodeGenerator::add_or_get_constant(GDScriptByteCodeGenerator *this,Variant *param_1)

{
  get_constant_pos(this,param_1);
  return;
}



/* CowData<void (*)(Variant const*, Variant const*, Variant*)>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<void(*)(Variant_const*,Variant_const*,Variant*)>::_copy_on_write
          (CowData<void(*)(Variant_const*,Variant_const*,Variant*)> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 8;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<void (*)(Variant*, Variant const*)>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<void(*)(Variant*,Variant_const*)>::_copy_on_write
          (CowData<void(*)(Variant*,Variant_const*)> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 8;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<void (*)(Variant const*, Variant*)>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<void(*)(Variant_const*,Variant*)>::_copy_on_write
          (CowData<void(*)(Variant_const*,Variant*)> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 8;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<void (*)(Variant*, Variant const*, Variant const*, bool*)>::_copy_on_write() [clone
   .isra.0] */

void __thiscall
CowData<void(*)(Variant*,Variant_const*,Variant_const*,bool*)>::_copy_on_write
          (CowData<void(*)(Variant*,Variant_const*,Variant_const*,bool*)> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 8;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<void (*)(Variant const*, Variant const*, Variant*, bool*)>::_copy_on_write() [clone
   .isra.0] */

void __thiscall
CowData<void(*)(Variant_const*,Variant_const*,Variant*,bool*)>::_copy_on_write
          (CowData<void(*)(Variant_const*,Variant_const*,Variant*,bool*)> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 8;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<void (*)(Variant*, long, Variant const*, bool*)>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<void(*)(Variant*,long,Variant_const*,bool*)>::_copy_on_write
          (CowData<void(*)(Variant*,long,Variant_const*,bool*)> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 8;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<void (*)(Variant const*, long, Variant*, bool*)>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<void(*)(Variant_const*,long,Variant*,bool*)>::_copy_on_write
          (CowData<void(*)(Variant_const*,long,Variant*,bool*)> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 8;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<void (*)(Variant*, Variant const**, int, Variant*)>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<void(*)(Variant*,Variant_const**,int,Variant*)>::_copy_on_write
          (CowData<void(*)(Variant*,Variant_const**,int,Variant*)> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 8;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<void (*)(Variant*, Variant const**)>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<void(*)(Variant*,Variant_const**)>::_copy_on_write
          (CowData<void(*)(Variant*,Variant_const**)> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 8;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<void (*)(Variant*, Variant const**, int)>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<void(*)(Variant*,Variant_const**,int)>::_copy_on_write
          (CowData<void(*)(Variant*,Variant_const**,int)> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 8;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<void (*)(Variant*, Variant const**, int, Callable::CallError&)>::_copy_on_write() [clone
   .isra.0] */

void __thiscall
CowData<void(*)(Variant*,Variant_const**,int,Callable::CallError&)>::_copy_on_write
          (CowData<void(*)(Variant*,Variant_const**,int,Callable::CallError&)> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 8;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Error CowData<void (*)(Variant*, Variant const**, int,
   Callable::CallError&)>::resize<false>(long) [clone .isra.0] */

void __thiscall
CowData<void(*)(Variant*,Variant_const**,int,Callable::CallError&)>::resize<false>
          (CowData<void(*)(Variant*,Variant_const**,int,Callable::CallError&)> *this,long param_1)

{
  int iVar1;
  CowData<void(*)(Variant*,Variant_const**,int,Callable::CallError&)> *pCVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  CowData<void(*)(Variant*,Variant_const**,int,Callable::CallError&)> *pCVar8;
  CowData<void(*)(Variant*,Variant_const**,int,Callable::CallError&)> *pCVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar10 = 0;
    pCVar2 = (CowData<void(*)(Variant*,Variant_const**,int,Callable::CallError&)> *)0x0;
  }
  else {
    lVar10 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    pCVar2 = (CowData<void(*)(Variant*,Variant_const**,int,Callable::CallError&)> *)(lVar10 * 8);
    if (pCVar2 != (CowData<void(*)(Variant*,Variant_const**,int,Callable::CallError&)> *)0x0) {
      uVar3 = (ulong)(pCVar2 + -1) | (ulong)(pCVar2 + -1) >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      pCVar2 = (CowData<void(*)(Variant*,Variant_const**,int,Callable::CallError&)> *)
               ((uVar3 | uVar3 >> 0x20) + 1);
    }
  }
  if (param_1 * 8 != 0) {
    uVar3 = param_1 * 8 - 1;
    uVar3 = uVar3 | uVar3 >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    pCVar9 = (CowData<void(*)(Variant*,Variant_const**,int,Callable::CallError&)> *)
             (uVar3 | uVar3 >> 0x20);
    pCVar8 = pCVar9 + 1;
    if (pCVar8 != (CowData<void(*)(Variant*,Variant_const**,int,Callable::CallError&)> *)0x0) {
      if (param_1 <= lVar10) {
        if ((pCVar8 != pCVar2) && (iVar1 = _realloc(this,(long)pCVar8), iVar1 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_00117134();
        return;
      }
      if (pCVar8 != pCVar2) {
        if (lVar10 == 0) {
          puVar4 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
          if (puVar4 != (undefined8 *)0x0) {
            puVar6 = puVar4 + 2;
            *puVar4 = 1;
            puVar4[1] = 0;
            *(undefined8 **)this = puVar6;
            goto LAB_001031ed;
          }
          uVar7 = 0x171;
          pcVar5 = "Parameter \"mem_new\" is null.";
          goto LAB_001032b2;
        }
        pCVar9 = this;
        iVar1 = _realloc(this,(long)pCVar8);
        if (iVar1 != 0) {
          return;
        }
      }
      puVar6 = *(undefined8 **)this;
      if (puVar6 == (undefined8 *)0x0) {
        resize<false>((long)pCVar9);
        return;
      }
LAB_001031ed:
      puVar6[-1] = param_1;
      return;
    }
  }
  uVar7 = 0x16a;
  pcVar5 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_001032b2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar7,pcVar5,0,0);
  return;
}



/* CowData<MethodBind*>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<MethodBind*>::_copy_on_write(CowData<MethodBind*> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 8;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Error CowData<MethodBind*>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<MethodBind*>::resize<false>(CowData<MethodBind*> *this,long param_1)

{
  int iVar1;
  CowData<MethodBind*> *pCVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  CowData<MethodBind*> *pCVar8;
  CowData<MethodBind*> *pCVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar10 = 0;
    pCVar2 = (CowData<MethodBind*> *)0x0;
  }
  else {
    lVar10 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    pCVar2 = (CowData<MethodBind*> *)(lVar10 * 8);
    if (pCVar2 != (CowData<MethodBind*> *)0x0) {
      uVar3 = (ulong)(pCVar2 + -1) | (ulong)(pCVar2 + -1) >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      pCVar2 = (CowData<MethodBind*> *)((uVar3 | uVar3 >> 0x20) + 1);
    }
  }
  if (param_1 * 8 != 0) {
    uVar3 = param_1 * 8 - 1;
    uVar3 = uVar3 | uVar3 >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    pCVar9 = (CowData<MethodBind*> *)(uVar3 | uVar3 >> 0x20);
    pCVar8 = pCVar9 + 1;
    if (pCVar8 != (CowData<MethodBind*> *)0x0) {
      if (param_1 <= lVar10) {
        if ((pCVar8 != pCVar2) && (iVar1 = _realloc(this,(long)pCVar8), iVar1 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_00117156();
        return;
      }
      if (pCVar8 != pCVar2) {
        if (lVar10 == 0) {
          puVar4 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
          if (puVar4 != (undefined8 *)0x0) {
            puVar6 = puVar4 + 2;
            *puVar4 = 1;
            puVar4[1] = 0;
            *(undefined8 **)this = puVar6;
            goto LAB_0010350d;
          }
          uVar7 = 0x171;
          pcVar5 = "Parameter \"mem_new\" is null.";
          goto LAB_001035d2;
        }
        pCVar9 = this;
        iVar1 = _realloc(this,(long)pCVar8);
        if (iVar1 != 0) {
          return;
        }
      }
      puVar6 = *(undefined8 **)this;
      if (puVar6 == (undefined8 *)0x0) {
        resize<false>((long)pCVar9);
        return;
      }
LAB_0010350d:
      puVar6[-1] = param_1;
      return;
    }
  }
  uVar7 = 0x16a;
  pcVar5 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_001035d2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar7,pcVar5,0,0);
  return;
}



/* CowData<GDScriptFunction*>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<GDScriptFunction*>::_copy_on_write(CowData<GDScriptFunction*> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 8;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Error CowData<GDScriptFunction*>::resize<false>(long) [clone .isra.0] */

void __thiscall
CowData<GDScriptFunction*>::resize<false>(CowData<GDScriptFunction*> *this,long param_1)

{
  int iVar1;
  CowData<GDScriptFunction*> *pCVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  CowData<GDScriptFunction*> *pCVar8;
  CowData<GDScriptFunction*> *pCVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar10 = 0;
    pCVar2 = (CowData<GDScriptFunction*> *)0x0;
  }
  else {
    lVar10 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    pCVar2 = (CowData<GDScriptFunction*> *)(lVar10 * 8);
    if (pCVar2 != (CowData<GDScriptFunction*> *)0x0) {
      uVar3 = (ulong)(pCVar2 + -1) | (ulong)(pCVar2 + -1) >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      pCVar2 = (CowData<GDScriptFunction*> *)((uVar3 | uVar3 >> 0x20) + 1);
    }
  }
  if (param_1 * 8 != 0) {
    uVar3 = param_1 * 8 - 1;
    uVar3 = uVar3 | uVar3 >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    pCVar9 = (CowData<GDScriptFunction*> *)(uVar3 | uVar3 >> 0x20);
    pCVar8 = pCVar9 + 1;
    if (pCVar8 != (CowData<GDScriptFunction*> *)0x0) {
      if (param_1 <= lVar10) {
        if ((pCVar8 != pCVar2) && (iVar1 = _realloc(this,(long)pCVar8), iVar1 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_00117178();
        return;
      }
      if (pCVar8 != pCVar2) {
        if (lVar10 == 0) {
          puVar4 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
          if (puVar4 != (undefined8 *)0x0) {
            puVar6 = puVar4 + 2;
            *puVar4 = 1;
            puVar4[1] = 0;
            *(undefined8 **)this = puVar6;
            goto LAB_0010382d;
          }
          uVar7 = 0x171;
          pcVar5 = "Parameter \"mem_new\" is null.";
          goto LAB_001038f2;
        }
        pCVar9 = this;
        iVar1 = _realloc(this,(long)pCVar8);
        if (iVar1 != 0) {
          return;
        }
      }
      puVar6 = *(undefined8 **)this;
      if (puVar6 == (undefined8 *)0x0) {
        resize<false>((long)pCVar9);
        return;
      }
LAB_0010382d:
      puVar6[-1] = param_1;
      return;
    }
  }
  uVar7 = 0x16a;
  pcVar5 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_001038f2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar7,pcVar5,0,0);
  return;
}



/* CowData<Variant::Type>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Variant::Type>::_copy_on_write(CowData<Variant::Type> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 4;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Vector<int>::push_back(int) [clone .isra.0] */

void __thiscall Vector<int>::push_back(Vector<int> *this,int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<int>::resize<false>((CowData<int> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
        *(int *)(*(long *)(this + 8) + lVar3 * 4) = param_1;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GDScriptByteCodeGenerator::write_end() */

long __thiscall GDScriptByteCodeGenerator::write_end(GDScriptByteCodeGenerator *this)

{
  long lVar1;
  CowData<StringName> *this_00;
  CowData<void(*)(Variant_const*,Variant_const*,Variant*)> *this_01;
  CowData<void(*)(Variant*,Variant_const*)> *this_02;
  CowData<void(*)(Variant_const*,Variant*)> *this_03;
  CowData<void(*)(Variant*,Variant_const*,Variant_const*,bool*)> *this_04;
  CowData<void(*)(Variant_const*,Variant_const*,Variant*,bool*)> *this_05;
  CowData<void(*)(Variant*,long,Variant_const*,bool*)> *this_06;
  CowData<void(*)(Variant_const*,long,Variant*,bool*)> *this_07;
  CowData<void(*)(Variant*,Variant_const**)> *this_08;
  CowData<void(*)(Variant*,Variant_const**,int,Variant*)> *this_09;
  CowData<void(*)(Variant*,Variant_const**,int)> *this_10;
  code *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  CowData<Variant> *this_11;
  long lVar18;
  long in_FS_OFFSET;
  CowData<char32_t> local_50 [8];
  int local_48 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0xb8) != 0) && (*(int *)(*(long *)(this + 0xb8) + 0x10) != 0)) {
    itos((long)local_50);
    operator+((char *)local_48,(String *)"Non-zero temporary variables at end of function: ");
    _err_print_error("write_end","modules/gdscript/gdscript_byte_codegen.cpp",0xb8,
                     (CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref(local_50);
  }
  Vector<int>::push_back((Vector<int> *)(this + 0x20),0x9b);
  lVar15 = *(long *)(this + 0xb0);
  for (lVar14 = 0; (lVar15 != 0 && (lVar14 < *(long *)(lVar15 + -8))); lVar14 = lVar14 + 1) {
    iVar12 = *(int *)(this + 0x128) + (int)lVar14 + 3;
    local_48[0] = iVar12;
    if (lVar15 == 0) {
LAB_00103c22:
      lVar18 = 0;
      goto LAB_00103c43;
    }
    lVar17 = 0;
    while( true ) {
      lVar18 = *(long *)(lVar15 + -8);
      if (lVar18 <= lVar14) goto LAB_00103c43;
      piVar4 = (int *)(lVar15 + lVar14 * 0x18);
      lVar18 = *(long *)(piVar4 + 4);
      if ((lVar18 == 0) || (*(long *)(lVar18 + -8) <= lVar17)) break;
      lVar18 = (long)*(int *)(lVar18 + lVar17 * 4);
      lVar15 = *(long *)(this + 0x28);
      if (lVar18 < 0) {
        if (lVar15 == 0) {
LAB_00103d20:
          lVar15 = 0;
        }
        else {
LAB_00103c79:
          lVar15 = *(long *)(lVar15 + -8);
        }
        goto LAB_00103c9b;
      }
      if (lVar15 == 0) goto LAB_00103d20;
      if (*(long *)(lVar15 + -8) <= lVar18) goto LAB_00103c79;
      lVar17 = lVar17 + 1;
      CowData<int>::_copy_on_write((CowData<int> *)(this + 0x28));
      *(int *)(*(long *)(this + 0x28) + lVar18 * 4) = iVar12;
      lVar15 = *(long *)(this + 0xb0);
      if (lVar15 == 0) goto LAB_00103c22;
    }
    iVar12 = *piVar4;
    if (iVar12 != 0) {
      piVar4 = (int *)HashMap<int,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Variant::Type>>>
                      ::operator[]((HashMap<int,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Variant::Type>>>
                                    *)(*(long *)(this + 0x10) + 0x138),local_48);
      *piVar4 = iVar12;
      lVar15 = *(long *)(this + 0xb0);
    }
  }
  lVar14 = *(long *)(this + 0x10);
  if (*(int *)(this + 0x16c) == 0) {
    *(undefined8 *)(lVar14 + 0x2d8) = 0;
    *(undefined4 *)(lVar14 + 0x288) = 0;
  }
  else {
    *(int *)(lVar14 + 0x288) = *(int *)(this + 0x16c);
    this_11 = (CowData<Variant> *)(lVar14 + 0x198);
    uVar6 = (ulong)*(uint *)(this + 0x16c);
    if (*(long *)(lVar14 + 0x198) == 0) {
      if (uVar6 != 0) {
        CowData<Variant>::_copy_on_write(this_11);
        uVar5 = 0;
LAB_00104e0a:
        uVar10 = uVar6 * 0x18 - 1;
        uVar10 = uVar10 >> 1 | uVar10;
        uVar10 = uVar10 >> 2 | uVar10;
        uVar10 = uVar10 | uVar10 >> 4;
        uVar10 = uVar10 >> 8 | uVar10;
        uVar10 = uVar10 | uVar10 >> 0x10;
        lVar15 = (uVar10 | uVar10 >> 0x20) + 1;
        if ((long)uVar6 <= (long)uVar5) {
          lVar17 = 0;
LAB_00104d65:
          lVar18 = *(long *)(lVar14 + 0x198);
          uVar5 = uVar6;
          while (lVar18 != 0) {
            if (*(ulong *)(lVar18 + -8) <= uVar5) {
              if (lVar15 != lVar17) {
                iVar12 = CowData<Variant>::_realloc(this_11,lVar15);
                if (iVar12 != 0) goto LAB_00104dc7;
                lVar18 = *(long *)(lVar14 + 0x198);
                if (lVar18 == 0) goto code_r0x00117198;
              }
              *(ulong *)(lVar18 + -8) = uVar6;
              goto LAB_00104dc7;
            }
            if (Variant::needs_deinit[*(int *)(lVar18 + uVar5 * 0x18)] != '\0') {
              Variant::_clear_internal();
              lVar18 = *(long *)(lVar14 + 0x198);
            }
            uVar5 = uVar5 + 1;
          }
          goto code_r0x0011718e;
        }
LAB_0010504c:
        if (uVar5 == 0) {
          puVar8 = (undefined8 *)Memory::alloc_static(lVar15 + 0x10,false);
          if (puVar8 == (undefined8 *)0x0) {
            _err_print_error("resize","./core/templates/cowdata.h",0x171);
            lVar14 = *(long *)(this + 0x10);
            this_11 = (CowData<Variant> *)(lVar14 + 0x198);
          }
          else {
            puVar7 = puVar8 + 2;
            *puVar8 = 1;
            puVar8[1] = 0;
            *(undefined8 **)(lVar14 + 0x198) = puVar7;
LAB_001042d5:
            lVar15 = puVar7[-1];
            if (lVar15 < (long)uVar6) {
              uVar5 = lVar15 + 1;
              *(undefined4 *)(puVar7 + lVar15 * 3) = 0;
              *(undefined1 (*) [16])(puVar7 + lVar15 * 3 + 1) = (undefined1  [16])0x0;
              if ((long)uVar5 < (long)uVar6) {
                lVar15 = uVar5 * 0x18;
                do {
                  uVar5 = uVar5 + 1;
                  puVar9 = (undefined4 *)(*(long *)(lVar14 + 0x198) + lVar15);
                  lVar15 = lVar15 + 0x18;
                  *puVar9 = 0;
                  *(undefined1 (*) [16])(puVar9 + 2) = (undefined1  [16])0x0;
                } while (uVar6 != uVar5);
              }
              puVar7 = *(undefined8 **)(lVar14 + 0x198);
              if (puVar7 == (undefined8 *)0x0) goto code_r0x00117198;
            }
            lVar14 = *(long *)(this + 0x10);
            puVar7[-1] = uVar6;
            this_11 = (CowData<Variant> *)(lVar14 + 0x198);
          }
        }
        else {
          iVar12 = CowData<Variant>::_realloc(this_11,lVar15);
          if (iVar12 == 0) {
LAB_001042c5:
            puVar7 = *(undefined8 **)(lVar14 + 0x198);
            if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            goto LAB_001042d5;
          }
LAB_00104dc7:
          lVar14 = *(long *)(this + 0x10);
          this_11 = (CowData<Variant> *)(lVar14 + 0x198);
        }
      }
    }
    else {
      uVar5 = *(ulong *)(*(long *)(lVar14 + 0x198) + -8);
      if (uVar6 != uVar5) {
        if (uVar6 != 0) {
          CowData<Variant>::_copy_on_write(this_11);
          uVar10 = uVar6 * 0x18 - 1;
          uVar10 = uVar10 >> 1 | uVar10;
          uVar10 = uVar10 >> 2 | uVar10;
          uVar10 = uVar10 >> 4 | uVar10;
          uVar10 = uVar10 >> 8 | uVar10;
          uVar10 = uVar10 >> 0x10 | uVar10;
          uVar10 = uVar10 >> 0x20 | uVar10;
          lVar15 = uVar10 + 1;
          if (uVar5 * 0x18 == 0) goto LAB_00104e0a;
          uVar16 = uVar5 * 0x18 - 1;
          uVar16 = uVar16 | uVar16 >> 1;
          uVar16 = uVar16 | uVar16 >> 2;
          uVar16 = uVar16 | uVar16 >> 4;
          uVar16 = uVar16 | uVar16 >> 8;
          uVar16 = uVar16 | uVar16 >> 0x10;
          uVar16 = uVar16 | uVar16 >> 0x20;
          if ((long)uVar5 < (long)uVar6) {
            if (uVar16 != uVar10) goto LAB_0010504c;
            goto LAB_001042c5;
          }
          lVar17 = uVar16 + 1;
          goto LAB_00104d65;
        }
        CowData<Variant>::_unref(this_11);
        lVar14 = *(long *)(this + 0x10);
        this_11 = (CowData<Variant> *)(lVar14 + 0x198);
      }
    }
    CowData<Variant>::_copy_on_write(this_11);
    plVar13 = *(long **)(this + 0x158);
    *(undefined8 *)(lVar14 + 0x2d8) = *(undefined8 *)(lVar14 + 0x198);
    if (plVar13 == (long *)0x0) {
      lVar14 = *(long *)(this + 0x10);
    }
    else {
      do {
        lVar15 = *(long *)(this + 0x10);
        lVar18 = (long)(int)plVar13[5];
        lVar14 = *(long *)(lVar15 + 0x198);
        if (lVar18 < 0) {
          if (lVar14 == 0) {
LAB_0010469c:
            lVar15 = 0;
          }
          else {
LAB_00104400:
            lVar15 = *(long *)(lVar14 + -8);
          }
          goto LAB_00103c9b;
        }
        if (lVar14 == 0) goto LAB_0010469c;
        if (*(long *)(lVar14 + -8) <= lVar18) goto LAB_00104400;
        CowData<Variant>::_copy_on_write((CowData<Variant> *)(lVar15 + 0x198));
        Variant::operator=((Variant *)(*(long *)(lVar15 + 0x198) + lVar18 * 0x18),
                           (Variant *)(plVar13 + 2));
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
      lVar14 = *(long *)(this + 0x10);
    }
  }
  if (*(int *)(this + 0x180) == 0) {
    *(undefined8 *)(lVar14 + 0x2e0) = 0;
    *(undefined4 *)(lVar14 + 0x28c) = 0;
  }
  else {
    uVar6 = (ulong)*(int *)(this + 0x180);
    this_00 = (CowData<StringName> *)(lVar14 + 0x1a8);
    if ((long)uVar6 < 0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157);
      goto LAB_00104541;
    }
    lVar15 = *(long *)(lVar14 + 0x1a8);
    if (lVar15 == 0) {
      CowData<StringName>::_copy_on_write(this_00);
      uVar5 = 0;
LAB_00105319:
      uVar10 = uVar6 * 8 - 1;
      uVar10 = uVar10 >> 1 | uVar10;
      uVar10 = uVar10 >> 2 | uVar10;
      uVar10 = uVar10 >> 4 | uVar10;
      uVar10 = uVar10 >> 8 | uVar10;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar15 = (uVar10 >> 0x20 | uVar10) + 1;
      if ((long)uVar5 < (long)uVar6) {
LAB_00105246:
        if (uVar5 == 0) {
          puVar8 = (undefined8 *)Memory::alloc_static(lVar15 + 0x10,false);
          if (puVar8 == (undefined8 *)0x0) {
            _err_print_error("resize","./core/templates/cowdata.h",0x171);
          }
          else {
            puVar7 = puVar8 + 2;
            *puVar8 = 1;
            puVar8[1] = 0;
            *(undefined8 **)(lVar14 + 0x1a8) = puVar7;
LAB_0010451e:
            lVar15 = puVar7[-1];
            if (lVar15 < (long)uVar6) {
              memset(puVar7 + lVar15,0,(uVar6 - lVar15) * 8);
            }
            puVar7[-1] = uVar6;
          }
        }
        else {
          iVar12 = CowData<StringName>::_realloc(this_00,lVar15);
          if (iVar12 == 0) {
LAB_0010450e:
            puVar7 = *(undefined8 **)(lVar14 + 0x1a8);
            if (puVar7 == (undefined8 *)0x0) goto code_r0x0011718e;
            goto LAB_0010451e;
          }
        }
      }
      else {
        lVar17 = 0;
LAB_00105285:
        lVar18 = *(long *)(lVar14 + 0x1a8);
        uVar5 = uVar6;
        if (lVar18 == 0) {
code_r0x0011718e:
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        while (uVar5 < *(ulong *)(lVar18 + -8)) {
          if ((StringName::configured == '\0') || (*(long *)(lVar18 + uVar5 * 8) == 0)) {
            uVar5 = uVar5 + 1;
          }
          else {
            StringName::unref();
            lVar18 = *(long *)(lVar14 + 0x1a8);
            uVar5 = uVar5 + 1;
            if (lVar18 == 0) {
              lVar15 = write_end();
              return lVar15;
            }
          }
        }
        if (lVar15 != lVar17) {
          iVar12 = CowData<StringName>::_realloc(this_00,lVar15);
          if (iVar12 != 0) goto LAB_00104541;
          lVar18 = *(long *)(lVar14 + 0x1a8);
        }
        if (lVar18 == 0) {
          lVar15 = FUN_00117198();
          return lVar15;
        }
        *(ulong *)(lVar18 + -8) = uVar6;
      }
LAB_00104541:
      lVar14 = *(long *)(this + 0x10);
      lVar15 = *(long *)(lVar14 + 0x1a8);
      if (lVar15 == 0) {
        lVar18 = 0;
        goto LAB_0010502a;
      }
      lVar18 = *(long *)(lVar15 + -8);
      if (lVar18 < 1) goto LAB_0010502a;
    }
    else {
      uVar5 = *(ulong *)(lVar15 + -8);
      if (uVar6 != uVar5) {
        CowData<StringName>::_copy_on_write(this_00);
        if (uVar5 * 8 == 0) goto LAB_00105319;
        uVar10 = uVar6 * 8 - 1;
        uVar16 = uVar5 * 8 - 1;
        uVar10 = uVar10 >> 1 | uVar10;
        uVar10 = uVar10 >> 2 | uVar10;
        uVar10 = uVar10 >> 4 | uVar10;
        uVar10 = uVar10 >> 8 | uVar10;
        uVar10 = uVar10 >> 0x10 | uVar10;
        uVar10 = uVar10 >> 0x20 | uVar10;
        lVar15 = uVar10 + 1;
        uVar16 = uVar16 | uVar16 >> 1;
        uVar16 = uVar16 | uVar16 >> 2;
        uVar16 = uVar16 | uVar16 >> 4;
        uVar16 = uVar16 | uVar16 >> 8;
        uVar16 = uVar16 | uVar16 >> 0x10;
        uVar16 = uVar16 | uVar16 >> 0x20;
        if ((long)uVar5 < (long)uVar6) {
          if (uVar16 != uVar10) goto LAB_00105246;
          goto LAB_0010450e;
        }
        lVar17 = uVar16 + 1;
        goto LAB_00105285;
      }
    }
    lVar17 = *(long *)(this + 0x170);
    *(long *)(lVar14 + 0x2e0) = lVar15;
    if (lVar17 == 0) {
LAB_00105371:
      lVar15 = *(long *)(lVar14 + 0x1a8);
LAB_00105378:
      uVar3 = (undefined4)*(undefined8 *)(lVar15 + -8);
    }
    else {
      lVar15 = *(long *)(lVar17 + 0x10);
      if (lVar15 == *(long *)(this + 0x178)) goto LAB_00105371;
      do {
        lVar17 = lVar15;
        lVar15 = *(long *)(lVar17 + 0x10);
      } while (*(long *)(this + 0x178) != *(long *)(lVar17 + 0x10));
      do {
        lVar18 = (long)*(int *)(lVar17 + 0x38);
        lVar15 = *(long *)(lVar14 + 0x1a8);
        if (lVar18 < 0) goto LAB_00104689;
        if (lVar15 == 0) goto LAB_0010468e;
        if (*(long *)(lVar15 + -8) <= lVar18) goto LAB_00104618;
        CowData<StringName>::_copy_on_write((CowData<StringName> *)(lVar14 + 0x1a8));
        StringName::operator=
                  ((StringName *)(*(long *)(lVar14 + 0x1a8) + lVar18 * 8),
                   (StringName *)(lVar17 + 0x30));
        lVar17 = *(long *)(lVar17 + 0x20);
        lVar14 = *(long *)(this + 0x10);
      } while (lVar17 != 0);
      lVar15 = *(long *)(lVar14 + 0x1a8);
      uVar3 = 0;
      if (lVar15 != 0) goto LAB_00105378;
    }
    *(undefined4 *)(lVar14 + 0x28c) = uVar3;
  }
  lVar15 = *(long *)(this + 0x28);
  if ((lVar15 != 0) && (*(long *)(lVar15 + -8) != 0)) {
    lVar17 = *(long *)(lVar14 + 0x178);
    if (lVar15 == lVar17) {
LAB_00103de6:
      lVar15 = *(long *)(lVar17 + -8);
      if (0 < lVar15) {
        CowData<int>::_copy_on_write((CowData<int> *)(lVar14 + 0x178));
        *(undefined8 *)(lVar14 + 0x2c8) = *(undefined8 *)(lVar14 + 0x178);
        if (*(long *)(this + 0x28) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = (undefined4)*(undefined8 *)(*(long *)(this + 0x28) + -8);
        }
        lVar14 = *(long *)(this + 0x10);
        *(undefined4 *)(lVar14 + 0x280) = uVar3;
        goto LAB_00103e2e;
      }
    }
    else {
      CowData<int>::_ref((CowData<int> *)(lVar14 + 0x178),(CowData *)(this + 0x28));
      lVar14 = *(long *)(this + 0x10);
      lVar17 = *(long *)(lVar14 + 0x178);
      if (lVar17 != 0) goto LAB_00103de6;
      lVar15 = 0;
    }
    lVar18 = 0;
    goto LAB_00103c9b;
  }
  *(undefined8 *)(lVar14 + 0x2c8) = 0;
  *(undefined4 *)(lVar14 + 0x280) = 0;
LAB_00103e2e:
  lVar15 = *(long *)(lVar14 + 0x188);
  if ((lVar15 == 0) || (lVar18 = *(long *)(lVar15 + -8), lVar18 == 0)) {
    *(undefined4 *)(lVar14 + 0x284) = 0;
    lVar15 = 0;
  }
  else {
    *(int *)(lVar14 + 0x284) = (int)lVar18 + -1;
    if (lVar18 < 1) {
LAB_0010502a:
      lVar14 = 0;
LAB_00103c43:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar14,lVar18,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  iVar12 = *(int *)(this + 0x1a8);
  lVar17 = (long)iVar12;
  *(long *)(lVar14 + 0x2d0) = lVar15;
  if (iVar12 == 0) {
    *(undefined4 *)(lVar14 + 0x290) = 0;
    *(undefined8 *)(lVar14 + 0x2e8) = 0;
  }
  else {
    this_01 = (CowData<void(*)(Variant_const*,Variant_const*,Variant*)> *)(lVar14 + 0x1b8);
    if (lVar17 < 0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157);
LAB_00104792:
      lVar14 = *(long *)(this + 0x10);
      lVar15 = *(long *)(lVar14 + 0x1b8);
      if (lVar15 != 0) goto LAB_001047a9;
      uVar3 = 0;
    }
    else {
      lVar15 = *(long *)(lVar14 + 0x1b8);
      if (lVar15 == 0) {
        lVar18 = 0;
        CowData<void(*)(Variant_const*,Variant_const*,Variant*)>::_copy_on_write(this_01);
LAB_0010560b:
        uVar6 = lVar17 * 8 - 1;
        uVar6 = uVar6 | uVar6 >> 1;
        uVar6 = uVar6 >> 2 | uVar6;
        uVar6 = uVar6 | uVar6 >> 4;
        uVar6 = uVar6 >> 8 | uVar6;
        uVar6 = uVar6 | uVar6 >> 0x10;
        lVar15 = (uVar6 >> 0x20 | uVar6) + 1;
        if (lVar18 < lVar17) {
LAB_001055a7:
          if (lVar18 == 0) {
            puVar8 = (undefined8 *)Memory::alloc_static(lVar15 + 0x10,false);
            if (puVar8 == (undefined8 *)0x0) {
              _err_print_error("resize","./core/templates/cowdata.h",0x171);
            }
            else {
              puVar7 = puVar8 + 2;
              *puVar8 = 1;
              puVar8[1] = 0;
              *(undefined8 **)(lVar14 + 0x1b8) = puVar7;
LAB_0010478e:
              puVar7[-1] = lVar17;
            }
          }
          else {
            iVar12 = CowData<void(*)(Variant_const*,Variant_const*,Variant*)>::_realloc
                               (this_01,lVar15);
            if (iVar12 == 0) {
LAB_0010477e:
              puVar7 = *(undefined8 **)(lVar14 + 0x1b8);
              if (puVar7 == (undefined8 *)0x0) goto code_r0x00117198;
              goto LAB_0010478e;
            }
          }
        }
        else {
LAB_0010565b:
          iVar12 = CowData<void(*)(Variant_const*,Variant_const*,Variant*)>::_realloc
                             (this_01,lVar15);
          if (iVar12 == 0) goto LAB_001055e7;
        }
        goto LAB_00104792;
      }
      lVar18 = *(long *)(lVar15 + -8);
      if (lVar17 != lVar18) {
        CowData<void(*)(Variant_const*,Variant_const*,Variant*)>::_copy_on_write(this_01);
        if (lVar18 * 8 == 0) goto LAB_0010560b;
        uVar6 = lVar17 * 8 - 1;
        uVar5 = lVar18 * 8 - 1;
        uVar6 = uVar6 >> 1 | uVar6;
        uVar6 = uVar6 >> 2 | uVar6;
        uVar6 = uVar6 >> 4 | uVar6;
        uVar6 = uVar6 >> 8 | uVar6;
        uVar6 = uVar6 >> 0x10 | uVar6;
        uVar6 = uVar6 | uVar6 >> 0x20;
        lVar15 = uVar6 + 1;
        uVar5 = uVar5 | uVar5 >> 1;
        uVar5 = uVar5 | uVar5 >> 2;
        uVar5 = uVar5 | uVar5 >> 4;
        uVar5 = uVar5 | uVar5 >> 8;
        uVar5 = uVar5 | uVar5 >> 0x10;
        uVar5 = uVar5 | uVar5 >> 0x20;
        if (lVar18 < lVar17) {
          if (uVar5 != uVar6) goto LAB_001055a7;
          goto LAB_0010477e;
        }
        if (uVar5 != uVar6) goto LAB_0010565b;
LAB_001055e7:
        if (*(long *)(lVar14 + 0x1b8) == 0) {
          lVar15 = FUN_00117198();
          return lVar15;
        }
        *(long *)(*(long *)(lVar14 + 0x1b8) + -8) = lVar17;
        goto LAB_00104792;
      }
LAB_001047a9:
      uVar3 = (undefined4)*(undefined8 *)(lVar15 + -8);
    }
    *(long *)(lVar14 + 0x2e8) = lVar15;
    lVar15 = *(long *)(this + 0x198);
    *(undefined4 *)(lVar14 + 0x290) = uVar3;
    if (lVar15 != 0) {
      lVar15 = *(long *)(lVar15 + 0x10);
      if (lVar15 != *(long *)(this + 0x1a0)) {
        do {
          lVar17 = lVar15;
          lVar15 = *(long *)(lVar17 + 0x10);
        } while (*(long *)(this + 0x1a0) != *(long *)(lVar17 + 0x10));
        do {
          lVar18 = (long)*(int *)(lVar17 + 0x38);
          uVar11 = *(undefined8 *)(lVar17 + 0x30);
          lVar15 = *(long *)(lVar14 + 0x1b8);
          if (lVar18 < 0) goto LAB_00104689;
          if (lVar15 == 0) goto LAB_0010468e;
          if (*(long *)(lVar15 + -8) <= lVar18) goto LAB_00104618;
          CowData<void(*)(Variant_const*,Variant_const*,Variant*)>::_copy_on_write
                    ((CowData<void(*)(Variant_const*,Variant_const*,Variant*)> *)(lVar14 + 0x1b8));
          plVar13 = (long *)(lVar14 + 0x1b8);
          lVar17 = *(long *)(lVar17 + 0x20);
          lVar14 = *(long *)(this + 0x10);
          *(undefined8 *)(*plVar13 + lVar18 * 8) = uVar11;
        } while (lVar17 != 0);
      }
    }
  }
  lVar15 = (long)*(int *)(this + 0x1c0);
  if (*(int *)(this + 0x1c0) == 0) {
    *(undefined4 *)(lVar14 + 0x294) = 0;
    *(undefined8 *)(lVar14 + 0x2f0) = 0;
  }
  else {
    this_02 = (CowData<void(*)(Variant*,Variant_const*)> *)(lVar14 + 0x1c8);
    if (lVar15 < 0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157);
LAB_00104932:
      lVar14 = *(long *)(this + 0x10);
      lVar17 = *(long *)(lVar14 + 0x1c8);
      if (lVar17 != 0) goto LAB_00104949;
      uVar3 = 0;
    }
    else {
      lVar17 = *(long *)(lVar14 + 0x1c8);
      if (lVar17 == 0) {
        lVar18 = 0;
        CowData<void(*)(Variant*,Variant_const*)>::_copy_on_write(this_02);
LAB_00105757:
        uVar6 = lVar15 * 8 - 1;
        uVar6 = uVar6 | uVar6 >> 1;
        uVar6 = uVar6 >> 2 | uVar6;
        uVar6 = uVar6 | uVar6 >> 4;
        uVar6 = uVar6 >> 8 | uVar6;
        uVar6 = uVar6 | uVar6 >> 0x10;
        lVar17 = (uVar6 >> 0x20 | uVar6) + 1;
        if (lVar18 < lVar15) {
LAB_00105e85:
          if (lVar18 == 0) {
            puVar8 = (undefined8 *)Memory::alloc_static(lVar17 + 0x10,false);
            if (puVar8 == (undefined8 *)0x0) {
              _err_print_error("resize","./core/templates/cowdata.h",0x171);
            }
            else {
              puVar7 = puVar8 + 2;
              *puVar8 = 1;
              puVar8[1] = 0;
              *(undefined8 **)(lVar14 + 0x1c8) = puVar7;
LAB_0010492e:
              puVar7[-1] = lVar15;
            }
          }
          else {
            iVar12 = CowData<void(*)(Variant*,Variant_const*)>::_realloc(this_02,lVar17);
            if (iVar12 == 0) {
LAB_0010491e:
              puVar7 = *(undefined8 **)(lVar14 + 0x1c8);
              if (puVar7 == (undefined8 *)0x0) goto code_r0x00117198;
              goto LAB_0010492e;
            }
          }
        }
        else {
LAB_001057a7:
          iVar12 = CowData<void(*)(Variant*,Variant_const*)>::_realloc(this_02,lVar17);
          if (iVar12 == 0) goto LAB_001057b7;
        }
        goto LAB_00104932;
      }
      lVar18 = *(long *)(lVar17 + -8);
      if (lVar15 != lVar18) {
        CowData<void(*)(Variant*,Variant_const*)>::_copy_on_write(this_02);
        if (lVar18 * 8 == 0) goto LAB_00105757;
        uVar6 = lVar15 * 8 - 1;
        uVar5 = lVar18 * 8 - 1;
        uVar6 = uVar6 >> 1 | uVar6;
        uVar6 = uVar6 >> 2 | uVar6;
        uVar6 = uVar6 >> 4 | uVar6;
        uVar6 = uVar6 >> 8 | uVar6;
        uVar6 = uVar6 >> 0x10 | uVar6;
        uVar6 = uVar6 | uVar6 >> 0x20;
        lVar17 = uVar6 + 1;
        uVar5 = uVar5 | uVar5 >> 1;
        uVar5 = uVar5 | uVar5 >> 2;
        uVar5 = uVar5 | uVar5 >> 4;
        uVar5 = uVar5 | uVar5 >> 8;
        uVar5 = uVar5 | uVar5 >> 0x10;
        uVar5 = uVar5 | uVar5 >> 0x20;
        if (lVar18 < lVar15) {
          if (uVar5 != uVar6) goto LAB_00105e85;
          goto LAB_0010491e;
        }
        if (uVar5 != uVar6) goto LAB_001057a7;
LAB_001057b7:
        if (*(long *)(lVar14 + 0x1c8) == 0) {
          lVar15 = FUN_00117198();
          return lVar15;
        }
        *(long *)(*(long *)(lVar14 + 0x1c8) + -8) = lVar15;
        goto LAB_00104932;
      }
LAB_00104949:
      uVar3 = (undefined4)*(undefined8 *)(lVar17 + -8);
    }
    *(long *)(lVar14 + 0x2f0) = lVar17;
    lVar15 = *(long *)(this + 0x1b0);
    *(undefined4 *)(lVar14 + 0x294) = uVar3;
    if (lVar15 != 0) {
      lVar15 = *(long *)(lVar15 + 0x10);
      if (lVar15 != *(long *)(this + 0x1b8)) {
        do {
          lVar17 = lVar15;
          lVar15 = *(long *)(lVar17 + 0x10);
        } while (*(long *)(this + 0x1b8) != *(long *)(lVar17 + 0x10));
        do {
          lVar18 = (long)*(int *)(lVar17 + 0x38);
          uVar11 = *(undefined8 *)(lVar17 + 0x30);
          lVar15 = *(long *)(lVar14 + 0x1c8);
          if (lVar18 < 0) goto LAB_00104689;
          if (lVar15 == 0) goto LAB_0010468e;
          if (*(long *)(lVar15 + -8) <= lVar18) goto LAB_00104618;
          CowData<void(*)(Variant*,Variant_const*)>::_copy_on_write
                    ((CowData<void(*)(Variant*,Variant_const*)> *)(lVar14 + 0x1c8));
          plVar13 = (long *)(lVar14 + 0x1c8);
          lVar17 = *(long *)(lVar17 + 0x20);
          lVar14 = *(long *)(this + 0x10);
          *(undefined8 *)(*plVar13 + lVar18 * 8) = uVar11;
        } while (lVar17 != 0);
      }
    }
  }
  lVar15 = (long)*(int *)(this + 0x1d8);
  if (*(int *)(this + 0x1d8) == 0) {
    *(undefined4 *)(lVar14 + 0x298) = 0;
    *(undefined8 *)(lVar14 + 0x2f8) = 0;
  }
  else {
    this_03 = (CowData<void(*)(Variant_const*,Variant*)> *)(lVar14 + 0x1d8);
    if (lVar15 < 0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157);
LAB_00104ad2:
      lVar14 = *(long *)(this + 0x10);
      lVar17 = *(long *)(lVar14 + 0x1d8);
      if (lVar17 != 0) goto LAB_00104ae9;
      uVar3 = 0;
    }
    else {
      lVar17 = *(long *)(lVar14 + 0x1d8);
      if (lVar17 == 0) {
        lVar18 = 0;
        CowData<void(*)(Variant_const*,Variant*)>::_copy_on_write(this_03);
LAB_001056a9:
        uVar6 = lVar15 * 8 - 1;
        uVar6 = uVar6 | uVar6 >> 1;
        uVar6 = uVar6 | uVar6 >> 2;
        uVar6 = uVar6 | uVar6 >> 4;
        uVar6 = uVar6 | uVar6 >> 8;
        uVar6 = uVar6 | uVar6 >> 0x10;
        lVar17 = (uVar6 >> 0x20 | uVar6) + 1;
        if (lVar18 < lVar15) {
LAB_00105eea:
          if (lVar18 == 0) {
            puVar8 = (undefined8 *)Memory::alloc_static(lVar17 + 0x10,false);
            if (puVar8 == (undefined8 *)0x0) {
              _err_print_error("resize","./core/templates/cowdata.h",0x171);
            }
            else {
              puVar7 = puVar8 + 2;
              *puVar8 = 1;
              puVar8[1] = 0;
              *(undefined8 **)(lVar14 + 0x1d8) = puVar7;
LAB_00104ace:
              puVar7[-1] = lVar15;
            }
          }
          else {
            iVar12 = CowData<void(*)(Variant_const*,Variant*)>::_realloc(this_03,lVar17);
            if (iVar12 == 0) {
LAB_00104abe:
              puVar7 = *(undefined8 **)(lVar14 + 0x1d8);
              if (puVar7 == (undefined8 *)0x0) {
code_r0x00117198:
                _DAT_00000000 = 0;
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              goto LAB_00104ace;
            }
          }
        }
        else {
LAB_001056f9:
          iVar12 = CowData<void(*)(Variant_const*,Variant*)>::_realloc(this_03,lVar17);
          if (iVar12 == 0) goto LAB_00105709;
        }
        goto LAB_00104ad2;
      }
      lVar18 = *(long *)(lVar17 + -8);
      if (lVar15 != lVar18) {
        CowData<void(*)(Variant_const*,Variant*)>::_copy_on_write(this_03);
        if (lVar18 * 8 == 0) goto LAB_001056a9;
        uVar6 = lVar15 * 8 - 1;
        uVar5 = lVar18 * 8 - 1;
        uVar6 = uVar6 >> 1 | uVar6;
        uVar6 = uVar6 >> 2 | uVar6;
        uVar6 = uVar6 >> 4 | uVar6;
        uVar6 = uVar6 >> 8 | uVar6;
        uVar6 = uVar6 >> 0x10 | uVar6;
        uVar6 = uVar6 | uVar6 >> 0x20;
        lVar17 = uVar6 + 1;
        uVar5 = uVar5 | uVar5 >> 1;
        uVar5 = uVar5 | uVar5 >> 2;
        uVar5 = uVar5 | uVar5 >> 4;
        uVar5 = uVar5 | uVar5 >> 8;
        uVar5 = uVar5 | uVar5 >> 0x10;
        uVar5 = uVar5 | uVar5 >> 0x20;
        if (lVar18 < lVar15) {
          if (uVar5 != uVar6) goto LAB_00105eea;
          goto LAB_00104abe;
        }
        if (uVar5 != uVar6) goto LAB_001056f9;
LAB_00105709:
        if (*(long *)(lVar14 + 0x1d8) == 0) {
          lVar15 = FUN_00117198();
          return lVar15;
        }
        *(long *)(*(long *)(lVar14 + 0x1d8) + -8) = lVar15;
        goto LAB_00104ad2;
      }
LAB_00104ae9:
      uVar3 = (undefined4)*(undefined8 *)(lVar17 + -8);
    }
    *(long *)(lVar14 + 0x2f8) = lVar17;
    lVar15 = *(long *)(this + 0x1c8);
    *(undefined4 *)(lVar14 + 0x298) = uVar3;
    if (lVar15 != 0) {
      lVar15 = *(long *)(lVar15 + 0x10);
      if (lVar15 != *(long *)(this + 0x1d0)) {
        do {
          lVar17 = lVar15;
          lVar15 = *(long *)(lVar17 + 0x10);
        } while (*(long *)(this + 0x1d0) != *(long *)(lVar17 + 0x10));
        do {
          lVar18 = (long)*(int *)(lVar17 + 0x38);
          uVar11 = *(undefined8 *)(lVar17 + 0x30);
          lVar15 = *(long *)(lVar14 + 0x1d8);
          if (lVar18 < 0) goto LAB_00104689;
          if (lVar15 == 0) goto LAB_0010468e;
          if (*(long *)(lVar15 + -8) <= lVar18) goto LAB_00104618;
          CowData<void(*)(Variant_const*,Variant*)>::_copy_on_write
                    ((CowData<void(*)(Variant_const*,Variant*)> *)(lVar14 + 0x1d8));
          plVar13 = (long *)(lVar14 + 0x1d8);
          lVar17 = *(long *)(lVar17 + 0x20);
          lVar14 = *(long *)(this + 0x10);
          *(undefined8 *)(*plVar13 + lVar18 * 8) = uVar11;
        } while (lVar17 != 0);
      }
    }
  }
  lVar15 = (long)*(int *)(this + 0x1f0);
  if (*(int *)(this + 0x1f0) == 0) {
    *(undefined4 *)(lVar14 + 0x29c) = 0;
    *(undefined8 *)(lVar14 + 0x300) = 0;
  }
  else {
    this_04 = (CowData<void(*)(Variant*,Variant_const*,Variant_const*,bool*)> *)(lVar14 + 0x1e8);
    if (lVar15 < 0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157);
LAB_00104cb1:
      lVar14 = *(long *)(this + 0x10);
      lVar17 = *(long *)(lVar14 + 0x1e8);
      if (lVar17 != 0) goto LAB_00104cc8;
      uVar3 = 0;
    }
    else {
      lVar17 = *(long *)(lVar14 + 0x1e8);
      if (lVar17 == 0) {
        lVar18 = 0;
        CowData<void(*)(Variant*,Variant_const*,Variant_const*,bool*)>::_copy_on_write(this_04);
        lVar17 = 0;
LAB_00104c1e:
        uVar6 = lVar15 * 8 - 1;
        uVar6 = uVar6 | uVar6 >> 1;
        uVar6 = uVar6 | uVar6 >> 2;
        uVar6 = uVar6 | uVar6 >> 4;
        uVar6 = uVar6 | uVar6 >> 8;
        uVar6 = uVar6 | uVar6 >> 0x10;
        uVar6 = uVar6 | uVar6 >> 0x20;
        lVar1 = uVar6 + 1;
        if (lVar18 < lVar15) {
          if (lVar1 == lVar17) {
LAB_00105813:
            puVar8 = *(undefined8 **)(lVar14 + 0x1e8);
            if (puVar8 == (undefined8 *)0x0) {
              lVar15 = FUN_00117198();
              return lVar15;
            }
LAB_00104cad:
            puVar8[-1] = lVar15;
          }
          else if (lVar18 == 0) {
            puVar7 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
            if (puVar7 != (undefined8 *)0x0) {
              puVar8 = puVar7 + 2;
              *puVar7 = 1;
              puVar7[1] = 0;
              *(undefined8 **)(lVar14 + 0x1e8) = puVar8;
              goto LAB_00104cad;
            }
            _err_print_error("resize","./core/templates/cowdata.h",0x171);
          }
          else {
            iVar12 = CowData<void(*)(Variant*,Variant_const*,Variant_const*,bool*)>::_realloc
                               (this_04,lVar1);
            if (iVar12 == 0) goto LAB_00105813;
          }
        }
        else if ((lVar1 == lVar17) ||
                (iVar12 = CowData<void(*)(Variant*,Variant_const*,Variant_const*,bool*)>::_realloc
                                    (this_04,lVar1), iVar12 == 0)) {
          if (*(long *)(lVar14 + 0x1e8) == 0) {
            lVar15 = FUN_00117198();
            return lVar15;
          }
          *(long *)(*(long *)(lVar14 + 0x1e8) + -8) = lVar15;
        }
        goto LAB_00104cb1;
      }
      lVar18 = *(long *)(lVar17 + -8);
      if (lVar15 != lVar18) {
        CowData<void(*)(Variant*,Variant_const*,Variant_const*,bool*)>::_copy_on_write(this_04);
        lVar17 = lVar18 * 8;
        if (lVar17 != 0) {
          uVar6 = lVar17 - 1U | lVar17 - 1U >> 1;
          uVar6 = uVar6 | uVar6 >> 2;
          uVar6 = uVar6 | uVar6 >> 4;
          uVar6 = uVar6 | uVar6 >> 8;
          uVar6 = uVar6 | uVar6 >> 0x10;
          lVar17 = (uVar6 | uVar6 >> 0x20) + 1;
        }
        goto LAB_00104c1e;
      }
LAB_00104cc8:
      uVar3 = (undefined4)*(undefined8 *)(lVar17 + -8);
    }
    *(long *)(lVar14 + 0x300) = lVar17;
    lVar15 = *(long *)(this + 0x1e0);
    *(undefined4 *)(lVar14 + 0x29c) = uVar3;
    if (lVar15 != 0) {
      lVar15 = *(long *)(lVar15 + 0x10);
      if (lVar15 != *(long *)(this + 0x1e8)) {
        do {
          lVar17 = lVar15;
          lVar15 = *(long *)(lVar17 + 0x10);
        } while (*(long *)(this + 0x1e8) != *(long *)(lVar17 + 0x10));
        while( true ) {
          lVar18 = (long)*(int *)(lVar17 + 0x38);
          uVar11 = *(undefined8 *)(lVar17 + 0x30);
          lVar15 = *(long *)(lVar14 + 0x1e8);
          if (lVar18 < 0) break;
          if (lVar15 == 0) goto LAB_0010468e;
          if (*(long *)(lVar15 + -8) <= lVar18) goto LAB_00104618;
          CowData<void(*)(Variant*,Variant_const*,Variant_const*,bool*)>::_copy_on_write
                    ((CowData<void(*)(Variant*,Variant_const*,Variant_const*,bool*)> *)
                     (lVar14 + 0x1e8));
          lVar17 = *(long *)(lVar17 + 0x20);
          *(undefined8 *)(*(long *)(lVar14 + 0x1e8) + lVar18 * 8) = uVar11;
          if (lVar17 == 0) {
            lVar14 = *(long *)(this + 0x10);
            goto LAB_00103ef6;
          }
          lVar14 = *(long *)(this + 0x10);
        }
LAB_00104689:
        if (lVar15 == 0) {
LAB_0010468e:
          lVar15 = 0;
        }
        else {
LAB_00104618:
          lVar15 = *(long *)(lVar15 + -8);
        }
LAB_00103c9b:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar18,lVar15,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
  }
LAB_00103ef6:
  lVar15 = (long)*(int *)(this + 0x208);
  if (*(int *)(this + 0x208) == 0) {
    *(undefined4 *)(lVar14 + 0x2a0) = 0;
    *(undefined8 *)(lVar14 + 0x308) = 0;
  }
  else {
    this_05 = (CowData<void(*)(Variant_const*,Variant_const*,Variant*,bool*)> *)(lVar14 + 0x1f8);
    if (lVar15 < 0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157);
LAB_00104f7b:
      lVar14 = *(long *)(this + 0x10);
      lVar17 = *(long *)(lVar14 + 0x1f8);
      if (lVar17 != 0) goto LAB_00104f8f;
      uVar3 = 0;
    }
    else {
      lVar17 = *(long *)(lVar14 + 0x1f8);
      if (lVar17 == 0) {
        lVar18 = 0;
        CowData<void(*)(Variant_const*,Variant_const*,Variant*,bool*)>::_copy_on_write(this_05);
        lVar17 = 0;
LAB_00104ee8:
        uVar6 = lVar15 * 8 - 1;
        uVar6 = uVar6 | uVar6 >> 1;
        uVar6 = uVar6 | uVar6 >> 2;
        uVar6 = uVar6 | uVar6 >> 4;
        uVar6 = uVar6 | uVar6 >> 8;
        uVar6 = uVar6 | uVar6 >> 0x10;
        uVar6 = uVar6 | uVar6 >> 0x20;
        lVar1 = uVar6 + 1;
        if (lVar18 < lVar15) {
          if (lVar1 == lVar17) {
LAB_0010628b:
            puVar8 = *(undefined8 **)(lVar14 + 0x1f8);
            if (puVar8 == (undefined8 *)0x0) {
              lVar15 = FUN_00117198();
              return lVar15;
            }
LAB_00104f77:
            puVar8[-1] = lVar15;
          }
          else if (lVar18 == 0) {
            puVar7 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
            if (puVar7 != (undefined8 *)0x0) {
              puVar8 = puVar7 + 2;
              *puVar7 = 1;
              puVar7[1] = 0;
              *(undefined8 **)(lVar14 + 0x1f8) = puVar8;
              goto LAB_00104f77;
            }
            _err_print_error("resize","./core/templates/cowdata.h",0x171);
          }
          else {
            iVar12 = CowData<void(*)(Variant_const*,Variant_const*,Variant*,bool*)>::_realloc
                               (this_05,lVar1);
            if (iVar12 == 0) goto LAB_0010628b;
          }
        }
        else if ((lVar1 == lVar17) ||
                (iVar12 = CowData<void(*)(Variant_const*,Variant_const*,Variant*,bool*)>::_realloc
                                    (this_05,lVar1), iVar12 == 0)) {
          if (*(long *)(lVar14 + 0x1f8) == 0) {
            lVar15 = FUN_00117198();
            return lVar15;
          }
          *(long *)(*(long *)(lVar14 + 0x1f8) + -8) = lVar15;
        }
        goto LAB_00104f7b;
      }
      lVar18 = *(long *)(lVar17 + -8);
      if (lVar15 != lVar18) {
        CowData<void(*)(Variant_const*,Variant_const*,Variant*,bool*)>::_copy_on_write(this_05);
        lVar17 = lVar18 * 8;
        if (lVar17 != 0) {
          uVar6 = lVar17 - 1U | lVar17 - 1U >> 1;
          uVar6 = uVar6 | uVar6 >> 2;
          uVar6 = uVar6 | uVar6 >> 4;
          uVar6 = uVar6 | uVar6 >> 8;
          uVar6 = uVar6 | uVar6 >> 0x10;
          lVar17 = (uVar6 | uVar6 >> 0x20) + 1;
        }
        goto LAB_00104ee8;
      }
LAB_00104f8f:
      uVar3 = (undefined4)*(undefined8 *)(lVar17 + -8);
    }
    *(long *)(lVar14 + 0x308) = lVar17;
    lVar15 = *(long *)(this + 0x1f8);
    *(undefined4 *)(lVar14 + 0x2a0) = uVar3;
    if (lVar15 != 0) {
      lVar15 = *(long *)(lVar15 + 0x10);
      if (lVar15 != *(long *)(this + 0x200)) {
        do {
          lVar17 = lVar15;
          lVar15 = *(long *)(lVar17 + 0x10);
        } while (*(long *)(this + 0x200) != *(long *)(lVar17 + 0x10));
        do {
          lVar18 = (long)*(int *)(lVar17 + 0x38);
          uVar11 = *(undefined8 *)(lVar17 + 0x30);
          lVar15 = *(long *)(lVar14 + 0x1f8);
          if (lVar18 < 0) goto LAB_00104689;
          if (lVar15 == 0) goto LAB_0010468e;
          if (*(long *)(lVar15 + -8) <= lVar18) goto LAB_00104618;
          CowData<void(*)(Variant_const*,Variant_const*,Variant*,bool*)>::_copy_on_write
                    ((CowData<void(*)(Variant_const*,Variant_const*,Variant*,bool*)> *)
                     (lVar14 + 0x1f8));
          plVar13 = (long *)(lVar14 + 0x1f8);
          lVar17 = *(long *)(lVar17 + 0x20);
          lVar14 = *(long *)(this + 0x10);
          *(undefined8 *)(*plVar13 + lVar18 * 8) = uVar11;
        } while (lVar17 != 0);
      }
    }
  }
  lVar15 = (long)*(int *)(this + 0x220);
  if (*(int *)(this + 0x220) == 0) {
    *(undefined4 *)(lVar14 + 0x2a4) = 0;
    *(undefined8 *)(lVar14 + 0x310) = 0;
  }
  else {
    this_06 = (CowData<void(*)(Variant*,long,Variant_const*,bool*)> *)(lVar14 + 0x208);
    if (lVar15 < 0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157);
LAB_0010519a:
      lVar14 = *(long *)(this + 0x10);
      lVar17 = *(long *)(lVar14 + 0x208);
      if (lVar17 != 0) goto LAB_001051ae;
      uVar3 = 0;
    }
    else {
      lVar17 = *(long *)(lVar14 + 0x208);
      if (lVar17 == 0) {
        lVar18 = 0;
        CowData<void(*)(Variant*,long,Variant_const*,bool*)>::_copy_on_write(this_06);
        lVar17 = 0;
LAB_00105107:
        uVar6 = lVar15 * 8 - 1;
        uVar6 = uVar6 | uVar6 >> 1;
        uVar6 = uVar6 | uVar6 >> 2;
        uVar6 = uVar6 | uVar6 >> 4;
        uVar6 = uVar6 | uVar6 >> 8;
        uVar6 = uVar6 | uVar6 >> 0x10;
        uVar6 = uVar6 | uVar6 >> 0x20;
        lVar1 = uVar6 + 1;
        if (lVar18 < lVar15) {
          if (lVar1 == lVar17) {
LAB_00106110:
            puVar8 = *(undefined8 **)(lVar14 + 0x208);
            if (puVar8 == (undefined8 *)0x0) {
              lVar15 = FUN_00117198();
              return lVar15;
            }
LAB_00105196:
            puVar8[-1] = lVar15;
          }
          else if (lVar18 == 0) {
            puVar7 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
            if (puVar7 != (undefined8 *)0x0) {
              puVar8 = puVar7 + 2;
              *puVar7 = 1;
              puVar7[1] = 0;
              *(undefined8 **)(lVar14 + 0x208) = puVar8;
              goto LAB_00105196;
            }
            _err_print_error("resize","./core/templates/cowdata.h",0x171);
          }
          else {
            iVar12 = CowData<void(*)(Variant*,long,Variant_const*,bool*)>::_realloc(this_06,lVar1);
            if (iVar12 == 0) goto LAB_00106110;
          }
        }
        else if ((lVar1 == lVar17) ||
                (iVar12 = CowData<void(*)(Variant*,long,Variant_const*,bool*)>::_realloc
                                    (this_06,lVar1), iVar12 == 0)) {
          if (*(long *)(lVar14 + 0x208) == 0) {
            lVar15 = FUN_00117198();
            return lVar15;
          }
          *(long *)(*(long *)(lVar14 + 0x208) + -8) = lVar15;
        }
        goto LAB_0010519a;
      }
      lVar18 = *(long *)(lVar17 + -8);
      if (lVar15 != lVar18) {
        CowData<void(*)(Variant*,long,Variant_const*,bool*)>::_copy_on_write(this_06);
        lVar17 = lVar18 * 8;
        if (lVar17 != 0) {
          uVar6 = lVar17 - 1U | lVar17 - 1U >> 1;
          uVar6 = uVar6 | uVar6 >> 2;
          uVar6 = uVar6 | uVar6 >> 4;
          uVar6 = uVar6 | uVar6 >> 8;
          uVar6 = uVar6 | uVar6 >> 0x10;
          lVar17 = (uVar6 | uVar6 >> 0x20) + 1;
        }
        goto LAB_00105107;
      }
LAB_001051ae:
      uVar3 = (undefined4)*(undefined8 *)(lVar17 + -8);
    }
    *(long *)(lVar14 + 0x310) = lVar17;
    lVar15 = *(long *)(this + 0x210);
    *(undefined4 *)(lVar14 + 0x2a4) = uVar3;
    if (lVar15 != 0) {
      lVar15 = *(long *)(lVar15 + 0x10);
      if (lVar15 != *(long *)(this + 0x218)) {
        do {
          lVar17 = lVar15;
          lVar15 = *(long *)(lVar17 + 0x10);
        } while (*(long *)(this + 0x218) != *(long *)(lVar17 + 0x10));
        do {
          lVar18 = (long)*(int *)(lVar17 + 0x38);
          uVar11 = *(undefined8 *)(lVar17 + 0x30);
          lVar15 = *(long *)(lVar14 + 0x208);
          if (lVar18 < 0) goto LAB_00104689;
          if (lVar15 == 0) goto LAB_0010468e;
          if (*(long *)(lVar15 + -8) <= lVar18) goto LAB_00104618;
          CowData<void(*)(Variant*,long,Variant_const*,bool*)>::_copy_on_write
                    ((CowData<void(*)(Variant*,long,Variant_const*,bool*)> *)(lVar14 + 0x208));
          plVar13 = (long *)(lVar14 + 0x208);
          lVar17 = *(long *)(lVar17 + 0x20);
          lVar14 = *(long *)(this + 0x10);
          *(undefined8 *)(*plVar13 + lVar18 * 8) = uVar11;
        } while (lVar17 != 0);
      }
    }
  }
  lVar15 = (long)*(int *)(this + 0x238);
  if (*(int *)(this + 0x238) == 0) {
    *(undefined4 *)(lVar14 + 0x2a8) = 0;
    *(undefined8 *)(lVar14 + 0x318) = 0;
  }
  else {
    this_07 = (CowData<void(*)(Variant_const*,long,Variant*,bool*)> *)(lVar14 + 0x218);
    if (lVar15 < 0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157);
LAB_001054e3:
      lVar14 = *(long *)(this + 0x10);
      lVar17 = *(long *)(lVar14 + 0x218);
      if (lVar17 != 0) goto LAB_001054f7;
      uVar3 = 0;
    }
    else {
      lVar17 = *(long *)(lVar14 + 0x218);
      if (lVar17 == 0) {
        lVar18 = 0;
        CowData<void(*)(Variant_const*,long,Variant*,bool*)>::_copy_on_write(this_07);
        lVar17 = 0;
LAB_00105451:
        uVar6 = lVar15 * 8 - 1;
        uVar6 = uVar6 | uVar6 >> 1;
        uVar6 = uVar6 | uVar6 >> 2;
        uVar6 = uVar6 | uVar6 >> 4;
        uVar6 = uVar6 | uVar6 >> 8;
        uVar6 = uVar6 | uVar6 >> 0x10;
        uVar6 = uVar6 | uVar6 >> 0x20;
        lVar1 = uVar6 + 1;
        if (lVar18 < lVar15) {
          if (lVar1 == lVar17) {
LAB_001060b6:
            puVar8 = *(undefined8 **)(lVar14 + 0x218);
            if (puVar8 == (undefined8 *)0x0) {
              lVar15 = FUN_00117198();
              return lVar15;
            }
LAB_001054df:
            puVar8[-1] = lVar15;
          }
          else if (lVar18 == 0) {
            puVar7 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
            if (puVar7 != (undefined8 *)0x0) {
              puVar8 = puVar7 + 2;
              *puVar7 = 1;
              puVar7[1] = 0;
              *(undefined8 **)(lVar14 + 0x218) = puVar8;
              goto LAB_001054df;
            }
            _err_print_error("resize","./core/templates/cowdata.h",0x171);
          }
          else {
            iVar12 = CowData<void(*)(Variant_const*,long,Variant*,bool*)>::_realloc(this_07,lVar1);
            if (iVar12 == 0) goto LAB_001060b6;
          }
        }
        else if ((lVar1 == lVar17) ||
                (iVar12 = CowData<void(*)(Variant_const*,long,Variant*,bool*)>::_realloc
                                    (this_07,lVar1), iVar12 == 0)) {
          if (*(long *)(lVar14 + 0x218) == 0) {
            lVar15 = FUN_00117198();
            return lVar15;
          }
          *(long *)(*(long *)(lVar14 + 0x218) + -8) = lVar15;
        }
        goto LAB_001054e3;
      }
      lVar18 = *(long *)(lVar17 + -8);
      if (lVar15 != lVar18) {
        CowData<void(*)(Variant_const*,long,Variant*,bool*)>::_copy_on_write(this_07);
        lVar17 = lVar18 * 8;
        if (lVar17 != 0) {
          uVar6 = lVar17 - 1U | lVar17 - 1U >> 1;
          uVar6 = uVar6 | uVar6 >> 2;
          uVar6 = uVar6 | uVar6 >> 4;
          uVar6 = uVar6 | uVar6 >> 8;
          uVar6 = uVar6 | uVar6 >> 0x10;
          lVar17 = (uVar6 | uVar6 >> 0x20) + 1;
        }
        goto LAB_00105451;
      }
LAB_001054f7:
      uVar3 = (undefined4)*(undefined8 *)(lVar17 + -8);
    }
    *(long *)(lVar14 + 0x318) = lVar17;
    lVar15 = *(long *)(this + 0x228);
    *(undefined4 *)(lVar14 + 0x2a8) = uVar3;
    if (lVar15 != 0) {
      lVar15 = *(long *)(lVar15 + 0x10);
      if (lVar15 != *(long *)(this + 0x230)) {
        do {
          lVar17 = lVar15;
          lVar15 = *(long *)(lVar17 + 0x10);
        } while (*(long *)(this + 0x230) != *(long *)(lVar17 + 0x10));
        do {
          lVar18 = (long)*(int *)(lVar17 + 0x38);
          uVar11 = *(undefined8 *)(lVar17 + 0x30);
          lVar15 = *(long *)(lVar14 + 0x218);
          if (lVar18 < 0) goto LAB_00104689;
          if (lVar15 == 0) goto LAB_0010468e;
          if (*(long *)(lVar15 + -8) <= lVar18) goto LAB_00104618;
          CowData<void(*)(Variant_const*,long,Variant*,bool*)>::_copy_on_write
                    ((CowData<void(*)(Variant_const*,long,Variant*,bool*)> *)(lVar14 + 0x218));
          plVar13 = (long *)(lVar14 + 0x218);
          lVar17 = *(long *)(lVar17 + 0x20);
          lVar14 = *(long *)(this + 0x10);
          *(undefined8 *)(*plVar13 + lVar18 * 8) = uVar11;
        } while (lVar17 != 0);
      }
    }
  }
  iVar12 = *(int *)(this + 0x250);
  if (iVar12 == 0) {
    *(undefined8 *)(lVar14 + 800) = 0;
    *(undefined4 *)(lVar14 + 0x2ac) = 0;
  }
  else {
    lVar15 = (long)iVar12;
    this_09 = (CowData<void(*)(Variant*,Variant_const**,int,Variant*)> *)(lVar14 + 0x228);
    if (lVar15 < 0) {
      uVar11 = 0x157;
LAB_00106161:
      _err_print_error("resize","./core/templates/cowdata.h",uVar11);
      lVar14 = *(long *)(this + 0x10);
      iVar12 = *(int *)(this + 0x250);
    }
    else if (*(long *)(lVar14 + 0x228) == 0) {
      lVar18 = 0;
      CowData<void(*)(Variant*,Variant_const**,int,Variant*)>::_copy_on_write(this_09);
      lVar17 = 0;
LAB_00105af7:
      uVar6 = lVar15 * 8 - 1;
      uVar6 = uVar6 | uVar6 >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      uVar6 = uVar6 | uVar6 >> 0x20;
      lVar1 = uVar6 + 1;
      if (lVar18 < lVar15) {
        if (lVar1 == lVar17) {
LAB_0010657f:
          puVar8 = *(undefined8 **)(lVar14 + 0x228);
          if (puVar8 == (undefined8 *)0x0) {
            lVar15 = FUN_00117198();
            return lVar15;
          }
        }
        else {
          if (lVar18 != 0) {
            iVar12 = CowData<void(*)(Variant*,Variant_const**,int,Variant*)>::_realloc
                               (this_09,lVar1);
            if (iVar12 != 0) goto LAB_00106638;
            goto LAB_0010657f;
          }
          puVar7 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
          if (puVar7 == (undefined8 *)0x0) {
            uVar11 = 0x171;
            goto LAB_00106161;
          }
          puVar8 = puVar7 + 2;
          *puVar7 = 1;
          puVar7[1] = 0;
          *(undefined8 **)(lVar14 + 0x228) = puVar8;
        }
        lVar14 = *(long *)(this + 0x10);
        iVar12 = *(int *)(this + 0x250);
        puVar8[-1] = lVar15;
      }
      else {
        if ((lVar1 == lVar17) ||
           (iVar12 = CowData<void(*)(Variant*,Variant_const**,int,Variant*)>::_realloc
                               (this_09,lVar1), iVar12 == 0)) {
          if (*(long *)(lVar14 + 0x228) == 0) {
            lVar15 = FUN_00117198();
            return lVar15;
          }
          *(long *)(*(long *)(lVar14 + 0x228) + -8) = lVar15;
        }
LAB_00106638:
        lVar14 = *(long *)(this + 0x10);
        iVar12 = *(int *)(this + 0x250);
      }
    }
    else {
      lVar18 = *(long *)(*(long *)(lVar14 + 0x228) + -8);
      if (lVar15 != lVar18) {
        CowData<void(*)(Variant*,Variant_const**,int,Variant*)>::_copy_on_write(this_09);
        lVar17 = lVar18 * 8;
        if (lVar17 != 0) {
          uVar6 = lVar17 - 1U | lVar17 - 1U >> 1;
          uVar6 = uVar6 | uVar6 >> 2;
          uVar6 = uVar6 | uVar6 >> 4;
          uVar6 = uVar6 | uVar6 >> 8;
          uVar6 = uVar6 | uVar6 >> 0x10;
          lVar17 = (uVar6 | uVar6 >> 0x20) + 1;
        }
        goto LAB_00105af7;
      }
    }
    *(int *)(lVar14 + 0x2ac) = iVar12;
    lVar15 = *(long *)(this + 0x240);
    *(undefined8 *)(lVar14 + 800) = *(undefined8 *)(lVar14 + 0x228);
    if (lVar15 != 0) {
      lVar15 = *(long *)(lVar15 + 0x10);
      if (lVar15 != *(long *)(this + 0x248)) {
        do {
          lVar17 = lVar15;
          lVar15 = *(long *)(lVar17 + 0x10);
        } while (*(long *)(this + 0x248) != *(long *)(lVar17 + 0x10));
        do {
          lVar18 = (long)*(int *)(lVar17 + 0x38);
          uVar11 = *(undefined8 *)(lVar17 + 0x30);
          lVar15 = *(long *)(lVar14 + 0x228);
          if (lVar18 < 0) goto LAB_00104689;
          if (lVar15 == 0) goto LAB_0010468e;
          if (*(long *)(lVar15 + -8) <= lVar18) goto LAB_00104618;
          CowData<void(*)(Variant*,Variant_const**,int,Variant*)>::_copy_on_write
                    ((CowData<void(*)(Variant*,Variant_const**,int,Variant*)> *)(lVar14 + 0x228));
          plVar13 = (long *)(lVar14 + 0x228);
          lVar17 = *(long *)(lVar17 + 0x20);
          lVar14 = *(long *)(this + 0x10);
          *(undefined8 *)(*plVar13 + lVar18 * 8) = uVar11;
        } while (lVar17 != 0);
      }
    }
  }
  iVar12 = *(int *)(this + 0x268);
  if (iVar12 == 0) {
    *(undefined8 *)(lVar14 + 0x328) = 0;
    *(undefined4 *)(lVar14 + 0x2b0) = 0;
  }
  else {
    lVar15 = (long)iVar12;
    this_08 = (CowData<void(*)(Variant*,Variant_const**)> *)(lVar14 + 0x238);
    if (lVar15 < 0) {
      uVar11 = 0x157;
LAB_0010650c:
      _err_print_error("resize","./core/templates/cowdata.h",uVar11);
      lVar14 = *(long *)(this + 0x10);
      iVar12 = *(int *)(this + 0x268);
    }
    else if (*(long *)(lVar14 + 0x238) == 0) {
      lVar18 = 0;
      CowData<void(*)(Variant*,Variant_const**)>::_copy_on_write(this_08);
      lVar17 = 0;
LAB_0010593c:
      uVar6 = lVar15 * 8 - 1;
      uVar6 = uVar6 | uVar6 >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      uVar6 = uVar6 | uVar6 >> 0x20;
      lVar1 = uVar6 + 1;
      if (lVar18 < lVar15) {
        if (lVar1 == lVar17) {
LAB_0010653e:
          puVar8 = *(undefined8 **)(lVar14 + 0x238);
          if (puVar8 == (undefined8 *)0x0) {
            lVar15 = FUN_00117198();
            return lVar15;
          }
        }
        else {
          if (lVar18 != 0) {
            iVar12 = CowData<void(*)(Variant*,Variant_const**)>::_realloc(this_08,lVar1);
            if (iVar12 != 0) goto LAB_00106608;
            goto LAB_0010653e;
          }
          puVar7 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
          if (puVar7 == (undefined8 *)0x0) {
            uVar11 = 0x171;
            goto LAB_0010650c;
          }
          puVar8 = puVar7 + 2;
          *puVar7 = 1;
          puVar7[1] = 0;
          *(undefined8 **)(lVar14 + 0x238) = puVar8;
        }
        lVar14 = *(long *)(this + 0x10);
        iVar12 = *(int *)(this + 0x268);
        puVar8[-1] = lVar15;
      }
      else {
        if ((lVar1 == lVar17) ||
           (iVar12 = CowData<void(*)(Variant*,Variant_const**)>::_realloc(this_08,lVar1),
           iVar12 == 0)) {
          if (*(long *)(lVar14 + 0x238) == 0) {
            lVar15 = FUN_00117198();
            return lVar15;
          }
          *(long *)(*(long *)(lVar14 + 0x238) + -8) = lVar15;
        }
LAB_00106608:
        lVar14 = *(long *)(this + 0x10);
        iVar12 = *(int *)(this + 0x268);
      }
    }
    else {
      lVar18 = *(long *)(*(long *)(lVar14 + 0x238) + -8);
      if (lVar15 != lVar18) {
        CowData<void(*)(Variant*,Variant_const**)>::_copy_on_write(this_08);
        lVar17 = lVar18 * 8;
        if (lVar17 != 0) {
          uVar6 = lVar17 - 1U | lVar17 - 1U >> 1;
          uVar6 = uVar6 | uVar6 >> 2;
          uVar6 = uVar6 | uVar6 >> 4;
          uVar6 = uVar6 | uVar6 >> 8;
          uVar6 = uVar6 | uVar6 >> 0x10;
          lVar17 = (uVar6 | uVar6 >> 0x20) + 1;
        }
        goto LAB_0010593c;
      }
    }
    *(int *)(lVar14 + 0x2b0) = iVar12;
    lVar15 = *(long *)(this + 600);
    *(undefined8 *)(lVar14 + 0x328) = *(undefined8 *)(lVar14 + 0x238);
    if (lVar15 != 0) {
      lVar15 = *(long *)(lVar15 + 0x10);
      if (lVar15 != *(long *)(this + 0x260)) {
        do {
          lVar17 = lVar15;
          lVar15 = *(long *)(lVar17 + 0x10);
        } while (*(long *)(this + 0x260) != *(long *)(lVar17 + 0x10));
        do {
          lVar18 = (long)*(int *)(lVar17 + 0x38);
          uVar11 = *(undefined8 *)(lVar17 + 0x30);
          lVar15 = *(long *)(lVar14 + 0x238);
          if (lVar18 < 0) goto LAB_00104689;
          if (lVar15 == 0) goto LAB_0010468e;
          if (*(long *)(lVar15 + -8) <= lVar18) goto LAB_00104618;
          CowData<void(*)(Variant*,Variant_const**)>::_copy_on_write
                    ((CowData<void(*)(Variant*,Variant_const**)> *)(lVar14 + 0x238));
          plVar13 = (long *)(lVar14 + 0x238);
          lVar17 = *(long *)(lVar17 + 0x20);
          lVar14 = *(long *)(this + 0x10);
          *(undefined8 *)(*plVar13 + lVar18 * 8) = uVar11;
        } while (lVar17 != 0);
      }
    }
  }
  iVar12 = *(int *)(this + 0x280);
  if (iVar12 == 0) {
    *(undefined8 *)(lVar14 + 0x330) = 0;
    *(undefined4 *)(lVar14 + 0x2b4) = 0;
    goto LAB_00103fcc;
  }
  lVar15 = (long)iVar12;
  this_10 = (CowData<void(*)(Variant*,Variant_const**,int)> *)(lVar14 + 0x248);
  if (lVar15 < 0) {
    uVar11 = 0x157;
LAB_00106046:
    _err_print_error("resize","./core/templates/cowdata.h",uVar11);
    lVar14 = *(long *)(this + 0x10);
    iVar12 = *(int *)(this + 0x280);
  }
  else if (*(long *)(lVar14 + 0x248) == 0) {
    lVar18 = 0;
    CowData<void(*)(Variant*,Variant_const**,int)>::_copy_on_write(this_10);
    lVar17 = 0;
LAB_00105d38:
    uVar6 = lVar15 * 8 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = uVar6 | uVar6 >> 0x20;
    lVar1 = uVar6 + 1;
    if (lVar18 < lVar15) {
      if (lVar1 == lVar17) {
LAB_00105fd9:
        puVar8 = *(undefined8 **)(lVar14 + 0x248);
        if (puVar8 == (undefined8 *)0x0) {
          lVar15 = FUN_00117198();
          return lVar15;
        }
      }
      else {
        if (lVar18 != 0) {
          iVar12 = CowData<void(*)(Variant*,Variant_const**,int)>::_realloc(this_10,lVar1);
          if (iVar12 != 0) goto LAB_00106013;
          goto LAB_00105fd9;
        }
        puVar7 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
        if (puVar7 == (undefined8 *)0x0) {
          uVar11 = 0x171;
          goto LAB_00106046;
        }
        puVar8 = puVar7 + 2;
        *puVar7 = 1;
        puVar7[1] = 0;
        *(undefined8 **)(lVar14 + 0x248) = puVar8;
      }
      lVar14 = *(long *)(this + 0x10);
      iVar12 = *(int *)(this + 0x280);
      puVar8[-1] = lVar15;
    }
    else {
      if ((lVar1 == lVar17) ||
         (iVar12 = CowData<void(*)(Variant*,Variant_const**,int)>::_realloc(this_10,lVar1),
         iVar12 == 0)) {
        if (*(long *)(lVar14 + 0x248) == 0) {
          lVar15 = FUN_00117198();
          return lVar15;
        }
        *(long *)(*(long *)(lVar14 + 0x248) + -8) = lVar15;
      }
LAB_00106013:
      lVar14 = *(long *)(this + 0x10);
      iVar12 = *(int *)(this + 0x280);
    }
  }
  else {
    lVar18 = *(long *)(*(long *)(lVar14 + 0x248) + -8);
    if (lVar15 != lVar18) {
      CowData<void(*)(Variant*,Variant_const**,int)>::_copy_on_write(this_10);
      lVar17 = lVar18 * 8;
      if (lVar17 != 0) {
        uVar6 = lVar17 - 1U | lVar17 - 1U >> 1;
        uVar6 = uVar6 | uVar6 >> 2;
        uVar6 = uVar6 | uVar6 >> 4;
        uVar6 = uVar6 | uVar6 >> 8;
        uVar6 = uVar6 | uVar6 >> 0x10;
        lVar17 = (uVar6 | uVar6 >> 0x20) + 1;
      }
      goto LAB_00105d38;
    }
  }
  *(int *)(lVar14 + 0x2b4) = iVar12;
  lVar15 = *(long *)(this + 0x270);
  *(undefined8 *)(lVar14 + 0x330) = *(undefined8 *)(lVar14 + 0x248);
  if (lVar15 != 0) {
    lVar15 = *(long *)(lVar15 + 0x10);
    if (lVar15 != *(long *)(this + 0x278)) {
      do {
        lVar17 = lVar15;
        lVar15 = *(long *)(lVar17 + 0x10);
      } while (*(long *)(this + 0x278) != *(long *)(lVar17 + 0x10));
      do {
        lVar18 = (long)*(int *)(lVar17 + 0x38);
        uVar11 = *(undefined8 *)(lVar17 + 0x30);
        lVar15 = *(long *)(lVar14 + 0x248);
        if (lVar18 < 0) goto LAB_00104689;
        if (lVar15 == 0) goto LAB_0010468e;
        if (*(long *)(lVar15 + -8) <= lVar18) goto LAB_00104618;
        CowData<void(*)(Variant*,Variant_const**,int)>::_copy_on_write
                  ((CowData<void(*)(Variant*,Variant_const**,int)> *)(lVar14 + 0x248));
        plVar13 = (long *)(lVar14 + 0x248);
        lVar17 = *(long *)(lVar17 + 0x20);
        lVar14 = *(long *)(this + 0x10);
        *(undefined8 *)(*plVar13 + lVar18 * 8) = uVar11;
      } while (lVar17 != 0);
    }
  }
LAB_00103fcc:
  if (*(int *)(this + 0x298) == 0) {
    *(undefined8 *)(lVar14 + 0x338) = 0;
    *(undefined4 *)(lVar14 + 0x2b8) = 0;
  }
  else {
    CowData<void(*)(Variant*,Variant_const**,int,Callable::CallError&)>::resize<false>
              ((CowData<void(*)(Variant*,Variant_const**,int,Callable::CallError&)> *)(lVar14 + 600)
               ,(long)*(int *)(this + 0x298));
    lVar14 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar14 + 0x338) = *(undefined8 *)(lVar14 + 600);
    *(undefined4 *)(lVar14 + 0x2b8) = *(undefined4 *)(this + 0x298);
    if (*(long *)(this + 0x288) != 0) {
      lVar15 = *(long *)(*(long *)(this + 0x288) + 0x10);
      if (lVar15 != *(long *)(this + 0x290)) {
        do {
          lVar17 = lVar15;
          lVar15 = *(long *)(lVar17 + 0x10);
        } while (*(long *)(this + 0x290) != *(long *)(lVar17 + 0x10));
        while (lVar17 != 0) {
          lVar18 = (long)*(int *)(lVar17 + 0x38);
          uVar11 = *(undefined8 *)(lVar17 + 0x30);
          lVar15 = *(long *)(lVar14 + 600);
          if (lVar18 < 0) goto LAB_00104689;
          if (lVar15 == 0) goto LAB_0010468e;
          if (*(long *)(lVar15 + -8) <= lVar18) goto LAB_00104618;
          CowData<void(*)(Variant*,Variant_const**,int,Callable::CallError&)>::_copy_on_write
                    ((CowData<void(*)(Variant*,Variant_const**,int,Callable::CallError&)> *)
                     (lVar14 + 600));
          plVar13 = (long *)(lVar14 + 600);
          lVar17 = *(long *)(lVar17 + 0x20);
          lVar14 = *(long *)(this + 0x10);
          *(undefined8 *)(*plVar13 + lVar18 * 8) = uVar11;
        }
      }
    }
  }
  if (*(int *)(this + 0x2b0) == 0) {
    *(undefined8 *)(lVar14 + 0x340) = 0;
    *(undefined4 *)(lVar14 + 700) = 0;
  }
  else {
    CowData<MethodBind*>::resize<false>
              ((CowData<MethodBind*> *)(lVar14 + 0x268),(long)*(int *)(this + 0x2b0));
    lVar15 = *(long *)(this + 0x10);
    CowData<MethodBind*>::_copy_on_write((CowData<MethodBind*> *)(lVar15 + 0x268));
    *(undefined8 *)(lVar15 + 0x340) = *(undefined8 *)(lVar15 + 0x268);
    lVar14 = *(long *)(this + 0x10);
    *(undefined4 *)(lVar14 + 700) = *(undefined4 *)(this + 0x2b0);
    if (*(long *)(this + 0x2a0) != 0) {
      lVar15 = *(long *)(*(long *)(this + 0x2a0) + 0x10);
      if (lVar15 != *(long *)(this + 0x2a8)) {
        do {
          lVar17 = lVar15;
          lVar15 = *(long *)(lVar17 + 0x10);
        } while (*(long *)(this + 0x2a8) != *(long *)(lVar17 + 0x10));
        while (lVar17 != 0) {
          lVar18 = (long)*(int *)(lVar17 + 0x38);
          uVar11 = *(undefined8 *)(lVar17 + 0x30);
          lVar15 = *(long *)(lVar14 + 0x268);
          if (lVar18 < 0) goto LAB_00104689;
          if (lVar15 == 0) goto LAB_0010468e;
          if (*(long *)(lVar15 + -8) <= lVar18) goto LAB_00104618;
          CowData<MethodBind*>::_copy_on_write((CowData<MethodBind*> *)(lVar14 + 0x268));
          plVar13 = (long *)(lVar14 + 0x268);
          lVar17 = *(long *)(lVar17 + 0x20);
          lVar14 = *(long *)(this + 0x10);
          *(undefined8 *)(*plVar13 + lVar18 * 8) = uVar11;
        }
      }
    }
  }
  if (*(int *)(this + 0x2c8) == 0) {
    *(undefined8 *)(lVar14 + 0x348) = 0;
    *(undefined4 *)(lVar14 + 0x2c0) = 0;
  }
  else {
    CowData<GDScriptFunction*>::resize<false>
              ((CowData<GDScriptFunction*> *)(lVar14 + 0x278),(long)*(int *)(this + 0x2c8));
    lVar15 = *(long *)(this + 0x10);
    CowData<GDScriptFunction*>::_copy_on_write((CowData<GDScriptFunction*> *)(lVar15 + 0x278));
    *(undefined8 *)(lVar15 + 0x348) = *(undefined8 *)(lVar15 + 0x278);
    lVar14 = *(long *)(this + 0x10);
    *(undefined4 *)(lVar14 + 0x2c0) = *(undefined4 *)(this + 0x2c8);
    if (*(long *)(this + 0x2b8) != 0) {
      lVar15 = *(long *)(*(long *)(this + 0x2b8) + 0x10);
      if (lVar15 != *(long *)(this + 0x2c0)) {
        do {
          lVar17 = lVar15;
          lVar15 = *(long *)(lVar17 + 0x10);
        } while (*(long *)(this + 0x2c0) != *(long *)(lVar17 + 0x10));
        while (lVar17 != 0) {
          lVar18 = (long)*(int *)(lVar17 + 0x38);
          uVar11 = *(undefined8 *)(lVar17 + 0x30);
          lVar15 = *(long *)(lVar14 + 0x278);
          if (lVar18 < 0) goto LAB_00104689;
          if (lVar15 == 0) goto LAB_0010468e;
          if (*(long *)(lVar15 + -8) <= lVar18) goto LAB_00104618;
          CowData<GDScriptFunction*>::_copy_on_write((CowData<GDScriptFunction*> *)(lVar14 + 0x278))
          ;
          lVar17 = *(long *)(lVar17 + 0x20);
          *(undefined8 *)(*(long *)(lVar14 + 0x278) + lVar18 * 8) = uVar11;
          lVar14 = *(long *)(this + 0x10);
        }
      }
    }
  }
  if (this[0x18] != (GDScriptByteCodeGenerator)0x0) {
    List<GDScriptFunction::StackDebug,DefaultAllocator>::operator=
              ((List<GDScriptFunction::StackDebug,DefaultAllocator> *)(lVar14 + 0x168),
               (List *)(this + 0x100));
    lVar14 = *(long *)(this + 0x10);
  }
  if (*(long *)(this + 0xb0) == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = (int)*(undefined8 *)(*(long *)(this + 0xb0) + -8);
  }
  *(int *)(lVar14 + 0xf8) = *(int *)(this + 0x128) + 3 + iVar12;
  *(undefined4 *)(lVar14 + 0xfc) = *(undefined4 *)(this + 0x130);
  if (*(long *)(lVar14 + 0x368) != *(long *)(this + 0x2d8)) {
    CowData<String>::_ref((CowData<String> *)(lVar14 + 0x368),(CowData *)(this + 0x2d8));
    lVar14 = *(long *)(this + 0x10);
  }
  if (*(long *)(lVar14 + 0x378) != *(long *)(this + 0x2e8)) {
    CowData<String>::_ref((CowData<String> *)(lVar14 + 0x378),(CowData *)(this + 0x2e8));
    lVar14 = *(long *)(this + 0x10);
  }
  if (*(long *)(lVar14 + 0x388) != *(long *)(this + 0x2f8)) {
    CowData<String>::_ref((CowData<String> *)(lVar14 + 0x388),(CowData *)(this + 0x2f8));
    lVar14 = *(long *)(this + 0x10);
  }
  if (*(long *)(lVar14 + 0x398) != *(long *)(this + 0x308)) {
    CowData<String>::_ref((CowData<String> *)(lVar14 + 0x398),(CowData *)(this + 0x308));
    lVar14 = *(long *)(this + 0x10);
  }
  if (*(long *)(lVar14 + 0x3a8) != *(long *)(this + 0x318)) {
    CowData<String>::_ref((CowData<String> *)(lVar14 + 0x3a8),(CowData *)(this + 0x318));
    lVar14 = *(long *)(this + 0x10);
  }
  if (*(long *)(lVar14 + 0x3b8) != *(long *)(this + 0x328)) {
    CowData<String>::_ref((CowData<String> *)(lVar14 + 0x3b8),(CowData *)(this + 0x328));
    lVar14 = *(long *)(this + 0x10);
  }
  if (*(long *)(lVar14 + 0x3c8) != *(long *)(this + 0x338)) {
    CowData<String>::_ref((CowData<String> *)(lVar14 + 0x3c8),(CowData *)(this + 0x338));
    lVar14 = *(long *)(this + 0x10);
  }
  this[8] = (GDScriptByteCodeGenerator)0x1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_assign_default_parameter(GDScriptCodeGenerator::Address const&,
   GDScriptCodeGenerator::Address const&, bool) */

void __thiscall
GDScriptByteCodeGenerator::write_assign_default_parameter
          (GDScriptByteCodeGenerator *this,Address *param_1,Address *param_2,bool param_3)

{
  int iVar1;
  
  if (param_3) {
    (**(code **)(*(long *)this + 0x150))();
  }
  else {
    (**(code **)(*(long *)this + 0x148))();
  }
  if (*(long *)(this + 0x28) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(long *)(this + 0x28) + -8);
  }
  Vector<int>::push_back((Vector<int> *)(*(long *)(this + 0x10) + 0x180),iVar1);
  return;
}



/* GDScriptByteCodeGenerator::write_newline(int) */

void __thiscall
GDScriptByteCodeGenerator::write_newline(GDScriptByteCodeGenerator *this,int param_1)

{
  Vector<int>::push_back((Vector<int> *)(this + 0x20),0x9a);
  Vector<int>::push_back((Vector<int> *)(this + 0x20),param_1);
  *(int *)(this + 300) = param_1;
  return;
}



/* GDScriptByteCodeGenerator::write_breakpoint() */

void __thiscall GDScriptByteCodeGenerator::write_breakpoint(GDScriptByteCodeGenerator *this)

{
  Vector<int>::push_back((Vector<int> *)(this + 0x20),0x99);
  return;
}



/* GDScriptByteCodeGenerator::write_continue() */

void __thiscall GDScriptByteCodeGenerator::write_continue(GDScriptByteCodeGenerator *this)

{
  code *pcVar1;
  
  Vector<int>::push_back((Vector<int> *)(this + 0x20),0x3b);
  if (*(long *)(this + 0x368) != 0) {
    Vector<int>::push_back((Vector<int> *)(this + 0x20),**(int **)(*(long *)(this + 0x368) + 8));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptByteCodeGenerator::write_break() */

void __thiscall GDScriptByteCodeGenerator::write_break(GDScriptByteCodeGenerator *this)

{
  List<int,DefaultAllocator> *this_00;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Vector<int>::push_back((Vector<int> *)(this + 0x20),0x3b);
  this_00 = *(List<int,DefaultAllocator> **)(this + 0x398);
  if (this_00 != (List<int,DefaultAllocator> *)0x0) {
    this_00 = *(List<int,DefaultAllocator> **)(this_00 + 8);
  }
  if (*(long *)(this + 0x28) == 0) {
    local_24 = 0;
  }
  else {
    local_24 = *(int *)(*(long *)(this + 0x28) + -8);
  }
  List<int,DefaultAllocator>::push_back(this_00,&local_24);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_endwhile() */

void __thiscall GDScriptByteCodeGenerator::write_endwhile(GDScriptByteCodeGenerator *this)

{
  List<int,DefaultAllocator> *this_00;
  long lVar1;
  code *pcVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  
  Vector<int>::push_back((Vector<int> *)(this + 0x20),0x3b);
  if (*(long *)(this + 0x368) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  Vector<int>::push_back((Vector<int> *)(this + 0x20),**(int **)(*(long *)(this + 0x368) + 8));
  List<int,DefaultAllocator>::pop_back((List<int,DefaultAllocator> *)(this + 0x368));
  if (*(long *)(this + 0x360) != 0) {
    patch_jump(this,**(int **)(*(long *)(this + 0x360) + 8));
    List<int,DefaultAllocator>::pop_back((List<int,DefaultAllocator> *)(this + 0x360));
    plVar5 = *(long **)(this + 0x398);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((*(undefined8 **)plVar5[1] != (undefined8 *)0x0) &&
       (piVar4 = (int *)**(undefined8 **)plVar5[1], piVar4 != (int *)0x0)) {
      do {
        patch_jump(this,*piVar4);
        piVar4 = *(int **)(piVar4 + 2);
      } while (piVar4 != (int *)0x0);
      plVar5 = *(long **)(this + 0x398);
      if (plVar5 == (long *)0x0) {
        return;
      }
    }
    this_00 = (List<int,DefaultAllocator> *)plVar5[1];
    if (this_00 != (List<int,DefaultAllocator> *)0x0) {
      if (plVar5 == *(long **)(this_00 + 0x18)) {
        lVar3 = *(long *)(this_00 + 8);
        if (this_00 == (List<int,DefaultAllocator> *)*plVar5) {
          *plVar5 = lVar3;
        }
        lVar1 = *(long *)(this_00 + 0x10);
        plVar5[1] = lVar1;
        if (lVar1 != 0) {
          *(long *)(lVar1 + 8) = lVar3;
          lVar3 = *(long *)(this_00 + 8);
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x10) = lVar1;
        }
        List<int,DefaultAllocator>::~List(this_00);
        Memory::free_static(this_00,false);
        *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      if (*(int *)((long)*(void **)(this + 0x398) + 0x10) == 0) {
        Memory::free_static(*(void **)(this + 0x398),false);
        *(undefined8 *)(this + 0x398) = 0;
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* GDScriptByteCodeGenerator::write_endfor() */

void __thiscall GDScriptByteCodeGenerator::write_endfor(GDScriptByteCodeGenerator *this)

{
  List<int,DefaultAllocator> *this_00;
  long lVar1;
  void *pvVar2;
  code *pcVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  
  Vector<int>::push_back((Vector<int> *)(this + 0x20),0x3b);
  if (*(long *)(this + 0x368) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  Vector<int>::push_back((Vector<int> *)(this + 0x20),**(int **)(*(long *)(this + 0x368) + 8));
  List<int,DefaultAllocator>::pop_back((List<int,DefaultAllocator> *)(this + 0x368));
  if (*(long *)(this + 0x348) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  patch_jump(this,**(int **)(*(long *)(this + 0x348) + 8));
  List<int,DefaultAllocator>::pop_back((List<int,DefaultAllocator> *)(this + 0x348));
  if (*(long *)(this + 0x348) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  patch_jump(this,**(int **)(*(long *)(this + 0x348) + 8));
  List<int,DefaultAllocator>::pop_back((List<int,DefaultAllocator> *)(this + 0x348));
  plVar6 = *(long **)(this + 0x398);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if ((*(undefined8 **)plVar6[1] != (undefined8 *)0x0) &&
     (piVar5 = (int *)**(undefined8 **)plVar6[1], piVar5 != (int *)0x0)) {
    do {
      patch_jump(this,*piVar5);
      piVar5 = *(int **)(piVar5 + 2);
    } while (piVar5 != (int *)0x0);
    plVar6 = *(long **)(this + 0x398);
    if (plVar6 == (long *)0x0) goto LAB_00106ad0;
  }
  this_00 = (List<int,DefaultAllocator> *)plVar6[1];
  if (this_00 != (List<int,DefaultAllocator> *)0x0) {
    if (*(long **)(this_00 + 0x18) == plVar6) {
      lVar4 = *(long *)(this_00 + 8);
      if (this_00 == (List<int,DefaultAllocator> *)*plVar6) {
        *plVar6 = lVar4;
      }
      lVar1 = *(long *)(this_00 + 0x10);
      plVar6[1] = lVar1;
      if (lVar1 != 0) {
        *(long *)(lVar1 + 8) = lVar4;
        lVar4 = *(long *)(this_00 + 8);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x10) = lVar1;
      }
      List<int,DefaultAllocator>::~List(this_00);
      Memory::free_static(this_00,false);
      *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    if (*(int *)((long)*(void **)(this + 0x398) + 0x10) == 0) {
      Memory::free_static(*(void **)(this + 0x398),false);
      *(undefined8 *)(this + 0x398) = 0;
    }
  }
LAB_00106ad0:
  plVar6 = *(long **)(this + 0x350);
  if ((plVar6 != (long *)0x0) && (pvVar2 = (void *)plVar6[1], pvVar2 != (void *)0x0)) {
    if (plVar6 == *(long **)((long)pvVar2 + 0x50)) {
      lVar4 = *(long *)((long)pvVar2 + 0x40);
      if (pvVar2 == (void *)*plVar6) {
        *plVar6 = lVar4;
      }
      lVar1 = *(long *)((long)pvVar2 + 0x48);
      plVar6[1] = lVar1;
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x40) = lVar4;
        lVar4 = *(long *)((long)pvVar2 + 0x40);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x48) = lVar1;
      }
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)((long)pvVar2 + 8));
      Memory::free_static(pvVar2,false);
      *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    if (*(int *)((long)*(void **)(this + 0x350) + 0x10) == 0) {
      Memory::free_static(*(void **)(this + 0x350),false);
      *(undefined8 *)(this + 0x350) = 0;
    }
  }
  plVar6 = *(long **)(this + 0x358);
  if ((plVar6 != (long *)0x0) && (pvVar2 = (void *)plVar6[1], pvVar2 != (void *)0x0)) {
    if (plVar6 == *(long **)((long)pvVar2 + 0x50)) {
      lVar4 = *(long *)((long)pvVar2 + 0x40);
      if (pvVar2 == (void *)*plVar6) {
        *plVar6 = lVar4;
      }
      lVar1 = *(long *)((long)pvVar2 + 0x48);
      plVar6[1] = lVar1;
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x40) = lVar4;
        lVar4 = *(long *)((long)pvVar2 + 0x40);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x48) = lVar1;
      }
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)((long)pvVar2 + 8));
      Memory::free_static(pvVar2,false);
      *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    if (*(int *)((long)*(void **)(this + 0x358) + 0x10) == 0) {
      Memory::free_static(*(void **)(this + 0x358),false);
      *(undefined8 *)(this + 0x358) = 0;
    }
  }
  return;
}



/* GDScriptByteCodeGenerator::write_else() */

void __thiscall GDScriptByteCodeGenerator::write_else(GDScriptByteCodeGenerator *this)

{
  code *pcVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Vector<int>::push_back((Vector<int> *)(this + 0x20),0x3b);
  if (*(long *)(this + 0x28) == 0) {
    local_24 = 0;
  }
  else {
    local_24 = *(int *)(*(long *)(this + 0x28) + -8);
  }
  Vector<int>::push_back((Vector<int> *)(this + 0x20),0);
  if (*(long *)(this + 0x340) != 0) {
    patch_jump(this,**(int **)(*(long *)(this + 0x340) + 8));
    List<int,DefaultAllocator>::pop_back((List<int,DefaultAllocator> *)(this + 0x340));
    List<int,DefaultAllocator>::push_back((List<int,DefaultAllocator> *)(this + 0x340),&local_24);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptByteCodeGenerator::start_parameters() */

void __thiscall GDScriptByteCodeGenerator::start_parameters(GDScriptByteCodeGenerator *this)

{
  int iVar1;
  
  if (*(int *)(*(long *)(this + 0x10) + 0x284) < 1) {
    return;
  }
  Vector<int>::push_back((Vector<int> *)(this + 0x20),0x3e);
  if (*(long *)(this + 0x28) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(long *)(this + 0x28) + -8);
  }
  Vector<int>::push_back((Vector<int> *)(*(long *)(this + 0x10) + 0x180),iVar1);
  return;
}



/* GDScriptByteCodeGenerator::append(GDScriptCodeGenerator::Address const&) [clone .isra.0] */

void GDScriptByteCodeGenerator::append(Address *param_1)

{
  Vector<int> *this;
  code *pcVar1;
  uint in_EDX;
  ulong uVar2;
  undefined4 in_ESI;
  int iVar3;
  long lVar4;
  
  this = (Vector<int> *)(param_1 + 0x20);
  switch(in_ESI) {
  case 0:
    Vector<int>::push_back(this,0);
    return;
  case 1:
    Vector<int>::push_back(this,1);
    return;
  case 2:
    Vector<int>::push_back(this,in_EDX | 0x2000000);
    return;
  case 3:
    Vector<int>::push_back(this,in_EDX | 0x1000000);
    return;
  case 4:
  case 5:
    Vector<int>::push_back(this,in_EDX);
    return;
  case 6:
    break;
  case 7:
    Vector<int>::push_back(this,2);
    return;
  default:
switchD_00106dcd_default:
    Vector<int>::push_back(this,-1);
    return;
  }
  uVar2 = (ulong)in_EDX;
  if (*(long *)(param_1 + 0xb0) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 0xb0) + -8);
    if ((long)uVar2 < lVar4) {
      CowData<GDScriptByteCodeGenerator::StackSlot>::_copy_on_write
                ((CowData<GDScriptByteCodeGenerator::StackSlot> *)(param_1 + 0xb0));
      if (*(long *)(param_1 + 0x28) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(long *)(param_1 + 0x28) + -8);
      }
      Vector<int>::push_back((Vector<int> *)(*(long *)(param_1 + 0xb0) + 8 + uVar2 * 0x18),iVar3);
      goto switchD_00106dcd_default;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,uVar2,lVar4,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptByteCodeGenerator::write_construct_dictionary(GDScriptCodeGenerator::Address const&,
   Vector<GDScriptCodeGenerator::Address> const&) */

void __thiscall
GDScriptByteCodeGenerator::write_construct_dictionary
          (GDScriptByteCodeGenerator *this,Address *param_1,Vector *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined1 local_88 [8];
  GDScriptDataType local_80 [56];
  char local_48;
  CallTarget *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_2 + 8) == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = (int)*(undefined8 *)(*(long *)(param_2 + 8) + -8) + 1;
  }
  append_opcode_and_argcount(this,0x25,iVar2);
  lVar1 = *(long *)(param_2 + 8);
  for (lVar3 = 0; (lVar1 != 0 && (lVar3 < *(long *)(lVar1 + -8))); lVar3 = lVar3 + 1) {
    append((Address *)this);
    lVar1 = *(long *)(param_2 + 8);
  }
  get_call_target(local_88,this,param_1,0);
  append((Address *)this);
  if (*(long *)(param_2 + 8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)(*(long *)(*(long *)(param_2 + 8) + -8) / 2);
  }
  Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar2);
  if (local_48 != '\0') {
    CallTarget::cleanup(local_40);
  }
  GDScriptDataType::~GDScriptDataType(local_80);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_construct_array(GDScriptCodeGenerator::Address const&,
   Vector<GDScriptCodeGenerator::Address> const&) */

void __thiscall
GDScriptByteCodeGenerator::write_construct_array
          (GDScriptByteCodeGenerator *this,Address *param_1,Vector *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined1 local_88 [8];
  GDScriptDataType local_80 [56];
  char local_48;
  CallTarget *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_2 + 8) == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = (int)*(undefined8 *)(*(long *)(param_2 + 8) + -8) + 1;
  }
  append_opcode_and_argcount(this,0x23,iVar2);
  lVar1 = *(long *)(param_2 + 8);
  for (lVar3 = 0; (lVar1 != 0 && (lVar3 < *(long *)(lVar1 + -8))); lVar3 = lVar3 + 1) {
    append((Address *)this);
    lVar1 = *(long *)(param_2 + 8);
  }
  get_call_target(local_88,this,param_1,0);
  append((Address *)this);
  if (*(long *)(param_2 + 8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(long *)(param_2 + 8) + -8);
  }
  Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar2);
  if (local_48 != '\0') {
    CallTarget::cleanup(local_40);
  }
  GDScriptDataType::~GDScriptDataType(local_80);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_assert(GDScriptCodeGenerator::Address const&,
   GDScriptCodeGenerator::Address const&) */

void GDScriptByteCodeGenerator::write_assert(Address *param_1,Address *param_2)

{
  Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0x98);
  append(param_1);
  append(param_1);
  return;
}



/* GDScriptByteCodeGenerator::write_while(GDScriptCodeGenerator::Address const&) */

void GDScriptByteCodeGenerator::write_while(Address *param_1)

{
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0x3d);
  append(param_1);
  if (*(long *)(param_1 + 0x28) == 0) {
    local_24 = 0;
  }
  else {
    local_24 = *(int *)(*(long *)(param_1 + 0x28) + -8);
  }
  List<int,DefaultAllocator>::push_back((List<int,DefaultAllocator> *)(param_1 + 0x360),&local_24);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_for(GDScriptCodeGenerator::Address const&, bool) */

void __thiscall
GDScriptByteCodeGenerator::write_for(GDScriptByteCodeGenerator *this,Address *param_1,bool param_2)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  Vector<int> *this_00;
  long in_FS_OFFSET;
  int *local_180;
  int local_174;
  GDScriptDataType *local_168;
  long local_150;
  GDScriptDataType local_148 [8];
  undefined8 local_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined8 local_118;
  int local_108 [2];
  undefined8 local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_c8;
  GDScriptDataType local_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  GDScriptDataType local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x358) == 0) {
    local_88 = 0;
    List<List<int,DefaultAllocator>,DefaultAllocator>::push_back
              ((List<List<int,DefaultAllocator>,DefaultAllocator> *)(this + 0x398),(List *)&local_88
              );
    List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)&local_88);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)(this + 0x358) + 8);
  local_88 = 0;
  List<List<int,DefaultAllocator>,DefaultAllocator>::push_back
            ((List<List<int,DefaultAllocator>,DefaultAllocator> *)(this + 0x398),(List *)&local_88);
  List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)&local_88);
  if (*(char *)(lVar1 + 0x1c) == '\0') {
switchD_00107506_caseD_0:
    local_174 = 0x5b;
    iVar5 = 0x46;
  }
  else {
    local_174 = 0x6f;
    iVar5 = 0x5a;
    if (*(int *)(lVar1 + 0x18) != 1) goto LAB_001072bc;
    switch(*(undefined4 *)(lVar1 + 0x20)) {
    default:
      goto switchD_00107506_caseD_0;
    case 2:
      local_174 = 0x5c;
      iVar5 = 0x47;
      break;
    case 3:
      local_174 = 0x5d;
      iVar5 = 0x48;
      break;
    case 4:
      local_174 = 0x62;
      iVar5 = 0x4d;
      break;
    case 5:
      local_174 = 0x5e;
      iVar5 = 0x49;
      break;
    case 6:
      local_174 = 0x5f;
      iVar5 = 0x4a;
      break;
    case 9:
      local_174 = 0x60;
      iVar5 = 0x4b;
      break;
    case 10:
      local_174 = 0x61;
      iVar5 = 0x4c;
      break;
    case 0x1b:
      local_174 = 99;
      iVar5 = 0x4e;
      break;
    case 0x1c:
      local_174 = 100;
      iVar5 = 0x4f;
      break;
    case 0x1d:
      local_174 = 0x65;
      iVar5 = 0x50;
      break;
    case 0x1e:
      local_174 = 0x66;
      iVar5 = 0x51;
      break;
    case 0x1f:
      local_174 = 0x67;
      iVar5 = 0x52;
      break;
    case 0x20:
      local_174 = 0x68;
      iVar5 = 0x53;
      break;
    case 0x21:
      local_174 = 0x69;
      iVar5 = 0x54;
      break;
    case 0x22:
      local_174 = 0x6a;
      iVar5 = 0x55;
      break;
    case 0x23:
      local_174 = 0x6b;
      iVar5 = 0x56;
      break;
    case 0x24:
      local_174 = 0x6c;
      iVar5 = 0x57;
      break;
    case 0x25:
      local_174 = 0x6d;
      iVar5 = 0x58;
      break;
    case 0x26:
      local_174 = 0x6e;
      iVar5 = 0x59;
    }
  }
LAB_001072bc:
  local_c8 = 7;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_a0 = (undefined1  [16])0x0;
  if (param_2) {
    local_f8 = (undefined1  [16])0x0;
    pcVar2 = *(code **)(*(long *)this + 8);
    local_e8 = (undefined1  [16])0x0;
    local_138 = (undefined1  [16])0x0;
    local_128 = (undefined1  [16])0x0;
    local_d8 = 0;
    local_100 = 0;
    local_118 = 0;
    local_140 = 0;
    StringName::StringName((StringName *)&local_150,"@iterator_temp",false);
    uVar4 = (*pcVar2)(this,(StringName *)&local_150,local_148);
    local_60 = (undefined1  [16])0x0;
    local_88 = CONCAT44(uVar4,4);
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_50 = 0;
    GDScriptDataType::operator=(local_80,(GDScriptDataType *)local_108);
    local_c8 = local_88;
    GDScriptDataType::operator=(local_c0,local_80);
    GDScriptDataType::~GDScriptDataType(local_80);
    if ((StringName::configured != '\0') && (local_150 != 0)) {
      StringName::unref();
    }
    GDScriptDataType::~GDScriptDataType(local_148);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)local_108);
    Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar5);
    append((Address *)this);
    append((Address *)this);
  }
  else {
    Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar5);
    append((Address *)this);
    append((Address *)this);
  }
  local_168 = local_c0;
  local_180 = local_108;
  this_00 = (Vector<int> *)(this + 0x20);
  append((Address *)this);
  if (*(long *)(this + 0x28) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(*(long *)(this + 0x28) + -8);
  }
  local_88._0_4_ = uVar4;
  List<int,DefaultAllocator>::push_back
            ((List<int,DefaultAllocator> *)(this + 0x348),(int *)&local_88);
  Vector<int>::push_back(this_00,0);
  Vector<int>::push_back(this_00,0x3b);
  if (*(long *)(this + 0x28) == 0) {
    iVar5 = 6;
  }
  else {
    iVar5 = (int)*(undefined8 *)(*(long *)(this + 0x28) + -8) + 6;
  }
  Vector<int>::push_back(this_00,iVar5);
  if (*(long *)(this + 0x28) == 0) {
    local_108[0] = 0;
  }
  else {
    local_108[0] = *(int *)(*(long *)(this + 0x28) + -8);
  }
  List<int,DefaultAllocator>::push_back((List<int,DefaultAllocator> *)(this + 0x368),local_180);
  Vector<int>::push_back(this_00,local_174);
  append((Address *)this);
  append((Address *)this);
  append((Address *)this);
  if (*(long *)(this + 0x28) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(*(long *)(this + 0x28) + -8);
  }
  local_88 = CONCAT44(local_88._4_4_,uVar4);
  List<int,DefaultAllocator>::push_back
            ((List<int,DefaultAllocator> *)(this + 0x348),(int *)&local_88);
  Vector<int>::push_back(this_00,0);
  if (param_2) {
    (**(code **)(*(long *)this + 0x150))(this,param_1,&local_c8);
    cVar3 = GDScriptDataType::can_contain_object((GDScriptDataType *)(param_1 + 8));
    if (cVar3 != '\0') {
      (**(code **)(*(long *)this + 0x40))(this,&local_c8);
    }
  }
  GDScriptDataType::~GDScriptDataType(local_168);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_for_assignment(GDScriptCodeGenerator::Address const&) */

void GDScriptByteCodeGenerator::write_for_assignment(Address *param_1)

{
  code *pcVar1;
  
  if (*(long *)(param_1 + 0x358) != 0) {
    Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0x15);
    append(param_1);
    append(param_1);
    return;
  }
  Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0x15);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptByteCodeGenerator::write_jump_if_shared(GDScriptCodeGenerator::Address const&) */

void GDScriptByteCodeGenerator::write_jump_if_shared(Address *param_1)

{
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0x3f);
  append(param_1);
  if (*(long *)(param_1 + 0x28) == 0) {
    local_24 = 0;
  }
  else {
    local_24 = *(int *)(*(long *)(param_1 + 0x28) + -8);
  }
  List<int,DefaultAllocator>::push_back((List<int,DefaultAllocator> *)(param_1 + 0x340),&local_24);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_if(GDScriptCodeGenerator::Address const&) */

void GDScriptByteCodeGenerator::write_if(Address *param_1)

{
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0x3d);
  append(param_1);
  if (*(long *)(param_1 + 0x28) == 0) {
    local_24 = 0;
  }
  else {
    local_24 = *(int *)(*(long *)(param_1 + 0x28) + -8);
  }
  List<int,DefaultAllocator>::push_back((List<int,DefaultAllocator> *)(param_1 + 0x340),&local_24);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_await(GDScriptCodeGenerator::Address const&,
   GDScriptCodeGenerator::Address const&) */

void GDScriptByteCodeGenerator::write_await(Address *param_1,Address *param_2)

{
  Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0x37);
  append(param_1);
  Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0x38);
  append(param_1);
  return;
}



/* GDScriptByteCodeGenerator::write_cast(GDScriptCodeGenerator::Address const&,
   GDScriptCodeGenerator::Address const&, GDScriptDataType const&) */

void __thiscall
GDScriptByteCodeGenerator::write_cast
          (GDScriptByteCodeGenerator *this,Address *param_1,Address *param_2,
          GDScriptDataType *param_3)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  long in_FS_OFFSET;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(uint *)(param_3 + 0x10);
  if (uVar2 == 2) {
    piVar3 = (int *)HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                    ::operator[]((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                                  *)(GDScriptLanguage::singleton + 400),
                                 (StringName *)(param_3 + 0x20));
    Variant::Variant((Variant *)local_58,
                     (Variant *)
                     (*(long *)(GDScriptLanguage::singleton + 0x178) + (long)*piVar3 * 0x18));
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x1f);
    uVar2 = get_constant_pos(this,(Variant *)local_58);
    cVar1 = Variant::needs_deinit[local_58[0]];
joined_r0x00107bbd:
    uVar2 = uVar2 | 0x1000000;
    if (cVar1 != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    if (2 < uVar2) {
      if (1 < uVar2 - 3) {
LAB_00107bd0:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_00107bef;
      }
      Variant::Variant((Variant *)local_58,*(Object **)(param_3 + 0x28));
      uVar2 = get_constant_pos(this,(Variant *)local_58);
      Vector<int>::push_back((Vector<int> *)(this + 0x20),0x20);
      cVar1 = Variant::needs_deinit[local_58[0]];
      goto joined_r0x00107bbd;
    }
    if (uVar2 != 1) goto LAB_00107bd0;
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x1e);
    uVar2 = *(uint *)(param_3 + 0x18);
  }
  append((Address *)this);
  append((Address *)this);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Vector<int>::push_back((Vector<int> *)(this + 0x20),uVar2);
    return;
  }
LAB_00107bef:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_store_global(GDScriptCodeGenerator::Address const&, int) */

void __thiscall
GDScriptByteCodeGenerator::write_store_global
          (GDScriptByteCodeGenerator *this,Address *param_1,int param_2)

{
  Vector<int>::push_back((Vector<int> *)(this + 0x20),0x70);
  append((Address *)this);
  Vector<int>::push_back((Vector<int> *)(this + 0x20),param_2);
  return;
}



/* GDScriptByteCodeGenerator::write_assign_false(GDScriptCodeGenerator::Address const&) */

void GDScriptByteCodeGenerator::write_assign_false(Address *param_1)

{
  Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0x18);
  append(param_1);
  return;
}



/* GDScriptByteCodeGenerator::write_assign_true(GDScriptCodeGenerator::Address const&) */

void GDScriptByteCodeGenerator::write_assign_true(Address *param_1)

{
  Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0x17);
  append(param_1);
  return;
}



/* GDScriptByteCodeGenerator::write_assign_null(GDScriptCodeGenerator::Address const&) */

void GDScriptByteCodeGenerator::write_assign_null(Address *param_1)

{
  Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0x16);
  append(param_1);
  return;
}



/* GDScriptByteCodeGenerator::write_get_static_variable(GDScriptCodeGenerator::Address const&,
   GDScriptCodeGenerator::Address const&, int) */

void __thiscall
GDScriptByteCodeGenerator::write_get_static_variable
          (GDScriptByteCodeGenerator *this,Address *param_1,Address *param_2,int param_3)

{
  Vector<int>::push_back((Vector<int> *)(this + 0x20),0x14);
  append((Address *)this);
  append((Address *)this);
  Vector<int>::push_back((Vector<int> *)(this + 0x20),param_3);
  return;
}



/* GDScriptByteCodeGenerator::write_set_static_variable(GDScriptCodeGenerator::Address const&,
   GDScriptCodeGenerator::Address const&, int) */

void __thiscall
GDScriptByteCodeGenerator::write_set_static_variable
          (GDScriptByteCodeGenerator *this,Address *param_1,Address *param_2,int param_3)

{
  Vector<int>::push_back((Vector<int> *)(this + 0x20),0x13);
  append((Address *)this);
  append((Address *)this);
  Vector<int>::push_back((Vector<int> *)(this + 0x20),param_3);
  return;
}



/* GDScriptByteCodeGenerator::write_ternary_false_expr(GDScriptCodeGenerator::Address const&) */

void GDScriptByteCodeGenerator::write_ternary_false_expr(Address *param_1)

{
  code *pcVar1;
  
  Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0x15);
  if (*(long *)(param_1 + 0x380) != 0) {
    append(param_1);
    append(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptByteCodeGenerator::write_ternary_true_expr(GDScriptCodeGenerator::Address const&) */

void GDScriptByteCodeGenerator::write_ternary_true_expr(Address *param_1)

{
  Vector<int> *this;
  code *pcVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  this = (Vector<int> *)(param_1 + 0x20);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Vector<int>::push_back(this,0x15);
  if (*(long *)(param_1 + 0x380) != 0) {
    append(param_1);
    append(param_1);
    Vector<int>::push_back(this,0x3b);
    if (*(long *)(param_1 + 0x28) == 0) {
      local_24 = 0;
    }
    else {
      local_24 = *(int *)(*(long *)(param_1 + 0x28) + -8);
    }
    List<int,DefaultAllocator>::push_back((List<int,DefaultAllocator> *)(param_1 + 0x390),&local_24)
    ;
    Vector<int>::push_back(this,0);
    if (*(long *)(param_1 + 0x388) != 0) {
      patch_jump((GDScriptByteCodeGenerator *)param_1,**(int **)(*(long *)(param_1 + 0x388) + 8));
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        List<int,DefaultAllocator>::pop_back((List<int,DefaultAllocator> *)(param_1 + 0x388));
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptByteCodeGenerator::write_ternary_condition(GDScriptCodeGenerator::Address const&) */

void GDScriptByteCodeGenerator::write_ternary_condition(Address *param_1)

{
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0x3d);
  append(param_1);
  if (*(long *)(param_1 + 0x28) == 0) {
    local_24 = 0;
  }
  else {
    local_24 = *(int *)(*(long *)(param_1 + 0x28) + -8);
  }
  List<int,DefaultAllocator>::push_back((List<int,DefaultAllocator> *)(param_1 + 0x388),&local_24);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_end_or(GDScriptCodeGenerator::Address const&) */

void GDScriptByteCodeGenerator::write_end_or(Address *param_1)

{
  Vector<int> *this;
  code *pcVar1;
  int iVar2;
  
  this = (Vector<int> *)(param_1 + 0x20);
  Vector<int>::push_back(this,0x18);
  append(param_1);
  Vector<int>::push_back(this,0x3b);
  if (*(long *)(param_1 + 0x28) == 0) {
    iVar2 = 3;
  }
  else {
    iVar2 = (int)*(undefined8 *)(*(long *)(param_1 + 0x28) + -8) + 3;
  }
  Vector<int>::push_back(this,iVar2);
  if (*(long *)(param_1 + 0x370) != 0) {
    patch_jump((GDScriptByteCodeGenerator *)param_1,**(int **)(*(long *)(param_1 + 0x370) + 8));
    if (*(long *)(param_1 + 0x378) != 0) {
      patch_jump((GDScriptByteCodeGenerator *)param_1,**(int **)(*(long *)(param_1 + 0x378) + 8));
      List<int,DefaultAllocator>::pop_back((List<int,DefaultAllocator> *)(param_1 + 0x370));
      List<int,DefaultAllocator>::pop_back((List<int,DefaultAllocator> *)(param_1 + 0x378));
      Vector<int>::push_back(this,0x17);
      append(param_1);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptByteCodeGenerator::write_or_right_operand(GDScriptCodeGenerator::Address const&) */

void GDScriptByteCodeGenerator::write_or_right_operand(Address *param_1)

{
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0x3c);
  append(param_1);
  if (*(long *)(param_1 + 0x28) == 0) {
    local_24 = 0;
  }
  else {
    local_24 = *(int *)(*(long *)(param_1 + 0x28) + -8);
  }
  List<int,DefaultAllocator>::push_back((List<int,DefaultAllocator> *)(param_1 + 0x378),&local_24);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_or_left_operand(GDScriptCodeGenerator::Address const&) */

void GDScriptByteCodeGenerator::write_or_left_operand(Address *param_1)

{
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0x3c);
  append(param_1);
  if (*(long *)(param_1 + 0x28) == 0) {
    local_24 = 0;
  }
  else {
    local_24 = *(int *)(*(long *)(param_1 + 0x28) + -8);
  }
  List<int,DefaultAllocator>::push_back((List<int,DefaultAllocator> *)(param_1 + 0x370),&local_24);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_end_and(GDScriptCodeGenerator::Address const&) */

void GDScriptByteCodeGenerator::write_end_and(Address *param_1)

{
  Vector<int> *this;
  code *pcVar1;
  int iVar2;
  
  this = (Vector<int> *)(param_1 + 0x20);
  Vector<int>::push_back(this,0x17);
  append(param_1);
  Vector<int>::push_back(this,0x3b);
  if (*(long *)(param_1 + 0x28) == 0) {
    iVar2 = 3;
  }
  else {
    iVar2 = (int)*(undefined8 *)(*(long *)(param_1 + 0x28) + -8) + 3;
  }
  Vector<int>::push_back(this,iVar2);
  if (*(long *)(param_1 + 0x370) != 0) {
    patch_jump((GDScriptByteCodeGenerator *)param_1,**(int **)(*(long *)(param_1 + 0x370) + 8));
    if (*(long *)(param_1 + 0x378) != 0) {
      patch_jump((GDScriptByteCodeGenerator *)param_1,**(int **)(*(long *)(param_1 + 0x378) + 8));
      List<int,DefaultAllocator>::pop_back((List<int,DefaultAllocator> *)(param_1 + 0x370));
      List<int,DefaultAllocator>::pop_back((List<int,DefaultAllocator> *)(param_1 + 0x378));
      Vector<int>::push_back(this,0x18);
      append(param_1);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptByteCodeGenerator::write_and_right_operand(GDScriptCodeGenerator::Address const&) */

void GDScriptByteCodeGenerator::write_and_right_operand(Address *param_1)

{
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0x3d);
  append(param_1);
  if (*(long *)(param_1 + 0x28) == 0) {
    local_24 = 0;
  }
  else {
    local_24 = *(int *)(*(long *)(param_1 + 0x28) + -8);
  }
  List<int,DefaultAllocator>::push_back((List<int,DefaultAllocator> *)(param_1 + 0x378),&local_24);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_and_left_operand(GDScriptCodeGenerator::Address const&) */

void GDScriptByteCodeGenerator::write_and_left_operand(Address *param_1)

{
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0x3d);
  append(param_1);
  if (*(long *)(param_1 + 0x28) == 0) {
    local_24 = 0;
  }
  else {
    local_24 = *(int *)(*(long *)(param_1 + 0x28) + -8);
  }
  List<int,DefaultAllocator>::push_back((List<int,DefaultAllocator> *)(param_1 + 0x370),&local_24);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_type_adjust(GDScriptCodeGenerator::Address const&,
   Variant::Type) */

void __thiscall
GDScriptByteCodeGenerator::write_type_adjust
          (GDScriptByteCodeGenerator *this,undefined8 param_2,undefined4 param_3)

{
  switch(param_3) {
  case 0:
  case 0x27:
    return;
  case 1:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x72);
    break;
  case 2:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x73);
    break;
  case 3:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x74);
    break;
  case 4:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x75);
    break;
  case 5:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x76);
    break;
  case 6:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x77);
    break;
  case 7:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x78);
    break;
  case 8:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x79);
    break;
  case 9:
  case 0xc:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x7a);
    break;
  case 10:
  case 0xd:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x7b);
    break;
  case 0xb:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x7c);
    break;
  case 0xe:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x7f);
    break;
  case 0xf:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x80);
    break;
  case 0x10:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x81);
    break;
  case 0x11:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x82);
    break;
  case 0x12:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x83);
    break;
  case 0x13:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x84);
    break;
  case 0x14:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x85);
    break;
  case 0x15:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x86);
    break;
  case 0x16:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x87);
    break;
  case 0x17:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x88);
    break;
  case 0x18:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x89);
    break;
  case 0x19:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x8a);
    break;
  case 0x1a:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x8b);
    break;
  case 0x1b:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x8c);
    break;
  case 0x1c:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x8d);
    break;
  case 0x1d:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x8e);
    break;
  case 0x1e:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x8f);
    break;
  case 0x1f:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x90);
    break;
  case 0x20:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x91);
    break;
  case 0x21:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x92);
    break;
  case 0x22:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x93);
    break;
  case 0x23:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x94);
    break;
  case 0x24:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x95);
    break;
  case 0x25:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x96);
    break;
  case 0x26:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0x97);
  }
  append((Address *)this);
  return;
}



/* GDScriptByteCodeGenerator::clear_address(GDScriptCodeGenerator::Address const&) */

void __thiscall
GDScriptByteCodeGenerator::clear_address(GDScriptByteCodeGenerator *this,Address *param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
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
  uint uVar21;
  char cVar22;
  uint uVar23;
  ulong uVar24;
  code *pcVar25;
  long lVar26;
  uint *puVar27;
  uint uVar28;
  undefined4 uVar29;
  ulong uVar30;
  ulong uVar31;
  uint *puVar32;
  uint *puVar33;
  ulong uVar34;
  ulong uVar35;
  long in_FS_OFFSET;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  GDScriptDataType local_b8 [8];
  undefined8 local_b0 [7];
  uint local_78 [2];
  undefined8 local_70 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar26 = *(long *)this;
  if ((param_1[0x1c] == (Address)0x0) || (*(int *)(param_1 + 0x18) != 1)) {
    if (*(code **)(lVar26 + 0x158) == write_assign_null) {
      Vector<int>::push_back((Vector<int> *)(this + 0x20),0x16);
      append((Address *)this);
    }
    else {
      (**(code **)(lVar26 + 0x158))(this,param_1);
    }
    goto LAB_00108812;
  }
  uVar29 = *(undefined4 *)(param_1 + 0x20);
  switch(uVar29) {
  case 0:
  case 0x18:
    (**(code **)(lVar26 + 0x158))(this,param_1);
    goto LAB_00108812;
  case 1:
    (**(code **)(lVar26 + 0x168))(this,param_1);
    goto LAB_00108812;
  default:
    pcVar25 = *(code **)(lVar26 + 0x208);
    break;
  case 0x1b:
    if (*(long *)(param_1 + 0x10) != 0) {
      pcVar25 = *(code **)(lVar26 + 0x228);
      local_c0 = 0;
      GDScriptDataType::get_container_element_type_or_variant((int)(GDScriptDataType *)local_78);
      GDScriptDataType::get_container_element_type_or_variant((int)local_b8);
      (*pcVar25)(this,param_1,local_b8,(GDScriptDataType *)local_78,local_c8);
      GDScriptDataType::~GDScriptDataType(local_b8);
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)local_78);
      CowData<GDScriptCodeGenerator::Address>::_unref
                ((CowData<GDScriptCodeGenerator::Address> *)&local_c0);
      goto LAB_00108812;
    }
    pcVar25 = *(code **)(lVar26 + 0x208);
    uVar29 = 0x1b;
    break;
  case 0x1c:
    if ((*(long *)(param_1 + 0x10) != 0) && (0 < *(long *)(*(long *)(param_1 + 0x10) + -8))) {
      pcVar25 = *(code **)(lVar26 + 0x218);
      local_b0[0] = 0;
      GDScriptDataType::get_container_element_type((int)(GDScriptDataType *)local_78);
      (*pcVar25)(this,param_1,(GDScriptDataType *)local_78,local_b8);
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)local_78);
      CowData<GDScriptCodeGenerator::Address>::_unref
                ((CowData<GDScriptCodeGenerator::Address> *)local_b0);
      goto LAB_00108812;
    }
    pcVar25 = *(code **)(lVar26 + 0x208);
    uVar29 = 0x1c;
  }
  local_70[0] = 0;
  (*pcVar25)(this,param_1,uVar29,local_78);
  CowData<GDScriptCodeGenerator::Address>::_unref
            ((CowData<GDScriptCodeGenerator::Address> *)local_70);
LAB_00108812:
  if (*(int *)param_1 == 4) {
    local_78[0] = 0;
    cVar22 = HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_lookup_pos
                       ((HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *)
                        (this + 0x80),(int *)(ulong)*(uint *)(param_1 + 4),local_78);
    uVar21 = local_78[0];
    if (cVar22 != '\0') {
      uVar24 = (ulong)local_78[0];
      lVar5 = *(long *)(this + 0x90);
      lVar6 = *(long *)(this + 0x98);
      puVar1 = (uint *)(lVar5 + uVar24 * 4);
      local_78[0] = *puVar1;
      uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa0) * 4);
      uVar35 = CONCAT44(0,uVar23);
      lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xa0) * 8);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)(local_78[0] + 1) * lVar7;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar35;
      lVar26 = SUB168(auVar9 * auVar15,8) * 4;
      uVar28 = SUB164(auVar9 * auVar15,8);
      puVar33 = (uint *)(lVar6 + lVar26);
      if ((*puVar33 == 0) ||
         (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)*puVar33 * lVar7, auVar16._8_8_ = 0,
         auVar16._0_8_ = uVar35, auVar11._8_8_ = 0,
         auVar11._0_8_ = (ulong)((uVar23 + uVar28) - SUB164(auVar10 * auVar16,8)) * lVar7,
         auVar17._8_8_ = 0, auVar17._0_8_ = uVar35, SUB164(auVar11 * auVar17,8) == 0)) {
        uVar34 = (ulong)local_78[0];
      }
      else {
        lVar8 = *(long *)(this + 0x88);
        uVar31 = (ulong)local_78[0];
        uVar34 = (ulong)uVar28;
        while( true ) {
          puVar27 = (uint *)(lVar26 + lVar8);
          puVar2 = (uint *)(lVar8 + uVar31 * 4);
          puVar32 = (uint *)(uVar31 * 4 + lVar6);
          puVar3 = (undefined4 *)(lVar5 + (ulong)*puVar27 * 4);
          puVar4 = (undefined4 *)(lVar5 + (ulong)*puVar2 * 4);
          uVar29 = *puVar4;
          *puVar4 = *puVar3;
          *puVar3 = uVar29;
          uVar28 = *puVar33;
          *puVar33 = *puVar32;
          *puVar32 = uVar28;
          uVar28 = *puVar27;
          *puVar27 = *puVar2;
          local_78[0] = (uint)uVar34;
          *puVar2 = uVar28;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(local_78[0] + 1) * lVar7;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar35;
          uVar30 = SUB168(auVar14 * auVar20,8);
          lVar26 = uVar30 * 4;
          puVar33 = (uint *)(lVar6 + lVar26);
          if ((*puVar33 == 0) ||
             (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)*puVar33 * lVar7, auVar18._8_8_ = 0,
             auVar18._0_8_ = uVar35, auVar13._8_8_ = 0,
             auVar13._0_8_ =
                  (ulong)((SUB164(auVar14 * auVar20,8) + uVar23) - SUB164(auVar12 * auVar18,8)) *
                  lVar7, auVar19._8_8_ = 0, auVar19._0_8_ = uVar35, SUB164(auVar13 * auVar19,8) == 0
             )) break;
          uVar31 = uVar34;
          uVar34 = uVar30 & 0xffffffff;
        }
      }
      *(undefined4 *)(lVar6 + uVar34 * 4) = 0;
      uVar23 = *(int *)(this + 0xa4) - 1;
      *(uint *)(this + 0xa4) = uVar23;
      if (uVar21 < uVar23) {
        *(undefined4 *)(uVar24 * 4 + *(long *)(this + 0x80)) =
             *(undefined4 *)(*(long *)(this + 0x80) + (ulong)uVar23 * 4);
        *puVar1 = *(uint *)(lVar5 + (ulong)*(uint *)(this + 0xa4) * 4);
        *(uint *)(*(long *)(this + 0x88) +
                 (ulong)*(uint *)(lVar5 + (ulong)*(uint *)(this + 0xa4) * 4) * 4) = uVar21;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::add_parameter(StringName const&, bool, GDScriptDataType const&) */

void __thiscall
GDScriptByteCodeGenerator::add_parameter
          (GDScriptByteCodeGenerator *this,StringName *param_1,bool param_2,
          GDScriptDataType *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  GDScriptDataType local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  lVar1 = *(long *)(this + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  *(int *)(lVar1 + 0xf4) = *(int *)(lVar1 + 0xf4) + 1;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_48 = 0;
  GDScriptDataType::operator=(local_78,param_3);
  if (*(long *)(lVar1 + 0x20) == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(*(long *)(lVar1 + 0x20) + -8) + 1;
  }
  iVar2 = CowData<GDScriptDataType>::resize<false>
                    ((CowData<GDScriptDataType> *)(lVar1 + 0x20),lVar4);
  if (iVar2 == 0) {
    if (*(long *)(lVar1 + 0x20) == 0) {
      lVar3 = -1;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(lVar1 + 0x20) + -8);
      lVar3 = lVar4 + -1;
      if (-1 < lVar3) {
        CowData<GDScriptDataType>::_copy_on_write((CowData<GDScriptDataType> *)(lVar1 + 0x20));
        GDScriptDataType::operator=
                  ((GDScriptDataType *)(*(long *)(lVar1 + 0x20) + lVar3 * 0x38),local_78);
        goto LAB_00108cae;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar4,"p_index","size()","",false,false
              );
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_00108cae:
  GDScriptDataType::~GDScriptDataType(local_78);
  if (param_2) {
    *(int *)(*(long *)(this + 0x10) + 0x284) = *(int *)(*(long *)(this + 0x10) + 0x284) + 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00108cf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))(this,param_1,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::add_local(StringName const&, GDScriptDataType const&) */

int __thiscall
GDScriptByteCodeGenerator::add_local
          (GDScriptByteCodeGenerator *this,StringName *param_1,GDScriptDataType *param_2)

{
  GDScriptByteCodeGenerator GVar1;
  undefined1 uVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined4 local_58;
  int local_54;
  undefined1 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x78) == 0) {
    iVar5 = 3;
  }
  else {
    iVar5 = (int)*(undefined8 *)(*(long *)(this + 0x78) + -8) + 3;
  }
  uVar2 = GDScriptDataType::can_contain_object(param_2);
  local_58 = *(undefined4 *)(param_2 + 0x18);
  local_54 = CONCAT31(local_54._1_3_,uVar2);
  local_48 = 0;
  Vector<GDScriptByteCodeGenerator::StackSlot>::push_back
            ((Vector<GDScriptByteCodeGenerator::StackSlot> *)(this + 0x70),&local_58);
  CowData<int>::_unref((CowData<int> *)&local_48);
  if (*(long *)(this + 0x78) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(this + 0x78) + -8);
  }
  if (*(int *)(this + 0x128) < lVar4) {
    *(int *)(this + 0x128) = (int)lVar4;
  }
  piVar3 = (int *)RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::operator[]
                            ((RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *)
                             (this + 0x38),param_1);
  GVar1 = this[0x18];
  *piVar3 = iVar5;
  if (GVar1 != (GDScriptByteCodeGenerator)0x0) {
    piVar3 = (int *)RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::operator[]
                              ((RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *)
                               (this + 0x110),param_1);
    *piVar3 = iVar5;
    local_58 = *(undefined4 *)(this + 300);
    local_48 = 0;
    local_50 = 1;
    StringName::operator=((StringName *)&local_48,param_1);
    local_54 = iVar5;
    List<GDScriptFunction::StackDebug,DefaultAllocator>::push_back
              ((List<GDScriptFunction::StackDebug,DefaultAllocator> *)(this + 0x100),
               (StackDebug *)&local_58);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::add_local_constant(StringName const&, Variant const&) */

undefined4 __thiscall
GDScriptByteCodeGenerator::add_local_constant
          (GDScriptByteCodeGenerator *this,StringName *param_1,Variant *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (*(code **)(*(long *)this + 0x18) == add_or_get_constant) {
    uVar1 = get_constant_pos(this,param_2);
  }
  else {
    uVar1 = (**(code **)(*(long *)this + 0x18))();
  }
  puVar2 = (undefined4 *)
           RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::operator[]
                     ((RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *)(this + 0x58)
                      ,param_1);
  *puVar2 = uVar1;
  return uVar1;
}



/* GDScriptByteCodeGenerator::write_type_test(GDScriptCodeGenerator::Address const&,
   GDScriptCodeGenerator::Address const&, GDScriptDataType const&) */

void __thiscall
GDScriptByteCodeGenerator::write_type_test
          (GDScriptByteCodeGenerator *this,Address *param_1,Address *param_2,
          GDScriptDataType *param_3)

{
  Vector<int> *pVVar1;
  uint uVar2;
  long in_FS_OFFSET;
  GDScriptDataType aGStack_d8 [24];
  int local_c0;
  StringName local_b8 [8];
  Object *local_b0;
  GDScriptDataType local_98 [24];
  int local_80;
  StringName local_78 [8];
  Object *local_70;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(uint *)(param_3 + 0x10);
  if (uVar2 == 2) {
    Vector<int>::push_back((Vector<int> *)(this + 0x20),5);
    append((Address *)this);
    append((Address *)this);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      append(this,(StringName *)(param_3 + 0x20));
      return;
    }
    goto LAB_001093ec;
  }
  if (uVar2 < 3) {
    if (uVar2 == 1) {
      if (*(int *)(param_3 + 0x18) == 0x1c) {
        if ((*(long *)(param_3 + 8) == 0) || (*(long *)(*(long *)(param_3 + 8) + -8) < 1))
        goto LAB_00109350;
        pVVar1 = (Vector<int> *)(this + 0x20);
        GDScriptDataType::get_container_element_type((int)local_98);
        Vector<int>::push_back(pVVar1,3);
        append((Address *)this);
        append((Address *)this);
        Variant::Variant((Variant *)local_58,local_70);
        uVar2 = get_constant_pos(this,(Variant *)local_58);
        Vector<int>::push_back(pVVar1,uVar2 | 0x1000000);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Vector<int>::push_back(pVVar1,local_80);
        append(this,local_78);
        GDScriptDataType::~GDScriptDataType(local_98);
      }
      else {
        if ((*(int *)(param_3 + 0x18) != 0x1b) || (*(long *)(param_3 + 8) == 0)) {
LAB_00109350:
          Vector<int>::push_back((Vector<int> *)(this + 0x20),2);
          append((Address *)this);
          append((Address *)this);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            Vector<int>::push_back((Vector<int> *)(this + 0x20),*(int *)(param_3 + 0x18));
            return;
          }
          goto LAB_001093ec;
        }
        GDScriptDataType::get_container_element_type_or_variant((int)aGStack_d8);
        GDScriptDataType::get_container_element_type_or_variant((int)local_98);
        pVVar1 = (Vector<int> *)(this + 0x20);
        Vector<int>::push_back(pVVar1,4);
        append((Address *)this);
        append((Address *)this);
        Variant::Variant((Variant *)local_58,local_b0);
        uVar2 = get_constant_pos(this,(Variant *)local_58);
        Vector<int>::push_back(pVVar1,uVar2 | 0x1000000);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_58,local_70);
        uVar2 = get_constant_pos(this,(Variant *)local_58);
        Vector<int>::push_back(pVVar1,uVar2 | 0x1000000);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Vector<int>::push_back(pVVar1,local_c0);
        append(this,local_b8);
        Vector<int>::push_back(pVVar1,local_80);
        append(this,local_78);
        GDScriptDataType::~GDScriptDataType(local_98);
        GDScriptDataType::~GDScriptDataType(aGStack_d8);
      }
LAB_00109029:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001093ec;
    }
  }
  else if (uVar2 - 3 < 2) {
    Variant::Variant((Variant *)local_58,*(Object **)(param_3 + 0x28));
    Vector<int>::push_back((Vector<int> *)(this + 0x20),6);
    append((Address *)this);
    append((Address *)this);
    uVar2 = get_constant_pos(this,(Variant *)local_58);
    Vector<int>::push_back((Vector<int> *)(this + 0x20),uVar2 | 0x1000000);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    goto LAB_00109029;
  }
  _err_print_error("write_type_test","modules/gdscript/gdscript_byte_codegen.cpp",0x2b0,
                   "Compiler bug: unresolved type in type test.",0,0);
  Vector<int>::push_back((Vector<int> *)(this + 0x20),0x18);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    append((Address *)this);
    return;
  }
LAB_001093ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_set_member(GDScriptCodeGenerator::Address const&, StringName
   const&) */

void __thiscall
GDScriptByteCodeGenerator::write_set_member
          (GDScriptByteCodeGenerator *this,Address *param_1,StringName *param_2)

{
  Vector<int>::push_back((Vector<int> *)(this + 0x20),0x11);
  append((Address *)this);
  append(this,param_2);
  return;
}



/* GDScriptByteCodeGenerator::write_get_member(GDScriptCodeGenerator::Address const&, StringName
   const&) */

void __thiscall
GDScriptByteCodeGenerator::write_get_member
          (GDScriptByteCodeGenerator *this,Address *param_1,StringName *param_2)

{
  Vector<int>::push_back((Vector<int> *)(this + 0x20),0x12);
  append((Address *)this);
  append(this,param_2);
  return;
}



/* GDScriptByteCodeGenerator::write_assign_with_conversion(GDScriptCodeGenerator::Address const&,
   GDScriptCodeGenerator::Address const&) */

void GDScriptByteCodeGenerator::write_assign_with_conversion(Address *param_1,Address *param_2)

{
  Vector<int> *pVVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  long in_FS_OFFSET;
  GDScriptDataType aGStack_d8 [24];
  int local_c0;
  StringName local_b8 [8];
  Object *local_b0;
  GDScriptDataType local_98 [24];
  int local_80;
  StringName local_78 [8];
  Object *local_70;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(uint *)(param_2 + 0x18);
  if (uVar2 == 2) {
    piVar3 = (int *)HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                    ::operator[]((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                                  *)(GDScriptLanguage::singleton + 400),
                                 (StringName *)(param_2 + 0x28));
    Variant::Variant((Variant *)local_58,
                     (Variant *)
                     (*(long *)(GDScriptLanguage::singleton + 0x178) + (long)*piVar3 * 0x18));
    uVar2 = get_constant_pos((GDScriptByteCodeGenerator *)param_1,(Variant *)local_58);
    iVar4 = 0x1c;
LAB_001094f8:
    Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),iVar4);
    append(param_1);
    append(param_1);
    Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),uVar2 | 0x1000000);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    if (2 < uVar2) {
      if (1 < uVar2 - 3) {
LAB_00109728:
        _err_print_error("write_assign_with_conversion","modules/gdscript/gdscript_byte_codegen.cpp"
                         ,0x3c0,"Compiler bug: unresolved assign.",0,0);
        Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0x15);
        append(param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          append(param_1);
          return;
        }
        goto LAB_00109904;
      }
      Variant::Variant((Variant *)local_58,*(Object **)(param_2 + 0x30));
      uVar2 = get_constant_pos((GDScriptByteCodeGenerator *)param_1,(Variant *)local_58);
      iVar4 = 0x1d;
      goto LAB_001094f8;
    }
    if (uVar2 != 1) goto LAB_00109728;
    if (*(int *)(param_2 + 0x20) == 0x1c) {
      if ((*(long *)(param_2 + 0x10) == 0) || (*(long *)(*(long *)(param_2 + 0x10) + -8) < 1))
      goto LAB_00109870;
      pVVar1 = (Vector<int> *)(param_1 + 0x20);
      GDScriptDataType::get_container_element_type((int)local_98);
      Vector<int>::push_back(pVVar1,0x1a);
      append(param_1);
      append(param_1);
      Variant::Variant((Variant *)local_58,local_70);
      uVar2 = get_constant_pos((GDScriptByteCodeGenerator *)param_1,(Variant *)local_58);
      Vector<int>::push_back(pVVar1,uVar2 | 0x1000000);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Vector<int>::push_back(pVVar1,local_80);
      append((GDScriptByteCodeGenerator *)param_1,local_78);
      GDScriptDataType::~GDScriptDataType(local_98);
    }
    else {
      if ((*(int *)(param_2 + 0x20) != 0x1b) || (*(long *)(param_2 + 0x10) == 0)) {
LAB_00109870:
        Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0x19);
        append(param_1);
        append(param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),*(int *)(param_2 + 0x20));
          return;
        }
        goto LAB_00109904;
      }
      GDScriptDataType::get_container_element_type_or_variant((int)aGStack_d8);
      GDScriptDataType::get_container_element_type_or_variant((int)local_98);
      pVVar1 = (Vector<int> *)(param_1 + 0x20);
      Vector<int>::push_back(pVVar1,0x1b);
      append(param_1);
      append(param_1);
      Variant::Variant((Variant *)local_58,local_b0);
      uVar2 = get_constant_pos((GDScriptByteCodeGenerator *)param_1,(Variant *)local_58);
      Vector<int>::push_back(pVVar1,uVar2 | 0x1000000);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,local_70);
      uVar2 = get_constant_pos((GDScriptByteCodeGenerator *)param_1,(Variant *)local_58);
      Vector<int>::push_back(pVVar1,uVar2 | 0x1000000);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Vector<int>::push_back(pVVar1,local_c0);
      append((GDScriptByteCodeGenerator *)param_1,local_b8);
      Vector<int>::push_back(pVVar1,local_80);
      append((GDScriptByteCodeGenerator *)param_1,local_78);
      GDScriptDataType::~GDScriptDataType(local_98);
      GDScriptDataType::~GDScriptDataType(aGStack_d8);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00109904:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_assign(GDScriptCodeGenerator::Address const&,
   GDScriptCodeGenerator::Address const&) */

void __thiscall
GDScriptByteCodeGenerator::write_assign
          (GDScriptByteCodeGenerator *this,Address *param_1,Address *param_2)

{
  Vector<int> *pVVar1;
  int iVar2;
  uint uVar3;
  long in_FS_OFFSET;
  GDScriptDataType aGStack_d8 [24];
  int local_c0;
  StringName local_b8 [8];
  Object *local_b0;
  GDScriptDataType local_98 [24];
  int local_80;
  StringName local_78 [8];
  Object *local_70;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0x18) == 1) {
    iVar2 = *(int *)(param_1 + 0x20);
    if (iVar2 == 0x1c) {
      if ((*(long *)(param_1 + 0x10) != 0) && (0 < *(long *)(*(long *)(param_1 + 0x10) + -8))) {
        pVVar1 = (Vector<int> *)(this + 0x20);
        GDScriptDataType::get_container_element_type((int)local_98);
        Vector<int>::push_back(pVVar1,0x1a);
        append((Address *)this);
        append((Address *)this);
        Variant::Variant((Variant *)local_58,local_70);
        uVar3 = get_constant_pos(this,(Variant *)local_58);
        Vector<int>::push_back(pVVar1,uVar3 | 0x1000000);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Vector<int>::push_back(pVVar1,local_80);
        append(this,local_78);
        GDScriptDataType::~GDScriptDataType(local_98);
        goto LAB_00109b4c;
      }
    }
    else if ((iVar2 == 0x1b) && (*(long *)(param_1 + 0x10) != 0)) {
      GDScriptDataType::get_container_element_type_or_variant((int)aGStack_d8);
      GDScriptDataType::get_container_element_type_or_variant((int)local_98);
      pVVar1 = (Vector<int> *)(this + 0x20);
      Vector<int>::push_back(pVVar1,0x1b);
      append((Address *)this);
      append((Address *)this);
      Variant::Variant((Variant *)local_58,local_b0);
      uVar3 = get_constant_pos(this,(Variant *)local_58);
      Vector<int>::push_back(pVVar1,uVar3 | 0x1000000);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,local_70);
      uVar3 = get_constant_pos(this,(Variant *)local_58);
      Vector<int>::push_back(pVVar1,uVar3 | 0x1000000);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Vector<int>::push_back(pVVar1,local_c0);
      append(this,local_b8);
      Vector<int>::push_back(pVVar1,local_80);
      append(this,local_78);
      GDScriptDataType::~GDScriptDataType(local_98);
      GDScriptDataType::~GDScriptDataType(aGStack_d8);
LAB_00109b4c:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00109c60;
    }
    if ((*(int *)(param_2 + 0x18) == 1) && (iVar2 != *(int *)(param_2 + 0x20))) {
      Vector<int>::push_back((Vector<int> *)(this + 0x20),0x19);
      append((Address *)this);
      append((Address *)this);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Vector<int>::push_back((Vector<int> *)(this + 0x20),*(int *)(param_1 + 0x20));
        return;
      }
      goto LAB_00109c60;
    }
  }
  Vector<int>::push_back((Vector<int> *)(this + 0x20),0x15);
  append((Address *)this);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    append((Address *)this);
    return;
  }
LAB_00109c60:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_store_named_global(GDScriptCodeGenerator::Address const&,
   StringName const&) */

void __thiscall
GDScriptByteCodeGenerator::write_store_named_global
          (GDScriptByteCodeGenerator *this,Address *param_1,StringName *param_2)

{
  Vector<int>::push_back((Vector<int> *)(this + 0x20),0x71);
  append((Address *)this);
  append(this,param_2);
  return;
}



/* GDScriptByteCodeGenerator::write_call_script_function(GDScriptCodeGenerator::Address const&,
   GDScriptCodeGenerator::Address const&, StringName const&, Vector<GDScriptCodeGenerator::Address>
   const&) */

void __thiscall
GDScriptByteCodeGenerator::write_call_script_function
          (GDScriptByteCodeGenerator *this,Address *param_1,Address *param_2,StringName *param_3,
          Vector *param_4)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 local_98 [8];
  GDScriptDataType local_90 [56];
  char local_58;
  CallTarget *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_4 + 8) == 0) {
    iVar1 = 2;
  }
  else {
    iVar1 = (int)*(undefined8 *)(*(long *)(param_4 + 8) + -8) + 2;
  }
  append_opcode_and_argcount(this,(*(int *)param_1 != 7) + '\'',iVar1);
  for (lVar2 = 0; (*(long *)(param_4 + 8) != 0 && (lVar2 < *(long *)(*(long *)(param_4 + 8) + -8)));
      lVar2 = lVar2 + 1) {
    append((Address *)this);
  }
  append((Address *)this);
  get_call_target(local_98,this,param_1,0);
  append((Address *)this);
  if (*(long *)(param_4 + 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(long *)(param_4 + 8) + -8);
  }
  Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar1);
  append(this,param_3);
  if (local_58 != '\0') {
    CallTarget::cleanup(local_50);
  }
  GDScriptDataType::~GDScriptDataType(local_90);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_super_call(GDScriptCodeGenerator::Address const&, StringName
   const&, Vector<GDScriptCodeGenerator::Address> const&) */

void __thiscall
GDScriptByteCodeGenerator::write_super_call
          (GDScriptByteCodeGenerator *this,Address *param_1,StringName *param_2,Vector *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined1 local_88 [8];
  GDScriptDataType local_80 [56];
  char local_48;
  CallTarget *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_3 + 8) == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = (int)*(undefined8 *)(*(long *)(param_3 + 8) + -8) + 1;
  }
  append_opcode_and_argcount(this,0x2e,iVar2);
  lVar1 = *(long *)(param_3 + 8);
  for (lVar3 = 0; (lVar1 != 0 && (lVar3 < *(long *)(lVar1 + -8))); lVar3 = lVar3 + 1) {
    append((Address *)this);
    lVar1 = *(long *)(param_3 + 8);
  }
  get_call_target(local_88,this,param_1,0);
  append((Address *)this);
  if (*(long *)(param_3 + 8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(long *)(param_3 + 8) + -8);
  }
  Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar2);
  append(this,param_2);
  if (local_48 != '\0') {
    CallTarget::cleanup(local_40);
  }
  GDScriptDataType::~GDScriptDataType(local_80);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_call_async(GDScriptCodeGenerator::Address const&,
   GDScriptCodeGenerator::Address const&, StringName const&, Vector<GDScriptCodeGenerator::Address>
   const&) */

void __thiscall
GDScriptByteCodeGenerator::write_call_async
          (GDScriptByteCodeGenerator *this,Address *param_1,Address *param_2,StringName *param_3,
          Vector *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined1 local_98 [8];
  GDScriptDataType local_90 [56];
  char local_58;
  CallTarget *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_4 + 8) == 0) {
    iVar2 = 2;
  }
  else {
    iVar2 = (int)*(undefined8 *)(*(long *)(param_4 + 8) + -8) + 2;
  }
  append_opcode_and_argcount(this,0x29,iVar2);
  lVar1 = *(long *)(param_4 + 8);
  for (lVar3 = 0; (lVar1 != 0 && (lVar3 < *(long *)(lVar1 + -8))); lVar3 = lVar3 + 1) {
    append((Address *)this);
    lVar1 = *(long *)(param_4 + 8);
  }
  append((Address *)this);
  get_call_target(local_98,this,param_1,0);
  append((Address *)this);
  if (*(long *)(param_4 + 8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(long *)(param_4 + 8) + -8);
  }
  Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar2);
  append(this,param_3);
  if (local_58 != '\0') {
    CallTarget::cleanup(local_50);
  }
  GDScriptDataType::~GDScriptDataType(local_90);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GDScriptByteCodeGenerator::write_call_self(GDScriptCodeGenerator::Address const&, StringName
   const&, Vector<GDScriptCodeGenerator::Address> const&) */

void __thiscall
GDScriptByteCodeGenerator::write_call_self
          (GDScriptByteCodeGenerator *this,Address *param_1,StringName *param_2,Vector *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined1 local_88 [8];
  GDScriptDataType local_80 [56];
  char local_48;
  CallTarget *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_3 + 8) == 0) {
    iVar2 = 2;
  }
  else {
    iVar2 = (int)*(undefined8 *)(*(long *)(param_3 + 8) + -8) + 2;
  }
  append_opcode_and_argcount(this,(*(int *)param_1 != 7) + '\'',iVar2);
  lVar1 = *(long *)(param_3 + 8);
  for (lVar3 = 0; (lVar1 != 0 && (lVar3 < *(long *)(lVar1 + -8))); lVar3 = lVar3 + 1) {
    append((Address *)this);
    lVar1 = *(long *)(param_3 + 8);
  }
  Vector<int>::push_back((Vector<int> *)(this + 0x20),0);
  get_call_target(local_88,this,param_1,0);
  append((Address *)this);
  if (*(long *)(param_3 + 8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(long *)(param_3 + 8) + -8);
  }
  Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar2);
  append(this,param_2);
  if (local_48 != '\0') {
    CallTarget::cleanup(local_40);
  }
  GDScriptDataType::~GDScriptDataType(local_80);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GDScriptByteCodeGenerator::write_call_self_async(GDScriptCodeGenerator::Address const&,
   StringName const&, Vector<GDScriptCodeGenerator::Address> const&) */

void __thiscall
GDScriptByteCodeGenerator::write_call_self_async
          (GDScriptByteCodeGenerator *this,Address *param_1,StringName *param_2,Vector *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined1 local_88 [8];
  GDScriptDataType local_80 [56];
  char local_48;
  CallTarget *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_3 + 8) == 0) {
    iVar2 = 2;
  }
  else {
    iVar2 = (int)*(undefined8 *)(*(long *)(param_3 + 8) + -8) + 2;
  }
  append_opcode_and_argcount(this,0x29,iVar2);
  lVar1 = *(long *)(param_3 + 8);
  for (lVar3 = 0; (lVar1 != 0 && (lVar3 < *(long *)(lVar1 + -8))); lVar3 = lVar3 + 1) {
    append((Address *)this);
    lVar1 = *(long *)(param_3 + 8);
  }
  Vector<int>::push_back((Vector<int> *)(this + 0x20),0);
  get_call_target(local_88,this,param_1,0);
  append((Address *)this);
  if (*(long *)(param_3 + 8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(long *)(param_3 + 8) + -8);
  }
  Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar2);
  append(this,param_2);
  if (local_48 != '\0') {
    CallTarget::cleanup(local_40);
  }
  GDScriptDataType::~GDScriptDataType(local_80);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_construct_typed_array(GDScriptCodeGenerator::Address const&,
   GDScriptDataType const&, Vector<GDScriptCodeGenerator::Address> const&) */

void __thiscall
GDScriptByteCodeGenerator::write_construct_typed_array
          (GDScriptByteCodeGenerator *this,Address *param_1,GDScriptDataType *param_2,
          Vector *param_3)

{
  Vector<int> *this_00;
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 local_98 [8];
  GDScriptDataType local_90 [56];
  char local_58;
  CallTarget *local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_3 + 8) == 0) {
    iVar3 = 2;
  }
  else {
    iVar3 = (int)*(undefined8 *)(*(long *)(param_3 + 8) + -8) + 2;
  }
  append_opcode_and_argcount(this,0x24,iVar3);
  lVar1 = *(long *)(param_3 + 8);
  for (lVar4 = 0; (lVar1 != 0 && (lVar4 < *(long *)(lVar1 + -8))); lVar4 = lVar4 + 1) {
    append((Address *)this);
    lVar1 = *(long *)(param_3 + 8);
  }
  get_call_target(local_98,this,param_1,0);
  this_00 = (Vector<int> *)(this + 0x20);
  append((Address *)this);
  Variant::Variant((Variant *)local_48,*(Object **)(param_2 + 0x28));
  uVar2 = get_constant_pos(this,(Variant *)local_48);
  Vector<int>::push_back(this_00,uVar2 | 0x1000000);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (*(long *)(param_3 + 8) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(long *)(param_3 + 8) + -8);
  }
  Vector<int>::push_back(this_00,iVar3);
  Vector<int>::push_back(this_00,*(int *)(param_2 + 0x18));
  append(this,(StringName *)(param_2 + 0x20));
  if (local_58 != '\0') {
    CallTarget::cleanup(local_50);
  }
  GDScriptDataType::~GDScriptDataType(local_90);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_construct_typed_dictionary(GDScriptCodeGenerator::Address
   const&, GDScriptDataType const&, GDScriptDataType const&, Vector<GDScriptCodeGenerator::Address>
   const&) */

void __thiscall
GDScriptByteCodeGenerator::write_construct_typed_dictionary
          (GDScriptByteCodeGenerator *this,Address *param_1,GDScriptDataType *param_2,
          GDScriptDataType *param_3,Vector *param_4)

{
  Vector<int> *this_00;
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 local_a8 [8];
  GDScriptDataType local_a0 [56];
  char local_68;
  CallTarget *local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_4 + 8) == 0) {
    iVar3 = 3;
  }
  else {
    iVar3 = (int)*(undefined8 *)(*(long *)(param_4 + 8) + -8) + 3;
  }
  append_opcode_and_argcount(this,0x26,iVar3);
  lVar1 = *(long *)(param_4 + 8);
  for (lVar4 = 0; (lVar1 != 0 && (lVar4 < *(long *)(lVar1 + -8))); lVar4 = lVar4 + 1) {
    append((Address *)this);
    lVar1 = *(long *)(param_4 + 8);
  }
  get_call_target(local_a8,this,param_1,0);
  this_00 = (Vector<int> *)(this + 0x20);
  append((Address *)this);
  Variant::Variant((Variant *)local_58,*(Object **)(param_2 + 0x28));
  uVar2 = get_constant_pos(this,(Variant *)local_58);
  Vector<int>::push_back(this_00,uVar2 | 0x1000000);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*(Object **)(param_3 + 0x28));
  uVar2 = get_constant_pos(this,(Variant *)local_58);
  Vector<int>::push_back(this_00,uVar2 | 0x1000000);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (*(long *)(param_4 + 8) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)(*(long *)(*(long *)(param_4 + 8) + -8) / 2);
  }
  Vector<int>::push_back(this_00,iVar3);
  Vector<int>::push_back(this_00,*(int *)(param_2 + 0x18));
  append(this,(StringName *)(param_2 + 0x20));
  Vector<int>::push_back(this_00,*(int *)(param_3 + 0x18));
  append(this,(StringName *)(param_3 + 0x20));
  if (local_68 != '\0') {
    CallTarget::cleanup(local_60);
  }
  GDScriptDataType::~GDScriptDataType(local_a0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GDScriptByteCodeGenerator::write_return(GDScriptCodeGenerator::Address const&) */

void __thiscall
GDScriptByteCodeGenerator::write_return(GDScriptByteCodeGenerator *this,Address *param_1)

{
  Vector<int> *pVVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  long in_FS_OFFSET;
  GDScriptDataType aGStack_d8 [24];
  int local_c0;
  StringName local_b8 [8];
  Object *local_b0;
  GDScriptDataType local_98 [24];
  int local_80;
  StringName local_78 [8];
  Object *local_70;
  int local_58 [6];
  long local_40;
  
  lVar3 = *(long *)(this + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(lVar3 + 0x3c) != '\0') {
    uVar4 = *(uint *)(lVar3 + 0x38);
    if (param_1[0x1c] == (Address)0x0) {
      if (uVar4 == 2) {
        Vector<int>::push_back((Vector<int> *)(this + 0x20),0x44);
        append((Address *)this);
        piVar5 = (int *)HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                        ::operator[]((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                                      *)(GDScriptLanguage::singleton + 400),
                                     (StringName *)(*(long *)(this + 0x10) + 0x48));
        Variant::Variant((Variant *)local_58,
                         (Variant *)
                         (*(long *)(GDScriptLanguage::singleton + 0x178) + (long)*piVar5 * 0x18));
        uVar4 = get_constant_pos(this,(Variant *)local_58);
        Vector<int>::push_back((Vector<int> *)(this + 0x20),uVar4 | 0x1000000);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        if (uVar4 < 3) {
          if (uVar4 != 1) {
LAB_0010a9b0:
            _err_print_error("write_return","modules/gdscript/gdscript_byte_codegen.cpp",0x740,
                             "Compiler bug: unresolved return.",0,0);
            goto LAB_0010a65a;
          }
          if (*(int *)(lVar3 + 0x40) == 0x1c) {
            if ((*(long *)(lVar3 + 0x30) != 0) && (0 < *(long *)(*(long *)(lVar3 + 0x30) + -8)))
            goto LAB_0010a9f8;
          }
          else if ((*(int *)(lVar3 + 0x40) == 0x1b) && (*(long *)(lVar3 + 0x30) != 0))
          goto LAB_0010a6d8;
          goto LAB_0010a818;
        }
        if (1 < uVar4 - 3) goto LAB_0010a9b0;
        Variant::Variant((Variant *)local_58,*(Object **)(lVar3 + 0x50));
        uVar4 = get_constant_pos(this,(Variant *)local_58);
        Vector<int>::push_back((Vector<int> *)(this + 0x20),0x45);
        append((Address *)this);
        Vector<int>::push_back((Vector<int> *)(this + 0x20),uVar4 | 0x1000000);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
LAB_0010a906:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010ab01;
    }
    if (uVar4 == 1) {
      iVar2 = *(int *)(lVar3 + 0x40);
      if (iVar2 == 0x1c) {
        if ((*(long *)(lVar3 + 0x30) != 0) && (0 < *(long *)(*(long *)(lVar3 + 0x30) + -8))) {
LAB_0010a9f8:
          pVVar1 = (Vector<int> *)(this + 0x20);
          GDScriptDataType::get_container_element_type((int)local_98);
          Vector<int>::push_back(pVVar1,0x42);
          append((Address *)this);
          Variant::Variant((Variant *)local_58,local_70);
          uVar4 = get_constant_pos(this,(Variant *)local_58);
          Vector<int>::push_back(pVVar1,uVar4 | 0x1000000);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Vector<int>::push_back(pVVar1,local_80);
          append(this,local_78);
          GDScriptDataType::~GDScriptDataType(local_98);
          goto LAB_0010a906;
        }
      }
      else if ((iVar2 == 0x1b) && (*(long *)(lVar3 + 0x30) != 0)) {
LAB_0010a6d8:
        pVVar1 = (Vector<int> *)(this + 0x20);
        GDScriptDataType::get_container_element_type_or_variant((int)aGStack_d8);
        GDScriptDataType::get_container_element_type_or_variant((int)local_98);
        Vector<int>::push_back(pVVar1,0x43);
        append((Address *)this);
        Variant::Variant((Variant *)local_58,local_b0);
        uVar4 = get_constant_pos(this,(Variant *)local_58);
        Vector<int>::push_back(pVVar1,uVar4 | 0x1000000);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_58,local_70);
        uVar4 = get_constant_pos(this,(Variant *)local_58);
        Vector<int>::push_back(pVVar1,uVar4 | 0x1000000);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Vector<int>::push_back(pVVar1,local_c0);
        append(this,local_b8);
        Vector<int>::push_back(pVVar1,local_80);
        append(this,local_78);
        GDScriptDataType::~GDScriptDataType(local_98);
        GDScriptDataType::~GDScriptDataType(aGStack_d8);
        goto LAB_0010a906;
      }
      if ((*(int *)(param_1 + 0x18) == 1) && (iVar2 != *(int *)(param_1 + 0x20))) {
LAB_0010a818:
        Vector<int>::push_back((Vector<int> *)(this + 0x20),0x41);
        append((Address *)this);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Vector<int>::push_back
                    ((Vector<int> *)(this + 0x20),*(int *)(*(long *)(this + 0x10) + 0x40));
          return;
        }
        goto LAB_0010ab01;
      }
    }
  }
LAB_0010a65a:
  Vector<int>::push_back((Vector<int> *)(this + 0x20),0x40);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    append((Address *)this);
    return;
  }
LAB_0010ab01:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::add_or_get_name(StringName const&) */

undefined4 __thiscall
GDScriptByteCodeGenerator::add_or_get_name(GDScriptByteCodeGenerator *this,StringName *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  
  lVar2 = *(long *)(this + 0x170);
  if (lVar2 != 0) {
    while (lVar2 = *(long *)(lVar2 + 0x10), *(long *)(this + 0x178) != lVar2) {
      while (*(ulong *)(lVar2 + 0x30) <= *(ulong *)param_1) {
        if (*(ulong *)param_1 <= *(ulong *)(lVar2 + 0x30)) {
          puVar3 = (undefined4 *)
                   RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::operator[]
                             ((RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *)
                              (this + 0x170),param_1);
          return *puVar3;
        }
        lVar2 = *(long *)(lVar2 + 8);
        if (*(long *)(this + 0x178) == lVar2) goto LAB_0010ab58;
      }
    }
  }
LAB_0010ab58:
  uVar1 = *(undefined4 *)(this + 0x180);
  puVar3 = (undefined4 *)
           RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::operator[]
                     ((RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *)
                      (this + 0x170),param_1);
  *puVar3 = uVar1;
  return uVar1;
}



/* GDScriptByteCodeGenerator::end_block() */

void __thiscall GDScriptByteCodeGenerator::end_block(GDScriptByteCodeGenerator *this)

{
  pop_stack_identifiers(this);
  return;
}



/* List<RBMap<StringName, int, Comparator<StringName>, DefaultAllocator>,
   DefaultAllocator>::push_back(RBMap<StringName, int, Comparator<StringName>, DefaultAllocator>
   const&) [clone .isra.0] */

void __thiscall
List<RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>,DefaultAllocator>::push_back
          (List<RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>,DefaultAllocator>
           *this,RBMap *param_1)

{
  long *plVar1;
  long lVar2;
  RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *this_00;
  undefined1 (*pauVar3) [16];
  
  if (*(long *)this == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  this_00 = (RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *)
            operator_new(0x30,DefaultAllocator::alloc);
  *(undefined8 *)this_00 = 0;
  *(undefined4 *)(this_00 + 0x10) = 0;
  *(undefined8 **)(this_00 + 8) = &_GlobalNilClass::_nil;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined1 (*) [16])(this_00 + 0x18) = (undefined1  [16])0x0;
  RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::_copy_from(this_00,param_1);
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(long **)(this_00 + 0x28) = plVar1;
  *(long *)(this_00 + 0x20) = lVar2;
  if (lVar2 != 0) {
    *(RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> **)(lVar2 + 0x18) = this_00;
  }
  plVar1[1] = (long)this_00;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)this_00;
  return;
}



/* GDScriptByteCodeGenerator::start_block() */

void __thiscall GDScriptByteCodeGenerator::start_block(GDScriptByteCodeGenerator *this)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  int local_38 [2];
  undefined8 *local_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x78) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(long *)(this + 0x78) + -8);
  }
  local_38[0] = uVar1;
  List<int,DefaultAllocator>::push_back((List<int,DefaultAllocator> *)(this + 0x50),local_38);
  List<RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>,DefaultAllocator>::push_back
            ((List<RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>,DefaultAllocator> *
             )(this + 0x30),(RBMap *)(this + 0x38));
  if (this[0x18] != (GDScriptByteCodeGenerator)0x0) {
    local_38[0] = 0;
    local_38[1] = 0;
    local_30 = &_GlobalNilClass::_nil;
    local_28 = 0;
    RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::_copy_from
              ((RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *)local_38,
               (RBMap *)(this + 0x110));
    List<RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>,DefaultAllocator>::push_back
              ((List<RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>,DefaultAllocator>
                *)(this + 0x108),(RBMap *)local_38);
    RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::clear
              ((RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *)(this + 0x110));
    RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::~RBMap
              ((RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *)local_38);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_binary_operator(GDScriptCodeGenerator::Address const&,
   Variant::Operator, GDScriptCodeGenerator::Address const&, GDScriptCodeGenerator::Address const&)
    */

void __thiscall
GDScriptByteCodeGenerator::write_binary_operator
          (GDScriptByteCodeGenerator *this,int *param_1,int param_3,long param_4,long param_5)

{
  Vector<int> *this_00;
  long lVar1;
  code *pcVar2;
  int iVar3;
  _func_void_Variant_ptr_Variant_ptr_Variant_ptr *p_Var4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long in_FS_OFFSET;
  CowData<char32_t> local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((*(char *)(param_4 + 0x1c) == '\0') || (*(int *)(param_4 + 0x18) != 1)) ||
      (*(char *)(param_5 + 0x1c) == '\0')) || (*(int *)(param_5 + 0x18) != 1)) goto LAB_0010ad71;
  uVar7 = *(uint *)(param_4 + 0x20);
  uVar6 = *(uint *)(param_5 + 0x20);
  if ((param_3 != 9) && (param_3 != 0xc)) goto LAB_0010ae39;
  if (uVar7 == 6) {
LAB_0010af7e:
    if (uVar7 != uVar6) {
joined_r0x0010af89:
      if (uVar6 != 2) goto LAB_0010ae39;
    }
LAB_0010ad71:
    this_00 = (Vector<int> *)(this + 0x20);
    Vector<int>::push_back(this_00,0);
    append((Address *)this);
    append((Address *)this);
    append((Address *)this);
    Vector<int>::push_back(this_00,param_3);
    Vector<int>::push_back(this_00,0);
    Vector<int>::push_back(this_00,0);
    Vector<int>::push_back(this_00,0);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Vector<int>::push_back(this_00,0);
      return;
    }
  }
  else {
    if (uVar7 < 7) {
      if (uVar7 == 2) goto joined_r0x0010af89;
    }
    else if ((uVar7 == 10) || (uVar7 == 0xd)) goto LAB_0010af7e;
LAB_0010ae39:
    if (*param_1 == 6) {
      iVar3 = Variant::get_operator_return_type(param_3);
      uVar5 = (ulong)(uint)param_1[1];
      lVar1 = *(long *)(this + 0xb0);
      if (lVar1 == 0) {
        lVar8 = 0;
LAB_0010af97:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar5,lVar8,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar8 = *(long *)(lVar1 + -8);
      if (lVar8 <= (long)uVar5) goto LAB_0010af97;
      if (iVar3 != *(int *)(lVar1 + uVar5 * 0x18)) {
        (**(code **)(*(long *)this + 0x90))(this,param_1);
      }
      uVar6 = *(uint *)(param_5 + 0x20);
      uVar7 = *(uint *)(param_4 + 0x20);
    }
    p_Var4 = (_func_void_Variant_ptr_Variant_ptr_Variant_ptr *)
             Variant::get_validated_operator_evaluator(param_3,uVar7,uVar6);
    Vector<int>::push_back((Vector<int> *)(this + 0x20),1);
    append((Address *)this);
    append((Address *)this);
    append((Address *)this);
    iVar3 = get_operation_pos(this,p_Var4);
    Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar3);
    Variant::get_operator_name(local_48,param_3);
    iVar3 = get_operation_pos(this,p_Var4);
    add_debug_name((Vector *)(this + 0x2d0),iVar3,(String *)local_48);
    CowData<char32_t>::_unref(local_48);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_unary_operator(GDScriptCodeGenerator::Address const&,
   Variant::Operator, GDScriptCodeGenerator::Address const&) */

void __thiscall
GDScriptByteCodeGenerator::write_unary_operator
          (GDScriptByteCodeGenerator *this,undefined8 param_2,int param_3,long param_4)

{
  Vector<int> *pVVar1;
  int iVar2;
  _func_void_Variant_ptr_Variant_ptr_Variant_ptr *p_Var3;
  long in_FS_OFFSET;
  undefined8 local_88;
  GDScriptDataType local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(char *)(param_4 + 0x1c) == '\0') || (*(int *)(param_4 + 0x18) != 1)) {
    pVVar1 = (Vector<int> *)(this + 0x20);
    Vector<int>::push_back(pVVar1,0);
    append((Address *)this);
    local_60 = (undefined1  [16])0x0;
    local_88 = 7;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_50 = 0;
    Vector<int>::push_back(pVVar1,2);
    GDScriptDataType::~GDScriptDataType(local_80);
    append((Address *)this);
    Vector<int>::push_back(pVVar1,param_3);
    Vector<int>::push_back(pVVar1,0);
    Vector<int>::push_back(pVVar1,0);
    Vector<int>::push_back(pVVar1,0);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Vector<int>::push_back(pVVar1,0);
      return;
    }
  }
  else {
    pVVar1 = (Vector<int> *)(this + 0x20);
    p_Var3 = (_func_void_Variant_ptr_Variant_ptr_Variant_ptr *)
             Variant::get_validated_operator_evaluator(param_3,*(undefined4 *)(param_4 + 0x20),0);
    Vector<int>::push_back(pVVar1,1);
    append((Address *)this);
    local_60 = (undefined1  [16])0x0;
    local_88 = 7;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_50 = 0;
    Vector<int>::push_back(pVVar1,2);
    GDScriptDataType::~GDScriptDataType(local_80);
    append((Address *)this);
    iVar2 = get_operation_pos(this,p_Var3);
    Vector<int>::push_back(pVVar1,iVar2);
    Variant::get_operator_name(&local_88,param_3);
    iVar2 = get_operation_pos(this,p_Var3);
    add_debug_name((Vector *)(this + 0x2d0),iVar2,(String *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_set_named(GDScriptCodeGenerator::Address const&, StringName
   const&, GDScriptCodeGenerator::Address const&) */

void __thiscall
GDScriptByteCodeGenerator::write_set_named
          (GDScriptByteCodeGenerator *this,Address *param_1,StringName *param_2,Address *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  _func_void_Variant_ptr_Variant_ptr *p_Var4;
  int *piVar5;
  long in_FS_OFFSET;
  undefined8 local_40;
  _func_void_Variant_ptr_Variant_ptr *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_1[0x1c] == (Address)0x0) || (*(int *)(param_1 + 0x18) != 1)) ||
      (lVar3 = Variant::get_member_validated_setter(*(undefined4 *)(param_1 + 0x20),param_2),
      lVar3 == 0)) ||
     (((param_3[0x1c] == (Address)0x0 || (*(int *)(param_3 + 0x18) != 1)) ||
      ((iVar2 = *(int *)(param_3 + 0x20),
       iVar1 = Variant::get_member_type(*(undefined4 *)(param_1 + 0x20),param_2), iVar2 != iVar1 ||
       (iVar2 = Variant::get_member_type(*(undefined4 *)(param_1 + 0x20),param_2), iVar2 == 0))))))
  {
    Vector<int>::push_back((Vector<int> *)(this + 0x20),0xd);
    append((Address *)this);
    append((Address *)this);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      append(this,param_2);
      return;
    }
    goto LAB_0010b3ca;
  }
  p_Var4 = (_func_void_Variant_ptr_Variant_ptr *)
           Variant::get_member_validated_setter(*(undefined4 *)(param_1 + 0x20),param_2);
  Vector<int>::push_back((Vector<int> *)(this + 0x20),0xe);
  append((Address *)this);
  append((Address *)this);
  append(this,p_Var4);
  lVar3 = *(long *)param_2;
  if (lVar3 == 0) {
LAB_0010b402:
    local_40 = 0;
  }
  else {
    local_40 = 0;
    if (*(char **)(lVar3 + 8) == (char *)0x0) {
      if (*(long *)(lVar3 + 0x10) == 0) goto LAB_0010b402;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_40,(CowData *)(lVar3 + 0x10));
    }
    else {
      String::parse_latin1((String *)&local_40,*(char **)(lVar3 + 8));
    }
  }
  lVar3 = *(long *)(this + 0x1b0);
  local_38 = p_Var4;
  if (lVar3 != 0) {
    while (lVar3 = *(long *)(lVar3 + 0x10), *(long *)(this + 0x1b8) != lVar3) {
      while (*(_func_void_Variant_ptr_Variant_ptr **)(lVar3 + 0x30) <= p_Var4) {
        if (p_Var4 <= *(_func_void_Variant_ptr_Variant_ptr **)(lVar3 + 0x30)) {
          piVar5 = (int *)RBMap<void(*)(Variant*,Variant_const*),int,Comparator<void(*)(Variant*,Variant_const*)>,DefaultAllocator>
                          ::operator[]((RBMap<void(*)(Variant*,Variant_const*),int,Comparator<void(*)(Variant*,Variant_const*)>,DefaultAllocator>
                                        *)(this + 0x1b0),
                                       (_func_void_Variant_ptr_Variant_ptr *)&local_38);
          iVar2 = *piVar5;
          goto LAB_0010b393;
        }
        lVar3 = *(long *)(lVar3 + 8);
        if (*(long *)(this + 0x1b8) == lVar3) goto LAB_0010b37f;
      }
    }
  }
LAB_0010b37f:
  iVar2 = *(int *)(this + 0x1c0);
  piVar5 = (int *)RBMap<void(*)(Variant*,Variant_const*),int,Comparator<void(*)(Variant*,Variant_const*)>,DefaultAllocator>
                  ::operator[]((RBMap<void(*)(Variant*,Variant_const*),int,Comparator<void(*)(Variant*,Variant_const*)>,DefaultAllocator>
                                *)(this + 0x1b0),(_func_void_Variant_ptr_Variant_ptr *)&local_38);
  *piVar5 = iVar2;
LAB_0010b393:
  add_debug_name((Vector *)(this + 0x2e0),iVar2,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010b3ca:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_get_named(GDScriptCodeGenerator::Address const&, StringName
   const&, GDScriptCodeGenerator::Address const&) */

void __thiscall
GDScriptByteCodeGenerator::write_get_named
          (GDScriptByteCodeGenerator *this,Address *param_1,StringName *param_2,Address *param_3)

{
  int iVar1;
  long lVar2;
  _func_void_Variant_ptr_Variant_ptr *p_Var3;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3[0x1c] != (Address)0x0) && (*(int *)(param_3 + 0x18) == 1)) {
    lVar2 = Variant::get_member_validated_getter(*(undefined4 *)(param_3 + 0x20),param_2);
    if (lVar2 != 0) {
      p_Var3 = (_func_void_Variant_ptr_Variant_ptr *)
               Variant::get_member_validated_getter(*(undefined4 *)(param_3 + 0x20),param_2);
      Vector<int>::push_back((Vector<int> *)(this + 0x20),0x10);
      append((Address *)this);
      append((Address *)this);
      iVar1 = get_getter_pos(this,p_Var3);
      Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar1);
      lVar2 = *(long *)param_2;
      if (lVar2 == 0) {
        local_48 = 0;
      }
      else {
        local_48 = 0;
        if (*(char **)(lVar2 + 8) == (char *)0x0) {
          if (*(long *)(lVar2 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)(lVar2 + 0x10));
          }
        }
        else {
          String::parse_latin1((String *)&local_48,*(char **)(lVar2 + 8));
        }
      }
      iVar1 = get_getter_pos(this,p_Var3);
      add_debug_name((Vector *)(this + 0x2f0),iVar1,(String *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010b59d;
    }
  }
  Vector<int>::push_back((Vector<int> *)(this + 0x20),0xf);
  append((Address *)this);
  append((Address *)this);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    append(this,param_2);
    return;
  }
LAB_0010b59d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_set(GDScriptCodeGenerator::Address const&,
   GDScriptCodeGenerator::Address const&, GDScriptCodeGenerator::Address const&) */

void __thiscall
GDScriptByteCodeGenerator::write_set
          (GDScriptByteCodeGenerator *this,Address *param_1,Address *param_2,Address *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  _func_void_Variant_ptr_long_Variant_ptr_bool_ptr *p_Var6;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1[0x1c] != (Address)0x0) && (*(int *)(param_1 + 0x18) == 1)) {
    if ((param_2[0x1c] != (Address)0x0) &&
       ((*(int *)(param_2 + 0x18) == 1 && (*(int *)(param_2 + 0x20) == 2)))) {
      lVar3 = Variant::get_member_validated_indexed_setter(*(undefined4 *)(param_1 + 0x20));
      if ((lVar3 != 0) && ((param_3[0x1c] != (Address)0x0 && (*(int *)(param_3 + 0x18) == 1)))) {
        iVar2 = *(int *)(param_3 + 0x20);
        iVar1 = Variant::get_indexed_element_type(*(undefined4 *)(param_1 + 0x20));
        if (iVar2 == iVar1) {
          iVar2 = Variant::get_indexed_element_type(*(undefined4 *)(param_1 + 0x20));
          if (iVar2 != 0) {
            p_Var6 = (_func_void_Variant_ptr_long_Variant_ptr_bool_ptr *)
                     Variant::get_member_validated_indexed_setter(*(undefined4 *)(param_1 + 0x20));
            Vector<int>::push_back((Vector<int> *)(this + 0x20),9);
            append((Address *)this);
            append((Address *)this);
            append((Address *)this);
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              append(this,p_Var6);
              return;
            }
            goto LAB_0010b81f;
          }
        }
      }
    }
    lVar3 = Variant::get_member_validated_keyed_setter();
    if (lVar3 != 0) {
      uVar4 = Variant::get_member_validated_keyed_setter(*(undefined4 *)(param_1 + 0x20));
      Vector<int>::push_back((Vector<int> *)(this + 0x20),8);
      append((Address *)this);
      append((Address *)this);
      append((Address *)this);
      lVar3 = *(long *)(this + 0x1e0);
      local_48 = uVar4;
      if (lVar3 != 0) {
        while (lVar3 = *(long *)(lVar3 + 0x10), *(long *)(this + 0x1e8) != lVar3) {
          while (*(ulong *)(lVar3 + 0x30) <= uVar4) {
            if (uVar4 <= *(ulong *)(lVar3 + 0x30)) {
              piVar5 = (int *)RBMap<void(*)(Variant*,Variant_const*,Variant_const*,bool*),int,Comparator<void(*)(Variant*,Variant_const*,Variant_const*,bool*)>,DefaultAllocator>
                              ::operator[]((RBMap<void(*)(Variant*,Variant_const*,Variant_const*,bool*),int,Comparator<void(*)(Variant*,Variant_const*,Variant_const*,bool*)>,DefaultAllocator>
                                            *)(this + 0x1e0),
                                           (_func_void_Variant_ptr_Variant_ptr_Variant_ptr_bool_ptr
                                            *)&local_48);
              iVar2 = *piVar5;
              goto LAB_0010b724;
            }
            lVar3 = *(long *)(lVar3 + 8);
            if (*(long *)(this + 0x1e8) == lVar3) goto LAB_0010b714;
          }
        }
      }
LAB_0010b714:
      iVar2 = *(int *)(this + 0x1f0);
      piVar5 = (int *)RBMap<void(*)(Variant*,Variant_const*,Variant_const*,bool*),int,Comparator<void(*)(Variant*,Variant_const*,Variant_const*,bool*)>,DefaultAllocator>
                      ::operator[]((RBMap<void(*)(Variant*,Variant_const*,Variant_const*,bool*),int,Comparator<void(*)(Variant*,Variant_const*,Variant_const*,bool*)>,DefaultAllocator>
                                    *)(this + 0x1e0),
                                   (_func_void_Variant_ptr_Variant_ptr_Variant_ptr_bool_ptr *)
                                   &local_48);
      *piVar5 = iVar2;
LAB_0010b724:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar2);
        return;
      }
      goto LAB_0010b81f;
    }
  }
  Vector<int>::push_back((Vector<int> *)(this + 0x20),7);
  append((Address *)this);
  append((Address *)this);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    append((Address *)this);
    return;
  }
LAB_0010b81f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_get(GDScriptCodeGenerator::Address const&,
   GDScriptCodeGenerator::Address const&, GDScriptCodeGenerator::Address const&) */

void __thiscall
GDScriptByteCodeGenerator::write_get
          (GDScriptByteCodeGenerator *this,Address *param_1,Address *param_2,Address *param_3)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  int iVar4;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3[0x1c] == (Address)0x0) || (*(int *)(param_3 + 0x18) != 1)) {
LAB_0010b86a:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),10);
    append((Address *)this);
    append((Address *)this);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      append((Address *)this);
      return;
    }
  }
  else {
    if ((param_2[0x1c] == (Address)0x0) ||
       ((*(int *)(param_2 + 0x18) != 1 || (*(int *)(param_2 + 0x20) != 2)))) {
LAB_0010b8f0:
      lVar1 = Variant::get_member_validated_keyed_getter();
      if (lVar1 == 0) goto LAB_0010b86a;
      uVar2 = Variant::get_member_validated_keyed_getter(*(undefined4 *)(param_3 + 0x20));
      Vector<int>::push_back((Vector<int> *)(this + 0x20),0xb);
      append((Address *)this);
      append((Address *)this);
      append((Address *)this);
      local_48 = uVar2;
      if (*(long *)(this + 0x1f8) != 0) {
        lVar1 = *(long *)(*(long *)(this + 0x1f8) + 0x10);
        while (*(long *)(this + 0x200) != lVar1) {
          if (uVar2 < *(ulong *)(lVar1 + 0x30)) {
            lVar1 = *(long *)(lVar1 + 0x10);
          }
          else {
            if (uVar2 <= *(ulong *)(lVar1 + 0x30)) {
              piVar3 = (int *)RBMap<void(*)(Variant_const*,Variant_const*,Variant*,bool*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*,bool*)>,DefaultAllocator>
                              ::operator[]((RBMap<void(*)(Variant_const*,Variant_const*,Variant*,bool*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*,bool*)>,DefaultAllocator>
                                            *)(this + 0x1f8),
                                           (_func_void_Variant_ptr_Variant_ptr_Variant_ptr_bool_ptr
                                            *)&local_48);
              iVar4 = *piVar3;
              goto LAB_0010ba50;
            }
            lVar1 = *(long *)(lVar1 + 8);
          }
        }
      }
      iVar4 = *(int *)(this + 0x208);
      piVar3 = (int *)RBMap<void(*)(Variant_const*,Variant_const*,Variant*,bool*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*,bool*)>,DefaultAllocator>
                      ::operator[]((RBMap<void(*)(Variant_const*,Variant_const*,Variant*,bool*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*,bool*)>,DefaultAllocator>
                                    *)(this + 0x1f8),
                                   (_func_void_Variant_ptr_Variant_ptr_Variant_ptr_bool_ptr *)
                                   &local_48);
      *piVar3 = iVar4;
    }
    else {
      lVar1 = Variant::get_member_validated_indexed_getter(*(undefined4 *)(param_3 + 0x20));
      if (lVar1 == 0) goto LAB_0010b8f0;
      uVar2 = Variant::get_member_validated_indexed_getter(*(undefined4 *)(param_3 + 0x20));
      Vector<int>::push_back((Vector<int> *)(this + 0x20),0xc);
      append((Address *)this);
      append((Address *)this);
      append((Address *)this);
      lVar1 = *(long *)(this + 0x228);
      local_48 = uVar2;
      if (lVar1 != 0) {
        while (lVar1 = *(long *)(lVar1 + 0x10), *(long *)(this + 0x230) != lVar1) {
          while (*(ulong *)(lVar1 + 0x30) <= uVar2) {
            if (uVar2 <= *(ulong *)(lVar1 + 0x30)) {
              piVar3 = (int *)RBMap<void(*)(Variant_const*,long,Variant*,bool*),int,Comparator<void(*)(Variant_const*,long,Variant*,bool*)>,DefaultAllocator>
                              ::operator[]((RBMap<void(*)(Variant_const*,long,Variant*,bool*),int,Comparator<void(*)(Variant_const*,long,Variant*,bool*)>,DefaultAllocator>
                                            *)(this + 0x228),
                                           (_func_void_Variant_ptr_long_Variant_ptr_bool_ptr *)
                                           &local_48);
              iVar4 = *piVar3;
              goto LAB_0010ba50;
            }
            lVar1 = *(long *)(lVar1 + 8);
            if (*(long *)(this + 0x230) == lVar1) goto LAB_0010ba40;
          }
        }
      }
LAB_0010ba40:
      iVar4 = *(int *)(this + 0x238);
      piVar3 = (int *)RBMap<void(*)(Variant_const*,long,Variant*,bool*),int,Comparator<void(*)(Variant_const*,long,Variant*,bool*)>,DefaultAllocator>
                      ::operator[]((RBMap<void(*)(Variant_const*,long,Variant*,bool*),int,Comparator<void(*)(Variant_const*,long,Variant*,bool*)>,DefaultAllocator>
                                    *)(this + 0x228),
                                   (_func_void_Variant_ptr_long_Variant_ptr_bool_ptr *)&local_48);
      *piVar3 = iVar4;
    }
LAB_0010ba50:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_call_builtin_type(GDScriptCodeGenerator::Address const&,
   GDScriptCodeGenerator::Address const&, Variant::Type, StringName const&, bool,
   Vector<GDScriptCodeGenerator::Address> const&) */

void __thiscall
GDScriptByteCodeGenerator::write_call_builtin_type
          (GDScriptByteCodeGenerator *this,undefined8 param_1,undefined8 param_2,int param_4,
          StringName *param_5,char param_6,long param_7)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  _func_void_Variant_ptr_Variant_ptr_ptr_int_Variant_ptr *p_Var6;
  long lVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  undefined8 local_a0;
  undefined1 local_98 [4];
  uint local_94;
  GDScriptDataType local_90 [56];
  char local_58;
  CallTarget *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = Variant::is_builtin_method_vararg(param_4,param_5);
  if (cVar2 == '\0') {
    if (*(long *)(param_7 + 8) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(*(long *)(param_7 + 8) + -8);
    }
    iVar3 = Variant::get_builtin_method_argument_count(param_4,param_5);
    if (iVar3 != lVar5) goto LAB_0010bd50;
    lVar5 = *(long *)(param_7 + 8);
    if (lVar5 != 0) {
      uVar8 = 0;
      do {
        if (*(long *)(lVar5 + -8) <= (long)uVar8) break;
        lVar5 = lVar5 + uVar8 * 0x40;
        if ((((*(char *)(lVar5 + 0x1c) == '\0') || (*(int *)(lVar5 + 0x18) != 1)) ||
            (iVar3 = *(int *)(lVar5 + 0x20),
            iVar4 = Variant::get_builtin_method_argument_type(param_4,param_5), iVar3 != iVar4)) ||
           (iVar3 = Variant::get_builtin_method_argument_type(param_4,param_5,uVar8 & 0xffffffff),
           iVar3 == 0)) goto LAB_0010bd50;
        lVar5 = *(long *)(param_7 + 8);
        uVar8 = uVar8 + 1;
      } while (lVar5 != 0);
    }
    iVar3 = Variant::get_builtin_method_return_type(param_4,param_5);
    get_call_target(local_98,this,param_1,iVar3);
    lVar5 = *(long *)(this + 0xb0);
    uVar8 = (ulong)local_94;
    if (lVar5 == 0) {
      lVar7 = 0;
LAB_0010bf03:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar8,lVar7,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar7 = *(long *)(lVar5 + -8);
    if (lVar7 <= (long)uVar8) goto LAB_0010bf03;
    if (iVar3 != *(int *)(lVar5 + uVar8 * 0x18)) {
      (**(code **)(*(long *)this + 0x90))(this,local_98,iVar3);
    }
    if (*(long *)(param_7 + 8) == 0) {
      iVar3 = 2;
    }
    else {
      iVar3 = (int)*(undefined8 *)(*(long *)(param_7 + 8) + -8) + 2;
    }
    append_opcode_and_argcount(this,0x2d,iVar3);
    lVar5 = *(long *)(param_7 + 8);
    for (lVar7 = 0; (lVar5 != 0 && (lVar7 < *(long *)(lVar5 + -8))); lVar7 = lVar7 + 1) {
      append((Address *)this);
      lVar5 = *(long *)(param_7 + 8);
    }
    append((Address *)this);
    append((Address *)this);
    if (*(long *)(param_7 + 8) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(long *)(param_7 + 8) + -8);
    }
    Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar3);
    p_Var6 = (_func_void_Variant_ptr_Variant_ptr_ptr_int_Variant_ptr *)
             Variant::get_validated_builtin_method(param_4,param_5);
    iVar3 = get_builtin_method_pos(this,p_Var6);
    Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar3);
    if (local_58 != '\0') {
      CallTarget::cleanup(local_50);
    }
    lVar5 = *(long *)param_5;
    if (lVar5 == 0) {
      local_a0 = 0;
    }
    else {
      local_a0 = 0;
      if (*(char **)(lVar5 + 8) == (char *)0x0) {
        if (*(long *)(lVar5 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)(lVar5 + 0x10));
        }
      }
      else {
        String::parse_latin1((String *)&local_a0,*(char **)(lVar5 + 8));
      }
    }
    p_Var6 = (_func_void_Variant_ptr_Variant_ptr_ptr_int_Variant_ptr *)
             Variant::get_validated_builtin_method(param_4,param_5);
    iVar3 = get_builtin_method_pos(this,p_Var6);
    add_debug_name((Vector *)(this + 0x300),iVar3,(String *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  }
  else {
LAB_0010bd50:
    if (param_6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010bea5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)this + 400))(this,param_1,param_2,param_5,param_7);
        return;
      }
      goto LAB_0010bf52;
    }
    if (*(long *)(param_7 + 8) == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = (int)*(undefined8 *)(*(long *)(param_7 + 8) + -8) + 1;
    }
    append_opcode_and_argcount(this,0x31,iVar3);
    lVar5 = *(long *)(param_7 + 8);
    for (lVar7 = 0; (lVar5 != 0 && (lVar7 < *(long *)(lVar5 + -8))); lVar7 = lVar7 + 1) {
      append((Address *)this);
      lVar5 = *(long *)(param_7 + 8);
    }
    get_call_target(local_98,this,param_1,0);
    append((Address *)this);
    Vector<int>::push_back((Vector<int> *)(this + 0x20),param_4);
    append(this,param_5);
    if (*(long *)(param_7 + 8) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(long *)(param_7 + 8) + -8);
    }
    Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar3);
    if (local_58 != '\0') {
      CallTarget::cleanup(local_50);
    }
  }
  GDScriptDataType::~GDScriptDataType(local_90);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010bf52:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_call_builtin_type(GDScriptCodeGenerator::Address const&,
   GDScriptCodeGenerator::Address const&, Variant::Type, StringName const&,
   Vector<GDScriptCodeGenerator::Address> const&) */

void GDScriptByteCodeGenerator::write_call_builtin_type(void)

{
  write_call_builtin_type();
  return;
}



/* GDScriptByteCodeGenerator::write_call_builtin_type_static(GDScriptCodeGenerator::Address const&,
   Variant::Type, StringName const&, Vector<GDScriptCodeGenerator::Address> const&) */

void __thiscall
GDScriptByteCodeGenerator::write_call_builtin_type_static
          (GDScriptByteCodeGenerator *this,undefined8 param_1,undefined4 param_3,undefined8 param_4,
          undefined8 param_5)

{
  long in_FS_OFFSET;
  undefined8 local_58;
  GDScriptDataType local_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30 [16];
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 7;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = (undefined1  [16])0x0;
  local_20 = 0;
  write_call_builtin_type(this,param_1,&local_58,param_3,param_4,1,param_5);
  GDScriptDataType::~GDScriptDataType(local_50);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_call_utility(GDScriptCodeGenerator::Address const&, StringName
   const&, Vector<GDScriptCodeGenerator::Address> const&) */

void __thiscall
GDScriptByteCodeGenerator::write_call_utility
          (GDScriptByteCodeGenerator *this,Address *param_1,StringName *param_2,Vector *param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  _func_void_Variant_ptr_Variant_ptr_ptr_int *p_Var6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined8 local_a0;
  undefined1 local_98 [4];
  uint local_94;
  GDScriptDataType local_90 [56];
  char local_58;
  CallTarget *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = Variant::is_utility_function_vararg(param_2);
  if (cVar2 != '\0') {
LAB_0010c268:
    lVar7 = *(long *)(param_3 + 8);
LAB_0010c26c:
    if (lVar7 == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = (int)*(undefined8 *)(lVar7 + -8) + 1;
    }
    append_opcode_and_argcount(this,0x2a,iVar3);
    lVar7 = *(long *)(param_3 + 8);
    for (lVar9 = 0; (lVar7 != 0 && (lVar9 < *(long *)(lVar7 + -8))); lVar9 = lVar9 + 1) {
      append((Address *)this);
      lVar7 = *(long *)(param_3 + 8);
    }
    get_call_target(local_98,this,param_1,0);
    append((Address *)this);
    if (*(long *)(param_3 + 8) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(long *)(param_3 + 8) + -8);
    }
    Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar3);
    append(this,param_2);
    if (local_58 != '\0') {
      CallTarget::cleanup(local_50);
    }
    GDScriptDataType::~GDScriptDataType(local_90);
    goto LAB_0010c31b;
  }
  if (*(long *)(param_3 + 8) == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)(param_3 + 8) + -8);
  }
  iVar3 = Variant::get_utility_function_argument_count(param_2);
  if ((iVar3 == lVar7) && (lVar7 = *(long *)(param_3 + 8), lVar7 != 0)) {
    lVar9 = 0;
    do {
      if (*(long *)(lVar7 + -8) <= lVar9) break;
      lVar5 = lVar9 * 0x40 + lVar7;
      if ((*(char *)(lVar5 + 0x1c) == '\0') || (*(int *)(lVar5 + 0x18) != 1)) goto LAB_0010c26c;
      iVar3 = *(int *)(lVar5 + 0x20);
      iVar4 = Variant::get_utility_function_argument_type(param_2,(int)lVar9);
      if (iVar3 != iVar4) goto LAB_0010c268;
      iVar3 = Variant::get_utility_function_argument_type(param_2,(int)lVar9);
      lVar7 = *(long *)(param_3 + 8);
      if (iVar3 == 0) goto LAB_0010c26c;
      lVar9 = lVar9 + 1;
    } while (lVar7 != 0);
  }
  iVar3 = 0;
  cVar2 = Variant::has_utility_function_return_value(param_2);
  if (cVar2 != '\0') {
    iVar3 = Variant::get_utility_function_return_type(param_2);
  }
  get_call_target(local_98,this,param_1,iVar3);
  lVar7 = *(long *)(this + 0xb0);
  uVar8 = (ulong)local_94;
  if (lVar7 == 0) {
    lVar9 = 0;
LAB_0010c3d4:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,uVar8,lVar9,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar9 = *(long *)(lVar7 + -8);
  if (lVar9 <= (long)uVar8) goto LAB_0010c3d4;
  if (iVar3 != *(int *)(lVar7 + uVar8 * 0x18)) {
    (**(code **)(*(long *)this + 0x90))(this,local_98,iVar3);
  }
  if (*(long *)(param_3 + 8) == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = (int)*(undefined8 *)(*(long *)(param_3 + 8) + -8) + 1;
  }
  append_opcode_and_argcount(this,0x2b,iVar3);
  lVar7 = *(long *)(param_3 + 8);
  for (lVar9 = 0; (lVar7 != 0 && (lVar9 < *(long *)(lVar7 + -8))); lVar9 = lVar9 + 1) {
    append((Address *)this);
    lVar7 = *(long *)(param_3 + 8);
  }
  append((Address *)this);
  if (*(long *)(param_3 + 8) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(long *)(param_3 + 8) + -8);
  }
  Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar3);
  p_Var6 = (_func_void_Variant_ptr_Variant_ptr_ptr_int *)
           Variant::get_validated_utility_function(param_2);
  iVar3 = get_utility_pos(this,p_Var6);
  Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar3);
  if (local_58 == '\0') {
    lVar7 = *(long *)param_2;
    if (lVar7 == 0) goto LAB_0010c36f;
LAB_0010c203:
    local_a0 = 0;
    if (*(char **)(lVar7 + 8) == (char *)0x0) {
      if (*(long *)(lVar7 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)(lVar7 + 0x10));
      }
    }
    else {
      String::parse_latin1((String *)&local_a0,*(char **)(lVar7 + 8));
    }
  }
  else {
    CallTarget::cleanup(local_50);
    lVar7 = *(long *)param_2;
    if (lVar7 != 0) goto LAB_0010c203;
LAB_0010c36f:
    local_a0 = 0;
  }
  p_Var6 = (_func_void_Variant_ptr_Variant_ptr_ptr_int *)
           Variant::get_validated_utility_function(param_2);
  iVar3 = get_utility_pos(this,p_Var6);
  add_debug_name((Vector *)(this + 800),iVar3,(String *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  GDScriptDataType::~GDScriptDataType(local_90);
LAB_0010c31b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GDScriptByteCodeGenerator::write_call_gdscript_utility(GDScriptCodeGenerator::Address const&,
   StringName const&, Vector<GDScriptCodeGenerator::Address> const&) */

void __thiscall
GDScriptByteCodeGenerator::write_call_gdscript_utility
          (GDScriptByteCodeGenerator *this,Address *param_1,StringName *param_2,Vector *param_3)

{
  RBMap<void(*)(Variant*,Variant_const**,int,Callable::CallError&),int,Comparator<void(*)(Variant*,Variant_const**,int,Callable::CallError&)>,DefaultAllocator>
  *this_00;
  char *__s;
  char *pcVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_b0;
  char *local_a8;
  size_t local_a0;
  undefined1 local_98 [8];
  GDScriptDataType local_90 [56];
  char local_58;
  CallTarget *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_3 + 8) == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = (int)*(undefined8 *)(*(long *)(param_3 + 8) + -8) + 1;
  }
  append_opcode_and_argcount(this,0x2c,iVar4);
  pcVar1 = (char *)GDScriptUtilityFunctions::get_function(param_2);
  lVar3 = *(long *)(param_3 + 8);
  for (lVar5 = 0; (lVar3 != 0 && (lVar5 < *(long *)(lVar3 + -8))); lVar5 = lVar5 + 1) {
    append((Address *)this);
    lVar3 = *(long *)(param_3 + 8);
  }
  get_call_target(local_98,this,param_1,0);
  append((Address *)this);
  if (*(long *)(param_3 + 8) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(long *)(param_3 + 8) + -8);
  }
  this_00 = (RBMap<void(*)(Variant*,Variant_const**,int,Callable::CallError&),int,Comparator<void(*)(Variant*,Variant_const**,int,Callable::CallError&)>,DefaultAllocator>
             *)(this + 0x288);
  Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar4);
  lVar3 = *(long *)(this + 0x288);
  local_a8 = pcVar1;
  if (lVar3 != 0) {
    while (lVar3 = *(long *)(lVar3 + 0x10), *(long *)(this + 0x290) != lVar3) {
      while (*(char **)(lVar3 + 0x30) <= pcVar1) {
        if (pcVar1 <= *(char **)(lVar3 + 0x30)) {
          piVar2 = (int *)RBMap<void(*)(Variant*,Variant_const**,int,Callable::CallError&),int,Comparator<void(*)(Variant*,Variant_const**,int,Callable::CallError&)>,DefaultAllocator>
                          ::operator[](this_00,(_func_void_Variant_ptr_Variant_ptr_ptr_int_CallError_ptr
                                                *)&local_a8);
          iVar4 = *piVar2;
          goto LAB_0010c574;
        }
        lVar3 = *(long *)(lVar3 + 8);
        if (*(long *)(this + 0x290) == lVar3) goto LAB_0010c554;
      }
    }
  }
LAB_0010c554:
  iVar4 = *(int *)(this + 0x298);
  piVar2 = (int *)RBMap<void(*)(Variant*,Variant_const**,int,Callable::CallError&),int,Comparator<void(*)(Variant*,Variant_const**,int,Callable::CallError&)>,DefaultAllocator>
                  ::operator[](this_00,(_func_void_Variant_ptr_Variant_ptr_ptr_int_CallError_ptr *)
                                       &local_a8);
  *piVar2 = iVar4;
LAB_0010c574:
  Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar4);
  if (local_58 != '\0') {
    CallTarget::cleanup(local_50);
  }
  lVar3 = *(long *)param_2;
  if (lVar3 == 0) {
    local_b0 = 0;
  }
  else {
    __s = *(char **)(lVar3 + 8);
    local_b0 = 0;
    if (__s == (char *)0x0) {
      if (*(long *)(lVar3 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(lVar3 + 0x10));
      }
    }
    else {
      local_a0 = strlen(__s);
      local_a8 = __s;
      String::parse_latin1((StrRange *)&local_b0);
    }
  }
  if (*(long *)(this + 0x288) != 0) {
    for (lVar3 = *(long *)(*(long *)(this + 0x288) + 0x10); *(long *)(this + 0x290) != lVar3;
        lVar3 = *(long *)(lVar3 + 0x10)) {
      while (*(char **)(lVar3 + 0x30) <= pcVar1) {
        if (pcVar1 <= *(char **)(lVar3 + 0x30)) {
          local_a8 = pcVar1;
          piVar2 = (int *)RBMap<void(*)(Variant*,Variant_const**,int,Callable::CallError&),int,Comparator<void(*)(Variant*,Variant_const**,int,Callable::CallError&)>,DefaultAllocator>
                          ::operator[](this_00,(_func_void_Variant_ptr_Variant_ptr_ptr_int_CallError_ptr
                                                *)&local_a8);
          iVar4 = *piVar2;
          goto LAB_0010c696;
        }
        lVar3 = *(long *)(lVar3 + 8);
        if (lVar3 == *(long *)(this + 0x290)) goto LAB_0010c620;
      }
    }
  }
LAB_0010c620:
  iVar4 = *(int *)(this + 0x298);
  local_a8 = pcVar1;
  piVar2 = (int *)RBMap<void(*)(Variant*,Variant_const**,int,Callable::CallError&),int,Comparator<void(*)(Variant*,Variant_const**,int,Callable::CallError&)>,DefaultAllocator>
                  ::operator[](this_00,(_func_void_Variant_ptr_Variant_ptr_ptr_int_CallError_ptr *)
                                       &local_a8);
  *piVar2 = iVar4;
LAB_0010c696:
  add_debug_name((Vector *)(this + 0x330),iVar4,(String *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  GDScriptDataType::~GDScriptDataType(local_90);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GDScriptByteCodeGenerator::write_call_method_bind_validated(GDScriptCodeGenerator::Address
   const&, GDScriptCodeGenerator::Address const&, MethodBind*,
   Vector<GDScriptCodeGenerator::Address> const&) */

void __thiscall
GDScriptByteCodeGenerator::write_call_method_bind_validated
          (GDScriptByteCodeGenerator *this,Address *param_1,Address *param_2,MethodBind *param_3,
          Vector *param_4)

{
  code *pcVar1;
  long lVar2;
  int *piVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long in_FS_OFFSET;
  MethodBind *local_a0;
  int local_98;
  uint local_94;
  GDScriptDataType local_90 [8];
  long local_88;
  CowData<char32_t> local_78 [32];
  char local_58;
  CallTarget *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3[0x3a] == (MethodBind)0x0) {
    get_call_target(&local_98,this,param_1,0);
LAB_0010c765:
    if (*(long *)(param_4 + 8) == 0) {
      iVar5 = 2;
    }
    else {
      iVar5 = (int)*(undefined8 *)(*(long *)(param_4 + 8) + -8) + 2;
    }
    append_opcode_and_argcount(this,0x36 - (uint)(byte)param_3[0x3a],iVar5);
    lVar2 = *(long *)(param_4 + 8);
    for (lVar6 = 0; (lVar2 != 0 && (lVar6 < *(long *)(lVar2 + -8))); lVar6 = lVar6 + 1) {
      append((Address *)this);
      lVar2 = *(long *)(param_4 + 8);
    }
    append((Address *)this);
    append((Address *)this);
    if (*(long *)(param_4 + 8) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(long *)(param_4 + 8) + -8);
    }
    Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar5);
    local_a0 = param_3;
    if (*(long *)(this + 0x2a0) != 0) {
      for (lVar2 = *(long *)(*(long *)(this + 0x2a0) + 0x10); *(long *)(this + 0x2a8) != lVar2;
          lVar2 = *(long *)(lVar2 + 0x10)) {
        while (*(MethodBind **)(lVar2 + 0x30) <= param_3) {
          if (param_3 <= *(MethodBind **)(lVar2 + 0x30)) {
            piVar3 = (int *)RBMap<MethodBind*,int,Comparator<MethodBind*>,DefaultAllocator>::
                            operator[]((RBMap<MethodBind*,int,Comparator<MethodBind*>,DefaultAllocator>
                                        *)(this + 0x2a0),&local_a0);
            iVar5 = *piVar3;
            goto LAB_0010c87c;
          }
          lVar2 = *(long *)(lVar2 + 8);
          if (lVar2 == *(long *)(this + 0x2a8)) goto LAB_0010c858;
        }
      }
    }
LAB_0010c858:
    iVar5 = *(int *)(this + 0x2b0);
    piVar3 = (int *)RBMap<MethodBind*,int,Comparator<MethodBind*>,DefaultAllocator>::operator[]
                              ((RBMap<MethodBind*,int,Comparator<MethodBind*>,DefaultAllocator> *)
                               (this + 0x2a0),&local_a0);
    *piVar3 = iVar5;
LAB_0010c87c:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar5);
    if (local_58 != '\0') {
      CallTarget::cleanup(local_50);
    }
    GDScriptDataType::~GDScriptDataType(local_90);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  MethodBind::get_return_info();
  CowData<char32_t>::_unref(local_78);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
  get_call_target(&local_98,this,param_1,local_98);
  lVar2 = *(long *)(this + 0xb0);
  uVar4 = (ulong)local_94;
  if (lVar2 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar2 + -8);
    if ((long)uVar4 < lVar6) {
      if (local_98 != *(int *)(lVar2 + uVar4 * 0x18)) {
        (**(code **)(*(long *)this + 0x90))(this,&local_98,local_98);
      }
      goto LAB_0010c765;
    }
  }
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar4,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptByteCodeGenerator::write_call_native_static(GDScriptCodeGenerator::Address const&,
   StringName const&, StringName const&, Vector<GDScriptCodeGenerator::Address> const&) */

void __thiscall
GDScriptByteCodeGenerator::write_call_native_static
          (GDScriptByteCodeGenerator *this,Address *param_1,StringName *param_2,StringName *param_3,
          Vector *param_4)

{
  MethodBind *pMVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  MethodBind *local_90;
  undefined1 local_88 [8];
  GDScriptDataType local_80 [56];
  char local_48;
  CallTarget *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pMVar1 = (MethodBind *)ClassDB::get_method(param_2,param_3);
  if (*(long *)(param_4 + 8) == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = (int)*(undefined8 *)(*(long *)(param_4 + 8) + -8) + 1;
  }
  append_opcode_and_argcount(this,0x32,iVar4);
  lVar2 = *(long *)(param_4 + 8);
  for (lVar5 = 0; (lVar2 != 0 && (lVar5 < *(long *)(lVar2 + -8))); lVar5 = lVar5 + 1) {
    append((Address *)this);
    lVar2 = *(long *)(param_4 + 8);
  }
  get_call_target(local_88,this,param_1,0);
  append((Address *)this);
  lVar2 = *(long *)(this + 0x2a0);
  local_90 = pMVar1;
  if (lVar2 != 0) {
    while (lVar2 = *(long *)(lVar2 + 0x10), *(long *)(this + 0x2a8) != lVar2) {
      while (*(MethodBind **)(lVar2 + 0x30) <= pMVar1) {
        if (pMVar1 <= *(MethodBind **)(lVar2 + 0x30)) {
          piVar3 = (int *)RBMap<MethodBind*,int,Comparator<MethodBind*>,DefaultAllocator>::
                          operator[]((RBMap<MethodBind*,int,Comparator<MethodBind*>,DefaultAllocator>
                                      *)(this + 0x2a0),&local_90);
          iVar4 = *piVar3;
          goto LAB_0010cae2;
        }
        lVar2 = *(long *)(lVar2 + 8);
        if (*(long *)(this + 0x2a8) == lVar2) goto LAB_0010cad0;
      }
    }
  }
LAB_0010cad0:
  iVar4 = *(int *)(this + 0x2b0);
  piVar3 = (int *)RBMap<MethodBind*,int,Comparator<MethodBind*>,DefaultAllocator>::operator[]
                            ((RBMap<MethodBind*,int,Comparator<MethodBind*>,DefaultAllocator> *)
                             (this + 0x2a0),&local_90);
  *piVar3 = iVar4;
LAB_0010cae2:
  Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar4);
  if (*(long *)(param_4 + 8) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(long *)(param_4 + 8) + -8);
  }
  Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar4);
  if (local_48 != '\0') {
    CallTarget::cleanup(local_40);
  }
  GDScriptDataType::~GDScriptDataType(local_80);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_call_method_bind(GDScriptCodeGenerator::Address const&,
   GDScriptCodeGenerator::Address const&, MethodBind*, Vector<GDScriptCodeGenerator::Address>
   const&) */

void __thiscall
GDScriptByteCodeGenerator::write_call_method_bind
          (GDScriptByteCodeGenerator *this,Address *param_1,Address *param_2,MethodBind *param_3,
          Vector *param_4)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  MethodBind *local_a0;
  undefined1 local_98 [8];
  GDScriptDataType local_90 [56];
  char local_58;
  CallTarget *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_4 + 8) == 0) {
    iVar3 = 2;
  }
  else {
    iVar3 = (int)*(undefined8 *)(*(long *)(param_4 + 8) + -8) + 2;
  }
  append_opcode_and_argcount(this,(*(int *)param_1 != 7) + '/',iVar3);
  lVar1 = *(long *)(param_4 + 8);
  for (lVar4 = 0; (lVar1 != 0 && (lVar4 < *(long *)(lVar1 + -8))); lVar4 = lVar4 + 1) {
    append((Address *)this);
    lVar1 = *(long *)(param_4 + 8);
  }
  get_call_target(local_98,this,param_1,0);
  append((Address *)this);
  append((Address *)this);
  if (*(long *)(param_4 + 8) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(long *)(param_4 + 8) + -8);
  }
  Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar3);
  lVar1 = *(long *)(this + 0x2a0);
  local_a0 = param_3;
  if (lVar1 != 0) {
    while (lVar1 = *(long *)(lVar1 + 0x10), *(long *)(this + 0x2a8) != lVar1) {
      while (*(MethodBind **)(lVar1 + 0x30) <= param_3) {
        if (param_3 <= *(MethodBind **)(lVar1 + 0x30)) {
          piVar2 = (int *)RBMap<MethodBind*,int,Comparator<MethodBind*>,DefaultAllocator>::
                          operator[]((RBMap<MethodBind*,int,Comparator<MethodBind*>,DefaultAllocator>
                                      *)(this + 0x2a0),&local_a0);
          iVar3 = *piVar2;
          goto LAB_0010ccb2;
        }
        lVar1 = *(long *)(lVar1 + 8);
        if (*(long *)(this + 0x2a8) == lVar1) goto LAB_0010cca0;
      }
    }
  }
LAB_0010cca0:
  iVar3 = *(int *)(this + 0x2b0);
  piVar2 = (int *)RBMap<MethodBind*,int,Comparator<MethodBind*>,DefaultAllocator>::operator[]
                            ((RBMap<MethodBind*,int,Comparator<MethodBind*>,DefaultAllocator> *)
                             (this + 0x2a0),&local_a0);
  *piVar2 = iVar3;
LAB_0010ccb2:
  Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar3);
  if (local_58 != '\0') {
    CallTarget::cleanup(local_50);
  }
  GDScriptDataType::~GDScriptDataType(local_90);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::write_call_native_static_validated(GDScriptCodeGenerator::Address
   const&, MethodBind*, Vector<GDScriptCodeGenerator::Address> const&) */

void __thiscall
GDScriptByteCodeGenerator::write_call_native_static_validated
          (GDScriptByteCodeGenerator *this,Address *param_1,MethodBind *param_2,Vector *param_3)

{
  code *pcVar1;
  long lVar2;
  int *piVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long in_FS_OFFSET;
  MethodBind *local_a0;
  int local_98;
  uint local_94;
  GDScriptDataType local_90 [8];
  long local_88;
  CowData<char32_t> local_78 [32];
  char local_58;
  CallTarget *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2[0x3a] == (MethodBind)0x0) {
    get_call_target(&local_98,this,param_1,0);
LAB_0010cd82:
    if (*(long *)(param_3 + 8) == 0) {
      iVar5 = 1;
    }
    else {
      iVar5 = (int)*(undefined8 *)(*(long *)(param_3 + 8) + -8) + 1;
    }
    append_opcode_and_argcount(this,0x34 - (uint)(byte)param_2[0x3a],iVar5);
    lVar2 = *(long *)(param_3 + 8);
    for (lVar6 = 0; (lVar2 != 0 && (lVar6 < *(long *)(lVar2 + -8))); lVar6 = lVar6 + 1) {
      append((Address *)this);
      lVar2 = *(long *)(param_3 + 8);
    }
    append((Address *)this);
    if (*(long *)(param_3 + 8) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(long *)(param_3 + 8) + -8);
    }
    Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar5);
    local_a0 = param_2;
    if (*(long *)(this + 0x2a0) != 0) {
      for (lVar2 = *(long *)(*(long *)(this + 0x2a0) + 0x10); *(long *)(this + 0x2a8) != lVar2;
          lVar2 = *(long *)(lVar2 + 0x10)) {
        while (*(MethodBind **)(lVar2 + 0x30) <= param_2) {
          if (param_2 <= *(MethodBind **)(lVar2 + 0x30)) {
            piVar3 = (int *)RBMap<MethodBind*,int,Comparator<MethodBind*>,DefaultAllocator>::
                            operator[]((RBMap<MethodBind*,int,Comparator<MethodBind*>,DefaultAllocator>
                                        *)(this + 0x2a0),&local_a0);
            iVar5 = *piVar3;
            goto LAB_0010ce8c;
          }
          lVar2 = *(long *)(lVar2 + 8);
          if (lVar2 == *(long *)(this + 0x2a8)) goto LAB_0010ce68;
        }
      }
    }
LAB_0010ce68:
    iVar5 = *(int *)(this + 0x2b0);
    piVar3 = (int *)RBMap<MethodBind*,int,Comparator<MethodBind*>,DefaultAllocator>::operator[]
                              ((RBMap<MethodBind*,int,Comparator<MethodBind*>,DefaultAllocator> *)
                               (this + 0x2a0),&local_a0);
    *piVar3 = iVar5;
LAB_0010ce8c:
    Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar5);
    if (local_58 != '\0') {
      CallTarget::cleanup(local_50);
    }
    GDScriptDataType::~GDScriptDataType(local_90);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  MethodBind::get_return_info();
  CowData<char32_t>::_unref(local_78);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
  get_call_target(&local_98,this,param_1,local_98);
  lVar2 = *(long *)(this + 0xb0);
  uVar4 = (ulong)local_94;
  if (lVar2 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar2 + -8);
    if ((long)uVar4 < lVar6) {
      if (local_98 != *(int *)(lVar2 + uVar4 * 0x18)) {
        (**(code **)(*(long *)this + 0x90))(this,&local_98,local_98);
      }
      goto LAB_0010cd82;
    }
  }
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar4,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptByteCodeGenerator::write_lambda(GDScriptCodeGenerator::Address const&, GDScriptFunction*,
   Vector<GDScriptCodeGenerator::Address> const&, bool) */

void __thiscall
GDScriptByteCodeGenerator::write_lambda
          (GDScriptByteCodeGenerator *this,Address *param_1,GDScriptFunction *param_2,
          Vector *param_3,bool param_4)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  GDScriptFunction *local_90;
  undefined1 local_88 [8];
  GDScriptDataType local_80 [56];
  char local_48;
  CallTarget *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_3 + 8) == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = (int)*(undefined8 *)(*(long *)(param_3 + 8) + -8) + 1;
  }
  append_opcode_and_argcount(this,param_4 + 0x39,iVar3);
  lVar1 = *(long *)(param_3 + 8);
  for (lVar4 = 0; (lVar1 != 0 && (lVar4 < *(long *)(lVar1 + -8))); lVar4 = lVar4 + 1) {
    append((Address *)this);
    lVar1 = *(long *)(param_3 + 8);
  }
  get_call_target(local_88,this,param_1,0);
  append((Address *)this);
  if (*(long *)(param_3 + 8) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(long *)(param_3 + 8) + -8);
  }
  Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar3);
  local_90 = param_2;
  if (*(long *)(this + 0x2b8) != 0) {
    for (lVar1 = *(long *)(*(long *)(this + 0x2b8) + 0x10); *(long *)(this + 0x2c0) != lVar1;
        lVar1 = *(long *)(lVar1 + 0x10)) {
      while (*(GDScriptFunction **)(lVar1 + 0x30) <= param_2) {
        if (param_2 <= *(GDScriptFunction **)(lVar1 + 0x30)) {
          piVar2 = (int *)RBMap<GDScriptFunction*,int,Comparator<GDScriptFunction*>,DefaultAllocator>
                          ::operator[]((RBMap<GDScriptFunction*,int,Comparator<GDScriptFunction*>,DefaultAllocator>
                                        *)(this + 0x2b8),&local_90);
          iVar3 = *piVar2;
          goto LAB_0010d10c;
        }
        lVar1 = *(long *)(lVar1 + 8);
        if (lVar1 == *(long *)(this + 0x2c0)) goto LAB_0010d0e8;
      }
    }
  }
LAB_0010d0e8:
  iVar3 = *(int *)(this + 0x2c8);
  piVar2 = (int *)RBMap<GDScriptFunction*,int,Comparator<GDScriptFunction*>,DefaultAllocator>::
                  operator[]((RBMap<GDScriptFunction*,int,Comparator<GDScriptFunction*>,DefaultAllocator>
                              *)(this + 0x2b8),&local_90);
  *piVar2 = iVar3;
LAB_0010d10c:
  Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar3);
  if (local_48 != '\0') {
    CallTarget::cleanup(local_40);
  }
  GDScriptDataType::~GDScriptDataType(local_80);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GDScriptByteCodeGenerator::add_temporary(GDScriptDataType const&) */

undefined4 __thiscall
GDScriptByteCodeGenerator::add_temporary(GDScriptByteCodeGenerator *this,GDScriptDataType *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 uVar4;
  long lVar5;
  List<int,DefaultAllocator> *pLVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  uint local_60;
  int local_5c;
  uint local_58;
  undefined1 uStack_54;
  undefined3 uStack_53;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  if (((param_1[0x14] != (GDScriptDataType)0x0) && (*(int *)(param_1 + 0x10) == 1)) &&
     ((uVar2 = *(uint *)(param_1 + 0x18), uVar2 < 0x18 || (uVar2 - 0x19 < 2)))) {
    local_60 = uVar2;
  }
  uVar2 = local_60;
  lVar5 = *(long *)(this + 0xe8);
  if (lVar5 != 0) {
    while (lVar5 = *(long *)(lVar5 + 0x10), *(long *)(this + 0xf0) != lVar5) {
      while (*(int *)(lVar5 + 0x30) <= (int)local_60) {
        if ((int)local_60 <= *(int *)(lVar5 + 0x30)) goto LAB_0010d226;
        lVar5 = *(long *)(lVar5 + 8);
        if (*(long *)(this + 0xf0) == lVar5) goto LAB_0010d1ed;
      }
    }
  }
LAB_0010d1ed:
  _local_58 = 0;
  pLVar6 = (List<int,DefaultAllocator> *)
           RBMap<Variant::Type,List<int,DefaultAllocator>,Comparator<Variant::Type>,DefaultAllocator>
           ::operator[]((RBMap<Variant::Type,List<int,DefaultAllocator>,Comparator<Variant::Type>,DefaultAllocator>
                         *)(this + 0xe8),(Type *)&local_60);
  List<int,DefaultAllocator>::clear(pLVar6);
  *(undefined8 *)pLVar6 = 0;
  List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)&local_58);
LAB_0010d226:
  pLVar6 = (List<int,DefaultAllocator> *)
           RBMap<Variant::Type,List<int,DefaultAllocator>,Comparator<Variant::Type>,DefaultAllocator>
           ::operator[]((RBMap<Variant::Type,List<int,DefaultAllocator>,Comparator<Variant::Type>,DefaultAllocator>
                         *)(this + 0xe8),(Type *)&local_60);
  puVar7 = *(undefined8 **)pLVar6;
  if ((puVar7 == (undefined8 *)0x0) || (*(int *)(puVar7 + 2) == 0)) {
    uVar4 = GDScriptDataType::can_contain_object(param_1);
    if (*(long *)(this + 0xb0) == 0) {
      local_5c = 0;
    }
    else {
      local_5c = *(int *)(*(long *)(this + 0xb0) + -8);
    }
    List<int,DefaultAllocator>::push_back(pLVar6,&local_5c);
    _local_58 = CONCAT14(uVar4,uVar2);
    local_48 = 0;
    Vector<GDScriptByteCodeGenerator::StackSlot>::push_back
              ((Vector<GDScriptByteCodeGenerator::StackSlot> *)(this + 0xa8),&local_58);
    CowData<int>::_unref((CowData<int> *)&local_48);
    puVar7 = *(undefined8 **)pLVar6;
    if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  uVar1 = *(undefined4 *)*puVar7;
  _local_58 = CONCAT44(_uStack_54,uVar1);
  List<int,DefaultAllocator>::erase(pLVar6,(Element *)*puVar7);
  List<int,DefaultAllocator>::push_back
            ((List<int,DefaultAllocator> *)(this + 0xb8),(int *)&local_58);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* GDScriptByteCodeGenerator::pop_temporary() */

void __thiscall GDScriptByteCodeGenerator::pop_temporary(GDScriptByteCodeGenerator *this)

{
  code *pcVar1;
  List<int,DefaultAllocator> *this_00;
  long lVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  int local_4c;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(this + 0xb8);
  if ((lVar2 == 0) || (*(int *)(lVar2 + 0x10) == 0)) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("pop_temporary","modules/gdscript/gdscript_byte_codegen.cpp",0x8a,
                       "Condition \"used_temporaries.is_empty()\" is true.",0,0);
      return;
    }
    goto LAB_0010d4fe;
  }
  lVar3 = *(long *)(this + 0xb0);
  local_4c = **(int **)(lVar2 + 8);
  lVar2 = (long)local_4c;
  if (lVar2 < 0) {
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + -8);
      goto LAB_0010d450;
    }
  }
  else if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + -8);
    if (lVar4 <= lVar2) goto LAB_0010d450;
    if (*(char *)(lVar3 + 4 + lVar2 * 0x18) != '\0') {
      HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert(local_48);
      lVar3 = *(long *)(this + 0xb0);
      if (lVar3 == 0) goto LAB_0010d4e0;
      lVar4 = *(long *)(lVar3 + -8);
      if (lVar4 <= lVar2) goto LAB_0010d450;
    }
    this_00 = (List<int,DefaultAllocator> *)
              RBMap<Variant::Type,List<int,DefaultAllocator>,Comparator<Variant::Type>,DefaultAllocator>
              ::operator[]((RBMap<Variant::Type,List<int,DefaultAllocator>,Comparator<Variant::Type>,DefaultAllocator>
                            *)(this + 0xe8),(Type *)(lVar3 + lVar2 * 0x18));
    List<int,DefaultAllocator>::push_back(this_00,&local_4c);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      List<int,DefaultAllocator>::pop_back((List<int,DefaultAllocator> *)(this + 0xb8));
      return;
    }
LAB_0010d4fe:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_0010d4e0:
  lVar4 = 0;
LAB_0010d450:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar2,lVar4,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptByteCodeGenerator::write_construct(GDScriptCodeGenerator::Address const&, Variant::Type,
   Vector<GDScriptCodeGenerator::Address> const&) */

void __thiscall
GDScriptByteCodeGenerator::write_construct
          (GDScriptByteCodeGenerator *this,undefined8 param_1,int param_3,long param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  _func_void_Variant_ptr_Variant_ptr_ptr *p_Var6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long in_FS_OFFSET;
  String local_b0 [16];
  long local_a0;
  undefined1 local_98 [8];
  GDScriptDataType local_90 [56];
  char local_58;
  CallTarget *local_50;
  long local_40;
  
  lVar10 = 0;
  lVar8 = *(long *)(param_4 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = 0;
  while (lVar8 != 0) {
    while( true ) {
      if (*(long *)(lVar8 + -8) <= lVar10) goto LAB_0010d640;
      lVar5 = lVar10 * 0x40 + lVar8;
      if ((*(char *)(lVar5 + 0x1c) == '\0') || (*(int *)(lVar5 + 0x18) != 1)) goto LAB_0010d845;
      uVar1 = *(undefined4 *)(lVar5 + 0x20);
      if (local_a0 == 0) {
        lVar8 = 1;
      }
      else {
        lVar8 = *(long *)(local_a0 + -8) + 1;
      }
      iVar4 = CowData<Variant::Type>::resize<false>((CowData<Variant::Type> *)&local_a0,lVar8);
      if (iVar4 == 0) break;
      lVar10 = lVar10 + 1;
      _err_print_error("push_back","./core/templates/vector.h",0x142,
                       "Condition \"err\" is true. Returning: true",0,0);
      lVar8 = *(long *)(param_4 + 8);
      if (lVar8 == 0) goto LAB_0010d640;
    }
    if (local_a0 == 0) {
      lVar5 = -1;
      lVar8 = 0;
LAB_0010d7fa:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar5,lVar8,"p_index","size()","",false,
                 false);
    }
    else {
      lVar8 = *(long *)(local_a0 + -8);
      lVar5 = lVar8 + -1;
      if (lVar5 < 0) goto LAB_0010d7fa;
      CowData<Variant::Type>::_copy_on_write((CowData<Variant::Type> *)&local_a0);
      *(undefined4 *)(local_a0 + lVar5 * 4) = uVar1;
    }
    lVar10 = lVar10 + 1;
    lVar8 = *(long *)(param_4 + 8);
  }
LAB_0010d640:
  iVar4 = 0;
  do {
    iVar2 = Variant::get_constructor_count(param_3);
    if (iVar2 <= iVar4) {
      lVar8 = *(long *)(param_4 + 8);
LAB_0010d845:
      if (lVar8 == 0) {
        iVar4 = 1;
      }
      else {
        iVar4 = (int)*(undefined8 *)(lVar8 + -8) + 1;
      }
      append_opcode_and_argcount(this,0x21,iVar4);
      lVar8 = *(long *)(param_4 + 8);
      for (lVar10 = 0; (lVar8 != 0 && (lVar10 < *(long *)(lVar8 + -8))); lVar10 = lVar10 + 1) {
        append((Address *)this);
        lVar8 = *(long *)(param_4 + 8);
      }
      get_call_target(local_98,this,param_1,0);
      append((Address *)this);
      if (*(long *)(param_4 + 8) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(long *)(param_4 + 8) + -8);
      }
      Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar4);
      Vector<int>::push_back((Vector<int> *)(this + 0x20),param_3);
      if (local_58 != '\0') {
        CallTarget::cleanup(local_50);
      }
      GDScriptDataType::~GDScriptDataType(local_90);
      CowData<Variant::Type>::_unref((CowData<Variant::Type> *)&local_a0);
LAB_0010d910:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    iVar2 = Variant::get_constructor_argument_count(param_3,iVar4);
    lVar10 = local_a0;
    lVar8 = *(long *)(param_4 + 8);
    if (lVar8 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar8 + -8);
    }
    if (iVar2 == lVar5) {
      if (local_a0 == 0) {
LAB_0010d6b4:
        if (lVar8 == 0) {
          iVar2 = 1;
        }
        else {
          iVar2 = (int)*(undefined8 *)(lVar8 + -8) + 1;
        }
        append_opcode_and_argcount(this,0x22,iVar2);
        lVar8 = *(long *)(param_4 + 8);
        for (lVar10 = 0; (lVar8 != 0 && (lVar10 < *(long *)(lVar8 + -8))); lVar10 = lVar10 + 1) {
          append((Address *)this);
          lVar8 = *(long *)(param_4 + 8);
        }
        get_call_target(local_98,this,param_1,0);
        append((Address *)this);
        if (*(long *)(param_4 + 8) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(*(long *)(param_4 + 8) + -8);
        }
        Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar2);
        p_Var6 = (_func_void_Variant_ptr_Variant_ptr_ptr *)
                 Variant::get_validated_constructor(param_3,iVar4);
        iVar2 = get_constructor_pos(this,p_Var6);
        Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar2);
        if (local_58 != '\0') {
          CallTarget::cleanup(local_50);
        }
        Variant::get_type_name(local_b0,param_3);
        p_Var6 = (_func_void_Variant_ptr_Variant_ptr_ptr *)
                 Variant::get_validated_constructor(param_3,iVar4);
        iVar4 = get_constructor_pos(this,p_Var6);
        add_debug_name((Vector *)(this + 0x310),iVar4,local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
        GDScriptDataType::~GDScriptDataType(local_90);
        CowData<Variant::Type>::_unref((CowData<Variant::Type> *)&local_a0);
        goto LAB_0010d910;
      }
      uVar9 = 0;
      do {
        uVar7 = uVar9 & 0xffffffff;
        if (*(long *)(lVar10 + -8) <= (long)uVar9) {
          lVar8 = *(long *)(param_4 + 8);
          goto LAB_0010d6b4;
        }
        iVar2 = *(int *)(lVar10 + uVar9 * 4);
        uVar9 = uVar9 + 1;
        iVar3 = Variant::get_constructor_argument_type(param_3,iVar4,uVar7);
      } while (iVar2 == iVar3);
    }
    iVar4 = iVar4 + 1;
  } while( true );
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* HashSet<int, HashMapHasherDefault, HashMapComparatorDefault<int> >::_insert_with_hash(unsigned
   int, unsigned int) [clone .isra.0] */

void __thiscall
HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::_insert_with_hash
          (HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this,uint param_1,
          uint param_2)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint *puVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  uint local_48;
  
  lVar5 = *(long *)(this + 0x18);
  lVar6 = *(long *)(this + 0x10);
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4);
  uVar21 = CONCAT44(0,uVar3);
  lVar7 = *(long *)(this + 8);
  uVar20 = 0;
  lVar8 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (ulong)param_1 * lVar8;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar21;
  lVar1 = SUB168(auVar9 * auVar13,8) * 4;
  iVar18 = SUB164(auVar9 * auVar13,8);
  puVar2 = (uint *)(lVar5 + lVar1);
  uVar4 = *puVar2;
  while (uVar4 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar4 * lVar8;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar21;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((uVar3 + iVar18) - SUB164(auVar10 * auVar14,8)) * lVar8;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar21;
    local_48 = SUB164(auVar11 * auVar15,8);
    uVar22 = param_2;
    uVar19 = param_1;
    if (local_48 < uVar20) {
      puVar17 = (uint *)(lVar1 + lVar7);
      *(int *)(lVar6 + (ulong)param_2 * 4) = iVar18;
      uVar19 = *puVar2;
      *puVar2 = param_1;
      uVar22 = *puVar17;
      *puVar17 = param_2;
      uVar20 = local_48;
    }
    uVar20 = uVar20 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar18 + 1) * lVar8;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar21;
    lVar1 = SUB168(auVar12 * auVar16,8) * 4;
    iVar18 = SUB164(auVar12 * auVar16,8);
    puVar2 = (uint *)(lVar5 + lVar1);
    param_1 = uVar19;
    param_2 = uVar22;
    uVar4 = *puVar2;
  }
  *puVar2 = param_1;
  *(int *)(lVar6 + (ulong)param_2 * 4) = iVar18;
  *(uint *)(lVar7 + lVar1) = param_2;
  return;
}



/* HashMap<int, Variant::Type, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Variant::Type> > >::_lookup_pos(int const&, unsigned
   int&) const [clone .isra.0] */

undefined8 __thiscall
HashMap<int,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Variant::Type>>>
::_lookup_pos(HashMap<int,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Variant::Type>>>
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



/* RBMap<void (*)(Variant*, Variant const**, int, Callable::CallError&), int, Comparator<void
   (*)(Variant*, Variant const**, int, Callable::CallError&)>,
   DefaultAllocator>::_cleanup_tree(RBMap<void (*)(Variant*, Variant const**, int,
   Callable::CallError&), int, Comparator<void (*)(Variant*, Variant const**, int,
   Callable::CallError&)>, DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBMap<void(*)(Variant*,Variant_const**,int,Callable::CallError&),int,Comparator<void(*)(Variant*,Variant_const**,int,Callable::CallError&)>,DefaultAllocator>
::_cleanup_tree(RBMap<void(*)(Variant*,Variant_const**,int,Callable::CallError&),int,Comparator<void(*)(Variant*,Variant_const**,int,Callable::CallError&)>,DefaultAllocator>
                *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
  }
  Memory::free_static(param_1,false);
  return;
}



/* RBMap<void (*)(Variant*, Variant const*, Variant const*, bool*), int, Comparator<void
   (*)(Variant*, Variant const*, Variant const*, bool*)>,
   DefaultAllocator>::_cleanup_tree(RBMap<void (*)(Variant*, Variant const*, Variant const*, bool*),
   int, Comparator<void (*)(Variant*, Variant const*, Variant const*, bool*)>,
   DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBMap<void(*)(Variant*,Variant_const*,Variant_const*,bool*),int,Comparator<void(*)(Variant*,Variant_const*,Variant_const*,bool*)>,DefaultAllocator>
::_cleanup_tree(RBMap<void(*)(Variant*,Variant_const*,Variant_const*,bool*),int,Comparator<void(*)(Variant*,Variant_const*,Variant_const*,bool*)>,DefaultAllocator>
                *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
  }
  Memory::free_static(param_1,false);
  return;
}



/* RBMap<void (*)(Variant*, long, Variant const*, bool*), int, Comparator<void (*)(Variant*, long,
   Variant const*, bool*)>, DefaultAllocator>::_cleanup_tree(RBMap<void (*)(Variant*, long, Variant
   const*, bool*), int, Comparator<void (*)(Variant*, long, Variant const*, bool*)>,
   DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBMap<void(*)(Variant*,long,Variant_const*,bool*),int,Comparator<void(*)(Variant*,long,Variant_const*,bool*)>,DefaultAllocator>
::_cleanup_tree(RBMap<void(*)(Variant*,long,Variant_const*,bool*),int,Comparator<void(*)(Variant*,long,Variant_const*,bool*)>,DefaultAllocator>
                *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
  }
  Memory::free_static(param_1,false);
  return;
}



/* RBMap<void (*)(Variant const*, Variant const*, Variant*), int, Comparator<void (*)(Variant
   const*, Variant const*, Variant*)>, DefaultAllocator>::_cleanup_tree(RBMap<void (*)(Variant
   const*, Variant const*, Variant*), int, Comparator<void (*)(Variant const*, Variant const*,
   Variant*)>, DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
::_cleanup_tree(RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
                *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
  }
  Memory::free_static(param_1,false);
  return;
}



/* RBMap<void (*)(Variant*, Variant const**, int, Variant*), int, Comparator<void (*)(Variant*,
   Variant const**, int, Variant*)>, DefaultAllocator>::_cleanup_tree(RBMap<void (*)(Variant*,
   Variant const**, int, Variant*), int, Comparator<void (*)(Variant*, Variant const**, int,
   Variant*)>, DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBMap<void(*)(Variant*,Variant_const**,int,Variant*),int,Comparator<void(*)(Variant*,Variant_const**,int,Variant*)>,DefaultAllocator>
::_cleanup_tree(RBMap<void(*)(Variant*,Variant_const**,int,Variant*),int,Comparator<void(*)(Variant*,Variant_const**,int,Variant*)>,DefaultAllocator>
                *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
  }
  Memory::free_static(param_1,false);
  return;
}



/* RBMap<void (*)(Variant const*, long, Variant*, bool*), int, Comparator<void (*)(Variant const*,
   long, Variant*, bool*)>, DefaultAllocator>::_cleanup_tree(RBMap<void (*)(Variant const*, long,
   Variant*, bool*), int, Comparator<void (*)(Variant const*, long, Variant*, bool*)>,
   DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBMap<void(*)(Variant_const*,long,Variant*,bool*),int,Comparator<void(*)(Variant_const*,long,Variant*,bool*)>,DefaultAllocator>
::_cleanup_tree(RBMap<void(*)(Variant_const*,long,Variant*,bool*),int,Comparator<void(*)(Variant_const*,long,Variant*,bool*)>,DefaultAllocator>
                *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
  }
  Memory::free_static(param_1,false);
  return;
}



/* RBMap<void (*)(Variant*, Variant const**, int), int, Comparator<void (*)(Variant*, Variant
   const**, int)>, DefaultAllocator>::_cleanup_tree(RBMap<void (*)(Variant*, Variant const**, int),
   int, Comparator<void (*)(Variant*, Variant const**, int)>, DefaultAllocator>::Element*) [clone
   .part.0] */

void __thiscall
RBMap<void(*)(Variant*,Variant_const**,int),int,Comparator<void(*)(Variant*,Variant_const**,int)>,DefaultAllocator>
::_cleanup_tree(RBMap<void(*)(Variant*,Variant_const**,int),int,Comparator<void(*)(Variant*,Variant_const**,int)>,DefaultAllocator>
                *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
  }
  Memory::free_static(param_1,false);
  return;
}



/* RBMap<void (*)(Variant*, Variant const*), int, Comparator<void (*)(Variant*, Variant const*)>,
   DefaultAllocator>::_cleanup_tree(RBMap<void (*)(Variant*, Variant const*), int, Comparator<void
   (*)(Variant*, Variant const*)>, DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBMap<void(*)(Variant*,Variant_const*),int,Comparator<void(*)(Variant*,Variant_const*)>,DefaultAllocator>
::_cleanup_tree(RBMap<void(*)(Variant*,Variant_const*),int,Comparator<void(*)(Variant*,Variant_const*)>,DefaultAllocator>
                *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
  }
  Memory::free_static(param_1,false);
  return;
}



/* RBMap<void (*)(Variant const*, Variant*), int, Comparator<void (*)(Variant const*, Variant*)>,
   DefaultAllocator>::_cleanup_tree(RBMap<void (*)(Variant const*, Variant*), int, Comparator<void
   (*)(Variant const*, Variant*)>, DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBMap<void(*)(Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant*)>,DefaultAllocator>
::_cleanup_tree(RBMap<void(*)(Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant*)>,DefaultAllocator>
                *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
  }
  Memory::free_static(param_1,false);
  return;
}



/* RBMap<MethodBind*, int, Comparator<MethodBind*>,
   DefaultAllocator>::_cleanup_tree(RBMap<MethodBind*, int, Comparator<MethodBind*>,
   DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBMap<MethodBind*,int,Comparator<MethodBind*>,DefaultAllocator>::_cleanup_tree
          (RBMap<MethodBind*,int,Comparator<MethodBind*>,DefaultAllocator> *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
  }
  Memory::free_static(param_1,false);
  return;
}



/* RBMap<GDScriptFunction*, int, Comparator<GDScriptFunction*>,
   DefaultAllocator>::_cleanup_tree(RBMap<GDScriptFunction*, int, Comparator<GDScriptFunction*>,
   DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBMap<GDScriptFunction*,int,Comparator<GDScriptFunction*>,DefaultAllocator>::_cleanup_tree
          (RBMap<GDScriptFunction*,int,Comparator<GDScriptFunction*>,DefaultAllocator> *this,
          Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
  }
  Memory::free_static(param_1,false);
  return;
}



/* RBMap<void (*)(Variant*, Variant const**), int, Comparator<void (*)(Variant*, Variant const**)>,
   DefaultAllocator>::_cleanup_tree(RBMap<void (*)(Variant*, Variant const**), int, Comparator<void
   (*)(Variant*, Variant const**)>, DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBMap<void(*)(Variant*,Variant_const**),int,Comparator<void(*)(Variant*,Variant_const**)>,DefaultAllocator>
::_cleanup_tree(RBMap<void(*)(Variant*,Variant_const**),int,Comparator<void(*)(Variant*,Variant_const**)>,DefaultAllocator>
                *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
  }
  Memory::free_static(param_1,false);
  return;
}



/* RBMap<void (*)(Variant const*, Variant const*, Variant*, bool*), int, Comparator<void (*)(Variant
   const*, Variant const*, Variant*, bool*)>, DefaultAllocator>::_cleanup_tree(RBMap<void
   (*)(Variant const*, Variant const*, Variant*, bool*), int, Comparator<void (*)(Variant const*,
   Variant const*, Variant*, bool*)>, DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBMap<void(*)(Variant_const*,Variant_const*,Variant*,bool*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*,bool*)>,DefaultAllocator>
::_cleanup_tree(RBMap<void(*)(Variant_const*,Variant_const*,Variant*,bool*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*,bool*)>,DefaultAllocator>
                *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar5,false);
      }
      Memory::free_static(pEVar2,false);
    }
    Memory::free_static(pEVar1,false);
  }
  Memory::free_static(param_1,false);
  return;
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



/* List<int, DefaultAllocator>::pop_back() */

void __thiscall List<int,DefaultAllocator>::pop_back(List<int,DefaultAllocator> *this)

{
  Element *pEVar1;
  
  if ((*(long *)this != 0) && (pEVar1 = *(Element **)(*(long *)this + 8), pEVar1 != (Element *)0x0))
  {
    erase(this,pEVar1);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<int, HashMapHasherDefault, HashMapComparatorDefault<int> >::insert(int const&) */

int * HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert(int *param_1)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  uint *in_RDX;
  long lVar9;
  long lVar10;
  uint uVar11;
  HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *in_RSI;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x20) * 4);
  if (*(long *)in_RSI == 0) {
    uVar6 = (ulong)uVar5 << 2;
    uVar7 = Memory::alloc_static(uVar6,false);
    *(undefined8 *)(in_RSI + 0x18) = uVar7;
    uVar7 = Memory::alloc_static(uVar6,false);
    *(undefined8 *)in_RSI = uVar7;
    uVar7 = Memory::alloc_static(uVar6,false);
    *(undefined8 *)(in_RSI + 0x10) = uVar7;
    uVar7 = Memory::alloc_static(uVar6,false);
    *(undefined8 *)(in_RSI + 8) = uVar7;
    if (uVar5 != 0) {
      memset(*(void **)(in_RSI + 0x18),0,uVar6);
    }
  }
  uVar11 = *in_RDX;
  local_44 = 0;
  cVar4 = _lookup_pos(in_RSI,(int *)(ulong)uVar11,&local_44);
  if (cVar4 == '\0') {
    uVar1 = *(uint *)(in_RSI + 0x24);
    if ((float)uVar5 * __LC12 < (float)(uVar1 + 1)) {
      if (*(int *)(in_RSI + 0x20) == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        iVar8 = *(int *)(in_RSI + 0x24);
        lVar9 = *(long *)in_RSI;
        uVar5 = 0xffffffff;
        goto LAB_0011350f;
      }
      uVar5 = *(int *)(in_RSI + 0x20) + 1;
      uVar6 = (ulong)uVar5;
      pvVar2 = *(void **)(in_RSI + 0x18);
      if (uVar5 < 2) {
        uVar6 = 2;
      }
      uVar5 = *(uint *)(hash_table_size_primes + uVar6 * 4);
      pvVar3 = *(void **)(in_RSI + 0x10);
      *(int *)(in_RSI + 0x20) = (int)uVar6;
      uVar6 = (ulong)uVar5 << 2;
      uVar7 = Memory::alloc_static(uVar6,false);
      *(undefined8 *)(in_RSI + 0x18) = uVar7;
      uVar7 = Memory::realloc_static(*(void **)in_RSI,uVar6,false);
      *(undefined8 *)in_RSI = uVar7;
      uVar7 = Memory::alloc_static(uVar6,false);
      *(undefined8 *)(in_RSI + 0x10) = uVar7;
      uVar7 = Memory::realloc_static(*(void **)(in_RSI + 8),uVar6,false);
      *(undefined8 *)(in_RSI + 8) = uVar7;
      if (uVar5 != 0) {
        memset(*(void **)(in_RSI + 0x18),0,uVar6);
      }
      lVar9 = 0;
      if (*(int *)(in_RSI + 0x24) != 0) {
        do {
          lVar10 = lVar9 + 1;
          _insert_with_hash(in_RSI,*(uint *)((long)pvVar2 +
                                            (ulong)*(uint *)((long)pvVar3 + lVar9 * 4) * 4),
                            (uint)lVar9);
          lVar9 = lVar10;
        } while ((uint)lVar10 < *(uint *)(in_RSI + 0x24));
      }
      Memory::free_static(pvVar2,false);
      Memory::free_static(pvVar3,false);
      uVar11 = *in_RDX;
      uVar1 = *(uint *)(in_RSI + 0x24);
    }
    lVar9 = *(long *)in_RSI;
    *(uint *)(lVar9 + (ulong)uVar1 * 4) = uVar11;
    uVar5 = (uVar11 >> 0x10 ^ uVar11) * -0x7a143595;
    uVar5 = (uVar5 ^ uVar5 >> 0xd) * -0x3d4d51cb;
    uVar11 = uVar5 ^ uVar5 >> 0x10;
    if (uVar5 == uVar5 >> 0x10) {
      uVar11 = 1;
    }
    _insert_with_hash(in_RSI,uVar11,*(uint *)(in_RSI + 0x24));
    uVar5 = *(uint *)(in_RSI + 0x24);
    iVar8 = uVar5 + 1;
    *(int *)(in_RSI + 0x24) = iVar8;
  }
  else {
    iVar8 = *(int *)(in_RSI + 0x24);
    lVar9 = *(long *)in_RSI;
    uVar5 = local_44;
  }
LAB_0011350f:
  *(long *)param_1 = lVar9;
  param_1[2] = iVar8;
  param_1[3] = uVar5;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, int> > >::operator[](StringName const&) const */

long __thiscall
HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
::operator[](HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
             *this,StringName *param_1)

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
  uint uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  
  if ((*(long *)(this + 8) != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar17 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar12 = StringName::get_empty_hash();
    }
    else {
      uVar12 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar12 == 0) {
      uVar12 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar12 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar17;
    lVar14 = SUB168(auVar3 * auVar7,8);
    uVar15 = *(uint *)(*(long *)(this + 0x10) + lVar14 * 4);
    uVar13 = SUB164(auVar3 * auVar7,8);
    if (uVar15 != 0) {
      uVar16 = 0;
      do {
        if ((uVar12 == uVar15) &&
           (*(long *)(*(long *)(*(long *)(this + 8) + lVar14 * 8) + 0x10) == *(long *)param_1)) {
          return *(long *)(*(long *)(this + 8) + (ulong)uVar13 * 8) + 0x18;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar13 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar17;
        lVar14 = SUB168(auVar4 * auVar8,8);
        uVar15 = *(uint *)(*(long *)(this + 0x10) + lVar14 * 4);
        uVar13 = SUB164(auVar4 * auVar8,8);
      } while ((uVar15 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar15 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar17, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar13) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar17, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                   "FATAL: Condition \"!exists\" is true.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar11 = (code *)invalidInstructionException();
  (*pcVar11)();
}



/* List<int, DefaultAllocator>::~List() */

undefined8 __thiscall List<int,DefaultAllocator>::~List(List<int,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uStack_18;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return uStack_18;
  }
  do {
    pvVar1 = (void *)*plVar5;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        uVar4 = _err_print_error("~List","./core/templates/list.h",0x316,
                                 "Condition \"_data->size_cache\" is true.",0,0);
        return uVar4;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x18) == plVar5) {
      lVar3 = *(long *)((long)pvVar1 + 8);
      lVar2 = *(long *)((long)pvVar1 + 0x10);
      *plVar5 = lVar3;
      if (pvVar1 == (void *)plVar5[1]) {
        plVar5[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 8);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      Memory::free_static(pvVar1,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  uVar4 = Memory::free_static(plVar5,false);
  return uVar4;
}



/* RBMap<Variant::Type, List<int, DefaultAllocator>, Comparator<Variant::Type>,
   DefaultAllocator>::_cleanup_tree(RBMap<Variant::Type, List<int, DefaultAllocator>,
   Comparator<Variant::Type>, DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBMap<Variant::Type,List<int,DefaultAllocator>,Comparator<Variant::Type>,DefaultAllocator>::
_cleanup_tree(RBMap<Variant::Type,List<int,DefaultAllocator>,Comparator<Variant::Type>,DefaultAllocator>
              *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar2 + 0x38));
          Memory::free_static(pEVar2,false);
        }
        List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar5 + 0x38));
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
        }
        List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar2 + 0x38));
        Memory::free_static(pEVar2,false);
      }
      List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar3 + 0x38));
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
        }
        List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar5 + 0x38));
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
        }
        List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar5 + 0x38));
        Memory::free_static(pEVar5,false);
      }
      List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar2 + 0x38));
      Memory::free_static(pEVar2,false);
    }
    List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar1 + 0x38));
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar2 + 0x38));
          Memory::free_static(pEVar2,false);
        }
        List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar5 + 0x38));
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
        }
        List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar2 + 0x38));
        Memory::free_static(pEVar2,false);
      }
      List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar3 + 0x38));
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
        }
        List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar5 + 0x38));
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
        }
        List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar5 + 0x38));
        Memory::free_static(pEVar5,false);
      }
      List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar2 + 0x38));
      Memory::free_static(pEVar2,false);
    }
    List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar1 + 0x38));
    Memory::free_static(pEVar1,false);
  }
  List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(param_1 + 0x38));
  Memory::free_static(param_1,false);
  return;
}



/* List<GDScriptFunction::StackDebug,
   DefaultAllocator>::TEMPNAMEPLACEHOLDERVALUE(List<GDScriptFunction::StackDebug, DefaultAllocator>
   const&) */

void __thiscall
List<GDScriptFunction::StackDebug,DefaultAllocator>::operator=
          (List<GDScriptFunction::StackDebug,DefaultAllocator> *this,List *param_1)

{
  void *pvVar1;
  long lVar2;
  StackDebug *pSVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 != (long *)0x0) {
    do {
      pvVar1 = (void *)*plVar5;
      if (pvVar1 == (void *)0x0) goto LAB_00114148;
      if (*(long **)((long)pvVar1 + 0x28) == plVar5) {
        lVar4 = *(long *)((long)pvVar1 + 0x18);
        lVar2 = *(long *)((long)pvVar1 + 0x20);
        *plVar5 = lVar4;
        if (pvVar1 == (void *)plVar5[1]) {
          plVar5[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x18) = lVar4;
          lVar4 = *(long *)((long)pvVar1 + 0x18);
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x20) = lVar2;
        }
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
          StringName::unref();
        }
        Memory::free_static(pvVar1,false);
        *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar5 = *(long **)this;
    } while ((int)plVar5[2] != 0);
    Memory::free_static(plVar5,false);
    *(undefined8 *)this = 0;
  }
LAB_00114148:
  if (*(undefined8 **)param_1 != (undefined8 *)0x0) {
    for (pSVar3 = (StackDebug *)**(undefined8 **)param_1; pSVar3 != (StackDebug *)0x0;
        pSVar3 = *(StackDebug **)(pSVar3 + 0x18)) {
      push_back(this,pSVar3);
    }
  }
  return;
}



/* HashSet<int, HashMapHasherDefault, HashMapComparatorDefault<int> >::~HashSet() */

void __thiscall
HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::~HashSet
          (HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    if (*(int *)(this + 0x24) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) != 0) {
        memset(*(void **)(this + 0x18),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) << 2);
      }
      *(undefined4 *)(this + 0x24) = 0;
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(*(void **)(this + 0x10),false);
    Memory::free_static(*(void **)(this + 8),false);
    Memory::free_static(*(void **)(this + 0x18),false);
    return;
  }
  return;
}



/* RBMap<Variant::Type, List<int, DefaultAllocator>, Comparator<Variant::Type>,
   DefaultAllocator>::~RBMap() */

void __thiscall
RBMap<Variant::Type,List<int,DefaultAllocator>,Comparator<Variant::Type>,DefaultAllocator>::~RBMap
          (RBMap<Variant::Type,List<int,DefaultAllocator>,Comparator<Variant::Type>,DefaultAllocator>
           *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  void *pvVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  
  pvVar4 = *(void **)this;
  if (pvVar4 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar4 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar7) {
          pEVar5 = *(Element **)(pEVar7 + 0x10);
          if (pEVar2 != pEVar5) {
            pEVar6 = *(Element **)(pEVar5 + 0x10);
            if (pEVar2 != pEVar6) {
              _cleanup_tree(this,pEVar6);
              pEVar6 = *(Element **)(this + 8);
            }
            if (pEVar6 != *(Element **)(pEVar5 + 8)) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 8));
            }
            List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar5 + 0x38));
            Memory::free_static(pEVar5,false);
            pEVar5 = *(Element **)(this + 8);
          }
          if (pEVar5 != *(Element **)(pEVar7 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar7 + 0x38));
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar7) {
          pEVar5 = *(Element **)(pEVar2 + 0x10);
          if (pEVar5 != pEVar7) {
            if (*(Element **)(pEVar5 + 0x10) != pEVar7) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 0x10));
              pEVar7 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar5 + 8) != pEVar7) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 8));
            }
            List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar5 + 0x38));
            Memory::free_static(pEVar5,false);
            pEVar7 = *(Element **)(this + 8);
          }
          if (pEVar7 != *(Element **)(pEVar2 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar2 + 0x38));
          Memory::free_static(pEVar2,false);
        }
        List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar3 + 0x38));
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar2 + 0x10);
        if (pEVar3 != pEVar7) {
          pEVar5 = *(Element **)(pEVar7 + 0x10);
          if (pEVar3 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar7 + 0x38));
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar3 = *(Element **)(pEVar2 + 8);
        if (pEVar3 != pEVar7) {
          if (*(Element **)(pEVar3 + 0x10) != pEVar7) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 0x10));
            pEVar7 = *(Element **)(this + 8);
          }
          pEVar5 = *(Element **)(pEVar3 + 8);
          if (pEVar7 != pEVar5) {
            pEVar6 = *(Element **)(pEVar5 + 0x10);
            if (pEVar7 != pEVar6) {
              _cleanup_tree(this,pEVar6);
              pEVar6 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar5 + 8) != pEVar6) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 8));
            }
            List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar5 + 0x38));
            Memory::free_static(pEVar5,false);
          }
          List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar3 + 0x38));
          Memory::free_static(pEVar3,false);
        }
        List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar2 + 0x38));
        Memory::free_static(pEVar2,false);
      }
      List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)(pEVar1 + 0x38));
      Memory::free_static(pEVar1,false);
      pvVar4 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar4 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)((long)pvVar4 + 0x38));
    Memory::free_static(pvVar4,false);
    return;
  }
  return;
}



/* CowData<char>::_unref() */

void __thiscall CowData<char>::_unref(CowData<char> *this)

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



/* KeyValue<StringName, int>::~KeyValue() */

void __thiscall KeyValue<StringName,int>::~KeyValue(KeyValue<StringName,int> *this)

{
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* RBMap<StringName, int, Comparator<StringName>, DefaultAllocator>::_cleanup_tree(RBMap<StringName,
   int, Comparator<StringName>, DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::_cleanup_tree
          (RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar4 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar4) {
      pEVar6 = *(Element **)(pEVar4 + 0x10);
      if (pEVar2 != pEVar6) {
        pEVar3 = *(Element **)(pEVar6 + 0x10);
        if (pEVar2 != pEVar3) {
          pEVar5 = *(Element **)(pEVar3 + 0x10);
          if (pEVar2 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar3 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 8));
          }
          KeyValue<StringName,int>::~KeyValue((KeyValue<StringName,int> *)(pEVar3 + 0x30));
          Memory::free_static(pEVar3,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar6 + 8);
        if (pEVar2 != pEVar3) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          KeyValue<StringName,int>::~KeyValue((KeyValue<StringName,int> *)(pEVar2 + 0x30));
          Memory::free_static(pEVar2,false);
        }
        KeyValue<StringName,int>::~KeyValue((KeyValue<StringName,int> *)(pEVar6 + 0x30));
        Memory::free_static(pEVar6,false);
        pEVar6 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar4 + 8);
      if (pEVar2 != pEVar6) {
        pEVar3 = *(Element **)(pEVar2 + 0x10);
        if (pEVar3 != pEVar6) {
          if (*(Element **)(pEVar3 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar3 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 8));
          }
          KeyValue<StringName,int>::~KeyValue((KeyValue<StringName,int> *)(pEVar3 + 0x30));
          Memory::free_static(pEVar3,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar3 = *(Element **)(pEVar2 + 8);
        if (pEVar3 != pEVar6) {
          if (*(Element **)(pEVar3 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar3 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 8));
          }
          KeyValue<StringName,int>::~KeyValue((KeyValue<StringName,int> *)(pEVar3 + 0x30));
          Memory::free_static(pEVar3,false);
        }
        KeyValue<StringName,int>::~KeyValue((KeyValue<StringName,int> *)(pEVar2 + 0x30));
        Memory::free_static(pEVar2,false);
      }
      if ((StringName::configured != '\0') && (*(long *)(pEVar4 + 0x30) != 0)) {
        StringName::unref();
      }
      Memory::free_static(pEVar4,false);
      pEVar4 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar4) {
      pEVar6 = *(Element **)(pEVar2 + 0x10);
      if (pEVar6 != pEVar4) {
        pEVar3 = *(Element **)(pEVar6 + 0x10);
        if (pEVar3 != pEVar4) {
          if (*(Element **)(pEVar3 + 0x10) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 0x10));
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar3 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 8));
          }
          KeyValue<StringName,int>::~KeyValue((KeyValue<StringName,int> *)(pEVar3 + 0x30));
          Memory::free_static(pEVar3,false);
          pEVar4 = *(Element **)(this + 8);
        }
        pEVar3 = *(Element **)(pEVar6 + 8);
        if (pEVar3 != pEVar4) {
          if (*(Element **)(pEVar3 + 0x10) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 0x10));
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar3 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 8));
          }
          KeyValue<StringName,int>::~KeyValue((KeyValue<StringName,int> *)(pEVar3 + 0x30));
          Memory::free_static(pEVar3,false);
        }
        KeyValue<StringName,int>::~KeyValue((KeyValue<StringName,int> *)(pEVar6 + 0x30));
        Memory::free_static(pEVar6,false);
        pEVar4 = *(Element **)(this + 8);
      }
      pEVar6 = *(Element **)(pEVar2 + 8);
      if (pEVar4 != pEVar6) {
        pEVar3 = *(Element **)(pEVar6 + 0x10);
        if (pEVar4 != pEVar3) {
          pEVar5 = *(Element **)(pEVar3 + 0x10);
          if (pEVar4 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          if (pEVar5 != *(Element **)(pEVar3 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 8));
          }
          KeyValue<StringName,int>::~KeyValue((KeyValue<StringName,int> *)(pEVar3 + 0x30));
          Memory::free_static(pEVar3,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar4 = *(Element **)(pEVar6 + 8);
        if (pEVar3 != pEVar4) {
          pEVar5 = *(Element **)(pEVar4 + 0x10);
          if (pEVar3 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          if (pEVar5 != *(Element **)(pEVar4 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar4 + 8));
          }
          KeyValue<StringName,int>::~KeyValue((KeyValue<StringName,int> *)(pEVar4 + 0x30));
          Memory::free_static(pEVar4,false);
        }
        KeyValue<StringName,int>::~KeyValue((KeyValue<StringName,int> *)(pEVar6 + 0x30));
        Memory::free_static(pEVar6,false);
      }
      if ((StringName::configured != '\0') && (*(long *)(pEVar2 + 0x30) != 0)) {
        StringName::unref();
      }
      Memory::free_static(pEVar2,false);
    }
    if ((StringName::configured != '\0') && (*(long *)(pEVar1 + 0x30) != 0)) {
      StringName::unref();
    }
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar4 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar4) {
      pEVar6 = *(Element **)(pEVar4 + 0x10);
      if (pEVar2 != pEVar6) {
        pEVar3 = *(Element **)(pEVar6 + 0x10);
        if (pEVar2 != pEVar3) {
          pEVar5 = *(Element **)(pEVar3 + 0x10);
          if (pEVar2 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          if (pEVar5 != *(Element **)(pEVar3 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 8));
          }
          KeyValue<StringName,int>::~KeyValue((KeyValue<StringName,int> *)(pEVar3 + 0x30));
          Memory::free_static(pEVar3,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar6 + 8);
        if (pEVar3 != pEVar2) {
          pEVar5 = *(Element **)(pEVar2 + 0x10);
          if (pEVar3 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          if (pEVar5 != *(Element **)(pEVar2 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          KeyValue<StringName,int>::~KeyValue((KeyValue<StringName,int> *)(pEVar2 + 0x30));
          Memory::free_static(pEVar2,false);
        }
        KeyValue<StringName,int>::~KeyValue((KeyValue<StringName,int> *)(pEVar6 + 0x30));
        Memory::free_static(pEVar6,false);
        pEVar6 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar4 + 8);
      if (pEVar2 != pEVar6) {
        pEVar3 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar3) {
          pEVar5 = *(Element **)(pEVar3 + 0x10);
          if (pEVar6 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          if (pEVar5 != *(Element **)(pEVar3 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 8));
          }
          KeyValue<StringName,int>::~KeyValue((KeyValue<StringName,int> *)(pEVar3 + 0x30));
          Memory::free_static(pEVar3,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          KeyValue<StringName,int>::~KeyValue((KeyValue<StringName,int> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        KeyValue<StringName,int>::~KeyValue((KeyValue<StringName,int> *)(pEVar2 + 0x30));
        Memory::free_static(pEVar2,false);
      }
      if ((StringName::configured != '\0') && (*(long *)(pEVar4 + 0x30) != 0)) {
        StringName::unref();
      }
      Memory::free_static(pEVar4,false);
      pEVar4 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar4) {
      pEVar6 = *(Element **)(pEVar2 + 0x10);
      if (pEVar6 != pEVar4) {
        pEVar3 = *(Element **)(pEVar6 + 0x10);
        if (pEVar3 != pEVar4) {
          if (*(Element **)(pEVar3 + 0x10) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 0x10));
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar3 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 8));
          }
          KeyValue<StringName,int>::~KeyValue((KeyValue<StringName,int> *)(pEVar3 + 0x30));
          Memory::free_static(pEVar3,false);
          pEVar4 = *(Element **)(this + 8);
        }
        pEVar3 = *(Element **)(pEVar6 + 8);
        if (pEVar4 != pEVar3) {
          pEVar5 = *(Element **)(pEVar3 + 0x10);
          if (pEVar4 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          if (pEVar5 != *(Element **)(pEVar3 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 8));
          }
          KeyValue<StringName,int>::~KeyValue((KeyValue<StringName,int> *)(pEVar3 + 0x30));
          Memory::free_static(pEVar3,false);
        }
        KeyValue<StringName,int>::~KeyValue((KeyValue<StringName,int> *)(pEVar6 + 0x30));
        Memory::free_static(pEVar6,false);
        pEVar4 = *(Element **)(this + 8);
      }
      pEVar6 = *(Element **)(pEVar2 + 8);
      if (pEVar6 != pEVar4) {
        pEVar3 = *(Element **)(pEVar6 + 0x10);
        if (pEVar3 != pEVar4) {
          if (*(Element **)(pEVar3 + 0x10) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 0x10));
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar3 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 8));
          }
          KeyValue<StringName,int>::~KeyValue((KeyValue<StringName,int> *)(pEVar3 + 0x30));
          Memory::free_static(pEVar3,false);
          pEVar4 = *(Element **)(this + 8);
        }
        pEVar3 = *(Element **)(pEVar6 + 8);
        if (pEVar4 != pEVar3) {
          pEVar5 = *(Element **)(pEVar3 + 0x10);
          if (pEVar4 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar3 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 8));
          }
          KeyValue<StringName,int>::~KeyValue((KeyValue<StringName,int> *)(pEVar3 + 0x30));
          Memory::free_static(pEVar3,false);
        }
        KeyValue<StringName,int>::~KeyValue((KeyValue<StringName,int> *)(pEVar6 + 0x30));
        Memory::free_static(pEVar6,false);
      }
      if ((StringName::configured != '\0') && (*(long *)(pEVar2 + 0x30) != 0)) {
        StringName::unref();
      }
      Memory::free_static(pEVar2,false);
    }
    if ((StringName::configured != '\0') && (*(long *)(pEVar1 + 0x30) != 0)) {
      StringName::unref();
    }
    Memory::free_static(pEVar1,false);
  }
  if ((StringName::configured != '\0') && (*(long *)(param_1 + 0x30) != 0)) {
    StringName::unref();
  }
  Memory::free_static(param_1,false);
  return;
}



/* RBMap<StringName, int, Comparator<StringName>, DefaultAllocator>::clear() */

void __thiscall
RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::clear
          (RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  void *pvVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  bool bVar8;
  
  pvVar4 = *(void **)this;
  if (pvVar4 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar4 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar7) {
          pEVar6 = *(Element **)(pEVar7 + 0x10);
          if (pEVar2 != pEVar6) {
            pEVar5 = *(Element **)(pEVar6 + 0x10);
            if (pEVar2 != pEVar5) {
              _cleanup_tree(this,pEVar5);
              pEVar5 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar6 + 8) != pEVar5) {
              _cleanup_tree(this,*(Element **)(pEVar6 + 8));
            }
            if ((StringName::configured != '\0') && (*(long *)(pEVar6 + 0x30) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pEVar6,false);
            pEVar6 = *(Element **)(this + 8);
          }
          pEVar2 = *(Element **)(pEVar7 + 8);
          if (pEVar2 != pEVar6) {
            if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
              _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
              pEVar6 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar2 + 8) != pEVar6) {
              _cleanup_tree(this,*(Element **)(pEVar2 + 8));
            }
            if ((StringName::configured != '\0') && (*(long *)(pEVar2 + 0x30) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pEVar2,false);
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar7 + 0x30) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar7) {
          pEVar6 = *(Element **)(pEVar2 + 0x10);
          if (pEVar7 != pEVar6) {
            pEVar5 = *(Element **)(pEVar6 + 0x10);
            if (pEVar7 != pEVar5) {
              _cleanup_tree(this,pEVar5);
              pEVar5 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar6 + 8) != pEVar5) {
              _cleanup_tree(this,*(Element **)(pEVar6 + 8));
            }
            if ((StringName::configured != '\0') && (*(long *)(pEVar6 + 0x30) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pEVar6,false);
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar2 + 0x30) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pEVar2,false);
        }
        if ((StringName::configured != '\0') && (*(long *)(pEVar3 + 0x30) != 0)) {
          StringName::unref();
        }
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar2 + 0x10);
        if (pEVar3 != pEVar7) {
          pEVar6 = *(Element **)(pEVar7 + 0x10);
          if (pEVar3 != pEVar6) {
            _cleanup_tree(this,pEVar6);
            pEVar6 = *(Element **)(this + 8);
          }
          if (pEVar6 != *(Element **)(pEVar7 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar7 + 0x30) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar3 = *(Element **)(pEVar2 + 8);
        if (pEVar3 != pEVar7) {
          if (*(Element **)(pEVar3 + 0x10) != pEVar7) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 0x10));
            pEVar7 = *(Element **)(this + 8);
          }
          if (pEVar7 != *(Element **)(pEVar3 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 8));
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar3 + 0x30) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pEVar3,false);
        }
        if ((StringName::configured != '\0') && (*(long *)(pEVar2 + 0x30) != 0)) {
          StringName::unref();
        }
        Memory::free_static(pEVar2,false);
      }
      if ((StringName::configured != '\0') && (*(long *)(pEVar1 + 0x30) != 0)) {
        StringName::unref();
      }
      Memory::free_static(pEVar1,false);
      pvVar4 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    bVar8 = StringName::configured != '\0';
    *(Element **)((long)pvVar4 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    if ((bVar8) && (*(long *)((long)pvVar4 + 0x30) != 0)) {
      StringName::unref();
    }
    Memory::free_static(pvVar4,false);
    *(undefined8 *)this = 0;
  }
  return;
}



/* RBMap<StringName, int, Comparator<StringName>, DefaultAllocator>::~RBMap() */

void __thiscall
RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::~RBMap
          (RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *this)

{
  void *pvVar1;
  
  clear(this);
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x30) != 0)) {
      StringName::unref();
    }
    Memory::free_static(pvVar1,false);
    return;
  }
  return;
}



/* List<RBMap<StringName, int, Comparator<StringName>, DefaultAllocator>,
   DefaultAllocator>::erase(List<RBMap<StringName, int, Comparator<StringName>, DefaultAllocator>,
   DefaultAllocator>::Element*) [clone .isra.0] */

void __thiscall
List<RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>,DefaultAllocator>::erase
          (List<RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>,DefaultAllocator>
           *this,Element *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = *(long **)this;
  if ((param_1 != (Element *)0x0) && (plVar1 != (long *)0x0)) {
    if (plVar1 == *(long **)(param_1 + 0x28)) {
      lVar3 = *(long *)(param_1 + 0x18);
      if (param_1 == (Element *)*plVar1) {
        *plVar1 = lVar3;
      }
      lVar2 = *(long *)(param_1 + 0x20);
      if (param_1 == (Element *)plVar1[1]) {
        plVar1[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x18) = lVar3;
        lVar3 = *(long *)(param_1 + 0x18);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x20) = lVar2;
      }
      RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::~RBMap
                ((RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *)param_1);
      Memory::free_static(param_1,false);
      *(int *)(plVar1 + 2) = (int)plVar1[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    if (*(int *)((long)*(void **)this + 0x10) == 0) {
      Memory::free_static(*(void **)this,false);
      *(undefined8 *)this = 0;
    }
  }
  return;
}



/* List<RBMap<StringName, int, Comparator<StringName>, DefaultAllocator>, DefaultAllocator>::~List()
    */

void __thiscall
List<RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>,DefaultAllocator>::~List
          (List<RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>,DefaultAllocator>
           *this)

{
  RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 == (long *)0x0) {
    return;
  }
  do {
    this_00 = (RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *)*plVar3;
    if (this_00 == (RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *)0x0) {
      if ((int)plVar3[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)(this_00 + 0x28) == plVar3) {
      lVar2 = *(long *)(this_00 + 0x18);
      lVar1 = *(long *)(this_00 + 0x20);
      *plVar3 = lVar2;
      if (this_00 == (RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x18) = lVar2;
        lVar2 = *(long *)(this_00 + 0x18);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x20) = lVar1;
      }
      RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::~RBMap(this_00);
      Memory::free_static(this_00,false);
      *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar3 = *(long **)this;
  } while ((int)plVar3[2] != 0);
  Memory::free_static(plVar3,false);
  return;
}



/* RBMap<StringName, int, Comparator<StringName>, DefaultAllocator>::_Data::_create_root() */

void __thiscall
RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::_Data::_create_root(_Data *this)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  bool bVar3;
  long local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined4 *)operator_new(0x40,DefaultAllocator::alloc);
  local_50 = 0;
  StringName::StringName((StringName *)&local_48,(StringName *)&local_50);
  local_40 = 0;
  *(undefined8 *)(puVar2 + 10) = 0;
  *puVar2 = 0;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar2 + 6) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(puVar2 + 0xc),(StringName *)&local_48);
  bVar3 = StringName::configured != '\0';
  puVar2[0xe] = local_40;
  *(undefined4 **)this = puVar2;
  if (bVar3) {
    if (local_48 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001153ae;
    }
    if (local_50 != 0) {
      StringName::unref();
    }
  }
LAB_001153ae:
  uVar1 = *(undefined8 *)(this + 8);
  puVar2 = *(undefined4 **)this;
  *puVar2 = 1;
  *(undefined8 *)(puVar2 + 6) = uVar1;
  *(undefined8 *)(puVar2 + 2) = uVar1;
  *(undefined8 *)(puVar2 + 4) = uVar1;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<Variant, int, VariantHasher, VariantComparator,
   DefaultTypedAllocator<HashMapElement<Variant, int> > >::_lookup_pos(Variant const&, unsigned
   int&) const */

undefined8 __thiscall
HashMap<Variant,int,VariantHasher,VariantComparator,DefaultTypedAllocator<HashMapElement<Variant,int>>>
::_lookup_pos(HashMap<Variant,int,VariantHasher,VariantComparator,DefaultTypedAllocator<HashMapElement<Variant,int>>>
              *this,Variant *param_1,uint *param_2)

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
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  
  if ((*(long *)(this + 8) != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar11 = Variant::hash();
    uVar13 = 1;
    if (uVar11 != 0) {
      uVar13 = uVar11;
    }
    lVar17 = *(long *)(this + 0x10);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(lVar17 + lVar15 * 4);
    uVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        if (uVar13 == uVar11) {
          uVar12 = Variant::hash_compare
                             ((Variant *)(*(long *)(*(long *)(this + 8) + lVar15 * 8) + 0x10),
                              (int)param_1,false);
          if ((char)uVar12 != '\0') {
            *param_2 = uVar14;
            return uVar12;
          }
          lVar17 = *(long *)(this + 0x10);
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar11 = *(uint *)(lVar17 + lVar15 * 4);
        uVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar11 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar11 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar14) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar18 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* RBMap<Variant::Type, List<int, DefaultAllocator>, Comparator<Variant::Type>,
   DefaultAllocator>::_Data::_create_root() */

void __thiscall
RBMap<Variant::Type,List<int,DefaultAllocator>,Comparator<Variant::Type>,DefaultAllocator>::_Data::
_create_root(_Data *this)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined4 *)operator_new(0x40,DefaultAllocator::alloc);
  local_30 = 0;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar2 + 6) = (undefined1  [16])0x0;
  *puVar2 = 0;
  *(undefined8 *)(puVar2 + 10) = 0;
  puVar2[0xc] = 0;
  *(undefined8 *)(puVar2 + 0xe) = 0;
  *(undefined4 **)this = puVar2;
  local_28 = 0;
  local_20[0] = 0;
  List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)local_20);
  List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)&local_30);
  uVar1 = *(undefined8 *)(this + 8);
  puVar2 = *(undefined4 **)this;
  *puVar2 = 1;
  *(undefined8 *)(puVar2 + 6) = uVar1;
  *(undefined8 *)(puVar2 + 2) = uVar1;
  *(undefined8 *)(puVar2 + 4) = uVar1;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<int, DefaultAllocator>::clear() */

void __thiscall List<int,DefaultAllocator>::clear(List<int,DefaultAllocator> *this)

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
      if (*(long **)((long)pvVar1 + 0x18) == plVar4) {
        lVar3 = *(long *)((long)pvVar1 + 8);
        lVar2 = *(long *)((long)pvVar1 + 0x10);
        *plVar4 = lVar3;
        if (pvVar1 == (void *)plVar4[1]) {
          plVar4[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 8) = lVar3;
          lVar3 = *(long *)((long)pvVar1 + 8);
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x10) = lVar2;
        }
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



/* RBMap<void (*)(Variant const*, Variant const*, Variant*), int, Comparator<void (*)(Variant
   const*, Variant const*, Variant*)>, DefaultAllocator>::clear() */

void __thiscall
RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
::clear(RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  void *pvVar6;
  Element *pEVar7;
  
  pvVar6 = *(void **)this;
  if (pvVar6 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar6 + 0x10);
    pEVar3 = *(Element **)(this + 8);
    if (pEVar1 != pEVar3) {
      pEVar4 = *(Element **)(pEVar1 + 0x10);
      if (pEVar3 != pEVar4) {
        pEVar7 = *(Element **)(pEVar4 + 0x10);
        if (pEVar3 != pEVar7) {
          pEVar5 = *(Element **)(pEVar7 + 0x10);
          if (pEVar3 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar3 = *(Element **)(pEVar4 + 8);
        if (pEVar3 != pEVar7) {
          pEVar5 = *(Element **)(pEVar3 + 0x10);
          if (pEVar7 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          pEVar7 = *(Element **)(pEVar3 + 8);
          if (pEVar7 != pEVar5) {
            pEVar2 = *(Element **)(pEVar7 + 0x10);
            if (pEVar5 != pEVar2) {
              _cleanup_tree(this,pEVar2);
              pEVar2 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar7 + 8) != pEVar2) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 8));
            }
            Memory::free_static(pEVar7,false);
          }
          Memory::free_static(pEVar3,false);
        }
        Memory::free_static(pEVar4,false);
        pEVar4 = *(Element **)(this + 8);
      }
      pEVar3 = *(Element **)(pEVar1 + 8);
      if (pEVar3 != pEVar4) {
        pEVar7 = *(Element **)(pEVar3 + 0x10);
        if (pEVar7 != pEVar4) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar4 = *(Element **)(this + 8);
          }
          pEVar5 = *(Element **)(pEVar7 + 8);
          if (pEVar5 != pEVar4) {
            if (*(Element **)(pEVar5 + 0x10) != pEVar4) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 0x10));
              pEVar4 = *(Element **)(this + 8);
            }
            if (pEVar4 != *(Element **)(pEVar5 + 8)) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 8));
            }
            Memory::free_static(pEVar5,false);
          }
          Memory::free_static(pEVar7,false);
          pEVar4 = *(Element **)(this + 8);
        }
        pEVar7 = *(Element **)(pEVar3 + 8);
        if (pEVar7 != pEVar4) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
        }
        Memory::free_static(pEVar3,false);
      }
      Memory::free_static(pEVar1,false);
      pvVar6 = *(void **)this;
      pEVar3 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar6 + 0x10) = pEVar3;
    *(undefined4 *)(this + 0x10) = 0;
    Memory::free_static(pvVar6,false);
    *(undefined8 *)this = 0;
  }
  return;
}



/* RBMap<void (*)(Variant*, Variant const*), int, Comparator<void (*)(Variant*, Variant const*)>,
   DefaultAllocator>::clear() */

void __thiscall
RBMap<void(*)(Variant*,Variant_const*),int,Comparator<void(*)(Variant*,Variant_const*)>,DefaultAllocator>
::clear(RBMap<void(*)(Variant*,Variant_const*),int,Comparator<void(*)(Variant*,Variant_const*)>,DefaultAllocator>
        *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  void *pvVar6;
  Element *pEVar7;
  
  pvVar6 = *(void **)this;
  if (pvVar6 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar6 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar7) {
          pEVar4 = *(Element **)(pEVar7 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          pEVar2 = *(Element **)(pEVar7 + 8);
          if (pEVar2 != pEVar4) {
            if (*(Element **)(pEVar2 + 0x10) != pEVar4) {
              _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
              pEVar4 = *(Element **)(this + 8);
            }
            if (pEVar4 != *(Element **)(pEVar2 + 8)) {
              _cleanup_tree(this,*(Element **)(pEVar2 + 8));
            }
            Memory::free_static(pEVar2,false);
          }
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar7) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar7 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar2 + 0x10);
        if (pEVar7 != pEVar3) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar7 = *(Element **)(pEVar2 + 8);
        if (pEVar3 != pEVar7) {
          pEVar4 = *(Element **)(pEVar7 + 0x10);
          if (pEVar3 != pEVar4) {
            pEVar5 = *(Element **)(pEVar4 + 0x10);
            if (pEVar3 != pEVar5) {
              _cleanup_tree(this,pEVar5);
              pEVar5 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar4 + 8) != pEVar5) {
              _cleanup_tree(this,*(Element **)(pEVar4 + 8));
            }
            Memory::free_static(pEVar4,false);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar1,false);
      pvVar6 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar6 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    Memory::free_static(pvVar6,false);
    *(undefined8 *)this = 0;
  }
  return;
}



/* RBMap<void (*)(Variant const*, Variant*), int, Comparator<void (*)(Variant const*, Variant*)>,
   DefaultAllocator>::clear() */

void __thiscall
RBMap<void(*)(Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant*)>,DefaultAllocator>
::clear(RBMap<void(*)(Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant*)>,DefaultAllocator>
        *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  void *pvVar6;
  Element *pEVar7;
  
  pvVar6 = *(void **)this;
  if (pvVar6 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar6 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar7) {
          pEVar5 = *(Element **)(pEVar7 + 0x10);
          if (pEVar2 != pEVar5) {
            pEVar4 = *(Element **)(pEVar5 + 0x10);
            if (pEVar2 != pEVar4) {
              _cleanup_tree(this,pEVar4);
              pEVar4 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar5 + 8) != pEVar4) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 8));
            }
            Memory::free_static(pEVar5,false);
            pEVar5 = *(Element **)(this + 8);
          }
          if (pEVar5 != *(Element **)(pEVar7 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar7) {
          pEVar5 = *(Element **)(pEVar2 + 0x10);
          if (pEVar7 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          pEVar7 = *(Element **)(pEVar2 + 8);
          if (pEVar7 != pEVar5) {
            if (*(Element **)(pEVar7 + 0x10) != pEVar5) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
              pEVar5 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar7 + 8) != pEVar5) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 8));
            }
            Memory::free_static(pEVar7,false);
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar2 + 0x10);
        if (pEVar7 != pEVar3) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (pEVar3 != *(Element **)(pEVar7 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar7 = *(Element **)(pEVar2 + 8);
        if (pEVar7 != pEVar3) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar1,false);
      pvVar6 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar6 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    Memory::free_static(pvVar6,false);
    *(undefined8 *)this = 0;
  }
  return;
}



/* RBMap<void (*)(Variant*, Variant const*, Variant const*, bool*), int, Comparator<void
   (*)(Variant*, Variant const*, Variant const*, bool*)>, DefaultAllocator>::clear() */

void __thiscall
RBMap<void(*)(Variant*,Variant_const*,Variant_const*,bool*),int,Comparator<void(*)(Variant*,Variant_const*,Variant_const*,bool*)>,DefaultAllocator>
::clear(RBMap<void(*)(Variant*,Variant_const*,Variant_const*,bool*),int,Comparator<void(*)(Variant*,Variant_const*,Variant_const*,bool*)>,DefaultAllocator>
        *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  void *pvVar6;
  Element *pEVar7;
  
  pvVar6 = *(void **)this;
  if (pvVar6 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar6 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar7) {
          pEVar4 = *(Element **)(pEVar7 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          pEVar2 = *(Element **)(pEVar7 + 8);
          if (pEVar2 != pEVar4) {
            if (*(Element **)(pEVar2 + 0x10) != pEVar4) {
              _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
              pEVar4 = *(Element **)(this + 8);
            }
            if (pEVar4 != *(Element **)(pEVar2 + 8)) {
              _cleanup_tree(this,*(Element **)(pEVar2 + 8));
            }
            Memory::free_static(pEVar2,false);
          }
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar7) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar7 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar2 + 0x10);
        if (pEVar7 != pEVar3) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar7 = *(Element **)(pEVar2 + 8);
        if (pEVar3 != pEVar7) {
          pEVar4 = *(Element **)(pEVar7 + 0x10);
          if (pEVar3 != pEVar4) {
            pEVar5 = *(Element **)(pEVar4 + 0x10);
            if (pEVar3 != pEVar5) {
              _cleanup_tree(this,pEVar5);
              pEVar5 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar4 + 8) != pEVar5) {
              _cleanup_tree(this,*(Element **)(pEVar4 + 8));
            }
            Memory::free_static(pEVar4,false);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar1,false);
      pvVar6 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar6 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    Memory::free_static(pvVar6,false);
    *(undefined8 *)this = 0;
  }
  return;
}



/* RBMap<void (*)(Variant const*, Variant const*, Variant*, bool*), int, Comparator<void (*)(Variant
   const*, Variant const*, Variant*, bool*)>, DefaultAllocator>::clear() */

void __thiscall
RBMap<void(*)(Variant_const*,Variant_const*,Variant*,bool*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*,bool*)>,DefaultAllocator>
::clear(RBMap<void(*)(Variant_const*,Variant_const*,Variant*,bool*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*,bool*)>,DefaultAllocator>
        *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  void *pvVar5;
  Element *pEVar6;
  
  pvVar5 = *(void **)this;
  if (pvVar5 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar5 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar6 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar3) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar4 != pEVar3) {
            if (*(Element **)(pEVar4 + 0x10) != pEVar3) {
              _cleanup_tree(this,*(Element **)(pEVar4 + 0x10));
              pEVar3 = *(Element **)(this + 8);
            }
            if (pEVar3 != *(Element **)(pEVar4 + 8)) {
              _cleanup_tree(this,*(Element **)(pEVar4 + 8));
            }
            Memory::free_static(pEVar4,false);
            pEVar3 = *(Element **)(this + 8);
          }
          pEVar4 = *(Element **)(pEVar6 + 8);
          if (pEVar4 != pEVar3) {
            if (*(Element **)(pEVar4 + 0x10) != pEVar3) {
              _cleanup_tree(this,*(Element **)(pEVar4 + 0x10));
              pEVar3 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar4 + 8) != pEVar3) {
              _cleanup_tree(this,*(Element **)(pEVar4 + 8));
            }
            Memory::free_static(pEVar4,false);
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar1,false);
      pvVar5 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar5 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    Memory::free_static(pvVar5,false);
    *(undefined8 *)this = 0;
  }
  return;
}



/* RBMap<void (*)(Variant*, long, Variant const*, bool*), int, Comparator<void (*)(Variant*, long,
   Variant const*, bool*)>, DefaultAllocator>::clear() */

void __thiscall
RBMap<void(*)(Variant*,long,Variant_const*,bool*),int,Comparator<void(*)(Variant*,long,Variant_const*,bool*)>,DefaultAllocator>
::clear(RBMap<void(*)(Variant*,long,Variant_const*,bool*),int,Comparator<void(*)(Variant*,long,Variant_const*,bool*)>,DefaultAllocator>
        *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  void *pvVar6;
  Element *pEVar7;
  
  pvVar6 = *(void **)this;
  if (pvVar6 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar6 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar7) {
          pEVar4 = *(Element **)(pEVar7 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar7) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar7 != pEVar4) {
            pEVar5 = *(Element **)(pEVar4 + 0x10);
            if (pEVar7 != pEVar5) {
              _cleanup_tree(this,pEVar5);
              pEVar5 = *(Element **)(this + 8);
            }
            if (pEVar5 != *(Element **)(pEVar4 + 8)) {
              _cleanup_tree(this,*(Element **)(pEVar4 + 8));
            }
            Memory::free_static(pEVar4,false);
            pEVar4 = *(Element **)(this + 8);
          }
          pEVar7 = *(Element **)(pEVar2 + 8);
          if (pEVar7 != pEVar4) {
            if (*(Element **)(pEVar7 + 0x10) != pEVar4) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
              pEVar4 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar7 + 8) != pEVar4) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 8));
            }
            Memory::free_static(pEVar7,false);
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar2 + 0x10);
        if (pEVar7 != pEVar3) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (pEVar3 != *(Element **)(pEVar7 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar7 = *(Element **)(pEVar2 + 8);
        if (pEVar7 != pEVar3) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar1,false);
      pvVar6 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar6 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    Memory::free_static(pvVar6,false);
    *(undefined8 *)this = 0;
  }
  return;
}



/* RBMap<void (*)(Variant const*, long, Variant*, bool*), int, Comparator<void (*)(Variant const*,
   long, Variant*, bool*)>, DefaultAllocator>::clear() */

void __thiscall
RBMap<void(*)(Variant_const*,long,Variant*,bool*),int,Comparator<void(*)(Variant_const*,long,Variant*,bool*)>,DefaultAllocator>
::clear(RBMap<void(*)(Variant_const*,long,Variant*,bool*),int,Comparator<void(*)(Variant_const*,long,Variant*,bool*)>,DefaultAllocator>
        *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  void *pvVar6;
  Element *pEVar7;
  
  pvVar6 = *(void **)this;
  if (pvVar6 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar6 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar7) {
          pEVar4 = *(Element **)(pEVar7 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar7) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar7 != pEVar4) {
            pEVar5 = *(Element **)(pEVar4 + 0x10);
            if (pEVar7 != pEVar5) {
              _cleanup_tree(this,pEVar5);
              pEVar5 = *(Element **)(this + 8);
            }
            if (pEVar5 != *(Element **)(pEVar4 + 8)) {
              _cleanup_tree(this,*(Element **)(pEVar4 + 8));
            }
            Memory::free_static(pEVar4,false);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar2 + 0x10);
        if (pEVar7 != pEVar3) {
          pEVar4 = *(Element **)(pEVar7 + 0x10);
          if (pEVar4 != pEVar3) {
            if (*(Element **)(pEVar4 + 0x10) != pEVar3) {
              _cleanup_tree(this,*(Element **)(pEVar4 + 0x10));
              pEVar3 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar4 + 8) != pEVar3) {
              _cleanup_tree(this,*(Element **)(pEVar4 + 8));
            }
            Memory::free_static(pEVar4,false);
            pEVar3 = *(Element **)(this + 8);
          }
          if (pEVar3 != *(Element **)(pEVar7 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar7 = *(Element **)(pEVar2 + 8);
        if (pEVar7 != pEVar3) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar1,false);
      pvVar6 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar6 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    Memory::free_static(pvVar6,false);
    *(undefined8 *)this = 0;
  }
  return;
}



/* RBMap<void (*)(Variant*, Variant const**, int, Variant*), int, Comparator<void (*)(Variant*,
   Variant const**, int, Variant*)>, DefaultAllocator>::clear() */

void __thiscall
RBMap<void(*)(Variant*,Variant_const**,int,Variant*),int,Comparator<void(*)(Variant*,Variant_const**,int,Variant*)>,DefaultAllocator>
::clear(RBMap<void(*)(Variant*,Variant_const**,int,Variant*),int,Comparator<void(*)(Variant*,Variant_const**,int,Variant*)>,DefaultAllocator>
        *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  void *pvVar5;
  Element *pEVar6;
  Element *pEVar7;
  
  pvVar5 = *(void **)this;
  if (pvVar5 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar5 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar6 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar7 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar7) {
            pEVar4 = *(Element **)(pEVar7 + 0x10);
            if (pEVar2 != pEVar4) {
              _cleanup_tree(this,pEVar4);
              pEVar4 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar7 + 8) != pEVar4) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 8));
            }
            Memory::free_static(pEVar7,false);
            pEVar7 = *(Element **)(this + 8);
          }
          pEVar2 = *(Element **)(pEVar6 + 8);
          if (pEVar7 != pEVar2) {
            pEVar4 = *(Element **)(pEVar2 + 0x10);
            if (pEVar7 != pEVar4) {
              _cleanup_tree(this,pEVar4);
              pEVar4 = *(Element **)(this + 8);
            }
            if (pEVar4 != *(Element **)(pEVar2 + 8)) {
              _cleanup_tree(this,*(Element **)(pEVar2 + 8));
            }
            Memory::free_static(pEVar2,false);
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (pEVar3 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar1,false);
      pvVar5 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar5 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    Memory::free_static(pvVar5,false);
    *(undefined8 *)this = 0;
  }
  return;
}



/* RBMap<void (*)(Variant*, Variant const**), int, Comparator<void (*)(Variant*, Variant const**)>,
   DefaultAllocator>::clear() */

void __thiscall
RBMap<void(*)(Variant*,Variant_const**),int,Comparator<void(*)(Variant*,Variant_const**)>,DefaultAllocator>
::clear(RBMap<void(*)(Variant*,Variant_const**),int,Comparator<void(*)(Variant*,Variant_const**)>,DefaultAllocator>
        *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  void *pvVar6;
  Element *pEVar7;
  
  pvVar6 = *(void **)this;
  if (pvVar6 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar6 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar7) {
          pEVar4 = *(Element **)(pEVar7 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar7) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar7 != pEVar4) {
            pEVar5 = *(Element **)(pEVar4 + 0x10);
            if (pEVar7 != pEVar5) {
              _cleanup_tree(this,pEVar5);
              pEVar5 = *(Element **)(this + 8);
            }
            if (pEVar5 != *(Element **)(pEVar4 + 8)) {
              _cleanup_tree(this,*(Element **)(pEVar4 + 8));
            }
            Memory::free_static(pEVar4,false);
            pEVar4 = *(Element **)(this + 8);
          }
          pEVar7 = *(Element **)(pEVar2 + 8);
          if (pEVar7 != pEVar4) {
            if (*(Element **)(pEVar7 + 0x10) != pEVar4) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
              pEVar4 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar7 + 8) != pEVar4) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 8));
            }
            Memory::free_static(pEVar7,false);
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar2 + 0x10);
        if (pEVar7 != pEVar3) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (pEVar3 != *(Element **)(pEVar7 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar7 = *(Element **)(pEVar2 + 8);
        if (pEVar7 != pEVar3) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar1,false);
      pvVar6 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar6 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    Memory::free_static(pvVar6,false);
    *(undefined8 *)this = 0;
  }
  return;
}



/* RBMap<void (*)(Variant*, Variant const**, int), int, Comparator<void (*)(Variant*, Variant
   const**, int)>, DefaultAllocator>::clear() */

void __thiscall
RBMap<void(*)(Variant*,Variant_const**,int),int,Comparator<void(*)(Variant*,Variant_const**,int)>,DefaultAllocator>
::clear(RBMap<void(*)(Variant*,Variant_const**,int),int,Comparator<void(*)(Variant*,Variant_const**,int)>,DefaultAllocator>
        *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  void *pvVar5;
  Element *pEVar6;
  Element *pEVar7;
  
  pvVar5 = *(void **)this;
  if (pvVar5 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar5 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar6 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar7 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar7) {
            pEVar4 = *(Element **)(pEVar7 + 0x10);
            if (pEVar2 != pEVar4) {
              _cleanup_tree(this,pEVar4);
              pEVar4 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar7 + 8) != pEVar4) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 8));
            }
            Memory::free_static(pEVar7,false);
            pEVar7 = *(Element **)(this + 8);
          }
          pEVar2 = *(Element **)(pEVar6 + 8);
          if (pEVar7 != pEVar2) {
            pEVar4 = *(Element **)(pEVar2 + 0x10);
            if (pEVar7 != pEVar4) {
              _cleanup_tree(this,pEVar4);
              pEVar4 = *(Element **)(this + 8);
            }
            if (pEVar4 != *(Element **)(pEVar2 + 8)) {
              _cleanup_tree(this,*(Element **)(pEVar2 + 8));
            }
            Memory::free_static(pEVar2,false);
          }
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (pEVar3 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Memory::free_static(pEVar6,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar1,false);
      pvVar5 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar5 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    Memory::free_static(pvVar5,false);
    *(undefined8 *)this = 0;
  }
  return;
}



/* RBMap<void (*)(Variant*, Variant const**, int, Callable::CallError&), int, Comparator<void
   (*)(Variant*, Variant const**, int, Callable::CallError&)>, DefaultAllocator>::clear() */

void __thiscall
RBMap<void(*)(Variant*,Variant_const**,int,Callable::CallError&),int,Comparator<void(*)(Variant*,Variant_const**,int,Callable::CallError&)>,DefaultAllocator>
::clear(RBMap<void(*)(Variant*,Variant_const**,int,Callable::CallError&),int,Comparator<void(*)(Variant*,Variant_const**,int,Callable::CallError&)>,DefaultAllocator>
        *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  void *pvVar6;
  Element *pEVar7;
  
  pvVar6 = *(void **)this;
  if (pvVar6 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar6 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar7) {
          pEVar5 = *(Element **)(pEVar7 + 0x10);
          if (pEVar2 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar7) {
          pEVar5 = *(Element **)(pEVar2 + 0x10);
          if (pEVar7 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar2 + 0x10);
        if (pEVar7 != pEVar3) {
          pEVar5 = *(Element **)(pEVar7 + 0x10);
          if (pEVar5 != pEVar3) {
            pEVar4 = *(Element **)(pEVar5 + 0x10);
            if (pEVar3 != pEVar4) {
              _cleanup_tree(this,pEVar4);
              pEVar4 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar5 + 8) != pEVar4) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 8));
            }
            Memory::free_static(pEVar5,false);
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar7 = *(Element **)(pEVar2 + 8);
        if (pEVar3 != pEVar7) {
          pEVar5 = *(Element **)(pEVar7 + 0x10);
          if (pEVar3 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          pEVar3 = *(Element **)(pEVar7 + 8);
          if (pEVar3 != pEVar5) {
            if (*(Element **)(pEVar3 + 0x10) != pEVar5) {
              _cleanup_tree(this,*(Element **)(pEVar3 + 0x10));
              pEVar5 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar3 + 8) != pEVar5) {
              _cleanup_tree(this,*(Element **)(pEVar3 + 8));
            }
            Memory::free_static(pEVar3,false);
          }
          Memory::free_static(pEVar7,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar1,false);
      pvVar6 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar6 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    Memory::free_static(pvVar6,false);
    *(undefined8 *)this = 0;
  }
  return;
}



/* RBMap<MethodBind*, int, Comparator<MethodBind*>, DefaultAllocator>::clear() */

void __thiscall
RBMap<MethodBind*,int,Comparator<MethodBind*>,DefaultAllocator>::clear
          (RBMap<MethodBind*,int,Comparator<MethodBind*>,DefaultAllocator> *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  void *pvVar6;
  Element *pEVar7;
  
  pvVar6 = *(void **)this;
  if (pvVar6 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar6 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar7) {
          pEVar4 = *(Element **)(pEVar7 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar7) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar7 != pEVar4) {
            pEVar5 = *(Element **)(pEVar4 + 0x10);
            if (pEVar7 != pEVar5) {
              _cleanup_tree(this,pEVar5);
              pEVar5 = *(Element **)(this + 8);
            }
            if (pEVar5 != *(Element **)(pEVar4 + 8)) {
              _cleanup_tree(this,*(Element **)(pEVar4 + 8));
            }
            Memory::free_static(pEVar4,false);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar2 + 0x10);
        if (pEVar7 != pEVar3) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar7 = *(Element **)(pEVar2 + 8);
        if (pEVar3 != pEVar7) {
          pEVar4 = *(Element **)(pEVar7 + 0x10);
          if (pEVar3 != pEVar4) {
            pEVar5 = *(Element **)(pEVar4 + 0x10);
            if (pEVar3 != pEVar5) {
              _cleanup_tree(this,pEVar5);
              pEVar5 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar4 + 8) != pEVar5) {
              _cleanup_tree(this,*(Element **)(pEVar4 + 8));
            }
            Memory::free_static(pEVar4,false);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar1,false);
      pvVar6 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar6 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    Memory::free_static(pvVar6,false);
    *(undefined8 *)this = 0;
  }
  return;
}



/* RBMap<GDScriptFunction*, int, Comparator<GDScriptFunction*>, DefaultAllocator>::clear() */

void __thiscall
RBMap<GDScriptFunction*,int,Comparator<GDScriptFunction*>,DefaultAllocator>::clear
          (RBMap<GDScriptFunction*,int,Comparator<GDScriptFunction*>,DefaultAllocator> *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  void *pvVar6;
  Element *pEVar7;
  
  pvVar6 = *(void **)this;
  if (pvVar6 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar6 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar7) {
          pEVar4 = *(Element **)(pEVar7 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar7) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar7 != pEVar4) {
            pEVar5 = *(Element **)(pEVar4 + 0x10);
            if (pEVar7 != pEVar5) {
              _cleanup_tree(this,pEVar5);
              pEVar5 = *(Element **)(this + 8);
            }
            if (pEVar5 != *(Element **)(pEVar4 + 8)) {
              _cleanup_tree(this,*(Element **)(pEVar4 + 8));
            }
            Memory::free_static(pEVar4,false);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Memory::free_static(pEVar2,false);
        }
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar7 = *(Element **)(pEVar2 + 0x10);
        if (pEVar7 != pEVar3) {
          pEVar4 = *(Element **)(pEVar7 + 0x10);
          if (pEVar4 != pEVar3) {
            if (*(Element **)(pEVar4 + 0x10) != pEVar3) {
              _cleanup_tree(this,*(Element **)(pEVar4 + 0x10));
              pEVar3 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar4 + 8) != pEVar3) {
              _cleanup_tree(this,*(Element **)(pEVar4 + 8));
            }
            Memory::free_static(pEVar4,false);
            pEVar3 = *(Element **)(this + 8);
          }
          if (pEVar3 != *(Element **)(pEVar7 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar7 = *(Element **)(pEVar2 + 8);
        if (pEVar7 != pEVar3) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          Memory::free_static(pEVar7,false);
        }
        Memory::free_static(pEVar2,false);
      }
      Memory::free_static(pEVar1,false);
      pvVar6 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar6 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    Memory::free_static(pvVar6,false);
    *(undefined8 *)this = 0;
  }
  return;
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



/* CowData<Variant>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Variant>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptByteCodeGenerator::write_endif() [clone .cold] */

void GDScriptByteCodeGenerator::write_endif(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

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



/* GDScriptByteCodeGenerator::add_debug_name(Vector<String>&, int, String const&) [clone .isra.0]
   [clone .cold] */

void GDScriptByteCodeGenerator::add_debug_name(Vector *param_1,int param_2,String *param_3)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00117090(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptByteCodeGenerator::write_end_ternary() [clone .cold] */

void GDScriptByteCodeGenerator::write_end_ternary(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<GDScriptDataType>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<GDScriptDataType>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<GDScriptByteCodeGenerator::StackSlot>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<GDScriptByteCodeGenerator::StackSlot>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<void (*)(Variant const*, Variant const*, Variant*)>::_copy_on_write() [clone .isra.0]
   [clone .cold] */

void CowData<void(*)(Variant_const*,Variant_const*,Variant*)>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<void (*)(Variant*, Variant const*)>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<void(*)(Variant*,Variant_const*)>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<void (*)(Variant const*, Variant*)>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<void(*)(Variant_const*,Variant*)>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<void (*)(Variant*, Variant const*, Variant const*, bool*)>::_copy_on_write() [clone
   .isra.0] [clone .cold] */

void CowData<void(*)(Variant*,Variant_const*,Variant_const*,bool*)>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<void (*)(Variant const*, Variant const*, Variant*, bool*)>::_copy_on_write() [clone
   .isra.0] [clone .cold] */

void CowData<void(*)(Variant_const*,Variant_const*,Variant*,bool*)>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<void (*)(Variant*, long, Variant const*, bool*)>::_copy_on_write() [clone .isra.0] [clone
   .cold] */

void CowData<void(*)(Variant*,long,Variant_const*,bool*)>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<void (*)(Variant const*, long, Variant*, bool*)>::_copy_on_write() [clone .isra.0] [clone
   .cold] */

void CowData<void(*)(Variant_const*,long,Variant*,bool*)>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<void (*)(Variant*, Variant const**, int, Variant*)>::_copy_on_write() [clone .isra.0]
   [clone .cold] */

void CowData<void(*)(Variant*,Variant_const**,int,Variant*)>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<void (*)(Variant*, Variant const**)>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<void(*)(Variant*,Variant_const**)>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<void (*)(Variant*, Variant const**, int)>::_copy_on_write() [clone .isra.0] [clone .cold]
    */

void CowData<void(*)(Variant*,Variant_const**,int)>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<void (*)(Variant*, Variant const**, int, Callable::CallError&)>::_copy_on_write() [clone
   .isra.0] [clone .cold] */

void CowData<void(*)(Variant*,Variant_const**,int,Callable::CallError&)>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<void (*)(Variant*, Variant const**, int,
   Callable::CallError&)>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<void(*)(Variant*,Variant_const**,int,Callable::CallError&)>::resize<false>
               (long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00117134(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<MethodBind*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<MethodBind*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<MethodBind*>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<MethodBind*>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00117156(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<GDScriptFunction*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<GDScriptFunction*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<GDScriptFunction*>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<GDScriptFunction*>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00117178(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Variant::Type>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Variant::Type>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptByteCodeGenerator::write_end() [clone .cold] */

void GDScriptByteCodeGenerator::write_end(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00117198(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptByteCodeGenerator::write_continue() [clone .cold] */

void GDScriptByteCodeGenerator::write_continue(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptByteCodeGenerator::write_endwhile() [clone .cold] */

void GDScriptByteCodeGenerator::write_endwhile(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptByteCodeGenerator::write_endfor() [clone .cold] */

void GDScriptByteCodeGenerator::write_endfor(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptByteCodeGenerator::write_else() [clone .cold] */

void GDScriptByteCodeGenerator::write_else(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptByteCodeGenerator::write_for(GDScriptCodeGenerator::Address const&, bool) [clone .cold]
    */

void GDScriptByteCodeGenerator::write_for(Address *param_1,bool param_2)

{
  code *pcVar1;
  long unaff_RBX;
  undefined8 uStack0000000000000100;
  
  uStack0000000000000100 = 0;
  List<List<int,DefaultAllocator>,DefaultAllocator>::push_back
            ((List<List<int,DefaultAllocator>,DefaultAllocator> *)(unaff_RBX + 0x398),
             (List *)&stack0x00000100);
  List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)&stack0x00000100);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptByteCodeGenerator::write_for_assignment(GDScriptCodeGenerator::Address const&) [clone
   .cold] */

void GDScriptByteCodeGenerator::write_for_assignment(Address *param_1)

{
  code *pcVar1;
  
  Vector<int>::push_back((Vector<int> *)(param_1 + 0x20),0x15);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptByteCodeGenerator::write_ternary_false_expr(GDScriptCodeGenerator::Address const&) [clone
   .cold] */

void GDScriptByteCodeGenerator::write_ternary_false_expr(Address *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptByteCodeGenerator::write_ternary_true_expr(GDScriptCodeGenerator::Address const&) [clone
   .cold] */

void GDScriptByteCodeGenerator::write_ternary_true_expr(Address *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptByteCodeGenerator::write_end_or(GDScriptCodeGenerator::Address const&) [clone .cold] */

void GDScriptByteCodeGenerator::write_end_or(Address *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptByteCodeGenerator::write_end_and(GDScriptCodeGenerator::Address const&) [clone .cold] */

void GDScriptByteCodeGenerator::write_end_and(Address *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<int>::_unref() */

void __thiscall CowData<int>::_unref(CowData<int> *this)

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



/* GDScriptByteCodeGenerator::patch_jump(int) */

void __thiscall GDScriptByteCodeGenerator::patch_jump(GDScriptByteCodeGenerator *this,int param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)param_1;
  if (*(long *)(this + 0x28) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 0x28) + -8);
    if ((lVar2 < lVar3) && (-1 < lVar2)) {
      CowData<int>::_copy_on_write((CowData<int> *)(this + 0x28));
      *(int *)(*(long *)(this + 0x28) + lVar2 * 4) = (int)lVar3;
      return;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar2,lVar3,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

{
  long *plVar1;
  CowData<char32_t> *pCVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  CowData<char32_t> *this_00;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    pCVar2 = *(CowData<char32_t> **)this;
    if (pCVar2 != (CowData<char32_t> *)0x0) {
      lVar3 = *(long *)(pCVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this_00 = pCVar2;
        do {
          lVar5 = lVar5 + 1;
          CowData<char32_t>::_unref(this_00);
          this_00 = this_00 + 8;
        } while (lVar3 != lVar5);
      }
      Memory::free_static(pCVar2 + -0x10,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
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
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = (void *)(*(long *)this + -0x10);
  puVar1 = (undefined8 *)Memory::realloc_static(pvVar3,param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  uVar2 = CowData<Variant>::_realloc((long)pvVar3);
  return uVar2;
}



/* CowData<String>::_realloc(long) */

undefined8 __thiscall CowData<String>::_realloc(CowData<String> *this,long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = (void *)(*(long *)this + -0x10);
  puVar1 = (undefined8 *)Memory::realloc_static(pvVar3,param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  uVar2 = CowData<Variant>::_realloc((long)pvVar3);
  return uVar2;
}



/* CowData<Variant>::_realloc(long) */

undefined8 __thiscall CowData<Variant>::_realloc(CowData<Variant> *this,long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = (void *)(*(long *)this + -0x10);
  puVar1 = (undefined8 *)Memory::realloc_static(pvVar3,param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  uVar2 = _realloc((long)pvVar3);
  return uVar2;
}



/* CowData<GDScriptDataType>::_unref() */

void __thiscall CowData<GDScriptDataType>::_unref(CowData<GDScriptDataType> *this)

{
  long *plVar1;
  GDScriptDataType *pGVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  GDScriptDataType *this_00;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    pGVar2 = *(GDScriptDataType **)this;
    if (pGVar2 != (GDScriptDataType *)0x0) {
      lVar3 = *(long *)(pGVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this_00 = pGVar2;
        do {
          lVar5 = lVar5 + 1;
          GDScriptDataType::~GDScriptDataType(this_00);
          this_00 = this_00 + 0x38;
        } while (lVar3 != lVar5);
      }
      Memory::free_static(pGVar2 + -0x10,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* GDScriptDataType::~GDScriptDataType() */

void __thiscall GDScriptDataType::~GDScriptDataType(GDScriptDataType *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)(this + 0x30) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x30);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x20) != 0)) {
    StringName::unref();
  }
  CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType> *)(this + 8));
  return;
}



/* List<GDScriptCodeGenerator::Address, DefaultAllocator>::~List() */

void __thiscall
List<GDScriptCodeGenerator::Address,DefaultAllocator>::~List
          (List<GDScriptCodeGenerator::Address,DefaultAllocator> *this)

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
    if (*(long **)((long)pvVar1 + 0x50) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x40);
      lVar2 = *(long *)((long)pvVar1 + 0x48);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x40) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x40);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x48) = lVar2;
      }
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)((long)pvVar1 + 8));
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



/* GDScriptDataType::TEMPNAMEPLACEHOLDERVALUE(GDScriptDataType const&) */

void __thiscall GDScriptDataType::operator=(GDScriptDataType *this,GDScriptDataType *param_1)

{
  long *plVar1;
  Object *pOVar2;
  Object *pOVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  bool bVar7;
  
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  this[0x14] = param_1[0x14];
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  StringName::operator=((StringName *)(this + 0x20),(StringName *)(param_1 + 0x20));
  pOVar2 = *(Object **)(this + 0x30);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  pOVar3 = *(Object **)(param_1 + 0x30);
  if (pOVar3 != pOVar2) {
    *(Object **)(this + 0x30) = pOVar3;
    if ((pOVar3 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
      *(undefined8 *)(this + 0x30) = 0;
    }
    if (((pOVar2 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
       (cVar5 = predelete_handler(pOVar2), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
  }
  if (*(long *)(this + 8) != *(long *)(param_1 + 8)) {
    CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType> *)(this + 8));
    if (*(long *)(param_1 + 8) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 8) + -0x10);
      do {
        lVar4 = *plVar1;
        if (lVar4 == 0) {
          return;
        }
        LOCK();
        lVar6 = *plVar1;
        bVar7 = lVar4 == lVar6;
        if (bVar7) {
          *plVar1 = lVar4 + 1;
          lVar6 = lVar4;
        }
        UNLOCK();
      } while (!bVar7);
      if (lVar6 != -1) {
        *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
      }
    }
  }
  return;
}



/* GDScriptDataType::get_container_element_type(int) const */

GDScriptDataType * GDScriptDataType::get_container_element_type(int param_1)

{
  long lVar1;
  long lVar2;
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  GDScriptDataType *this;
  long lVar3;
  
  this = (GDScriptDataType *)CONCAT44(in_register_0000003c,param_1);
  lVar2 = (long)in_EDX;
  lVar1 = *(long *)(in_RSI + 8);
  if (in_EDX < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_00117959;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      *(undefined8 *)(this + 8) = 0;
      *(undefined4 *)(this + 0x10) = 0;
      this[0x14] = (GDScriptDataType)0x0;
      *(undefined4 *)(this + 0x18) = 0;
      *(undefined8 *)(this + 0x30) = 0;
      *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
      operator=(this,(GDScriptDataType *)(lVar1 + lVar2 * 0x38));
      return this;
    }
    goto LAB_00117959;
  }
  lVar3 = 0;
LAB_00117959:
  _err_print_index_error
            ("get_container_element_type","modules/gdscript/gdscript_function.h",0xd9,lVar2,lVar3,
             "p_index","container_element_types.size()","",false,false);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  return this;
}



/* GDScriptDataType::get_container_element_type_or_variant(int) const */

undefined1 (*) [16] GDScriptDataType::get_container_element_type_or_variant(int param_1)

{
  long lVar1;
  undefined1 (*pauVar2) [16];
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  
  pauVar2 = (undefined1 (*) [16])CONCAT44(in_register_0000003c,param_1);
  if (-1 < in_EDX) {
    lVar1 = *(long *)(in_RSI + 8);
    if ((lVar1 != 0) && ((long)in_EDX < *(long *)(lVar1 + -8))) {
      *(undefined1 *)(CONCAT44(in_register_0000003c,param_1) + 0x14) = 0;
      *(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 8) = 0;
      *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x10) = 0;
      *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x18) = 0;
      *(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x30) = 0;
      *(undefined1 (*) [16])(CONCAT44(in_register_0000003c,param_1) + 0x20) = (undefined1  [16])0x0;
      operator=((GDScriptDataType *)CONCAT44(in_register_0000003c,param_1),
                (GDScriptDataType *)(lVar1 + (long)in_EDX * 0x38));
      return (undefined1 (*) [16])CONCAT44(in_register_0000003c,param_1);
    }
  }
  *(undefined8 *)pauVar2[3] = 0;
  *pauVar2 = (undefined1  [16])0x0;
  pauVar2[1] = (undefined1  [16])0x0;
  pauVar2[2] = (undefined1  [16])0x0;
  return pauVar2;
}



/* GDScriptDataType::can_contain_object() const */

GDScriptDataType __thiscall GDScriptDataType::can_contain_object(GDScriptDataType *this)

{
  uint uVar1;
  long in_FS_OFFSET;
  GDScriptDataType GVar2;
  GDScriptDataType local_98 [64];
  GDScriptDataType local_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    GVar2 = this[0x14];
    if (GVar2 == (GDScriptDataType)0x0) {
      GVar2 = (GDScriptDataType)0x1;
      goto LAB_00117ab0;
    }
    if (*(int *)(this + 0x10) != 1) goto LAB_00117ab0;
    uVar1 = *(uint *)(this + 0x18);
    if (uVar1 == 0x1b) break;
    if (uVar1 < 0x1c) {
      if (uVar1 != 0) {
        GVar2 = (GDScriptDataType)(uVar1 == 0x18);
      }
      goto LAB_00117ab0;
    }
    if (uVar1 != 0x1c) {
      GVar2 = (GDScriptDataType)0x0;
      goto LAB_00117ab0;
    }
    this = *(GDScriptDataType **)(this + 8);
    if ((this == (GDScriptDataType *)0x0) || (*(long *)(this + -8) < 1)) goto LAB_00117ab0;
  }
  if (*(long *)(this + 8) != 0) {
    get_container_element_type_or_variant((int)local_98);
    GVar2 = (GDScriptDataType)can_contain_object(local_98);
    if (GVar2 == (GDScriptDataType)0x0) {
      get_container_element_type_or_variant((int)local_58);
      GVar2 = (GDScriptDataType)can_contain_object(local_58);
      ~GDScriptDataType(local_58);
    }
    ~GDScriptDataType(local_98);
  }
LAB_00117ab0:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return GVar2;
}



/* CowData<GDScriptByteCodeGenerator::StackSlot>::_unref() */

void __thiscall
CowData<GDScriptByteCodeGenerator::StackSlot>::_unref
          (CowData<GDScriptByteCodeGenerator::StackSlot> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  CowData<int> *this_00;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this_00 = (CowData<int> *)(lVar2 + 0x10);
        do {
          lVar5 = lVar5 + 1;
          CowData<int>::_unref(this_00);
          this_00 = this_00 + 0x18;
        } while (lVar3 != lVar5);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<GDScriptByteCodeGenerator::StackSlot>::_realloc(long) */

undefined8 __thiscall
CowData<GDScriptByteCodeGenerator::StackSlot>::_realloc
          (CowData<GDScriptByteCodeGenerator::StackSlot> *this,long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = (void *)(*(long *)this + -0x10);
  puVar1 = (undefined8 *)Memory::realloc_static(pvVar3,param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  uVar2 = CowData<Variant>::_realloc((long)pvVar3);
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<GDScriptByteCodeGenerator::StackSlot>::resize<false>(long) */

undefined8 __thiscall
CowData<GDScriptByteCodeGenerator::StackSlot>::resize<false>
          (CowData<GDScriptByteCodeGenerator::StackSlot> *this,long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
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
    lVar5 = 0;
    lVar7 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar5) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar5 * 0x18;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x18 == 0) {
LAB_00117f20:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 0x18 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar10 = uVar8 + 1;
  if (lVar10 == 0) goto LAB_00117f20;
  uVar9 = param_1;
  if (param_1 <= lVar5) {
    while (lVar5 = *(long *)this, lVar5 != 0) {
      if (*(ulong *)(lVar5 + -8) <= uVar9) {
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar5 = *(long *)this;
          if (lVar5 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar5 + -8) = param_1;
        return 0;
      }
      CowData<int>::_unref((CowData<int> *)(lVar5 + 0x10 + uVar9 * 0x18));
      uVar9 = uVar9 + 1;
    }
    goto LAB_00117f76;
  }
  if (lVar10 == lVar7) {
LAB_00117e93:
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) {
LAB_00117f76:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar5 = puVar6[-1];
    if (param_1 <= lVar5) goto LAB_00117dfb;
  }
  else {
    if (lVar5 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00117e93;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar5 = 0;
  }
  puVar2 = puVar6 + lVar5 * 3;
  do {
    *(undefined4 *)puVar2 = 0;
    puVar3 = puVar2 + 3;
    *(undefined1 *)((long)puVar2 + 4) = 1;
    puVar2[2] = 0;
    puVar2 = puVar3;
  } while (puVar3 != puVar6 + param_1 * 3);
LAB_00117dfb:
  puVar6[-1] = param_1;
  return 0;
}



/* HashMap<Variant, int, VariantHasher, VariantComparator,
   DefaultTypedAllocator<HashMapElement<Variant, int> > >::_insert_with_hash(unsigned int,
   HashMapElement<Variant, int>*) */

void __thiscall
HashMap<Variant,int,VariantHasher,VariantComparator,DefaultTypedAllocator<HashMapElement<Variant,int>>>
::_insert_with_hash(HashMap<Variant,int,VariantHasher,VariantComparator,DefaultTypedAllocator<HashMapElement<Variant,int>>>
                    *this,uint param_1,HashMapElement *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
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
  int iVar16;
  long lVar17;
  HashMapElement *pHVar18;
  uint uVar19;
  ulong uVar20;
  uint local_58;
  
  uVar19 = 0;
  lVar5 = *(long *)(this + 0x10);
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar20 = CONCAT44(0,uVar3);
  lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (ulong)param_1 * lVar6;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar20;
  lVar17 = SUB168(auVar8 * auVar12,8);
  lVar7 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar5 + lVar17 * 4);
  iVar16 = SUB164(auVar8 * auVar12,8);
  uVar4 = *puVar1;
  while (uVar4 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar4 * lVar6;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar20;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)((uVar3 + iVar16) - SUB164(auVar9 * auVar13,8)) * lVar6;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar20;
    local_58 = SUB164(auVar10 * auVar14,8);
    pHVar18 = param_2;
    if (local_58 < uVar19) {
      puVar2 = (undefined8 *)(lVar7 + lVar17 * 8);
      *puVar1 = param_1;
      pHVar18 = (HashMapElement *)*puVar2;
      *puVar2 = param_2;
      uVar19 = local_58;
      param_1 = uVar4;
    }
    uVar19 = uVar19 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar16 + 1) * lVar6;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar20;
    lVar17 = SUB168(auVar11 * auVar15,8);
    puVar1 = (uint *)(lVar5 + lVar17 * 4);
    iVar16 = SUB164(auVar11 * auVar15,8);
    param_2 = pHVar18;
    uVar4 = *puVar1;
  }
  *(HashMapElement **)(lVar7 + lVar17 * 8) = param_2;
  *puVar1 = param_1;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Variant, int, VariantHasher, VariantComparator,
   DefaultTypedAllocator<HashMapElement<Variant, int> > >::operator[](Variant const&) */

HashMapElement * __thiscall
HashMap<Variant,int,VariantHasher,VariantComparator,DefaultTypedAllocator<HashMapElement<Variant,int>>>
::operator[](HashMap<Variant,int,VariantHasher,VariantComparator,DefaultTypedAllocator<HashMapElement<Variant,int>>>
             *this,Variant *param_1)

{
  ulong uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  void *pvVar9;
  HashMapElement *pHVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  undefined8 *puVar14;
  long in_FS_OFFSET;
  uint local_80;
  uint local_7c;
  undefined1 local_78 [16];
  int local_68 [6];
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  cVar5 = _lookup_pos(this,param_1,&local_80);
  if (cVar5 == '\0') {
    uVar11 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (*(long *)(this + 8) == 0) {
      uVar12 = (ulong)uVar11;
      uVar7 = uVar12 * 4;
      uVar1 = uVar12 * 8;
      uVar8 = Memory::alloc_static(uVar7,false);
      *(undefined8 *)(this + 0x10) = uVar8;
      pvVar9 = (void *)Memory::alloc_static(uVar1,false);
      *(void **)(this + 8) = pvVar9;
      if (uVar11 != 0) {
        pvVar4 = *(void **)(this + 0x10);
        if ((pvVar9 < (void *)((long)pvVar4 + uVar7)) && (pvVar4 < (void *)((long)pvVar9 + uVar1)))
        {
          uVar7 = 0;
          do {
            *(undefined4 *)((long)pvVar4 + uVar7 * 4) = 0;
            *(undefined8 *)((long)pvVar9 + uVar7 * 8) = 0;
            uVar7 = uVar7 + 1;
          } while (uVar12 != uVar7);
        }
        else {
          memset(pvVar4,0,uVar7);
          memset(pvVar9,0,uVar1);
        }
      }
    }
    local_7c = 0;
    cVar5 = _lookup_pos(this,param_1,&local_7c);
    if (cVar5 == '\0') {
      if ((float)uVar11 * __LC12 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar11 = *(uint *)(this + 0x28);
        if (uVar11 == 0x1c) {
          pHVar10 = (HashMapElement *)0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_00118347;
        }
        uVar7 = (ulong)(uVar11 + 1);
        *(undefined4 *)(this + 0x2c) = 0;
        puVar2 = *(uint **)(this + 0x10);
        uVar6 = *(uint *)(hash_table_size_primes + (ulong)uVar11 * 4);
        if (uVar11 + 1 < 2) {
          uVar7 = 2;
        }
        uVar11 = *(uint *)(hash_table_size_primes + uVar7 * 4);
        uVar12 = (ulong)uVar11;
        *(int *)(this + 0x28) = (int)uVar7;
        puVar3 = *(undefined8 **)(this + 8);
        uVar7 = uVar12 * 4;
        uVar1 = uVar12 * 8;
        uVar8 = Memory::alloc_static(uVar7,false);
        *(undefined8 *)(this + 0x10) = uVar8;
        pvVar9 = (void *)Memory::alloc_static(uVar1,false);
        *(void **)(this + 8) = pvVar9;
        if (uVar11 != 0) {
          pvVar4 = *(void **)(this + 0x10);
          if ((pvVar9 < (void *)((long)pvVar4 + uVar7)) && (pvVar4 < (void *)((long)pvVar9 + uVar1))
             ) {
            uVar7 = 0;
            do {
              *(undefined4 *)((long)pvVar4 + uVar7 * 4) = 0;
              *(undefined8 *)((long)pvVar9 + uVar7 * 8) = 0;
              uVar7 = uVar7 + 1;
            } while (uVar7 != uVar12);
          }
          else {
            memset(pvVar4,0,uVar7);
            memset(pvVar9,0,uVar1);
          }
        }
        if (uVar6 != 0) {
          puVar13 = puVar2;
          puVar14 = puVar3;
          do {
            if (*puVar13 != 0) {
              _insert_with_hash(this,*puVar13,(HashMapElement *)*puVar14);
            }
            puVar13 = puVar13 + 1;
            puVar14 = puVar14 + 1;
          } while (puVar2 + uVar6 != puVar13);
          Memory::free_static(puVar3,false);
          Memory::free_static(puVar2,false);
        }
      }
      local_78 = (undefined1  [16])0x0;
      Variant::Variant((Variant *)local_68,param_1);
      local_50 = 0;
      pHVar10 = (HashMapElement *)operator_new(0x30,"");
      *(undefined8 *)pHVar10 = local_78._0_8_;
      *(undefined8 *)(pHVar10 + 8) = local_78._8_8_;
      Variant::Variant((Variant *)(pHVar10 + 0x10),(Variant *)local_68);
      *(undefined4 *)(pHVar10 + 0x28) = local_50;
      if (Variant::needs_deinit[local_68[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (*(undefined8 **)(this + 0x20) == (undefined8 *)0x0) {
        *(HashMapElement **)(this + 0x18) = pHVar10;
      }
      else {
        **(undefined8 **)(this + 0x20) = pHVar10;
        *(undefined8 *)(pHVar10 + 8) = *(undefined8 *)(this + 0x20);
      }
      *(HashMapElement **)(this + 0x20) = pHVar10;
      uVar6 = Variant::hash();
      uVar11 = 1;
      if (uVar6 != 0) {
        uVar11 = uVar6;
      }
      _insert_with_hash(this,uVar11,pHVar10);
    }
    else {
      pHVar10 = *(HashMapElement **)(*(long *)(this + 8) + (ulong)local_7c * 8);
      *(undefined4 *)(pHVar10 + 0x28) = 0;
    }
  }
  else {
    pHVar10 = *(HashMapElement **)(*(long *)(this + 8) + (ulong)local_80 * 8);
  }
LAB_00118347:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pHVar10 + 0x28;
}



/* GDScriptByteCodeGenerator::get_constant_pos(Variant const&) */

undefined4 __thiscall
GDScriptByteCodeGenerator::get_constant_pos(GDScriptByteCodeGenerator *this,Variant *param_1)

{
  HashMap<Variant,int,VariantHasher,VariantComparator,DefaultTypedAllocator<HashMapElement<Variant,int>>>
  *this_00;
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  this_00 = (HashMap<Variant,int,VariantHasher,VariantComparator,DefaultTypedAllocator<HashMapElement<Variant,int>>>
             *)(this + 0x140);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  cVar1 = HashMap<Variant,int,VariantHasher,VariantComparator,DefaultTypedAllocator<HashMapElement<Variant,int>>>
          ::_lookup_pos(this_00,param_1,&local_24);
  if (cVar1 == '\0') {
    uVar3 = *(undefined4 *)(this + 0x16c);
    puVar2 = (undefined4 *)
             HashMap<Variant,int,VariantHasher,VariantComparator,DefaultTypedAllocator<HashMapElement<Variant,int>>>
             ::operator[](this_00,param_1);
    *puVar2 = uVar3;
  }
  else {
    puVar2 = (undefined4 *)
             HashMap<Variant,int,VariantHasher,VariantComparator,DefaultTypedAllocator<HashMapElement<Variant,int>>>
             ::operator[](this_00,param_1);
    uVar3 = *puVar2;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<int, Variant::Type, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Variant::Type> > >::_insert_with_hash(unsigned int,
   HashMapElement<int, Variant::Type>*) */

void __thiscall
HashMap<int,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Variant::Type>>>
::_insert_with_hash(HashMap<int,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Variant::Type>>>
                    *this,uint param_1,HashMapElement *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
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
  int iVar16;
  long lVar17;
  HashMapElement *pHVar18;
  uint uVar19;
  ulong uVar20;
  uint local_58;
  
  uVar19 = 0;
  lVar5 = *(long *)(this + 0x10);
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar20 = CONCAT44(0,uVar3);
  lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (ulong)param_1 * lVar6;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar20;
  lVar17 = SUB168(auVar8 * auVar12,8);
  lVar7 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar5 + lVar17 * 4);
  iVar16 = SUB164(auVar8 * auVar12,8);
  uVar4 = *puVar1;
  while (uVar4 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar4 * lVar6;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar20;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)((uVar3 + iVar16) - SUB164(auVar9 * auVar13,8)) * lVar6;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar20;
    local_58 = SUB164(auVar10 * auVar14,8);
    pHVar18 = param_2;
    if (local_58 < uVar19) {
      puVar2 = (undefined8 *)(lVar7 + lVar17 * 8);
      *puVar1 = param_1;
      pHVar18 = (HashMapElement *)*puVar2;
      *puVar2 = param_2;
      uVar19 = local_58;
      param_1 = uVar4;
    }
    uVar19 = uVar19 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar16 + 1) * lVar6;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar20;
    lVar17 = SUB168(auVar11 * auVar15,8);
    puVar1 = (uint *)(lVar5 + lVar17 * 4);
    iVar16 = SUB164(auVar11 * auVar15,8);
    param_2 = pHVar18;
    uVar4 = *puVar1;
  }
  *(HashMapElement **)(lVar7 + lVar17 * 8) = param_2;
  *puVar1 = param_1;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, Variant::Type, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Variant::Type> > >::operator[](int const&) */

HashMapElement * __thiscall
HashMap<int,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Variant::Type>>>
::operator[](HashMap<int,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Variant::Type>>>
             *this,int *param_1)

{
  ulong uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  void *pvVar9;
  HashMapElement *pHVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  undefined8 *puVar14;
  long in_FS_OFFSET;
  uint local_48;
  uint local_44;
  long local_40;
  
  uVar6 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  cVar5 = _lookup_pos(this,(int *)(ulong)uVar6,&local_48);
  if (cVar5 == '\0') {
    uVar11 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (*(long *)(this + 8) == 0) {
      uVar12 = (ulong)uVar11;
      uVar7 = uVar12 * 4;
      uVar1 = uVar12 * 8;
      uVar8 = Memory::alloc_static(uVar7,false);
      *(undefined8 *)(this + 0x10) = uVar8;
      pvVar9 = (void *)Memory::alloc_static(uVar1,false);
      *(void **)(this + 8) = pvVar9;
      if (uVar11 != 0) {
        pvVar4 = *(void **)(this + 0x10);
        if ((pvVar4 < (void *)((long)pvVar9 + uVar1)) && (pvVar9 < (void *)((long)pvVar4 + uVar7)))
        {
          uVar7 = 0;
          do {
            *(undefined4 *)((long)pvVar4 + uVar7 * 4) = 0;
            *(undefined8 *)((long)pvVar9 + uVar7 * 8) = 0;
            uVar7 = uVar7 + 1;
          } while (uVar12 != uVar7);
        }
        else {
          memset(pvVar4,0,uVar7);
          memset(pvVar9,0,uVar1);
        }
      }
      uVar6 = *param_1;
    }
    local_44 = 0;
    cVar5 = _lookup_pos(this,(int *)(ulong)uVar6,&local_44);
    if (cVar5 == '\0') {
      if ((float)uVar11 * __LC12 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar6 = *(uint *)(this + 0x28);
        if (uVar6 == 0x1c) {
          pHVar10 = (HashMapElement *)0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_0011887f;
        }
        uVar7 = (ulong)(uVar6 + 1);
        *(undefined4 *)(this + 0x2c) = 0;
        puVar2 = *(uint **)(this + 0x10);
        uVar11 = *(uint *)(hash_table_size_primes + (ulong)uVar6 * 4);
        if (uVar6 + 1 < 2) {
          uVar7 = 2;
        }
        uVar6 = *(uint *)(hash_table_size_primes + uVar7 * 4);
        uVar12 = (ulong)uVar6;
        *(int *)(this + 0x28) = (int)uVar7;
        puVar3 = *(undefined8 **)(this + 8);
        uVar7 = uVar12 * 4;
        uVar1 = uVar12 * 8;
        uVar8 = Memory::alloc_static(uVar7,false);
        *(undefined8 *)(this + 0x10) = uVar8;
        pvVar9 = (void *)Memory::alloc_static(uVar1,false);
        *(void **)(this + 8) = pvVar9;
        if (uVar6 != 0) {
          pvVar4 = *(void **)(this + 0x10);
          if ((pvVar9 < (void *)((long)pvVar4 + uVar7)) && (pvVar4 < (void *)((long)pvVar9 + uVar1))
             ) {
            uVar7 = 0;
            do {
              *(undefined4 *)((long)pvVar4 + uVar7 * 4) = 0;
              *(undefined8 *)((long)pvVar9 + uVar7 * 8) = 0;
              uVar7 = uVar7 + 1;
            } while (uVar7 != uVar12);
          }
          else {
            memset(pvVar4,0,uVar7);
            memset(pvVar9,0,uVar1);
          }
        }
        if (uVar11 != 0) {
          puVar13 = puVar2;
          puVar14 = puVar3;
          do {
            if (*puVar13 != 0) {
              _insert_with_hash(this,*puVar13,(HashMapElement *)*puVar14);
            }
            puVar13 = puVar13 + 1;
            puVar14 = puVar14 + 1;
          } while (puVar2 + uVar11 != puVar13);
          Memory::free_static(puVar3,false);
          Memory::free_static(puVar2,false);
        }
        uVar6 = *param_1;
      }
      pHVar10 = (HashMapElement *)operator_new(0x18,"");
      *(uint *)(pHVar10 + 0x10) = uVar6;
      *(undefined4 *)(pHVar10 + 0x14) = 0;
      *(undefined1 (*) [16])pHVar10 = (undefined1  [16])0x0;
      puVar3 = *(undefined8 **)(this + 0x20);
      if (puVar3 == (undefined8 *)0x0) {
        *(HashMapElement **)(this + 0x18) = pHVar10;
      }
      else {
        *puVar3 = pHVar10;
        *(undefined8 **)(pHVar10 + 8) = puVar3;
      }
      uVar6 = *param_1;
      *(HashMapElement **)(this + 0x20) = pHVar10;
      uVar6 = (uVar6 >> 0x10 ^ uVar6) * -0x7a143595;
      uVar6 = (uVar6 ^ uVar6 >> 0xd) * -0x3d4d51cb;
      uVar11 = uVar6 ^ uVar6 >> 0x10;
      if (uVar6 == uVar6 >> 0x10) {
        uVar11 = 1;
      }
      _insert_with_hash(this,uVar11,pHVar10);
    }
    else {
      pHVar10 = *(HashMapElement **)(*(long *)(this + 8) + (ulong)local_44 * 8);
      *(undefined4 *)(pHVar10 + 0x14) = 0;
    }
  }
  else {
    pHVar10 = *(HashMapElement **)(*(long *)(this + 8) + (ulong)local_48 * 8);
  }
LAB_0011887f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pHVar10 + 0x14;
}



/* CowData<void (*)(Variant const*, Variant const*, Variant*)>::_unref() */

void __thiscall
CowData<void(*)(Variant_const*,Variant_const*,Variant*)>::_unref
          (CowData<void(*)(Variant_const*,Variant_const*,Variant*)> *this)

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



/* CowData<void (*)(Variant const*, Variant const*, Variant*)>::_realloc(long) */

undefined8 __thiscall
CowData<void(*)(Variant_const*,Variant_const*,Variant*)>::_realloc
          (CowData<void(*)(Variant_const*,Variant_const*,Variant*)> *this,long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = (void *)(*(long *)this + -0x10);
  puVar1 = (undefined8 *)Memory::realloc_static(pvVar3,param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  uVar2 = CowData<Variant>::_realloc((long)pvVar3);
  return uVar2;
}



/* CowData<void (*)(Variant*, Variant const*)>::_unref() */

void __thiscall
CowData<void(*)(Variant*,Variant_const*)>::_unref(CowData<void(*)(Variant*,Variant_const*)> *this)

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



/* CowData<void (*)(Variant*, Variant const*)>::_realloc(long) */

undefined8 __thiscall
CowData<void(*)(Variant*,Variant_const*)>::_realloc
          (CowData<void(*)(Variant*,Variant_const*)> *this,long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = (void *)(*(long *)this + -0x10);
  puVar1 = (undefined8 *)Memory::realloc_static(pvVar3,param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  uVar2 = CowData<Variant>::_realloc((long)pvVar3);
  return uVar2;
}



/* CowData<void (*)(Variant const*, Variant*)>::_unref() */

void __thiscall
CowData<void(*)(Variant_const*,Variant*)>::_unref(CowData<void(*)(Variant_const*,Variant*)> *this)

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



/* CowData<void (*)(Variant const*, Variant*)>::_realloc(long) */

undefined8 __thiscall
CowData<void(*)(Variant_const*,Variant*)>::_realloc
          (CowData<void(*)(Variant_const*,Variant*)> *this,long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = (void *)(*(long *)this + -0x10);
  puVar1 = (undefined8 *)Memory::realloc_static(pvVar3,param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  uVar2 = CowData<Variant>::_realloc((long)pvVar3);
  return uVar2;
}



/* CowData<void (*)(Variant*, Variant const*, Variant const*, bool*)>::_unref() */

void __thiscall
CowData<void(*)(Variant*,Variant_const*,Variant_const*,bool*)>::_unref
          (CowData<void(*)(Variant*,Variant_const*,Variant_const*,bool*)> *this)

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



/* CowData<void (*)(Variant*, Variant const*, Variant const*, bool*)>::_realloc(long) */

undefined8 __thiscall
CowData<void(*)(Variant*,Variant_const*,Variant_const*,bool*)>::_realloc
          (CowData<void(*)(Variant*,Variant_const*,Variant_const*,bool*)> *this,long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = (void *)(*(long *)this + -0x10);
  puVar1 = (undefined8 *)Memory::realloc_static(pvVar3,param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  uVar2 = CowData<Variant>::_realloc((long)pvVar3);
  return uVar2;
}



/* CowData<void (*)(Variant const*, Variant const*, Variant*, bool*)>::_unref() */

void __thiscall
CowData<void(*)(Variant_const*,Variant_const*,Variant*,bool*)>::_unref
          (CowData<void(*)(Variant_const*,Variant_const*,Variant*,bool*)> *this)

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



/* CowData<void (*)(Variant const*, Variant const*, Variant*, bool*)>::_realloc(long) */

undefined8 __thiscall
CowData<void(*)(Variant_const*,Variant_const*,Variant*,bool*)>::_realloc
          (CowData<void(*)(Variant_const*,Variant_const*,Variant*,bool*)> *this,long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = (void *)(*(long *)this + -0x10);
  puVar1 = (undefined8 *)Memory::realloc_static(pvVar3,param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  uVar2 = CowData<Variant>::_realloc((long)pvVar3);
  return uVar2;
}



/* CowData<void (*)(Variant*, long, Variant const*, bool*)>::_unref() */

void __thiscall
CowData<void(*)(Variant*,long,Variant_const*,bool*)>::_unref
          (CowData<void(*)(Variant*,long,Variant_const*,bool*)> *this)

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



/* CowData<void (*)(Variant*, long, Variant const*, bool*)>::_realloc(long) */

undefined8 __thiscall
CowData<void(*)(Variant*,long,Variant_const*,bool*)>::_realloc
          (CowData<void(*)(Variant*,long,Variant_const*,bool*)> *this,long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = (void *)(*(long *)this + -0x10);
  puVar1 = (undefined8 *)Memory::realloc_static(pvVar3,param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  uVar2 = CowData<Variant>::_realloc((long)pvVar3);
  return uVar2;
}



/* CowData<void (*)(Variant const*, long, Variant*, bool*)>::_unref() */

void __thiscall
CowData<void(*)(Variant_const*,long,Variant*,bool*)>::_unref
          (CowData<void(*)(Variant_const*,long,Variant*,bool*)> *this)

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



/* CowData<void (*)(Variant const*, long, Variant*, bool*)>::_realloc(long) */

undefined8 __thiscall
CowData<void(*)(Variant_const*,long,Variant*,bool*)>::_realloc
          (CowData<void(*)(Variant_const*,long,Variant*,bool*)> *this,long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = (void *)(*(long *)this + -0x10);
  puVar1 = (undefined8 *)Memory::realloc_static(pvVar3,param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  uVar2 = CowData<Variant>::_realloc((long)pvVar3);
  return uVar2;
}



/* CowData<void (*)(Variant*, Variant const**, int, Variant*)>::_unref() */

void __thiscall
CowData<void(*)(Variant*,Variant_const**,int,Variant*)>::_unref
          (CowData<void(*)(Variant*,Variant_const**,int,Variant*)> *this)

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



/* CowData<void (*)(Variant*, Variant const**, int, Variant*)>::_realloc(long) */

undefined8 __thiscall
CowData<void(*)(Variant*,Variant_const**,int,Variant*)>::_realloc
          (CowData<void(*)(Variant*,Variant_const**,int,Variant*)> *this,long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = (void *)(*(long *)this + -0x10);
  puVar1 = (undefined8 *)Memory::realloc_static(pvVar3,param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  uVar2 = CowData<Variant>::_realloc((long)pvVar3);
  return uVar2;
}



/* CowData<void (*)(Variant*, Variant const**)>::_unref() */

void __thiscall
CowData<void(*)(Variant*,Variant_const**)>::_unref(CowData<void(*)(Variant*,Variant_const**)> *this)

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



/* CowData<void (*)(Variant*, Variant const**)>::_realloc(long) */

undefined8 __thiscall
CowData<void(*)(Variant*,Variant_const**)>::_realloc
          (CowData<void(*)(Variant*,Variant_const**)> *this,long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = (void *)(*(long *)this + -0x10);
  puVar1 = (undefined8 *)Memory::realloc_static(pvVar3,param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  uVar2 = CowData<Variant>::_realloc((long)pvVar3);
  return uVar2;
}



/* CowData<void (*)(Variant*, Variant const**, int)>::_unref() */

void __thiscall
CowData<void(*)(Variant*,Variant_const**,int)>::_unref
          (CowData<void(*)(Variant*,Variant_const**,int)> *this)

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



/* CowData<void (*)(Variant*, Variant const**, int)>::_realloc(long) */

undefined8 __thiscall
CowData<void(*)(Variant*,Variant_const**,int)>::_realloc
          (CowData<void(*)(Variant*,Variant_const**,int)> *this,long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = (void *)(*(long *)this + -0x10);
  puVar1 = (undefined8 *)Memory::realloc_static(pvVar3,param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  uVar2 = CowData<Variant>::_realloc((long)pvVar3);
  return uVar2;
}



/* CowData<void (*)(Variant*, Variant const**, int, Callable::CallError&)>::_unref() */

void __thiscall
CowData<void(*)(Variant*,Variant_const**,int,Callable::CallError&)>::_unref
          (CowData<void(*)(Variant*,Variant_const**,int,Callable::CallError&)> *this)

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



/* CowData<void (*)(Variant*, Variant const**, int, Callable::CallError&)>::_realloc(long) */

undefined8 __thiscall
CowData<void(*)(Variant*,Variant_const**,int,Callable::CallError&)>::_realloc
          (CowData<void(*)(Variant*,Variant_const**,int,Callable::CallError&)> *this,long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = (void *)(*(long *)this + -0x10);
  puVar1 = (undefined8 *)Memory::realloc_static(pvVar3,param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  uVar2 = CowData<Variant>::_realloc((long)pvVar3);
  return uVar2;
}



/* CowData<MethodBind*>::_unref() */

void __thiscall CowData<MethodBind*>::_unref(CowData<MethodBind*> *this)

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



/* CowData<MethodBind*>::_realloc(long) */

undefined8 __thiscall CowData<MethodBind*>::_realloc(CowData<MethodBind*> *this,long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = (void *)(*(long *)this + -0x10);
  puVar1 = (undefined8 *)Memory::realloc_static(pvVar3,param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  uVar2 = CowData<Variant>::_realloc((long)pvVar3);
  return uVar2;
}



/* CowData<GDScriptFunction*>::_unref() */

void __thiscall CowData<GDScriptFunction*>::_unref(CowData<GDScriptFunction*> *this)

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



/* CowData<GDScriptFunction*>::_realloc(long) */

undefined8 __thiscall
CowData<GDScriptFunction*>::_realloc(CowData<GDScriptFunction*> *this,long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = (void *)(*(long *)this + -0x10);
  puVar1 = (undefined8 *)Memory::realloc_static(pvVar3,param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  uVar2 = CowData<Variant>::_realloc((long)pvVar3);
  return uVar2;
}



/* CowData<Variant::Type>::_unref() */

void __thiscall CowData<Variant::Type>::_unref(CowData<Variant::Type> *this)

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



/* CowData<GDScriptCodeGenerator::Address>::_unref() */

void __thiscall
CowData<GDScriptCodeGenerator::Address>::_unref(CowData<GDScriptCodeGenerator::Address> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  GDScriptDataType *this_00;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this_00 = (GDScriptDataType *)(lVar2 + 8);
        do {
          lVar5 = lVar5 + 1;
          GDScriptDataType::~GDScriptDataType(this_00);
          this_00 = this_00 + 0x40;
        } while (lVar3 != lVar5);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<int>::_realloc(long) */

undefined8 __thiscall CowData<int>::_realloc(CowData<int> *this,long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = (void *)(*(long *)this + -0x10);
  puVar1 = (undefined8 *)Memory::realloc_static(pvVar3,param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  uVar2 = CowData<Variant>::_realloc((long)pvVar3);
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<int>::resize<false>(long) */

undefined8 __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
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
    lVar8 = 0;
    lVar2 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar2 = lVar8 * 4;
    if (lVar2 != 0) {
      uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar2 = (uVar3 | uVar3 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_00119360:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar3 = param_1 * 4 - 1;
  uVar3 = uVar3 | uVar3 >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  lVar7 = uVar3 + 1;
  if (lVar7 == 0) goto LAB_00119360;
  if (lVar8 < param_1) {
    if (lVar7 != lVar2) {
      if (lVar8 == 0) {
        puVar4 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
        if (puVar4 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar6 = puVar4 + 2;
        *puVar4 = 1;
        puVar4[1] = 0;
        *(undefined8 **)this = puVar6;
        goto LAB_00119291;
      }
      uVar5 = _realloc(this,lVar7);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    puVar6 = *(undefined8 **)this;
    if (puVar6 != (undefined8 *)0x0) {
LAB_00119291:
      puVar6[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar7 != lVar2) && (uVar5 = _realloc(this,lVar7), (int)uVar5 != 0)) {
      return uVar5;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GDScriptByteCodeGenerator::append_opcode_and_argcount(GDScriptFunction::Opcode, int) */

void __thiscall
GDScriptByteCodeGenerator::append_opcode_and_argcount
          (GDScriptByteCodeGenerator *this,int param_2,int param_3)

{
  int iVar1;
  
  Vector<int>::push_back((Vector<int> *)(this + 0x20),param_2);
  Vector<int>::push_back((Vector<int> *)(this + 0x20),param_3);
  iVar1 = *(int *)(this + 0x130);
  if (*(int *)(this + 0x130) < param_3) {
    iVar1 = param_3;
  }
  *(int *)(this + 0x130) = iVar1;
  return;
}



/* CowData<GDScriptDataType>::_realloc(long) */

undefined8 __thiscall
CowData<GDScriptDataType>::_realloc(CowData<GDScriptDataType> *this,long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = (void *)(*(long *)this + -0x10);
  puVar1 = (undefined8 *)Memory::realloc_static(pvVar3,param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  uVar2 = CowData<Variant>::_realloc((long)pvVar3);
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<GDScriptDataType>::resize<false>(long) */

undefined8 __thiscall
CowData<GDScriptDataType>::resize<false>(CowData<GDScriptDataType> *this,long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
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
    lVar6 = 0;
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
    lVar6 = lVar4 * 0x38;
    if (lVar6 != 0) {
      uVar7 = lVar6 - 1U | lVar6 - 1U >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      lVar6 = (uVar7 | uVar7 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x38 == 0) {
LAB_00119910:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar7 = param_1 * 0x38 - 1;
  uVar7 = uVar7 >> 1 | uVar7;
  uVar7 = uVar7 | uVar7 >> 2;
  uVar7 = uVar7 | uVar7 >> 4;
  uVar7 = uVar7 | uVar7 >> 8;
  uVar7 = uVar7 | uVar7 >> 0x10;
  uVar7 = uVar7 | uVar7 >> 0x20;
  lVar9 = uVar7 + 1;
  if (lVar9 == 0) goto LAB_00119910;
  uVar8 = param_1;
  if (param_1 <= lVar4) {
    while (lVar4 = *(long *)this, lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar8) {
        if (lVar9 != lVar6) {
          uVar3 = _realloc(this,lVar9);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          lVar4 = *(long *)this;
          if (lVar4 == 0) goto LAB_00119860;
        }
        *(long *)(lVar4 + -8) = param_1;
        return 0;
      }
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)(lVar4 + uVar8 * 0x38));
      uVar8 = uVar8 + 1;
    }
    goto LAB_00119966;
  }
  if (lVar9 == lVar6) {
LAB_00119883:
    puVar5 = *(undefined8 **)this;
    if (puVar5 == (undefined8 *)0x0) {
LAB_00119966:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar5[-1];
    if (param_1 <= lVar4) goto LAB_001197eb;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_00119883;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar7 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar5 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar5;
    lVar4 = 0;
  }
  lVar6 = lVar4 + 1;
  puVar5[lVar4 * 7 + 1] = 0;
  *(undefined4 *)(puVar5 + lVar4 * 7 + 2) = 0;
  *(undefined1 *)((long)puVar5 + lVar4 * 0x38 + 0x14) = 0;
  *(undefined4 *)(puVar5 + lVar4 * 7 + 3) = 0;
  puVar5[lVar4 * 7 + 6] = 0;
  *(undefined1 (*) [16])(puVar5 + lVar4 * 7 + 4) = (undefined1  [16])0x0;
  if (lVar6 < param_1) {
    lVar4 = lVar6 * 0x38;
    do {
      lVar6 = lVar6 + 1;
      lVar9 = *(long *)this + lVar4;
      lVar4 = lVar4 + 0x38;
      *(undefined8 *)(lVar9 + 8) = 0;
      *(undefined4 *)(lVar9 + 0x10) = 0;
      *(undefined1 *)(lVar9 + 0x14) = 0;
      *(undefined4 *)(lVar9 + 0x18) = 0;
      *(undefined8 *)(lVar9 + 0x30) = 0;
      *(undefined1 (*) [16])(lVar9 + 0x20) = (undefined1  [16])0x0;
    } while (param_1 != lVar6);
  }
  puVar5 = *(undefined8 **)this;
  if (puVar5 == (undefined8 *)0x0) {
LAB_00119860:
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
LAB_001197eb:
  puVar5[-1] = param_1;
  return 0;
}



/* RBMap<StringName, int, Comparator<StringName>,
   DefaultAllocator>::_insert_rb_fix(RBMap<StringName, int, Comparator<StringName>,
   DefaultAllocator>::Element*) */

void __thiscall
RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::_insert_rb_fix
          (RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *this,Element *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  int iVar8;
  Element *pEVar9;
  Element *pEVar10;
  
  iVar8 = (int)param_1;
  uVar1 = *(uint *)*(Element **)(param_1 + 0x18);
  pEVar9 = (Element *)(ulong)uVar1;
  pEVar7 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar10 = pEVar7;
      if (uVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar5 = *(Element **)(pEVar10 + 0x18);
      pEVar6 = *(Element **)(pEVar5 + 0x10);
      pEVar7 = pEVar10;
      if (pEVar6 == pEVar10) break;
      if (*(uint *)pEVar6 == 0) goto LAB_00119a0d;
      if (*(Element **)(pEVar10 + 0x10) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 8);
        *(long *)(pEVar10 + 0x10) = lVar3;
        pEVar7 = pEVar5;
        if (lVar2 != lVar3) {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar7;
        if (pEVar10 == *(Element **)(pEVar7 + 8)) {
          *(Element **)(pEVar7 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_00119b30;
LAB_001199b6:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_001199b6;
LAB_00119b30:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 8);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar5 + 8) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
LAB_001199f3:
      uVar1 = *(uint *)pEVar7;
      param_1 = pEVar10;
    }
    pEVar6 = *(Element **)(pEVar5 + 8);
    if (*(uint *)pEVar6 != 0) {
      if (*(Element **)(pEVar10 + 8) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar10 + 8) = lVar3;
        if (lVar2 == lVar3) {
          *(Element **)(param_1 + 0x18) = pEVar5;
          pEVar7 = pEVar5;
LAB_00119bc2:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar10 == *(Element **)(pEVar7 + 0x10)) goto LAB_00119bc2;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_00119bb0;
LAB_00119a80:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_00119a80;
LAB_00119bb0:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 0x10);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 8);
      *(long *)(pEVar5 + 0x10) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
      goto LAB_001199f3;
    }
LAB_00119a0d:
    pEVar7 = *(Element **)(this + 8);
    *(uint *)pEVar10 = 1;
    *(uint *)pEVar6 = 1;
    if (pEVar5 == pEVar7) {
      RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
      ::_set_color(pEVar9,iVar8);
    }
    else {
      *(uint *)pEVar5 = 0;
    }
    uVar1 = *(uint *)*(Element **)(pEVar5 + 0x18);
    pEVar7 = *(Element **)(pEVar5 + 0x18);
    param_1 = pEVar5;
  } while( true );
}



/* RBMap<StringName, int, Comparator<StringName>, DefaultAllocator>::_insert(StringName const&, int
   const&) */

Element * __thiscall
RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::_insert
          (RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *this,StringName *param_1,
          int *param_2)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_58;
  int local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pEVar7 = *(Element **)this;
  if (*(Element **)(pEVar7 + 0x10) != *(Element **)(this + 8)) {
    pEVar1 = *(Element **)(pEVar7 + 0x10);
    do {
      pEVar7 = pEVar1;
      if (*(ulong *)param_1 < *(ulong *)(pEVar7 + 0x30)) {
        pEVar1 = *(Element **)(pEVar7 + 0x10);
      }
      else {
        if (*(ulong *)param_1 <= *(ulong *)(pEVar7 + 0x30)) {
          *(int *)(pEVar7 + 0x38) = *param_2;
          goto LAB_00119d88;
        }
        pEVar1 = *(Element **)(pEVar7 + 8);
      }
    } while (pEVar1 != *(Element **)(this + 8));
  }
  pEVar1 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = *param_2;
  *(undefined8 *)(pEVar1 + 0x28) = 0;
  *(undefined4 *)pEVar1 = 0;
  *(undefined1 (*) [16])(pEVar1 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pEVar1 + 0x18) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(pEVar1 + 0x30),(StringName *)&local_58);
  bVar9 = StringName::configured != '\0';
  *(int *)(pEVar1 + 0x38) = local_50;
  if ((bVar9) && (local_58 != 0)) {
    StringName::unref();
  }
  *(Element **)(pEVar1 + 0x18) = pEVar7;
  pEVar5 = *(Element **)(this + 8);
  *(Element **)(pEVar1 + 8) = pEVar5;
  *(Element **)(pEVar1 + 0x10) = pEVar5;
  if ((*(Element **)this == pEVar7) || (*(ulong *)param_1 < *(ulong *)(pEVar7 + 0x30))) {
    *(Element **)(pEVar7 + 0x10) = pEVar1;
    pEVar6 = *(Element **)(this + 8);
    pEVar4 = *(Element **)(pEVar1 + 0x10);
    pEVar8 = *(Element **)this;
    if (pEVar5 == pEVar6) {
      pEVar3 = pEVar7;
      pEVar2 = pEVar7;
      if (pEVar1 == *(Element **)(pEVar7 + 8)) goto LAB_00119df8;
      goto LAB_00119e05;
    }
LAB_00119dd0:
    do {
      pEVar3 = pEVar5;
      pEVar5 = *(Element **)(pEVar3 + 0x10);
    } while (*(Element **)(pEVar3 + 0x10) != pEVar6);
  }
  else {
    *(Element **)(pEVar7 + 8) = pEVar1;
    pEVar3 = *(Element **)(pEVar1 + 8);
    pEVar6 = *(Element **)(this + 8);
    pEVar8 = *(Element **)this;
    pEVar2 = pEVar7;
    pEVar4 = pEVar5;
    if (pEVar6 == pEVar3) {
LAB_00119df8:
      do {
        pEVar3 = *(Element **)(pEVar2 + 0x18);
        bVar9 = *(Element **)(pEVar3 + 8) == pEVar2;
        pEVar2 = pEVar3;
      } while (bVar9);
LAB_00119e05:
      if (pEVar3 == pEVar8) {
        pEVar3 = (Element *)0x0;
      }
    }
    else {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (*(Element **)(pEVar3 + 0x10) != pEVar6) goto LAB_00119dd0;
    }
  }
  *(Element **)(pEVar1 + 0x20) = pEVar3;
  if (*(Element **)(this + 8) == pEVar4) {
    pEVar5 = pEVar1;
    pEVar6 = pEVar7;
    if (pEVar1 == *(Element **)(pEVar7 + 0x10)) {
      do {
        pEVar7 = *(Element **)(pEVar6 + 0x18);
        bVar9 = *(Element **)(pEVar7 + 0x10) == pEVar6;
        pEVar5 = pEVar6;
        pEVar6 = pEVar7;
      } while (bVar9);
    }
    if (*(Element **)this != pEVar5) goto LAB_00119d5c;
    *(undefined8 *)(pEVar1 + 0x28) = 0;
    if (pEVar3 == (Element *)0x0) goto LAB_00119d78;
LAB_00119d66:
    *(Element **)(pEVar3 + 0x28) = pEVar1;
    pEVar7 = *(Element **)(pEVar1 + 0x28);
    if (pEVar7 == (Element *)0x0) goto LAB_00119d78;
  }
  else {
    do {
      pEVar7 = pEVar4;
      pEVar4 = *(Element **)(pEVar7 + 8);
    } while (*(Element **)(this + 8) != *(Element **)(pEVar7 + 8));
LAB_00119d5c:
    *(Element **)(pEVar1 + 0x28) = pEVar7;
    if (pEVar3 != (Element *)0x0) goto LAB_00119d66;
  }
  *(Element **)(pEVar7 + 0x20) = pEVar1;
LAB_00119d78:
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  _insert_rb_fix(this,pEVar1);
  pEVar7 = pEVar1;
LAB_00119d88:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pEVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RBMap<StringName, int, Comparator<StringName>, DefaultAllocator>::operator[](StringName const&)
    */

long __thiscall
RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::operator[]
          (RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *this,StringName *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)this;
  if (lVar1 == 0) {
    _Data::_create_root((_Data *)this);
    lVar1 = *(long *)this;
    if (lVar1 == 0) {
      local_14 = 0;
      _Data::_create_root((_Data *)this);
      goto LAB_00119ee0;
    }
  }
  while (lVar1 = *(long *)(lVar1 + 0x10), *(long *)(this + 8) != lVar1) {
    while (*(ulong *)(lVar1 + 0x30) <= *(ulong *)param_1) {
      if (*(ulong *)param_1 <= *(ulong *)(lVar1 + 0x30)) goto LAB_00119eea;
      lVar1 = *(long *)(lVar1 + 8);
      if (*(long *)(this + 8) == lVar1) goto LAB_00119ed8;
    }
  }
LAB_00119ed8:
  local_14 = 0;
LAB_00119ee0:
  lVar1 = _insert(this,param_1,&local_14);
LAB_00119eea:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1 + 0x38;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptByteCodeGenerator::append(StringName const&) */

void __thiscall
GDScriptByteCodeGenerator::append(GDScriptByteCodeGenerator *this,StringName *param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  lVar2 = *(long *)(this + 0x170);
  if (lVar2 != 0) {
    while (lVar2 = *(long *)(lVar2 + 0x10), *(long *)(this + 0x178) != lVar2) {
      while (*(ulong *)(lVar2 + 0x30) <= *(ulong *)param_1) {
        if (*(ulong *)param_1 <= *(ulong *)(lVar2 + 0x30)) {
          piVar3 = (int *)RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::operator[]
                                    ((RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>
                                      *)(this + 0x170),param_1);
          Vector<int>::push_back((Vector<int> *)(this + 0x20),*piVar3);
          return;
        }
        lVar2 = *(long *)(lVar2 + 8);
        if (*(long *)(this + 0x178) == lVar2) goto LAB_00119fa0;
      }
    }
  }
LAB_00119fa0:
  iVar1 = *(int *)(this + 0x180);
  piVar3 = (int *)RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::operator[]
                            ((RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *)
                             (this + 0x170),param_1);
  *piVar3 = iVar1;
  Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar1);
  return;
}



/* RBMap<StringName, int, Comparator<StringName>, DefaultAllocator>::_copy_from(RBMap<StringName,
   int, Comparator<StringName>, DefaultAllocator> const&) */

void __thiscall
RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::_copy_from
          (RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *this,RBMap *param_1)

{
  long lVar1;
  long lVar2;
  
  clear(this);
  if (*(long *)param_1 != 0) {
    lVar1 = *(long *)(*(long *)param_1 + 0x10);
    if (lVar1 != *(long *)(param_1 + 8)) {
      do {
        lVar2 = lVar1;
        lVar1 = *(long *)(lVar2 + 0x10);
      } while (*(long *)(param_1 + 8) != *(long *)(lVar2 + 0x10));
      lVar1 = *(long *)this;
      while( true ) {
        if (lVar1 == 0) {
          _Data::_create_root((_Data *)this);
        }
        _insert(this,(StringName *)(lVar2 + 0x30),(int *)(lVar2 + 0x38));
        lVar2 = *(long *)(lVar2 + 0x20);
        if (lVar2 == 0) break;
        lVar1 = *(long *)this;
      }
    }
  }
  return;
}



/* GDScriptByteCodeGenerator::pop_stack_identifiers() */

void __thiscall GDScriptByteCodeGenerator::pop_stack_identifiers(GDScriptByteCodeGenerator *this)

{
  int iVar1;
  Element *pEVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  RBMap *pRVar6;
  long lVar7;
  long in_FS_OFFSET;
  int local_50 [2];
  undefined8 local_48;
  undefined1 local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x50) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  iVar1 = **(int **)(*(long *)(this + 0x50) + 8);
  List<int,DefaultAllocator>::pop_back((List<int,DefaultAllocator> *)(this + 0x50));
  pRVar6 = *(RBMap **)(this + 0x30);
  if (pRVar6 != (RBMap *)0x0) {
    pRVar6 = *(RBMap **)(pRVar6 + 8);
  }
  RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::_copy_from
            ((RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *)(this + 0x38),pRVar6);
  if ((*(long *)(this + 0x30) != 0) &&
     (pEVar2 = *(Element **)(*(long *)(this + 0x30) + 8), pEVar2 != (Element *)0x0)) {
    List<RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>,DefaultAllocator>::erase
              ((List<RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>,DefaultAllocator>
                *)(this + 0x30),pEVar2);
  }
  if ((*(long *)(this + 0xb8) != 0) && (*(int *)(*(long *)(this + 0xb8) + 0x10) != 0)) {
    itos((long)local_50);
    operator+((char *)&local_48,(String *)"Leaving block with non-zero temporary variables: ");
    _err_print_error("pop_stack_identifiers","modules/gdscript/gdscript_byte_codegen.h",0xc2,
                     (CowData<char32_t> *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  }
  lVar7 = (long)iVar1;
  lVar5 = lVar7;
  while( true ) {
    if (*(long *)(this + 0x78) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(this + 0x78) + -8);
    }
    if (lVar4 <= lVar5) break;
    local_50[0] = (int)lVar5 + 3;
    lVar5 = lVar5 + 1;
    HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert((int *)&local_48);
  }
  CowData<GDScriptByteCodeGenerator::StackSlot>::resize<false>
            ((CowData<GDScriptByteCodeGenerator::StackSlot> *)(this + 0x78),lVar7);
  if (this[0x18] != (GDScriptByteCodeGenerator)0x0) {
    if (*(long *)(this + 0x110) != 0) {
      lVar5 = *(long *)(*(long *)(this + 0x110) + 0x10);
      if (lVar5 != *(long *)(this + 0x118)) {
        do {
          lVar7 = lVar5;
          lVar5 = *(long *)(lVar7 + 0x10);
        } while (*(long *)(this + 0x118) != *(long *)(lVar7 + 0x10));
        do {
          local_40 = 0;
          local_38 = 0;
          StringName::operator=((StringName *)&local_38,(StringName *)(lVar7 + 0x30));
          local_48 = CONCAT44(*(undefined4 *)(lVar7 + 0x38),*(undefined4 *)(this + 300));
          List<GDScriptFunction::StackDebug,DefaultAllocator>::push_back
                    ((List<GDScriptFunction::StackDebug,DefaultAllocator> *)(this + 0x100),
                     (StackDebug *)&local_48);
          if ((StringName::configured != '\0') && (local_38 != 0)) {
            StringName::unref();
          }
          lVar7 = *(long *)(lVar7 + 0x20);
        } while (lVar7 != 0);
      }
    }
    pRVar6 = *(RBMap **)(this + 0x108);
    if (pRVar6 != (RBMap *)0x0) {
      pRVar6 = *(RBMap **)(pRVar6 + 8);
    }
    RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::_copy_from
              ((RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *)(this + 0x110),
               pRVar6);
    if ((*(long *)(this + 0x108) != 0) &&
       (pEVar2 = *(Element **)(*(long *)(this + 0x108) + 8), pEVar2 != (Element *)0x0)) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        List<RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>,DefaultAllocator>::erase
                  ((List<RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>,DefaultAllocator>
                    *)(this + 0x108),pEVar2);
        return;
      }
      goto LAB_0011a36a;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011a36a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RBMap<void (*)(Variant const*, Variant const*, Variant*), int, Comparator<void (*)(Variant
   const*, Variant const*, Variant*)>, DefaultAllocator>::_insert_rb_fix(RBMap<void (*)(Variant
   const*, Variant const*, Variant*), int, Comparator<void (*)(Variant const*, Variant const*,
   Variant*)>, DefaultAllocator>::Element*) */

void __thiscall
RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
::_insert_rb_fix(RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
                 *this,Element *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  int iVar8;
  Element *pEVar9;
  Element *pEVar10;
  
  iVar8 = (int)param_1;
  uVar1 = *(uint *)*(Element **)(param_1 + 0x18);
  pEVar9 = (Element *)(ulong)uVar1;
  pEVar7 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar10 = pEVar7;
      if (uVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar5 = *(Element **)(pEVar10 + 0x18);
      pEVar6 = *(Element **)(pEVar5 + 0x10);
      pEVar7 = pEVar10;
      if (pEVar6 == pEVar10) break;
      if (*(uint *)pEVar6 == 0) goto LAB_0011a41d;
      if (*(Element **)(pEVar10 + 0x10) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 8);
        *(long *)(pEVar10 + 0x10) = lVar3;
        pEVar7 = pEVar5;
        if (lVar2 != lVar3) {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar7;
        if (pEVar10 == *(Element **)(pEVar7 + 8)) {
          *(Element **)(pEVar7 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011a540;
LAB_0011a3c6:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011a3c6;
LAB_0011a540:
        _set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 8);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar5 + 8) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
LAB_0011a403:
      uVar1 = *(uint *)pEVar7;
      param_1 = pEVar10;
    }
    pEVar6 = *(Element **)(pEVar5 + 8);
    if (*(uint *)pEVar6 != 0) {
      if (*(Element **)(pEVar10 + 8) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar10 + 8) = lVar3;
        if (lVar2 == lVar3) {
          *(Element **)(param_1 + 0x18) = pEVar5;
          pEVar7 = pEVar5;
LAB_0011a5d2:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar10 == *(Element **)(pEVar7 + 0x10)) goto LAB_0011a5d2;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011a5c0;
LAB_0011a490:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011a490;
LAB_0011a5c0:
        _set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 0x10);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 8);
      *(long *)(pEVar5 + 0x10) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
      goto LAB_0011a403;
    }
LAB_0011a41d:
    pEVar7 = *(Element **)(this + 8);
    *(uint *)pEVar10 = 1;
    *(uint *)pEVar6 = 1;
    if (pEVar5 == pEVar7) {
      _set_color(pEVar9,iVar8);
    }
    else {
      *(uint *)pEVar5 = 0;
    }
    uVar1 = *(uint *)*(Element **)(pEVar5 + 0x18);
    pEVar7 = *(Element **)(pEVar5 + 0x18);
    param_1 = pEVar5;
  } while( true );
}



/* RBMap<void (*)(Variant const*, Variant const*, Variant*), int, Comparator<void (*)(Variant
   const*, Variant const*, Variant*)>, DefaultAllocator>::operator[](void (* const&)(Variant const*,
   Variant const*, Variant*)) */

Element * __thiscall
RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
::operator[](RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
             *this,_func_void_Variant_ptr_Variant_ptr_Variant_ptr *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  Element *pEVar9;
  Element *pEVar10;
  bool bVar11;
  
  pEVar6 = *(Element **)this;
  if (pEVar6 == (Element *)0x0) {
    pEVar6 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
    *(undefined1 (*) [16])(pEVar6 + 0x20) = (undefined1  [16])0x0;
    pEVar5 = *(Element **)(this + 8);
    *(undefined8 *)(pEVar6 + 0x30) = 0;
    *(undefined4 *)(pEVar6 + 0x38) = 0;
    *(Element **)this = pEVar6;
    *(Element **)(pEVar6 + 0x18) = pEVar5;
    *(undefined4 *)pEVar6 = 1;
    *(Element **)(pEVar6 + 8) = pEVar5;
    *(Element **)(pEVar6 + 0x10) = pEVar5;
  }
  else {
    pEVar5 = *(Element **)(pEVar6 + 0x10);
  }
  pEVar8 = *(Element **)(this + 8);
  uVar1 = *(ulong *)param_1;
  pEVar3 = pEVar5;
  if (pEVar8 != pEVar5) {
    do {
      if (uVar1 < *(ulong *)(pEVar3 + 0x30)) {
        pEVar3 = *(Element **)(pEVar3 + 0x10);
      }
      else {
        if (uVar1 <= *(ulong *)(pEVar3 + 0x30)) goto LAB_0011a77f;
        pEVar3 = *(Element **)(pEVar3 + 8);
      }
    } while (pEVar8 != pEVar3);
    do {
      pEVar6 = pEVar5;
      if (uVar1 < *(ulong *)(pEVar6 + 0x30)) {
        pEVar5 = *(Element **)(pEVar6 + 0x10);
      }
      else {
        if (uVar1 <= *(ulong *)(pEVar6 + 0x30)) {
          *(undefined4 *)(pEVar6 + 0x38) = 0;
          return pEVar6 + 0x38;
        }
        pEVar5 = *(Element **)(pEVar6 + 8);
      }
    } while (pEVar8 != pEVar5);
  }
  pEVar3 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
  uVar2 = *(undefined8 *)param_1;
  *(Element **)(pEVar3 + 0x18) = pEVar6;
  *(undefined1 (*) [16])(pEVar3 + 0x20) = (undefined1  [16])0x0;
  pEVar5 = *(Element **)(this + 8);
  *(undefined4 *)pEVar3 = 0;
  *(undefined8 *)(pEVar3 + 0x30) = uVar2;
  *(undefined4 *)(pEVar3 + 0x38) = 0;
  *(Element **)(pEVar3 + 8) = pEVar5;
  *(Element **)(pEVar3 + 0x10) = pEVar5;
  if ((pEVar6 == *(Element **)this) || (*(ulong *)param_1 < *(ulong *)(pEVar6 + 0x30))) {
    *(Element **)(pEVar6 + 0x10) = pEVar3;
    pEVar9 = *(Element **)(this + 8);
    pEVar7 = *(Element **)(pEVar3 + 0x10);
    pEVar10 = *(Element **)this;
    pEVar8 = pEVar5;
    if (pEVar5 == pEVar9) {
      pEVar5 = pEVar6;
      pEVar4 = pEVar6;
      if (pEVar3 == *(Element **)(pEVar6 + 8)) goto LAB_0011a7a0;
      goto LAB_0011a7ad;
    }
LAB_0011a720:
    do {
      pEVar10 = pEVar8 + 0x10;
      pEVar5 = pEVar8;
      pEVar8 = *(Element **)pEVar10;
    } while (*(Element **)pEVar10 != pEVar9);
  }
  else {
    *(Element **)(pEVar6 + 8) = pEVar3;
    pEVar8 = *(Element **)(pEVar3 + 8);
    pEVar9 = *(Element **)(this + 8);
    pEVar10 = *(Element **)this;
    pEVar4 = pEVar6;
    pEVar7 = pEVar5;
    if (pEVar8 != pEVar9) goto LAB_0011a720;
LAB_0011a7a0:
    do {
      pEVar5 = *(Element **)(pEVar4 + 0x18);
      bVar11 = *(Element **)(pEVar5 + 8) == pEVar4;
      pEVar4 = pEVar5;
    } while (bVar11);
LAB_0011a7ad:
    if (pEVar5 == pEVar10) {
      pEVar5 = (Element *)0x0;
    }
  }
  *(Element **)(pEVar3 + 0x20) = pEVar5;
  if (pEVar7 == *(Element **)(this + 8)) {
    pEVar8 = pEVar3;
    pEVar9 = pEVar6;
    if (pEVar3 == *(Element **)(pEVar6 + 0x10)) {
      do {
        pEVar6 = *(Element **)(pEVar9 + 0x18);
        bVar11 = *(Element **)(pEVar6 + 0x10) == pEVar9;
        pEVar8 = pEVar9;
        pEVar9 = pEVar6;
      } while (bVar11);
    }
    if (pEVar8 != *(Element **)this) goto LAB_0011a754;
    *(undefined8 *)(pEVar3 + 0x28) = 0;
    if (pEVar5 == (Element *)0x0) goto LAB_0011a76e;
LAB_0011a75d:
    *(Element **)(pEVar5 + 0x28) = pEVar3;
    pEVar6 = *(Element **)(pEVar3 + 0x28);
    if (pEVar6 == (Element *)0x0) goto LAB_0011a76e;
  }
  else {
    do {
      pEVar6 = pEVar7;
      pEVar7 = *(Element **)(pEVar6 + 8);
    } while (*(Element **)(this + 8) != *(Element **)(pEVar6 + 8));
LAB_0011a754:
    *(Element **)(pEVar3 + 0x28) = pEVar6;
    if (pEVar5 != (Element *)0x0) goto LAB_0011a75d;
  }
  *(Element **)(pEVar6 + 0x20) = pEVar3;
LAB_0011a76e:
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  _insert_rb_fix(this,pEVar3);
LAB_0011a77f:
  return pEVar3 + 0x38;
}



/* GDScriptByteCodeGenerator::get_operation_pos(void (*)(Variant const*, Variant const*, Variant*))
    */

undefined4 __thiscall
GDScriptByteCodeGenerator::get_operation_pos
          (GDScriptByteCodeGenerator *this,_func_void_Variant_ptr_Variant_ptr_Variant_ptr *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  _func_void_Variant_ptr_Variant_ptr_Variant_ptr *local_10;
  
  lVar2 = *(long *)(this + 0x198);
  local_10 = param_1;
  if (lVar2 != 0) {
    while (lVar2 = *(long *)(lVar2 + 0x10), *(long *)(this + 0x1a0) != lVar2) {
      while (*(_func_void_Variant_ptr_Variant_ptr_Variant_ptr **)(lVar2 + 0x30) <= param_1) {
        if (param_1 <= *(_func_void_Variant_ptr_Variant_ptr_Variant_ptr **)(lVar2 + 0x30)) {
          puVar3 = (undefined4 *)
                   RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
                   ::operator[]((RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
                                 *)(this + 0x198),
                                (_func_void_Variant_ptr_Variant_ptr_Variant_ptr *)&local_10);
          return *puVar3;
        }
        lVar2 = *(long *)(lVar2 + 8);
        if (*(long *)(this + 0x1a0) == lVar2) goto LAB_0011a8d0;
      }
    }
  }
LAB_0011a8d0:
  uVar1 = *(undefined4 *)(this + 0x1a8);
  puVar3 = (undefined4 *)
           RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
           ::operator[]((RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
                         *)(this + 0x198),
                        (_func_void_Variant_ptr_Variant_ptr_Variant_ptr *)&local_10);
  *puVar3 = uVar1;
  return uVar1;
}



/* RBMap<void (*)(Variant*, Variant const*), int, Comparator<void (*)(Variant*, Variant const*)>,
   DefaultAllocator>::_insert_rb_fix(RBMap<void (*)(Variant*, Variant const*), int, Comparator<void
   (*)(Variant*, Variant const*)>, DefaultAllocator>::Element*) */

void __thiscall
RBMap<void(*)(Variant*,Variant_const*),int,Comparator<void(*)(Variant*,Variant_const*)>,DefaultAllocator>
::_insert_rb_fix(RBMap<void(*)(Variant*,Variant_const*),int,Comparator<void(*)(Variant*,Variant_const*)>,DefaultAllocator>
                 *this,Element *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  int iVar8;
  Element *pEVar9;
  Element *pEVar10;
  
  iVar8 = (int)param_1;
  uVar1 = *(uint *)*(Element **)(param_1 + 0x18);
  pEVar9 = (Element *)(ulong)uVar1;
  pEVar7 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar10 = pEVar7;
      if (uVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar5 = *(Element **)(pEVar10 + 0x18);
      pEVar6 = *(Element **)(pEVar5 + 0x10);
      pEVar7 = pEVar10;
      if (pEVar6 == pEVar10) break;
      if (*(uint *)pEVar6 == 0) goto LAB_0011a9ad;
      if (*(Element **)(pEVar10 + 0x10) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 8);
        *(long *)(pEVar10 + 0x10) = lVar3;
        pEVar7 = pEVar5;
        if (lVar2 != lVar3) {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar7;
        if (pEVar10 == *(Element **)(pEVar7 + 8)) {
          *(Element **)(pEVar7 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011aad0;
LAB_0011a956:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011a956;
LAB_0011aad0:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 8);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar5 + 8) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
LAB_0011a993:
      uVar1 = *(uint *)pEVar7;
      param_1 = pEVar10;
    }
    pEVar6 = *(Element **)(pEVar5 + 8);
    if (*(uint *)pEVar6 != 0) {
      if (*(Element **)(pEVar10 + 8) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar10 + 8) = lVar3;
        if (lVar2 == lVar3) {
          *(Element **)(param_1 + 0x18) = pEVar5;
          pEVar7 = pEVar5;
LAB_0011ab62:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar10 == *(Element **)(pEVar7 + 0x10)) goto LAB_0011ab62;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011ab50;
LAB_0011aa20:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011aa20;
LAB_0011ab50:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 0x10);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 8);
      *(long *)(pEVar5 + 0x10) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
      goto LAB_0011a993;
    }
LAB_0011a9ad:
    pEVar7 = *(Element **)(this + 8);
    *(uint *)pEVar10 = 1;
    *(uint *)pEVar6 = 1;
    if (pEVar5 == pEVar7) {
      RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
      ::_set_color(pEVar9,iVar8);
    }
    else {
      *(uint *)pEVar5 = 0;
    }
    uVar1 = *(uint *)*(Element **)(pEVar5 + 0x18);
    pEVar7 = *(Element **)(pEVar5 + 0x18);
    param_1 = pEVar5;
  } while( true );
}



/* RBMap<void (*)(Variant*, Variant const*), int, Comparator<void (*)(Variant*, Variant const*)>,
   DefaultAllocator>::operator[](void (* const&)(Variant*, Variant const*)) */

Element * __thiscall
RBMap<void(*)(Variant*,Variant_const*),int,Comparator<void(*)(Variant*,Variant_const*)>,DefaultAllocator>
::operator[](RBMap<void(*)(Variant*,Variant_const*),int,Comparator<void(*)(Variant*,Variant_const*)>,DefaultAllocator>
             *this,_func_void_Variant_ptr_Variant_ptr *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  Element *pEVar9;
  Element *pEVar10;
  bool bVar11;
  
  pEVar6 = *(Element **)this;
  if (pEVar6 == (Element *)0x0) {
    pEVar6 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
    *(undefined1 (*) [16])(pEVar6 + 0x20) = (undefined1  [16])0x0;
    pEVar5 = *(Element **)(this + 8);
    *(undefined8 *)(pEVar6 + 0x30) = 0;
    *(undefined4 *)(pEVar6 + 0x38) = 0;
    *(Element **)this = pEVar6;
    *(Element **)(pEVar6 + 0x18) = pEVar5;
    *(undefined4 *)pEVar6 = 1;
    *(Element **)(pEVar6 + 8) = pEVar5;
    *(Element **)(pEVar6 + 0x10) = pEVar5;
  }
  else {
    pEVar5 = *(Element **)(pEVar6 + 0x10);
  }
  pEVar8 = *(Element **)(this + 8);
  uVar1 = *(ulong *)param_1;
  pEVar3 = pEVar5;
  if (pEVar8 != pEVar5) {
    do {
      if (uVar1 < *(ulong *)(pEVar3 + 0x30)) {
        pEVar3 = *(Element **)(pEVar3 + 0x10);
      }
      else {
        if (uVar1 <= *(ulong *)(pEVar3 + 0x30)) goto LAB_0011ad0f;
        pEVar3 = *(Element **)(pEVar3 + 8);
      }
    } while (pEVar8 != pEVar3);
    do {
      pEVar6 = pEVar5;
      if (uVar1 < *(ulong *)(pEVar6 + 0x30)) {
        pEVar5 = *(Element **)(pEVar6 + 0x10);
      }
      else {
        if (uVar1 <= *(ulong *)(pEVar6 + 0x30)) {
          *(undefined4 *)(pEVar6 + 0x38) = 0;
          return pEVar6 + 0x38;
        }
        pEVar5 = *(Element **)(pEVar6 + 8);
      }
    } while (pEVar8 != pEVar5);
  }
  pEVar3 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
  uVar2 = *(undefined8 *)param_1;
  *(Element **)(pEVar3 + 0x18) = pEVar6;
  *(undefined1 (*) [16])(pEVar3 + 0x20) = (undefined1  [16])0x0;
  pEVar5 = *(Element **)(this + 8);
  *(undefined4 *)pEVar3 = 0;
  *(undefined8 *)(pEVar3 + 0x30) = uVar2;
  *(undefined4 *)(pEVar3 + 0x38) = 0;
  *(Element **)(pEVar3 + 8) = pEVar5;
  *(Element **)(pEVar3 + 0x10) = pEVar5;
  if ((pEVar6 == *(Element **)this) || (*(ulong *)param_1 < *(ulong *)(pEVar6 + 0x30))) {
    *(Element **)(pEVar6 + 0x10) = pEVar3;
    pEVar9 = *(Element **)(this + 8);
    pEVar7 = *(Element **)(pEVar3 + 0x10);
    pEVar10 = *(Element **)this;
    pEVar8 = pEVar5;
    if (pEVar5 == pEVar9) {
      pEVar5 = pEVar6;
      pEVar4 = pEVar6;
      if (pEVar3 == *(Element **)(pEVar6 + 8)) goto LAB_0011ad30;
      goto LAB_0011ad3d;
    }
LAB_0011acb0:
    do {
      pEVar10 = pEVar8 + 0x10;
      pEVar5 = pEVar8;
      pEVar8 = *(Element **)pEVar10;
    } while (*(Element **)pEVar10 != pEVar9);
  }
  else {
    *(Element **)(pEVar6 + 8) = pEVar3;
    pEVar8 = *(Element **)(pEVar3 + 8);
    pEVar9 = *(Element **)(this + 8);
    pEVar10 = *(Element **)this;
    pEVar4 = pEVar6;
    pEVar7 = pEVar5;
    if (pEVar8 != pEVar9) goto LAB_0011acb0;
LAB_0011ad30:
    do {
      pEVar5 = *(Element **)(pEVar4 + 0x18);
      bVar11 = *(Element **)(pEVar5 + 8) == pEVar4;
      pEVar4 = pEVar5;
    } while (bVar11);
LAB_0011ad3d:
    if (pEVar5 == pEVar10) {
      pEVar5 = (Element *)0x0;
    }
  }
  *(Element **)(pEVar3 + 0x20) = pEVar5;
  if (pEVar7 == *(Element **)(this + 8)) {
    pEVar8 = pEVar3;
    pEVar9 = pEVar6;
    if (pEVar3 == *(Element **)(pEVar6 + 0x10)) {
      do {
        pEVar6 = *(Element **)(pEVar9 + 0x18);
        bVar11 = *(Element **)(pEVar6 + 0x10) == pEVar9;
        pEVar8 = pEVar9;
        pEVar9 = pEVar6;
      } while (bVar11);
    }
    if (pEVar8 != *(Element **)this) goto LAB_0011ace4;
    *(undefined8 *)(pEVar3 + 0x28) = 0;
    if (pEVar5 == (Element *)0x0) goto LAB_0011acfe;
LAB_0011aced:
    *(Element **)(pEVar5 + 0x28) = pEVar3;
    pEVar6 = *(Element **)(pEVar3 + 0x28);
    if (pEVar6 == (Element *)0x0) goto LAB_0011acfe;
  }
  else {
    do {
      pEVar6 = pEVar7;
      pEVar7 = *(Element **)(pEVar6 + 8);
    } while (*(Element **)(this + 8) != *(Element **)(pEVar6 + 8));
LAB_0011ace4:
    *(Element **)(pEVar3 + 0x28) = pEVar6;
    if (pEVar5 != (Element *)0x0) goto LAB_0011aced;
  }
  *(Element **)(pEVar6 + 0x20) = pEVar3;
LAB_0011acfe:
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  _insert_rb_fix(this,pEVar3);
LAB_0011ad0f:
  return pEVar3 + 0x38;
}



/* GDScriptByteCodeGenerator::append(void (*)(Variant*, Variant const*)) */

void __thiscall
GDScriptByteCodeGenerator::append
          (GDScriptByteCodeGenerator *this,_func_void_Variant_ptr_Variant_ptr *param_1)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  long in_FS_OFFSET;
  _func_void_Variant_ptr_Variant_ptr *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(this + 0x1b0);
  local_28 = param_1;
  if (lVar1 != 0) {
    while (lVar1 = *(long *)(lVar1 + 0x10), *(long *)(this + 0x1b8) != lVar1) {
      while (*(_func_void_Variant_ptr_Variant_ptr **)(lVar1 + 0x30) <= param_1) {
        if (param_1 <= *(_func_void_Variant_ptr_Variant_ptr **)(lVar1 + 0x30)) {
          piVar2 = (int *)RBMap<void(*)(Variant*,Variant_const*),int,Comparator<void(*)(Variant*,Variant_const*)>,DefaultAllocator>
                          ::operator[]((RBMap<void(*)(Variant*,Variant_const*),int,Comparator<void(*)(Variant*,Variant_const*)>,DefaultAllocator>
                                        *)(this + 0x1b0),
                                       (_func_void_Variant_ptr_Variant_ptr *)&local_28);
          iVar3 = *piVar2;
          goto LAB_0011ae83;
        }
        lVar1 = *(long *)(lVar1 + 8);
        if (*(long *)(this + 0x1b8) == lVar1) goto LAB_0011ae70;
      }
    }
  }
LAB_0011ae70:
  iVar3 = *(int *)(this + 0x1c0);
  piVar2 = (int *)RBMap<void(*)(Variant*,Variant_const*),int,Comparator<void(*)(Variant*,Variant_const*)>,DefaultAllocator>
                  ::operator[]((RBMap<void(*)(Variant*,Variant_const*),int,Comparator<void(*)(Variant*,Variant_const*)>,DefaultAllocator>
                                *)(this + 0x1b0),(_func_void_Variant_ptr_Variant_ptr *)&local_28);
  *piVar2 = iVar3;
LAB_0011ae83:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RBMap<void (*)(Variant const*, Variant*), int, Comparator<void (*)(Variant const*, Variant*)>,
   DefaultAllocator>::_insert_rb_fix(RBMap<void (*)(Variant const*, Variant*), int, Comparator<void
   (*)(Variant const*, Variant*)>, DefaultAllocator>::Element*) */

void __thiscall
RBMap<void(*)(Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant*)>,DefaultAllocator>
::_insert_rb_fix(RBMap<void(*)(Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant*)>,DefaultAllocator>
                 *this,Element *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  int iVar8;
  Element *pEVar9;
  Element *pEVar10;
  
  iVar8 = (int)param_1;
  uVar1 = *(uint *)*(Element **)(param_1 + 0x18);
  pEVar9 = (Element *)(ulong)uVar1;
  pEVar7 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar10 = pEVar7;
      if (uVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar5 = *(Element **)(pEVar10 + 0x18);
      pEVar6 = *(Element **)(pEVar5 + 0x10);
      pEVar7 = pEVar10;
      if (pEVar6 == pEVar10) break;
      if (*(uint *)pEVar6 == 0) goto LAB_0011af5d;
      if (*(Element **)(pEVar10 + 0x10) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 8);
        *(long *)(pEVar10 + 0x10) = lVar3;
        pEVar7 = pEVar5;
        if (lVar2 != lVar3) {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar7;
        if (pEVar10 == *(Element **)(pEVar7 + 8)) {
          *(Element **)(pEVar7 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011b080;
LAB_0011af06:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011af06;
LAB_0011b080:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 8);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar5 + 8) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
LAB_0011af43:
      uVar1 = *(uint *)pEVar7;
      param_1 = pEVar10;
    }
    pEVar6 = *(Element **)(pEVar5 + 8);
    if (*(uint *)pEVar6 != 0) {
      if (*(Element **)(pEVar10 + 8) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar10 + 8) = lVar3;
        if (lVar2 == lVar3) {
          *(Element **)(param_1 + 0x18) = pEVar5;
          pEVar7 = pEVar5;
LAB_0011b112:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar10 == *(Element **)(pEVar7 + 0x10)) goto LAB_0011b112;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011b100;
LAB_0011afd0:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011afd0;
LAB_0011b100:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 0x10);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 8);
      *(long *)(pEVar5 + 0x10) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
      goto LAB_0011af43;
    }
LAB_0011af5d:
    pEVar7 = *(Element **)(this + 8);
    *(uint *)pEVar10 = 1;
    *(uint *)pEVar6 = 1;
    if (pEVar5 == pEVar7) {
      RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
      ::_set_color(pEVar9,iVar8);
    }
    else {
      *(uint *)pEVar5 = 0;
    }
    uVar1 = *(uint *)*(Element **)(pEVar5 + 0x18);
    pEVar7 = *(Element **)(pEVar5 + 0x18);
    param_1 = pEVar5;
  } while( true );
}



/* RBMap<void (*)(Variant const*, Variant*), int, Comparator<void (*)(Variant const*, Variant*)>,
   DefaultAllocator>::operator[](void (* const&)(Variant const*, Variant*)) */

Element * __thiscall
RBMap<void(*)(Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant*)>,DefaultAllocator>
::operator[](RBMap<void(*)(Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant*)>,DefaultAllocator>
             *this,_func_void_Variant_ptr_Variant_ptr *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  Element *pEVar9;
  Element *pEVar10;
  bool bVar11;
  
  pEVar6 = *(Element **)this;
  if (pEVar6 == (Element *)0x0) {
    pEVar6 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
    *(undefined1 (*) [16])(pEVar6 + 0x20) = (undefined1  [16])0x0;
    pEVar5 = *(Element **)(this + 8);
    *(undefined8 *)(pEVar6 + 0x30) = 0;
    *(undefined4 *)(pEVar6 + 0x38) = 0;
    *(Element **)this = pEVar6;
    *(Element **)(pEVar6 + 0x18) = pEVar5;
    *(undefined4 *)pEVar6 = 1;
    *(Element **)(pEVar6 + 8) = pEVar5;
    *(Element **)(pEVar6 + 0x10) = pEVar5;
  }
  else {
    pEVar5 = *(Element **)(pEVar6 + 0x10);
  }
  pEVar8 = *(Element **)(this + 8);
  uVar1 = *(ulong *)param_1;
  pEVar3 = pEVar5;
  if (pEVar8 != pEVar5) {
    do {
      if (uVar1 < *(ulong *)(pEVar3 + 0x30)) {
        pEVar3 = *(Element **)(pEVar3 + 0x10);
      }
      else {
        if (uVar1 <= *(ulong *)(pEVar3 + 0x30)) goto LAB_0011b2bf;
        pEVar3 = *(Element **)(pEVar3 + 8);
      }
    } while (pEVar8 != pEVar3);
    do {
      pEVar6 = pEVar5;
      if (uVar1 < *(ulong *)(pEVar6 + 0x30)) {
        pEVar5 = *(Element **)(pEVar6 + 0x10);
      }
      else {
        if (uVar1 <= *(ulong *)(pEVar6 + 0x30)) {
          *(undefined4 *)(pEVar6 + 0x38) = 0;
          return pEVar6 + 0x38;
        }
        pEVar5 = *(Element **)(pEVar6 + 8);
      }
    } while (pEVar8 != pEVar5);
  }
  pEVar3 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
  uVar2 = *(undefined8 *)param_1;
  *(Element **)(pEVar3 + 0x18) = pEVar6;
  *(undefined1 (*) [16])(pEVar3 + 0x20) = (undefined1  [16])0x0;
  pEVar5 = *(Element **)(this + 8);
  *(undefined4 *)pEVar3 = 0;
  *(undefined8 *)(pEVar3 + 0x30) = uVar2;
  *(undefined4 *)(pEVar3 + 0x38) = 0;
  *(Element **)(pEVar3 + 8) = pEVar5;
  *(Element **)(pEVar3 + 0x10) = pEVar5;
  if ((pEVar6 == *(Element **)this) || (*(ulong *)param_1 < *(ulong *)(pEVar6 + 0x30))) {
    *(Element **)(pEVar6 + 0x10) = pEVar3;
    pEVar9 = *(Element **)(this + 8);
    pEVar7 = *(Element **)(pEVar3 + 0x10);
    pEVar10 = *(Element **)this;
    pEVar8 = pEVar5;
    if (pEVar5 == pEVar9) {
      pEVar5 = pEVar6;
      pEVar4 = pEVar6;
      if (pEVar3 == *(Element **)(pEVar6 + 8)) goto LAB_0011b2e0;
      goto LAB_0011b2ed;
    }
LAB_0011b260:
    do {
      pEVar10 = pEVar8 + 0x10;
      pEVar5 = pEVar8;
      pEVar8 = *(Element **)pEVar10;
    } while (*(Element **)pEVar10 != pEVar9);
  }
  else {
    *(Element **)(pEVar6 + 8) = pEVar3;
    pEVar8 = *(Element **)(pEVar3 + 8);
    pEVar9 = *(Element **)(this + 8);
    pEVar10 = *(Element **)this;
    pEVar4 = pEVar6;
    pEVar7 = pEVar5;
    if (pEVar8 != pEVar9) goto LAB_0011b260;
LAB_0011b2e0:
    do {
      pEVar5 = *(Element **)(pEVar4 + 0x18);
      bVar11 = *(Element **)(pEVar5 + 8) == pEVar4;
      pEVar4 = pEVar5;
    } while (bVar11);
LAB_0011b2ed:
    if (pEVar5 == pEVar10) {
      pEVar5 = (Element *)0x0;
    }
  }
  *(Element **)(pEVar3 + 0x20) = pEVar5;
  if (pEVar7 == *(Element **)(this + 8)) {
    pEVar8 = pEVar3;
    pEVar9 = pEVar6;
    if (pEVar3 == *(Element **)(pEVar6 + 0x10)) {
      do {
        pEVar6 = *(Element **)(pEVar9 + 0x18);
        bVar11 = *(Element **)(pEVar6 + 0x10) == pEVar9;
        pEVar8 = pEVar9;
        pEVar9 = pEVar6;
      } while (bVar11);
    }
    if (pEVar8 != *(Element **)this) goto LAB_0011b294;
    *(undefined8 *)(pEVar3 + 0x28) = 0;
    if (pEVar5 == (Element *)0x0) goto LAB_0011b2ae;
LAB_0011b29d:
    *(Element **)(pEVar5 + 0x28) = pEVar3;
    pEVar6 = *(Element **)(pEVar3 + 0x28);
    if (pEVar6 == (Element *)0x0) goto LAB_0011b2ae;
  }
  else {
    do {
      pEVar6 = pEVar7;
      pEVar7 = *(Element **)(pEVar6 + 8);
    } while (*(Element **)(this + 8) != *(Element **)(pEVar6 + 8));
LAB_0011b294:
    *(Element **)(pEVar3 + 0x28) = pEVar6;
    if (pEVar5 != (Element *)0x0) goto LAB_0011b29d;
  }
  *(Element **)(pEVar6 + 0x20) = pEVar3;
LAB_0011b2ae:
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  _insert_rb_fix(this,pEVar3);
LAB_0011b2bf:
  return pEVar3 + 0x38;
}



/* GDScriptByteCodeGenerator::get_getter_pos(void (*)(Variant const*, Variant*)) */

undefined4 __thiscall
GDScriptByteCodeGenerator::get_getter_pos
          (GDScriptByteCodeGenerator *this,_func_void_Variant_ptr_Variant_ptr *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  _func_void_Variant_ptr_Variant_ptr *local_10;
  
  lVar2 = *(long *)(this + 0x1c8);
  local_10 = param_1;
  if (lVar2 != 0) {
    while (lVar2 = *(long *)(lVar2 + 0x10), *(long *)(this + 0x1d0) != lVar2) {
      while (*(_func_void_Variant_ptr_Variant_ptr **)(lVar2 + 0x30) <= param_1) {
        if (param_1 <= *(_func_void_Variant_ptr_Variant_ptr **)(lVar2 + 0x30)) {
          puVar3 = (undefined4 *)
                   RBMap<void(*)(Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant*)>,DefaultAllocator>
                   ::operator[]((RBMap<void(*)(Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant*)>,DefaultAllocator>
                                 *)(this + 0x1c8),(_func_void_Variant_ptr_Variant_ptr *)&local_10);
          return *puVar3;
        }
        lVar2 = *(long *)(lVar2 + 8);
        if (*(long *)(this + 0x1d0) == lVar2) goto LAB_0011b410;
      }
    }
  }
LAB_0011b410:
  uVar1 = *(undefined4 *)(this + 0x1d8);
  puVar3 = (undefined4 *)
           RBMap<void(*)(Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant*)>,DefaultAllocator>
           ::operator[]((RBMap<void(*)(Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant*)>,DefaultAllocator>
                         *)(this + 0x1c8),(_func_void_Variant_ptr_Variant_ptr *)&local_10);
  *puVar3 = uVar1;
  return uVar1;
}



/* RBMap<void (*)(Variant*, Variant const*, Variant const*, bool*), int, Comparator<void
   (*)(Variant*, Variant const*, Variant const*, bool*)>,
   DefaultAllocator>::_insert_rb_fix(RBMap<void (*)(Variant*, Variant const*, Variant const*,
   bool*), int, Comparator<void (*)(Variant*, Variant const*, Variant const*, bool*)>,
   DefaultAllocator>::Element*) */

void __thiscall
RBMap<void(*)(Variant*,Variant_const*,Variant_const*,bool*),int,Comparator<void(*)(Variant*,Variant_const*,Variant_const*,bool*)>,DefaultAllocator>
::_insert_rb_fix(RBMap<void(*)(Variant*,Variant_const*,Variant_const*,bool*),int,Comparator<void(*)(Variant*,Variant_const*,Variant_const*,bool*)>,DefaultAllocator>
                 *this,Element *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  int iVar8;
  Element *pEVar9;
  Element *pEVar10;
  
  iVar8 = (int)param_1;
  uVar1 = *(uint *)*(Element **)(param_1 + 0x18);
  pEVar9 = (Element *)(ulong)uVar1;
  pEVar7 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar10 = pEVar7;
      if (uVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar5 = *(Element **)(pEVar10 + 0x18);
      pEVar6 = *(Element **)(pEVar5 + 0x10);
      pEVar7 = pEVar10;
      if (pEVar6 == pEVar10) break;
      if (*(uint *)pEVar6 == 0) goto LAB_0011b4ed;
      if (*(Element **)(pEVar10 + 0x10) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 8);
        *(long *)(pEVar10 + 0x10) = lVar3;
        pEVar7 = pEVar5;
        if (lVar2 != lVar3) {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar7;
        if (pEVar10 == *(Element **)(pEVar7 + 8)) {
          *(Element **)(pEVar7 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011b610;
LAB_0011b496:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011b496;
LAB_0011b610:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 8);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar5 + 8) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
LAB_0011b4d3:
      uVar1 = *(uint *)pEVar7;
      param_1 = pEVar10;
    }
    pEVar6 = *(Element **)(pEVar5 + 8);
    if (*(uint *)pEVar6 != 0) {
      if (*(Element **)(pEVar10 + 8) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar10 + 8) = lVar3;
        if (lVar2 == lVar3) {
          *(Element **)(param_1 + 0x18) = pEVar5;
          pEVar7 = pEVar5;
LAB_0011b6a2:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar10 == *(Element **)(pEVar7 + 0x10)) goto LAB_0011b6a2;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011b690;
LAB_0011b560:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011b560;
LAB_0011b690:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 0x10);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 8);
      *(long *)(pEVar5 + 0x10) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
      goto LAB_0011b4d3;
    }
LAB_0011b4ed:
    pEVar7 = *(Element **)(this + 8);
    *(uint *)pEVar10 = 1;
    *(uint *)pEVar6 = 1;
    if (pEVar5 == pEVar7) {
      RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
      ::_set_color(pEVar9,iVar8);
    }
    else {
      *(uint *)pEVar5 = 0;
    }
    uVar1 = *(uint *)*(Element **)(pEVar5 + 0x18);
    pEVar7 = *(Element **)(pEVar5 + 0x18);
    param_1 = pEVar5;
  } while( true );
}



/* RBMap<void (*)(Variant*, Variant const*, Variant const*, bool*), int, Comparator<void
   (*)(Variant*, Variant const*, Variant const*, bool*)>, DefaultAllocator>::operator[](void (*
   const&)(Variant*, Variant const*, Variant const*, bool*)) */

Element * __thiscall
RBMap<void(*)(Variant*,Variant_const*,Variant_const*,bool*),int,Comparator<void(*)(Variant*,Variant_const*,Variant_const*,bool*)>,DefaultAllocator>
::operator[](RBMap<void(*)(Variant*,Variant_const*,Variant_const*,bool*),int,Comparator<void(*)(Variant*,Variant_const*,Variant_const*,bool*)>,DefaultAllocator>
             *this,_func_void_Variant_ptr_Variant_ptr_Variant_ptr_bool_ptr *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  Element *pEVar9;
  Element *pEVar10;
  bool bVar11;
  
  pEVar6 = *(Element **)this;
  if (pEVar6 == (Element *)0x0) {
    pEVar6 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
    *(undefined1 (*) [16])(pEVar6 + 0x20) = (undefined1  [16])0x0;
    pEVar5 = *(Element **)(this + 8);
    *(undefined8 *)(pEVar6 + 0x30) = 0;
    *(undefined4 *)(pEVar6 + 0x38) = 0;
    *(Element **)this = pEVar6;
    *(Element **)(pEVar6 + 0x18) = pEVar5;
    *(undefined4 *)pEVar6 = 1;
    *(Element **)(pEVar6 + 8) = pEVar5;
    *(Element **)(pEVar6 + 0x10) = pEVar5;
  }
  else {
    pEVar5 = *(Element **)(pEVar6 + 0x10);
  }
  pEVar8 = *(Element **)(this + 8);
  uVar1 = *(ulong *)param_1;
  pEVar3 = pEVar5;
  if (pEVar8 != pEVar5) {
    do {
      if (uVar1 < *(ulong *)(pEVar3 + 0x30)) {
        pEVar3 = *(Element **)(pEVar3 + 0x10);
      }
      else {
        if (uVar1 <= *(ulong *)(pEVar3 + 0x30)) goto LAB_0011b84f;
        pEVar3 = *(Element **)(pEVar3 + 8);
      }
    } while (pEVar8 != pEVar3);
    do {
      pEVar6 = pEVar5;
      if (uVar1 < *(ulong *)(pEVar6 + 0x30)) {
        pEVar5 = *(Element **)(pEVar6 + 0x10);
      }
      else {
        if (uVar1 <= *(ulong *)(pEVar6 + 0x30)) {
          *(undefined4 *)(pEVar6 + 0x38) = 0;
          return pEVar6 + 0x38;
        }
        pEVar5 = *(Element **)(pEVar6 + 8);
      }
    } while (pEVar8 != pEVar5);
  }
  pEVar3 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
  uVar2 = *(undefined8 *)param_1;
  *(Element **)(pEVar3 + 0x18) = pEVar6;
  *(undefined1 (*) [16])(pEVar3 + 0x20) = (undefined1  [16])0x0;
  pEVar5 = *(Element **)(this + 8);
  *(undefined4 *)pEVar3 = 0;
  *(undefined8 *)(pEVar3 + 0x30) = uVar2;
  *(undefined4 *)(pEVar3 + 0x38) = 0;
  *(Element **)(pEVar3 + 8) = pEVar5;
  *(Element **)(pEVar3 + 0x10) = pEVar5;
  if ((pEVar6 == *(Element **)this) || (*(ulong *)param_1 < *(ulong *)(pEVar6 + 0x30))) {
    *(Element **)(pEVar6 + 0x10) = pEVar3;
    pEVar9 = *(Element **)(this + 8);
    pEVar7 = *(Element **)(pEVar3 + 0x10);
    pEVar10 = *(Element **)this;
    pEVar8 = pEVar5;
    if (pEVar5 == pEVar9) {
      pEVar5 = pEVar6;
      pEVar4 = pEVar6;
      if (pEVar3 == *(Element **)(pEVar6 + 8)) goto LAB_0011b870;
      goto LAB_0011b87d;
    }
LAB_0011b7f0:
    do {
      pEVar10 = pEVar8 + 0x10;
      pEVar5 = pEVar8;
      pEVar8 = *(Element **)pEVar10;
    } while (*(Element **)pEVar10 != pEVar9);
  }
  else {
    *(Element **)(pEVar6 + 8) = pEVar3;
    pEVar8 = *(Element **)(pEVar3 + 8);
    pEVar9 = *(Element **)(this + 8);
    pEVar10 = *(Element **)this;
    pEVar4 = pEVar6;
    pEVar7 = pEVar5;
    if (pEVar8 != pEVar9) goto LAB_0011b7f0;
LAB_0011b870:
    do {
      pEVar5 = *(Element **)(pEVar4 + 0x18);
      bVar11 = *(Element **)(pEVar5 + 8) == pEVar4;
      pEVar4 = pEVar5;
    } while (bVar11);
LAB_0011b87d:
    if (pEVar5 == pEVar10) {
      pEVar5 = (Element *)0x0;
    }
  }
  *(Element **)(pEVar3 + 0x20) = pEVar5;
  if (pEVar7 == *(Element **)(this + 8)) {
    pEVar8 = pEVar3;
    pEVar9 = pEVar6;
    if (pEVar3 == *(Element **)(pEVar6 + 0x10)) {
      do {
        pEVar6 = *(Element **)(pEVar9 + 0x18);
        bVar11 = *(Element **)(pEVar6 + 0x10) == pEVar9;
        pEVar8 = pEVar9;
        pEVar9 = pEVar6;
      } while (bVar11);
    }
    if (pEVar8 != *(Element **)this) goto LAB_0011b824;
    *(undefined8 *)(pEVar3 + 0x28) = 0;
    if (pEVar5 == (Element *)0x0) goto LAB_0011b83e;
LAB_0011b82d:
    *(Element **)(pEVar5 + 0x28) = pEVar3;
    pEVar6 = *(Element **)(pEVar3 + 0x28);
    if (pEVar6 == (Element *)0x0) goto LAB_0011b83e;
  }
  else {
    do {
      pEVar6 = pEVar7;
      pEVar7 = *(Element **)(pEVar6 + 8);
    } while (*(Element **)(this + 8) != *(Element **)(pEVar6 + 8));
LAB_0011b824:
    *(Element **)(pEVar3 + 0x28) = pEVar6;
    if (pEVar5 != (Element *)0x0) goto LAB_0011b82d;
  }
  *(Element **)(pEVar6 + 0x20) = pEVar3;
LAB_0011b83e:
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  _insert_rb_fix(this,pEVar3);
LAB_0011b84f:
  return pEVar3 + 0x38;
}



/* RBMap<void (*)(Variant const*, Variant const*, Variant*, bool*), int, Comparator<void (*)(Variant
   const*, Variant const*, Variant*, bool*)>, DefaultAllocator>::_insert_rb_fix(RBMap<void
   (*)(Variant const*, Variant const*, Variant*, bool*), int, Comparator<void (*)(Variant const*,
   Variant const*, Variant*, bool*)>, DefaultAllocator>::Element*) */

void __thiscall
RBMap<void(*)(Variant_const*,Variant_const*,Variant*,bool*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*,bool*)>,DefaultAllocator>
::_insert_rb_fix(RBMap<void(*)(Variant_const*,Variant_const*,Variant*,bool*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*,bool*)>,DefaultAllocator>
                 *this,Element *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  int iVar8;
  Element *pEVar9;
  Element *pEVar10;
  
  iVar8 = (int)param_1;
  uVar1 = *(uint *)*(Element **)(param_1 + 0x18);
  pEVar9 = (Element *)(ulong)uVar1;
  pEVar7 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar10 = pEVar7;
      if (uVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar5 = *(Element **)(pEVar10 + 0x18);
      pEVar6 = *(Element **)(pEVar5 + 0x10);
      pEVar7 = pEVar10;
      if (pEVar6 == pEVar10) break;
      if (*(uint *)pEVar6 == 0) goto LAB_0011b9ed;
      if (*(Element **)(pEVar10 + 0x10) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 8);
        *(long *)(pEVar10 + 0x10) = lVar3;
        pEVar7 = pEVar5;
        if (lVar2 != lVar3) {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar7;
        if (pEVar10 == *(Element **)(pEVar7 + 8)) {
          *(Element **)(pEVar7 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011bb10;
LAB_0011b996:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011b996;
LAB_0011bb10:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 8);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar5 + 8) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
LAB_0011b9d3:
      uVar1 = *(uint *)pEVar7;
      param_1 = pEVar10;
    }
    pEVar6 = *(Element **)(pEVar5 + 8);
    if (*(uint *)pEVar6 != 0) {
      if (*(Element **)(pEVar10 + 8) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar10 + 8) = lVar3;
        if (lVar2 == lVar3) {
          *(Element **)(param_1 + 0x18) = pEVar5;
          pEVar7 = pEVar5;
LAB_0011bba2:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar10 == *(Element **)(pEVar7 + 0x10)) goto LAB_0011bba2;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011bb90;
LAB_0011ba60:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011ba60;
LAB_0011bb90:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 0x10);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 8);
      *(long *)(pEVar5 + 0x10) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
      goto LAB_0011b9d3;
    }
LAB_0011b9ed:
    pEVar7 = *(Element **)(this + 8);
    *(uint *)pEVar10 = 1;
    *(uint *)pEVar6 = 1;
    if (pEVar5 == pEVar7) {
      RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
      ::_set_color(pEVar9,iVar8);
    }
    else {
      *(uint *)pEVar5 = 0;
    }
    uVar1 = *(uint *)*(Element **)(pEVar5 + 0x18);
    pEVar7 = *(Element **)(pEVar5 + 0x18);
    param_1 = pEVar5;
  } while( true );
}



/* RBMap<void (*)(Variant const*, Variant const*, Variant*, bool*), int, Comparator<void (*)(Variant
   const*, Variant const*, Variant*, bool*)>, DefaultAllocator>::operator[](void (* const&)(Variant
   const*, Variant const*, Variant*, bool*)) */

Element * __thiscall
RBMap<void(*)(Variant_const*,Variant_const*,Variant*,bool*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*,bool*)>,DefaultAllocator>
::operator[](RBMap<void(*)(Variant_const*,Variant_const*,Variant*,bool*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*,bool*)>,DefaultAllocator>
             *this,_func_void_Variant_ptr_Variant_ptr_Variant_ptr_bool_ptr *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  Element *pEVar9;
  Element *pEVar10;
  bool bVar11;
  
  pEVar6 = *(Element **)this;
  if (pEVar6 == (Element *)0x0) {
    pEVar6 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
    *(undefined1 (*) [16])(pEVar6 + 0x20) = (undefined1  [16])0x0;
    pEVar5 = *(Element **)(this + 8);
    *(undefined8 *)(pEVar6 + 0x30) = 0;
    *(undefined4 *)(pEVar6 + 0x38) = 0;
    *(Element **)this = pEVar6;
    *(Element **)(pEVar6 + 0x18) = pEVar5;
    *(undefined4 *)pEVar6 = 1;
    *(Element **)(pEVar6 + 8) = pEVar5;
    *(Element **)(pEVar6 + 0x10) = pEVar5;
  }
  else {
    pEVar5 = *(Element **)(pEVar6 + 0x10);
  }
  pEVar8 = *(Element **)(this + 8);
  uVar1 = *(ulong *)param_1;
  pEVar3 = pEVar5;
  if (pEVar8 != pEVar5) {
    do {
      if (uVar1 < *(ulong *)(pEVar3 + 0x30)) {
        pEVar3 = *(Element **)(pEVar3 + 0x10);
      }
      else {
        if (uVar1 <= *(ulong *)(pEVar3 + 0x30)) goto LAB_0011bd4f;
        pEVar3 = *(Element **)(pEVar3 + 8);
      }
    } while (pEVar8 != pEVar3);
    do {
      pEVar6 = pEVar5;
      if (uVar1 < *(ulong *)(pEVar6 + 0x30)) {
        pEVar5 = *(Element **)(pEVar6 + 0x10);
      }
      else {
        if (uVar1 <= *(ulong *)(pEVar6 + 0x30)) {
          *(undefined4 *)(pEVar6 + 0x38) = 0;
          return pEVar6 + 0x38;
        }
        pEVar5 = *(Element **)(pEVar6 + 8);
      }
    } while (pEVar8 != pEVar5);
  }
  pEVar3 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
  uVar2 = *(undefined8 *)param_1;
  *(Element **)(pEVar3 + 0x18) = pEVar6;
  *(undefined1 (*) [16])(pEVar3 + 0x20) = (undefined1  [16])0x0;
  pEVar5 = *(Element **)(this + 8);
  *(undefined4 *)pEVar3 = 0;
  *(undefined8 *)(pEVar3 + 0x30) = uVar2;
  *(undefined4 *)(pEVar3 + 0x38) = 0;
  *(Element **)(pEVar3 + 8) = pEVar5;
  *(Element **)(pEVar3 + 0x10) = pEVar5;
  if ((pEVar6 == *(Element **)this) || (*(ulong *)param_1 < *(ulong *)(pEVar6 + 0x30))) {
    *(Element **)(pEVar6 + 0x10) = pEVar3;
    pEVar9 = *(Element **)(this + 8);
    pEVar7 = *(Element **)(pEVar3 + 0x10);
    pEVar10 = *(Element **)this;
    pEVar8 = pEVar5;
    if (pEVar5 == pEVar9) {
      pEVar5 = pEVar6;
      pEVar4 = pEVar6;
      if (pEVar3 == *(Element **)(pEVar6 + 8)) goto LAB_0011bd70;
      goto LAB_0011bd7d;
    }
LAB_0011bcf0:
    do {
      pEVar10 = pEVar8 + 0x10;
      pEVar5 = pEVar8;
      pEVar8 = *(Element **)pEVar10;
    } while (*(Element **)pEVar10 != pEVar9);
  }
  else {
    *(Element **)(pEVar6 + 8) = pEVar3;
    pEVar8 = *(Element **)(pEVar3 + 8);
    pEVar9 = *(Element **)(this + 8);
    pEVar10 = *(Element **)this;
    pEVar4 = pEVar6;
    pEVar7 = pEVar5;
    if (pEVar8 != pEVar9) goto LAB_0011bcf0;
LAB_0011bd70:
    do {
      pEVar5 = *(Element **)(pEVar4 + 0x18);
      bVar11 = *(Element **)(pEVar5 + 8) == pEVar4;
      pEVar4 = pEVar5;
    } while (bVar11);
LAB_0011bd7d:
    if (pEVar5 == pEVar10) {
      pEVar5 = (Element *)0x0;
    }
  }
  *(Element **)(pEVar3 + 0x20) = pEVar5;
  if (pEVar7 == *(Element **)(this + 8)) {
    pEVar8 = pEVar3;
    pEVar9 = pEVar6;
    if (pEVar3 == *(Element **)(pEVar6 + 0x10)) {
      do {
        pEVar6 = *(Element **)(pEVar9 + 0x18);
        bVar11 = *(Element **)(pEVar6 + 0x10) == pEVar9;
        pEVar8 = pEVar9;
        pEVar9 = pEVar6;
      } while (bVar11);
    }
    if (pEVar8 != *(Element **)this) goto LAB_0011bd24;
    *(undefined8 *)(pEVar3 + 0x28) = 0;
    if (pEVar5 == (Element *)0x0) goto LAB_0011bd3e;
LAB_0011bd2d:
    *(Element **)(pEVar5 + 0x28) = pEVar3;
    pEVar6 = *(Element **)(pEVar3 + 0x28);
    if (pEVar6 == (Element *)0x0) goto LAB_0011bd3e;
  }
  else {
    do {
      pEVar6 = pEVar7;
      pEVar7 = *(Element **)(pEVar6 + 8);
    } while (*(Element **)(this + 8) != *(Element **)(pEVar6 + 8));
LAB_0011bd24:
    *(Element **)(pEVar3 + 0x28) = pEVar6;
    if (pEVar5 != (Element *)0x0) goto LAB_0011bd2d;
  }
  *(Element **)(pEVar6 + 0x20) = pEVar3;
LAB_0011bd3e:
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  _insert_rb_fix(this,pEVar3);
LAB_0011bd4f:
  return pEVar3 + 0x38;
}



/* RBMap<void (*)(Variant*, long, Variant const*, bool*), int, Comparator<void (*)(Variant*, long,
   Variant const*, bool*)>, DefaultAllocator>::_insert_rb_fix(RBMap<void (*)(Variant*, long, Variant
   const*, bool*), int, Comparator<void (*)(Variant*, long, Variant const*, bool*)>,
   DefaultAllocator>::Element*) */

void __thiscall
RBMap<void(*)(Variant*,long,Variant_const*,bool*),int,Comparator<void(*)(Variant*,long,Variant_const*,bool*)>,DefaultAllocator>
::_insert_rb_fix(RBMap<void(*)(Variant*,long,Variant_const*,bool*),int,Comparator<void(*)(Variant*,long,Variant_const*,bool*)>,DefaultAllocator>
                 *this,Element *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  int iVar8;
  Element *pEVar9;
  Element *pEVar10;
  
  iVar8 = (int)param_1;
  uVar1 = *(uint *)*(Element **)(param_1 + 0x18);
  pEVar9 = (Element *)(ulong)uVar1;
  pEVar7 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar10 = pEVar7;
      if (uVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar5 = *(Element **)(pEVar10 + 0x18);
      pEVar6 = *(Element **)(pEVar5 + 0x10);
      pEVar7 = pEVar10;
      if (pEVar6 == pEVar10) break;
      if (*(uint *)pEVar6 == 0) goto LAB_0011beed;
      if (*(Element **)(pEVar10 + 0x10) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 8);
        *(long *)(pEVar10 + 0x10) = lVar3;
        pEVar7 = pEVar5;
        if (lVar2 != lVar3) {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar7;
        if (pEVar10 == *(Element **)(pEVar7 + 8)) {
          *(Element **)(pEVar7 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011c010;
LAB_0011be96:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011be96;
LAB_0011c010:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 8);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar5 + 8) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
LAB_0011bed3:
      uVar1 = *(uint *)pEVar7;
      param_1 = pEVar10;
    }
    pEVar6 = *(Element **)(pEVar5 + 8);
    if (*(uint *)pEVar6 != 0) {
      if (*(Element **)(pEVar10 + 8) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar10 + 8) = lVar3;
        if (lVar2 == lVar3) {
          *(Element **)(param_1 + 0x18) = pEVar5;
          pEVar7 = pEVar5;
LAB_0011c0a2:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar10 == *(Element **)(pEVar7 + 0x10)) goto LAB_0011c0a2;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011c090;
LAB_0011bf60:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011bf60;
LAB_0011c090:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 0x10);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 8);
      *(long *)(pEVar5 + 0x10) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
      goto LAB_0011bed3;
    }
LAB_0011beed:
    pEVar7 = *(Element **)(this + 8);
    *(uint *)pEVar10 = 1;
    *(uint *)pEVar6 = 1;
    if (pEVar5 == pEVar7) {
      RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
      ::_set_color(pEVar9,iVar8);
    }
    else {
      *(uint *)pEVar5 = 0;
    }
    uVar1 = *(uint *)*(Element **)(pEVar5 + 0x18);
    pEVar7 = *(Element **)(pEVar5 + 0x18);
    param_1 = pEVar5;
  } while( true );
}



/* RBMap<void (*)(Variant*, long, Variant const*, bool*), int, Comparator<void (*)(Variant*, long,
   Variant const*, bool*)>, DefaultAllocator>::operator[](void (* const&)(Variant*, long, Variant
   const*, bool*)) */

Element * __thiscall
RBMap<void(*)(Variant*,long,Variant_const*,bool*),int,Comparator<void(*)(Variant*,long,Variant_const*,bool*)>,DefaultAllocator>
::operator[](RBMap<void(*)(Variant*,long,Variant_const*,bool*),int,Comparator<void(*)(Variant*,long,Variant_const*,bool*)>,DefaultAllocator>
             *this,_func_void_Variant_ptr_long_Variant_ptr_bool_ptr *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  Element *pEVar9;
  Element *pEVar10;
  bool bVar11;
  
  pEVar6 = *(Element **)this;
  if (pEVar6 == (Element *)0x0) {
    pEVar6 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
    *(undefined1 (*) [16])(pEVar6 + 0x20) = (undefined1  [16])0x0;
    pEVar5 = *(Element **)(this + 8);
    *(undefined8 *)(pEVar6 + 0x30) = 0;
    *(undefined4 *)(pEVar6 + 0x38) = 0;
    *(Element **)this = pEVar6;
    *(Element **)(pEVar6 + 0x18) = pEVar5;
    *(undefined4 *)pEVar6 = 1;
    *(Element **)(pEVar6 + 8) = pEVar5;
    *(Element **)(pEVar6 + 0x10) = pEVar5;
  }
  else {
    pEVar5 = *(Element **)(pEVar6 + 0x10);
  }
  pEVar8 = *(Element **)(this + 8);
  uVar1 = *(ulong *)param_1;
  pEVar3 = pEVar5;
  if (pEVar8 != pEVar5) {
    do {
      if (uVar1 < *(ulong *)(pEVar3 + 0x30)) {
        pEVar3 = *(Element **)(pEVar3 + 0x10);
      }
      else {
        if (uVar1 <= *(ulong *)(pEVar3 + 0x30)) goto LAB_0011c24f;
        pEVar3 = *(Element **)(pEVar3 + 8);
      }
    } while (pEVar8 != pEVar3);
    do {
      pEVar6 = pEVar5;
      if (uVar1 < *(ulong *)(pEVar6 + 0x30)) {
        pEVar5 = *(Element **)(pEVar6 + 0x10);
      }
      else {
        if (uVar1 <= *(ulong *)(pEVar6 + 0x30)) {
          *(undefined4 *)(pEVar6 + 0x38) = 0;
          return pEVar6 + 0x38;
        }
        pEVar5 = *(Element **)(pEVar6 + 8);
      }
    } while (pEVar8 != pEVar5);
  }
  pEVar3 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
  uVar2 = *(undefined8 *)param_1;
  *(Element **)(pEVar3 + 0x18) = pEVar6;
  *(undefined1 (*) [16])(pEVar3 + 0x20) = (undefined1  [16])0x0;
  pEVar5 = *(Element **)(this + 8);
  *(undefined4 *)pEVar3 = 0;
  *(undefined8 *)(pEVar3 + 0x30) = uVar2;
  *(undefined4 *)(pEVar3 + 0x38) = 0;
  *(Element **)(pEVar3 + 8) = pEVar5;
  *(Element **)(pEVar3 + 0x10) = pEVar5;
  if ((pEVar6 == *(Element **)this) || (*(ulong *)param_1 < *(ulong *)(pEVar6 + 0x30))) {
    *(Element **)(pEVar6 + 0x10) = pEVar3;
    pEVar9 = *(Element **)(this + 8);
    pEVar7 = *(Element **)(pEVar3 + 0x10);
    pEVar10 = *(Element **)this;
    pEVar8 = pEVar5;
    if (pEVar5 == pEVar9) {
      pEVar5 = pEVar6;
      pEVar4 = pEVar6;
      if (pEVar3 == *(Element **)(pEVar6 + 8)) goto LAB_0011c270;
      goto LAB_0011c27d;
    }
LAB_0011c1f0:
    do {
      pEVar10 = pEVar8 + 0x10;
      pEVar5 = pEVar8;
      pEVar8 = *(Element **)pEVar10;
    } while (*(Element **)pEVar10 != pEVar9);
  }
  else {
    *(Element **)(pEVar6 + 8) = pEVar3;
    pEVar8 = *(Element **)(pEVar3 + 8);
    pEVar9 = *(Element **)(this + 8);
    pEVar10 = *(Element **)this;
    pEVar4 = pEVar6;
    pEVar7 = pEVar5;
    if (pEVar8 != pEVar9) goto LAB_0011c1f0;
LAB_0011c270:
    do {
      pEVar5 = *(Element **)(pEVar4 + 0x18);
      bVar11 = *(Element **)(pEVar5 + 8) == pEVar4;
      pEVar4 = pEVar5;
    } while (bVar11);
LAB_0011c27d:
    if (pEVar5 == pEVar10) {
      pEVar5 = (Element *)0x0;
    }
  }
  *(Element **)(pEVar3 + 0x20) = pEVar5;
  if (pEVar7 == *(Element **)(this + 8)) {
    pEVar8 = pEVar3;
    pEVar9 = pEVar6;
    if (pEVar3 == *(Element **)(pEVar6 + 0x10)) {
      do {
        pEVar6 = *(Element **)(pEVar9 + 0x18);
        bVar11 = *(Element **)(pEVar6 + 0x10) == pEVar9;
        pEVar8 = pEVar9;
        pEVar9 = pEVar6;
      } while (bVar11);
    }
    if (pEVar8 != *(Element **)this) goto LAB_0011c224;
    *(undefined8 *)(pEVar3 + 0x28) = 0;
    if (pEVar5 == (Element *)0x0) goto LAB_0011c23e;
LAB_0011c22d:
    *(Element **)(pEVar5 + 0x28) = pEVar3;
    pEVar6 = *(Element **)(pEVar3 + 0x28);
    if (pEVar6 == (Element *)0x0) goto LAB_0011c23e;
  }
  else {
    do {
      pEVar6 = pEVar7;
      pEVar7 = *(Element **)(pEVar6 + 8);
    } while (*(Element **)(this + 8) != *(Element **)(pEVar6 + 8));
LAB_0011c224:
    *(Element **)(pEVar3 + 0x28) = pEVar6;
    if (pEVar5 != (Element *)0x0) goto LAB_0011c22d;
  }
  *(Element **)(pEVar6 + 0x20) = pEVar3;
LAB_0011c23e:
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  _insert_rb_fix(this,pEVar3);
LAB_0011c24f:
  return pEVar3 + 0x38;
}



/* GDScriptByteCodeGenerator::append(void (*)(Variant*, long, Variant const*, bool*)) */

void __thiscall
GDScriptByteCodeGenerator::append
          (GDScriptByteCodeGenerator *this,_func_void_Variant_ptr_long_Variant_ptr_bool_ptr *param_1
          )

{
  long lVar1;
  int *piVar2;
  int iVar3;
  long in_FS_OFFSET;
  _func_void_Variant_ptr_long_Variant_ptr_bool_ptr *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(this + 0x210);
  local_28 = param_1;
  if (lVar1 != 0) {
    while (lVar1 = *(long *)(lVar1 + 0x10), *(long *)(this + 0x218) != lVar1) {
      while (*(_func_void_Variant_ptr_long_Variant_ptr_bool_ptr **)(lVar1 + 0x30) <= param_1) {
        if (param_1 <= *(_func_void_Variant_ptr_long_Variant_ptr_bool_ptr **)(lVar1 + 0x30)) {
          piVar2 = (int *)RBMap<void(*)(Variant*,long,Variant_const*,bool*),int,Comparator<void(*)(Variant*,long,Variant_const*,bool*)>,DefaultAllocator>
                          ::operator[]((RBMap<void(*)(Variant*,long,Variant_const*,bool*),int,Comparator<void(*)(Variant*,long,Variant_const*,bool*)>,DefaultAllocator>
                                        *)(this + 0x210),
                                       (_func_void_Variant_ptr_long_Variant_ptr_bool_ptr *)&local_28
                                      );
          iVar3 = *piVar2;
          goto LAB_0011c3c3;
        }
        lVar1 = *(long *)(lVar1 + 8);
        if (*(long *)(this + 0x218) == lVar1) goto LAB_0011c3b0;
      }
    }
  }
LAB_0011c3b0:
  iVar3 = *(int *)(this + 0x220);
  piVar2 = (int *)RBMap<void(*)(Variant*,long,Variant_const*,bool*),int,Comparator<void(*)(Variant*,long,Variant_const*,bool*)>,DefaultAllocator>
                  ::operator[]((RBMap<void(*)(Variant*,long,Variant_const*,bool*),int,Comparator<void(*)(Variant*,long,Variant_const*,bool*)>,DefaultAllocator>
                                *)(this + 0x210),
                               (_func_void_Variant_ptr_long_Variant_ptr_bool_ptr *)&local_28);
  *piVar2 = iVar3;
LAB_0011c3c3:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    Vector<int>::push_back((Vector<int> *)(this + 0x20),iVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RBMap<void (*)(Variant const*, long, Variant*, bool*), int, Comparator<void (*)(Variant const*,
   long, Variant*, bool*)>, DefaultAllocator>::_insert_rb_fix(RBMap<void (*)(Variant const*, long,
   Variant*, bool*), int, Comparator<void (*)(Variant const*, long, Variant*, bool*)>,
   DefaultAllocator>::Element*) */

void __thiscall
RBMap<void(*)(Variant_const*,long,Variant*,bool*),int,Comparator<void(*)(Variant_const*,long,Variant*,bool*)>,DefaultAllocator>
::_insert_rb_fix(RBMap<void(*)(Variant_const*,long,Variant*,bool*),int,Comparator<void(*)(Variant_const*,long,Variant*,bool*)>,DefaultAllocator>
                 *this,Element *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  int iVar8;
  Element *pEVar9;
  Element *pEVar10;
  
  iVar8 = (int)param_1;
  uVar1 = *(uint *)*(Element **)(param_1 + 0x18);
  pEVar9 = (Element *)(ulong)uVar1;
  pEVar7 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar10 = pEVar7;
      if (uVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar5 = *(Element **)(pEVar10 + 0x18);
      pEVar6 = *(Element **)(pEVar5 + 0x10);
      pEVar7 = pEVar10;
      if (pEVar6 == pEVar10) break;
      if (*(uint *)pEVar6 == 0) goto LAB_0011c49d;
      if (*(Element **)(pEVar10 + 0x10) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 8);
        *(long *)(pEVar10 + 0x10) = lVar3;
        pEVar7 = pEVar5;
        if (lVar2 != lVar3) {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar7;
        if (pEVar10 == *(Element **)(pEVar7 + 8)) {
          *(Element **)(pEVar7 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011c5c0;
LAB_0011c446:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011c446;
LAB_0011c5c0:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 8);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar5 + 8) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
LAB_0011c483:
      uVar1 = *(uint *)pEVar7;
      param_1 = pEVar10;
    }
    pEVar6 = *(Element **)(pEVar5 + 8);
    if (*(uint *)pEVar6 != 0) {
      if (*(Element **)(pEVar10 + 8) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar10 + 8) = lVar3;
        if (lVar2 == lVar3) {
          *(Element **)(param_1 + 0x18) = pEVar5;
          pEVar7 = pEVar5;
LAB_0011c652:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar10 == *(Element **)(pEVar7 + 0x10)) goto LAB_0011c652;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011c640;
LAB_0011c510:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011c510;
LAB_0011c640:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 0x10);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 8);
      *(long *)(pEVar5 + 0x10) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
      goto LAB_0011c483;
    }
LAB_0011c49d:
    pEVar7 = *(Element **)(this + 8);
    *(uint *)pEVar10 = 1;
    *(uint *)pEVar6 = 1;
    if (pEVar5 == pEVar7) {
      RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
      ::_set_color(pEVar9,iVar8);
    }
    else {
      *(uint *)pEVar5 = 0;
    }
    uVar1 = *(uint *)*(Element **)(pEVar5 + 0x18);
    pEVar7 = *(Element **)(pEVar5 + 0x18);
    param_1 = pEVar5;
  } while( true );
}



/* RBMap<void (*)(Variant const*, long, Variant*, bool*), int, Comparator<void (*)(Variant const*,
   long, Variant*, bool*)>, DefaultAllocator>::operator[](void (* const&)(Variant const*, long,
   Variant*, bool*)) */

Element * __thiscall
RBMap<void(*)(Variant_const*,long,Variant*,bool*),int,Comparator<void(*)(Variant_const*,long,Variant*,bool*)>,DefaultAllocator>
::operator[](RBMap<void(*)(Variant_const*,long,Variant*,bool*),int,Comparator<void(*)(Variant_const*,long,Variant*,bool*)>,DefaultAllocator>
             *this,_func_void_Variant_ptr_long_Variant_ptr_bool_ptr *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  Element *pEVar9;
  Element *pEVar10;
  bool bVar11;
  
  pEVar6 = *(Element **)this;
  if (pEVar6 == (Element *)0x0) {
    pEVar6 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
    *(undefined1 (*) [16])(pEVar6 + 0x20) = (undefined1  [16])0x0;
    pEVar5 = *(Element **)(this + 8);
    *(undefined8 *)(pEVar6 + 0x30) = 0;
    *(undefined4 *)(pEVar6 + 0x38) = 0;
    *(Element **)this = pEVar6;
    *(Element **)(pEVar6 + 0x18) = pEVar5;
    *(undefined4 *)pEVar6 = 1;
    *(Element **)(pEVar6 + 8) = pEVar5;
    *(Element **)(pEVar6 + 0x10) = pEVar5;
  }
  else {
    pEVar5 = *(Element **)(pEVar6 + 0x10);
  }
  pEVar8 = *(Element **)(this + 8);
  uVar1 = *(ulong *)param_1;
  pEVar3 = pEVar5;
  if (pEVar8 != pEVar5) {
    do {
      if (uVar1 < *(ulong *)(pEVar3 + 0x30)) {
        pEVar3 = *(Element **)(pEVar3 + 0x10);
      }
      else {
        if (uVar1 <= *(ulong *)(pEVar3 + 0x30)) goto LAB_0011c7ff;
        pEVar3 = *(Element **)(pEVar3 + 8);
      }
    } while (pEVar8 != pEVar3);
    do {
      pEVar6 = pEVar5;
      if (uVar1 < *(ulong *)(pEVar6 + 0x30)) {
        pEVar5 = *(Element **)(pEVar6 + 0x10);
      }
      else {
        if (uVar1 <= *(ulong *)(pEVar6 + 0x30)) {
          *(undefined4 *)(pEVar6 + 0x38) = 0;
          return pEVar6 + 0x38;
        }
        pEVar5 = *(Element **)(pEVar6 + 8);
      }
    } while (pEVar8 != pEVar5);
  }
  pEVar3 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
  uVar2 = *(undefined8 *)param_1;
  *(Element **)(pEVar3 + 0x18) = pEVar6;
  *(undefined1 (*) [16])(pEVar3 + 0x20) = (undefined1  [16])0x0;
  pEVar5 = *(Element **)(this + 8);
  *(undefined4 *)pEVar3 = 0;
  *(undefined8 *)(pEVar3 + 0x30) = uVar2;
  *(undefined4 *)(pEVar3 + 0x38) = 0;
  *(Element **)(pEVar3 + 8) = pEVar5;
  *(Element **)(pEVar3 + 0x10) = pEVar5;
  if ((pEVar6 == *(Element **)this) || (*(ulong *)param_1 < *(ulong *)(pEVar6 + 0x30))) {
    *(Element **)(pEVar6 + 0x10) = pEVar3;
    pEVar9 = *(Element **)(this + 8);
    pEVar7 = *(Element **)(pEVar3 + 0x10);
    pEVar10 = *(Element **)this;
    pEVar8 = pEVar5;
    if (pEVar5 == pEVar9) {
      pEVar5 = pEVar6;
      pEVar4 = pEVar6;
      if (pEVar3 == *(Element **)(pEVar6 + 8)) goto LAB_0011c820;
      goto LAB_0011c82d;
    }
LAB_0011c7a0:
    do {
      pEVar10 = pEVar8 + 0x10;
      pEVar5 = pEVar8;
      pEVar8 = *(Element **)pEVar10;
    } while (*(Element **)pEVar10 != pEVar9);
  }
  else {
    *(Element **)(pEVar6 + 8) = pEVar3;
    pEVar8 = *(Element **)(pEVar3 + 8);
    pEVar9 = *(Element **)(this + 8);
    pEVar10 = *(Element **)this;
    pEVar4 = pEVar6;
    pEVar7 = pEVar5;
    if (pEVar8 != pEVar9) goto LAB_0011c7a0;
LAB_0011c820:
    do {
      pEVar5 = *(Element **)(pEVar4 + 0x18);
      bVar11 = *(Element **)(pEVar5 + 8) == pEVar4;
      pEVar4 = pEVar5;
    } while (bVar11);
LAB_0011c82d:
    if (pEVar5 == pEVar10) {
      pEVar5 = (Element *)0x0;
    }
  }
  *(Element **)(pEVar3 + 0x20) = pEVar5;
  if (pEVar7 == *(Element **)(this + 8)) {
    pEVar8 = pEVar3;
    pEVar9 = pEVar6;
    if (pEVar3 == *(Element **)(pEVar6 + 0x10)) {
      do {
        pEVar6 = *(Element **)(pEVar9 + 0x18);
        bVar11 = *(Element **)(pEVar6 + 0x10) == pEVar9;
        pEVar8 = pEVar9;
        pEVar9 = pEVar6;
      } while (bVar11);
    }
    if (pEVar8 != *(Element **)this) goto LAB_0011c7d4;
    *(undefined8 *)(pEVar3 + 0x28) = 0;
    if (pEVar5 == (Element *)0x0) goto LAB_0011c7ee;
LAB_0011c7dd:
    *(Element **)(pEVar5 + 0x28) = pEVar3;
    pEVar6 = *(Element **)(pEVar3 + 0x28);
    if (pEVar6 == (Element *)0x0) goto LAB_0011c7ee;
  }
  else {
    do {
      pEVar6 = pEVar7;
      pEVar7 = *(Element **)(pEVar6 + 8);
    } while (*(Element **)(this + 8) != *(Element **)(pEVar6 + 8));
LAB_0011c7d4:
    *(Element **)(pEVar3 + 0x28) = pEVar6;
    if (pEVar5 != (Element *)0x0) goto LAB_0011c7dd;
  }
  *(Element **)(pEVar6 + 0x20) = pEVar3;
LAB_0011c7ee:
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  _insert_rb_fix(this,pEVar3);
LAB_0011c7ff:
  return pEVar3 + 0x38;
}



/* RBMap<void (*)(Variant*, Variant const**, int, Variant*), int, Comparator<void (*)(Variant*,
   Variant const**, int, Variant*)>, DefaultAllocator>::_insert_rb_fix(RBMap<void (*)(Variant*,
   Variant const**, int, Variant*), int, Comparator<void (*)(Variant*, Variant const**, int,
   Variant*)>, DefaultAllocator>::Element*) */

void __thiscall
RBMap<void(*)(Variant*,Variant_const**,int,Variant*),int,Comparator<void(*)(Variant*,Variant_const**,int,Variant*)>,DefaultAllocator>
::_insert_rb_fix(RBMap<void(*)(Variant*,Variant_const**,int,Variant*),int,Comparator<void(*)(Variant*,Variant_const**,int,Variant*)>,DefaultAllocator>
                 *this,Element *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  int iVar8;
  Element *pEVar9;
  Element *pEVar10;
  
  iVar8 = (int)param_1;
  uVar1 = *(uint *)*(Element **)(param_1 + 0x18);
  pEVar9 = (Element *)(ulong)uVar1;
  pEVar7 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar10 = pEVar7;
      if (uVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar5 = *(Element **)(pEVar10 + 0x18);
      pEVar6 = *(Element **)(pEVar5 + 0x10);
      pEVar7 = pEVar10;
      if (pEVar6 == pEVar10) break;
      if (*(uint *)pEVar6 == 0) goto LAB_0011c99d;
      if (*(Element **)(pEVar10 + 0x10) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 8);
        *(long *)(pEVar10 + 0x10) = lVar3;
        pEVar7 = pEVar5;
        if (lVar2 != lVar3) {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar7;
        if (pEVar10 == *(Element **)(pEVar7 + 8)) {
          *(Element **)(pEVar7 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011cac0;
LAB_0011c946:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011c946;
LAB_0011cac0:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 8);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar5 + 8) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
LAB_0011c983:
      uVar1 = *(uint *)pEVar7;
      param_1 = pEVar10;
    }
    pEVar6 = *(Element **)(pEVar5 + 8);
    if (*(uint *)pEVar6 != 0) {
      if (*(Element **)(pEVar10 + 8) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar10 + 8) = lVar3;
        if (lVar2 == lVar3) {
          *(Element **)(param_1 + 0x18) = pEVar5;
          pEVar7 = pEVar5;
LAB_0011cb52:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar10 == *(Element **)(pEVar7 + 0x10)) goto LAB_0011cb52;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011cb40;
LAB_0011ca10:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011ca10;
LAB_0011cb40:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 0x10);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 8);
      *(long *)(pEVar5 + 0x10) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
      goto LAB_0011c983;
    }
LAB_0011c99d:
    pEVar7 = *(Element **)(this + 8);
    *(uint *)pEVar10 = 1;
    *(uint *)pEVar6 = 1;
    if (pEVar5 == pEVar7) {
      RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
      ::_set_color(pEVar9,iVar8);
    }
    else {
      *(uint *)pEVar5 = 0;
    }
    uVar1 = *(uint *)*(Element **)(pEVar5 + 0x18);
    pEVar7 = *(Element **)(pEVar5 + 0x18);
    param_1 = pEVar5;
  } while( true );
}



/* RBMap<void (*)(Variant*, Variant const**, int, Variant*), int, Comparator<void (*)(Variant*,
   Variant const**, int, Variant*)>, DefaultAllocator>::operator[](void (* const&)(Variant*, Variant
   const**, int, Variant*)) */

Element * __thiscall
RBMap<void(*)(Variant*,Variant_const**,int,Variant*),int,Comparator<void(*)(Variant*,Variant_const**,int,Variant*)>,DefaultAllocator>
::operator[](RBMap<void(*)(Variant*,Variant_const**,int,Variant*),int,Comparator<void(*)(Variant*,Variant_const**,int,Variant*)>,DefaultAllocator>
             *this,_func_void_Variant_ptr_Variant_ptr_ptr_int_Variant_ptr *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  Element *pEVar9;
  Element *pEVar10;
  bool bVar11;
  
  pEVar6 = *(Element **)this;
  if (pEVar6 == (Element *)0x0) {
    pEVar6 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
    *(undefined1 (*) [16])(pEVar6 + 0x20) = (undefined1  [16])0x0;
    pEVar5 = *(Element **)(this + 8);
    *(undefined8 *)(pEVar6 + 0x30) = 0;
    *(undefined4 *)(pEVar6 + 0x38) = 0;
    *(Element **)this = pEVar6;
    *(Element **)(pEVar6 + 0x18) = pEVar5;
    *(undefined4 *)pEVar6 = 1;
    *(Element **)(pEVar6 + 8) = pEVar5;
    *(Element **)(pEVar6 + 0x10) = pEVar5;
  }
  else {
    pEVar5 = *(Element **)(pEVar6 + 0x10);
  }
  pEVar8 = *(Element **)(this + 8);
  uVar1 = *(ulong *)param_1;
  pEVar3 = pEVar5;
  if (pEVar8 != pEVar5) {
    do {
      if (uVar1 < *(ulong *)(pEVar3 + 0x30)) {
        pEVar3 = *(Element **)(pEVar3 + 0x10);
      }
      else {
        if (uVar1 <= *(ulong *)(pEVar3 + 0x30)) goto LAB_0011ccff;
        pEVar3 = *(Element **)(pEVar3 + 8);
      }
    } while (pEVar8 != pEVar3);
    do {
      pEVar6 = pEVar5;
      if (uVar1 < *(ulong *)(pEVar6 + 0x30)) {
        pEVar5 = *(Element **)(pEVar6 + 0x10);
      }
      else {
        if (uVar1 <= *(ulong *)(pEVar6 + 0x30)) {
          *(undefined4 *)(pEVar6 + 0x38) = 0;
          return pEVar6 + 0x38;
        }
        pEVar5 = *(Element **)(pEVar6 + 8);
      }
    } while (pEVar8 != pEVar5);
  }
  pEVar3 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
  uVar2 = *(undefined8 *)param_1;
  *(Element **)(pEVar3 + 0x18) = pEVar6;
  *(undefined1 (*) [16])(pEVar3 + 0x20) = (undefined1  [16])0x0;
  pEVar5 = *(Element **)(this + 8);
  *(undefined4 *)pEVar3 = 0;
  *(undefined8 *)(pEVar3 + 0x30) = uVar2;
  *(undefined4 *)(pEVar3 + 0x38) = 0;
  *(Element **)(pEVar3 + 8) = pEVar5;
  *(Element **)(pEVar3 + 0x10) = pEVar5;
  if ((pEVar6 == *(Element **)this) || (*(ulong *)param_1 < *(ulong *)(pEVar6 + 0x30))) {
    *(Element **)(pEVar6 + 0x10) = pEVar3;
    pEVar9 = *(Element **)(this + 8);
    pEVar7 = *(Element **)(pEVar3 + 0x10);
    pEVar10 = *(Element **)this;
    pEVar8 = pEVar5;
    if (pEVar5 == pEVar9) {
      pEVar5 = pEVar6;
      pEVar4 = pEVar6;
      if (pEVar3 == *(Element **)(pEVar6 + 8)) goto LAB_0011cd20;
      goto LAB_0011cd2d;
    }
LAB_0011cca0:
    do {
      pEVar10 = pEVar8 + 0x10;
      pEVar5 = pEVar8;
      pEVar8 = *(Element **)pEVar10;
    } while (*(Element **)pEVar10 != pEVar9);
  }
  else {
    *(Element **)(pEVar6 + 8) = pEVar3;
    pEVar8 = *(Element **)(pEVar3 + 8);
    pEVar9 = *(Element **)(this + 8);
    pEVar10 = *(Element **)this;
    pEVar4 = pEVar6;
    pEVar7 = pEVar5;
    if (pEVar8 != pEVar9) goto LAB_0011cca0;
LAB_0011cd20:
    do {
      pEVar5 = *(Element **)(pEVar4 + 0x18);
      bVar11 = *(Element **)(pEVar5 + 8) == pEVar4;
      pEVar4 = pEVar5;
    } while (bVar11);
LAB_0011cd2d:
    if (pEVar5 == pEVar10) {
      pEVar5 = (Element *)0x0;
    }
  }
  *(Element **)(pEVar3 + 0x20) = pEVar5;
  if (pEVar7 == *(Element **)(this + 8)) {
    pEVar8 = pEVar3;
    pEVar9 = pEVar6;
    if (pEVar3 == *(Element **)(pEVar6 + 0x10)) {
      do {
        pEVar6 = *(Element **)(pEVar9 + 0x18);
        bVar11 = *(Element **)(pEVar6 + 0x10) == pEVar9;
        pEVar8 = pEVar9;
        pEVar9 = pEVar6;
      } while (bVar11);
    }
    if (pEVar8 != *(Element **)this) goto LAB_0011ccd4;
    *(undefined8 *)(pEVar3 + 0x28) = 0;
    if (pEVar5 == (Element *)0x0) goto LAB_0011ccee;
LAB_0011ccdd:
    *(Element **)(pEVar5 + 0x28) = pEVar3;
    pEVar6 = *(Element **)(pEVar3 + 0x28);
    if (pEVar6 == (Element *)0x0) goto LAB_0011ccee;
  }
  else {
    do {
      pEVar6 = pEVar7;
      pEVar7 = *(Element **)(pEVar6 + 8);
    } while (*(Element **)(this + 8) != *(Element **)(pEVar6 + 8));
LAB_0011ccd4:
    *(Element **)(pEVar3 + 0x28) = pEVar6;
    if (pEVar5 != (Element *)0x0) goto LAB_0011ccdd;
  }
  *(Element **)(pEVar6 + 0x20) = pEVar3;
LAB_0011ccee:
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  _insert_rb_fix(this,pEVar3);
LAB_0011ccff:
  return pEVar3 + 0x38;
}



/* GDScriptByteCodeGenerator::get_builtin_method_pos(void (*)(Variant*, Variant const**, int,
   Variant*)) */

undefined4 __thiscall
GDScriptByteCodeGenerator::get_builtin_method_pos
          (GDScriptByteCodeGenerator *this,
          _func_void_Variant_ptr_Variant_ptr_ptr_int_Variant_ptr *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  _func_void_Variant_ptr_Variant_ptr_ptr_int_Variant_ptr *local_10;
  
  lVar2 = *(long *)(this + 0x240);
  local_10 = param_1;
  if (lVar2 != 0) {
    while (lVar2 = *(long *)(lVar2 + 0x10), *(long *)(this + 0x248) != lVar2) {
      while (*(_func_void_Variant_ptr_Variant_ptr_ptr_int_Variant_ptr **)(lVar2 + 0x30) <= param_1)
      {
        if (param_1 <= *(_func_void_Variant_ptr_Variant_ptr_ptr_int_Variant_ptr **)(lVar2 + 0x30)) {
          puVar3 = (undefined4 *)
                   RBMap<void(*)(Variant*,Variant_const**,int,Variant*),int,Comparator<void(*)(Variant*,Variant_const**,int,Variant*)>,DefaultAllocator>
                   ::operator[]((RBMap<void(*)(Variant*,Variant_const**,int,Variant*),int,Comparator<void(*)(Variant*,Variant_const**,int,Variant*)>,DefaultAllocator>
                                 *)(this + 0x240),
                                (_func_void_Variant_ptr_Variant_ptr_ptr_int_Variant_ptr *)&local_10)
          ;
          return *puVar3;
        }
        lVar2 = *(long *)(lVar2 + 8);
        if (*(long *)(this + 0x248) == lVar2) goto LAB_0011ce50;
      }
    }
  }
LAB_0011ce50:
  uVar1 = *(undefined4 *)(this + 0x250);
  puVar3 = (undefined4 *)
           RBMap<void(*)(Variant*,Variant_const**,int,Variant*),int,Comparator<void(*)(Variant*,Variant_const**,int,Variant*)>,DefaultAllocator>
           ::operator[]((RBMap<void(*)(Variant*,Variant_const**,int,Variant*),int,Comparator<void(*)(Variant*,Variant_const**,int,Variant*)>,DefaultAllocator>
                         *)(this + 0x240),
                        (_func_void_Variant_ptr_Variant_ptr_ptr_int_Variant_ptr *)&local_10);
  *puVar3 = uVar1;
  return uVar1;
}



/* RBMap<void (*)(Variant*, Variant const**), int, Comparator<void (*)(Variant*, Variant const**)>,
   DefaultAllocator>::_insert_rb_fix(RBMap<void (*)(Variant*, Variant const**), int, Comparator<void
   (*)(Variant*, Variant const**)>, DefaultAllocator>::Element*) */

void __thiscall
RBMap<void(*)(Variant*,Variant_const**),int,Comparator<void(*)(Variant*,Variant_const**)>,DefaultAllocator>
::_insert_rb_fix(RBMap<void(*)(Variant*,Variant_const**),int,Comparator<void(*)(Variant*,Variant_const**)>,DefaultAllocator>
                 *this,Element *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  int iVar8;
  Element *pEVar9;
  Element *pEVar10;
  
  iVar8 = (int)param_1;
  uVar1 = *(uint *)*(Element **)(param_1 + 0x18);
  pEVar9 = (Element *)(ulong)uVar1;
  pEVar7 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar10 = pEVar7;
      if (uVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar5 = *(Element **)(pEVar10 + 0x18);
      pEVar6 = *(Element **)(pEVar5 + 0x10);
      pEVar7 = pEVar10;
      if (pEVar6 == pEVar10) break;
      if (*(uint *)pEVar6 == 0) goto LAB_0011cf2d;
      if (*(Element **)(pEVar10 + 0x10) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 8);
        *(long *)(pEVar10 + 0x10) = lVar3;
        pEVar7 = pEVar5;
        if (lVar2 != lVar3) {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar7;
        if (pEVar10 == *(Element **)(pEVar7 + 8)) {
          *(Element **)(pEVar7 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011d050;
LAB_0011ced6:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011ced6;
LAB_0011d050:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 8);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar5 + 8) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
LAB_0011cf13:
      uVar1 = *(uint *)pEVar7;
      param_1 = pEVar10;
    }
    pEVar6 = *(Element **)(pEVar5 + 8);
    if (*(uint *)pEVar6 != 0) {
      if (*(Element **)(pEVar10 + 8) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar10 + 8) = lVar3;
        if (lVar2 == lVar3) {
          *(Element **)(param_1 + 0x18) = pEVar5;
          pEVar7 = pEVar5;
LAB_0011d0e2:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar10 == *(Element **)(pEVar7 + 0x10)) goto LAB_0011d0e2;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011d0d0;
LAB_0011cfa0:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011cfa0;
LAB_0011d0d0:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 0x10);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 8);
      *(long *)(pEVar5 + 0x10) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
      goto LAB_0011cf13;
    }
LAB_0011cf2d:
    pEVar7 = *(Element **)(this + 8);
    *(uint *)pEVar10 = 1;
    *(uint *)pEVar6 = 1;
    if (pEVar5 == pEVar7) {
      RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
      ::_set_color(pEVar9,iVar8);
    }
    else {
      *(uint *)pEVar5 = 0;
    }
    uVar1 = *(uint *)*(Element **)(pEVar5 + 0x18);
    pEVar7 = *(Element **)(pEVar5 + 0x18);
    param_1 = pEVar5;
  } while( true );
}



/* RBMap<void (*)(Variant*, Variant const**), int, Comparator<void (*)(Variant*, Variant const**)>,
   DefaultAllocator>::operator[](void (* const&)(Variant*, Variant const**)) */

Element * __thiscall
RBMap<void(*)(Variant*,Variant_const**),int,Comparator<void(*)(Variant*,Variant_const**)>,DefaultAllocator>
::operator[](RBMap<void(*)(Variant*,Variant_const**),int,Comparator<void(*)(Variant*,Variant_const**)>,DefaultAllocator>
             *this,_func_void_Variant_ptr_Variant_ptr_ptr *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  Element *pEVar9;
  Element *pEVar10;
  bool bVar11;
  
  pEVar6 = *(Element **)this;
  if (pEVar6 == (Element *)0x0) {
    pEVar6 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
    *(undefined1 (*) [16])(pEVar6 + 0x20) = (undefined1  [16])0x0;
    pEVar5 = *(Element **)(this + 8);
    *(undefined8 *)(pEVar6 + 0x30) = 0;
    *(undefined4 *)(pEVar6 + 0x38) = 0;
    *(Element **)this = pEVar6;
    *(Element **)(pEVar6 + 0x18) = pEVar5;
    *(undefined4 *)pEVar6 = 1;
    *(Element **)(pEVar6 + 8) = pEVar5;
    *(Element **)(pEVar6 + 0x10) = pEVar5;
  }
  else {
    pEVar5 = *(Element **)(pEVar6 + 0x10);
  }
  pEVar8 = *(Element **)(this + 8);
  uVar1 = *(ulong *)param_1;
  pEVar3 = pEVar5;
  if (pEVar8 != pEVar5) {
    do {
      if (uVar1 < *(ulong *)(pEVar3 + 0x30)) {
        pEVar3 = *(Element **)(pEVar3 + 0x10);
      }
      else {
        if (uVar1 <= *(ulong *)(pEVar3 + 0x30)) goto LAB_0011d28f;
        pEVar3 = *(Element **)(pEVar3 + 8);
      }
    } while (pEVar8 != pEVar3);
    do {
      pEVar6 = pEVar5;
      if (uVar1 < *(ulong *)(pEVar6 + 0x30)) {
        pEVar5 = *(Element **)(pEVar6 + 0x10);
      }
      else {
        if (uVar1 <= *(ulong *)(pEVar6 + 0x30)) {
          *(undefined4 *)(pEVar6 + 0x38) = 0;
          return pEVar6 + 0x38;
        }
        pEVar5 = *(Element **)(pEVar6 + 8);
      }
    } while (pEVar8 != pEVar5);
  }
  pEVar3 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
  uVar2 = *(undefined8 *)param_1;
  *(Element **)(pEVar3 + 0x18) = pEVar6;
  *(undefined1 (*) [16])(pEVar3 + 0x20) = (undefined1  [16])0x0;
  pEVar5 = *(Element **)(this + 8);
  *(undefined4 *)pEVar3 = 0;
  *(undefined8 *)(pEVar3 + 0x30) = uVar2;
  *(undefined4 *)(pEVar3 + 0x38) = 0;
  *(Element **)(pEVar3 + 8) = pEVar5;
  *(Element **)(pEVar3 + 0x10) = pEVar5;
  if ((pEVar6 == *(Element **)this) || (*(ulong *)param_1 < *(ulong *)(pEVar6 + 0x30))) {
    *(Element **)(pEVar6 + 0x10) = pEVar3;
    pEVar9 = *(Element **)(this + 8);
    pEVar7 = *(Element **)(pEVar3 + 0x10);
    pEVar10 = *(Element **)this;
    pEVar8 = pEVar5;
    if (pEVar5 == pEVar9) {
      pEVar5 = pEVar6;
      pEVar4 = pEVar6;
      if (pEVar3 == *(Element **)(pEVar6 + 8)) goto LAB_0011d2b0;
      goto LAB_0011d2bd;
    }
LAB_0011d230:
    do {
      pEVar10 = pEVar8 + 0x10;
      pEVar5 = pEVar8;
      pEVar8 = *(Element **)pEVar10;
    } while (*(Element **)pEVar10 != pEVar9);
  }
  else {
    *(Element **)(pEVar6 + 8) = pEVar3;
    pEVar8 = *(Element **)(pEVar3 + 8);
    pEVar9 = *(Element **)(this + 8);
    pEVar10 = *(Element **)this;
    pEVar4 = pEVar6;
    pEVar7 = pEVar5;
    if (pEVar8 != pEVar9) goto LAB_0011d230;
LAB_0011d2b0:
    do {
      pEVar5 = *(Element **)(pEVar4 + 0x18);
      bVar11 = *(Element **)(pEVar5 + 8) == pEVar4;
      pEVar4 = pEVar5;
    } while (bVar11);
LAB_0011d2bd:
    if (pEVar5 == pEVar10) {
      pEVar5 = (Element *)0x0;
    }
  }
  *(Element **)(pEVar3 + 0x20) = pEVar5;
  if (pEVar7 == *(Element **)(this + 8)) {
    pEVar8 = pEVar3;
    pEVar9 = pEVar6;
    if (pEVar3 == *(Element **)(pEVar6 + 0x10)) {
      do {
        pEVar6 = *(Element **)(pEVar9 + 0x18);
        bVar11 = *(Element **)(pEVar6 + 0x10) == pEVar9;
        pEVar8 = pEVar9;
        pEVar9 = pEVar6;
      } while (bVar11);
    }
    if (pEVar8 != *(Element **)this) goto LAB_0011d264;
    *(undefined8 *)(pEVar3 + 0x28) = 0;
    if (pEVar5 == (Element *)0x0) goto LAB_0011d27e;
LAB_0011d26d:
    *(Element **)(pEVar5 + 0x28) = pEVar3;
    pEVar6 = *(Element **)(pEVar3 + 0x28);
    if (pEVar6 == (Element *)0x0) goto LAB_0011d27e;
  }
  else {
    do {
      pEVar6 = pEVar7;
      pEVar7 = *(Element **)(pEVar6 + 8);
    } while (*(Element **)(this + 8) != *(Element **)(pEVar6 + 8));
LAB_0011d264:
    *(Element **)(pEVar3 + 0x28) = pEVar6;
    if (pEVar5 != (Element *)0x0) goto LAB_0011d26d;
  }
  *(Element **)(pEVar6 + 0x20) = pEVar3;
LAB_0011d27e:
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  _insert_rb_fix(this,pEVar3);
LAB_0011d28f:
  return pEVar3 + 0x38;
}



/* GDScriptByteCodeGenerator::get_constructor_pos(void (*)(Variant*, Variant const**)) */

undefined4 __thiscall
GDScriptByteCodeGenerator::get_constructor_pos
          (GDScriptByteCodeGenerator *this,_func_void_Variant_ptr_Variant_ptr_ptr *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  _func_void_Variant_ptr_Variant_ptr_ptr *local_10;
  
  lVar2 = *(long *)(this + 600);
  local_10 = param_1;
  if (lVar2 != 0) {
    while (lVar2 = *(long *)(lVar2 + 0x10), *(long *)(this + 0x260) != lVar2) {
      while (*(_func_void_Variant_ptr_Variant_ptr_ptr **)(lVar2 + 0x30) <= param_1) {
        if (param_1 <= *(_func_void_Variant_ptr_Variant_ptr_ptr **)(lVar2 + 0x30)) {
          puVar3 = (undefined4 *)
                   RBMap<void(*)(Variant*,Variant_const**),int,Comparator<void(*)(Variant*,Variant_const**)>,DefaultAllocator>
                   ::operator[]((RBMap<void(*)(Variant*,Variant_const**),int,Comparator<void(*)(Variant*,Variant_const**)>,DefaultAllocator>
                                 *)(this + 600),(_func_void_Variant_ptr_Variant_ptr_ptr *)&local_10)
          ;
          return *puVar3;
        }
        lVar2 = *(long *)(lVar2 + 8);
        if (*(long *)(this + 0x260) == lVar2) goto LAB_0011d3e0;
      }
    }
  }
LAB_0011d3e0:
  uVar1 = *(undefined4 *)(this + 0x268);
  puVar3 = (undefined4 *)
           RBMap<void(*)(Variant*,Variant_const**),int,Comparator<void(*)(Variant*,Variant_const**)>,DefaultAllocator>
           ::operator[]((RBMap<void(*)(Variant*,Variant_const**),int,Comparator<void(*)(Variant*,Variant_const**)>,DefaultAllocator>
                         *)(this + 600),(_func_void_Variant_ptr_Variant_ptr_ptr *)&local_10);
  *puVar3 = uVar1;
  return uVar1;
}



/* RBMap<void (*)(Variant*, Variant const**, int), int, Comparator<void (*)(Variant*, Variant
   const**, int)>, DefaultAllocator>::_insert_rb_fix(RBMap<void (*)(Variant*, Variant const**, int),
   int, Comparator<void (*)(Variant*, Variant const**, int)>, DefaultAllocator>::Element*) */

void __thiscall
RBMap<void(*)(Variant*,Variant_const**,int),int,Comparator<void(*)(Variant*,Variant_const**,int)>,DefaultAllocator>
::_insert_rb_fix(RBMap<void(*)(Variant*,Variant_const**,int),int,Comparator<void(*)(Variant*,Variant_const**,int)>,DefaultAllocator>
                 *this,Element *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  int iVar8;
  Element *pEVar9;
  Element *pEVar10;
  
  iVar8 = (int)param_1;
  uVar1 = *(uint *)*(Element **)(param_1 + 0x18);
  pEVar9 = (Element *)(ulong)uVar1;
  pEVar7 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar10 = pEVar7;
      if (uVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar5 = *(Element **)(pEVar10 + 0x18);
      pEVar6 = *(Element **)(pEVar5 + 0x10);
      pEVar7 = pEVar10;
      if (pEVar6 == pEVar10) break;
      if (*(uint *)pEVar6 == 0) goto LAB_0011d4bd;
      if (*(Element **)(pEVar10 + 0x10) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 8);
        *(long *)(pEVar10 + 0x10) = lVar3;
        pEVar7 = pEVar5;
        if (lVar2 != lVar3) {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar7;
        if (pEVar10 == *(Element **)(pEVar7 + 8)) {
          *(Element **)(pEVar7 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011d5e0;
LAB_0011d466:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011d466;
LAB_0011d5e0:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 8);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar5 + 8) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
LAB_0011d4a3:
      uVar1 = *(uint *)pEVar7;
      param_1 = pEVar10;
    }
    pEVar6 = *(Element **)(pEVar5 + 8);
    if (*(uint *)pEVar6 != 0) {
      if (*(Element **)(pEVar10 + 8) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar10 + 8) = lVar3;
        if (lVar2 == lVar3) {
          *(Element **)(param_1 + 0x18) = pEVar5;
          pEVar7 = pEVar5;
LAB_0011d672:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar10 == *(Element **)(pEVar7 + 0x10)) goto LAB_0011d672;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011d660;
LAB_0011d530:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011d530;
LAB_0011d660:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 0x10);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 8);
      *(long *)(pEVar5 + 0x10) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
      goto LAB_0011d4a3;
    }
LAB_0011d4bd:
    pEVar7 = *(Element **)(this + 8);
    *(uint *)pEVar10 = 1;
    *(uint *)pEVar6 = 1;
    if (pEVar5 == pEVar7) {
      RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
      ::_set_color(pEVar9,iVar8);
    }
    else {
      *(uint *)pEVar5 = 0;
    }
    uVar1 = *(uint *)*(Element **)(pEVar5 + 0x18);
    pEVar7 = *(Element **)(pEVar5 + 0x18);
    param_1 = pEVar5;
  } while( true );
}



/* RBMap<void (*)(Variant*, Variant const**, int), int, Comparator<void (*)(Variant*, Variant
   const**, int)>, DefaultAllocator>::operator[](void (* const&)(Variant*, Variant const**, int)) */

Element * __thiscall
RBMap<void(*)(Variant*,Variant_const**,int),int,Comparator<void(*)(Variant*,Variant_const**,int)>,DefaultAllocator>
::operator[](RBMap<void(*)(Variant*,Variant_const**,int),int,Comparator<void(*)(Variant*,Variant_const**,int)>,DefaultAllocator>
             *this,_func_void_Variant_ptr_Variant_ptr_ptr_int *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  Element *pEVar9;
  Element *pEVar10;
  bool bVar11;
  
  pEVar6 = *(Element **)this;
  if (pEVar6 == (Element *)0x0) {
    pEVar6 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
    *(undefined1 (*) [16])(pEVar6 + 0x20) = (undefined1  [16])0x0;
    pEVar5 = *(Element **)(this + 8);
    *(undefined8 *)(pEVar6 + 0x30) = 0;
    *(undefined4 *)(pEVar6 + 0x38) = 0;
    *(Element **)this = pEVar6;
    *(Element **)(pEVar6 + 0x18) = pEVar5;
    *(undefined4 *)pEVar6 = 1;
    *(Element **)(pEVar6 + 8) = pEVar5;
    *(Element **)(pEVar6 + 0x10) = pEVar5;
  }
  else {
    pEVar5 = *(Element **)(pEVar6 + 0x10);
  }
  pEVar8 = *(Element **)(this + 8);
  uVar1 = *(ulong *)param_1;
  pEVar3 = pEVar5;
  if (pEVar8 != pEVar5) {
    do {
      if (uVar1 < *(ulong *)(pEVar3 + 0x30)) {
        pEVar3 = *(Element **)(pEVar3 + 0x10);
      }
      else {
        if (uVar1 <= *(ulong *)(pEVar3 + 0x30)) goto LAB_0011d81f;
        pEVar3 = *(Element **)(pEVar3 + 8);
      }
    } while (pEVar8 != pEVar3);
    do {
      pEVar6 = pEVar5;
      if (uVar1 < *(ulong *)(pEVar6 + 0x30)) {
        pEVar5 = *(Element **)(pEVar6 + 0x10);
      }
      else {
        if (uVar1 <= *(ulong *)(pEVar6 + 0x30)) {
          *(undefined4 *)(pEVar6 + 0x38) = 0;
          return pEVar6 + 0x38;
        }
        pEVar5 = *(Element **)(pEVar6 + 8);
      }
    } while (pEVar8 != pEVar5);
  }
  pEVar3 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
  uVar2 = *(undefined8 *)param_1;
  *(Element **)(pEVar3 + 0x18) = pEVar6;
  *(undefined1 (*) [16])(pEVar3 + 0x20) = (undefined1  [16])0x0;
  pEVar5 = *(Element **)(this + 8);
  *(undefined4 *)pEVar3 = 0;
  *(undefined8 *)(pEVar3 + 0x30) = uVar2;
  *(undefined4 *)(pEVar3 + 0x38) = 0;
  *(Element **)(pEVar3 + 8) = pEVar5;
  *(Element **)(pEVar3 + 0x10) = pEVar5;
  if ((pEVar6 == *(Element **)this) || (*(ulong *)param_1 < *(ulong *)(pEVar6 + 0x30))) {
    *(Element **)(pEVar6 + 0x10) = pEVar3;
    pEVar9 = *(Element **)(this + 8);
    pEVar7 = *(Element **)(pEVar3 + 0x10);
    pEVar10 = *(Element **)this;
    pEVar8 = pEVar5;
    if (pEVar5 == pEVar9) {
      pEVar5 = pEVar6;
      pEVar4 = pEVar6;
      if (pEVar3 == *(Element **)(pEVar6 + 8)) goto LAB_0011d840;
      goto LAB_0011d84d;
    }
LAB_0011d7c0:
    do {
      pEVar10 = pEVar8 + 0x10;
      pEVar5 = pEVar8;
      pEVar8 = *(Element **)pEVar10;
    } while (*(Element **)pEVar10 != pEVar9);
  }
  else {
    *(Element **)(pEVar6 + 8) = pEVar3;
    pEVar8 = *(Element **)(pEVar3 + 8);
    pEVar9 = *(Element **)(this + 8);
    pEVar10 = *(Element **)this;
    pEVar4 = pEVar6;
    pEVar7 = pEVar5;
    if (pEVar8 != pEVar9) goto LAB_0011d7c0;
LAB_0011d840:
    do {
      pEVar5 = *(Element **)(pEVar4 + 0x18);
      bVar11 = *(Element **)(pEVar5 + 8) == pEVar4;
      pEVar4 = pEVar5;
    } while (bVar11);
LAB_0011d84d:
    if (pEVar5 == pEVar10) {
      pEVar5 = (Element *)0x0;
    }
  }
  *(Element **)(pEVar3 + 0x20) = pEVar5;
  if (pEVar7 == *(Element **)(this + 8)) {
    pEVar8 = pEVar3;
    pEVar9 = pEVar6;
    if (pEVar3 == *(Element **)(pEVar6 + 0x10)) {
      do {
        pEVar6 = *(Element **)(pEVar9 + 0x18);
        bVar11 = *(Element **)(pEVar6 + 0x10) == pEVar9;
        pEVar8 = pEVar9;
        pEVar9 = pEVar6;
      } while (bVar11);
    }
    if (pEVar8 != *(Element **)this) goto LAB_0011d7f4;
    *(undefined8 *)(pEVar3 + 0x28) = 0;
    if (pEVar5 == (Element *)0x0) goto LAB_0011d80e;
LAB_0011d7fd:
    *(Element **)(pEVar5 + 0x28) = pEVar3;
    pEVar6 = *(Element **)(pEVar3 + 0x28);
    if (pEVar6 == (Element *)0x0) goto LAB_0011d80e;
  }
  else {
    do {
      pEVar6 = pEVar7;
      pEVar7 = *(Element **)(pEVar6 + 8);
    } while (*(Element **)(this + 8) != *(Element **)(pEVar6 + 8));
LAB_0011d7f4:
    *(Element **)(pEVar3 + 0x28) = pEVar6;
    if (pEVar5 != (Element *)0x0) goto LAB_0011d7fd;
  }
  *(Element **)(pEVar6 + 0x20) = pEVar3;
LAB_0011d80e:
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  _insert_rb_fix(this,pEVar3);
LAB_0011d81f:
  return pEVar3 + 0x38;
}



/* GDScriptByteCodeGenerator::get_utility_pos(void (*)(Variant*, Variant const**, int)) */

undefined4 __thiscall
GDScriptByteCodeGenerator::get_utility_pos
          (GDScriptByteCodeGenerator *this,_func_void_Variant_ptr_Variant_ptr_ptr_int *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  _func_void_Variant_ptr_Variant_ptr_ptr_int *local_10;
  
  lVar2 = *(long *)(this + 0x270);
  local_10 = param_1;
  if (lVar2 != 0) {
    while (lVar2 = *(long *)(lVar2 + 0x10), *(long *)(this + 0x278) != lVar2) {
      while (*(_func_void_Variant_ptr_Variant_ptr_ptr_int **)(lVar2 + 0x30) <= param_1) {
        if (param_1 <= *(_func_void_Variant_ptr_Variant_ptr_ptr_int **)(lVar2 + 0x30)) {
          puVar3 = (undefined4 *)
                   RBMap<void(*)(Variant*,Variant_const**,int),int,Comparator<void(*)(Variant*,Variant_const**,int)>,DefaultAllocator>
                   ::operator[]((RBMap<void(*)(Variant*,Variant_const**,int),int,Comparator<void(*)(Variant*,Variant_const**,int)>,DefaultAllocator>
                                 *)(this + 0x270),
                                (_func_void_Variant_ptr_Variant_ptr_ptr_int *)&local_10);
          return *puVar3;
        }
        lVar2 = *(long *)(lVar2 + 8);
        if (*(long *)(this + 0x278) == lVar2) goto LAB_0011d970;
      }
    }
  }
LAB_0011d970:
  uVar1 = *(undefined4 *)(this + 0x280);
  puVar3 = (undefined4 *)
           RBMap<void(*)(Variant*,Variant_const**,int),int,Comparator<void(*)(Variant*,Variant_const**,int)>,DefaultAllocator>
           ::operator[]((RBMap<void(*)(Variant*,Variant_const**,int),int,Comparator<void(*)(Variant*,Variant_const**,int)>,DefaultAllocator>
                         *)(this + 0x270),(_func_void_Variant_ptr_Variant_ptr_ptr_int *)&local_10);
  *puVar3 = uVar1;
  return uVar1;
}



/* RBMap<void (*)(Variant*, Variant const**, int, Callable::CallError&), int, Comparator<void
   (*)(Variant*, Variant const**, int, Callable::CallError&)>,
   DefaultAllocator>::_insert_rb_fix(RBMap<void (*)(Variant*, Variant const**, int,
   Callable::CallError&), int, Comparator<void (*)(Variant*, Variant const**, int,
   Callable::CallError&)>, DefaultAllocator>::Element*) */

void __thiscall
RBMap<void(*)(Variant*,Variant_const**,int,Callable::CallError&),int,Comparator<void(*)(Variant*,Variant_const**,int,Callable::CallError&)>,DefaultAllocator>
::_insert_rb_fix(RBMap<void(*)(Variant*,Variant_const**,int,Callable::CallError&),int,Comparator<void(*)(Variant*,Variant_const**,int,Callable::CallError&)>,DefaultAllocator>
                 *this,Element *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  int iVar8;
  Element *pEVar9;
  Element *pEVar10;
  
  iVar8 = (int)param_1;
  uVar1 = *(uint *)*(Element **)(param_1 + 0x18);
  pEVar9 = (Element *)(ulong)uVar1;
  pEVar7 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar10 = pEVar7;
      if (uVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar5 = *(Element **)(pEVar10 + 0x18);
      pEVar6 = *(Element **)(pEVar5 + 0x10);
      pEVar7 = pEVar10;
      if (pEVar6 == pEVar10) break;
      if (*(uint *)pEVar6 == 0) goto LAB_0011da4d;
      if (*(Element **)(pEVar10 + 0x10) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 8);
        *(long *)(pEVar10 + 0x10) = lVar3;
        pEVar7 = pEVar5;
        if (lVar2 != lVar3) {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar7;
        if (pEVar10 == *(Element **)(pEVar7 + 8)) {
          *(Element **)(pEVar7 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011db70;
LAB_0011d9f6:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011d9f6;
LAB_0011db70:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 8);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar5 + 8) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
LAB_0011da33:
      uVar1 = *(uint *)pEVar7;
      param_1 = pEVar10;
    }
    pEVar6 = *(Element **)(pEVar5 + 8);
    if (*(uint *)pEVar6 != 0) {
      if (*(Element **)(pEVar10 + 8) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar10 + 8) = lVar3;
        if (lVar2 == lVar3) {
          *(Element **)(param_1 + 0x18) = pEVar5;
          pEVar7 = pEVar5;
LAB_0011dc02:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar10 == *(Element **)(pEVar7 + 0x10)) goto LAB_0011dc02;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011dbf0;
LAB_0011dac0:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011dac0;
LAB_0011dbf0:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 0x10);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 8);
      *(long *)(pEVar5 + 0x10) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
      goto LAB_0011da33;
    }
LAB_0011da4d:
    pEVar7 = *(Element **)(this + 8);
    *(uint *)pEVar10 = 1;
    *(uint *)pEVar6 = 1;
    if (pEVar5 == pEVar7) {
      RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
      ::_set_color(pEVar9,iVar8);
    }
    else {
      *(uint *)pEVar5 = 0;
    }
    uVar1 = *(uint *)*(Element **)(pEVar5 + 0x18);
    pEVar7 = *(Element **)(pEVar5 + 0x18);
    param_1 = pEVar5;
  } while( true );
}



/* RBMap<void (*)(Variant*, Variant const**, int, Callable::CallError&), int, Comparator<void
   (*)(Variant*, Variant const**, int, Callable::CallError&)>, DefaultAllocator>::operator[](void (*
   const&)(Variant*, Variant const**, int, Callable::CallError&)) */

Element * __thiscall
RBMap<void(*)(Variant*,Variant_const**,int,Callable::CallError&),int,Comparator<void(*)(Variant*,Variant_const**,int,Callable::CallError&)>,DefaultAllocator>
::operator[](RBMap<void(*)(Variant*,Variant_const**,int,Callable::CallError&),int,Comparator<void(*)(Variant*,Variant_const**,int,Callable::CallError&)>,DefaultAllocator>
             *this,_func_void_Variant_ptr_Variant_ptr_ptr_int_CallError_ptr *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  Element *pEVar9;
  Element *pEVar10;
  bool bVar11;
  
  pEVar6 = *(Element **)this;
  if (pEVar6 == (Element *)0x0) {
    pEVar6 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
    *(undefined1 (*) [16])(pEVar6 + 0x20) = (undefined1  [16])0x0;
    pEVar5 = *(Element **)(this + 8);
    *(undefined8 *)(pEVar6 + 0x30) = 0;
    *(undefined4 *)(pEVar6 + 0x38) = 0;
    *(Element **)this = pEVar6;
    *(Element **)(pEVar6 + 0x18) = pEVar5;
    *(undefined4 *)pEVar6 = 1;
    *(Element **)(pEVar6 + 8) = pEVar5;
    *(Element **)(pEVar6 + 0x10) = pEVar5;
  }
  else {
    pEVar5 = *(Element **)(pEVar6 + 0x10);
  }
  pEVar8 = *(Element **)(this + 8);
  uVar1 = *(ulong *)param_1;
  pEVar3 = pEVar5;
  if (pEVar8 != pEVar5) {
    do {
      if (uVar1 < *(ulong *)(pEVar3 + 0x30)) {
        pEVar3 = *(Element **)(pEVar3 + 0x10);
      }
      else {
        if (uVar1 <= *(ulong *)(pEVar3 + 0x30)) goto LAB_0011ddaf;
        pEVar3 = *(Element **)(pEVar3 + 8);
      }
    } while (pEVar8 != pEVar3);
    do {
      pEVar6 = pEVar5;
      if (uVar1 < *(ulong *)(pEVar6 + 0x30)) {
        pEVar5 = *(Element **)(pEVar6 + 0x10);
      }
      else {
        if (uVar1 <= *(ulong *)(pEVar6 + 0x30)) {
          *(undefined4 *)(pEVar6 + 0x38) = 0;
          return pEVar6 + 0x38;
        }
        pEVar5 = *(Element **)(pEVar6 + 8);
      }
    } while (pEVar8 != pEVar5);
  }
  pEVar3 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
  uVar2 = *(undefined8 *)param_1;
  *(Element **)(pEVar3 + 0x18) = pEVar6;
  *(undefined1 (*) [16])(pEVar3 + 0x20) = (undefined1  [16])0x0;
  pEVar5 = *(Element **)(this + 8);
  *(undefined4 *)pEVar3 = 0;
  *(undefined8 *)(pEVar3 + 0x30) = uVar2;
  *(undefined4 *)(pEVar3 + 0x38) = 0;
  *(Element **)(pEVar3 + 8) = pEVar5;
  *(Element **)(pEVar3 + 0x10) = pEVar5;
  if ((pEVar6 == *(Element **)this) || (*(ulong *)param_1 < *(ulong *)(pEVar6 + 0x30))) {
    *(Element **)(pEVar6 + 0x10) = pEVar3;
    pEVar9 = *(Element **)(this + 8);
    pEVar7 = *(Element **)(pEVar3 + 0x10);
    pEVar10 = *(Element **)this;
    pEVar8 = pEVar5;
    if (pEVar5 == pEVar9) {
      pEVar5 = pEVar6;
      pEVar4 = pEVar6;
      if (pEVar3 == *(Element **)(pEVar6 + 8)) goto LAB_0011ddd0;
      goto LAB_0011dddd;
    }
LAB_0011dd50:
    do {
      pEVar10 = pEVar8 + 0x10;
      pEVar5 = pEVar8;
      pEVar8 = *(Element **)pEVar10;
    } while (*(Element **)pEVar10 != pEVar9);
  }
  else {
    *(Element **)(pEVar6 + 8) = pEVar3;
    pEVar8 = *(Element **)(pEVar3 + 8);
    pEVar9 = *(Element **)(this + 8);
    pEVar10 = *(Element **)this;
    pEVar4 = pEVar6;
    pEVar7 = pEVar5;
    if (pEVar8 != pEVar9) goto LAB_0011dd50;
LAB_0011ddd0:
    do {
      pEVar5 = *(Element **)(pEVar4 + 0x18);
      bVar11 = *(Element **)(pEVar5 + 8) == pEVar4;
      pEVar4 = pEVar5;
    } while (bVar11);
LAB_0011dddd:
    if (pEVar5 == pEVar10) {
      pEVar5 = (Element *)0x0;
    }
  }
  *(Element **)(pEVar3 + 0x20) = pEVar5;
  if (pEVar7 == *(Element **)(this + 8)) {
    pEVar8 = pEVar3;
    pEVar9 = pEVar6;
    if (pEVar3 == *(Element **)(pEVar6 + 0x10)) {
      do {
        pEVar6 = *(Element **)(pEVar9 + 0x18);
        bVar11 = *(Element **)(pEVar6 + 0x10) == pEVar9;
        pEVar8 = pEVar9;
        pEVar9 = pEVar6;
      } while (bVar11);
    }
    if (pEVar8 != *(Element **)this) goto LAB_0011dd84;
    *(undefined8 *)(pEVar3 + 0x28) = 0;
    if (pEVar5 == (Element *)0x0) goto LAB_0011dd9e;
LAB_0011dd8d:
    *(Element **)(pEVar5 + 0x28) = pEVar3;
    pEVar6 = *(Element **)(pEVar3 + 0x28);
    if (pEVar6 == (Element *)0x0) goto LAB_0011dd9e;
  }
  else {
    do {
      pEVar6 = pEVar7;
      pEVar7 = *(Element **)(pEVar6 + 8);
    } while (*(Element **)(this + 8) != *(Element **)(pEVar6 + 8));
LAB_0011dd84:
    *(Element **)(pEVar3 + 0x28) = pEVar6;
    if (pEVar5 != (Element *)0x0) goto LAB_0011dd8d;
  }
  *(Element **)(pEVar6 + 0x20) = pEVar3;
LAB_0011dd9e:
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  _insert_rb_fix(this,pEVar3);
LAB_0011ddaf:
  return pEVar3 + 0x38;
}



/* RBMap<MethodBind*, int, Comparator<MethodBind*>,
   DefaultAllocator>::_insert_rb_fix(RBMap<MethodBind*, int, Comparator<MethodBind*>,
   DefaultAllocator>::Element*) */

void __thiscall
RBMap<MethodBind*,int,Comparator<MethodBind*>,DefaultAllocator>::_insert_rb_fix
          (RBMap<MethodBind*,int,Comparator<MethodBind*>,DefaultAllocator> *this,Element *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  int iVar8;
  Element *pEVar9;
  Element *pEVar10;
  
  iVar8 = (int)param_1;
  uVar1 = *(uint *)*(Element **)(param_1 + 0x18);
  pEVar9 = (Element *)(ulong)uVar1;
  pEVar7 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar10 = pEVar7;
      if (uVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar5 = *(Element **)(pEVar10 + 0x18);
      pEVar6 = *(Element **)(pEVar5 + 0x10);
      pEVar7 = pEVar10;
      if (pEVar6 == pEVar10) break;
      if (*(uint *)pEVar6 == 0) goto LAB_0011df4d;
      if (*(Element **)(pEVar10 + 0x10) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 8);
        *(long *)(pEVar10 + 0x10) = lVar3;
        pEVar7 = pEVar5;
        if (lVar2 != lVar3) {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar7;
        if (pEVar10 == *(Element **)(pEVar7 + 8)) {
          *(Element **)(pEVar7 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011e070;
LAB_0011def6:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011def6;
LAB_0011e070:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 8);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar5 + 8) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
LAB_0011df33:
      uVar1 = *(uint *)pEVar7;
      param_1 = pEVar10;
    }
    pEVar6 = *(Element **)(pEVar5 + 8);
    if (*(uint *)pEVar6 != 0) {
      if (*(Element **)(pEVar10 + 8) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar10 + 8) = lVar3;
        if (lVar2 == lVar3) {
          *(Element **)(param_1 + 0x18) = pEVar5;
          pEVar7 = pEVar5;
LAB_0011e102:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar10 == *(Element **)(pEVar7 + 0x10)) goto LAB_0011e102;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011e0f0;
LAB_0011dfc0:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011dfc0;
LAB_0011e0f0:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 0x10);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 8);
      *(long *)(pEVar5 + 0x10) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
      goto LAB_0011df33;
    }
LAB_0011df4d:
    pEVar7 = *(Element **)(this + 8);
    *(uint *)pEVar10 = 1;
    *(uint *)pEVar6 = 1;
    if (pEVar5 == pEVar7) {
      RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
      ::_set_color(pEVar9,iVar8);
    }
    else {
      *(uint *)pEVar5 = 0;
    }
    uVar1 = *(uint *)*(Element **)(pEVar5 + 0x18);
    pEVar7 = *(Element **)(pEVar5 + 0x18);
    param_1 = pEVar5;
  } while( true );
}



/* RBMap<MethodBind*, int, Comparator<MethodBind*>, DefaultAllocator>::operator[](MethodBind*
   const&) */

Element * __thiscall
RBMap<MethodBind*,int,Comparator<MethodBind*>,DefaultAllocator>::operator[]
          (RBMap<MethodBind*,int,Comparator<MethodBind*>,DefaultAllocator> *this,
          MethodBind **param_1)

{
  MethodBind *pMVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  Element *pEVar9;
  bool bVar10;
  
  pEVar5 = *(Element **)this;
  if (pEVar5 == (Element *)0x0) {
    pEVar5 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
    *(undefined1 (*) [16])(pEVar5 + 0x20) = (undefined1  [16])0x0;
    pEVar4 = *(Element **)(this + 8);
    *(undefined8 *)(pEVar5 + 0x30) = 0;
    *(undefined4 *)(pEVar5 + 0x38) = 0;
    *(Element **)this = pEVar5;
    *(Element **)(pEVar5 + 0x18) = pEVar4;
    *(undefined4 *)pEVar5 = 1;
    *(Element **)(pEVar5 + 8) = pEVar4;
    *(Element **)(pEVar5 + 0x10) = pEVar4;
  }
  else {
    pEVar4 = *(Element **)(pEVar5 + 0x10);
  }
  pEVar7 = *(Element **)(this + 8);
  pMVar1 = *param_1;
  pEVar2 = pEVar4;
  if (pEVar7 != pEVar4) {
    do {
      if (pMVar1 < *(MethodBind **)(pEVar2 + 0x30)) {
        pEVar2 = *(Element **)(pEVar2 + 0x10);
      }
      else {
        if (pMVar1 <= *(MethodBind **)(pEVar2 + 0x30)) goto LAB_0011e2af;
        pEVar2 = *(Element **)(pEVar2 + 8);
      }
    } while (pEVar7 != pEVar2);
    do {
      pEVar5 = pEVar4;
      if (pMVar1 < *(MethodBind **)(pEVar5 + 0x30)) {
        pEVar4 = *(Element **)(pEVar5 + 0x10);
      }
      else {
        if (pMVar1 <= *(MethodBind **)(pEVar5 + 0x30)) {
          *(undefined4 *)(pEVar5 + 0x38) = 0;
          return pEVar5 + 0x38;
        }
        pEVar4 = *(Element **)(pEVar5 + 8);
      }
    } while (pEVar7 != pEVar4);
  }
  pEVar2 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
  pMVar1 = *param_1;
  *(Element **)(pEVar2 + 0x18) = pEVar5;
  *(undefined1 (*) [16])(pEVar2 + 0x20) = (undefined1  [16])0x0;
  pEVar4 = *(Element **)(this + 8);
  *(undefined4 *)pEVar2 = 0;
  *(MethodBind **)(pEVar2 + 0x30) = pMVar1;
  *(undefined4 *)(pEVar2 + 0x38) = 0;
  *(Element **)(pEVar2 + 8) = pEVar4;
  *(Element **)(pEVar2 + 0x10) = pEVar4;
  if ((pEVar5 == *(Element **)this) || (*param_1 < *(MethodBind **)(pEVar5 + 0x30))) {
    *(Element **)(pEVar5 + 0x10) = pEVar2;
    pEVar8 = *(Element **)(this + 8);
    pEVar6 = *(Element **)(pEVar2 + 0x10);
    pEVar9 = *(Element **)this;
    pEVar7 = pEVar4;
    if (pEVar4 == pEVar8) {
      pEVar4 = pEVar5;
      pEVar3 = pEVar5;
      if (pEVar2 == *(Element **)(pEVar5 + 8)) goto LAB_0011e2d0;
      goto LAB_0011e2dd;
    }
LAB_0011e250:
    do {
      pEVar9 = pEVar7 + 0x10;
      pEVar4 = pEVar7;
      pEVar7 = *(Element **)pEVar9;
    } while (*(Element **)pEVar9 != pEVar8);
  }
  else {
    *(Element **)(pEVar5 + 8) = pEVar2;
    pEVar7 = *(Element **)(pEVar2 + 8);
    pEVar8 = *(Element **)(this + 8);
    pEVar9 = *(Element **)this;
    pEVar3 = pEVar5;
    pEVar6 = pEVar4;
    if (pEVar7 != pEVar8) goto LAB_0011e250;
LAB_0011e2d0:
    do {
      pEVar4 = *(Element **)(pEVar3 + 0x18);
      bVar10 = *(Element **)(pEVar4 + 8) == pEVar3;
      pEVar3 = pEVar4;
    } while (bVar10);
LAB_0011e2dd:
    if (pEVar4 == pEVar9) {
      pEVar4 = (Element *)0x0;
    }
  }
  *(Element **)(pEVar2 + 0x20) = pEVar4;
  if (pEVar6 == *(Element **)(this + 8)) {
    pEVar7 = pEVar2;
    pEVar8 = pEVar5;
    if (pEVar2 == *(Element **)(pEVar5 + 0x10)) {
      do {
        pEVar5 = *(Element **)(pEVar8 + 0x18);
        bVar10 = *(Element **)(pEVar5 + 0x10) == pEVar8;
        pEVar7 = pEVar8;
        pEVar8 = pEVar5;
      } while (bVar10);
    }
    if (pEVar7 != *(Element **)this) goto LAB_0011e284;
    *(undefined8 *)(pEVar2 + 0x28) = 0;
    if (pEVar4 == (Element *)0x0) goto LAB_0011e29e;
LAB_0011e28d:
    *(Element **)(pEVar4 + 0x28) = pEVar2;
    pEVar5 = *(Element **)(pEVar2 + 0x28);
    if (pEVar5 == (Element *)0x0) goto LAB_0011e29e;
  }
  else {
    do {
      pEVar5 = pEVar6;
      pEVar6 = *(Element **)(pEVar5 + 8);
    } while (*(Element **)(this + 8) != *(Element **)(pEVar5 + 8));
LAB_0011e284:
    *(Element **)(pEVar2 + 0x28) = pEVar5;
    if (pEVar4 != (Element *)0x0) goto LAB_0011e28d;
  }
  *(Element **)(pEVar5 + 0x20) = pEVar2;
LAB_0011e29e:
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  _insert_rb_fix(this,pEVar2);
LAB_0011e2af:
  return pEVar2 + 0x38;
}



/* RBMap<GDScriptFunction*, int, Comparator<GDScriptFunction*>,
   DefaultAllocator>::_insert_rb_fix(RBMap<GDScriptFunction*, int, Comparator<GDScriptFunction*>,
   DefaultAllocator>::Element*) */

void __thiscall
RBMap<GDScriptFunction*,int,Comparator<GDScriptFunction*>,DefaultAllocator>::_insert_rb_fix
          (RBMap<GDScriptFunction*,int,Comparator<GDScriptFunction*>,DefaultAllocator> *this,
          Element *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  int iVar8;
  Element *pEVar9;
  Element *pEVar10;
  
  iVar8 = (int)param_1;
  uVar1 = *(uint *)*(Element **)(param_1 + 0x18);
  pEVar9 = (Element *)(ulong)uVar1;
  pEVar7 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar10 = pEVar7;
      if (uVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar5 = *(Element **)(pEVar10 + 0x18);
      pEVar6 = *(Element **)(pEVar5 + 0x10);
      pEVar7 = pEVar10;
      if (pEVar6 == pEVar10) break;
      if (*(uint *)pEVar6 == 0) goto LAB_0011e44d;
      if (*(Element **)(pEVar10 + 0x10) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 8);
        *(long *)(pEVar10 + 0x10) = lVar3;
        pEVar7 = pEVar5;
        if (lVar2 != lVar3) {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar7;
        if (pEVar10 == *(Element **)(pEVar7 + 8)) {
          *(Element **)(pEVar7 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011e570;
LAB_0011e3f6:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011e3f6;
LAB_0011e570:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 8);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar5 + 8) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
LAB_0011e433:
      uVar1 = *(uint *)pEVar7;
      param_1 = pEVar10;
    }
    pEVar6 = *(Element **)(pEVar5 + 8);
    if (*(uint *)pEVar6 != 0) {
      if (*(Element **)(pEVar10 + 8) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar10 + 8) = lVar3;
        if (lVar2 == lVar3) {
          *(Element **)(param_1 + 0x18) = pEVar5;
          pEVar7 = pEVar5;
LAB_0011e602:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar10 == *(Element **)(pEVar7 + 0x10)) goto LAB_0011e602;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011e5f0;
LAB_0011e4c0:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011e4c0;
LAB_0011e5f0:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 0x10);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 8);
      *(long *)(pEVar5 + 0x10) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
      goto LAB_0011e433;
    }
LAB_0011e44d:
    pEVar7 = *(Element **)(this + 8);
    *(uint *)pEVar10 = 1;
    *(uint *)pEVar6 = 1;
    if (pEVar5 == pEVar7) {
      RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
      ::_set_color(pEVar9,iVar8);
    }
    else {
      *(uint *)pEVar5 = 0;
    }
    uVar1 = *(uint *)*(Element **)(pEVar5 + 0x18);
    pEVar7 = *(Element **)(pEVar5 + 0x18);
    param_1 = pEVar5;
  } while( true );
}



/* RBMap<GDScriptFunction*, int, Comparator<GDScriptFunction*>,
   DefaultAllocator>::operator[](GDScriptFunction* const&) */

Element * __thiscall
RBMap<GDScriptFunction*,int,Comparator<GDScriptFunction*>,DefaultAllocator>::operator[]
          (RBMap<GDScriptFunction*,int,Comparator<GDScriptFunction*>,DefaultAllocator> *this,
          GDScriptFunction **param_1)

{
  GDScriptFunction *pGVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  Element *pEVar9;
  bool bVar10;
  
  pEVar5 = *(Element **)this;
  if (pEVar5 == (Element *)0x0) {
    pEVar5 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
    *(undefined1 (*) [16])(pEVar5 + 0x20) = (undefined1  [16])0x0;
    pEVar4 = *(Element **)(this + 8);
    *(undefined8 *)(pEVar5 + 0x30) = 0;
    *(undefined4 *)(pEVar5 + 0x38) = 0;
    *(Element **)this = pEVar5;
    *(Element **)(pEVar5 + 0x18) = pEVar4;
    *(undefined4 *)pEVar5 = 1;
    *(Element **)(pEVar5 + 8) = pEVar4;
    *(Element **)(pEVar5 + 0x10) = pEVar4;
  }
  else {
    pEVar4 = *(Element **)(pEVar5 + 0x10);
  }
  pEVar7 = *(Element **)(this + 8);
  pGVar1 = *param_1;
  pEVar2 = pEVar4;
  if (pEVar7 != pEVar4) {
    do {
      if (pGVar1 < *(GDScriptFunction **)(pEVar2 + 0x30)) {
        pEVar2 = *(Element **)(pEVar2 + 0x10);
      }
      else {
        if (pGVar1 <= *(GDScriptFunction **)(pEVar2 + 0x30)) goto LAB_0011e7af;
        pEVar2 = *(Element **)(pEVar2 + 8);
      }
    } while (pEVar7 != pEVar2);
    do {
      pEVar5 = pEVar4;
      if (pGVar1 < *(GDScriptFunction **)(pEVar5 + 0x30)) {
        pEVar4 = *(Element **)(pEVar5 + 0x10);
      }
      else {
        if (pGVar1 <= *(GDScriptFunction **)(pEVar5 + 0x30)) {
          *(undefined4 *)(pEVar5 + 0x38) = 0;
          return pEVar5 + 0x38;
        }
        pEVar4 = *(Element **)(pEVar5 + 8);
      }
    } while (pEVar7 != pEVar4);
  }
  pEVar2 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
  pGVar1 = *param_1;
  *(Element **)(pEVar2 + 0x18) = pEVar5;
  *(undefined1 (*) [16])(pEVar2 + 0x20) = (undefined1  [16])0x0;
  pEVar4 = *(Element **)(this + 8);
  *(undefined4 *)pEVar2 = 0;
  *(GDScriptFunction **)(pEVar2 + 0x30) = pGVar1;
  *(undefined4 *)(pEVar2 + 0x38) = 0;
  *(Element **)(pEVar2 + 8) = pEVar4;
  *(Element **)(pEVar2 + 0x10) = pEVar4;
  if ((pEVar5 == *(Element **)this) || (*param_1 < *(GDScriptFunction **)(pEVar5 + 0x30))) {
    *(Element **)(pEVar5 + 0x10) = pEVar2;
    pEVar8 = *(Element **)(this + 8);
    pEVar6 = *(Element **)(pEVar2 + 0x10);
    pEVar9 = *(Element **)this;
    pEVar7 = pEVar4;
    if (pEVar4 == pEVar8) {
      pEVar4 = pEVar5;
      pEVar3 = pEVar5;
      if (pEVar2 == *(Element **)(pEVar5 + 8)) goto LAB_0011e7d0;
      goto LAB_0011e7dd;
    }
LAB_0011e750:
    do {
      pEVar9 = pEVar7 + 0x10;
      pEVar4 = pEVar7;
      pEVar7 = *(Element **)pEVar9;
    } while (*(Element **)pEVar9 != pEVar8);
  }
  else {
    *(Element **)(pEVar5 + 8) = pEVar2;
    pEVar7 = *(Element **)(pEVar2 + 8);
    pEVar8 = *(Element **)(this + 8);
    pEVar9 = *(Element **)this;
    pEVar3 = pEVar5;
    pEVar6 = pEVar4;
    if (pEVar7 != pEVar8) goto LAB_0011e750;
LAB_0011e7d0:
    do {
      pEVar4 = *(Element **)(pEVar3 + 0x18);
      bVar10 = *(Element **)(pEVar4 + 8) == pEVar3;
      pEVar3 = pEVar4;
    } while (bVar10);
LAB_0011e7dd:
    if (pEVar4 == pEVar9) {
      pEVar4 = (Element *)0x0;
    }
  }
  *(Element **)(pEVar2 + 0x20) = pEVar4;
  if (pEVar6 == *(Element **)(this + 8)) {
    pEVar7 = pEVar2;
    pEVar8 = pEVar5;
    if (pEVar2 == *(Element **)(pEVar5 + 0x10)) {
      do {
        pEVar5 = *(Element **)(pEVar8 + 0x18);
        bVar10 = *(Element **)(pEVar5 + 0x10) == pEVar8;
        pEVar7 = pEVar8;
        pEVar8 = pEVar5;
      } while (bVar10);
    }
    if (pEVar7 != *(Element **)this) goto LAB_0011e784;
    *(undefined8 *)(pEVar2 + 0x28) = 0;
    if (pEVar4 == (Element *)0x0) goto LAB_0011e79e;
LAB_0011e78d:
    *(Element **)(pEVar4 + 0x28) = pEVar2;
    pEVar5 = *(Element **)(pEVar2 + 0x28);
    if (pEVar5 == (Element *)0x0) goto LAB_0011e79e;
  }
  else {
    do {
      pEVar5 = pEVar6;
      pEVar6 = *(Element **)(pEVar5 + 8);
    } while (*(Element **)(this + 8) != *(Element **)(pEVar5 + 8));
LAB_0011e784:
    *(Element **)(pEVar2 + 0x28) = pEVar5;
    if (pEVar4 != (Element *)0x0) goto LAB_0011e78d;
  }
  *(Element **)(pEVar5 + 0x20) = pEVar2;
LAB_0011e79e:
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  _insert_rb_fix(this,pEVar2);
LAB_0011e7af:
  return pEVar2 + 0x38;
}



/* RBMap<Variant::Type, List<int, DefaultAllocator>, Comparator<Variant::Type>,
   DefaultAllocator>::_insert_rb_fix(RBMap<Variant::Type, List<int, DefaultAllocator>,
   Comparator<Variant::Type>, DefaultAllocator>::Element*) */

void __thiscall
RBMap<Variant::Type,List<int,DefaultAllocator>,Comparator<Variant::Type>,DefaultAllocator>::
_insert_rb_fix(RBMap<Variant::Type,List<int,DefaultAllocator>,Comparator<Variant::Type>,DefaultAllocator>
               *this,Element *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  int iVar8;
  Element *pEVar9;
  Element *pEVar10;
  
  iVar8 = (int)param_1;
  uVar1 = *(uint *)*(Element **)(param_1 + 0x18);
  pEVar9 = (Element *)(ulong)uVar1;
  pEVar7 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar10 = pEVar7;
      if (uVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar5 = *(Element **)(pEVar10 + 0x18);
      pEVar6 = *(Element **)(pEVar5 + 0x10);
      pEVar7 = pEVar10;
      if (pEVar6 == pEVar10) break;
      if (*(uint *)pEVar6 == 0) goto LAB_0011e94d;
      if (*(Element **)(pEVar10 + 0x10) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 8);
        *(long *)(pEVar10 + 0x10) = lVar3;
        pEVar7 = pEVar5;
        if (lVar2 != lVar3) {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar7;
        if (pEVar10 == *(Element **)(pEVar7 + 8)) {
          *(Element **)(pEVar7 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011ea70;
LAB_0011e8f6:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011e8f6;
LAB_0011ea70:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 8);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar5 + 8) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
LAB_0011e933:
      uVar1 = *(uint *)pEVar7;
      param_1 = pEVar10;
    }
    pEVar6 = *(Element **)(pEVar5 + 8);
    if (*(uint *)pEVar6 != 0) {
      if (*(Element **)(pEVar10 + 8) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar10 + 8) = lVar3;
        if (lVar2 == lVar3) {
          *(Element **)(param_1 + 0x18) = pEVar5;
          pEVar7 = pEVar5;
LAB_0011eb02:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar10;
          pEVar7 = *(Element **)(pEVar10 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar10 == *(Element **)(pEVar7 + 0x10)) goto LAB_0011eb02;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar10;
        *(Element **)(pEVar10 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(uint *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011eaf0;
LAB_0011e9c0:
        *(uint *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(uint *)pEVar10 = 1;
        pEVar10 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011e9c0;
LAB_0011eaf0:
        RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
        ::_set_color(pEVar9,iVar8);
      }
      lVar2 = *(long *)(pEVar5 + 0x10);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 8);
      *(long *)(pEVar5 + 0x10) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
      goto LAB_0011e933;
    }
LAB_0011e94d:
    pEVar7 = *(Element **)(this + 8);
    *(uint *)pEVar10 = 1;
    *(uint *)pEVar6 = 1;
    if (pEVar5 == pEVar7) {
      RBMap<void(*)(Variant_const*,Variant_const*,Variant*),int,Comparator<void(*)(Variant_const*,Variant_const*,Variant*)>,DefaultAllocator>
      ::_set_color(pEVar9,iVar8);
    }
    else {
      *(uint *)pEVar5 = 0;
    }
    uVar1 = *(uint *)*(Element **)(pEVar5 + 0x18);
    pEVar7 = *(Element **)(pEVar5 + 0x18);
    param_1 = pEVar5;
  } while( true );
}



/* RBMap<Variant::Type, List<int, DefaultAllocator>, Comparator<Variant::Type>,
   DefaultAllocator>::_insert(Variant::Type const&, List<int, DefaultAllocator> const&) */

Element * __thiscall
RBMap<Variant::Type,List<int,DefaultAllocator>,Comparator<Variant::Type>,DefaultAllocator>::_insert
          (RBMap<Variant::Type,List<int,DefaultAllocator>,Comparator<Variant::Type>,DefaultAllocator>
           *this,Type *param_1,List *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  Element *pEVar9;
  Element *pEVar10;
  int *piVar11;
  long in_FS_OFFSET;
  bool bVar12;
  Element *local_60;
  undefined8 *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pEVar10 = *(Element **)this;
  if (*(Element **)(pEVar10 + 0x10) != *(Element **)(this + 8)) {
    pEVar7 = *(Element **)(pEVar10 + 0x10);
    do {
      pEVar3 = pEVar7;
      if (*(int *)param_1 < *(int *)(pEVar3 + 0x30)) {
        pEVar7 = *(Element **)(pEVar3 + 0x10);
      }
      else {
        if (*(int *)param_1 <= *(int *)(pEVar3 + 0x30)) {
          puVar2 = *(undefined8 **)(pEVar3 + 0x38);
          while ((puVar2 != (undefined8 *)0x0 && ((Element *)*puVar2 != (Element *)0x0))) {
            List<int,DefaultAllocator>::erase
                      ((List<int,DefaultAllocator> *)(pEVar3 + 0x38),(Element *)*puVar2);
            puVar2 = *(undefined8 **)(pEVar3 + 0x38);
          }
          if (*(undefined8 **)param_2 != (undefined8 *)0x0) {
            for (piVar11 = (int *)**(undefined8 **)param_2; piVar11 != (int *)0x0;
                piVar11 = *(int **)(piVar11 + 2)) {
              List<int,DefaultAllocator>::push_back
                        ((List<int,DefaultAllocator> *)(pEVar3 + 0x38),piVar11);
            }
          }
          goto LAB_0011ecfd;
        }
        pEVar7 = *(Element **)(pEVar3 + 8);
      }
      pEVar10 = pEVar3;
    } while (pEVar7 != *(Element **)(this + 8));
  }
  pEVar3 = (Element *)operator_new(0x40,DefaultAllocator::alloc);
  local_50[0] = (undefined8 *)0x0;
  uVar1 = *(undefined4 *)param_1;
  if (*(long **)param_2 == (long *)0x0) {
LAB_0011ee31:
    *(undefined4 *)(pEVar3 + 0x30) = uVar1;
    *(undefined4 *)pEVar3 = 0;
    *(undefined8 *)(pEVar3 + 0x28) = 0;
    *(undefined8 *)(pEVar3 + 0x38) = 0;
    *(undefined1 (*) [16])(pEVar3 + 8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pEVar3 + 0x18) = (undefined1  [16])0x0;
  }
  else {
    piVar11 = (int *)**(long **)param_2;
    if (piVar11 == (int *)0x0) goto LAB_0011ee31;
    do {
      List<int,DefaultAllocator>::push_back((List<int,DefaultAllocator> *)local_50,piVar11);
      piVar11 = *(int **)(piVar11 + 2);
    } while (piVar11 != (int *)0x0);
    *(undefined4 *)(pEVar3 + 0x30) = uVar1;
    *(undefined4 *)pEVar3 = 0;
    *(undefined8 *)(pEVar3 + 0x28) = 0;
    *(undefined8 *)(pEVar3 + 0x38) = 0;
    *(undefined1 (*) [16])(pEVar3 + 8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pEVar3 + 0x18) = (undefined1  [16])0x0;
    if (local_50[0] != (undefined8 *)0x0) {
      for (piVar11 = (int *)*local_50[0]; piVar11 != (int *)0x0; piVar11 = *(int **)(piVar11 + 2)) {
        List<int,DefaultAllocator>::push_back((List<int,DefaultAllocator> *)(pEVar3 + 0x38),piVar11)
        ;
      }
    }
  }
  local_60 = pEVar3 + 8;
  List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)local_50);
  *(Element **)(pEVar3 + 0x18) = pEVar10;
  pEVar7 = *(Element **)(this + 8);
  *(Element **)local_60 = pEVar7;
  *(Element **)(pEVar3 + 0x10) = pEVar7;
  if ((*(Element **)this == pEVar10) || (*(int *)param_1 < *(int *)(pEVar10 + 0x30))) {
    *(Element **)(pEVar10 + 0x10) = pEVar3;
    pEVar8 = *(Element **)(this + 8);
    pEVar5 = *(Element **)(pEVar3 + 0x10);
    pEVar9 = *(Element **)this;
    bVar12 = pEVar8 != pEVar7;
    pEVar6 = pEVar7;
    pEVar7 = pEVar5;
    if (bVar12) goto LAB_0011eca0;
    pEVar5 = pEVar10;
    pEVar4 = pEVar10;
    if (pEVar3 == *(Element **)(pEVar10 + 8)) goto LAB_0011ed60;
LAB_0011ed6d:
    if (pEVar5 == pEVar9) {
      pEVar5 = (Element *)0x0;
    }
  }
  else {
    *(Element **)(pEVar10 + 8) = pEVar3;
    pEVar6 = *(Element **)(pEVar3 + 8);
    pEVar8 = *(Element **)(this + 8);
    pEVar9 = *(Element **)this;
    pEVar4 = pEVar10;
    if (pEVar6 == pEVar8) {
LAB_0011ed60:
      do {
        pEVar5 = *(Element **)(pEVar4 + 0x18);
        bVar12 = *(Element **)(pEVar5 + 8) == pEVar4;
        pEVar4 = pEVar5;
      } while (bVar12);
      goto LAB_0011ed6d;
    }
LAB_0011eca0:
    do {
      pEVar9 = pEVar6 + 0x10;
      pEVar5 = pEVar6;
      pEVar6 = *(Element **)pEVar9;
    } while (*(Element **)pEVar9 != pEVar8);
  }
  *(Element **)(pEVar3 + 0x20) = pEVar5;
  if (*(Element **)(this + 8) == pEVar7) {
    pEVar7 = pEVar3;
    pEVar8 = pEVar10;
    if (pEVar3 == *(Element **)(pEVar10 + 0x10)) {
      do {
        pEVar10 = *(Element **)(pEVar8 + 0x18);
        bVar12 = pEVar8 == *(Element **)(pEVar10 + 0x10);
        pEVar7 = pEVar8;
        pEVar8 = pEVar10;
      } while (bVar12);
    }
    if (pEVar7 != *(Element **)this) goto LAB_0011ecd4;
    *(undefined8 *)(pEVar3 + 0x28) = 0;
    if (pEVar5 == (Element *)0x0) goto LAB_0011ecee;
LAB_0011ecdd:
    *(Element **)(pEVar5 + 0x28) = pEVar3;
    pEVar10 = *(Element **)(pEVar3 + 0x28);
    if (pEVar10 == (Element *)0x0) goto LAB_0011ecee;
  }
  else {
    do {
      pEVar10 = pEVar7;
      pEVar7 = *(Element **)(pEVar10 + 8);
    } while (*(Element **)(this + 8) != *(Element **)(pEVar10 + 8));
LAB_0011ecd4:
    *(Element **)(pEVar3 + 0x28) = pEVar10;
    if (pEVar5 != (Element *)0x0) goto LAB_0011ecdd;
  }
  *(Element **)(pEVar10 + 0x20) = pEVar3;
LAB_0011ecee:
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  _insert_rb_fix(this,pEVar3);
LAB_0011ecfd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pEVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RBMap<Variant::Type, List<int, DefaultAllocator>, Comparator<Variant::Type>,
   DefaultAllocator>::operator[](Variant::Type const&) */

long __thiscall
RBMap<Variant::Type,List<int,DefaultAllocator>,Comparator<Variant::Type>,DefaultAllocator>::
operator[](RBMap<Variant::Type,List<int,DefaultAllocator>,Comparator<Variant::Type>,DefaultAllocator>
           *this,Type *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  lVar1 = *(long *)this;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 == 0) {
    _Data::_create_root((_Data *)this);
    lVar1 = *(long *)this;
    if (lVar1 == 0) {
      local_28 = 0;
      _Data::_create_root((_Data *)this);
      goto LAB_0011eebc;
    }
  }
  for (lVar1 = *(long *)(lVar1 + 0x10); *(long *)(this + 8) != lVar1; lVar1 = *(long *)(lVar1 + 8))
  {
    while (*(int *)param_1 < *(int *)(lVar1 + 0x30)) {
      lVar1 = *(long *)(lVar1 + 0x10);
      if (*(long *)(this + 8) == lVar1) goto LAB_0011eeb3;
    }
    if (*(int *)param_1 <= *(int *)(lVar1 + 0x30)) goto LAB_0011eed4;
  }
LAB_0011eeb3:
  local_28 = 0;
LAB_0011eebc:
  lVar1 = _insert(this,param_1,(List *)&local_28);
  List<int,DefaultAllocator>::~List((List<int,DefaultAllocator> *)&local_28);
LAB_0011eed4:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1 + 0x38;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Variant::Type>::_realloc(long) */

undefined8 __thiscall CowData<Variant::Type>::_realloc(CowData<Variant::Type> *this,long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = (void *)(*(long *)this + -0x10);
  puVar1 = (undefined8 *)Memory::realloc_static(pvVar3,param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  uVar2 = CowData<Variant>::_realloc((long)pvVar3);
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Variant::Type>::resize<false>(long) */

undefined8 __thiscall
CowData<Variant::Type>::resize<false>(CowData<Variant::Type> *this,long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
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
    lVar8 = 0;
    lVar2 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar2 = lVar8 * 4;
    if (lVar2 != 0) {
      uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar2 = (uVar3 | uVar3 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_0011f180:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar3 = param_1 * 4 - 1;
  uVar3 = uVar3 | uVar3 >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  lVar7 = uVar3 + 1;
  if (lVar7 == 0) goto LAB_0011f180;
  if (lVar8 < param_1) {
    if (lVar7 != lVar2) {
      if (lVar8 == 0) {
        puVar4 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
        if (puVar4 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar6 = puVar4 + 2;
        *puVar4 = 1;
        puVar4[1] = 0;
        *(undefined8 **)this = puVar6;
        goto LAB_0011f0b1;
      }
      uVar5 = _realloc(this,lVar7);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    puVar6 = *(undefined8 **)this;
    if (puVar6 != (undefined8 *)0x0) {
LAB_0011f0b1:
      puVar6[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar7 != lVar2) && (uVar5 = _realloc(this,lVar7), (int)uVar5 != 0)) {
      return uVar5;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<RBMap<StringName, int, Comparator<StringName>, DefaultAllocator>, DefaultAllocator>::~List()
    */

void __thiscall
List<RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>,DefaultAllocator>::~List
          (List<RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>,DefaultAllocator>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RBMap<StringName, int, Comparator<StringName>, DefaultAllocator>::~RBMap() */

void __thiscall
RBMap<StringName,int,Comparator<StringName>,DefaultAllocator>::~RBMap
          (RBMap<StringName,int,Comparator<StringName>,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* KeyValue<StringName, int>::~KeyValue() */

void __thiscall KeyValue<StringName,int>::~KeyValue(KeyValue<StringName,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashSet<int, HashMapHasherDefault, HashMapComparatorDefault<int> >::~HashSet() */

void __thiscall
HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::~HashSet
          (HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RBMap<Variant::Type, List<int, DefaultAllocator>, Comparator<Variant::Type>,
   DefaultAllocator>::~RBMap() */

void __thiscall
RBMap<Variant::Type,List<int,DefaultAllocator>,Comparator<Variant::Type>,DefaultAllocator>::~RBMap
          (RBMap<Variant::Type,List<int,DefaultAllocator>,Comparator<Variant::Type>,DefaultAllocator>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<int, DefaultAllocator>::~List() */

void __thiscall List<int,DefaultAllocator>::~List(List<int,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<GDScriptCodeGenerator::Address, DefaultAllocator>::~List() */

void __thiscall
List<GDScriptCodeGenerator::Address,DefaultAllocator>::~List
          (List<GDScriptCodeGenerator::Address,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GDScriptDataType::~GDScriptDataType() */

void __thiscall GDScriptDataType::~GDScriptDataType(GDScriptDataType *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// This is taking way too long.