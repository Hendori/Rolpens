
/* ResourceFormatSaverText::recognize(Ref<Resource> const&) const */

undefined8 ResourceFormatSaverText::recognize(Ref *param_1)

{
  return 1;
}



/* ResourceFormatLoaderText::has_custom_uid_support() const */

undefined8 ResourceFormatLoaderText::has_custom_uid_support(void)

{
  return 1;
}



/* HashSet<Ref<Resource>, HashMapHasherDefault, HashMapComparatorDefault<Ref<Resource> >
   >::_lookup_pos(Ref<Resource> const&, unsigned int&) const [clone .isra.0] */

undefined8 __thiscall
HashSet<Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>>::_lookup_pos
          (HashSet<Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>> *this
          ,Ref *param_1,uint *param_2)

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
  int iVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  
  if (*(long *)this == 0) {
    return 0;
  }
  if (*(int *)(this + 0x24) != 0) {
    uVar14 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
    uVar10 = (long)param_1 * 0x3ffff - 1;
    uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
    uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
    uVar10 = uVar10 >> 0x16 ^ uVar10;
    uVar16 = uVar10 & 0xffffffff;
    if ((int)uVar10 == 0) {
      uVar16 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar16 * lVar1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar14;
    lVar12 = SUB168(auVar2 * auVar6,8);
    uVar13 = *(uint *)(*(long *)(this + 0x18) + lVar12 * 4);
    iVar11 = SUB164(auVar2 * auVar6,8);
    if (uVar13 != 0) {
      uVar15 = 0;
      do {
        if (((uint)uVar16 == uVar13) &&
           (uVar13 = *(uint *)(*(long *)(this + 8) + lVar12 * 4),
           *(Ref **)(*(long *)this + (ulong)uVar13 * 8) == param_1)) {
          *param_2 = uVar13;
          return 1;
        }
        uVar15 = uVar15 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(iVar11 + 1) * lVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar14;
        lVar12 = SUB168(auVar3 * auVar7,8);
        uVar13 = *(uint *)(*(long *)(this + 0x18) + lVar12 * 4);
        iVar11 = SUB164(auVar3 * auVar7,8);
        if (uVar13 == 0) {
          return 0;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar13 * lVar1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar14;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4
                                         ) + iVar11) - SUB164(auVar4 * auVar8,8)) * lVar1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar14;
      } while (uVar15 <= SUB164(auVar5 * auVar9,8));
      return 0;
    }
  }
  return 0;
}



/* HashMap<Ref<Resource>, String, HashMapHasherDefault, HashMapComparatorDefault<Ref<Resource> >,
   DefaultTypedAllocator<HashMapElement<Ref<Resource>, String> > >::_lookup_pos(Ref<Resource>
   const&, unsigned int&) const [clone .isra.0] */

undefined8 __thiscall
HashMap<Ref<Resource>,String,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,String>>>
::_lookup_pos(HashMap<Ref<Resource>,String,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,String>>>
              *this,Ref *param_1,uint *param_2)

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
           (*(Ref **)(*(long *)(*(long *)(this + 8) + lVar12 * 8) + 0x10) == param_1)) {
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



/* Ref<PackedScene>::TEMPNAMEPLACEHOLDERVALUE(Ref<PackedScene> const&) [clone .isra.0] */

void __thiscall Ref<PackedScene>::operator=(Ref<PackedScene> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (pOVar1 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
  return;
}



/* Ref<FileAccess>::TEMPNAMEPLACEHOLDERVALUE(Ref<FileAccess> const&) [clone .isra.0] */

void __thiscall Ref<FileAccess>::operator=(Ref<FileAccess> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (pOVar1 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
  return;
}



/* Ref<Resource>::TEMPNAMEPLACEHOLDERVALUE(Ref<Resource> const&) [clone .isra.0] */

void __thiscall Ref<Resource>::operator=(Ref<Resource> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (pOVar1 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
  return;
}



/* List<Ref<Resource>, DefaultAllocator>::push_back(Ref<Resource> const&) [clone .isra.0] */

void __thiscall
List<Ref<Resource>,DefaultAllocator>::push_back
          (List<Ref<Resource>,DefaultAllocator> *this,Ref *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined1 (*pauVar4) [16];
  
  if (*(long *)this == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  pauVar4 = (undefined1 (*) [16])operator_new(0x20,DefaultAllocator::alloc);
  *pauVar4 = (undefined1  [16])0x0;
  pauVar4[1] = (undefined1  [16])0x0;
  if (*(long *)param_1 != 0) {
    *(long *)*pauVar4 = *(long *)param_1;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      *(undefined8 *)*pauVar4 = 0;
    }
  }
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  *(undefined8 *)(*pauVar4 + 8) = 0;
  *(long **)(pauVar4[1] + 8) = plVar1;
  *(long *)pauVar4[1] = lVar2;
  if (lVar2 != 0) {
    *(undefined1 (**) [16])(lVar2 + 8) = pauVar4;
  }
  plVar1[1] = (long)pauVar4;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)pauVar4;
  return;
}



/* CowData<char32_t>::TEMPNAMEPLACEHOLDERVALUE(CowData<char32_t>&&) [clone .part.0] */

void __thiscall CowData<char32_t>::operator=(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  
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
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
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



/* List<String, DefaultAllocator>::push_back(String const&) [clone .isra.0] */

void __thiscall
List<String,DefaultAllocator>::push_back(List<String,DefaultAllocator> *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar3) [16];
  
  if (*(long *)this == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref(this_00,(CowData *)param_1);
  }
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  *(undefined8 *)(this_00 + 8) = 0;
  *(long **)(this_00 + 0x18) = plVar1;
  *(long *)(this_00 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(CowData<char32_t> **)(lVar2 + 8) = this_00;
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



/* ResourceLoaderText::get_resource() */

void ResourceLoaderText::get_resource(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x2190) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x2190);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* ResourceLoaderText::get_stage() const */

undefined4 __thiscall ResourceLoaderText::get_stage(ResourceLoaderText *this)

{
  return *(undefined4 *)(this + 0x20c4);
}



/* ResourceLoaderText::get_stage_count() const */

undefined4 __thiscall ResourceLoaderText::get_stage_count(ResourceLoaderText *this)

{
  return *(undefined4 *)(this + 0x20c0);
}



/* ResourceLoaderText::set_translation_remapped(bool) */

void __thiscall ResourceLoaderText::set_translation_remapped(ResourceLoaderText *this,bool param_1)

{
  *this = (ResourceLoaderText)param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResourceLoaderText::ResourceLoaderText() */

void __thiscall ResourceLoaderText::ResourceLoaderText(ResourceLoaderText *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = _UNK_001226a8;
  uVar1 = _LC8;
  *this = (ResourceLoaderText)0x0;
  *(code **)(this + 0x28) = Memory::realloc_static;
  *(undefined2 *)(this + 0x2038) = 0;
  uVar2 = _LC8;
  *(undefined8 *)(this + 0x2030) = 0;
  *(undefined4 *)(this + 0x203c) = 0;
  *(undefined8 *)(this + 0x2040) = 0;
  this[0x2048] = (ResourceLoaderText)0x0;
  *(undefined4 *)(this + 0x204c) = 4;
  *(undefined8 *)(this + 0x2050) = 0;
  this[0x2058] = (ResourceLoaderText)0x0;
  *(undefined8 *)(this + 0x2088) = uVar2;
  *(undefined8 *)(this + 0x20b8) = uVar2;
  *(undefined8 *)(this + 0x20c0) = 0;
  *(undefined8 *)(this + 0x20d8) = 0;
  this[0x2118] = (ResourceLoaderText)0x0;
  *(undefined8 *)(this + 0x2120) = 0;
  *(undefined4 *)(this + 0x2128) = 0;
  *(undefined8 *)(this + 0x2130) = 0xffffffffffffffff;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2068) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2078) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2098) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20a8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20c8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20e8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20f8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x2108) = uVar1;
  *(undefined8 *)(this + 0x2110) = uVar3;
  *(undefined1 (*) [16])(this + 0x2140) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2150) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x2160) = uVar2;
  *(undefined8 *)(this + 0x2168) = 0;
  *(undefined8 *)(this + 0x2180) = 0;
  *(undefined4 *)(this + 0x2188) = 0;
  *(undefined8 *)(this + 0x2190) = 0;
  *(undefined1 (*) [16])(this + 0x2170) = (undefined1  [16])0x0;
  return;
}



/* ResourceFormatSaverText::ResourceFormatSaverText() */

void __thiscall ResourceFormatSaverText::ResourceFormatSaverText(ResourceFormatSaverText *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  *(code **)this = Variant::_clear_internal;
  StringName::StringName((StringName *)(this + 0x180),"_save",false);
  this[0x188] = (ResourceFormatSaverText)0x0;
  *(undefined8 *)(this + 400) = 0;
  StringName::StringName((StringName *)(this + 0x198),"_set_uid",false);
  this[0x1a0] = (ResourceFormatSaverText)0x0;
  *(undefined8 *)(this + 0x1a8) = 0;
  StringName::StringName((StringName *)(this + 0x1b0),"_recognize",false);
  this[0x1b8] = (ResourceFormatSaverText)0x0;
  *(undefined8 *)(this + 0x1c0) = 0;
  StringName::StringName((StringName *)(this + 0x1c8),"_get_recognized_extensions",false);
  this[0x1d0] = (ResourceFormatSaverText)0x0;
  *(undefined8 *)(this + 0x1d8) = 0;
  StringName::StringName((StringName *)(this + 0x1e0),"_recognize_path",false);
  this[0x1e8] = (ResourceFormatSaverText)0x0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00122288;
  singleton = this;
  return;
}



/* RBMap<ResourceFormatSaverTextInstance::NonPersistentKey, Variant,
   Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,
   DefaultAllocator>::_cleanup_tree(RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,
   Variant, Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,
   DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
::_cleanup_tree(RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
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
    pEVar4 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar4) {
      pEVar6 = *(Element **)(pEVar4 + 0x10);
      if (pEVar2 != pEVar6) {
        pEVar5 = *(Element **)(pEVar6 + 0x10);
        if (pEVar2 != pEVar5) {
          pEVar3 = *(Element **)(pEVar5 + 0x10);
          if (pEVar2 != pEVar3) {
            _cleanup_tree(this,pEVar3);
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar5 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 8));
          }
          if (Variant::needs_deinit[*(int *)(pEVar5 + 0x40)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar5 + 0x38) != 0)) {
            StringName::unref();
          }
          Ref<Resource>::unref((Ref<Resource> *)(pEVar5 + 0x30));
          Memory::free_static(pEVar5,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar6 + 8);
        if (pEVar2 != pEVar5) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          if (Variant::needs_deinit[*(int *)(pEVar2 + 0x40)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar2 + 0x38) != 0)) {
            StringName::unref();
          }
          Ref<Resource>::unref((Ref<Resource> *)(pEVar2 + 0x30));
          Memory::free_static(pEVar2,false);
        }
        if (Variant::needs_deinit[*(int *)(pEVar6 + 0x40)] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (*(long *)(pEVar6 + 0x38) != 0)) {
          StringName::unref();
        }
        Ref<Resource>::unref((Ref<Resource> *)(pEVar6 + 0x30));
        Memory::free_static(pEVar6,false);
        pEVar6 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar4 + 8);
      if (pEVar2 != pEVar6) {
        pEVar5 = *(Element **)(pEVar2 + 0x10);
        if (pEVar5 != pEVar6) {
          if (*(Element **)(pEVar5 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar5 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 8));
          }
          if (Variant::needs_deinit[*(int *)(pEVar5 + 0x40)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar5 + 0x38) != 0)) {
            StringName::unref();
          }
          Ref<Resource>::unref((Ref<Resource> *)(pEVar5 + 0x30));
          Memory::free_static(pEVar5,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar5 = *(Element **)(pEVar2 + 8);
        if (pEVar5 != pEVar6) {
          if (*(Element **)(pEVar5 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar5 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 8));
          }
          if (Variant::needs_deinit[*(int *)(pEVar5 + 0x40)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar5 + 0x38) != 0)) {
            StringName::unref();
          }
          Ref<Resource>::unref((Ref<Resource> *)(pEVar5 + 0x30));
          Memory::free_static(pEVar5,false);
        }
        if (Variant::needs_deinit[*(int *)(pEVar2 + 0x40)] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (*(long *)(pEVar2 + 0x38) != 0)) {
          StringName::unref();
        }
        Ref<Resource>::unref((Ref<Resource> *)(pEVar2 + 0x30));
        Memory::free_static(pEVar2,false);
      }
      if (Variant::needs_deinit[*(int *)(pEVar4 + 0x40)] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (*(long *)(pEVar4 + 0x38) != 0)) {
        StringName::unref();
      }
      Ref<Resource>::unref((Ref<Resource> *)(pEVar4 + 0x30));
      Memory::free_static(pEVar4,false);
      pEVar4 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar4) {
      pEVar6 = *(Element **)(pEVar2 + 0x10);
      if (pEVar6 != pEVar4) {
        pEVar5 = *(Element **)(pEVar6 + 0x10);
        if (pEVar5 != pEVar4) {
          if (*(Element **)(pEVar5 + 0x10) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 0x10));
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar5 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 8));
          }
          if (Variant::needs_deinit[*(int *)(pEVar5 + 0x40)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar5 + 0x38) != 0)) {
            StringName::unref();
          }
          Ref<Resource>::unref((Ref<Resource> *)(pEVar5 + 0x30));
          Memory::free_static(pEVar5,false);
          pEVar4 = *(Element **)(this + 8);
        }
        pEVar5 = *(Element **)(pEVar6 + 8);
        if (pEVar5 != pEVar4) {
          if (*(Element **)(pEVar5 + 0x10) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 0x10));
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar5 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 8));
          }
          if (Variant::needs_deinit[*(int *)(pEVar5 + 0x40)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar5 + 0x38) != 0)) {
            StringName::unref();
          }
          Ref<Resource>::unref((Ref<Resource> *)(pEVar5 + 0x30));
          Memory::free_static(pEVar5,false);
        }
        if (Variant::needs_deinit[*(int *)(pEVar6 + 0x40)] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (*(long *)(pEVar6 + 0x38) != 0)) {
          StringName::unref();
        }
        Ref<Resource>::unref((Ref<Resource> *)(pEVar6 + 0x30));
        Memory::free_static(pEVar6,false);
        pEVar4 = *(Element **)(this + 8);
      }
      pEVar6 = *(Element **)(pEVar2 + 8);
      if (pEVar6 != pEVar4) {
        pEVar5 = *(Element **)(pEVar6 + 0x10);
        if (pEVar5 != pEVar4) {
          if (*(Element **)(pEVar5 + 0x10) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 0x10));
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar5 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 8));
          }
          if (Variant::needs_deinit[*(int *)(pEVar5 + 0x40)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar5 + 0x38) != 0)) {
            StringName::unref();
          }
          Ref<Resource>::unref((Ref<Resource> *)(pEVar5 + 0x30));
          Memory::free_static(pEVar5,false);
          pEVar4 = *(Element **)(this + 8);
        }
        pEVar5 = *(Element **)(pEVar6 + 8);
        if (pEVar5 != pEVar4) {
          if (*(Element **)(pEVar5 + 0x10) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 0x10));
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar5 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 8));
          }
          if (Variant::needs_deinit[*(int *)(pEVar5 + 0x40)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar5 + 0x38) != 0)) {
            StringName::unref();
          }
          Ref<Resource>::unref((Ref<Resource> *)(pEVar5 + 0x30));
          Memory::free_static(pEVar5,false);
        }
        if (Variant::needs_deinit[*(int *)(pEVar6 + 0x40)] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (*(long *)(pEVar6 + 0x38) != 0)) {
          StringName::unref();
        }
        Ref<Resource>::unref((Ref<Resource> *)(pEVar6 + 0x30));
        Memory::free_static(pEVar6,false);
      }
      if (Variant::needs_deinit[*(int *)(pEVar2 + 0x40)] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (*(long *)(pEVar2 + 0x38) != 0)) {
        StringName::unref();
      }
      Ref<Resource>::unref((Ref<Resource> *)(pEVar2 + 0x30));
      Memory::free_static(pEVar2,false);
    }
    if (Variant::needs_deinit[*(int *)(pEVar1 + 0x40)] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (*(long *)(pEVar1 + 0x38) != 0)) {
      StringName::unref();
    }
    Ref<Resource>::unref((Ref<Resource> *)(pEVar1 + 0x30));
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar4 = *(Element **)(pEVar1 + 0x10);
    if (pEVar4 != pEVar2) {
      pEVar6 = *(Element **)(pEVar4 + 0x10);
      if (pEVar6 != pEVar2) {
        pEVar5 = *(Element **)(pEVar6 + 0x10);
        if (pEVar5 != pEVar2) {
          if (*(Element **)(pEVar5 + 0x10) != pEVar2) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 0x10));
            pEVar2 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar5 + 8) != pEVar2) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 8));
          }
          if (Variant::needs_deinit[*(int *)(pEVar5 + 0x40)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar5 + 0x38) != 0)) {
            StringName::unref();
          }
          Ref<Resource>::unref((Ref<Resource> *)(pEVar5 + 0x30));
          Memory::free_static(pEVar5,false);
          pEVar2 = *(Element **)(this + 8);
        }
        pEVar5 = *(Element **)(pEVar6 + 8);
        if (pEVar5 != pEVar2) {
          if (*(Element **)(pEVar5 + 0x10) != pEVar2) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 0x10));
            pEVar2 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar5 + 8) != pEVar2) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 8));
          }
          if (Variant::needs_deinit[*(int *)(pEVar5 + 0x40)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar5 + 0x38) != 0)) {
            StringName::unref();
          }
          Ref<Resource>::unref((Ref<Resource> *)(pEVar5 + 0x30));
          Memory::free_static(pEVar5,false);
        }
        if (Variant::needs_deinit[*(int *)(pEVar6 + 0x40)] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (*(long *)(pEVar6 + 0x38) != 0)) {
          StringName::unref();
        }
        Ref<Resource>::unref((Ref<Resource> *)(pEVar6 + 0x30));
        Memory::free_static(pEVar6,false);
        pEVar2 = *(Element **)(this + 8);
      }
      pEVar6 = *(Element **)(pEVar4 + 8);
      if (pEVar6 != pEVar2) {
        pEVar5 = *(Element **)(pEVar6 + 0x10);
        if (pEVar5 != pEVar2) {
          if (*(Element **)(pEVar5 + 0x10) != pEVar2) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 0x10));
            pEVar2 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar5 + 8) != pEVar2) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 8));
          }
          if (Variant::needs_deinit[*(int *)(pEVar5 + 0x40)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar5 + 0x38) != 0)) {
            StringName::unref();
          }
          Ref<Resource>::unref((Ref<Resource> *)(pEVar5 + 0x30));
          Memory::free_static(pEVar5,false);
          pEVar2 = *(Element **)(this + 8);
        }
        pEVar5 = *(Element **)(pEVar6 + 8);
        if (pEVar5 != pEVar2) {
          if (*(Element **)(pEVar5 + 0x10) != pEVar2) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 0x10));
            pEVar2 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar5 + 8) != pEVar2) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 8));
          }
          if (Variant::needs_deinit[*(int *)(pEVar5 + 0x40)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar5 + 0x38) != 0)) {
            StringName::unref();
          }
          Ref<Resource>::unref((Ref<Resource> *)(pEVar5 + 0x30));
          Memory::free_static(pEVar5,false);
        }
        if (Variant::needs_deinit[*(int *)(pEVar6 + 0x40)] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (*(long *)(pEVar6 + 0x38) != 0)) {
          StringName::unref();
        }
        Ref<Resource>::unref((Ref<Resource> *)(pEVar6 + 0x30));
        Memory::free_static(pEVar6,false);
      }
      if (Variant::needs_deinit[*(int *)(pEVar4 + 0x40)] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (*(long *)(pEVar4 + 0x38) != 0)) {
        StringName::unref();
      }
      Ref<Resource>::unref((Ref<Resource> *)(pEVar4 + 0x30));
      Memory::free_static(pEVar4,false);
      pEVar2 = *(Element **)(this + 8);
    }
    pEVar4 = *(Element **)(pEVar1 + 8);
    if (pEVar4 != pEVar2) {
      pEVar6 = *(Element **)(pEVar4 + 0x10);
      if (pEVar6 != pEVar2) {
        pEVar5 = *(Element **)(pEVar6 + 0x10);
        if (pEVar5 != pEVar2) {
          if (*(Element **)(pEVar5 + 0x10) != pEVar2) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 0x10));
            pEVar2 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar5 + 8) != pEVar2) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 8));
          }
          if (Variant::needs_deinit[*(int *)(pEVar5 + 0x40)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar5 + 0x38) != 0)) {
            StringName::unref();
          }
          Ref<Resource>::unref((Ref<Resource> *)(pEVar5 + 0x30));
          Memory::free_static(pEVar5,false);
          pEVar2 = *(Element **)(this + 8);
        }
        pEVar5 = *(Element **)(pEVar6 + 8);
        if (pEVar5 != pEVar2) {
          if (*(Element **)(pEVar5 + 0x10) != pEVar2) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 0x10));
            pEVar2 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar5 + 8) != pEVar2) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 8));
          }
          if (Variant::needs_deinit[*(int *)(pEVar5 + 0x40)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar5 + 0x38) != 0)) {
            StringName::unref();
          }
          Ref<Resource>::unref((Ref<Resource> *)(pEVar5 + 0x30));
          Memory::free_static(pEVar5,false);
        }
        if (Variant::needs_deinit[*(int *)(pEVar6 + 0x40)] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (*(long *)(pEVar6 + 0x38) != 0)) {
          StringName::unref();
        }
        Ref<Resource>::unref((Ref<Resource> *)(pEVar6 + 0x30));
        Memory::free_static(pEVar6,false);
        pEVar2 = *(Element **)(this + 8);
      }
      pEVar6 = *(Element **)(pEVar4 + 8);
      if (pEVar6 != pEVar2) {
        pEVar5 = *(Element **)(pEVar6 + 0x10);
        if (pEVar5 != pEVar2) {
          if (*(Element **)(pEVar5 + 0x10) != pEVar2) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 0x10));
            pEVar2 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar5 + 8) != pEVar2) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 8));
          }
          if (Variant::needs_deinit[*(int *)(pEVar5 + 0x40)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar5 + 0x38) != 0)) {
            StringName::unref();
          }
          Ref<Resource>::unref((Ref<Resource> *)(pEVar5 + 0x30));
          Memory::free_static(pEVar5,false);
          pEVar2 = *(Element **)(this + 8);
        }
        pEVar5 = *(Element **)(pEVar6 + 8);
        if (pEVar5 != pEVar2) {
          if (*(Element **)(pEVar5 + 0x10) != pEVar2) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 0x10));
            pEVar2 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar5 + 8) != pEVar2) {
            _cleanup_tree(this,*(Element **)(pEVar5 + 8));
          }
          if (Variant::needs_deinit[*(int *)(pEVar5 + 0x40)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar5 + 0x38) != 0)) {
            StringName::unref();
          }
          Ref<Resource>::unref((Ref<Resource> *)(pEVar5 + 0x30));
          Memory::free_static(pEVar5,false);
        }
        if (Variant::needs_deinit[*(int *)(pEVar6 + 0x40)] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (*(long *)(pEVar6 + 0x38) != 0)) {
          StringName::unref();
        }
        Ref<Resource>::unref((Ref<Resource> *)(pEVar6 + 0x30));
        Memory::free_static(pEVar6,false);
      }
      if (Variant::needs_deinit[*(int *)(pEVar4 + 0x40)] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (*(long *)(pEVar4 + 0x38) != 0)) {
        StringName::unref();
      }
      Ref<Resource>::unref((Ref<Resource> *)(pEVar4 + 0x30));
      Memory::free_static(pEVar4,false);
    }
    if (Variant::needs_deinit[*(int *)(pEVar1 + 0x40)] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (*(long *)(pEVar1 + 0x38) != 0)) {
      StringName::unref();
    }
    Ref<Resource>::unref((Ref<Resource> *)(pEVar1 + 0x30));
    Memory::free_static(pEVar1,false);
  }
  if (Variant::needs_deinit[*(int *)(param_1 + 0x40)] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (*(long *)(param_1 + 0x38) != 0)) {
    StringName::unref();
  }
  Ref<Resource>::unref((Ref<Resource> *)(param_1 + 0x30));
  Memory::free_static(param_1,false);
  return;
}



/* ResourceLoaderText::_printerr() */

void __thiscall ResourceLoaderText::_printerr(ResourceLoaderText *this)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  if (*(long *)(this + 0x18) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(this + 0x18));
  }
  uVar1 = *(undefined4 *)(this + 0x2128);
  local_58 = 0;
  if (*(long *)(this + 0x10) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(this + 0x10));
  }
  local_60 = 0;
  local_40 = 0x18;
  local_48 = "%s:%d - Parse Error: %s.";
  String::parse_latin1((StrRange *)&local_60);
  vformat<String,int,String>
            ((CowData<char32_t> *)&local_48,(StrRange *)&local_60,(CowData<char32_t> *)&local_58,
             uVar1,(CowData<char32_t> *)&local_50);
  _err_print_error("_printerr","scene/resources/resource_format_text.cpp",0x27,
                   (CowData<char32_t> *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoaderText::get_recognized_extensions_for_type(String const&, List<String,
   DefaultAllocator>*) const */

void __thiscall
ResourceFormatLoaderText::get_recognized_extensions_for_type
          (ResourceFormatLoaderText *this,String *param_1,List *param_2)

{
  char cVar1;
  long in_FS_OFFSET;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)param_1 == 0) || (*(uint *)(*(long *)param_1 + -8) < 2)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x160))(this,param_2);
      return;
    }
    goto LAB_00101e21;
  }
  StringName::StringName((StringName *)&local_60,param_1,false);
  StringName::StringName((StringName *)&local_58,"PackedScene",false);
  cVar1 = ClassDB::is_parent_class((StringName *)&local_58,(StringName *)&local_60);
  if (StringName::configured != '\0') {
    if (local_58 != (undefined *)0x0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101d63;
    }
    if (local_60 != 0) {
      StringName::unref();
    }
  }
LAB_00101d63:
  if (cVar1 != '\0') {
    local_60 = 0;
    local_58 = &_LC36;
    local_50 = 4;
    String::parse_latin1((StrRange *)&local_60);
    List<String,DefaultAllocator>::push_back
              ((List<String,DefaultAllocator> *)param_2,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  cVar1 = String::operator!=(param_1,"PackedScene");
  if (cVar1 != '\0') {
    cVar1 = String::operator!=(param_1,"GDExtension");
    if (cVar1 != '\0') {
      local_58 = (undefined *)0x0;
      String::parse_latin1((String *)&local_58,"tres");
      List<String,DefaultAllocator>::push_back
                ((List<String,DefaultAllocator> *)param_2,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101e21:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoaderText::get_recognized_extensions(List<String, DefaultAllocator>*) const */

void __thiscall
ResourceFormatLoaderText::get_recognized_extensions(ResourceFormatLoaderText *this,List *param_1)

{
  long *plVar1;
  long lVar2;
  CowData<char32_t> *pCVar3;
  undefined1 (*pauVar4) [16];
  long in_FS_OFFSET;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_40 = 4;
  local_48 = &_LC36;
  String::parse_latin1((StrRange *)&local_50);
  if (*(long *)param_1 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  pCVar3 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])pCVar3 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pCVar3 + 0x10) = (undefined1  [16])0x0;
  if (local_50 != 0) {
    CowData<char32_t>::_ref(pCVar3,(CowData *)&local_50);
  }
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(pCVar3 + 8) = 0;
  *(long **)(pCVar3 + 0x18) = plVar1;
  *(long *)(pCVar3 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(CowData<char32_t> **)(lVar2 + 8) = pCVar3;
  }
  plVar1[1] = (long)pCVar3;
  if (*plVar1 == 0) {
    *plVar1 = (long)pCVar3;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  local_50 = 0;
  local_48 = &_LC38;
  local_40 = 4;
  String::parse_latin1((StrRange *)&local_50);
  if (*(long *)param_1 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  pCVar3 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])pCVar3 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pCVar3 + 0x10) = (undefined1  [16])0x0;
  if (local_50 != 0) {
    CowData<char32_t>::_ref(pCVar3,(CowData *)&local_50);
  }
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(pCVar3 + 8) = 0;
  *(long **)(pCVar3 + 0x18) = plVar1;
  *(long *)(pCVar3 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(CowData<char32_t> **)(lVar2 + 8) = pCVar3;
  }
  plVar1[1] = (long)pCVar3;
  if (*plVar1 == 0) {
    *plVar1 = (long)pCVar3;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatSaverText::get_recognized_extensions(Ref<Resource> const&, List<String,
   DefaultAllocator>*) const */

void __thiscall
ResourceFormatSaverText::get_recognized_extensions
          (ResourceFormatSaverText *this,Ref *param_1,List *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  Object *pOVar4;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar5) [16];
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 != 0) {
    pOVar4 = (Object *)__dynamic_cast(*(long *)param_1,&Object::typeinfo,&PackedScene::typeinfo,0);
    if (pOVar4 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 != '\0') {
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar4);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
        local_40 = 0;
        local_38 = &_LC36;
        local_30 = 4;
        String::parse_latin1((StrRange *)&local_40);
        if (*(long *)param_2 == 0) {
          pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined1 (**) [16])param_2 = pauVar5;
          *(undefined4 *)pauVar5[1] = 0;
          *pauVar5 = (undefined1  [16])0x0;
        }
        this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
        *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
        if (local_40 != 0) {
          CowData<char32_t>::_ref(this_00,(CowData *)&local_40);
        }
        plVar1 = *(long **)param_2;
        lVar2 = plVar1[1];
        *(undefined8 *)(this_00 + 8) = 0;
        *(long **)(this_00 + 0x18) = plVar1;
        *(long *)(this_00 + 0x10) = lVar2;
        if (lVar2 != 0) {
          *(CowData<char32_t> **)(lVar2 + 8) = this_00;
        }
        plVar1[1] = (long)this_00;
        if (*plVar1 == 0) {
          *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
          *plVar1 = (long)this_00;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
        }
        else {
          *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
        }
        goto LAB_001020c3;
      }
    }
  }
  local_40 = 0;
  local_38 = &_LC38;
  local_30 = 4;
  String::parse_latin1((StrRange *)&local_40);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_2,(String *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_001020c3:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceLoaderText::_parse_sub_resource_dummy(ResourceLoaderText::DummyReadData*,
   VariantParser::Stream*, Ref<Resource>&, int&, String&) */

undefined4
ResourceLoaderText::_parse_sub_resource_dummy
          (DummyReadData *param_1,Stream *param_2,Ref *param_3,int *param_4,String *param_5)

{
  uint uVar1;
  long lVar2;
  Object *pOVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulong uVar12;
  char cVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  long in_FS_OFFSET;
  undefined4 local_c4;
  Variant local_80 [8];
  char *local_78;
  undefined8 local_70;
  int local_68 [2];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  VariantParser::get_token(param_2,(Token *)local_68,param_4,param_5);
  if ((local_68[0] - 7U & 0xfffffffd) == 0) {
    if (*param_1 == (DummyReadData)0x0) {
      Variant::operator_cast_to_String(local_80);
      if ((*(long *)(param_1 + 0xa0) != 0) && (*(int *)(param_1 + 0xc4) != 0)) {
        uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0xc0) * 4);
        lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0xc0) * 8);
        uVar14 = String::hash();
        uVar12 = CONCAT44(0,uVar1);
        lVar20 = *(long *)(param_1 + 0xa8);
        uVar16 = 1;
        if (uVar14 != 0) {
          uVar16 = uVar14;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar16 * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar12;
        lVar18 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(lVar20 + lVar18 * 4);
        iVar17 = SUB164(auVar4 * auVar8,8);
        if (uVar14 != 0) {
          uVar19 = 0;
          do {
            if (uVar14 == uVar16) {
              cVar13 = String::operator==((String *)
                                          (*(long *)(*(long *)(param_1 + 0xa0) + lVar18 * 8) + 0x10)
                                          ,(String *)local_80);
              if (cVar13 != '\0') {
                puVar15 = (undefined8 *)
                          HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>
                          ::operator[]((HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>
                                        *)(param_1 + 0x98),(String *)local_80);
                Ref<Resource>::operator=((Ref<Resource> *)param_3,(Ref *)*puVar15);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
                goto LAB_001022c8;
              }
              lVar20 = *(long *)(param_1 + 0xa8);
            }
            uVar19 = uVar19 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)(iVar17 + 1) * lVar2;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar12;
            lVar18 = SUB168(auVar5 * auVar9,8);
            uVar14 = *(uint *)(lVar20 + lVar18 * 4);
            iVar17 = SUB164(auVar5 * auVar9,8);
          } while ((uVar14 != 0) &&
                  (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar14 * lVar2, auVar10._8_8_ = 0,
                  auVar10._0_8_ = uVar12, auVar7._8_8_ = 0,
                  auVar7._0_8_ = (ulong)((uVar1 + iVar17) - SUB164(auVar6 * auVar10,8)) * lVar2,
                  auVar11._8_8_ = 0, auVar11._0_8_ = uVar12, uVar19 <= SUB164(auVar7 * auVar11,8)));
        }
      }
      local_70 = 0x5c;
      local_78 = 
      "Found unique_id reference before mapping, sub-resources stored out of order in resource file"
      ;
      String::parse_latin1((StrRange *)param_5);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    }
    else {
      if ((*(long *)param_3 != 0) && (cVar13 = RefCounted::unreference(), cVar13 != '\0')) {
        pOVar3 = *(Object **)param_3;
        cVar13 = predelete_handler(pOVar3);
        if (cVar13 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
      *(undefined8 *)param_3 = 0;
LAB_001022c8:
      VariantParser::get_token(param_2,(Token *)local_68,param_4,param_5);
      local_c4 = 0;
      if (local_68[0] == 5) goto LAB_0010237c;
      local_70 = 0xc;
      local_78 = "Expected \')\'";
      String::parse_latin1((StrRange *)param_5);
    }
  }
  else {
    local_70 = 0x3a;
    local_78 = "Expected number (old style) or string (sub-resource index)";
    String::parse_latin1((StrRange *)param_5);
  }
  local_c4 = 0x2b;
LAB_0010237c:
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_c4;
}



/* ResourceLoaderText::_parse_ext_resource_dummy(ResourceLoaderText::DummyReadData*,
   VariantParser::Stream*, Ref<Resource>&, int&, String&) */

undefined4
ResourceLoaderText::_parse_ext_resource_dummy
          (DummyReadData *param_1,Stream *param_2,Ref *param_3,int *param_4,String *param_5)

{
  uint uVar1;
  long lVar2;
  Object *pOVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulong uVar12;
  char cVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  long in_FS_OFFSET;
  undefined4 local_b4;
  char *local_78;
  undefined8 local_70;
  int local_68 [2];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  VariantParser::get_token(param_2,(Token *)local_68,param_4,param_5);
  if ((local_68[0] - 7U & 0xfffffffd) == 0) {
    if (*param_1 == (DummyReadData)0x0) {
      Variant::operator_cast_to_String((Variant *)&local_78);
      if ((*(long *)(param_1 + 0x40) != 0) && (*(int *)(param_1 + 100) != 0)) {
        uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x60) * 4);
        lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0x60) * 8);
        uVar14 = String::hash();
        uVar12 = CONCAT44(0,uVar1);
        lVar20 = *(long *)(param_1 + 0x48);
        uVar16 = 1;
        if (uVar14 != 0) {
          uVar16 = uVar14;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar16 * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar12;
        lVar18 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(lVar20 + lVar18 * 4);
        iVar17 = SUB164(auVar4 * auVar8,8);
        if (uVar14 != 0) {
          uVar19 = 0;
          do {
            if (uVar14 == uVar16) {
              cVar13 = String::operator==((String *)
                                          (*(long *)(*(long *)(param_1 + 0x40) + lVar18 * 8) + 0x10)
                                          ,(String *)&local_78);
              if (cVar13 != '\0') {
                puVar15 = (undefined8 *)
                          HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>
                          ::operator[]((HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>
                                        *)(param_1 + 0x38),(String *)&local_78);
                Ref<Resource>::operator=((Ref<Resource> *)param_3,(Ref *)*puVar15);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                goto LAB_00102648;
              }
              lVar20 = *(long *)(param_1 + 0x48);
            }
            uVar19 = uVar19 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)(iVar17 + 1) * lVar2;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar12;
            lVar18 = SUB168(auVar5 * auVar9,8);
            uVar14 = *(uint *)(lVar20 + lVar18 * 4);
            iVar17 = SUB164(auVar5 * auVar9,8);
          } while ((uVar14 != 0) &&
                  (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar14 * lVar2, auVar10._8_8_ = 0,
                  auVar10._0_8_ = uVar12, auVar7._8_8_ = 0,
                  auVar7._0_8_ = (ulong)((uVar1 + iVar17) - SUB164(auVar6 * auVar10,8)) * lVar2,
                  auVar11._8_8_ = 0, auVar11._0_8_ = uVar12, uVar19 <= SUB164(auVar7 * auVar11,8)));
        }
      }
      _err_print_error("_parse_ext_resource_dummy","scene/resources/resource_format_text.cpp",0x59,
                       "Condition \"!p_data->rev_external_resources.has(id)\" is true. Returning: ERR_PARSE_ERROR"
                       ,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    }
    else {
      if (*(long *)param_3 != 0) {
        cVar13 = RefCounted::unreference();
        if (cVar13 != '\0') {
          pOVar3 = *(Object **)param_3;
          cVar13 = predelete_handler(pOVar3);
          if (cVar13 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
      *(undefined8 *)param_3 = 0;
LAB_00102648:
      VariantParser::get_token(param_2,(Token *)local_68,param_4,param_5);
      local_b4 = 0;
      if (local_68[0] == 5) goto LAB_001026f7;
      local_70 = 0xc;
      local_78 = "Expected \')\'";
      String::parse_latin1((StrRange *)param_5);
    }
  }
  else {
    local_70 = 0x4a;
    local_78 = "Expected number (old style sub-resource index) or String (ext-resource ID)";
    String::parse_latin1((StrRange *)param_5);
  }
  local_b4 = 0x2b;
LAB_001026f7:
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_b4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceLoaderText::_parse_sub_resource(VariantParser::Stream*, Ref<Resource>&, int&, String&) */

undefined4 __thiscall
ResourceLoaderText::_parse_sub_resource
          (ResourceLoaderText *this,Stream *param_1,Ref *param_2,int *param_3,String *param_4)

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
  ulong uVar11;
  char cVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  long in_FS_OFFSET;
  undefined4 local_cc;
  Variant local_80 [8];
  char *local_78;
  undefined8 local_70;
  int local_68 [2];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  VariantParser::get_token(param_1,(Token *)local_68,param_3,param_4);
  if ((local_68[0] - 7U & 0xfffffffd) == 0) {
    Variant::operator_cast_to_String(local_80);
    if ((*(long *)(this + 0x2098) != 0) && (*(int *)(this + 0x20bc) != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20b8) * 4);
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20b8) * 8);
      uVar13 = String::hash();
      uVar11 = CONCAT44(0,uVar1);
      lVar18 = *(long *)(this + 0x20a0);
      uVar15 = 1;
      if (uVar13 != 0) {
        uVar15 = uVar13;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar15 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar11;
      lVar17 = SUB168(auVar3 * auVar7,8);
      uVar13 = *(uint *)(lVar18 + lVar17 * 4);
      iVar16 = SUB164(auVar3 * auVar7,8);
      if (uVar13 != 0) {
        uVar19 = 0;
        do {
          if (uVar13 == uVar15) {
            cVar12 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 0x2098) + lVar17 * 8) + 0x10),
                                        (String *)local_80);
            if (cVar12 != '\0') {
              puVar14 = (undefined8 *)
                        HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>
                        ::operator[]((HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>
                                      *)(this + 0x2090),(String *)local_80);
              Ref<Resource>::operator=((Ref<Resource> *)param_2,(Ref *)*puVar14);
              VariantParser::get_token(param_1,(Token *)local_68,param_3,param_4);
              local_cc = 0;
              if (local_68[0] != 5) {
                local_70 = 0xc;
                local_78 = "Expected \')\'";
                String::parse_latin1((StrRange *)param_4);
                local_cc = 0x2b;
              }
              goto LAB_001029e6;
            }
            lVar18 = *(long *)(this + 0x20a0);
          }
          uVar19 = uVar19 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(iVar16 + 1) * lVar2;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar11;
          lVar17 = SUB168(auVar4 * auVar8,8);
          uVar13 = *(uint *)(lVar18 + lVar17 * 4);
          iVar16 = SUB164(auVar4 * auVar8,8);
        } while ((uVar13 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar13 * lVar2, auVar9._8_8_ = 0,
                auVar9._0_8_ = uVar11, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar1 + iVar16) - SUB164(auVar5 * auVar9,8)) * lVar2,
                auVar10._8_8_ = 0, auVar10._0_8_ = uVar11, uVar19 <= SUB164(auVar6 * auVar10,8)));
      }
    }
    _err_print_error("_parse_sub_resource","scene/resources/resource_format_text.cpp",0x70,
                     "Condition \"!int_resources.has(id)\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,0,0);
    local_cc = 0x1f;
LAB_001029e6:
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  }
  else {
    local_70 = 0x38;
    local_78 = "Expected number (old style sub-resource index) or string";
    String::parse_latin1((StrRange *)param_4);
    local_cc = 0x2b;
  }
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_cc;
}



/* ResourceFormatSaverTextInstance::_write_resource(Ref<Resource> const&) */

Ref * ResourceFormatSaverTextInstance::_write_resource(Ref *param_1)

{
  long *plVar1;
  code *pcVar2;
  Ref *pRVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  Ref *in_RDX;
  String *in_RSI;
  long in_FS_OFFSET;
  String local_98 [8];
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  plVar1 = *(long **)in_RDX;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = *(code **)(*plVar1 + 0xb8);
  Variant::Variant((Variant *)local_78,false);
  if (_write_resource(Ref<Resource>const&)::{lambda()#1}::operator()()::sname == '\0') {
    iVar6 = __cxa_guard_acquire(&_write_resource(Ref<Resource>const&)::{lambda()#1}::operator()()::
                                 sname);
    if (iVar6 != 0) {
      _scs_create((char *)&_write_resource(Ref<Resource>const&)::{lambda()#1}::operator()()::sname,
                  true);
      __cxa_atexit(StringName::~StringName,
                   &_write_resource(Ref<Resource>const&)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_write_resource(Ref<Resource>const&)::{lambda()#1}::operator()()::sname);
    }
  }
  (*pcVar2)((Variant *)local_58,plVar1,
            &_write_resource(Ref<Resource>const&)::{lambda()#1}::operator()()::sname,
            (Variant *)local_78);
  bVar4 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (bVar4) {
    *(undefined8 *)param_1 = 0;
    local_88 = &_LC52;
    local_80 = 4;
    String::parse_latin1((StrRange *)param_1);
  }
  else {
    pRVar3 = *(Ref **)in_RDX;
    cVar5 = HashMap<Ref<Resource>,String,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,String>>>
            ::_lookup_pos((HashMap<Ref<Resource>,String,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,String>>>
                           *)(in_RSI + 0x60),pRVar3,(uint *)&local_88);
    if (cVar5 == '\0') {
      cVar5 = HashMap<Ref<Resource>,String,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,String>>>
              ::_lookup_pos((HashMap<Ref<Resource>,String,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,String>>>
                             *)(in_RSI + 0x90),pRVar3,(uint *)&local_88);
      if (cVar5 == '\0') {
        if ((*(long *)(pRVar3 + 0x188) != 0) && (1 < *(uint *)(*(long *)(pRVar3 + 0x188) + -8))) {
          iVar6 = String::find((char *)(pRVar3 + 0x188),0x117600);
          if (iVar6 == -1) {
            cVar5 = String::begins_with((char *)(pRVar3 + 0x188));
            if (cVar5 == '\0') {
              Resource::get_path();
              cVar5 = String::operator==((String *)&local_88,in_RSI);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              if (cVar5 == '\0') {
                if (in_RSI[0x11] == (String)0x0) {
                  Resource::get_path();
                }
                else {
                  Resource::get_path();
                  String::path_to_file(local_98);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                }
                local_88 = (undefined *)0x0;
                String::parse_latin1((String *)&local_88,"\")");
                operator+((char *)&local_90,(String *)"Resource(\"");
                String::operator+((String *)param_1,(String *)&local_90);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
              }
              else {
                *(undefined8 *)param_1 = 0;
                String::parse_latin1((String *)param_1,"null");
              }
              goto LAB_00102ce1;
            }
          }
        }
        _err_print_error("_write_resource","scene/resources/resource_format_text.cpp",0x63a,
                         "Method/function failed. Returning: \"null\"",
                         "Resource was not pre cached for the resource section, bug?",0);
        *(undefined8 *)param_1 = 0;
        String::parse_latin1((String *)param_1,"null");
      }
      else {
        local_88 = (undefined *)0x0;
        String::parse_latin1((String *)&local_88,"\")");
        HashMap<Ref<Resource>,String,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,String>>>
        ::operator[]((HashMap<Ref<Resource>,String,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,String>>>
                      *)(in_RSI + 0x90),in_RDX);
        operator+((char *)&local_90,(String *)"SubResource(\"");
        String::operator+((String *)param_1,(String *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      }
    }
    else {
      local_90 = 0;
      local_88 = &_LC53;
      local_80 = 2;
      String::parse_latin1((StrRange *)&local_90);
      HashMap<Ref<Resource>,String,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,String>>>
      ::operator[]((HashMap<Ref<Resource>,String,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,String>>>
                    *)(in_RSI + 0x60),in_RDX);
      operator+((char *)&local_88,(String *)"ExtResource(\"");
      String::operator+((String *)param_1,(String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    }
  }
LAB_00102ce1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatSaverTextInstance::_write_resources(void*, Ref<Resource> const&) */

void * ResourceFormatSaverTextInstance::_write_resources(void *param_1,Ref *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  _write_resource((Ref *)param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceLoaderText::_parse_ext_resource(VariantParser::Stream*, Ref<Resource>&, int&, String&) */

undefined4 __thiscall
ResourceLoaderText::_parse_ext_resource
          (ResourceLoaderText *this,Stream *param_1,Ref *param_2,int *param_3,String *param_4)

{
  HashMap<String,ResourceLoaderText::ExtResource,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoaderText::ExtResource>>>
  *this_00;
  uint uVar1;
  long *plVar2;
  code *pcVar3;
  Resource *pRVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong uVar13;
  char cVar14;
  uint uVar15;
  long lVar16;
  undefined8 *puVar17;
  Resource *pRVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  long in_FS_OFFSET;
  undefined4 local_b4;
  Variant local_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  Resource *local_98;
  Resource *local_90;
  int local_88 [8];
  int local_68 [2];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  VariantParser::get_token(param_1,(Token *)local_68,param_3,param_4);
  if ((local_68[0] - 7U & 0xfffffffd) != 0) {
    local_b4 = 0x2b;
    String::parse_latin1
              (param_4,"Expected number (old style sub-resource index) or String (ext-resource ID)")
    ;
    cVar14 = Variant::needs_deinit[(int)local_60];
    goto joined_r0x00103241;
  }
  Variant::operator_cast_to_String(local_b0);
  local_b4 = 0;
  if (this[0x2058] == (ResourceLoaderText)0x0) {
    if ((*(long *)(this + 0x2068) != 0) && (*(int *)(this + 0x208c) != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x2088) * 4);
      lVar16 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x2088) * 8);
      uVar15 = String::hash();
      uVar13 = CONCAT44(0,uVar1);
      lVar23 = *(long *)(this + 0x2070);
      uVar19 = 1;
      if (uVar15 != 0) {
        uVar19 = uVar15;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar19 * lVar16;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar13;
      lVar21 = SUB168(auVar5 * auVar9,8);
      uVar15 = *(uint *)(lVar23 + lVar21 * 4);
      iVar20 = SUB164(auVar5 * auVar9,8);
      if (uVar15 != 0) {
        uVar22 = 0;
        do {
          if (uVar19 == uVar15) {
            cVar14 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 0x2068) + lVar21 * 8) + 0x10),
                                        (String *)local_b0);
            if (cVar14 != '\0') {
              this_00 = (HashMap<String,ResourceLoaderText::ExtResource,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoaderText::ExtResource>>>
                         *)(this + 0x2060);
              lVar16 = HashMap<String,ResourceLoaderText::ExtResource,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoaderText::ExtResource>>>
                       ::operator[](this_00,(String *)local_b0);
              local_a8 = 0;
              if (*(long *)(lVar16 + 8) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)(lVar16 + 8));
              }
              lVar16 = HashMap<String,ResourceLoaderText::ExtResource,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoaderText::ExtResource>>>
                       ::operator[](this_00,(String *)local_b0);
              local_a0 = 0;
              if (*(long *)(lVar16 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)(lVar16 + 0x10));
              }
              puVar17 = (undefined8 *)
                        HashMap<String,ResourceLoaderText::ExtResource,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoaderText::ExtResource>>>
                        ::operator[](this_00,(String *)local_b0);
              if ((Error *)*puVar17 == (Error *)0x0) {
                Ref<Resource>::operator=((Ref<Resource> *)param_2,(Ref *)0x0);
              }
              else {
                ResourceLoader::_load_complete((LoadToken *)&local_98,(Error *)*puVar17);
                if (local_98 == (Resource *)0x0) {
                  cVar14 = ResourceLoader::is_cleaning_tasks();
                  if (cVar14 == '\0') {
                    if ((char)ResourceLoader::abort_on_missing_resource == '\0') {
                      ResourceLoader::notify_dependency_error
                                ((String *)(this + 8),(String *)&local_a8,(String *)&local_a0);
                    }
                    else {
                      *(undefined4 *)(this + 0x2188) = 0x11;
                      operator+((char *)&local_90,
                                (String *)"[ext_resource] referenced non-existent resource at: ");
                      if (*(Resource **)(this + 0x18) != local_90) {
                        CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x18));
                        pRVar18 = local_90;
                        local_90 = (Resource *)0x0;
                        *(Resource **)(this + 0x18) = pRVar18;
                      }
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                      _printerr(this);
                      local_b4 = *(undefined4 *)(this + 0x2188);
                    }
                  }
                }
                else {
                  Resource::set_id_for_path((String *)local_98,(String *)(this + 8));
                  Ref<Resource>::operator=((Ref<Resource> *)param_2,(Ref *)local_98);
                }
                Ref<Resource>::unref((Ref<Resource> *)&local_98);
              }
              if (*(long *)param_2 == 0) {
                pRVar18 = (Resource *)operator_new(0x240,"");
                Resource::Resource(pRVar18);
                postinitialize_handler((Object *)pRVar18);
                local_90 = (Resource *)0x0;
                local_98 = pRVar18;
                cVar14 = RefCounted::init_ref();
                if (cVar14 == '\0') {
                  local_98 = (Resource *)0x0;
                  Ref<Resource>::unref((Ref<Resource> *)&local_90);
                  pRVar18 = *(Resource **)param_2;
                  if (pRVar18 != (Resource *)0x0) {
                    *(undefined8 *)param_2 = 0;
                    local_90 = pRVar18;
LAB_00103581:
                    Ref<Resource>::unref((Ref<Resource> *)&local_90);
                  }
                }
                else {
                  Ref<Resource>::unref((Ref<Resource> *)&local_90);
                  pRVar4 = *(Resource **)param_2;
                  if (pRVar4 != pRVar18) {
                    *(Resource **)param_2 = pRVar18;
                    local_90 = pRVar4;
                    cVar14 = RefCounted::reference();
                    if (cVar14 == '\0') {
                      *(undefined8 *)param_2 = 0;
                    }
                    goto LAB_00103581;
                  }
                }
                Ref<Resource>::unref((Ref<Resource> *)&local_98);
                plVar2 = *(long **)param_2;
                pcVar3 = *(code **)(*plVar2 + 0xa8);
                lVar16 = HashMap<String,ResourceLoaderText::ExtResource,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoaderText::ExtResource>>>
                         ::operator[](this_00,(String *)local_b0);
                Variant::Variant((Variant *)local_88,(String *)(lVar16 + 8));
                StringName::StringName((StringName *)&local_90,"__load_path__",false);
                (*pcVar3)(plVar2,(StringName *)&local_90,(Variant *)local_88);
                if ((StringName::configured != '\0') && (local_90 != (Resource *)0x0)) {
                  StringName::unref();
                }
                if (Variant::needs_deinit[local_88[0]] != '\0') {
                  Variant::_clear_internal();
                }
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
              goto LAB_00103135;
            }
            lVar23 = *(long *)(this + 0x2070);
          }
          uVar22 = uVar22 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(iVar20 + 1) * lVar16;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar13;
          lVar21 = SUB168(auVar6 * auVar10,8);
          uVar15 = *(uint *)(lVar23 + lVar21 * 4);
          iVar20 = SUB164(auVar6 * auVar10,8);
        } while ((uVar15 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar15 * lVar16, auVar11._8_8_ = 0,
                auVar11._0_8_ = uVar13, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar1 + iVar20) - SUB164(auVar7 * auVar11,8)) * lVar16,
                auVar12._8_8_ = 0, auVar12._0_8_ = uVar13, uVar22 <= SUB164(auVar8 * auVar12,8)));
      }
    }
    operator+((char *)&local_90,(String *)"Can\'t load cached ext-resource id: ");
    if (*(Resource **)param_4 != local_90) {
      CowData<char32_t>::_unref((CowData<char32_t> *)param_4);
      pRVar18 = local_90;
      local_90 = (Resource *)0x0;
      *(Resource **)param_4 = pRVar18;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
LAB_00103271:
    local_b4 = 0x2b;
  }
  else {
LAB_00103135:
    VariantParser::get_token(param_1,(Token *)local_68,param_3,param_4);
    if (local_68[0] != 5) {
      String::parse_latin1(param_4,"Expected \')\'");
      goto LAB_00103271;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  cVar14 = Variant::needs_deinit[(int)local_60];
joined_r0x00103241:
  if (cVar14 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_b4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceLoaderText::open(Ref<FileAccess>, bool) */

void __thiscall ResourceLoaderText::open(ResourceLoaderText *this,undefined8 *param_2,char param_3)

{
  String *this_00;
  uint uVar1;
  Ref *pRVar2;
  String *pSVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  Variant *pVVar7;
  undefined8 uVar8;
  long lVar9;
  void *pvVar10;
  long in_FS_OFFSET;
  undefined8 local_98;
  ulong local_90;
  char *local_88;
  undefined8 local_80;
  long local_78;
  HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
  local_70 [8];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  pRVar2 = (Ref *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(this + 0x2188) = 0;
  *(undefined4 *)(this + 0x2128) = 1;
  Ref<FileAccess>::operator=((Ref<FileAccess> *)(this + 0x20),pRVar2);
  Ref<FileAccess>::operator=((Ref<FileAccess> *)(this + 0x2040),*(Ref **)(this + 0x20));
  this_00 = (String *)(this + 0x18);
  this[0x2048] = (ResourceLoaderText)0x0;
  this[0x2058] = (ResourceLoaderText)0x0;
  *(undefined4 *)(this + 0x20c4) = 0;
  local_78 = 0;
  local_48 = 2;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  iVar6 = VariantParser::parse_tag
                    ((Stream *)(this + 0x28),(int *)(this + 0x2128),this_00,(Tag *)&local_78,
                     (ResourceParser *)0x0,false);
  if (iVar6 == 0) {
    local_90 = 0;
    local_88 = "format";
    local_80 = 6;
    String::parse_latin1((StrRange *)&local_90);
    local_88 = (char *)((ulong)local_88 & 0xffffffff00000000);
    cVar5 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
            ::_lookup_pos(local_70,(String *)&local_90,(uint *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if (cVar5 == '\0') {
      *(undefined4 *)(this + 0x204c) = 4;
    }
    else {
      local_88 = (char *)0x0;
      String::parse_latin1((String *)&local_88,"format");
      pVVar7 = (Variant *)
               HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
               ::operator[](local_70,(String *)&local_88);
      iVar6 = Variant::operator_cast_to_int(pVVar7);
      *(int *)(this + 0x204c) = iVar6;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (4 < *(int *)(this + 0x204c)) {
        String::parse_latin1(this_00,"Saved with newer format version");
        _printerr(this);
        *(undefined4 *)(this + 0x2188) = 0xf;
        goto LAB_00103a9f;
      }
    }
    cVar5 = String::operator==((String *)&local_78,"gd_scene");
    if (cVar5 == '\0') {
      cVar5 = String::operator==((String *)&local_78,"gd_resource");
      if (cVar5 == '\0') {
        local_90 = 0;
        if (local_78 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_78);
        }
        local_98 = 0;
        String::parse_latin1((String *)&local_98,"Unrecognized file type \'%s\'");
        vformat<String>((String *)&local_88,(String *)&local_98,(StrRange *)&local_90);
        pcVar4 = local_88;
        if ((char *)*(ulong *)(this + 0x18) != local_88) {
          CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
          *(char **)(this + 0x18) = pcVar4;
          local_88 = (char *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        _printerr(this);
        *(undefined4 *)(this + 0x2188) = 0x2b;
      }
      else {
        local_88 = (char *)0x0;
        String::parse_latin1((String *)&local_88,"type");
        local_90 = local_90 & 0xffffffff00000000;
        cVar5 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                ::_lookup_pos(local_70,(String *)&local_88,(uint *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        if (cVar5 != '\0') {
          local_88 = (char *)0x0;
          String::parse_latin1((String *)&local_88,"script_class");
          local_90 = local_90 & 0xffffffff00000000;
          cVar5 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                  ::_lookup_pos(local_70,(String *)&local_88,(uint *)&local_90);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          if (cVar5 != '\0') {
            local_90 = 0;
            String::parse_latin1((String *)&local_90,"script_class");
            HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
            ::operator[](local_70,(String *)&local_90);
            Variant::operator_cast_to_String((Variant *)&local_88);
            if ((char *)*(long *)(this + 0x20d0) != local_88) {
              CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20d0));
              pcVar4 = local_88;
              local_88 = (char *)0x0;
              *(char **)(this + 0x20d0) = pcVar4;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          }
          local_90 = 0;
          String::parse_latin1((String *)&local_90,"type");
          HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
          ::operator[](local_70,(String *)&local_90);
          Variant::operator_cast_to_String((Variant *)&local_88);
          if ((char *)*(long *)(this + 0x2050) != local_88) {
            CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x2050));
            pcVar4 = local_88;
            local_88 = (char *)0x0;
            *(char **)(this + 0x2050) = pcVar4;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          goto LAB_001037f9;
        }
        String::parse_latin1(this_00,"Missing \'type\' field in \'gd_resource\' tag");
        _printerr(this);
        *(undefined4 *)(this + 0x2188) = 0x2b;
      }
      goto LAB_00103a9f;
    }
    this[0x2048] = (ResourceLoaderText)0x1;
LAB_001037f9:
    local_90 = 0;
    local_88 = "uid";
    local_80 = 3;
    String::parse_latin1((StrRange *)&local_90);
    local_88 = (char *)((ulong)local_88 & 0xffffffff00000000);
    cVar5 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
            ::_lookup_pos(local_70,(String *)&local_90,(uint *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    pSVar3 = ResourceUID::singleton;
    if (cVar5 == '\0') {
      *(undefined8 *)(this + 0x2130) = 0xffffffffffffffff;
    }
    else {
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"uid");
      HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
      ::operator[](local_70,(String *)&local_90);
      Variant::operator_cast_to_String((Variant *)&local_88);
      uVar8 = ResourceUID::text_to_id(pSVar3);
      *(undefined8 *)(this + 0x2130) = uVar8;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    }
    local_90 = 0;
    local_88 = "load_steps";
    local_80 = 10;
    String::parse_latin1((StrRange *)&local_90);
    local_88 = (char *)((ulong)local_88 & 0xffffffff00000000);
    cVar5 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
            ::_lookup_pos(local_70,(String *)&local_90,(uint *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if (cVar5 == '\0') {
      *(undefined4 *)(this + 0x20c0) = 0;
    }
    else {
      local_88 = (char *)0x0;
      String::parse_latin1((String *)&local_88,"load_steps");
      pVVar7 = (Variant *)
               HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
               ::operator[](local_70,(String *)&local_88);
      iVar6 = Variant::operator_cast_to_int(pVVar7);
      *(int *)(this + 0x20c0) = iVar6;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    }
    if ((param_3 == '\0') &&
       (iVar6 = VariantParser::parse_tag
                          ((Stream *)(this + 0x28),(int *)(this + 0x2128),this_00,
                           (Tag *)(this + 0x20d8),(ResourceParser *)(this + 0x2168),false),
       iVar6 != 0)) {
      String::parse_latin1(this_00,"Unexpected end of file");
      _printerr(this);
      *(undefined4 *)(this + 0x2188) = 0x10;
    }
    *(ResourceLoaderText **)(this + 0x2168) = this;
    *(code **)(this + 0x2178) = _parse_ext_resources;
    *(code **)(this + 0x2180) = _parse_sub_resources;
    if ((void *)local_68._0_8_ == (void *)0x0) goto LAB_001039b7;
    pvVar10 = (void *)local_68._0_8_;
    if (local_48._4_4_ != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4);
      if (uVar1 == 0) goto LAB_00103a58;
      lVar9 = 0;
      do {
        if (*(int *)(local_68._8_8_ + lVar9) != 0) {
          pvVar10 = *(void **)((long)pvVar10 + lVar9 * 2);
          *(int *)(local_68._8_8_ + lVar9) = 0;
          if (Variant::needs_deinit[*(int *)((long)pvVar10 + 0x18)] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar10 + 0x10));
          Memory::free_static(pvVar10,false);
          *(undefined8 *)(local_68._0_8_ + lVar9 * 2) = 0;
          pvVar10 = (void *)local_68._0_8_;
        }
        lVar9 = lVar9 + 4;
      } while ((ulong)uVar1 << 2 != lVar9);
LAB_0010399d:
      local_48 = local_48 & 0xffffffff;
      local_58 = (undefined1  [16])0x0;
      if (pvVar10 == (void *)0x0) goto LAB_001039b7;
    }
  }
  else {
    *(int *)(this + 0x2188) = iVar6;
    _printerr(this);
LAB_00103a9f:
    if ((void *)local_68._0_8_ == (void *)0x0) goto LAB_001039b7;
    pvVar10 = (void *)local_68._0_8_;
    if (local_48._4_4_ != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4);
      if (uVar1 != 0) {
        lVar9 = 0;
        do {
          if (*(int *)(local_68._8_8_ + lVar9) != 0) {
            pvVar10 = *(void **)((long)pvVar10 + lVar9 * 2);
            *(int *)(local_68._8_8_ + lVar9) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar10 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar10 + 0x10));
            Memory::free_static(pvVar10,false);
            *(undefined8 *)(local_68._0_8_ + lVar9 * 2) = 0;
            pvVar10 = (void *)local_68._0_8_;
          }
          lVar9 = lVar9 + 4;
        } while (lVar9 != (ulong)uVar1 << 2);
        goto LAB_0010399d;
      }
LAB_00103a58:
      local_48 = local_48 & 0xffffffff;
      local_58 = (undefined1  [16])0x0;
      pvVar10 = (void *)local_68._0_8_;
    }
  }
  Memory::free_static(pvVar10,false);
  Memory::free_static((void *)local_68._8_8_,false);
LAB_001039b7:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ResourceLoaderText::set_uid(Ref<FileAccess>, long) */

uint ResourceLoaderText::set_uid(ResourceLoaderText *param_1,undefined8 *param_2)

{
  code *pcVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long in_FS_OFFSET;
  CowData<char32_t> *local_178;
  Object *local_f0;
  Object *local_e8;
  String local_e0 [8];
  undefined8 local_d8;
  String local_d0 [8];
  String local_c8 [8];
  undefined8 local_c0;
  String local_b8 [8];
  CowData<char32_t> local_b0 [8];
  String local_a8 [8];
  undefined8 local_a0;
  String local_98 [8];
  CowData<char32_t> local_90 [8];
  String local_88 [8];
  undefined8 local_80;
  String local_78 [8];
  CowData<char32_t> local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (Object *)0x0;
  Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_58,(Ref *)*param_2);
  open(param_1,(Ref<FileAccess> *)&local_58,1);
  pOVar2 = local_58;
  if (((local_58 == (Object *)0x0) || (cVar3 = RefCounted::unreference(), cVar3 == '\0')) ||
     (cVar3 = predelete_handler(pOVar2), cVar3 == '\0')) {
    iVar4 = *(int *)(param_1 + 0x2188);
  }
  else {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    iVar4 = *(int *)(param_1 + 0x2188);
  }
  if (iVar4 == 0) {
    param_1[0x2058] = (ResourceLoaderText)0x1;
    local_58 = (Object *)0x11769d;
    local_f0 = (Object *)0x0;
    local_68 = 0;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_68);
    String::operator+((String *)&local_60,(String *)(param_1 + 8));
    FileAccess::open((String *)&local_58,(int)(String *)&local_60,(Error *)0x2);
    Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_f0,(Ref *)local_58);
    if (((local_58 != (Object *)0x0) &&
        (cVar3 = RefCounted::unreference(), pOVar2 = local_58, cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_58), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    pOVar2 = local_f0;
    if (param_1[0x2048] == (ResourceLoaderText)0x0) {
      local_e8 = (Object *)0x0;
      if ((*(long *)(param_1 + 0x20d0) != 0) && (1 < *(uint *)(*(long *)(param_1 + 0x20d0) + -8))) {
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"\" ");
        operator+((char *)&local_68,(String *)"script_class=\"");
        String::operator+((String *)&local_58,(String *)&local_68);
        if (local_e8 != local_58) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          local_e8 = local_58;
          local_58 = (Object *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      }
      local_178 = (CowData<char32_t> *)&local_e8;
      pcVar1 = *(code **)(*(long *)pOVar2 + 0x2a8);
      local_60 = 0;
      local_50 = 2;
      local_58 = (Object *)&_LC84;
      String::parse_latin1((StrRange *)&local_60);
      ResourceUID::id_to_text((long)local_70);
      local_80 = 0;
      local_58 = (Object *)0x1176a8;
      local_50 = 6;
      String::parse_latin1((StrRange *)&local_80);
      itos((long)local_90);
      local_a0 = 0;
      local_58 = (Object *)0x1176af;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_a0);
      itos((long)local_b0);
      local_c0 = 0;
      local_58 = (Object *)0x1176e0;
      local_50 = 0xb;
      String::parse_latin1((StrRange *)&local_c0);
      local_d8 = 0;
      local_50 = 2;
      local_58 = (Object *)&_LC88;
      String::parse_latin1((StrRange *)&local_d8);
      operator+((char *)local_e0,(String *)"[gd_resource type=\"");
      String::operator+(local_d0,local_e0);
      String::operator+(local_c8,local_d0);
      String::operator+(local_b8,local_c8);
      String::operator+(local_a8,local_b8);
      String::operator+(local_98,local_a8);
      String::operator+(local_88,local_98);
      String::operator+(local_78,local_88);
      String::operator+((String *)&local_68,local_78);
      String::operator+((String *)&local_58,(String *)&local_68);
      (*pcVar1)(pOVar2);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref(local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref(local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref(local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref(local_178);
    }
    else {
      pcVar1 = *(code **)(*(long *)local_f0 + 0x2a8);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"\"]");
      ResourceUID::id_to_text((long)local_70);
      local_80 = 0;
      String::parse_latin1((String *)&local_80," uid=\"");
      itos((long)local_90);
      local_a0 = 0;
      String::parse_latin1((String *)&local_a0," format=");
      itos((long)local_b0);
      operator+((char *)local_a8,(String *)"[gd_scene load_steps=");
      String::operator+(local_98,local_a8);
      String::operator+(local_88,local_98);
      String::operator+(local_78,local_88);
      String::operator+((String *)&local_68,local_78);
      String::operator+((String *)&local_58,(String *)&local_68);
      (*pcVar1)(pOVar2);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
      CowData<char32_t>::_unref(local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref(local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref(local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    }
    while( true ) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x1e0))();
      cVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x1d8))();
      if (cVar3 != '\0') break;
      (**(code **)(*(long *)pOVar2 + 0x268))(pOVar2);
    }
    iVar4 = (**(code **)(*(long *)pOVar2 + 0x250))(pOVar2);
    uVar5 = -(uint)(iVar4 != 0) & 0x14;
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
  }
  else {
    _err_print_error("set_uid","scene/resources/resource_format_text.cpp",0x82a,
                     "Condition \"error != OK\" is true. Returning: error",0,0);
    uVar5 = *(uint *)(param_1 + 0x2188);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatSaverText::set_uid(String const&, long) */

int __thiscall
ResourceFormatSaverText::set_uid(ResourceFormatSaverText *this,String *param_1,long param_2)

{
  code *pcVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  CowData<char32_t> local_2210 [8];
  long local_2208;
  Object *local_2200;
  undefined8 local_21f8;
  Object *local_21f0;
  Object *local_21e8;
  undefined8 local_21e0;
  ResourceLoaderText local_21d8 [8];
  long local_21d0;
  long local_21c8 [1073];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::to_lower();
  cVar3 = String::ends_with((char *)local_2210);
  if ((cVar3 == '\0') && (cVar3 = String::ends_with((char *)local_2210), cVar3 == '\0')) {
    iVar4 = 0xf;
    goto LAB_00104939;
  }
  ProjectSettings::get_singleton();
  ProjectSettings::localize_path((String *)&local_2208);
  FileAccess::open((String *)&local_21f0,(int)param_1,(Error *)0x1);
  if (local_21f0 == (Object *)0x0) {
    iVar4 = 0x13;
    _err_print_error("set_uid","scene/resources/resource_format_text.cpp",0x85e,
                     "Method/function failed. Returning: ERR_CANT_OPEN",0,0);
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_21f0);
  }
  else {
    ResourceLoaderText::ResourceLoaderText(local_21d8);
    lVar5 = local_2208;
    if (local_21d0 != local_2208) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_21d0,(CowData *)&local_2208);
      lVar5 = local_21d0;
    }
    if (local_21c8[0] != lVar5) {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_21c8,(CowData *)&local_21d0);
    }
    pOVar2 = local_21f0;
    if (local_21f0 == (Object *)0x0) {
LAB_00104979:
      local_21e8 = (Object *)0x0;
      iVar4 = ResourceLoaderText::set_uid(local_21d8,&local_21e8,param_2);
    }
    else {
      local_21e8 = local_21f0;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') goto LAB_00104979;
      iVar4 = ResourceLoaderText::set_uid(local_21d8,&local_21e8,param_2);
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
    ResourceLoaderText::~ResourceLoaderText(local_21d8);
    if (((local_21f0 != (Object *)0x0) &&
        (cVar3 = RefCounted::unreference(), pOVar2 = local_21f0, cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_21f0), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
    if (iVar4 == 0) {
      DirAccess::create(&local_2200,0);
      pOVar2 = local_2200;
      pcVar1 = *(code **)(*(long *)local_2200 + 0x208);
      local_21e8 = (Object *)0x0;
      if (local_2208 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_21e8,(CowData *)&local_2208);
      }
      (*pcVar1)(pOVar2,(CowData<char32_t> *)&local_21e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_21e8);
      pOVar2 = local_2200;
      pcVar1 = *(code **)(*(long *)local_2200 + 0x200);
      local_21f0 = (Object *)0x0;
      if (local_2208 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_21f0,(CowData *)&local_2208);
      }
      local_21f8 = 0;
      local_21e8 = (Object *)0x11769d;
      local_21e0 = 7;
      String::parse_latin1((StrRange *)&local_21f8);
      String::operator+((String *)&local_21e8,(String *)&local_2208);
      (*pcVar1)(pOVar2,(CowData<char32_t> *)&local_21e8,(String *)&local_21f0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_21e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_21f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_21f0);
      if (((local_2200 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_2200), cVar3 != '\0')) {
        (**(code **)(*(long *)local_2200 + 0x140))(local_2200);
        Memory::free_static(local_2200,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2208);
LAB_00104939:
  CowData<char32_t>::_unref(local_2210);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



/* ResourceLoaderText::get_dependencies(Ref<FileAccess>, List<String, DefaultAllocator>*, bool) */

void __thiscall
ResourceLoaderText::get_dependencies
          (ResourceLoaderText *this,undefined8 *param_2,long *param_3,char param_4)

{
  String *this_00;
  HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
  *this_01;
  uint uVar1;
  long *plVar2;
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
  ulong uVar27;
  Object *pOVar28;
  char cVar29;
  uint uVar30;
  int iVar31;
  CowData<char32_t> *this_02;
  long lVar32;
  undefined1 (*pauVar33) [16];
  uint uVar34;
  long lVar35;
  long lVar36;
  uint uVar37;
  long in_FS_OFFSET;
  Object *local_a0;
  Variant local_98 [8];
  Object *local_90;
  undefined8 local_88;
  String local_80 [8];
  Variant local_78 [8];
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (Object *)0x0;
  Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_68,(Ref *)*param_2);
  open(this,(Ref<FileAccess> *)&local_68,0);
  pOVar28 = local_68;
  if (((local_68 != (Object *)0x0) && (cVar29 = RefCounted::unreference(), cVar29 != '\0')) &&
     (cVar29 = predelete_handler(pOVar28), cVar29 != '\0')) {
    (**(code **)(*(long *)pOVar28 + 0x140))(pOVar28);
    Memory::free_static(pOVar28,false);
  }
  this[0x2058] = (ResourceLoaderText)0x1;
  if (*(int *)(this + 0x2188) == 0) {
LAB_00104c30:
    cVar29 = String::operator==((String *)(this + 0x20d8),"ext_resource");
    if (cVar29 != '\0') {
      this_01 = (HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                 *)(this + 0x20e0);
      local_70 = 0;
      local_68 = (Object *)&_LC74;
      local_60 = 4;
      String::parse_latin1((StrRange *)&local_70);
      if ((*(long *)(this + 0x20e8) != 0) && (*(int *)(this + 0x210c) != 0)) {
        uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x2108) * 4);
        lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x2108) * 8);
        uVar30 = String::hash();
        uVar27 = CONCAT44(0,uVar1);
        lVar36 = *(long *)(this + 0x20f0);
        uVar34 = 1;
        if (uVar30 != 0) {
          uVar34 = uVar30;
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)uVar34 * lVar32;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar27;
        lVar35 = SUB168(auVar3 * auVar15,8);
        uVar30 = *(uint *)(lVar36 + lVar35 * 4);
        iVar31 = SUB164(auVar3 * auVar15,8);
        if (uVar30 != 0) {
          uVar37 = 0;
          do {
            if (uVar34 == uVar30) {
              cVar29 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 0x20e8) + lVar35 * 8) + 0x10),
                                          (String *)&local_70);
              if (cVar29 != '\0') goto LAB_00104da8;
              lVar36 = *(long *)(this + 0x20f0);
            }
            uVar37 = uVar37 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)(iVar31 + 1) * lVar32;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar27;
            lVar35 = SUB168(auVar4 * auVar16,8);
            uVar30 = *(uint *)(lVar36 + lVar35 * 4);
            iVar31 = SUB164(auVar4 * auVar16,8);
            if ((uVar30 == 0) ||
               (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar30 * lVar32, auVar17._8_8_ = 0,
               auVar17._0_8_ = uVar27, auVar6._8_8_ = 0,
               auVar6._0_8_ = (ulong)((uVar1 + iVar31) - SUB164(auVar5 * auVar17,8)) * lVar32,
               auVar18._8_8_ = 0, auVar18._0_8_ = uVar27, SUB164(auVar6 * auVar18,8) < uVar37))
            break;
          } while( true );
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      *(undefined4 *)(this + 0x2188) = 0x10;
      String::parse_latin1((String *)(this + 0x18),"Missing \'type\' in external resource tag");
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00105171;
      goto LAB_001052f1;
    }
LAB_001056a4:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("get_dependencies","scene/resources/resource_format_text.cpp",0x36a,
                     "Condition \"error != OK\" is true.",0,0);
    return;
  }
LAB_001052f1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00104da8:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_70 = 0;
  local_68 = (Object *)&_LC98;
  local_60 = 2;
  String::parse_latin1((StrRange *)&local_70);
  if ((*(long *)(this + 0x20e8) != 0) && (*(int *)(this + 0x210c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x2108) * 4);
    lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x2108) * 8);
    uVar30 = String::hash();
    uVar27 = CONCAT44(0,uVar1);
    lVar36 = *(long *)(this + 0x20f0);
    uVar34 = 1;
    if (uVar30 != 0) {
      uVar34 = uVar30;
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (ulong)uVar34 * lVar32;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar27;
    lVar35 = SUB168(auVar7 * auVar19,8);
    uVar30 = *(uint *)(lVar36 + lVar35 * 4);
    iVar31 = SUB164(auVar7 * auVar19,8);
    if (uVar30 != 0) {
      uVar37 = 0;
      do {
        if (uVar34 == uVar30) {
          cVar29 = String::operator==((String *)
                                      (*(long *)(*(long *)(this + 0x20e8) + lVar35 * 8) + 0x10),
                                      (String *)&local_70);
          if (cVar29 != '\0') goto LAB_00104f00;
          lVar36 = *(long *)(this + 0x20f0);
        }
        uVar37 = uVar37 + 1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)(iVar31 + 1) * lVar32;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar27;
        lVar35 = SUB168(auVar8 * auVar20,8);
        uVar30 = *(uint *)(lVar36 + lVar35 * 4);
        iVar31 = SUB164(auVar8 * auVar20,8);
        if ((uVar30 == 0) ||
           (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar30 * lVar32, auVar21._8_8_ = 0,
           auVar21._0_8_ = uVar27, auVar10._8_8_ = 0,
           auVar10._0_8_ = (ulong)((uVar1 + iVar31) - SUB164(auVar9 * auVar21,8)) * lVar32,
           auVar22._8_8_ = 0, auVar22._0_8_ = uVar27, SUB164(auVar10 * auVar22,8) < uVar37)) break;
      } while( true );
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  *(undefined4 *)(this + 0x2188) = 0x10;
  String::parse_latin1((String *)(this + 0x18),"Missing \'id\' in external resource tag");
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00105171:
    _printerr(this);
    return;
  }
  goto LAB_001052f1;
LAB_00104f00:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = (Object *)&_LC100;
  local_70 = 0;
  local_60 = 4;
  String::parse_latin1((StrRange *)&local_70);
  HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
  ::operator[](this_01,(String *)&local_70);
  Variant::operator_cast_to_String((Variant *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = (Object *)&_LC74;
  local_70 = 0;
  local_60 = 4;
  String::parse_latin1((StrRange *)&local_70);
  HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
  ::operator[](this_01,(String *)&local_70);
  Variant::operator_cast_to_String(local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_90 = (Object *)0x0;
  local_70 = 0;
  local_68 = (Object *)&_LC78;
  local_60 = 3;
  String::parse_latin1((StrRange *)&local_70);
  if ((*(long *)(this + 0x20e8) != 0) && (*(int *)(this + 0x210c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x2108) * 4);
    lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x2108) * 8);
    uVar30 = String::hash();
    uVar27 = CONCAT44(0,uVar1);
    lVar36 = *(long *)(this + 0x20f0);
    uVar34 = 1;
    if (uVar30 != 0) {
      uVar34 = uVar30;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)uVar34 * lVar32;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar27;
    lVar35 = SUB168(auVar11 * auVar23,8);
    uVar30 = *(uint *)(lVar36 + lVar35 * 4);
    iVar31 = SUB164(auVar11 * auVar23,8);
    if (uVar30 != 0) {
      uVar37 = 0;
      do {
        if (uVar34 == uVar30) {
          cVar29 = String::operator==((String *)
                                      (*(long *)(*(long *)(this + 0x20e8) + lVar35 * 8) + 0x10),
                                      (String *)&local_70);
          if (cVar29 != '\0') {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            local_68 = (Object *)&_LC78;
            local_70 = 0;
            local_60 = 3;
            String::parse_latin1((StrRange *)&local_70);
            HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
            ::operator[](this_01,(String *)&local_70);
            Variant::operator_cast_to_String(local_78);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            lVar32 = ResourceUID::text_to_id(ResourceUID::singleton);
            if (lVar32 == -1) {
              CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
              goto LAB_001051a5;
            }
            if (local_90 != local_a0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_a0);
            }
            ResourceUID::id_to_text((long)&local_68);
            if (local_a0 != local_68) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
              local_a0 = local_68;
              local_68 = (Object *)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
            goto joined_r0x00105404;
          }
          lVar36 = *(long *)(this + 0x20f0);
        }
        uVar37 = uVar37 + 1;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)(iVar31 + 1) * lVar32;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar27;
        lVar35 = SUB168(auVar12 * auVar24,8);
        uVar30 = *(uint *)(lVar36 + lVar35 * 4);
        iVar31 = SUB164(auVar12 * auVar24,8);
      } while ((uVar30 != 0) &&
              (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar30 * lVar32, auVar25._8_8_ = 0,
              auVar25._0_8_ = uVar27, auVar14._8_8_ = 0,
              auVar14._0_8_ = (ulong)((uVar1 + iVar31) - SUB164(auVar13 * auVar25,8)) * lVar32,
              auVar26._8_8_ = 0, auVar26._0_8_ = uVar27, uVar37 <= SUB164(auVar14 * auVar26,8)));
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_001051a5:
  iVar31 = String::find((char *)&local_a0,0x117725);
  if ((iVar31 == -1) && (cVar29 = String::is_relative_path(), cVar29 != '\0')) {
    ProjectSettings::get_singleton();
    String::get_base_dir();
    String::path_join((String *)&local_70);
    ProjectSettings::localize_path((String *)&local_68);
    if (local_a0 != local_68) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      local_a0 = local_68;
      local_68 = (Object *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  }
joined_r0x00105404:
  if (param_4 == '\0') {
    if ((local_90 == (Object *)0x0) || (*(uint *)(local_90 + -8) < 2)) goto LAB_001051e3;
    String::operator+=((String *)&local_a0,"::");
  }
  else {
    operator+((char *)&local_68,(String *)&_LC59);
    String::operator+=((String *)&local_a0,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if ((local_90 == (Object *)0x0) || (*(uint *)(local_90 + -8) < 2)) goto LAB_001051e3;
  }
  operator+((char *)&local_68,(String *)&_LC59);
  String::operator+=((String *)&local_a0,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_001051e3:
  if (*param_3 == 0) {
    pauVar33 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *param_3 = (long)pauVar33;
    *(undefined4 *)pauVar33[1] = 0;
    *pauVar33 = (undefined1  [16])0x0;
  }
  this_02 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])this_02 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_02 + 0x10) = (undefined1  [16])0x0;
  if (local_a0 != (Object *)0x0) {
    CowData<char32_t>::_ref(this_02,(CowData *)&local_a0);
  }
  plVar2 = (long *)*param_3;
  lVar32 = plVar2[1];
  *(undefined8 *)(this_02 + 8) = 0;
  *(long **)(this_02 + 0x18) = plVar2;
  *(long *)(this_02 + 0x10) = lVar32;
  if (lVar32 != 0) {
    *(CowData<char32_t> **)(lVar32 + 8) = this_02;
  }
  plVar2[1] = (long)this_02;
  if (*plVar2 == 0) {
    *plVar2 = (long)this_02;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  this_00 = (String *)(this + 0x18);
  iVar31 = VariantParser::parse_tag
                     ((Stream *)(this + 0x28),(int *)(this + 0x2128),this_00,(Tag *)(this + 0x20d8),
                      (ResourceParser *)(this + 0x2168),false);
  if (iVar31 != 0) {
    itos((long)local_78);
    local_88 = 0;
    String::parse_latin1((String *)&local_88," - ");
    String::operator+(local_80,this_00);
    String::operator+((String *)&local_70,local_80);
    Variant::Variant((Variant *)local_58,(String *)&local_70);
    stringify_variants((Variant *)&local_68);
    __print_line((String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    String::parse_latin1(this_00,"Unexpected end of file");
    _printerr(this);
    *(undefined4 *)(this + 0x2188) = 0x10;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    goto LAB_001056a4;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  goto LAB_00104c30;
}



/* ResourceFormatLoaderText::get_dependencies(String const&, List<String, DefaultAllocator>*, bool)
    */

void __thiscall
ResourceFormatLoaderText::get_dependencies
          (ResourceFormatLoaderText *this,String *param_1,List *param_2,bool param_3)

{
  Object *pOVar1;
  char cVar2;
  long in_FS_OFFSET;
  Object *local_21d8;
  Object *local_21d0;
  ResourceLoaderText local_21c8 [8];
  Object *local_21c0;
  Object *local_21b8 [1073];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_21d8,(int)param_1,(Error *)0x1);
  if (local_21d8 == (Object *)0x0) {
    _err_print_error("get_dependencies","scene/resources/resource_format_text.cpp",0x5ff,
                     "Method/function failed.",0,0);
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_21d8);
    goto LAB_0010589c;
  }
  ResourceLoaderText::ResourceLoaderText(local_21c8);
  ProjectSettings::get_singleton();
  ProjectSettings::localize_path((String *)&local_21d0);
  if (local_21c0 != local_21d0) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_21c0);
    local_21c0 = local_21d0;
    local_21d0 = (Object *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_21d0);
  if (local_21b8[0] != local_21c0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_21b8,(CowData *)&local_21c0);
  }
  pOVar1 = local_21d8;
  if (local_21d8 == (Object *)0x0) {
LAB_001058d1:
    local_21d0 = (Object *)0x0;
    ResourceLoaderText::get_dependencies(local_21c8,(String *)&local_21d0,param_2,param_3);
  }
  else {
    local_21d0 = local_21d8;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') goto LAB_001058d1;
    ResourceLoaderText::get_dependencies(local_21c8,(String *)&local_21d0,param_2,param_3);
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
  ResourceLoaderText::~ResourceLoaderText(local_21c8);
  if (((local_21d8 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_21d8), cVar2 != '\0')) {
    (**(code **)(*(long *)local_21d8 + 0x140))(local_21d8);
    Memory::free_static(local_21d8,false);
  }
LAB_0010589c:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ResourceLoaderText::get_classes_used(HashSet<StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >*) [clone .part.0] */

undefined4 ResourceLoaderText::get_classes_used(HashSet *param_1)

{
  String *this;
  uint uVar1;
  Object *pOVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  void *pvVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined8 local_168;
  ulong local_160;
  char *local_158;
  undefined8 local_150;
  undefined1 *local_148;
  undefined8 local_140;
  code *local_138;
  code *local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_f8 = _LC8;
  this = (String *)(param_1 + 0x20d8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  param_1[0x2058] = (HashSet)0x1;
  local_128[0] = 1;
  local_c8 = local_f8;
  local_98 = local_f8;
  local_68 = local_f8;
  local_118 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_140 = 0;
  local_138 = _parse_ext_resource_dummys;
  local_130 = _parse_sub_resource_dummys;
  local_148 = local_128;
  do {
    cVar4 = String::operator==(this,"ext_resource");
    if (cVar4 == '\0') goto LAB_00105ab0;
    iVar5 = VariantParser::parse_tag
                      ((Stream *)(param_1 + 0x28),(int *)(param_1 + 0x2128),
                       (String *)(param_1 + 0x18),(Tag *)this,(ResourceParser *)&local_148,false);
    *(int *)(param_1 + 0x2188) = iVar5;
  } while (iVar5 == 0);
LAB_00105ff0:
  _printerr((ResourceLoaderText *)param_1);
  uVar7 = *(undefined4 *)(param_1 + 0x2188);
LAB_00105ffe:
  pvVar8 = (void *)local_88._0_8_;
  uVar3 = local_68;
joined_r0x00105cbc:
  local_68 = uVar3;
  if (pvVar8 != (void *)0x0) {
    local_68._4_4_ = (int)(uVar3 >> 0x20);
    bVar9 = local_68._4_4_ != 0;
    if (bVar9) {
      uVar1 = *(uint *)(hash_table_size_primes + (uVar3 & 0xffffffff) * 4);
      if (uVar1 == 0) {
        local_68 = uVar3 & 0xffffffff;
        local_78 = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(local_88._8_8_ + lVar6) != 0) {
            pvVar8 = *(void **)((long)pvVar8 + lVar6 * 2);
            *(int *)(local_88._8_8_ + lVar6) = 0;
            if ((*(long *)((long)pvVar8 + 0x18) != 0) &&
               (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
              pOVar2 = *(Object **)((long)pvVar8 + 0x18);
              cVar4 = predelete_handler(pOVar2);
              if (cVar4 != '\0') {
                (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                Memory::free_static(pOVar2,false);
              }
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar8 + 0x10));
            Memory::free_static(pvVar8,false);
            *(undefined8 *)(local_88._0_8_ + lVar6 * 2) = 0;
            pvVar8 = (void *)local_88._0_8_;
          }
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar1 << 2 != lVar6);
        local_68 = local_68 & 0xffffffff;
        local_78 = (undefined1  [16])0x0;
        if (pvVar8 == (void *)0x0) goto LAB_00105cc8;
      }
    }
    Memory::free_static(pvVar8,false);
    Memory::free_static((void *)local_88._8_8_,false);
  }
LAB_00105cc8:
  if ((void *)local_b8._0_8_ != (void *)0x0) {
    pvVar8 = (void *)local_b8._0_8_;
    if (local_98._4_4_ != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (local_98 & 0xffffffff) * 4);
      if (uVar1 == 0) {
        local_98 = local_98 & 0xffffffff;
        local_a8 = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(local_b8._8_8_ + lVar6) != 0) {
            pvVar8 = *(void **)((long)pvVar8 + lVar6 * 2);
            *(int *)(local_b8._8_8_ + lVar6) = 0;
            if ((*(long *)((long)pvVar8 + 0x10) != 0) &&
               (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
              pOVar2 = *(Object **)((long)pvVar8 + 0x10);
              cVar4 = predelete_handler(pOVar2);
              if (cVar4 != '\0') {
                (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                Memory::free_static(pOVar2,false);
              }
            }
            Memory::free_static(pvVar8,false);
            *(undefined8 *)(local_b8._0_8_ + lVar6 * 2) = 0;
            pvVar8 = (void *)local_b8._0_8_;
          }
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar1 << 2 != lVar6);
        local_98 = local_98 & 0xffffffff;
        local_a8 = (undefined1  [16])0x0;
        if (pvVar8 == (void *)0x0) goto LAB_00105d8a;
      }
    }
    Memory::free_static(pvVar8,false);
    Memory::free_static((void *)local_b8._8_8_,false);
  }
LAB_00105d8a:
  if ((void *)local_e8._0_8_ != (void *)0x0) {
    pvVar8 = (void *)local_e8._0_8_;
    if (local_c8._4_4_ != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (local_c8 & 0xffffffff) * 4);
      if (uVar1 == 0) {
        local_c8 = local_c8 & 0xffffffff;
        local_d8 = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(local_e8._8_8_ + lVar6) != 0) {
            pvVar8 = *(void **)((long)pvVar8 + lVar6 * 2);
            *(int *)(local_e8._8_8_ + lVar6) = 0;
            if ((*(long *)((long)pvVar8 + 0x18) != 0) &&
               (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
              pOVar2 = *(Object **)((long)pvVar8 + 0x18);
              cVar4 = predelete_handler(pOVar2);
              if (cVar4 != '\0') {
                (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                Memory::free_static(pOVar2,false);
              }
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar8 + 0x10));
            Memory::free_static(pvVar8,false);
            *(undefined8 *)(local_e8._0_8_ + lVar6 * 2) = 0;
            pvVar8 = (void *)local_e8._0_8_;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar1 << 2);
        local_c8 = local_c8 & 0xffffffff;
        local_d8 = (undefined1  [16])0x0;
        if (pvVar8 == (void *)0x0) goto LAB_00105e53;
      }
    }
    Memory::free_static(pvVar8,false);
    Memory::free_static((void *)local_e8._8_8_,false);
  }
LAB_00105e53:
  if ((void *)local_118._0_8_ != (void *)0x0) {
    pvVar8 = (void *)local_118._0_8_;
    if (local_f8._4_4_ != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (local_f8 & 0xffffffff) * 4);
      if (uVar1 == 0) {
        local_f8 = local_f8 & 0xffffffff;
        local_108 = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(local_118._8_8_ + lVar6) != 0) {
            pvVar8 = *(void **)((long)pvVar8 + lVar6 * 2);
            *(int *)(local_118._8_8_ + lVar6) = 0;
            if ((*(long *)((long)pvVar8 + 0x10) != 0) &&
               (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
              pOVar2 = *(Object **)((long)pvVar8 + 0x10);
              cVar4 = predelete_handler(pOVar2);
              if (cVar4 != '\0') {
                (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                Memory::free_static(pOVar2,false);
              }
            }
            Memory::free_static(pvVar8,false);
            *(undefined8 *)(local_118._0_8_ + lVar6 * 2) = 0;
            pvVar8 = (void *)local_118._0_8_;
          }
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar1 << 2 != lVar6);
        local_f8 = local_f8 & 0xffffffff;
        local_108 = (undefined1  [16])0x0;
        if (pvVar8 == (void *)0x0) goto LAB_00105f0a;
      }
    }
    Memory::free_static(pvVar8,false);
    Memory::free_static((void *)local_118._8_8_,false);
  }
LAB_00105f0a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00105ab0:
  cVar4 = String::operator==(this,"sub_resource");
  if ((cVar4 == '\0') && (cVar4 = String::operator==(this,"resource"), cVar4 == '\0')) {
    goto LAB_001062b8;
  }
  cVar4 = String::operator==(this,"sub_resource");
  if (cVar4 == '\0') {
    local_168 = 0;
    local_150 = 8;
    local_158 = "res_type";
    String::parse_latin1((StrRange *)&local_168);
    HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
    ::operator[]((HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                  *)(param_1 + 0x20e0),(String *)&local_168);
  }
  else {
    local_160 = 0;
    local_150 = 4;
    local_158 = "type";
    String::parse_latin1((StrRange *)&local_160);
    local_158 = (char *)((ulong)local_158 & 0xffffffff00000000);
    cVar4 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
            ::_lookup_pos((HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                           *)(param_1 + 0x20e0),(String *)&local_160,(uint *)&local_158);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
    if (cVar4 == '\0') goto LAB_00105fd6;
    local_168 = 0;
    local_158 = "type";
    local_150 = 4;
    String::parse_latin1((StrRange *)&local_168);
    HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
    ::operator[]((HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                  *)(param_1 + 0x20e0),(String *)&local_168);
  }
  Variant::operator_cast_to_StringName((Variant *)&local_160);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_158);
  if ((StringName::configured != '\0') && (local_160 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  while( true ) {
    local_158 = (char *)0x0;
    local_58 = 0;
    local_50 = (undefined1  [16])0x0;
    iVar5 = VariantParser::parse_tag_assign_eof
                      ((Stream *)(param_1 + 0x28),(int *)(param_1 + 0x2128),
                       (String *)(param_1 + 0x18),(Tag *)this,(String *)&local_158,
                       (Variant *)&local_58,(ResourceParser *)&local_148,false);
    *(int *)(param_1 + 0x2188) = iVar5;
    if (iVar5 != 0) {
      uVar7 = 0;
      if (iVar5 == 0x12) goto LAB_00105c90;
      goto LAB_00105c82;
    }
    if ((local_158 == (char *)0x0) || (*(uint *)(local_158 + -8) < 2)) break;
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  }
  if ((*(long *)(param_1 + 0x20d8) == 0) || (*(uint *)(*(long *)(param_1 + 0x20d8) + -8) < 2))
  goto LAB_00105c69;
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  goto LAB_00105ab0;
LAB_001062b8:
  cVar4 = String::operator==(this,"node");
  if (cVar4 == '\0') goto LAB_001064fe;
  if (param_1[0x2048] == (HashSet)0x0) {
    *(undefined4 *)(param_1 + 0x2188) = 0x10;
    String::parse_latin1((String *)(param_1 + 0x18),"Unexpected \'node\' tag in a resource file");
    _printerr((ResourceLoaderText *)param_1);
    uVar7 = *(undefined4 *)(param_1 + 0x2188);
    goto LAB_00105ffe;
  }
  local_158 = (char *)0x0;
  String::parse_latin1((String *)&local_158,"type");
  local_160 = local_160 & 0xffffffff00000000;
  cVar4 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
          ::_lookup_pos((HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                         *)(param_1 + 0x20e0),(String *)&local_158,(uint *)&local_160);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  if (cVar4 == '\0') goto LAB_00105fd6;
  local_168 = 0;
  String::parse_latin1((String *)&local_168,"type");
  HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
  ::operator[]((HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                *)(param_1 + 0x20e0),(String *)&local_168);
  Variant::operator_cast_to_StringName((Variant *)&local_160);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_158);
  if ((StringName::configured != '\0') && (local_160 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  while( true ) {
    local_158 = (char *)0x0;
    local_58 = 0;
    local_50 = (undefined1  [16])0x0;
    iVar5 = VariantParser::parse_tag_assign_eof
                      ((Stream *)(param_1 + 0x28),(int *)(param_1 + 0x2128),
                       (String *)(param_1 + 0x18),(Tag *)this,(String *)&local_158,
                       (Variant *)&local_58,(ResourceParser *)&local_148,false);
    *(int *)(param_1 + 0x2188) = iVar5;
    if ((iVar5 != 0x11) && (iVar5 != 0)) {
      uVar7 = 0;
      if (iVar5 == 0x12) goto LAB_0010644f;
      goto LAB_00106441;
    }
    if ((local_158 == (char *)0x0) || (*(uint *)(local_158 + -8) < 2)) break;
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  }
  if ((*(long *)(param_1 + 0x20d8) == 0) || (*(uint *)(*(long *)(param_1 + 0x20d8) + -8) < 2)) {
    *(undefined4 *)(param_1 + 0x2188) = 0x10;
    String::parse_latin1
              ((String *)(param_1 + 0x18),"Premature end of file while parsing [sub_resource]");
LAB_00106441:
    _printerr((ResourceLoaderText *)param_1);
    uVar7 = *(undefined4 *)(param_1 + 0x2188);
LAB_0010644f:
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
    goto LAB_00105ffe;
  }
  *(undefined4 *)(param_1 + 0x2188) = 0;
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  goto LAB_001062b8;
LAB_001064fe:
  uVar7 = 0;
  goto LAB_00105ffe;
LAB_00105fd6:
  *(undefined4 *)(param_1 + 0x2188) = 0x10;
  String::parse_latin1((String *)(param_1 + 0x18),"Missing \'type\' in external resource tag");
  goto LAB_00105ff0;
LAB_00105c69:
  *(undefined4 *)(param_1 + 0x2188) = 0x10;
  String::parse_latin1
            ((String *)(param_1 + 0x18),"Premature end of file while parsing [sub_resource]");
LAB_00105c82:
  _printerr((ResourceLoaderText *)param_1);
  uVar7 = *(undefined4 *)(param_1 + 0x2188);
LAB_00105c90:
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  pvVar8 = (void *)local_88._0_8_;
  uVar3 = local_68;
  goto joined_r0x00105cbc;
}



/* ResourceLoaderText::get_classes_used(HashSet<StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >*) */

void ResourceLoaderText::get_classes_used(HashSet *param_1)

{
  if (*(int *)(param_1 + 0x2188) != 0) {
    return;
  }
  get_classes_used(param_1);
  return;
}



/* ResourceFormatLoaderText::get_classes_used(String const&, HashSet<StringName,
   HashMapHasherDefault, HashMapComparatorDefault<StringName> >*) */

void ResourceFormatLoaderText::get_classes_used(String *param_1,HashSet *param_2)

{
  Object *pOVar1;
  char cVar2;
  long in_FS_OFFSET;
  String aSStack_21e8 [8];
  Object *local_21e0;
  Object *local_21d8 [2];
  ResourceLoaderText local_21c8 [8];
  Object *local_21c0;
  Object *local_21b8 [1071];
  int local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_extension();
  String::to_lower();
  CowData<char32_t>::_unref((CowData<char32_t> *)local_21d8);
  cVar2 = String::operator==(aSStack_21e8,"tscn");
  if (cVar2 != '\0') {
    StringName::StringName((StringName *)&local_21e0,"PackedScene",false);
    HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
              ((StringName *)local_21d8);
    if ((StringName::configured != '\0') && (local_21e0 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  FileAccess::open((String *)&local_21e0,(int)param_2,(Error *)0x1);
  if (local_21e0 == (Object *)0x0) {
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_21e0);
    CowData<char32_t>::_unref((CowData<char32_t> *)aSStack_21e8);
    goto LAB_00106703;
  }
  ResourceLoaderText::ResourceLoaderText(local_21c8);
  ProjectSettings::get_singleton();
  ProjectSettings::localize_path((String *)local_21d8);
  if (local_21c0 != local_21d8[0]) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_21c0);
    local_21c0 = local_21d8[0];
    local_21d8[0] = (Object *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_21d8);
  if (local_21b8[0] != local_21c0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_21b8,(CowData *)&local_21c0);
  }
  pOVar1 = local_21e0;
  if (local_21e0 == (Object *)0x0) {
LAB_00106781:
    local_21d8[0] = (Object *)0x0;
    ResourceLoaderText::open(local_21c8,(CowData<char32_t> *)local_21d8,0);
  }
  else {
    local_21d8[0] = local_21e0;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') goto LAB_00106781;
    ResourceLoaderText::open(local_21c8,(CowData<char32_t> *)local_21d8,0);
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
  if (local_40 == 0) {
    ResourceLoaderText::get_classes_used((HashSet *)local_21c8);
  }
  ResourceLoaderText::~ResourceLoaderText(local_21c8);
  if (((local_21e0 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_21e0), cVar2 != '\0')) {
    (**(code **)(*(long *)local_21e0 + 0x140))(local_21e0);
    Memory::free_static(local_21e0,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)aSStack_21e8);
LAB_00106703:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ResourceLoaderText::recognize_script_class(Ref<FileAccess>) */

StrRange *
ResourceLoaderText::recognize_script_class
          (StrRange *param_1,ResourceLoaderText *param_2,long *param_3)

{
  uint uVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  Variant *this;
  Object *pOVar5;
  void *pvVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
  local_70 [8];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  pOVar2 = (Object *)*param_3;
  pOVar5 = *(Object **)(param_2 + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_2 + 0x2188) = 0;
  *(undefined4 *)(param_2 + 0x2128) = 1;
  if (pOVar2 != pOVar5) {
    *(Object **)(param_2 + 0x20) = pOVar2;
    if (pOVar2 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(param_2 + 0x20) = 0;
      }
    }
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(pOVar5);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
    }
    pOVar5 = *(Object **)(param_2 + 0x20);
  }
  Ref<FileAccess>::operator=((Ref<FileAccess> *)(param_2 + 0x2040),(Ref *)pOVar5);
  param_2[0x2058] = (ResourceLoaderText)0x1;
  local_78 = 0;
  local_48 = 2;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  iVar4 = VariantParser::parse_tag
                    ((Stream *)(param_2 + 0x28),(int *)(param_2 + 0x2128),(String *)(param_2 + 0x18)
                     ,(Tag *)&local_78,(ResourceParser *)0x0,false);
  if (iVar4 == 0) {
    local_90 = 0;
    local_88 = "format";
    local_80 = 6;
    String::parse_latin1((StrRange *)&local_90);
    local_88 = (char *)((ulong)local_88 & 0xffffffff00000000);
    cVar3 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
            ::_lookup_pos(local_70,(String *)&local_90,(uint *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if (cVar3 != '\0') {
      local_90 = 0;
      local_88 = "format";
      local_80 = 6;
      String::parse_latin1((StrRange *)&local_90);
      this = (Variant *)
             HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
             ::operator[](local_70,(String *)&local_90);
      iVar4 = Variant::operator_cast_to_int(this);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if (4 < iVar4) {
        String::parse_latin1((String *)(param_2 + 0x18),"Saved with newer format version");
        _printerr(param_2);
        *(undefined8 *)param_1 = 0;
        String::parse_latin1((String *)param_1,"");
        goto LAB_00106934;
      }
    }
    cVar3 = String::operator!=((String *)&local_78,"gd_resource");
    if (cVar3 == '\0') {
      local_90 = 0;
      local_88 = "script_class";
      local_80 = 0xc;
      String::parse_latin1((StrRange *)&local_90);
      local_88 = (char *)((ulong)local_88 & 0xffffffff00000000);
      cVar3 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
              ::_lookup_pos(local_70,(String *)&local_90,(uint *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if (cVar3 == '\0') {
        *(undefined8 *)param_1 = 0;
        String::parse_latin1((String *)param_1,"");
      }
      else {
        local_88 = (char *)0x0;
        String::parse_latin1((String *)&local_88,"script_class");
        HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
        ::operator[](local_70,(String *)&local_88);
        Variant::operator_cast_to_String((Variant *)param_1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      }
    }
    else {
      *(undefined8 *)param_1 = 0;
      local_88 = "";
      local_80 = 0;
      String::parse_latin1(param_1);
    }
  }
  else {
    _printerr(param_2);
    *(undefined8 *)param_1 = 0;
    local_80 = 0;
    local_88 = "";
    String::parse_latin1(param_1);
  }
LAB_00106934:
  if ((void *)local_68._0_8_ != (void *)0x0) {
    pvVar6 = (void *)local_68._0_8_;
    if (local_48._4_4_ != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4);
      if (uVar1 == 0) {
        local_48 = local_48 & 0xffffffff;
        local_58 = (undefined1  [16])0x0;
      }
      else {
        lVar7 = 0;
        do {
          if (*(int *)(local_68._8_8_ + lVar7) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar7 * 2);
            *(int *)(local_68._8_8_ + lVar7) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar6 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar6 + 0x10));
            Memory::free_static(pvVar6,false);
            *(undefined8 *)(local_68._0_8_ + lVar7 * 2) = 0;
            pvVar6 = (void *)local_68._0_8_;
          }
          lVar7 = lVar7 + 4;
        } while (lVar7 != (ulong)uVar1 << 2);
        local_48 = local_48 & 0xffffffff;
        local_58 = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_001069e2;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static((void *)local_68._8_8_,false);
  }
LAB_001069e2:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoaderText::get_resource_script_class(String const&) const */

String * ResourceFormatLoaderText::get_resource_script_class(String *param_1)

{
  Object *pOVar1;
  char cVar2;
  int in_EDX;
  long in_FS_OFFSET;
  String local_21e0 [8];
  Ref *local_21d8;
  Object *local_21d0;
  ResourceLoaderText local_21c8 [8];
  Object *local_21c0;
  Object *local_21b8 [1073];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_extension();
  String::to_lower();
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_21d0);
  cVar2 = String::operator!=(local_21e0,"tres");
  if (cVar2 == '\0') {
    FileAccess::open((String *)&local_21d8,in_EDX,(Error *)0x1);
    if (local_21d8 == (Ref *)0x0) {
      *(undefined8 *)param_1 = 0;
      String::parse_latin1(param_1,"");
    }
    else {
      ResourceLoaderText::ResourceLoaderText(local_21c8);
      ProjectSettings::get_singleton();
      ProjectSettings::localize_path((String *)&local_21d0);
      if (local_21c0 != local_21d0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_21c0);
        local_21c0 = local_21d0;
        local_21d0 = (Object *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_21d0);
      if (local_21b8[0] != local_21c0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_21b8,(CowData *)&local_21c0);
      }
      local_21d0 = (Object *)0x0;
      Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_21d0,local_21d8);
      ResourceLoaderText::recognize_script_class
                (param_1,local_21c8,(CowData<char32_t> *)&local_21d0);
      pOVar1 = local_21d0;
      if (local_21d0 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(pOVar1);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
            Memory::free_static(pOVar1,false);
          }
        }
      }
      ResourceLoaderText::~ResourceLoaderText(local_21c8);
    }
    if (local_21d8 != (Ref *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler((Object *)local_21d8);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)local_21d8 + 0x140))(local_21d8);
          Memory::free_static(local_21d8,false);
        }
      }
    }
  }
  else {
    *(undefined8 *)param_1 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_21e0);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceLoaderText::recognize(Ref<FileAccess>) */

StrRange *
ResourceLoaderText::recognize(StrRange *param_1,ResourceLoaderText *param_2,long *param_3)

{
  uint uVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  Variant *this;
  Object *pOVar5;
  char *pcVar6;
  void *pvVar7;
  long lVar8;
  long in_FS_OFFSET;
  ulong local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
  local_70 [8];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  pOVar2 = (Object *)*param_3;
  pOVar5 = *(Object **)(param_2 + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_2 + 0x2188) = 0;
  *(undefined4 *)(param_2 + 0x2128) = 1;
  if (pOVar2 != pOVar5) {
    *(Object **)(param_2 + 0x20) = pOVar2;
    if ((pOVar2 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
      *(undefined8 *)(param_2 + 0x20) = 0;
    }
    if (((pOVar5 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
       (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
    pOVar5 = *(Object **)(param_2 + 0x20);
  }
  Ref<FileAccess>::operator=((Ref<FileAccess> *)(param_2 + 0x2040),(Ref *)pOVar5);
  param_2[0x2058] = (ResourceLoaderText)0x1;
  local_78 = 0;
  local_48 = 2;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  iVar4 = VariantParser::parse_tag
                    ((Stream *)(param_2 + 0x28),(int *)(param_2 + 0x2128),(String *)(param_2 + 0x18)
                     ,(Tag *)&local_78,(ResourceParser *)0x0,false);
  if (iVar4 == 0) {
    local_90 = 0;
    local_80 = 6;
    local_88 = "format";
    String::parse_latin1((StrRange *)&local_90);
    local_88 = (char *)((ulong)local_88 & 0xffffffff00000000);
    cVar3 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
            ::_lookup_pos(local_70,(String *)&local_90,(uint *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if (cVar3 == '\0') {
LAB_00107138:
      cVar3 = String::operator==((String *)&local_78,"gd_scene");
      if (cVar3 == '\0') {
        cVar3 = String::operator!=((String *)&local_78,"gd_resource");
        if (cVar3 != '\0') goto LAB_0010725a;
        local_88 = (char *)0x0;
        String::parse_latin1((String *)&local_88,"type");
        local_90 = local_90 & 0xffffffff00000000;
        cVar3 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                ::_lookup_pos(local_70,(String *)&local_88,(uint *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        if (cVar3 == '\0') {
          pcVar6 = "Missing \'type\' field in \'gd_resource\' tag";
          goto LAB_0010724a;
        }
        local_88 = (char *)0x0;
        String::parse_latin1((String *)&local_88,"type");
        HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
        ::operator[](local_70,(String *)&local_88);
        Variant::operator_cast_to_String((Variant *)param_1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      }
      else {
        *(undefined8 *)param_1 = 0;
        local_88 = "PackedScene";
        local_80 = 0xb;
        String::parse_latin1(param_1);
      }
    }
    else {
      local_90 = 0;
      local_88 = "format";
      local_80 = 6;
      String::parse_latin1((StrRange *)&local_90);
      this = (Variant *)
             HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
             ::operator[](local_70,(String *)&local_90);
      iVar4 = Variant::operator_cast_to_int(this);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      pcVar6 = "Saved with newer format version";
      if (iVar4 < 5) goto LAB_00107138;
LAB_0010724a:
      String::parse_latin1((String *)(param_2 + 0x18),pcVar6);
      _printerr(param_2);
LAB_0010725a:
      *(undefined8 *)param_1 = 0;
      String::parse_latin1((String *)param_1,"");
    }
  }
  else {
    _printerr(param_2);
    *(undefined8 *)param_1 = 0;
    local_80 = 0;
    local_88 = "";
    String::parse_latin1(param_1);
  }
  if ((void *)local_68._0_8_ != (void *)0x0) {
    pvVar7 = (void *)local_68._0_8_;
    if (local_48._4_4_ != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4);
      if (uVar1 == 0) {
        local_48 = local_48 & 0xffffffff;
        local_58 = (undefined1  [16])0x0;
      }
      else {
        lVar8 = 0;
        do {
          if (*(int *)(local_68._8_8_ + lVar8) != 0) {
            pvVar7 = *(void **)((long)pvVar7 + lVar8 * 2);
            *(int *)(local_68._8_8_ + lVar8) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar7 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar7 + 0x10));
            Memory::free_static(pvVar7,false);
            *(undefined8 *)(local_68._0_8_ + lVar8 * 2) = 0;
            pvVar7 = (void *)local_68._0_8_;
          }
          lVar8 = lVar8 + 4;
        } while (lVar8 != (ulong)uVar1 << 2);
        local_48 = local_48 & 0xffffffff;
        local_58 = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_00107070;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static((void *)local_68._8_8_,false);
  }
LAB_00107070:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* ResourceFormatLoaderText::get_resource_type(String const&) const */

String * ResourceFormatLoaderText::get_resource_type(String *param_1)

{
  char *pcVar1;
  char cVar2;
  int in_EDX;
  long in_FS_OFFSET;
  String local_2208 [8];
  Ref *local_2200;
  CowData<char32_t> local_21f8 [8];
  long local_21f0;
  char *local_21e8;
  undefined8 local_21e0;
  ResourceLoaderText local_21d8 [8];
  char *local_21d0;
  char *local_21c8 [1073];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_extension();
  String::to_lower();
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_21e8);
  cVar2 = String::operator==(local_2208,"tscn");
  if (cVar2 != '\0') {
    *(undefined8 *)param_1 = 0;
    local_21e8 = "PackedScene";
    local_21e0 = 0xb;
    String::parse_latin1((StrRange *)param_1);
    goto LAB_00107398;
  }
  cVar2 = String::operator!=(local_2208,"tres");
  if (cVar2 != '\0') {
    *(undefined8 *)param_1 = 0;
    goto LAB_00107398;
  }
  FileAccess::open((String *)&local_2200,in_EDX,(Error *)0x1);
  if (local_2200 == (Ref *)0x0) {
    *(undefined8 *)param_1 = 0;
    String::parse_latin1(param_1,"");
  }
  else {
    ResourceLoaderText::ResourceLoaderText(local_21d8);
    ProjectSettings::get_singleton();
    ProjectSettings::localize_path((String *)&local_21e8);
    if (local_21d0 != local_21e8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_21d0);
      local_21d0 = local_21e8;
      local_21e8 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_21e8);
    if (local_21c8[0] != local_21d0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_21c8,(CowData *)&local_21d0);
    }
    local_21e8 = (char *)0x0;
    Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_21e8,local_2200);
    ResourceLoaderText::recognize(local_21f8,local_21d8,(CowData<char32_t> *)&local_21e8);
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_21e8);
    StringName::StringName((StringName *)&local_21f0,(String *)local_21f8,false);
    ClassDB::get_compatibility_remapped_class((StringName *)&local_21e8);
    if (local_21e8 == (char *)0x0) {
      *(undefined8 *)param_1 = 0;
LAB_00107521:
      if (StringName::configured != '\0') {
LAB_00107525:
        if (local_21f0 != 0) {
          StringName::unref();
        }
      }
    }
    else {
      pcVar1 = *(char **)(local_21e8 + 8);
      *(undefined8 *)param_1 = 0;
      if (pcVar1 == (char *)0x0) {
        if (*(long *)(local_21e8 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)param_1,(CowData *)(local_21e8 + 0x10));
          goto LAB_00107501;
        }
        if (StringName::configured != '\0') goto LAB_00107512;
      }
      else {
        String::parse_latin1(param_1,pcVar1);
LAB_00107501:
        if (StringName::configured != '\0') {
          if (local_21e8 != (char *)0x0) {
LAB_00107512:
            StringName::unref();
            goto LAB_00107521;
          }
          goto LAB_00107525;
        }
      }
    }
    CowData<char32_t>::_unref(local_21f8);
    ResourceLoaderText::~ResourceLoaderText(local_21d8);
  }
  Ref<FileAccess>::unref((Ref<FileAccess> *)&local_2200);
LAB_00107398:
  CowData<char32_t>::_unref((CowData<char32_t> *)local_2208);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* ResourceLoaderText::get_uid(Ref<FileAccess>) */

undefined8 __thiscall ResourceLoaderText::get_uid(ResourceLoaderText *this,undefined8 *param_2)

{
  uint uVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  Object *pOVar6;
  void *pvVar7;
  long in_FS_OFFSET;
  undefined8 local_a0;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
  local_70 [8];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  pOVar6 = *(Object **)(this + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(this + 0x2188) = 0;
  *(undefined4 *)(this + 0x2128) = 1;
  pOVar2 = (Object *)*param_2;
  if (pOVar2 != pOVar6) {
    *(Object **)(this + 0x20) = pOVar2;
    if (pOVar2 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(this + 0x20) = 0;
      }
    }
    if (pOVar6 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(pOVar6);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
      }
    }
    pOVar6 = *(Object **)(this + 0x20);
  }
  pOVar2 = *(Object **)(this + 0x2040);
  if (pOVar6 != pOVar2) {
    *(Object **)(this + 0x2040) = pOVar6;
    if (pOVar6 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(this + 0x2040) = 0;
      }
    }
    if (pOVar2 != (Object *)0x0) {
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
  local_68 = (undefined1  [16])0x0;
  this[0x2058] = (ResourceLoaderText)0x1;
  local_78 = 0;
  local_48 = 2;
  local_58 = (undefined1  [16])0x0;
  iVar4 = VariantParser::parse_tag
                    ((Stream *)(this + 0x28),(int *)(this + 0x2128),(String *)(this + 0x18),
                     (Tag *)&local_78,(ResourceParser *)0x0,false);
  if (iVar4 == 0) {
    local_90 = 0;
    local_80 = 3;
    local_88 = &_LC78;
    String::parse_latin1((StrRange *)&local_90);
    local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
    cVar3 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
            ::_lookup_pos(local_70,(String *)&local_90,(uint *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if (cVar3 == '\0') goto LAB_00107904;
    local_88 = &_LC78;
    local_90 = 0;
    local_80 = 3;
    String::parse_latin1((StrRange *)&local_90);
    HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
    ::operator[](local_70,(String *)&local_90);
    Variant::operator_cast_to_String((Variant *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    local_a0 = ResourceUID::text_to_id(ResourceUID::singleton);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  }
  else {
    _printerr(this);
LAB_00107904:
    local_a0 = 0xffffffffffffffff;
  }
  if ((void *)local_68._0_8_ != (void *)0x0) {
    pvVar7 = (void *)local_68._0_8_;
    if (local_48._4_4_ != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4);
      if (uVar1 == 0) {
        local_48 = local_48 & 0xffffffff;
        local_58 = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(local_68._8_8_ + lVar5) != 0) {
            pvVar7 = *(void **)((long)pvVar7 + lVar5 * 2);
            *(int *)(local_68._8_8_ + lVar5) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar7 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar7 + 0x10));
            Memory::free_static(pvVar7,false);
            *(undefined8 *)(local_68._0_8_ + lVar5 * 2) = 0;
            pvVar7 = (void *)local_68._0_8_;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar1 << 2);
        local_48 = local_48 & 0xffffffff;
        local_58 = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_0010782c;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static((void *)local_68._8_8_,false);
  }
LAB_0010782c:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_a0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoaderText::get_resource_uid(String const&) const */

undefined8 __thiscall
ResourceFormatLoaderText::get_resource_uid(ResourceFormatLoaderText *this,String *param_1)

{
  Object *pOVar1;
  char cVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  String local_21e0 [8];
  Object *local_21d8;
  Object *local_21d0;
  ResourceLoaderText local_21c8 [8];
  Object *local_21c0;
  Object *local_21b8 [1073];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_extension();
  String::to_lower();
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_21d0);
  cVar2 = String::operator!=(local_21e0,"tscn");
  if ((cVar2 != '\0') && (cVar2 = String::operator!=(local_21e0,"tres"), cVar2 != '\0')) {
    uVar3 = 0xffffffffffffffff;
    goto LAB_00107aa4;
  }
  FileAccess::open((String *)&local_21d8,(int)param_1,(Error *)0x1);
  uVar3 = 0xffffffffffffffff;
  if (local_21d8 == (Object *)0x0) goto LAB_00107aa4;
  ResourceLoaderText::ResourceLoaderText(local_21c8);
  ProjectSettings::get_singleton();
  ProjectSettings::localize_path((String *)&local_21d0);
  if (local_21c0 != local_21d0) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_21c0);
    local_21c0 = local_21d0;
    local_21d0 = (Object *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_21d0);
  if (local_21b8[0] != local_21c0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_21b8,(CowData *)&local_21c0);
  }
  pOVar1 = local_21d8;
  if (local_21d8 == (Object *)0x0) {
LAB_00107ae9:
    local_21d0 = (Object *)0x0;
    uVar3 = ResourceLoaderText::get_uid(local_21c8);
  }
  else {
    local_21d0 = local_21d8;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') goto LAB_00107ae9;
    uVar3 = ResourceLoaderText::get_uid(local_21c8);
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
  ResourceLoaderText::~ResourceLoaderText(local_21c8);
  if (((local_21d8 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_21d8), cVar2 != '\0')) {
    (**(code **)(*(long *)local_21d8 + 0x140))(local_21d8);
    Memory::free_static(local_21d8,false);
  }
LAB_00107aa4:
  CowData<char32_t>::_unref((CowData<char32_t> *)local_21e0);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* WARNING: Removing unreachable block (ram,0x00108fbb) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* ResourceLoaderText::rename_dependencies(Ref<FileAccess>, String const&, HashMap<String, String,
   HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > > const&) */

uint __thiscall
ResourceLoaderText::rename_dependencies
          (ResourceLoaderText *this,undefined8 *param_2,String *param_3,
          HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
          *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  code *pcVar25;
  CowData<char32_t> *pCVar26;
  Ref<FileAccess> *pRVar27;
  StrRange *this_00;
  long *plVar28;
  char cVar29;
  uint uVar30;
  int iVar31;
  undefined4 uVar32;
  undefined8 uVar33;
  long lVar34;
  uint uVar35;
  long lVar36;
  uint uVar37;
  ulong uVar38;
  code **ppcVar39;
  ulong uVar40;
  ResourceLoaderText *pRVar41;
  long lVar42;
  ResourceLoaderText *pRVar43;
  HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
  *pHVar44;
  uint uVar45;
  long in_FS_OFFSET;
  undefined1 auStack_9b8 [8];
  char cStack_9b0;
  undefined1 auStack_9af [2047];
  undefined8 local_1b0;
  code *local_1a8;
  String *local_1a0;
  String *local_198;
  String *local_190;
  String *local_188;
  CowData<char32_t> *local_180;
  ResourceParser *local_178;
  ResourceLoaderText *local_170;
  Stream *local_168;
  String *local_160;
  char local_155;
  uint local_154;
  StrRange *local_150;
  ResourceLoaderText *local_148;
  CowData<char32_t> *local_140;
  HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
  *local_138;
  Tag *local_130;
  Variant *local_128;
  Variant *local_120;
  HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
  *local_118;
  ResourceLoaderText *local_110;
  CowData<char32_t> *local_108;
  ResourceLoaderText *local_100;
  Ref<FileAccess> *local_f8;
  StrRange *local_f0;
  long *local_e8;
  CowData<char32_t> local_e0 [8];
  undefined *local_d8;
  undefined *local_d0;
  String local_c8 [8];
  undefined8 local_c0;
  String local_b8 [8];
  String local_b0 [8];
  undefined8 local_a8;
  undefined *local_a0;
  Variant local_98 [8];
  Variant local_90 [8];
  undefined8 local_88;
  CowData<char32_t> local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  Ref *local_58;
  undefined8 local_50;
  long local_40;
  
  ppcVar39 = &local_1a8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (Ref *)0x0;
  local_1b0 = 0x107bcd;
  local_188 = param_3;
  local_118 = param_4;
  local_110 = this;
  local_f8 = (Ref<FileAccess> *)&local_58;
  Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_58,(Ref *)*param_2);
  local_1b0 = 0x107bdd;
  open(this,(Ref<FileAccess> *)&local_58,1);
  local_1b0 = 0x107be5;
  Ref<FileAccess>::unref((Ref<FileAccess> *)&local_58);
  pRVar41 = local_110;
  if (*(int *)(this + 0x2188) == 0) {
    local_180 = local_e0;
    local_e8 = (long *)0x0;
    local_110[0x2058] = (ResourceLoaderText)0x1;
    local_1b0 = 0x107c25;
    String::get_base_dir();
    local_1b0 = 0x107c32;
    uVar33 = (**(code **)(**(long **)(pRVar41 + 0x20) + 0x1c8))();
    local_130 = (Tag *)(pRVar41 + 0x20d8);
    local_178 = (ResourceParser *)(pRVar41 + 0x2168);
    local_160 = (String *)(pRVar41 + 0x18);
    local_170 = pRVar41 + 0x2128;
    local_168 = (Stream *)(pRVar41 + 0x28);
LAB_00107c78:
    local_1b0 = 0x107ca3;
    local_154 = VariantParser::parse_tag
                          (local_168,(int *)local_170,local_160,local_130,local_178,false);
    if (local_154 == 0) {
      local_1b0 = 0x107cc4;
      local_155 = String::operator!=((String *)local_130,"ext_resource");
      plVar28 = local_e8;
      pRVar27 = local_f8;
      if (local_155 == '\0') {
        local_f0 = (StrRange *)&local_70;
        if (local_e8 == (long *)0x0) {
          local_68 = 0;
          local_50 = 7;
          local_58 = (Ref *)0x11778a;
          local_1b0 = 0x10884c;
          local_108 = (CowData<char32_t> *)&local_68;
          String::parse_latin1((StrRange *)&local_68);
          local_1b0 = 0x10885e;
          String::operator+((String *)&local_60,local_188);
          local_1b0 = 0x108870;
          FileAccess::open((String *)pRVar27,(int)(String *)&local_60,(Error *)0x2);
          local_1b0 = 0x108880;
          Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_e8,local_58);
          local_1b0 = 0x108888;
          Ref<FileAccess>::unref(pRVar27);
          local_1b0 = 0x108890;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          local_1b0 = 0x108898;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if (*(long *)(local_110 + 0x2130) == -1) {
            local_1b0 = 0x1090a8;
            uVar33 = ResourceSaver::get_resource_id_for_path(local_188,false);
            *(undefined8 *)(local_110 + 0x2130) = uVar33;
          }
          pRVar27 = local_f8;
          local_d8 = (undefined *)0x0;
          local_50 = 0;
          local_58 = (Ref *)&_LC0;
          local_1b0 = 0x1088e8;
          String::parse_latin1((StrRange *)&local_d8);
          local_f0 = (StrRange *)&local_70;
          if (*(long *)(local_110 + 0x2130) != -1) {
            local_60 = 0;
            local_1b0 = 0x10891b;
            String::parse_latin1((String *)&local_60,"\"");
            local_1b0 = 0x108931;
            ResourceUID::id_to_text((long)&local_70);
            pCVar26 = local_108;
            local_1b0 = 0x10894a;
            operator+((char *)local_108,(String *)" uid=\"");
            local_1b0 = 0x108958;
            String::operator+((String *)pRVar27,(String *)pCVar26);
            if ((Ref *)local_d8 != local_58) {
              local_1b0 = 0x10896d;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
              local_d8 = local_58;
              local_58 = (Ref *)0x0;
            }
            local_1b0 = 0x10898c;
            CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
            local_1b0 = 0x108998;
            CowData<char32_t>::_unref(local_108);
            local_1b0 = 0x1089a4;
            CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
            local_1b0 = 0x1089ac;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          }
          plVar28 = local_e8;
          if (local_110[0x2048] == (ResourceLoaderText)0x0) {
            local_d0 = (undefined *)0x0;
            if (*(long *)(local_110 + 0x20d0) == 0) {
              local_148 = (ResourceLoaderText *)&local_d0;
            }
            else {
              local_148 = (ResourceLoaderText *)&local_d0;
              if (1 < *(uint *)(*(long *)(local_110 + 0x20d0) + -8)) {
                local_60 = 0;
                local_1b0 = 0x108d13;
                String::parse_latin1((String *)&local_60,"\" ");
                local_1b0 = 0x108d34;
                operator+((char *)local_108,(String *)"script_class=\"");
                local_1b0 = 0x108d4a;
                String::operator+((String *)local_f8,(String *)local_108);
                if ((Ref *)local_d0 != local_58) {
                  local_1b0 = 0x108d5f;
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
                  local_d0 = local_58;
                  local_58 = (Ref *)0x0;
                }
                local_1b0 = 0x108d7e;
                CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
                local_1b0 = 0x108d8a;
                CowData<char32_t>::_unref(local_108);
                local_1b0 = 0x108d92;
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              }
            }
            pRVar27 = local_f8;
            local_1a8 = *(code **)(*plVar28 + 0x2b0);
            local_58 = (Ref *)&_LC115;
            local_60 = 0;
            local_50 = 2;
            local_1b0 = 0x108a46;
            String::parse_latin1((StrRange *)&local_60);
            local_100 = (ResourceLoaderText *)&local_78;
            local_1b0 = 0x108a67;
            itos((long)local_100);
            local_120 = (Variant *)&local_88;
            local_88 = 0;
            local_58 = (Ref *)0x1176af;
            local_50 = 8;
            local_1b0 = 0x108a98;
            String::parse_latin1((StrRange *)local_120);
            local_128 = local_98;
            local_1b0 = 0x108abc;
            itos((long)local_128);
            local_138 = (HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                         *)&local_a8;
            local_a8 = 0;
            local_58 = (Ref *)0x1176e0;
            local_50 = 0xb;
            local_1b0 = 0x108af3;
            String::parse_latin1((StrRange *)local_138);
            local_58 = (Ref *)&_LC88;
            local_c0 = 0;
            local_50 = 2;
            local_1b0 = 0x108b23;
            local_f8 = pRVar27;
            String::parse_latin1((StrRange *)&local_c0);
            local_1b0 = 0x108b4a;
            operator+((char *)local_c8,(String *)"[gd_resource type=\"");
            local_1b0 = 0x108b77;
            local_190 = local_c8;
            local_150 = (StrRange *)&local_c0;
            String::operator+(local_b8,local_c8);
            local_1b0 = 0x108b97;
            local_198 = local_b8;
            String::operator+(local_b0,local_b8);
            local_1b0 = 0x108ba9;
            String::operator+((String *)&local_a0,local_b0);
            local_140 = (CowData<char32_t> *)local_90;
            local_1b0 = 0x108bd4;
            local_1a0 = (String *)&local_a0;
            String::operator+((String *)local_140,(String *)&local_a0);
            local_1b0 = 0x108bea;
            String::operator+((String *)local_80,(String *)local_140);
            local_1b0 = 0x108c00;
            String::operator+((String *)local_f0,(String *)local_80);
            local_1b0 = 0x108c16;
            String::operator+((String *)local_108,(String *)local_f0);
            local_1b0 = 0x108c2c;
            String::operator+((String *)local_f8,(String *)local_108);
            local_1b0 = 0x108c3f;
            (*local_1a8)(plVar28,local_f8);
            local_1b0 = 0x108c4b;
            CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
            local_1b0 = 0x108c57;
            CowData<char32_t>::_unref(local_108);
            local_1b0 = 0x108c63;
            CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
            local_1b0 = 0x108c6b;
            CowData<char32_t>::_unref(local_80);
            local_1b0 = 0x108c77;
            CowData<char32_t>::_unref(local_140);
            local_1b0 = 0x108c83;
            CowData<char32_t>::_unref((CowData<char32_t> *)local_1a0);
            local_1b0 = 0x108c8b;
            CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
            local_1b0 = 0x108c97;
            CowData<char32_t>::_unref((CowData<char32_t> *)local_198);
            local_1b0 = 0x108ca3;
            CowData<char32_t>::_unref((CowData<char32_t> *)local_190);
            local_1b0 = 0x108caf;
            CowData<char32_t>::_unref((CowData<char32_t> *)local_150);
            local_1b0 = 0x108cbb;
            CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
            local_1b0 = 0x108cc7;
            CowData<char32_t>::_unref((CowData<char32_t> *)local_128);
            local_1b0 = 0x108cd3;
            CowData<char32_t>::_unref((CowData<char32_t> *)local_120);
            local_1b0 = 0x108cdf;
            CowData<char32_t>::_unref((CowData<char32_t> *)local_100);
            local_1b0 = 0x108ce7;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            local_1b0 = 0x108cf3;
            CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
          }
          else {
            local_138 = *(HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                          **)(*local_e8 + 0x2b0);
            local_60 = 0;
            local_1b0 = 0x108dcc;
            String::parse_latin1((String *)&local_60,"]\n");
            local_100 = (ResourceLoaderText *)&local_78;
            local_1b0 = 0x108ded;
            itos((long)local_100);
            local_88 = 0;
            local_1b0 = 0x108e04;
            String::parse_latin1((String *)&local_88," format=");
            local_1b0 = 0x108e1d;
            itos((long)local_98);
            local_120 = local_90;
            local_1b0 = 0x108e48;
            local_128 = local_98;
            operator+((char *)local_120,(String *)"[gd_scene load_steps=");
            local_1b0 = 0x108e5a;
            String::operator+((String *)local_80,(String *)local_120);
            local_1b0 = 0x108e70;
            String::operator+((String *)local_f0,(String *)local_80);
            local_1b0 = 0x108e86;
            String::operator+((String *)local_108,(String *)local_f0);
            local_1b0 = 0x108e9c;
            String::operator+((String *)local_f8,(String *)local_108);
            local_1b0 = 0x108eaf;
            (*(code *)local_138)(plVar28,local_f8);
            local_1b0 = 0x108ebb;
            CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
            local_1b0 = 0x108ec7;
            CowData<char32_t>::_unref(local_108);
            local_1b0 = 0x108ed3;
            CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
            local_1b0 = 0x108edb;
            CowData<char32_t>::_unref(local_80);
            local_1b0 = 0x108ee7;
            CowData<char32_t>::_unref((CowData<char32_t> *)local_120);
            local_1b0 = 0x108ef3;
            CowData<char32_t>::_unref((CowData<char32_t> *)local_128);
            local_1b0 = 0x108efb;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            local_1b0 = 0x108f07;
            CowData<char32_t>::_unref((CowData<char32_t> *)local_100);
            local_1b0 = 0x108f0f;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          }
          local_1b0 = 0x108cfb;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        }
        local_70 = 0;
        local_58 = (Ref *)&_LC100;
        local_50 = 4;
        local_1b0 = 0x107d1e;
        String::parse_latin1(local_f0);
        pRVar41 = local_110;
        if ((*(long *)(local_110 + 0x20e8) != 0) && (*(int *)(local_110 + 0x210c) != 0)) {
          lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(local_110 + 0x2108) * 8);
          local_100 = (ResourceLoaderText *)
                      CONCAT44(local_100._4_4_,
                               *(undefined4 *)
                                (hash_table_size_primes + (ulong)*(uint *)(local_110 + 0x2108) * 4))
          ;
          local_1b0 = 0x107d6f;
          uVar30 = String::hash();
          uVar38 = (ulong)local_100 & 0xffffffff;
          lVar42 = *(long *)(pRVar41 + 0x20f0);
          uVar35 = 1;
          if (uVar30 != 0) {
            uVar35 = uVar30;
          }
          auVar1._8_8_ = 0;
          auVar1._0_8_ = (ulong)uVar35 * lVar34;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar38;
          lVar36 = SUB168(auVar1 * auVar13,8);
          uVar30 = *(uint *)(lVar42 + lVar36 * 4);
          iVar31 = SUB164(auVar1 * auVar13,8);
          if (uVar30 != 0) {
            uVar45 = 0;
            uVar40 = uVar38;
            do {
              if (uVar30 == uVar35) {
                local_108 = (CowData<char32_t> *)CONCAT44(local_108._4_4_,(int)uVar40);
                local_1b0 = 0x107e2f;
                local_100 = pRVar41;
                cVar29 = String::operator==((String *)
                                            (*(long *)(*(long *)(pRVar41 + 0x20e8) + lVar36 * 8) +
                                            0x10),(String *)local_f0);
                pRVar27 = local_f8;
                if (cVar29 != '\0') goto LAB_00107e4d;
                uVar40 = (ulong)local_108 & 0xffffffff;
                lVar42 = *(long *)(local_100 + 0x20f0);
                pRVar41 = local_100;
              }
              uVar45 = uVar45 + 1;
              auVar2._8_8_ = 0;
              auVar2._0_8_ = (ulong)(iVar31 + 1) * lVar34;
              auVar14._8_8_ = 0;
              auVar14._0_8_ = uVar38;
              lVar36 = SUB168(auVar2 * auVar14,8);
              uVar30 = *(uint *)(lVar42 + lVar36 * 4);
              iVar31 = SUB164(auVar2 * auVar14,8);
              if ((uVar30 == 0) ||
                 (auVar3._8_8_ = 0, auVar3._0_8_ = (ulong)uVar30 * lVar34, auVar15._8_8_ = 0,
                 auVar15._0_8_ = uVar38, auVar4._8_8_ = 0,
                 auVar4._0_8_ = (ulong)(uint)(((int)uVar40 + iVar31) - SUB164(auVar3 * auVar15,8)) *
                                lVar34, auVar16._8_8_ = 0, auVar16._0_8_ = uVar38,
                 SUB164(auVar4 * auVar16,8) < uVar45)) break;
            } while( true );
          }
        }
        goto LAB_00107ec6;
      }
      ppcVar39 = &local_1a8;
      if (local_e8 == (long *)0x0) goto LAB_00107f14;
      local_1b0 = 0x108fb3;
      (**(code **)(**(long **)(local_110 + 0x20) + 0x1b8))(*(long **)(local_110 + 0x20),uVar33);
      ppcVar39 = (code **)auStack_9b8;
      iVar31 = (**(code **)(**(long **)(local_110 + 0x20) + 0x220))
                         (*(long **)(local_110 + 0x20),&cStack_9b0,0x800);
      if (iVar31 == -1) {
        _err_print_error("rename_dependencies","scene/resources/resource_format_text.cpp",0x410,
                         "Condition \"num_read == (4294967295U)\" is true. Returning: ERR_CANT_CREATE"
                         ,"Failed to allocate memory for buffer.",0);
        goto LAB_0010908b;
      }
      if (iVar31 == 0) {
        _err_print_error("rename_dependencies","scene/resources/resource_format_text.cpp",0x411,
                         "Condition \"num_read == 0\" is true. Returning: ERR_FILE_CORRUPT",0,0);
        local_154 = 0x10;
      }
      else {
        if (cStack_9b0 == '\n') {
          pRVar41 = local_110;
          if (iVar31 != 1) {
            (**(code **)(*plVar28 + 0x2d0))(plVar28,auStack_9af,iVar31 + -1);
            pRVar41 = local_110;
          }
        }
        else {
          (**(code **)(*plVar28 + 0x2d0))(plVar28,&cStack_9b0,iVar31);
          pRVar41 = local_110;
        }
        while (cVar29 = (**(code **)(**(long **)(pRVar41 + 0x20) + 0x1d8))(), cVar29 == '\0') {
          uVar32 = (**(code **)(**(long **)(pRVar41 + 0x20) + 0x220))
                             (*(long **)(pRVar41 + 0x20),&cStack_9b0,0x800);
          (**(code **)(*plVar28 + 0x2d0))(plVar28,&cStack_9b0,uVar32);
        }
        iVar31 = (**(code **)(*plVar28 + 0x250))(plVar28);
        ppcVar39 = (code **)auStack_9b8;
        if (iVar31 != 0) {
LAB_0010908b:
          local_154 = 0x14;
          ppcVar39 = (code **)auStack_9b8;
        }
      }
    }
    else {
      uVar33 = 0x3b9;
      *(undefined4 *)(local_110 + 0x2188) = 0x10;
LAB_00107ef5:
      pRVar41 = local_110;
      local_1b0 = 0x107f08;
      _err_print_error("rename_dependencies","scene/resources/resource_format_text.cpp",uVar33,
                       "Method/function failed. Returning: error",0,0);
      local_154 = *(uint *)(pRVar41 + 0x2188);
      ppcVar39 = &local_1a8;
    }
LAB_00107f14:
    *(undefined8 *)((long)ppcVar39 + -8) = 0x107f20;
    CowData<char32_t>::_unref(local_180);
    *(undefined8 *)((long)ppcVar39 + -8) = 0x107f2c;
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_e8);
  }
  else {
    local_1b0 = 0x10910c;
    _err_print_error("rename_dependencies","scene/resources/resource_format_text.cpp",0x3aa,
                     "Condition \"error != OK\" is true. Returning: error",0,0);
    local_154 = *(uint *)(local_110 + 0x2188);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_154;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)ppcVar39 + -8) = &UNK_001091d7;
  __stack_chk_fail();
LAB_00107e4d:
  local_68 = 0;
  local_58 = (Ref *)&_LC98;
  pHVar44 = (HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
             *)(local_110 + 0x20e0);
  local_50 = 2;
  local_1b0 = 0x107e9d;
  local_138 = pHVar44;
  local_108 = (CowData<char32_t> *)&local_68;
  String::parse_latin1((StrRange *)&local_68);
  local_58 = (Ref *)((ulong)local_58 & 0xffffffff00000000);
  local_1b0 = 0x107eb2;
  cVar29 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
           ::_lookup_pos(pHVar44,(String *)&local_68,(uint *)pRVar27);
  pRVar27 = local_f8;
  if (cVar29 == '\0') {
    local_1b0 = 0x107ec6;
    CowData<char32_t>::_unref(local_108);
LAB_00107ec6:
    local_1b0 = 0x107ed2;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
LAB_00107ed2:
    uVar33 = 0x3de;
    *(undefined4 *)(local_110 + 0x2188) = 0x10;
    goto LAB_00107ef5;
  }
  local_60 = 0;
  local_58 = (Ref *)&_LC74;
  local_50 = 4;
  local_1b0 = 0x107f89;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Ref *)((ulong)local_58 & 0xffffffff00000000);
  local_1b0 = 0x107fa2;
  cVar29 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
           ::_lookup_pos(local_138,(String *)&local_60,(uint *)pRVar27);
  local_190 = (String *)CONCAT71(local_190._1_7_,cVar29);
  if (cVar29 == '\0') {
    local_1b0 = 0x107fb4;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_1b0 = 0x107fc0;
    CowData<char32_t>::_unref(local_108);
    local_1b0 = 0x107fcc;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
    goto LAB_00107ed2;
  }
  local_1b0 = 0x107fdd;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_1b0 = 0x107fe9;
  CowData<char32_t>::_unref(local_108);
  local_1b0 = 0x107ff5;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  local_58 = (Ref *)&_LC100;
  local_60 = 0;
  local_50 = 4;
  local_1b0 = 0x108022;
  String::parse_latin1((StrRange *)&local_60);
  pHVar44 = local_138;
  local_1b0 = 0x108034;
  HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
  ::operator[](local_138,(String *)&local_60);
  local_100 = (ResourceLoaderText *)&local_a0;
  local_1b0 = 0x10804d;
  Variant::operator_cast_to_String((Variant *)local_100);
  local_1b0 = 0x108055;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Ref *)&_LC98;
  local_60 = 0;
  local_50 = 2;
  local_1b0 = 0x108074;
  String::parse_latin1((StrRange *)&local_60);
  local_1b0 = 0x10807f;
  HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
  ::operator[](pHVar44,(String *)&local_60);
  local_120 = local_98;
  local_1b0 = 0x108098;
  Variant::operator_cast_to_String(local_120);
  local_1b0 = 0x1080a0;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Ref *)&_LC74;
  local_60 = 0;
  local_50 = 4;
  local_1b0 = 0x1080bf;
  String::parse_latin1((StrRange *)&local_60);
  local_1b0 = 0x1080ca;
  HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
  ::operator[](pHVar44,(String *)&local_60);
  local_128 = local_90;
  local_1b0 = 0x1080e3;
  Variant::operator_cast_to_String(local_128);
  local_1b0 = 0x1080eb;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Ref *)&_LC78;
  local_60 = 0;
  local_50 = 3;
  local_1b0 = 0x108111;
  String::parse_latin1((StrRange *)&local_60);
  pRVar41 = (ResourceLoaderText *)&local_60;
  if ((*(long *)(local_110 + 0x20e8) != 0) && (*(int *)(local_110 + 0x210c) != 0)) {
    uVar35 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(local_110 + 0x2108) * 4);
    uVar38 = CONCAT44(0,uVar35);
    lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(local_110 + 0x2108) * 8);
    local_1b0 = 0x108161;
    uVar45 = String::hash();
    uVar30 = 1;
    if (uVar45 != 0) {
      uVar30 = uVar45;
    }
    lVar42 = *(long *)(local_110 + 0x20f0);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (ulong)uVar30 * lVar34;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar38;
    lVar36 = SUB168(auVar5 * auVar17,8);
    uVar45 = *(uint *)(lVar42 + lVar36 * 4);
    iVar31 = SUB164(auVar5 * auVar17,8);
    if (uVar45 != 0) {
      uVar37 = 0;
      pRVar43 = local_110;
      local_140 = (CowData<char32_t> *)&local_60;
      do {
        if (uVar45 == uVar30) {
          local_150 = (StrRange *)CONCAT44(local_150._4_4_,uVar35);
          local_1b0 = 0x10821d;
          local_148 = pRVar43;
          cVar29 = String::operator==((String *)
                                      (*(long *)(*(long *)(pRVar43 + 0x20e8) + lVar36 * 8) + 0x10),
                                      (String *)local_140);
          pRVar41 = (ResourceLoaderText *)local_140;
          if (cVar29 != '\0') {
            local_1b0 = 0x108670;
            CowData<char32_t>::_unref(local_140);
            local_58 = (Ref *)&_LC78;
            local_60 = 0;
            local_50 = 3;
            local_1b0 = 0x10869a;
            String::parse_latin1((StrRange *)pRVar41);
            local_1b0 = 0x1086a9;
            HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
            ::operator[](local_138,(String *)pRVar41);
            local_1b0 = 0x1086bb;
            Variant::operator_cast_to_String((Variant *)local_108);
            local_1b0 = 0x1086c3;
            CowData<char32_t>::_unref((CowData<char32_t> *)pRVar41);
            local_1b0 = 0x1086d2;
            lVar34 = ResourceUID::text_to_id(ResourceUID::singleton);
            if (lVar34 != -1) {
              local_1b0 = 0x1086ea;
              cVar29 = ResourceUID::has_id((long)ResourceUID::singleton);
              if (cVar29 != '\0') {
                local_1b0 = 0x108f2e;
                ResourceUID::get_id_path((long)local_f8);
                if ((Ref *)local_a0 != local_58) {
                  local_1b0 = 0x108f47;
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_100);
                  local_a0 = local_58;
                  local_58 = (Ref *)0x0;
                }
                local_1b0 = 0x108f66;
                CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
              }
            }
            local_1b0 = 0x1086fe;
            CowData<char32_t>::_unref(local_108);
            goto LAB_0010824f;
          }
          lVar42 = *(long *)(local_148 + 0x20f0);
          pRVar43 = local_148;
          uVar35 = (uint)local_150;
        }
        uVar37 = uVar37 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)(iVar31 + 1) * lVar34;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar38;
        lVar36 = SUB168(auVar6 * auVar18,8);
        uVar45 = *(uint *)(lVar42 + lVar36 * 4);
        iVar31 = SUB164(auVar6 * auVar18,8);
        pRVar41 = (ResourceLoaderText *)local_140;
      } while ((uVar45 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar45 * lVar34, auVar19._8_8_ = 0,
              auVar19._0_8_ = uVar38, auVar8._8_8_ = 0,
              auVar8._0_8_ = (ulong)((uVar35 + iVar31) - SUB164(auVar7 * auVar19,8)) * lVar34,
              auVar20._8_8_ = 0, auVar20._0_8_ = uVar38, uVar37 <= SUB164(auVar8 * auVar20,8)));
    }
  }
  local_1b0 = 0x10824f;
  CowData<char32_t>::_unref((CowData<char32_t> *)pRVar41);
LAB_0010824f:
  local_1b0 = 0x108262;
  cVar29 = String::begins_with((char *)local_100);
  pRVar43 = local_100;
  if (cVar29 == '\0') {
    local_1b0 = 0x108721;
    String::path_join((String *)pRVar41);
    local_1b0 = 0x108730;
    String::simplify_path();
    if ((Ref *)local_a0 != local_58) {
      local_1b0 = 0x108745;
      CowData<char32_t>::_unref((CowData<char32_t> *)pRVar43);
      local_a0 = local_58;
      local_58 = (Ref *)0x0;
    }
    local_1b0 = 0x108764;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
    local_1b0 = 0x10876c;
    CowData<char32_t>::_unref((CowData<char32_t> *)pRVar41);
    if ((*(long *)(local_118 + 8) != 0) && (*(int *)(local_118 + 0x2c) != 0)) {
      local_155 = (char)local_190;
      goto LAB_00108287;
    }
  }
  else {
    if ((*(long *)(local_118 + 8) == 0) || (*(int *)(local_118 + 0x2c) == 0)) goto LAB_0010840a;
LAB_00108287:
    lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(local_118 + 0x28) * 8);
    local_138 = (HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                 *)CONCAT44(local_138._4_4_,
                            *(undefined4 *)
                             (hash_table_size_primes + (ulong)*(uint *)(local_118 + 0x28) * 4));
    local_1b0 = 0x1082ba;
    uVar30 = String::hash();
    uVar38 = (ulong)local_138 & 0xffffffff;
    uVar35 = 1;
    if (uVar30 != 0) {
      uVar35 = uVar30;
    }
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar35 * lVar34;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar38;
    lVar36 = SUB168(auVar9 * auVar21,8);
    lVar42 = *(long *)(local_118 + 0x10);
    iVar31 = SUB164(auVar9 * auVar21,8);
    uVar30 = *(uint *)(lVar42 + lVar36 * 4);
    uVar40 = uVar38;
    pHVar44 = local_118;
    uVar45 = local_154;
    if (uVar30 != 0) {
      do {
        local_148 = pRVar41;
        if (uVar35 == uVar30) {
          local_140 = (CowData<char32_t> *)CONCAT44(local_140._4_4_,(int)uVar40);
          local_1b0 = 0x108382;
          local_138 = pHVar44;
          cVar29 = String::operator==((String *)
                                      (*(long *)(*(long *)(pHVar44 + 8) + lVar36 * 8) + 0x10),
                                      (String *)local_100);
          pRVar41 = local_148;
          if (cVar29 != '\0') {
            local_58 = (Ref *)((ulong)local_58 & 0xffffffff00000000);
            local_1b0 = 0x1087ca;
            cVar29 = HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                     ::_lookup_pos((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                    *)local_118,(String *)local_100,(uint *)local_f8);
            if (cVar29 == '\0') {
              local_1b0 = 0x1090e0;
              _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                               "FATAL: Condition \"!exists\" is true.",0,0);
              local_1b0 = 0x1090e5;
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar25 = (code *)invalidInstructionException();
              (*pcVar25)();
            }
            lVar34 = *(long *)(*(long *)(local_118 + 8) + ((ulong)local_58 & 0xffffffff) * 8);
            if (local_a0 != *(undefined **)(lVar34 + 0x18)) {
              local_1b0 = 0x108805;
              CowData<char32_t>::_ref((CowData<char32_t> *)local_100,(CowData *)(lVar34 + 0x18));
            }
            break;
          }
          uVar40 = (ulong)local_140 & 0xffffffff;
          lVar42 = *(long *)(local_138 + 0x10);
          pHVar44 = local_138;
        }
        uVar45 = uVar45 + 1;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)(iVar31 + 1) * lVar34;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar38;
        lVar36 = SUB168(auVar10 * auVar22,8);
        uVar30 = *(uint *)(lVar42 + lVar36 * 4);
        iVar31 = SUB164(auVar10 * auVar22,8);
        pRVar41 = local_148;
        if ((uVar30 == 0) ||
           (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar30 * lVar34, auVar23._8_8_ = 0,
           auVar23._0_8_ = uVar38, auVar12._8_8_ = 0,
           auVar12._0_8_ =
                (ulong)(uint)(((int)uVar40 + iVar31) - SUB164(auVar11 * auVar23,8)) * lVar34,
           auVar24._8_8_ = 0, auVar24._0_8_ = uVar38, SUB164(auVar12 * auVar24,8) < uVar45)) break;
      } while( true );
    }
    if (local_155 == '\0') goto LAB_0010840a;
  }
  local_1b0 = 0x1083d2;
  String::path_to_file((String *)local_f8);
  if ((Ref *)local_a0 != local_58) {
    local_1b0 = 0x1083eb;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_100);
    local_a0 = local_58;
    local_58 = (Ref *)0x0;
  }
  local_1b0 = 0x10840a;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
LAB_0010840a:
  pRVar27 = local_f8;
  local_60 = 0;
  local_58 = (Ref *)&_LC114;
  local_50 = 1;
  local_1b0 = 0x10843b;
  String::parse_latin1((StrRange *)pRVar41);
  local_1b0 = 0x108451;
  operator+((char *)pRVar27,(String *)"[ext_resource type=\"");
  local_1b0 = 0x10845f;
  String::operator+((String *)&local_88,(String *)pRVar27);
  local_1b0 = 0x108467;
  CowData<char32_t>::_unref((CowData<char32_t> *)pRVar27);
  local_1b0 = 0x10846f;
  CowData<char32_t>::_unref((CowData<char32_t> *)pRVar41);
  local_1b0 = 0x10847d;
  lVar34 = ResourceSaver::get_resource_id_for_path((String *)local_100,false);
  if (lVar34 != -1) {
    local_58 = (Ref *)&_LC114;
    local_60 = 0;
    local_50 = 1;
    local_1b0 = 0x1084a9;
    String::parse_latin1((StrRange *)pRVar41);
    this_00 = local_f0;
    local_1b0 = 0x1084c2;
    ResourceUID::id_to_text((long)local_f0);
    pCVar26 = local_108;
    local_1b0 = 0x1084db;
    operator+((char *)local_108,(String *)" uid=\"");
    local_1b0 = 0x1084e9;
    String::operator+((String *)pRVar27,(String *)pCVar26);
    local_1b0 = 0x1084f4;
    String::operator+=((String *)&local_88,(String *)pRVar27);
    local_1b0 = 0x1084fc;
    CowData<char32_t>::_unref((CowData<char32_t> *)pRVar27);
    local_1b0 = 0x108504;
    CowData<char32_t>::_unref(pCVar26);
    local_1b0 = 0x10850c;
    CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
    local_1b0 = 0x108514;
    CowData<char32_t>::_unref((CowData<char32_t> *)pRVar41);
  }
  pRVar27 = local_f8;
  local_60 = 0;
  local_58 = (Ref *)&_LC84;
  local_50 = 2;
  local_1b0 = 0x108549;
  String::parse_latin1((StrRange *)pRVar41);
  local_58 = (Ref *)0x1177be;
  local_78 = 0;
  local_50 = 6;
  local_1b0 = 0x10856f;
  String::parse_latin1((StrRange *)&local_78);
  local_1b0 = 0x108585;
  operator+((char *)local_80,(String *)" path=\"");
  local_1b0 = 0x108597;
  String::operator+((String *)local_f0,(String *)local_80);
  local_1b0 = 0x1085b1;
  String::operator+((String *)local_108,(String *)local_f0);
  local_1b0 = 0x1085c3;
  String::operator+((String *)pRVar27,(String *)local_108);
  local_1b0 = 0x1085ce;
  String::operator+=((String *)&local_88,(String *)pRVar27);
  local_1b0 = 0x1085d6;
  CowData<char32_t>::_unref((CowData<char32_t> *)pRVar27);
  local_1b0 = 0x1085e2;
  CowData<char32_t>::_unref(local_108);
  local_1b0 = 0x1085ee;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  local_1b0 = 0x1085f6;
  CowData<char32_t>::_unref(local_80);
  local_1b0 = 0x1085fe;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  local_1b0 = 0x108606;
  CowData<char32_t>::_unref((CowData<char32_t> *)pRVar41);
  local_1b0 = 0x108619;
  (**(code **)(*local_e8 + 0x2b0))(local_e8,(String *)&local_88);
  local_1b0 = 0x10862d;
  uVar33 = (**(code **)(**(long **)(local_110 + 0x20) + 0x1c8))();
  local_1b0 = 0x108638;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_1b0 = 0x108644;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_128);
  local_1b0 = 0x108650;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_120);
  local_1b0 = 0x10865c;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_100);
  goto LAB_00107c78;
}



/* ResourceFormatLoaderText::rename_dependencies(String const&, HashMap<String, String,
   HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > > const&) */

int __thiscall
ResourceFormatLoaderText::rename_dependencies
          (ResourceFormatLoaderText *this,String *param_1,HashMap *param_2)

{
  code *pcVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  long in_FS_OFFSET;
  Object *local_2200;
  undefined8 local_21f8;
  Object *local_21f0;
  Object *local_21e8;
  undefined8 local_21e0;
  ResourceLoaderText local_21d8 [8];
  Object *local_21d0;
  Object *local_21c8 [1073];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_21f0,(int)param_1,(Error *)0x1);
  if (local_21f0 == (Object *)0x0) {
    iVar4 = 0x13;
    _err_print_error("rename_dependencies","scene/resources/resource_format_text.cpp",0x60d,
                     "Method/function failed. Returning: ERR_CANT_OPEN",0,0);
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_21f0);
    goto LAB_00109347;
  }
  ResourceLoaderText::ResourceLoaderText(local_21d8);
  ProjectSettings::get_singleton();
  ProjectSettings::localize_path((String *)&local_21e8);
  if (local_21d0 != local_21e8) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_21d0);
    local_21d0 = local_21e8;
    local_21e8 = (Object *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_21e8);
  if (local_21c8[0] != local_21d0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_21c8,(CowData *)&local_21d0);
  }
  pOVar2 = local_21f0;
  if (local_21f0 == (Object *)0x0) {
LAB_001092e8:
    local_21e8 = (Object *)0x0;
    iVar4 = ResourceLoaderText::rename_dependencies
                      (local_21d8,(String *)&local_21e8,param_1,param_2);
  }
  else {
    local_21e8 = local_21f0;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') goto LAB_001092e8;
    iVar4 = ResourceLoaderText::rename_dependencies
                      (local_21d8,(String *)&local_21e8,param_1,param_2);
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
  }
  ResourceLoaderText::~ResourceLoaderText(local_21d8);
  if (((local_21f0 != (Object *)0x0) &&
      (cVar3 = RefCounted::unreference(), pOVar2 = local_21f0, cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_21f0), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
  DirAccess::create(&local_2200);
  pOVar2 = local_2200;
  if (iVar4 == 0) {
    pcVar1 = *(code **)(*(long *)local_2200 + 0x1d0);
    local_21e8 = (Object *)0x11778a;
    local_21f0 = (Object *)0x0;
    local_21e0 = 7;
    String::parse_latin1((StrRange *)&local_21f0);
    String::operator+((String *)&local_21e8,param_1);
    cVar3 = (*pcVar1)(pOVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_21e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_21f0);
    pOVar2 = local_2200;
    if (cVar3 != '\0') {
      pcVar1 = *(code **)(*(long *)local_2200 + 0x208);
      local_21e8 = (Object *)0x0;
      if (*(long *)param_1 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_21e8,(CowData *)param_1);
      }
      (*pcVar1)(pOVar2,(String *)&local_21e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_21e8);
      pOVar2 = local_2200;
      pcVar1 = *(code **)(*(long *)local_2200 + 0x200);
      local_21f0 = (Object *)0x0;
      if (*(long *)param_1 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_21f0,(CowData *)param_1);
      }
      local_21e8 = (Object *)0x11778a;
      local_21f8 = 0;
      local_21e0 = 7;
      String::parse_latin1((StrRange *)&local_21f8);
      String::operator+((String *)&local_21e8,param_1);
      (*pcVar1)(pOVar2,(String *)&local_21e8,(String *)&local_21f0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_21e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_21f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_21f0);
    }
  }
  if (((local_2200 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_2200), cVar3 != '\0')) {
    (**(code **)(*(long *)local_2200 + 0x140))(local_2200);
    Memory::free_static(local_2200,false);
  }
LAB_00109347:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
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



/* ResourceLoaderText::_parse_node_tag(VariantParser::ResourceParser&) */

ResourceParser * ResourceLoaderText::_parse_node_tag(ResourceParser *param_1)

{
  String *this;
  HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
  *pHVar1;
  undefined8 uVar2;
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
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  Ref<SceneState> aRVar32 [8];
  NodePath *pNVar33;
  NodePath aNVar34 [8];
  StringName *pSVar35;
  undefined1 auVar36 [8];
  char cVar37;
  bool bVar38;
  int iVar39;
  uint uVar40;
  uint uVar41;
  undefined4 uVar42;
  int iVar43;
  int iVar44;
  PackedScene *pPVar45;
  ResourceParser *in_RDX;
  long lVar46;
  int iVar47;
  Variant *pVVar48;
  ulong uVar49;
  long lVar50;
  uint uVar51;
  ResourceLoaderText *in_RSI;
  ulong uVar52;
  uint uVar53;
  long in_FS_OFFSET;
  StrRange *local_1a0;
  Variant *local_190;
  PackedScene *local_188;
  Variant *local_178;
  int local_170;
  int local_168;
  int local_160;
  Vector *local_158;
  Variant local_f8 [8];
  Variant local_f0 [8];
  long local_e8;
  long local_e0;
  Array local_d8 [8];
  Ref<SceneState> local_d0 [8];
  NodePath *local_c8;
  NodePath local_c0 [8];
  StringName *local_b8;
  Variant *local_b0;
  Variant *local_a8;
  Variant *local_a0;
  PackedScene *local_98;
  Variant *local_90;
  undefined1 local_88 [8];
  void *pvStack_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ResourceLoader::get_resource_ref_override((String *)local_88);
  if (local_88 != (undefined1  [8])0x0) {
    local_188 = (PackedScene *)__dynamic_cast(local_88,&Object::typeinfo,&PackedScene::typeinfo,0);
    if (local_188 != (PackedScene *)0x0) {
      cVar37 = RefCounted::reference();
      if (cVar37 != '\0') {
        Ref<Resource>::unref((Ref<Resource> *)local_88);
        goto LAB_00109772;
      }
    }
  }
  Ref<Resource>::unref((Ref<Resource> *)local_88);
  pPVar45 = (PackedScene *)operator_new(0x248,"");
  PackedScene::PackedScene(pPVar45);
  postinitialize_handler((Object *)pPVar45);
  auVar30._8_8_ = 0;
  auVar30._0_8_ = pvStack_80;
  _local_88 = auVar30 << 0x40;
  local_98 = pPVar45;
  cVar37 = RefCounted::init_ref();
  if (cVar37 == '\0') {
    local_98 = (PackedScene *)0x0;
    Ref<PackedScene>::unref((Ref<PackedScene> *)local_88);
    local_188 = (PackedScene *)0x0;
  }
  else {
    Ref<PackedScene>::unref((Ref<PackedScene> *)local_88);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = pvStack_80;
    _local_88 = auVar14 << 0x40;
    cVar37 = RefCounted::reference();
    local_188 = (PackedScene *)0x0;
    if (cVar37 != '\0') {
      local_188 = pPVar45;
    }
    Ref<PackedScene>::unref((Ref<PackedScene> *)local_88);
  }
  Ref<PackedScene>::unref((Ref<PackedScene> *)&local_98);
LAB_00109772:
  local_1a0 = (StrRange *)&local_98;
  this = (String *)(in_RSI + 0x20d8);
LAB_00109796:
  cVar37 = String::operator==(this,"node");
  if (cVar37 != '\0') {
    pHVar1 = (HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
              *)(in_RSI + 0x20e0);
    local_98 = (PackedScene *)0x0;
    pvStack_80 = (void *)0x4;
    local_88 = (undefined1  [8])&_LC136;
    String::parse_latin1(local_1a0);
    auVar11._12_4_ = 0;
    auVar11._0_12_ = stack0xffffffffffffff7c;
    _local_88 = auVar11 << 0x20;
    cVar37 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
             ::_lookup_pos(pHVar1,(String *)local_1a0,(uint *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_1a0);
    local_158._0_4_ = -1;
    if (cVar37 != '\0') {
      PackedScene::get_state();
      pVVar48 = local_a8;
      local_98 = (PackedScene *)0x0;
      String::parse_latin1((String *)local_1a0,"name");
      HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
      ::operator[](pHVar1,(String *)local_1a0);
      Variant::operator_cast_to_StringName((Variant *)local_88);
      local_158._0_4_ = SceneState::add_name((StringName *)pVVar48);
      if ((StringName::configured != '\0') && (local_88 != (undefined1  [8])0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_1a0);
      Ref<SceneState>::unref((Ref<SceneState> *)&local_a8);
    }
    local_98 = (PackedScene *)0x0;
    pvStack_80 = (void *)0x6;
    local_88 = (undefined1  [8])"parent";
    String::parse_latin1(local_1a0);
    auVar12._12_4_ = 0;
    auVar12._0_12_ = stack0xffffffffffffff7c;
    _local_88 = auVar12 << 0x20;
    cVar37 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
             ::_lookup_pos(pHVar1,(String *)local_1a0,(uint *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_1a0);
    local_170 = -1;
    if (cVar37 != '\0') {
      auVar17._8_8_ = 0;
      auVar17._0_8_ = pvStack_80;
      _local_88 = auVar17 << 0x40;
      String::parse_latin1((String *)local_88,"parent");
      HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
      ::operator[](pHVar1,(String *)local_88);
      Variant::operator_cast_to_NodePath((Variant *)local_1a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      NodePath::prepend_period();
      PackedScene::get_state();
      local_170 = SceneState::add_node_path((NodePath *)local_88);
      Ref<SceneState>::unref((Ref<SceneState> *)local_88);
      NodePath::~NodePath((NodePath *)local_1a0);
    }
    local_98 = (PackedScene *)0x0;
    pvStack_80 = (void *)0x4;
    local_88 = (undefined1  [8])&_LC74;
    String::parse_latin1(local_1a0);
    auVar13._12_4_ = 0;
    auVar13._0_12_ = stack0xffffffffffffff7c;
    _local_88 = auVar13 << 0x20;
    cVar37 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
             ::_lookup_pos(pHVar1,(String *)local_1a0,(uint *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_1a0);
    local_168 = 0x7fffffff;
    if (cVar37 != '\0') {
      PackedScene::get_state();
      pVVar48 = local_a8;
      local_98 = (PackedScene *)0x0;
      String::parse_latin1((String *)local_1a0,"type");
      HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
      ::operator[](pHVar1,(String *)local_1a0);
      Variant::operator_cast_to_StringName((Variant *)local_88);
      local_168 = SceneState::add_name((StringName *)pVVar48);
      if ((StringName::configured != '\0') && (local_88 != (undefined1  [8])0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_1a0);
      Ref<SceneState>::unref((Ref<SceneState> *)&local_a8);
    }
    _local_88 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    local_68 = _LC8;
    local_a8 = (Variant *)0x0;
    local_98 = (PackedScene *)0x117820;
    local_90 = (Variant *)0xa;
    String::parse_latin1((StrRange *)&local_a8);
    local_98 = (PackedScene *)((ulong)local_98 & 0xffffffff00000000);
    cVar37 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
             ::_lookup_pos(pHVar1,(String *)&local_a8,(uint *)local_1a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    local_178 = (Variant *)0x0;
    if (cVar37 != '\0') {
      local_98 = (PackedScene *)0x0;
      String::parse_latin1((String *)local_1a0,"node_paths");
      HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
      ::operator[](pHVar1,(String *)local_1a0);
      Variant::operator_cast_to_Vector((Variant *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_1a0);
      local_178 = local_a0;
      if (local_a0 != (Variant *)0x0) {
        lVar50 = 0;
        do {
          if (*(long *)(local_a0 + -8) <= lVar50) break;
          StringName::StringName((StringName *)&local_b0,(String *)(local_a0 + lVar50 * 8),false);
          HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                    ((StringName *)local_1a0);
          if ((StringName::configured != '\0') && (local_b0 != (Variant *)0x0)) {
            StringName::unref();
          }
          lVar50 = lVar50 + 1;
        } while (local_a0 != (Variant *)0x0);
        local_178 = (Variant *)local_88;
      }
      CowData<String>::_unref((CowData<String> *)&local_a0);
    }
    local_a8 = (Variant *)0x0;
    local_98 = (PackedScene *)0x11782b;
    local_90 = (Variant *)0x8;
    String::parse_latin1((StrRange *)&local_a8);
    local_98 = (PackedScene *)((ulong)local_98 & 0xffffffff00000000);
    cVar37 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
             ::_lookup_pos(pHVar1,(String *)&local_a8,(uint *)local_1a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if (cVar37 == '\0') {
LAB_001099fe:
      uVar41 = 0xffffffff;
    }
    else {
      PackedScene::get_state();
      pVVar48 = local_a8;
      local_98 = (PackedScene *)0x0;
      String::parse_latin1((String *)local_1a0,"instance");
      HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
      ::operator[](pHVar1,(String *)local_1a0);
      uVar41 = SceneState::add_value(pVVar48);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_1a0);
      Ref<SceneState>::unref((Ref<SceneState> *)&local_a8);
      PackedScene::get_state();
      iVar47 = SceneState::get_node_count();
      if ((local_170 == -1) && (iVar47 == 0)) {
        Ref<SceneState>::unref((Ref<SceneState> *)local_1a0);
        PackedScene::get_state();
        SceneState::set_base_scene((int)local_98);
        Ref<SceneState>::unref((Ref<SceneState> *)local_1a0);
        goto LAB_001099fe;
      }
      Ref<SceneState>::unref((Ref<SceneState> *)local_1a0);
    }
    local_a8 = (Variant *)0x0;
    local_98 = (PackedScene *)0x117834;
    local_90 = (Variant *)0x14;
    String::parse_latin1((StrRange *)&local_a8);
    local_98 = (PackedScene *)((ulong)local_98 & 0xffffffff00000000);
    cVar37 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
             ::_lookup_pos(pHVar1,(String *)&local_a8,(uint *)local_1a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if (cVar37 == '\0') {
LAB_00109a8a:
      local_190 = (Variant *)&local_58;
      local_a8 = (Variant *)0x0;
      local_98 = (PackedScene *)0x117849;
      local_90 = (Variant *)0x5;
      String::parse_latin1((StrRange *)&local_a8);
      local_98 = (PackedScene *)((ulong)local_98 & 0xffffffff00000000);
      cVar37 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
               ::_lookup_pos(pHVar1,(String *)&local_a8,(uint *)local_1a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      if (cVar37 == '\0') {
        iVar47 = -1;
        if (local_170 != -1) {
          iVar47 = (local_168 != 0x7fffffff || uVar41 != 0xffffffff) - 1;
        }
      }
      else {
        PackedScene::get_state();
        pVVar48 = local_b0;
        local_a8 = (Variant *)0x0;
        String::parse_latin1((String *)&local_a8,"owner");
        HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
        ::operator[](pHVar1,(String *)&local_a8);
        Variant::operator_cast_to_NodePath((Variant *)local_1a0);
        iVar47 = SceneState::add_node_path(pVVar48);
        NodePath::~NodePath((NodePath *)local_1a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        Ref<SceneState>::unref((Ref<SceneState> *)&local_b0);
      }
      local_a8 = (Variant *)0x0;
      local_98 = (PackedScene *)0x11784f;
      local_90 = (Variant *)0x5;
      String::parse_latin1((StrRange *)&local_a8);
      local_98 = (PackedScene *)((ulong)local_98 & 0xffffffff00000000);
      cVar37 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
               ::_lookup_pos(pHVar1,(String *)&local_a8,(uint *)local_1a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      if (cVar37 != '\0') {
        local_98 = (PackedScene *)0x0;
        String::parse_latin1((String *)local_1a0,"index");
        pVVar48 = (Variant *)
                  HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                  ::operator[](pHVar1,(String *)local_1a0);
        Variant::operator_cast_to_int(pVVar48);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_1a0);
      }
      PackedScene::get_state();
      iVar47 = SceneState::add_node((int)local_98,local_170,iVar47,local_168,(int)local_158,uVar41);
      Ref<SceneState>::unref((Ref<SceneState> *)local_1a0);
      local_a8 = (Variant *)0x0;
      local_98 = (PackedScene *)0x117855;
      local_90 = (Variant *)0x6;
      String::parse_latin1((StrRange *)&local_a8);
      local_98 = (PackedScene *)((ulong)local_98 & 0xffffffff00000000);
      cVar37 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
               ::_lookup_pos(pHVar1,(String *)&local_a8,(uint *)local_1a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      if (cVar37 != '\0') {
        local_98 = (PackedScene *)0x0;
        String::parse_latin1((String *)local_1a0,"groups");
        HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
        ::operator[](pHVar1,(String *)local_1a0);
        Variant::operator_cast_to_Array((Variant *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_1a0);
        Array::begin();
        Array::end();
        if (local_a8 != (Variant *)local_98) {
          do {
            if (local_a0 != (Variant *)0x0) {
              Variant::operator=(local_a0,local_a8);
            }
            PackedScene::get_state();
            aNVar34 = local_c0;
            PackedScene::get_state();
            pSVar35 = local_b8;
            Variant::operator_cast_to_StringName((Variant *)&local_b0);
            SceneState::add_name(pSVar35);
            SceneState::add_node_group(aNVar34._0_4_,iVar47);
            if ((StringName::configured != '\0') && (local_b0 != (Variant *)0x0)) {
              StringName::unref();
            }
            Ref<SceneState>::unref((Ref<SceneState> *)&local_b8);
            Ref<SceneState>::unref((Ref<SceneState> *)local_c0);
            local_a8 = local_a8 + 0x18;
          } while (local_a8 != (Variant *)local_98);
        }
        Array::~Array((Array *)&local_c8);
      }
      do {
        local_b8 = (StringName *)0x0;
        local_58 = 0;
        local_50 = (undefined1  [16])0x0;
        iVar39 = VariantParser::parse_tag_assign_eof
                           ((Stream *)(in_RSI + 0x28),(int *)(in_RSI + 0x2128),
                            (String *)(in_RSI + 0x18),(Tag *)this,(String *)&local_b8,local_190,
                            in_RDX,false);
        *(int *)(in_RSI + 0x2188) = iVar39;
        if ((iVar39 != 0) && (iVar39 != 0x11)) {
          if (iVar39 == 0x12) {
            *(undefined4 *)(in_RSI + 0x2188) = 0;
            *(PackedScene **)param_1 = local_188;
            cVar37 = RefCounted::reference();
            if (cVar37 == '\0') {
              *(undefined8 *)param_1 = 0;
            }
          }
          else {
            local_a8 = (Variant *)0x0;
            uVar42 = *(undefined4 *)(in_RSI + 0x2128);
            if (*(long *)(in_RSI + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)(in_RSI + 0x10));
              iVar39 = *(int *)(in_RSI + 0x2188);
            }
            uVar2 = *(undefined8 *)(&error_names + (long)iVar39 * 8);
            local_b0 = (Variant *)0x0;
            String::parse_latin1((String *)&local_b0,"Parse Error: %s. [Resource file %s:%d]");
            vformat<char_const*,String,int>
                      (local_1a0,(String *)&local_b0,uVar2,(Ref<SceneState> *)&local_a8,uVar42);
            _err_print_error("_parse_node_tag","scene/resources/resource_format_text.cpp",0x11a,
                             local_1a0,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_1a0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            *(undefined8 *)param_1 = 0;
          }
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          uVar52 = local_68;
          goto joined_r0x0010a54b;
        }
        if ((local_b8 == (StringName *)0x0) || (*(uint *)(local_b8 + -8) < 2)) {
          if ((*(long *)(in_RSI + 0x20d8) != 0) && (1 < *(uint *)(*(long *)(in_RSI + 0x20d8) + -8)))
          goto LAB_0010a278;
        }
        else {
          StringName::StringName((StringName *)&local_a8,(String *)&local_b8,false);
          PackedScene::get_state();
          iVar39 = SceneState::add_name((StringName *)local_98);
          if (((local_98 != (PackedScene *)0x0) &&
              (cVar37 = RefCounted::unreference(), pPVar45 = local_98, cVar37 != '\0')) &&
             (cVar37 = predelete_handler((Object *)local_98), cVar37 != '\0')) {
            (**(code **)(*(long *)pPVar45 + 0x140))(pPVar45);
            Memory::free_static(pPVar45,false);
          }
          PackedScene::get_state();
          bVar38 = (bool)SceneState::add_value((Variant *)local_98);
          if (((local_98 != (PackedScene *)0x0) &&
              (cVar37 = RefCounted::unreference(), pPVar45 = local_98, cVar37 != '\0')) &&
             (cVar37 = predelete_handler((Object *)local_98), cVar37 != '\0')) {
            (**(code **)(*(long *)pPVar45 + 0x140))(pPVar45);
            Memory::free_static(pPVar45,false);
          }
          PackedScene::get_state();
          pPVar45 = local_98;
          if ((local_178 != (Variant *)0x0) && (local_68._4_4_ != 0)) {
            uVar41 = *(uint *)(hash_table_size_primes + (local_68 & 0xffffffff) * 4);
            lVar50 = *(long *)(hash_table_size_primes_inv + (local_68 & 0xffffffff) * 8);
            if (local_a8 == (Variant *)0x0) {
              uVar40 = StringName::get_empty_hash();
            }
            else {
              uVar40 = *(uint *)(local_a8 + 0x20);
            }
            uVar52 = CONCAT44(0,uVar41);
            if (uVar40 == 0) {
              uVar40 = 1;
            }
            auVar3._8_8_ = 0;
            auVar3._0_8_ = (ulong)uVar40 * lVar50;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar52;
            lVar46 = SUB168(auVar3 * auVar7,8);
            uVar51 = *(uint *)(local_78._8_8_ + lVar46 * 4);
            iVar43 = SUB164(auVar3 * auVar7,8);
            if (uVar51 != 0) {
              uVar53 = 0;
              while ((uVar51 != uVar40 ||
                     (*(PackedScene **)
                       (local_178 + (ulong)*(uint *)((long)pvStack_80 + lVar46 * 4) * 8) !=
                      (PackedScene *)local_a8))) {
                uVar53 = uVar53 + 1;
                auVar4._8_8_ = 0;
                auVar4._0_8_ = (ulong)(iVar43 + 1) * lVar50;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = uVar52;
                lVar46 = SUB168(auVar4 * auVar8,8);
                uVar51 = *(uint *)(local_78._8_8_ + lVar46 * 4);
                iVar43 = SUB164(auVar4 * auVar8,8);
                if ((uVar51 == 0) ||
                   (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar51 * lVar50, auVar9._8_8_ = 0,
                   auVar9._0_8_ = uVar52, auVar6._8_8_ = 0,
                   auVar6._0_8_ = (ulong)((uVar41 + iVar43) - SUB164(auVar5 * auVar9,8)) * lVar50,
                   auVar10._8_8_ = 0, auVar10._0_8_ = uVar52, SUB164(auVar6 * auVar10,8) < uVar53))
                break;
              }
            }
          }
          SceneState::add_node_property((int)pPVar45,iVar47,iVar39,bVar38);
          if (((local_98 != (PackedScene *)0x0) &&
              (cVar37 = RefCounted::unreference(), pPVar45 = local_98, cVar37 != '\0')) &&
             (cVar37 = predelete_handler((Object *)local_98), cVar37 != '\0')) {
            (**(code **)(*(long *)pPVar45 + 0x140))(pPVar45);
            Memory::free_static(pPVar45,false);
          }
          if ((StringName::configured != '\0') && (local_a8 != (Variant *)0x0)) {
            StringName::unref();
          }
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      } while( true );
    }
    local_98 = (PackedScene *)0x0;
    String::parse_latin1((String *)local_1a0,"instance_placeholder");
    HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
    ::operator[](pHVar1,(String *)local_1a0);
    Variant::operator_cast_to_String((Variant *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_1a0);
    PackedScene::get_state();
    pPVar45 = local_98;
    Variant::Variant((Variant *)&local_58,(String *)&local_a8);
    uVar41 = SceneState::add_value((Variant *)pPVar45);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    Ref<SceneState>::unref((Ref<SceneState> *)local_1a0);
    PackedScene::get_state();
    iVar47 = SceneState::get_node_count();
    Ref<SceneState>::unref((Ref<SceneState> *)local_1a0);
    if (iVar47 != 0) {
      uVar41 = uVar41 | 0x40000000;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      goto LAB_00109a8a;
    }
    *(undefined4 *)(in_RSI + 0x2188) = 0x10;
    String::parse_latin1
              ((String *)(in_RSI + 0x18),"Instance Placeholder can\'t be used for inheritance");
    _printerr(in_RSI);
    *(undefined8 *)param_1 = 0;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    uVar52 = local_68;
joined_r0x0010a54b:
    local_68 = uVar52;
    if (local_178 != (Variant *)0x0) {
      local_68._4_4_ = (uint)(uVar52 >> 0x20);
      uVar49 = (ulong)local_68._4_4_;
      uVar2 = local_78._8_8_;
      bVar38 = local_68._4_4_ != 0;
      if (bVar38) {
        if (*(uint *)(hash_table_size_primes + (uVar52 & 0xffffffff) * 4) != 0) {
          memset((void *)local_78._8_8_,0,
                 (ulong)*(uint *)(hash_table_size_primes + (uVar52 & 0xffffffff) * 4) * 4);
        }
        pVVar48 = local_178;
        do {
          if ((StringName::configured != '\0') && (*(long *)pVVar48 != 0)) {
            StringName::unref();
          }
          pVVar48 = pVVar48 + 8;
        } while (pVVar48 != local_178 + uVar49 * 8);
      }
      Memory::free_static(local_178,false);
      Memory::free_static((void *)local_78._0_8_,false);
      Memory::free_static(pvStack_80,false);
      Memory::free_static((void *)uVar2,false);
LAB_0010a5f4:
      if (local_188 == (PackedScene *)0x0) goto LAB_0010a600;
    }
    goto LAB_0010a973;
  }
  cVar37 = String::operator==(this,"connection");
  if (cVar37 == '\0') {
    cVar37 = String::operator==(this,"editable");
    if (cVar37 != '\0') {
      local_98 = (PackedScene *)0x0;
      pvStack_80 = (void *)0x4;
      local_88 = (undefined1  [8])&_LC100;
      String::parse_latin1(local_1a0);
      auVar15._12_4_ = 0;
      auVar15._0_12_ = stack0xffffffffffffff7c;
      _local_88 = auVar15 << 0x20;
      cVar37 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
               ::_lookup_pos((HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                              *)(in_RSI + 0x20e0),(String *)local_1a0,(uint *)local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_1a0);
      if (cVar37 == '\0') {
        *(undefined4 *)(in_RSI + 0x2188) = 0x10;
        String::parse_latin1((String *)(in_RSI + 0x18),"Missing \'path\' field from editable tag");
        _printerr(in_RSI);
        *(undefined8 *)param_1 = 0;
        goto LAB_0010a5f4;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = pvStack_80;
      _local_88 = auVar16 << 0x40;
      String::parse_latin1((String *)local_88,"path");
      HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
      ::operator[]((HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                    *)(in_RSI + 0x20e0),(String *)local_88);
      Variant::operator_cast_to_NodePath((Variant *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      PackedScene::get_state();
      pPVar45 = local_98;
      NodePath::simplified();
      SceneState::add_editable_instance(pPVar45);
      NodePath::~NodePath((NodePath *)local_88);
      Ref<SceneState>::unref((Ref<SceneState> *)local_1a0);
      iVar47 = VariantParser::parse_tag
                         ((Stream *)(in_RSI + 0x28),(int *)(in_RSI + 0x2128),
                          (String *)(in_RSI + 0x18),(Tag *)this,in_RDX,false);
      *(int *)(in_RSI + 0x2188) = iVar47;
      if (iVar47 != 0) {
        if (iVar47 == 0x12) {
          *(undefined4 *)(in_RSI + 0x2188) = 0;
          *(undefined8 *)param_1 = 0;
          Ref<PackedScene>::operator=((Ref<PackedScene> *)param_1,(Ref *)local_188);
          NodePath::~NodePath((NodePath *)&local_a8);
        }
        else {
          _printerr(in_RSI);
          *(undefined8 *)param_1 = 0;
          NodePath::~NodePath((NodePath *)&local_a8);
        }
LAB_0010a973:
        cVar37 = RefCounted::unreference();
        if ((cVar37 != '\0') && (cVar37 = predelete_handler((Object *)local_188), cVar37 != '\0')) {
          (**(code **)(*(long *)local_188 + 0x140))(local_188);
          Memory::free_static(local_188,false);
        }
LAB_0010a600:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      NodePath::~NodePath((NodePath *)&local_a8);
      goto LAB_00109796;
    }
    local_98 = (PackedScene *)0x0;
    *(undefined4 *)(in_RSI + 0x2188) = 0x10;
    if (*(long *)(in_RSI + 0x20d8) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_1a0,(CowData *)this);
    }
    local_a8 = (Variant *)0x0;
    String::parse_latin1((String *)&local_a8,"Unknown tag \'%s\' in file");
    vformat<String>((String *)local_88,(String *)&local_a8,local_1a0);
    auVar36 = local_88;
    if ((undefined1  [8])*(long *)(in_RSI + 0x18) != local_88) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(in_RSI + 0x18));
      *(undefined1 (*) [8])(in_RSI + 0x18) = auVar36;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = pvStack_80;
      _local_88 = auVar29 << 0x40;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_1a0);
    _printerr(in_RSI);
  }
  else {
    auVar18._8_8_ = 0;
    auVar18._0_8_ = pvStack_80;
    _local_88 = auVar18 << 0x40;
    pHVar1 = (HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
              *)(in_RSI + 0x20e0);
    String::parse_latin1((String *)local_88,"from");
    local_98 = (PackedScene *)((ulong)local_98 & 0xffffffff00000000);
    cVar37 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
             ::_lookup_pos(pHVar1,(String *)local_88,(uint *)local_1a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    if (cVar37 == '\0') {
      *(undefined4 *)(in_RSI + 0x2188) = 0x10;
      String::parse_latin1((String *)(in_RSI + 0x18),"missing \'from\' field from connection tag");
    }
    else {
      auVar19._8_8_ = 0;
      auVar19._0_8_ = pvStack_80;
      _local_88 = auVar19 << 0x40;
      String::parse_latin1((String *)local_88,"to");
      local_98 = (PackedScene *)((ulong)local_98 & 0xffffffff00000000);
      cVar37 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
               ::_lookup_pos(pHVar1,(String *)local_88,(uint *)local_1a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      if (cVar37 == '\0') {
        *(undefined4 *)(in_RSI + 0x2188) = 0x10;
        String::parse_latin1((String *)(in_RSI + 0x18),"missing \'to\' field from connection tag");
      }
      else {
        auVar20._8_8_ = 0;
        auVar20._0_8_ = pvStack_80;
        _local_88 = auVar20 << 0x40;
        String::parse_latin1((String *)local_88,"signal");
        local_98 = (PackedScene *)((ulong)local_98 & 0xffffffff00000000);
        cVar37 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                 ::_lookup_pos(pHVar1,(String *)local_88,(uint *)local_1a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
        if (cVar37 == '\0') {
          *(undefined4 *)(in_RSI + 0x2188) = 0x10;
          String::parse_latin1
                    ((String *)(in_RSI + 0x18),"missing \'signal\' field from connection tag");
        }
        else {
          auVar21._8_8_ = 0;
          auVar21._0_8_ = pvStack_80;
          _local_88 = auVar21 << 0x40;
          String::parse_latin1((String *)local_88,"method");
          local_98 = (PackedScene *)((ulong)local_98 & 0xffffffff00000000);
          cVar37 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                   ::_lookup_pos(pHVar1,(String *)local_88,(uint *)local_1a0);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          if (cVar37 != '\0') {
            auVar22._8_8_ = 0;
            auVar22._0_8_ = pvStack_80;
            _local_88 = auVar22 << 0x40;
            String::parse_latin1((String *)local_88,"from");
            HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
            ::operator[](pHVar1,(String *)local_88);
            Variant::operator_cast_to_NodePath(local_f8);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            auVar23._8_8_ = 0;
            auVar23._0_8_ = pvStack_80;
            _local_88 = auVar23 << 0x40;
            String::parse_latin1((String *)local_88,"to");
            HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
            ::operator[](pHVar1,(String *)local_88);
            Variant::operator_cast_to_NodePath(local_f0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            auVar24._8_8_ = 0;
            auVar24._0_8_ = pvStack_80;
            _local_88 = auVar24 << 0x40;
            String::parse_latin1((String *)local_88,"method");
            HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
            ::operator[](pHVar1,(String *)local_88);
            Variant::operator_cast_to_StringName((Variant *)&local_e8);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            auVar25._8_8_ = 0;
            auVar25._0_8_ = pvStack_80;
            _local_88 = auVar25 << 0x40;
            String::parse_latin1((String *)local_88,"signal");
            HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
            ::operator[](pHVar1,(String *)local_88);
            Variant::operator_cast_to_StringName((Variant *)&local_e0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            Array::Array(local_d8);
            auVar26._8_8_ = 0;
            auVar26._0_8_ = pvStack_80;
            _local_88 = auVar26 << 0x40;
            String::parse_latin1((String *)local_88,"flags");
            local_98 = (PackedScene *)((ulong)local_98 & 0xffffffff00000000);
            cVar37 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                     ::_lookup_pos(pHVar1,(String *)local_88,(uint *)local_1a0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            local_160 = 2;
            if (cVar37 != '\0') {
              auVar28._8_8_ = 0;
              auVar28._0_8_ = pvStack_80;
              _local_88 = auVar28 << 0x40;
              String::parse_latin1((String *)local_88,"flags");
              pVVar48 = (Variant *)
                        HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                        ::operator[](pHVar1,(String *)local_88);
              local_160 = Variant::operator_cast_to_int(pVVar48);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            }
            local_88 = (undefined1  [8])0x0;
            String::parse_latin1((String *)local_88,"binds");
            local_98 = (PackedScene *)((ulong)local_98 & 0xffffffff00000000);
            cVar37 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                     ::_lookup_pos(pHVar1,(String *)local_88,(uint *)local_1a0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            if (cVar37 != '\0') {
              local_98 = (PackedScene *)0x0;
              String::parse_latin1((String *)local_1a0,"binds");
              HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
              ::operator[](pHVar1,(String *)local_1a0);
              Variant::operator_cast_to_Array((Variant *)local_88);
              Array::operator=(local_d8,(Array *)local_88);
              Array::~Array((Array *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_1a0);
            }
            auVar31._8_8_ = 0;
            auVar31._0_8_ = pvStack_80;
            _local_88 = auVar31 << 0x40;
            String::parse_latin1((String *)local_88,"unbinds");
            local_98 = (PackedScene *)((ulong)local_98 & 0xffffffff00000000);
            cVar37 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                     ::_lookup_pos(pHVar1,(String *)local_88,(uint *)local_1a0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            local_158 = (Vector *)0x0;
            if (cVar37 != '\0') {
              auVar27._8_8_ = 0;
              auVar27._0_8_ = pvStack_80;
              _local_88 = auVar27 << 0x40;
              String::parse_latin1((String *)local_88,"unbinds");
              pVVar48 = (Variant *)
                        HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
                        ::operator[](pHVar1,(String *)local_88);
              uVar41 = Variant::operator_cast_to_int(pVVar48);
              local_158 = (Vector *)(ulong)uVar41;
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            }
            local_a0 = (Variant *)0x0;
            Array::begin();
            Array::end();
            if (local_88 != (undefined1  [8])local_98) {
              do {
                if (local_90 != (Variant *)0x0) {
                  Variant::operator=(local_90,(Variant *)local_98);
                }
                PackedScene::get_state();
                uVar42 = SceneState::add_value(local_b0);
                if (local_a0 == (Variant *)0x0) {
                  lVar50 = 1;
                }
                else {
                  lVar50 = *(long *)(local_a0 + -8) + 1;
                }
                iVar47 = CowData<int>::resize<false>((CowData<int> *)&local_a0,lVar50);
                if (iVar47 == 0) {
                  if (local_a0 == (Variant *)0x0) {
                    lVar46 = -1;
                    lVar50 = 0;
                  }
                  else {
                    lVar50 = *(long *)(local_a0 + -8);
                    lVar46 = lVar50 + -1;
                    if (-1 < lVar46) {
                      CowData<int>::_copy_on_write((CowData<int> *)&local_a0);
                      *(undefined4 *)(local_a0 + lVar46 * 4) = uVar42;
                      goto LAB_0010ae27;
                    }
                  }
                  _err_print_index_error
                            ("set","./core/templates/cowdata.h",0xcf,lVar46,lVar50,"p_index",
                             "size()","",false,false);
                }
                else {
                  _err_print_error("push_back","./core/templates/vector.h",0x142,
                                   "Condition \"err\" is true. Returning: true",0,0);
                }
LAB_0010ae27:
                if (((local_b0 != (Variant *)0x0) &&
                    (cVar37 = RefCounted::unreference(), pVVar48 = local_b0, cVar37 != '\0')) &&
                   (cVar37 = predelete_handler((Object *)local_b0), cVar37 != '\0')) {
                  (**(code **)(*(long *)pVVar48 + 0x140))(pVVar48);
                  Memory::free_static(pVVar48,false);
                }
                local_98 = local_98 + 0x18;
              } while ((undefined1  [8])local_98 != local_88);
            }
            PackedScene::get_state();
            aRVar32 = local_d0;
            PackedScene::get_state();
            iVar47 = SceneState::add_name((StringName *)local_88);
            PackedScene::get_state();
            iVar39 = SceneState::add_name((StringName *)local_98);
            PackedScene::get_state();
            pSVar35 = local_b8;
            NodePath::simplified();
            iVar43 = SceneState::add_node_path(pSVar35);
            PackedScene::get_state();
            pNVar33 = local_c8;
            NodePath::simplified();
            iVar44 = SceneState::add_node_path(pNVar33);
            SceneState::add_connection
                      (aRVar32._0_4_,iVar44,iVar43,iVar39,iVar47,local_160,local_158);
            NodePath::~NodePath(local_c0);
            Ref<SceneState>::unref((Ref<SceneState> *)&local_c8);
            NodePath::~NodePath((NodePath *)&local_b0);
            Ref<SceneState>::unref((Ref<SceneState> *)&local_b8);
            Ref<SceneState>::unref((Ref<SceneState> *)local_1a0);
            Ref<SceneState>::unref((Ref<SceneState> *)local_88);
            Ref<SceneState>::unref(local_d0);
            iVar47 = VariantParser::parse_tag
                               ((Stream *)(in_RSI + 0x28),(int *)(in_RSI + 0x2128),
                                (String *)(in_RSI + 0x18),(Tag *)this,in_RDX,false);
            *(int *)(in_RSI + 0x2188) = iVar47;
            if (iVar47 != 0) {
              if (iVar47 == 0x12) {
                *(undefined4 *)(in_RSI + 0x2188) = 0;
                *(undefined8 *)param_1 = 0;
                Ref<PackedScene>::operator=((Ref<PackedScene> *)param_1,(Ref *)local_188);
              }
              else {
                _printerr(in_RSI);
                *(undefined8 *)param_1 = 0;
              }
              CowData<int>::_unref((CowData<int> *)&local_a0);
              Array::~Array(local_d8);
              if (((StringName::configured != '\0') &&
                  ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
                 (local_e8 != 0)) {
                StringName::unref();
              }
              NodePath::~NodePath((NodePath *)local_f0);
              NodePath::~NodePath((NodePath *)local_f8);
              goto LAB_0010a973;
            }
            CowData<int>::_unref((CowData<int> *)&local_a0);
            Array::~Array(local_d8);
            if (((StringName::configured != '\0') &&
                ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
               (local_e8 != 0)) {
              StringName::unref();
            }
            NodePath::~NodePath((NodePath *)local_f0);
            NodePath::~NodePath((NodePath *)local_f8);
            goto LAB_00109796;
          }
          *(undefined4 *)(in_RSI + 0x2188) = 0x10;
          String::parse_latin1
                    ((String *)(in_RSI + 0x18),"missing \'method\' field from connection tag");
        }
      }
    }
  }
  *(undefined8 *)param_1 = 0;
  goto LAB_0010a5f4;
LAB_0010a278:
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (local_178 != (Variant *)0x0) {
    uVar41 = local_68._4_4_;
    uVar2 = local_78._8_8_;
    if (local_68._4_4_ != 0) {
      if (*(uint *)(hash_table_size_primes + (local_68 & 0xffffffff) * 4) != 0) {
        memset((void *)local_78._8_8_,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_68 & 0xffffffff) * 4) * 4);
      }
      pVVar48 = local_178;
      do {
        if ((StringName::configured != '\0') && (*(long *)pVVar48 != 0)) {
          StringName::unref();
        }
        pVVar48 = pVVar48 + 8;
      } while (pVVar48 != local_178 + (ulong)uVar41 * 8);
    }
    Memory::free_static(local_178,false);
    Memory::free_static((void *)local_78._0_8_,false);
    Memory::free_static(pvStack_80,false);
    Memory::free_static((void *)uVar2,false);
  }
  goto LAB_00109796;
}



/* ResourceLoaderText::load() [clone .part.0] */

undefined4 __thiscall ResourceLoaderText::load(ResourceLoaderText *this)

{
  String *this_00;
  HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
  *pHVar1;
  HashMap<String,ResourceLoaderText::ExtResource,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoaderText::ExtResource>>>
  *this_01;
  String *pSVar2;
  Object *pOVar3;
  code *pcVar4;
  StringName *pSVar5;
  bool *pbVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulong uVar15;
  Ref *pRVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  undefined8 *puVar25;
  long *plVar26;
  long lVar27;
  undefined8 uVar28;
  CowData *pCVar29;
  Ref<Resource> *pRVar30;
  MissingResource *pMVar31;
  Resource *pRVar32;
  Variant *pVVar33;
  Object *pOVar34;
  long lVar35;
  float *pfVar36;
  uint uVar37;
  undefined4 uVar38;
  char *pcVar39;
  long in_FS_OFFSET;
  Ref *local_1d8;
  CowData<char32_t> *local_1d0;
  MissingResource *local_1c8;
  char local_1b0;
  MissingResource *local_1a8;
  Ref<Resource> *local_180;
  Object *local_158;
  long local_150;
  Variant local_148 [8];
  Variant local_140 [8];
  long local_138;
  String local_130 [8];
  CowData<char32_t> local_128 [8];
  Ref *local_120;
  undefined8 local_118;
  long local_110;
  String local_108 [8];
  Ref *local_100;
  long local_f8;
  Ref *local_f0;
  Object *local_e8;
  undefined8 local_e0;
  int local_d8 [2];
  undefined1 local_d0 [16];
  int local_b8 [8];
  int local_98 [8];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (String *)(this + 0x20d8);
  while (cVar17 = String::operator!=(this_00,"ext_resource"), cVar17 == '\0') {
    local_f0 = (Ref *)0x0;
    local_e0 = 4;
    pHVar1 = (HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
              *)(this + 0x20e0);
    local_e8 = (Object *)&_LC100;
    String::parse_latin1((StrRange *)&local_f0);
    local_e8 = (Object *)((ulong)local_e8 & 0xffffffff00000000);
    cVar17 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
             ::_lookup_pos(pHVar1,(String *)&local_f0,(uint *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    if (cVar17 == '\0') {
      *(undefined4 *)(this + 0x2188) = 0x10;
      String::parse_latin1((String *)(this + 0x18),"Missing \'path\' in external resource tag");
      _printerr(this);
      uVar38 = *(undefined4 *)(this + 0x2188);
      goto LAB_0010c6c0;
    }
    local_f0 = (Ref *)0x0;
    local_e8 = (Object *)&_LC74;
    local_e0 = 4;
    String::parse_latin1((StrRange *)&local_f0);
    local_e8 = (Object *)((ulong)local_e8 & 0xffffffff00000000);
    cVar17 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
             ::_lookup_pos(pHVar1,(String *)&local_f0,(uint *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    if (cVar17 == '\0') goto LAB_0010c68e;
    local_f0 = (Ref *)0x0;
    local_e8 = (Object *)&_LC98;
    local_e0 = 2;
    String::parse_latin1((StrRange *)&local_f0);
    local_e8 = (Object *)((ulong)local_e8 & 0xffffffff00000000);
    cVar17 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
             ::_lookup_pos(pHVar1,(String *)&local_f0,(uint *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    if (cVar17 == '\0') goto LAB_0010c6eb;
    local_f0 = (Ref *)0x0;
    local_e8 = (Object *)&_LC100;
    local_e0 = 4;
    String::parse_latin1((StrRange *)&local_f0);
    HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
    ::operator[](pHVar1,(String *)&local_f0);
    Variant::operator_cast_to_String((Variant *)&local_158);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    local_e8 = (Object *)&_LC74;
    local_f0 = (Ref *)0x0;
    local_e0 = 4;
    String::parse_latin1((StrRange *)&local_f0);
    HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
    ::operator[](pHVar1,(String *)&local_f0);
    Variant::operator_cast_to_String((Variant *)&local_150);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    local_e8 = (Object *)&_LC98;
    local_f0 = (Ref *)0x0;
    local_e0 = 2;
    String::parse_latin1((StrRange *)&local_f0);
    HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
    ::operator[](pHVar1,(String *)&local_f0);
    Variant::operator_cast_to_String(local_148);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    local_e8 = (Object *)&_LC78;
    local_f0 = (Ref *)0x0;
    local_e0 = 3;
    String::parse_latin1((StrRange *)&local_f0);
    local_e8 = (Object *)((ulong)local_e8 & 0xffffffff00000000);
    cVar17 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
             ::_lookup_pos(pHVar1,(String *)&local_f0,(uint *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    if (cVar17 != '\0') {
      local_f0 = (Ref *)0x0;
      local_e8 = (Object *)&_LC78;
      local_e0 = 3;
      String::parse_latin1((StrRange *)&local_f0);
      HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
      ::operator[](pHVar1,(String *)&local_f0);
      Variant::operator_cast_to_String(local_140);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
      lVar24 = ResourceUID::text_to_id(ResourceUID::singleton);
      if ((lVar24 == -1) ||
         (cVar17 = ResourceUID::has_id((long)ResourceUID::singleton), cVar17 == '\0')) {
        lVar27 = ResourceLoader::get_resource_uid((String *)&local_158);
        if (lVar24 != lVar27) {
          local_100 = (Ref *)0x0;
          String::parse_latin1((String *)&local_100," - using text path instead: ");
          local_118 = 0;
          String::parse_latin1((String *)&local_118," - ext_resource, invalid UID: ");
          itos((long)local_128);
          local_138 = 0;
          String::parse_latin1((String *)&local_138,":");
          String::operator+(local_130,(String *)(this + 0x10));
          String::operator+((String *)&local_120,local_130);
          String::operator+((String *)&local_110,(String *)&local_120);
          String::operator+(local_108,(String *)&local_110);
          String::operator+((String *)&local_f8,local_108);
          String::operator+((String *)&local_f0,(String *)&local_f8);
          String::utf8();
          uVar28 = CharString::get_data();
          _err_print_error(&_LC172,"scene/resources/resource_format_text.cpp",0x1bf,uVar28);
          pOVar3 = local_e8;
          if (local_e8 != (Object *)0x0) {
            LOCK();
            pOVar34 = local_e8 + -0x10;
            *(long *)pOVar34 = *(long *)pOVar34 + -1;
            UNLOCK();
            if (*(long *)pOVar34 == 0) {
              local_e8 = (Object *)0x0;
              Memory::free_static(pOVar3 + -0x10,false);
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_130);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
          CowData<char32_t>::_unref(local_128);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
        }
      }
      else {
        ResourceUID::get_id_path((long)&local_e8);
        if (local_158 != local_e8) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
          local_158 = local_e8;
          local_e8 = (Object *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
    }
    iVar20 = String::find((char *)&local_158,0x117725);
    if ((iVar20 == -1) && (cVar17 = String::is_relative_path(), cVar17 != '\0')) {
      ProjectSettings::get_singleton();
      String::get_base_dir();
      String::path_join((String *)&local_f0);
      ProjectSettings::localize_path((String *)&local_e8);
      if (local_158 != local_e8) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
        local_158 = local_e8;
        local_e8 = (Object *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    }
    if ((*(long *)(this + 0x2140) != 0) && (*(int *)(this + 0x2164) != 0)) {
      uVar22 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x2160) * 4);
      lVar24 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x2160) * 8);
      uVar21 = String::hash();
      uVar15 = CONCAT44(0,uVar22);
      lVar27 = *(long *)(this + 0x2148);
      uVar23 = 1;
      if (uVar21 != 0) {
        uVar23 = uVar21;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar23 * lVar24;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar15;
      lVar35 = SUB168(auVar7 * auVar11,8);
      uVar21 = *(uint *)(lVar27 + lVar35 * 4);
      iVar20 = SUB164(auVar7 * auVar11,8);
      if (uVar21 != 0) {
        uVar37 = 0;
        do {
          if (uVar21 == uVar23) {
            cVar17 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 0x2140) + lVar35 * 8) + 0x10),
                                        (String *)&local_158);
            if (cVar17 != '\0') {
              pCVar29 = (CowData *)
                        HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                        ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                      *)(this + 0x2138),(String *)&local_158);
              if (local_158 != *(Object **)pCVar29) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,pCVar29);
              }
              break;
            }
            lVar27 = *(long *)(this + 0x2148);
          }
          uVar37 = uVar37 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(iVar20 + 1) * lVar24;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar15;
          lVar35 = SUB168(auVar8 * auVar12,8);
          uVar21 = *(uint *)(lVar27 + lVar35 * 4);
          iVar20 = SUB164(auVar8 * auVar12,8);
          if ((uVar21 == 0) ||
             (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar21 * lVar24, auVar13._8_8_ = 0,
             auVar13._0_8_ = uVar15, auVar10._8_8_ = 0,
             auVar10._0_8_ = (ulong)((uVar22 + iVar20) - SUB164(auVar9 * auVar13,8)) * lVar24,
             auVar14._8_8_ = 0, auVar14._0_8_ = uVar15, SUB164(auVar10 * auVar14,8) < uVar37))
          break;
        } while( true );
      }
    }
    this_01 = (HashMap<String,ResourceLoaderText::ExtResource,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoaderText::ExtResource>>>
               *)(this + 0x2060);
    lVar24 = HashMap<String,ResourceLoaderText::ExtResource,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoaderText::ExtResource>>>
             ::operator[](this_01,(String *)local_148);
    if (*(Object **)(lVar24 + 8) != local_158) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(lVar24 + 8),(CowData *)&local_158);
    }
    lVar24 = HashMap<String,ResourceLoaderText::ExtResource,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoaderText::ExtResource>>>
             ::operator[](this_01,(String *)local_148);
    if (*(long *)(lVar24 + 0x10) != local_150) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(lVar24 + 0x10),(CowData *)&local_150);
    }
    ResourceLoader::_load_start
              ((String *)&local_e8,(Variant *)&local_158,(Variant *)&local_150,
               (uint)(byte)this[0x2118] * 2,*(undefined4 *)(this + 0x2114));
    puVar25 = (undefined8 *)
              HashMap<String,ResourceLoaderText::ExtResource,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoaderText::ExtResource>>>
              ::operator[](this_01,(String *)local_148);
    pOVar3 = (Object *)*puVar25;
    pOVar34 = pOVar3;
    if (local_e8 != pOVar3) {
      *puVar25 = local_e8;
      if ((local_e8 != (Object *)0x0) && (cVar17 = RefCounted::reference(), cVar17 == '\0')) {
        *puVar25 = 0;
      }
      pOVar34 = local_e8;
      if (((pOVar3 != (Object *)0x0) &&
          (cVar17 = RefCounted::unreference(), pOVar34 = local_e8, cVar17 != '\0')) &&
         (cVar17 = predelete_handler(pOVar3), pOVar34 = local_e8, cVar17 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
        pOVar34 = local_e8;
      }
    }
    if (((pOVar34 != (Object *)0x0) &&
        (cVar17 = RefCounted::unreference(), pOVar3 = local_e8, cVar17 != '\0')) &&
       (cVar17 = predelete_handler(local_e8), cVar17 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    plVar26 = (long *)HashMap<String,ResourceLoaderText::ExtResource,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoaderText::ExtResource>>>
                      ::operator[](this_01,(String *)local_148);
    if (*plVar26 == 0) {
      if ((char)ResourceLoader::abort_on_missing_resource == '\0') {
        ResourceLoader::notify_dependency_error
                  ((String *)(this + 8),(String *)&local_158,(String *)&local_150);
        goto LAB_0010bd56;
      }
      *(undefined4 *)(this + 0x2188) = 0x10;
      operator+((char *)&local_e8,(String *)"[ext_resource] referenced non-existent resource at: ");
      if (*(Object **)(this + 0x18) != local_e8) {
        CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x18));
        pOVar3 = local_e8;
        local_e8 = (Object *)0x0;
        *(Object **)(this + 0x18) = pOVar3;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      _printerr(this);
      uVar38 = *(undefined4 *)(this + 0x2188);
LAB_0010c755:
      CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
      goto LAB_0010c6c0;
    }
LAB_0010bd56:
    iVar20 = VariantParser::parse_tag
                       ((Stream *)(this + 0x28),(int *)(this + 0x2128),(String *)(this + 0x18),
                        (Tag *)this_00,(ResourceParser *)(this + 0x2168),false);
    *(int *)(this + 0x2188) = iVar20;
    if (iVar20 != 0) {
      _printerr(this);
      uVar38 = *(undefined4 *)(this + 0x2188);
      goto LAB_0010c755;
    }
    *(int *)(this + 0x20c4) = *(int *)(this + 0x20c4) + 1;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  }
  *(int *)(this + 0x20c0) = *(int *)(this + 0x20c0) - *(int *)(this + 0x20c4);
  *(undefined4 *)(this + 0x20c4) = 0;
  while (cVar17 = String::operator!=(this_00,"sub_resource"), cVar17 == '\0') {
    local_e8 = (Object *)0x0;
    pHVar1 = (HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
              *)(this + 0x20e0);
    String::parse_latin1((String *)&local_e8,"type");
    local_f0 = (Ref *)((ulong)local_f0 & 0xffffffff00000000);
    cVar17 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
             ::_lookup_pos(pHVar1,(String *)&local_e8,(uint *)&local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    if (cVar17 == '\0') goto LAB_0010c68e;
    local_e8 = (Object *)0x0;
    String::parse_latin1((String *)&local_e8,"id");
    local_f0 = (Ref *)((ulong)local_f0 & 0xffffffff00000000);
    cVar17 = HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
             ::_lookup_pos(pHVar1,(String *)&local_e8,(uint *)&local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    if (cVar17 == '\0') goto LAB_0010c6eb;
    local_e8 = (Object *)0x0;
    String::parse_latin1((String *)&local_e8,"type");
    HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
    ::operator[](pHVar1,(String *)&local_e8);
    Variant::operator_cast_to_String((Variant *)&local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    local_e8 = (Object *)0x0;
    String::parse_latin1((String *)&local_e8,"id");
    HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
    ::operator[](pHVar1,(String *)&local_e8);
    Variant::operator_cast_to_String((Variant *)local_130);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    local_f0 = (Ref *)0x0;
    String::parse_latin1((String *)&local_f0,"::");
    String::operator+((String *)&local_e8,(String *)(this + 8));
    String::operator+((String *)local_128,(String *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    local_120 = (Ref *)0x0;
    if ((*(int *)(this + 0x2110) != 2) ||
       (cVar18 = ResourceCache::has((String *)local_128), cVar18 == '\0')) {
LAB_0010c416:
      ResourceCache::get_ref((String *)&local_100);
      if ((*(int *)(this + 0x2110) != 0) && (local_100 != (Ref *)0x0)) {
        Ref<Resource>::operator=((Ref<Resource> *)&local_120,local_100);
        local_1a8 = (MissingResource *)0x0;
        cVar18 = '\0';
LAB_0010c473:
        Ref<Resource>::unref((Ref<Resource> *)&local_100);
        pfVar36 = *(float **)(this + 0x2120);
        local_1d8 = local_120;
        iVar20 = *(int *)(this + 0x20c4) + 1;
        *(int *)(this + 0x20c4) = iVar20;
        if (pfVar36 != (float *)0x0) {
LAB_0010c4a7:
          if (0 < *(int *)(this + 0x20c0)) {
            *pfVar36 = (float)iVar20 / (float)*(int *)(this + 0x20c0);
          }
        }
        pRVar30 = (Ref<Resource> *)
                  HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>
                  ::operator[]((HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>
                                *)(this + 0x2090),local_130);
        Ref<Resource>::operator=(pRVar30,local_1d8);
        if (cVar18 != '\0') goto LAB_0010c4ec;
        goto LAB_0010c527;
      }
      StringName::StringName((StringName *)&local_e8,(String *)&local_138,false);
      pMVar31 = (MissingResource *)ClassDB::instantiate((StringName *)&local_e8);
      if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
        StringName::unref();
      }
      local_1a8 = (MissingResource *)0x0;
      if (pMVar31 == (MissingResource *)0x0) {
        if ((char)ResourceLoader::create_missing_resources_if_class_unavailable != '\0') {
          pMVar31 = (MissingResource *)operator_new(0x280,"");
          MissingResource::MissingResource(pMVar31);
          postinitialize_handler((Object *)pMVar31);
          MissingResource::set_original_class((String *)pMVar31);
          MissingResource::set_recording_properties(SUB81(pMVar31,0));
          local_1a8 = pMVar31;
          goto LAB_0010c910;
        }
        local_f0 = (Ref *)0x0;
        if (local_138 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_138);
        }
        pcVar39 = "Can\'t create sub resource of type \'%s\'";
      }
      else {
LAB_0010c910:
        pRVar32 = (Resource *)__dynamic_cast(pMVar31,&Object::typeinfo,&Resource::typeinfo,0);
        if (pRVar32 != (Resource *)0x0) {
          local_e8 = (Object *)0x0;
          Ref<Resource>::operator=((Ref<Resource> *)&local_e8,pRVar32);
          Ref<Resource>::operator=((Ref<Resource> *)&local_120,(Ref *)local_e8);
          Ref<Resource>::unref((Ref<Resource> *)&local_e8);
          cVar18 = cVar17;
          goto LAB_0010c473;
        }
        local_f0 = (Ref *)0x0;
        if (local_138 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_138);
        }
        pcVar39 = "Can\'t create sub resource of type \'%s\' as it\'s not a resource type";
      }
      local_f8 = 0;
      String::parse_latin1((String *)&local_f8,pcVar39);
      vformat<String>((String *)&local_e8,(String *)&local_f8,(String *)&local_f0);
      if (*(Object **)(this + 0x18) != local_e8) {
        CowData<char32_t>::operator=((CowData<char32_t> *)(this + 0x18),(CowData *)&local_e8);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      uVar38 = 0x10;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
      _printerr(this);
      *(undefined4 *)(this + 0x2188) = 0x10;
      Ref<Resource>::unref((Ref<Resource> *)&local_100);
LAB_0010c661:
      local_180 = (Ref<Resource> *)&local_120;
      Ref<Resource>::unref(local_180);
      CowData<char32_t>::_unref(local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_130);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
      goto LAB_0010c6c0;
    }
    ResourceCache::get_ref((String *)&local_f0);
    if (local_f0 == (Ref *)0x0) {
LAB_0010d5f5:
      Ref<Resource>::unref((Ref<Resource> *)&local_f0);
      goto LAB_0010c416;
    }
    (**(code **)(*(long *)local_f0 + 0x48))((String *)&local_e8);
    cVar18 = String::operator==((String *)&local_e8,(String *)&local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    if (cVar18 == '\0') goto LAB_0010d5f5;
    Ref<Resource>::operator=((Ref<Resource> *)&local_120,local_f0);
    pRVar16 = local_120;
    local_1d8 = local_120;
    (**(code **)(*(long *)local_120 + 0x170))();
    Ref<Resource>::unref((Ref<Resource> *)&local_f0);
    pfVar36 = *(float **)(this + 0x2120);
    local_1a8 = (MissingResource *)0x0;
    iVar20 = *(int *)(this + 0x20c4) + 1;
    *(int *)(this + 0x20c4) = iVar20;
    if (pfVar36 != (float *)0x0) goto LAB_0010c4a7;
    pRVar30 = (Ref<Resource> *)
              HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>
              ::operator[]((HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>
                            *)(this + 0x2090),local_130);
    Ref<Resource>::operator=(pRVar30,pRVar16);
LAB_0010c4ec:
    if (*(int *)(this + 0x2110) == 0) {
      (**(code **)(*(long *)local_1d8 + 400))(local_1d8,(String *)local_128);
    }
    else {
      (**(code **)(*(long *)local_1d8 + 0x188))
                (local_1d8,(String *)local_128,*(int *)(this + 0x2110) == 2);
    }
    Resource::set_scene_unique_id((String *)local_1d8);
    cVar18 = cVar17;
LAB_0010c527:
    local_180 = (Ref<Resource> *)&local_120;
    Dictionary::Dictionary((Dictionary *)&local_118);
    while( true ) {
      local_110 = 0;
      local_d8[0] = 0;
      local_d8[1] = 0;
      local_d0 = (undefined1  [16])0x0;
      iVar20 = VariantParser::parse_tag_assign_eof
                         ((Stream *)(this + 0x28),(int *)(this + 0x2128),(String *)(this + 0x18),
                          (Tag *)this_00,(String *)&local_110,(Variant *)local_d8,
                          (ResourceParser *)(this + 0x2168),false);
      *(int *)(this + 0x2188) = iVar20;
      if (iVar20 != 0) {
        _printerr(this);
        uVar38 = *(undefined4 *)(this + 0x2188);
        goto LAB_0010c63b;
      }
      if ((local_110 == 0) || (*(uint *)(local_110 + -8) < 2)) break;
      if (cVar18 != '\0') {
        if (local_d8[0] == 0x18) {
          if ((local_1a8 == (MissingResource *)0x0) &&
             (local_1b0 = (char)ResourceLoader::create_missing_resources_if_class_unavailable,
             (char)ResourceLoader::create_missing_resources_if_class_unavailable != '\0')) {
            local_e8 = (Object *)0x0;
            Ref<MissingResource>::operator=((Ref<MissingResource> *)&local_e8,(Variant *)local_d8);
            if (local_e8 != (Object *)0x0) {
              Variant::Variant((Variant *)local_58,local_e8);
              Variant::Variant((Variant *)local_78,(String *)&local_110);
              pVVar33 = (Variant *)Dictionary::operator[]((Variant *)&local_118);
              Variant::operator=(pVVar33,(Variant *)local_58);
              if (Variant::needs_deinit[local_78[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              local_1b0 = '\0';
            }
            Ref<MissingResource>::unref((Ref<MissingResource> *)&local_e8);
            if (local_d8[0] == 0x1c) goto LAB_0010cae2;
            goto LAB_0010cac5;
          }
LAB_0010c9a3:
          StringName::StringName((StringName *)&local_e8,(String *)&local_110,false);
          Object::set((StringName *)local_1d8,(Variant *)&local_e8,(bool *)local_d8);
          if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
            StringName::unref();
          }
        }
        else {
          local_1b0 = cVar18;
          if (local_d8[0] == 0x1c) {
LAB_0010cae2:
            Variant::operator_cast_to_Array((Variant *)&local_100);
            local_108[0] = (String)0x0;
            StringName::StringName((StringName *)&local_e8,(String *)&local_110,false);
            Object::get((StringName *)local_98,(bool *)local_1d8);
            if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
              StringName::unref();
            }
            lVar24 = (long)local_98[0];
            if ((local_108[0] != (String)0x0) && (local_98[0] == 0x1c)) {
              Variant::operator_cast_to_Array((Variant *)&local_f8);
              cVar17 = Array::is_same_typed((Array *)&local_100);
              if (cVar17 == '\0') {
                Array::get_typed_script();
                Array::get_typed_class_name();
                uVar22 = Array::get_typed_builtin();
                Array::Array((Array *)&local_e8,(Array *)&local_100,uVar22,(StringName *)&local_f0,
                             (Variant *)local_78);
                Variant::Variant((Variant *)local_58,(Array *)&local_e8);
                Variant::operator=((Variant *)local_d8,(Variant *)local_58);
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                Array::~Array((Array *)&local_e8);
                if ((StringName::configured != '\0') && (local_f0 != (Ref *)0x0)) {
                  StringName::unref();
                }
                if (Variant::needs_deinit[local_78[0]] != '\0') {
                  Variant::_clear_internal();
                }
              }
              Array::~Array((Array *)&local_f8);
              lVar24 = (long)local_98[0];
            }
            if (Variant::needs_deinit[lVar24] != '\0') {
              Variant::_clear_internal();
            }
            Array::~Array((Array *)&local_100);
LAB_0010cac5:
            if (local_d8[0] == 0x1b) goto LAB_0010cb94;
          }
          else {
            if (local_d8[0] != 0x1b) goto LAB_0010c9a3;
LAB_0010cb94:
            Variant::operator_cast_to_Dictionary((Variant *)local_108);
            local_140[0] = (Variant)0x0;
            StringName::StringName((StringName *)&local_e8,(String *)&local_110,false);
            Object::get((StringName *)local_b8,(bool *)local_1d8);
            if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
              StringName::unref();
            }
            lVar24 = (long)local_b8[0];
            if ((local_140[0] != (Variant)0x0) && (local_b8[0] == 0x1b)) {
              Variant::operator_cast_to_Dictionary((Variant *)&local_100);
              cVar17 = Dictionary::is_same_typed((Dictionary *)local_108);
              if (cVar17 == '\0') {
                Dictionary::get_typed_value_script();
                Dictionary::get_typed_value_class_name();
                uVar22 = Dictionary::get_typed_value_builtin();
                Dictionary::get_typed_key_script();
                Dictionary::get_typed_key_class_name();
                uVar23 = Dictionary::get_typed_key_builtin();
                Dictionary::Dictionary
                          ((Dictionary *)&local_e8,(Dictionary *)local_108,uVar23,
                           (StringName *)&local_f8,(Variant *)local_98,uVar22,
                           (StringName *)&local_f0,(Variant *)local_78);
                Variant::Variant((Variant *)local_58,(Dictionary *)&local_e8);
                Variant::operator=((Variant *)local_d8,(Variant *)local_58);
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                Dictionary::~Dictionary((Dictionary *)&local_e8);
                if ((StringName::configured != '\0') && (local_f8 != 0)) {
                  StringName::unref();
                }
                if (Variant::needs_deinit[local_98[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if ((StringName::configured != '\0') && (local_f0 != (Ref *)0x0)) {
                  StringName::unref();
                }
                if (Variant::needs_deinit[local_78[0]] != '\0') {
                  Variant::_clear_internal();
                }
              }
              Dictionary::~Dictionary((Dictionary *)&local_100);
              lVar24 = (long)local_b8[0];
            }
            if (Variant::needs_deinit[lVar24] != '\0') {
              Variant::_clear_internal();
            }
            Dictionary::~Dictionary((Dictionary *)local_108);
          }
          if (local_1b0 != '\0') goto LAB_0010c9a3;
        }
      }
      if (Variant::needs_deinit[local_d8[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
    }
    if ((*(long *)(this + 0x20d8) == 0) || (*(uint *)(*(long *)(this + 0x20d8) + -8) < 2)) {
      *(undefined4 *)(this + 0x2188) = 0x10;
      String::parse_latin1
                ((String *)(this + 0x18),"Premature end of file while parsing [sub_resource]");
      _printerr(this);
      uVar38 = *(undefined4 *)(this + 0x2188);
LAB_0010c63b:
      if (Variant::needs_deinit[local_d8[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
      Dictionary::~Dictionary((Dictionary *)&local_118);
      goto LAB_0010c661;
    }
    if (Variant::needs_deinit[local_d8[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
    if (local_1a8 != (MissingResource *)0x0) {
      MissingResource::set_recording_properties(SUB81(local_1a8,0));
    }
    cVar17 = Dictionary::is_empty();
    if (cVar17 == '\0') {
      pcVar4 = *(code **)(*(long *)local_1d8 + 0xa8);
      Variant::Variant((Variant *)local_58,(Dictionary *)&local_118);
      StringName::StringName((StringName *)&local_e8,"_missing_resources",false);
      (*pcVar4)(local_1d8,(String *)&local_e8,(Variant *)local_58);
      if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    Dictionary::~Dictionary((Dictionary *)&local_118);
    Ref<Resource>::unref(local_180);
    CowData<char32_t>::_unref(local_128);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_130);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  }
  cVar18 = String::operator!=(this_00,"resource");
  if (cVar18 == '\0') {
    if (this[0x2048] == (ResourceLoaderText)0x0) {
      pRVar30 = (Ref<Resource> *)(this + 0x2190);
      ResourceLoader::get_resource_ref_override((String *)&local_e8);
      Ref<Resource>::operator=(pRVar30,(Ref *)local_e8);
      Ref<Resource>::unref((Ref<Resource> *)&local_e8);
      if (*(long *)(this + 0x2190) == 0) {
        ResourceCache::get_ref((String *)&local_100);
        if ((*(int *)(this + 0x2110) == 2) && (local_100 != (Ref *)0x0)) {
          (**(code **)(*(long *)local_100 + 0x48))((String *)&local_e8);
          cVar18 = String::operator==((String *)&local_e8,(String *)(this + 0x2050));
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          if (cVar18 != '\0') {
            (**(code **)(*(long *)local_100 + 0x170))();
            Ref<Resource>::operator=(pRVar30,local_100);
          }
        }
        local_1c8 = (MissingResource *)0x0;
        if (*(long *)(this + 0x2190) == 0) {
          pSVar2 = (String *)(this + 0x2050);
          StringName::StringName((StringName *)&local_e8,pSVar2,false);
          pMVar31 = (MissingResource *)ClassDB::instantiate((StringName *)&local_e8);
          if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
            StringName::unref();
          }
          local_1c8 = (MissingResource *)0x0;
          if (pMVar31 == (MissingResource *)0x0) {
            if ((char)ResourceLoader::create_missing_resources_if_class_unavailable != '\0') {
              pMVar31 = (MissingResource *)operator_new(0x280,"");
              MissingResource::MissingResource(pMVar31);
              postinitialize_handler((Object *)pMVar31);
              MissingResource::set_original_class((String *)pMVar31);
              MissingResource::set_recording_properties(SUB81(pMVar31,0));
              local_1c8 = pMVar31;
              goto LAB_0010dba6;
            }
            local_f0 = (Ref *)0x0;
            if (*(long *)(this + 0x2050) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)pSVar2);
            }
            pcVar39 = "Can\'t create sub resource of type \'%s\'";
          }
          else {
LAB_0010dba6:
            pRVar32 = (Resource *)__dynamic_cast(pMVar31,&Object::typeinfo,&Resource::typeinfo,0);
            if (pRVar32 != (Resource *)0x0) {
              local_e8 = (Object *)0x0;
              Ref<Resource>::operator=((Ref<Resource> *)&local_e8,pRVar32);
              Ref<Resource>::operator=(pRVar30,(Ref *)local_e8);
              Ref<Resource>::unref((Ref<Resource> *)&local_e8);
              goto LAB_0010db0c;
            }
            local_f0 = (Ref *)0x0;
            if (*(long *)(this + 0x2050) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)pSVar2);
            }
            pcVar39 = "Can\'t create sub resource of type \'%s\' as it\'s not a resource type";
          }
          local_1d0 = (CowData<char32_t> *)&local_f0;
          local_f8 = 0;
          String::parse_latin1((String *)&local_f8,pcVar39);
          vformat<String>((String *)&local_e8,(String *)&local_f8,local_1d0);
          if (*(Object **)(this + 0x18) != local_e8) {
            CowData<char32_t>::operator=((CowData<char32_t> *)(this + 0x18),(CowData *)&local_e8);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          CowData<char32_t>::_unref(local_1d0);
          _printerr(this);
          *(undefined4 *)(this + 0x2188) = 0x10;
          Ref<Resource>::unref((Ref<Resource> *)&local_100);
          goto LAB_0010d7ef;
        }
LAB_0010db0c:
        Ref<Resource>::unref((Ref<Resource> *)&local_100);
      }
      else {
        local_1c8 = (MissingResource *)0x0;
      }
      Dictionary::Dictionary((Dictionary *)&local_118);
      while( true ) {
        local_110 = 0;
        local_d8[0] = 0;
        local_d8[1] = 0;
        local_d0 = (undefined1  [16])0x0;
        iVar20 = VariantParser::parse_tag_assign_eof
                           ((Stream *)(this + 0x28),(int *)(this + 0x2128),(String *)(this + 0x18),
                            (Tag *)this_00,(String *)&local_110,(Variant *)local_d8,
                            (ResourceParser *)(this + 0x2168),false);
        *(int *)(this + 0x2188) = iVar20;
        cVar18 = (char)ResourceLoader::create_missing_resources_if_class_unavailable;
        if (iVar20 != 0) break;
        if ((local_110 == 0) || (*(uint *)(local_110 + -8) < 2)) {
          if ((*(long *)(this + 0x20d8) == 0) || (*(uint *)(*(long *)(this + 0x20d8) + -8) < 2))
          goto LAB_0010d28d;
          *(undefined4 *)(this + 0x2188) = 0x10;
          String::parse_latin1
                    ((String *)(this + 0x18),"Extra tag found when parsing main resource file");
          goto LAB_0010da6e;
        }
        if (local_d8[0] == 0x18) {
          if ((local_1c8 == (MissingResource *)0x0) &&
             ((char)ResourceLoader::create_missing_resources_if_class_unavailable != '\0')) {
            local_e8 = (Object *)0x0;
            Ref<MissingResource>::operator=((Ref<MissingResource> *)&local_e8,(Variant *)local_d8);
            if (local_e8 != (Object *)0x0) {
              Variant::Variant((Variant *)local_58,local_e8);
              Variant::Variant((Variant *)local_78,(String *)&local_110);
              pVVar33 = (Variant *)Dictionary::operator[]((Variant *)&local_118);
              Variant::operator=(pVVar33,(Variant *)local_58);
              if (Variant::needs_deinit[local_78[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              cVar18 = '\0';
            }
            Ref<MissingResource>::unref((Ref<MissingResource> *)&local_e8);
            if (local_d8[0] == 0x1c) goto LAB_0010d542;
            goto LAB_0010d471;
          }
LAB_0010d349:
          pSVar5 = *(StringName **)(this + 0x2190);
          StringName::StringName((StringName *)&local_e8,(String *)&local_110,false);
          Object::set(pSVar5,(Variant *)&local_e8,(bool *)local_d8);
          if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
            StringName::unref();
          }
        }
        else {
          cVar18 = cVar17;
          if (local_d8[0] == 0x1c) {
LAB_0010d542:
            Variant::operator_cast_to_Array((Variant *)&local_100);
            local_108[0] = (String)0x0;
            pbVar6 = *(bool **)(this + 0x2190);
            StringName::StringName((StringName *)&local_e8,(String *)&local_110,false);
            Object::get((StringName *)local_98,pbVar6);
            if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
              StringName::unref();
            }
            lVar24 = (long)local_98[0];
            if ((local_108[0] != (String)0x0) && (local_98[0] == 0x1c)) {
              Variant::operator_cast_to_Array((Variant *)&local_f8);
              cVar19 = Array::is_same_typed((Array *)&local_100);
              if (cVar19 == '\0') {
                Array::get_typed_script();
                Array::get_typed_class_name();
                uVar22 = Array::get_typed_builtin();
                Array::Array((Array *)&local_e8,(Array *)&local_100,uVar22,(StringName *)&local_f0,
                             (Variant *)local_78);
                Variant::Variant((Variant *)local_58,(Array *)&local_e8);
                Variant::operator=((Variant *)local_d8,(Variant *)local_58);
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                Array::~Array((Array *)&local_e8);
                if ((StringName::configured != '\0') && (local_f0 != (Ref *)0x0)) {
                  StringName::unref();
                }
                if (Variant::needs_deinit[local_78[0]] != '\0') {
                  Variant::_clear_internal();
                }
              }
              Array::~Array((Array *)&local_f8);
              lVar24 = (long)local_98[0];
            }
            if (Variant::needs_deinit[lVar24] != '\0') {
              Variant::_clear_internal();
            }
            Array::~Array((Array *)&local_100);
LAB_0010d471:
            if (local_d8[0] == 0x1b) goto LAB_0010d494;
          }
          else {
            if (local_d8[0] != 0x1b) goto LAB_0010d349;
LAB_0010d494:
            Variant::operator_cast_to_Dictionary((Variant *)local_108);
            local_120 = (Ref *)((ulong)local_120 & 0xffffffffffffff00);
            pbVar6 = *(bool **)(this + 0x2190);
            StringName::StringName((StringName *)&local_e8,(String *)&local_110,false);
            Object::get((StringName *)local_b8,pbVar6);
            if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
              StringName::unref();
            }
            lVar24 = (long)local_b8[0];
            if ((local_120._0_1_ != (String)0x0) && (local_b8[0] == 0x1b)) {
              Variant::operator_cast_to_Dictionary((Variant *)&local_100);
              cVar19 = Dictionary::is_same_typed((Dictionary *)local_108);
              if (cVar19 == '\0') {
                Dictionary::get_typed_value_script();
                Dictionary::get_typed_value_class_name();
                uVar22 = Dictionary::get_typed_value_builtin();
                Dictionary::get_typed_key_script();
                Dictionary::get_typed_key_class_name();
                uVar23 = Dictionary::get_typed_key_builtin();
                Dictionary::Dictionary
                          ((Dictionary *)&local_e8,(Dictionary *)local_108,uVar23,
                           (StringName *)&local_f8,(Variant *)local_98,uVar22,
                           (StringName *)&local_f0,(Variant *)local_78);
                Variant::Variant((Variant *)local_58,(Dictionary *)&local_e8);
                Variant::operator=((Variant *)local_d8,(Variant *)local_58);
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                Dictionary::~Dictionary((Dictionary *)&local_e8);
                if ((StringName::configured != '\0') && (local_f8 != 0)) {
                  StringName::unref();
                }
                if (Variant::needs_deinit[local_98[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if ((StringName::configured != '\0') && (local_f0 != (Ref *)0x0)) {
                  StringName::unref();
                }
                if (Variant::needs_deinit[local_78[0]] != '\0') {
                  Variant::_clear_internal();
                }
              }
              Dictionary::~Dictionary((Dictionary *)&local_100);
              lVar24 = (long)local_b8[0];
            }
            if (Variant::needs_deinit[lVar24] != '\0') {
              Variant::_clear_internal();
            }
            Dictionary::~Dictionary((Dictionary *)local_108);
          }
          if (cVar18 != '\0') goto LAB_0010d349;
        }
        if (Variant::needs_deinit[local_d8[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
      }
      if (iVar20 == 0x12) {
        *(undefined4 *)(this + 0x2188) = 0;
        if (*(int *)(this + 0x2110) == 0) {
          (**(code **)(**(long **)(this + 0x2190) + 400))(*(long **)(this + 0x2190),this + 0x10);
        }
        else {
          cVar17 = ResourceCache::has((String *)(this + 0x10));
          if (cVar17 == '\0') {
            (**(code **)(**(long **)(this + 0x2190) + 0x188))
                      (*(long **)(this + 0x2190),(String *)(this + 0x10),0);
          }
          Resource::set_as_translation_remapped(SUB81(*(undefined8 *)(this + 0x2190),0));
        }
LAB_0010d28d:
        if (Variant::needs_deinit[local_d8[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
        iVar20 = *(int *)(this + 0x20c4);
        *(int *)(this + 0x20c4) = iVar20 + 1;
        if ((*(float **)(this + 0x2120) != (float *)0x0) && (0 < *(int *)(this + 0x20c0))) {
          **(float **)(this + 0x2120) = (float)(iVar20 + 1) / (float)*(int *)(this + 0x20c0);
        }
        if (local_1c8 != (MissingResource *)0x0) {
          MissingResource::set_recording_properties(SUB81(local_1c8,0));
        }
        cVar17 = Dictionary::is_empty();
        if (cVar17 == '\0') {
          plVar26 = *(long **)(this + 0x2190);
          pcVar4 = *(code **)(*plVar26 + 0xa8);
          Variant::Variant((Variant *)local_58,(Dictionary *)&local_118);
          StringName::StringName((StringName *)&local_e8,"_missing_resources",false);
          (*pcVar4)(plVar26,(String *)&local_e8,(Variant *)local_58);
          if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        *(undefined4 *)(this + 0x2188) = 0;
        uVar38 = 0;
      }
      else {
LAB_0010da6e:
        _printerr(this);
        uVar38 = *(undefined4 *)(this + 0x2188);
        if (Variant::needs_deinit[local_d8[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
      }
      Dictionary::~Dictionary((Dictionary *)&local_118);
      goto LAB_0010c6c0;
    }
    String::parse_latin1((String *)(this + 0x18),"Unexpected \'resource\' tag in a scene file");
    _printerr(this);
    *(undefined4 *)(this + 0x2188) = 0x10;
  }
  else {
    cVar17 = String::operator==(this_00,"node");
    if (cVar17 == '\0') {
      local_f0 = (Ref *)0x0;
      if (*(long *)(this + 0x20d8) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)this_00);
      }
      local_f8 = 0;
      String::parse_latin1((String *)&local_f8,"Unknown tag \'%s\' in file");
      vformat<String>((CowData<char32_t> *)&local_e8,(String *)&local_f8,
                      (CowData<char32_t> *)&local_f0);
      if (*(Object **)(this + 0x18) != local_e8) {
        CowData<char32_t>::operator=((CowData<char32_t> *)(this + 0x18),(CowData *)&local_e8);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      uVar38 = 0x10;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
      _printerr(this);
      *(undefined4 *)(this + 0x2188) = 0x10;
      goto LAB_0010c6c0;
    }
    if (this[0x2048] != (ResourceLoaderText)0x0) {
      _parse_node_tag((ResourceParser *)&local_f0);
      pRVar16 = local_f0;
      if (local_f0 != (Ref *)0x0) {
        *(undefined4 *)(this + 0x2188) = 0;
        pOVar34 = (Object *)__dynamic_cast(local_f0,&Object::typeinfo,&Resource::typeinfo);
        pOVar3 = *(Object **)(this + 0x2190);
        if (pOVar3 != pOVar34) {
          *(Object **)(this + 0x2190) = pOVar34;
          if ((pOVar34 != (Object *)0x0) && (cVar17 = RefCounted::reference(), cVar17 == '\0')) {
            *(undefined8 *)(this + 0x2190) = 0;
          }
          if (((pOVar3 != (Object *)0x0) && (cVar17 = RefCounted::unreference(), cVar17 != '\0')) &&
             (cVar17 = predelete_handler(pOVar3), cVar17 != '\0')) {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
        if (*(int *)(this + 0x2110) == 0) {
          PackedScene::get_state();
          SceneState::set_path((String *)local_e8);
          Ref<SceneState>::unref((Ref<SceneState> *)&local_e8);
          (**(code **)(*(long *)pRVar16 + 400))(pRVar16,this + 0x10);
        }
        else {
          cVar17 = ResourceCache::has((String *)(this + 0x10));
          if (cVar17 == '\0') {
            (**(code **)(*(long *)pRVar16 + 0x188))(pRVar16,(String *)(this + 0x10),0);
          }
        }
        iVar20 = *(int *)(this + 0x20c4);
        *(int *)(this + 0x20c4) = iVar20 + 1;
        if ((*(float **)(this + 0x2120) != (float *)0x0) && (0 < *(int *)(this + 0x20c0))) {
          **(float **)(this + 0x2120) = (float)(iVar20 + 1) / (float)*(int *)(this + 0x20c0);
        }
      }
      uVar38 = *(undefined4 *)(this + 0x2188);
      Ref<PackedScene>::unref((Ref<PackedScene> *)&local_f0);
      goto LAB_0010c6c0;
    }
    String::parse_latin1((String *)(this + 0x18),"Unexpected \'node\' tag in a resource file");
    _printerr(this);
    *(undefined4 *)(this + 0x2188) = 0x10;
  }
LAB_0010d7ef:
  uVar38 = 0x10;
LAB_0010c6c0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar38;
LAB_0010c68e:
  *(undefined4 *)(this + 0x2188) = 0x10;
  String::parse_latin1((String *)(this + 0x18),"Missing \'type\' in external resource tag");
  _printerr(this);
  uVar38 = *(undefined4 *)(this + 0x2188);
  goto LAB_0010c6c0;
LAB_0010c6eb:
  *(undefined4 *)(this + 0x2188) = 0x10;
  String::parse_latin1((String *)(this + 0x18),"Missing \'id\' in external resource tag");
  _printerr(this);
  uVar38 = *(undefined4 *)(this + 0x2188);
  goto LAB_0010c6c0;
}



/* ResourceLoaderText::load() */

void __thiscall ResourceLoaderText::load(ResourceLoaderText *this)

{
  if (*(int *)(this + 0x2188) == 0) {
    load(this);
    return;
  }
  return;
}



/* ResourceFormatLoaderText::load(String const&, String const&, Error*, bool, float*,
   ResourceFormatLoader::CacheMode) */

Ref<Resource> *
ResourceFormatLoaderText::load
          (Ref<Resource> *param_1,undefined8 param_2,CowData *param_3,CowData *param_4,int *param_5,
          undefined1 param_6,undefined8 param_7,uint param_8)

{
  Object *pOVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  int local_21fc;
  Object *local_21f8;
  CowData<char32_t> local_21f0 [8];
  undefined8 local_21e8;
  Object *local_21e0;
  ResourceLoaderText local_21d8 [8];
  Object *local_21d0;
  Object *local_21c8 [1056];
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  int local_50;
  Ref *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 != (int *)0x0) {
    *param_5 = 0x13;
  }
  FileAccess::open((String *)&local_21f8,(int)param_3,(Error *)0x1);
  if (local_21fc != 0) {
    local_21e8 = 0;
    String::parse_latin1((String *)&local_21e8,"\'.");
    operator+((char *)local_21f0,(String *)"Cannot open file \'");
    String::operator+((String *)&local_21e0,(String *)local_21f0);
    _err_print_error(&_LC172,"scene/resources/resource_format_text.cpp",0x56c,
                     "Condition \"err != OK\" is true. Returning: Ref<Resource>()",
                     (String *)&local_21e0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_21e0);
    CowData<char32_t>::_unref(local_21f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_21e8);
    *(undefined8 *)param_1 = 0;
    goto LAB_0010e2fa;
  }
  ResourceLoaderText::ResourceLoaderText(local_21d8);
  if (((*(long *)param_4 == 0) || (*(uint *)(*(long *)param_4 + -8) < 2)) &&
     (local_21e8 = 0, param_4 = param_3, *(long *)param_3 == 0)) {
    if (param_8 != 3) goto LAB_0010e1cf;
LAB_0010e367:
    local_c8 = _LC181;
  }
  else {
    local_21e8 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_21e8,param_4);
    if (param_8 == 3) goto LAB_0010e367;
LAB_0010e1cf:
    if (param_8 < 4) {
      local_c8 = CONCAT44(1,param_8);
    }
    else if (param_8 == 4) {
      local_c8 = _LC62;
    }
  }
  local_c0 = param_6;
  ProjectSettings::get_singleton();
  ProjectSettings::localize_path((String *)&local_21e0);
  if (local_21d0 != local_21e0) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_21d0);
    local_21d0 = local_21e0;
    local_21e0 = (Object *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_21e0);
  local_b8 = param_7;
  if (local_21c8[0] != local_21d0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_21c8,(CowData *)&local_21d0);
  }
  pOVar1 = local_21f8;
  local_21e0 = (Object *)0x0;
  if (local_21f8 == (Object *)0x0) {
    ResourceLoaderText::open(local_21d8,(String *)&local_21e0,0);
  }
  else {
    local_21e0 = local_21f8;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      local_21e0 = (Object *)0x0;
      ResourceLoaderText::open(local_21d8,(String *)&local_21e0,0);
    }
    else {
      ResourceLoaderText::open(local_21d8,(String *)&local_21e0,0);
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (local_50 == 0) {
    iVar3 = ResourceLoaderText::load(local_21d8);
    if (param_5 != (int *)0x0) {
      *param_5 = iVar3;
    }
    if (iVar3 != 0) goto LAB_0010e38b;
    *(undefined8 *)param_1 = 0;
    Ref<Resource>::operator=(param_1,local_48);
  }
  else {
    if (param_5 != (int *)0x0) {
      *param_5 = local_50;
    }
LAB_0010e38b:
    *(undefined8 *)param_1 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_21e8);
  ResourceLoaderText::~ResourceLoaderText(local_21d8);
LAB_0010e2fa:
  if (((local_21f8 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_21f8), cVar2 != '\0')) {
    (**(code **)(*(long *)local_21f8 + 0x140))(local_21f8);
    Memory::free_static(local_21f8,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* CowData<ResourceFormatSaverTextInstance::ResourceSort>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<ResourceFormatSaverTextInstance::ResourceSort>::_copy_on_write
          (CowData<ResourceFormatSaverTextInstance::ResourceSort> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  Ref<Resource> *this_00;
  long lVar6;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (lVar1 * 0x10 != 0) {
    uVar5 = lVar1 * 0x10 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar3 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar3 = 1;
    puVar3[1] = lVar1;
    this_00 = (Ref<Resource> *)(puVar3 + 2);
    if (lVar1 != 0) {
      do {
        puVar4 = (undefined8 *)(lVar6 * 0x10 + *(long *)this);
        *(undefined8 *)this_00 = 0;
        Ref<Resource>::operator=(this_00,(Ref *)*puVar4);
        *(undefined8 *)(this_00 + 8) = 0;
        if (puVar4[1] != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(this_00 + 8),(CowData *)(puVar4 + 1));
        }
        lVar6 = lVar6 + 1;
        this_00 = this_00 + 0x10;
      } while (lVar1 != lVar6);
    }
    _unref(this);
    *(Ref<Resource> **)this = (Ref<Resource> *)(puVar3 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* ResourceFormatSaverTextInstance::_find_resources(Variant const&, bool) */

void __thiscall
ResourceFormatSaverTextInstance::_find_resources
          (ResourceFormatSaverTextInstance *this,Variant *param_1,bool param_2)

{
  long *plVar1;
  _Data *this_00;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  List *pLVar5;
  undefined8 uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  List *pLVar11;
  Variant *pVVar12;
  CowData<char32_t> *this_01;
  undefined4 *puVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  List *local_e0;
  undefined8 *local_d8;
  long local_d0;
  undefined1 local_c8 [16];
  Variant *local_b8;
  Variant *local_b0;
  Variant *local_a8;
  long local_a0;
  StringName local_98 [8];
  undefined4 local_90;
  undefined8 local_88;
  uint local_80;
  int local_78 [8];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  switch(*(undefined4 *)param_1) {
  case 0x18:
    local_e0 = (List *)0x0;
    lVar10 = Variant::get_validated_object();
    if ((lVar10 != 0) &&
       (pLVar11 = (List *)__dynamic_cast(lVar10,&Object::typeinfo,&Resource::typeinfo,0),
       pLVar11 != (List *)0x0)) {
      local_e0 = pLVar11;
      cVar7 = RefCounted::reference();
      if (cVar7 == '\0') {
        local_e0 = (List *)0x0;
      }
      else {
        cVar7 = HashMap<Ref<Resource>,String,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,String>>>
                ::_lookup_pos((HashMap<Ref<Resource>,String,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,String>>>
                               *)(this + 0x60),(Ref *)pLVar11,(uint *)&local_a8);
        if (cVar7 == '\0') {
          pcVar3 = *(code **)(*(long *)pLVar11 + 0xb8);
          Variant::Variant((Variant *)local_78,false);
          if ((_find_resources(Variant_const&,bool)::{lambda()#1}::operator()()::sname == '\0') &&
             (iVar9 = __cxa_guard_acquire(&_find_resources(Variant_const&,bool)::{lambda()#1}::
                                           operator()()::sname), iVar9 != 0)) {
            _scs_create((char *)&_find_resources(Variant_const&,bool)::{lambda()#1}::operator()()::
                                 sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_find_resources(Variant_const&,bool)::{lambda()#1}::operator()()::sname,
                         &__dso_handle);
            __cxa_guard_release(&_find_resources(Variant_const&,bool)::{lambda()#1}::operator()()::
                                 sname);
          }
          (*pcVar3)((Variant *)&local_58,pLVar11,
                    &_find_resources(Variant_const&,bool)::{lambda()#1}::operator()()::sname,
                    (Variant *)local_78);
          bVar8 = Variant::operator_cast_to_bool((Variant *)&local_58);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (!bVar8) {
            if ((((!param_2) && (this[0x12] == (ResourceFormatSaverTextInstance)0x0)) &&
                (*(long *)(pLVar11 + 0x188) != 0)) &&
               (1 < *(uint *)(*(long *)(pLVar11 + 0x188) + -8))) {
              iVar9 = String::find((char *)(pLVar11 + 0x188),0x117600);
              if ((iVar9 == -1) &&
                 (cVar7 = String::begins_with((char *)(pLVar11 + 0x188)), cVar7 == '\0')) {
                Resource::get_path();
                cVar7 = String::operator==((String *)&local_a8,(String *)this);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                if (cVar7 == '\0') {
                  Resource::generate_scene_unique_id();
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = local_c8._8_8_;
                  local_c8 = auVar4 << 0x40;
                  String::parse_latin1((String *)local_c8,"_");
                  itos((long)&local_d0);
                  String::operator+((String *)&local_b8,(String *)&local_d0);
                  String::operator+((String *)&local_d8,(String *)&local_b8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                  this_01 = (CowData<char32_t> *)
                            HashMap<Ref<Resource>,String,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,String>>>
                            ::operator[]((HashMap<Ref<Resource>,String,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,String>>>
                                          *)(this + 0x60),(Ref *)&local_e0);
                  if (*(undefined8 **)this_01 != local_d8) {
                    CowData<char32_t>::_ref(this_01,(CowData *)&local_d8);
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                }
                else {
                  local_b8 = (Variant *)0x0;
                  String::parse_latin1
                            ((String *)&local_b8,"\' will be null next time it\'s loaded.");
                  operator+((char *)local_c8,
                            (String *)"Circular reference to resource being saved found: \'");
                  String::operator+((String *)&local_a8,(String *)local_c8);
                  _err_print_error("_find_resources","scene/resources/resource_format_text.cpp",
                                   0x64b,(Ref *)&local_a8,0,0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                }
                goto LAB_0010e788;
              }
            }
            pLVar5 = local_e0;
            cVar7 = HashSet<Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>>
                    ::_lookup_pos((HashSet<Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>>
                                   *)(this + 0x30),(Ref *)local_e0,(uint *)&local_a8);
            if (cVar7 == '\0') {
              HashSet<Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>>::
              insert((Ref *)&local_a8);
              local_d8 = (undefined8 *)0x0;
              Object::get_property_list
                        (pLVar11,SUB81((List<PropertyInfo,DefaultAllocator> *)&local_d8,0));
              List<PropertyInfo,DefaultAllocator>::sort_custom<Comparator<PropertyInfo>>
                        ((List<PropertyInfo,DefaultAllocator> *)&local_d8);
              if ((local_d8 != (undefined8 *)0x0) &&
                 (puVar13 = (undefined4 *)*local_d8, puVar13 != (undefined4 *)0x0)) {
                do {
                  local_a0 = 0;
                  local_a8 = (Variant *)CONCAT44(local_a8._4_4_,*puVar13);
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)(puVar13 + 2));
                  StringName::StringName(local_98,(StringName *)(puVar13 + 4));
                  local_90 = puVar13[6];
                  local_88 = 0;
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)(puVar13 + 8));
                  local_80 = puVar13[10];
                  if ((local_80 & 2) != 0) {
                    StringName::StringName((StringName *)&local_b8,(String *)(puVar13 + 2),false);
                    Object::get((StringName *)local_78,(bool *)pLVar11);
                    if ((StringName::configured != '\0') && (local_b8 != (Variant *)0x0)) {
                      StringName::unref();
                    }
                    if ((local_80 & 0x800000) == 0) {
                      _find_resources(this,(Variant *)local_78,false);
                    }
                    else {
                      local_c8 = (undefined1  [16])0x0;
                      Ref<Resource>::operator=((Ref<Resource> *)local_c8,(Ref *)pLVar5);
                      StringName::StringName((StringName *)&local_b8,(String *)&local_a0,false);
                      if ((Variant *)local_c8._8_8_ == local_b8) {
                        if ((StringName::configured != '\0') && (local_b8 != (Variant *)0x0)) {
                          StringName::unref();
                        }
                      }
                      else {
                        StringName::unref();
                        local_c8._8_8_ = local_b8;
                      }
                      lVar10 = *(long *)(this + 0x18);
                      this_00 = (_Data *)(this + 0x18);
                      if (lVar10 == 0) {
                        RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
                        ::_Data::_create_root(this_00);
                        lVar10 = *(long *)(this + 0x18);
                        if (lVar10 != 0) goto LAB_0010edde;
                        local_58 = 0;
                        local_50 = (undefined1  [16])0x0;
                        RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
                        ::_Data::_create_root(this_00);
                      }
                      else {
LAB_0010edde:
                        lVar10 = *(long *)(lVar10 + 0x10);
                        if (*(long *)(this + 0x20) != lVar10) {
                          do {
                            if (local_c8._0_8_ == *(ulong *)(lVar10 + 0x30)) {
                              if (*(ulong *)(lVar10 + 0x38) <= (ulong)local_c8._8_8_) {
                                if (*(ulong *)(lVar10 + 0x38) < (ulong)local_c8._8_8_)
                                goto LAB_0010ee1d;
                                goto LAB_0010ee36;
                              }
LAB_0010ee08:
                              lVar10 = *(long *)(lVar10 + 0x10);
                            }
                            else {
                              if ((ulong)local_c8._0_8_ < *(ulong *)(lVar10 + 0x30))
                              goto LAB_0010ee08;
LAB_0010ee1d:
                              lVar10 = *(long *)(lVar10 + 8);
                            }
                          } while (*(long *)(this + 0x20) != lVar10);
                        }
                        local_58 = 0;
                        local_50 = (undefined1  [16])0x0;
                      }
                      lVar10 = RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
                               ::_insert((RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
                                          *)this_00,(NonPersistentKey *)local_c8,
                                         (Variant *)&local_58);
                      if (Variant::needs_deinit[(int)local_58] != '\0') {
                        Variant::_clear_internal();
                      }
LAB_0010ee36:
                      Variant::operator=((Variant *)(lVar10 + 0x40),(Variant *)local_78);
                      local_d0 = 0;
                      Ref<Resource>::operator=((Ref<Resource> *)&local_d0,(Variant *)local_78);
                      if (local_d0 == 0) {
                        _find_resources(this,(Variant *)local_78,false);
                      }
                      else {
                        HashSet<Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>>
                        ::insert((Ref *)&local_b8);
                        List<Ref<Resource>,DefaultAllocator>::push_back
                                  ((List<Ref<Resource>,DefaultAllocator> *)(this + 0x58),
                                   (Ref *)&local_d0);
                      }
                      Ref<Resource>::unref((Ref<Resource> *)&local_d0);
                      if ((StringName::configured != '\0') && (local_c8._8_8_ != 0)) {
                        StringName::unref();
                      }
                      if ((local_c8._0_8_ != 0) &&
                         (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
                        uVar6 = local_c8._0_8_;
                        cVar7 = predelete_handler((Object *)local_c8._0_8_);
                        if (cVar7 != '\0') {
                          (**(code **)(*(long *)uVar6 + 0x140))(uVar6);
                          Memory::free_static((void *)uVar6,false);
                        }
                      }
                    }
                    if (Variant::needs_deinit[local_78[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                  }
                  puVar13 = *(undefined4 **)(puVar13 + 0xc);
                  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
                } while (puVar13 != (undefined4 *)0x0);
              }
              List<Ref<Resource>,DefaultAllocator>::push_back
                        ((List<Ref<Resource>,DefaultAllocator> *)(this + 0x58),(Ref *)&local_e0);
              List<PropertyInfo,DefaultAllocator>::~List
                        ((List<PropertyInfo,DefaultAllocator> *)&local_d8);
              Ref<Resource>::unref((Ref<Resource> *)&local_e0);
              break;
            }
          }
        }
      }
    }
LAB_0010e788:
    Ref<Resource>::unref((Ref<Resource> *)&local_e0);
    break;
  case 0x1b:
    Variant::operator_cast_to_Dictionary((Variant *)&local_b8);
    Dictionary::get_typed_key_script();
    _find_resources(this,(Variant *)&local_58,false);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::get_typed_value_script();
    _find_resources(this,(Variant *)&local_58,false);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    local_a8 = (Variant *)0x0;
    Dictionary::get_key_list((List *)&local_b8);
    if (local_a8 != (Variant *)0x0) {
      for (pVVar14 = *(Variant **)local_a8; pVVar14 != (Variant *)0x0;
          pVVar14 = *(Variant **)(pVVar14 + 0x18)) {
        _find_resources(this,pVVar14,false);
        pVVar12 = (Variant *)Dictionary::operator[]((Variant *)&local_b8);
        Variant::Variant((Variant *)&local_58,pVVar12);
        _find_resources(this,(Variant *)&local_58,false);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
      }
    }
    List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator> *)&local_a8);
    Dictionary::~Dictionary((Dictionary *)&local_b8);
    break;
  case 0x1c:
    Variant::operator_cast_to_Array((Variant *)local_c8);
    Array::get_typed_script();
    _find_resources(this,(Variant *)&local_58,false);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    Array::begin();
    Array::end();
    if (local_b8 != local_a8) {
      do {
        pVVar14 = local_b8;
        if (local_b0 != (Variant *)0x0) {
          Variant::operator=(local_b0,local_b8);
          pVVar14 = local_b0;
        }
        _find_resources(this,pVVar14,false);
        local_b8 = local_b8 + 0x18;
      } while (local_b8 != local_a8);
    }
    Array::~Array((Array *)local_c8);
    break;
  case 0x1d:
    if ((this[0xc0] == (ResourceFormatSaverTextInstance)0x0) ||
       (Variant::operator_cast_to_Vector((Variant *)&local_a8), lVar10 = local_a0, local_a0 == 0))
    break;
    lVar2 = *(long *)(local_a0 + -8);
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
    if (lVar2 < 0x41) break;
  case 0x26:
    this[0xc0] = (ResourceFormatSaverTextInstance)0x0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ResourceFormatSaverTextInstance::save(String const&, Ref<Resource> const&, unsigned int) */

int __thiscall
ResourceFormatSaverTextInstance::save
          (ResourceFormatSaverTextInstance *this,String *param_1,Ref *param_2,uint param_3)

{
  String *pSVar1;
  String *pSVar2;
  ResourceFormatSaverTextInstance RVar3;
  code *pcVar4;
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
  ulong uVar24;
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
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  Ref *pRVar49;
  NodePath *pNVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  char cVar53;
  bool bVar54;
  uint uVar55;
  int iVar56;
  uint uVar57;
  int iVar58;
  Ref *pRVar59;
  long lVar60;
  CowData<char32_t> *pCVar61;
  Object *pOVar62;
  Object *pOVar63;
  long lVar64;
  Variant *pVVar65;
  uint uVar66;
  long lVar67;
  int iVar68;
  long *plVar69;
  Ref<Resource> *this_00;
  long *plVar70;
  int *piVar71;
  undefined1 auVar72 [8];
  void *pvVar73;
  char *pcVar74;
  uint uVar75;
  NodePath *this_01;
  undefined8 *puVar76;
  long in_FS_OFFSET;
  CowData<char32_t> *local_280;
  CowData<char32_t> *local_270;
  Variant *local_268;
  undefined8 *local_260;
  CowData<char32_t> *local_248;
  String *local_228;
  int local_1f4;
  int local_1cc;
  Ref *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  long local_1b0;
  long local_1a8;
  NodePath local_1a0 [8];
  NodePath local_198 [8];
  Object *local_190;
  long local_188;
  undefined8 local_180;
  Ref *local_178;
  long local_170;
  undefined8 *local_168;
  undefined8 local_160;
  long local_158;
  long local_150;
  undefined8 local_148;
  Object *local_140;
  long local_138;
  long *local_130;
  String *local_128;
  long local_120;
  ulong local_118;
  long local_110;
  undefined1 local_108 [8];
  NodePath *pNStack_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined1 local_c8 [8];
  void *pvStack_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_98;
  undefined1 local_90 [16];
  int local_78 [8];
  ulong local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = String::hash();
  Resource::seed_scene_unique_id(uVar55);
  cVar53 = String::ends_with((char *)param_1);
  if (cVar53 != '\0') {
    pOVar63 = *(Object **)(this + 8);
    if (*(long *)param_2 == 0) {
      if (pOVar63 != (Object *)0x0) {
        *(undefined8 *)(this + 8) = 0;
LAB_001102d6:
        cVar53 = RefCounted::unreference();
        if ((cVar53 != '\0') && (cVar53 = predelete_handler(pOVar63), cVar53 != '\0')) {
          (**(code **)(*(long *)pOVar63 + 0x140))(pOVar63);
          Memory::free_static(pOVar63,false);
        }
      }
    }
    else {
      pOVar62 = (Object *)
                __dynamic_cast(*(long *)param_2,&Object::typeinfo,&PackedScene::typeinfo,0);
      if (pOVar63 != pOVar62) {
        *(Object **)(this + 8) = pOVar62;
        if ((pOVar62 != (Object *)0x0) && (cVar53 = RefCounted::reference(), cVar53 == '\0')) {
          *(undefined8 *)(this + 8) = 0;
        }
        if (pOVar63 != (Object *)0x0) goto LAB_001102d6;
      }
    }
  }
  FileAccess::open((String *)&local_1c8,(int)param_1,(Error *)0x2);
  local_1f4 = local_1cc;
  if (local_1cc != 0) {
    auVar39._8_8_ = 0;
    auVar39._0_8_ = local_f8._8_8_;
    local_f8 = auVar39 << 0x40;
    String::parse_latin1((String *)local_f8,"\'.");
    operator+((char *)local_108,(String *)"Cannot save file \'");
    String::operator+((String *)local_c8,(String *)local_108);
    _err_print_error(&_LC194,"scene/resources/resource_format_text.cpp",0x6b7,
                     "Condition \"err\" is true. Returning: ERR_CANT_OPEN",(String *)local_c8,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
    local_1f4 = 0x13;
    goto LAB_0011224e;
  }
  local_1c0 = 0;
  Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_1c0,local_1c8);
  ProjectSettings::get_singleton();
  ProjectSettings::localize_path((String *)local_c8);
  if ((undefined1  [8])*(long *)this != local_c8) {
    CowData<char32_t>::_unref((CowData<char32_t> *)this);
    auVar72 = local_c8;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = pvStack_c0;
    _local_c8 = auVar13 << 0x40;
    *(undefined1 (*) [8])this = auVar72;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  this[0x11] = SUB41(param_3,0);
  this[0x13] = (ResourceFormatSaverTextInstance)((byte)(param_3 >> 3) & 1);
  this[0x11] = (ResourceFormatSaverTextInstance)((byte)this[0x11] & 1);
  this[0x10] = (ResourceFormatSaverTextInstance)((byte)(param_3 >> 6) & 1);
  this[0x12] = (ResourceFormatSaverTextInstance)((byte)(param_3 >> 1) & 1);
  cVar53 = String::begins_with((char *)param_1);
  if (cVar53 == '\0') {
    this[0x10] = (ResourceFormatSaverTextInstance)0x0;
  }
  pOVar63 = *(Object **)param_2;
  this[0xc0] = (ResourceFormatSaverTextInstance)0x1;
  Variant::Variant((Variant *)&local_58,pOVar63);
  _find_resources(this,(Variant *)&local_58,true);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if (*(long *)(this + 8) == 0) {
LAB_0011033c:
    pcVar74 = "[gd_resource ";
  }
  else {
    iVar68 = 0;
    while( true ) {
      PackedScene::get_state();
      iVar56 = SceneState::get_node_count();
      Ref<SceneState>::unref((Ref<SceneState> *)local_c8);
      if (iVar56 <= iVar68) break;
      PackedScene::get_state();
      cVar53 = SceneState::is_node_instance_placeholder(SUB164(_local_c8,0));
      Ref<SceneState>::unref((Ref<SceneState> *)local_c8);
      if (cVar53 == '\0') {
        PackedScene::get_state();
        SceneState::get_node_instance((int)&local_140);
        Ref<SceneState>::unref((Ref<SceneState> *)local_c8);
        if (local_140 != (Object *)0x0) {
          auVar14._8_8_ = 0;
          auVar14._0_8_ = local_f8._8_8_;
          local_f8 = auVar14 << 0x40;
          pRVar59 = (Ref *)__dynamic_cast(local_140,&Object::typeinfo,&Resource::typeinfo,0);
          if (pRVar59 != (Ref *)0x0) {
            local_f8._0_8_ = pRVar59;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = pvStack_c0;
            _local_c8 = auVar15 << 0x40;
            cVar53 = RefCounted::reference();
            if (cVar53 == '\0') {
              auVar16._8_8_ = 0;
              auVar16._0_8_ = local_f8._8_8_;
              local_f8 = auVar16 << 0x40;
              pRVar59 = (Ref *)0x0;
            }
            Ref<Resource>::unref((Ref<Resource> *)local_c8);
          }
          cVar53 = HashMap<Ref<Resource>,String,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,String>>>
                   ::_lookup_pos((HashMap<Ref<Resource>,String,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,String>>>
                                  *)(this + 0x60),pRVar59,(uint *)local_c8);
          if (cVar53 == '\0') {
            Ref<Resource>::unref((Ref<Resource> *)local_f8);
            Resource::generate_scene_unique_id();
            local_118 = 0;
            String::parse_latin1((String *)&local_118,"_");
            itos((long)&local_128);
            String::operator+((String *)local_108,(String *)&local_128);
            String::operator+((String *)local_c8,(String *)local_108);
            local_138 = 0;
            if (((local_140 != (Object *)0x0) &&
                (lVar60 = __dynamic_cast(local_140,&Object::typeinfo,&Resource::typeinfo,0),
                lVar60 != 0)) &&
               (local_138 = lVar60, cVar53 = RefCounted::reference(), cVar53 == '\0')) {
              local_138 = 0;
            }
            pCVar61 = (CowData<char32_t> *)
                      HashMap<Ref<Resource>,String,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,String>>>
                      ::operator[]((HashMap<Ref<Resource>,String,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,String>>>
                                    *)(this + 0x60),(Ref *)&local_138);
            if ((undefined1  [8])*(long *)pCVar61 != local_c8) {
              CowData<char32_t>::_unref(pCVar61);
              *(undefined1 (*) [8])pCVar61 = local_c8;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = pvStack_c0;
              _local_c8 = auVar17 << 0x40;
            }
            Ref<Resource>::unref((Ref<Resource> *)&local_138);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
          }
          else {
            Ref<Resource>::unref((Ref<Resource> *)local_f8);
          }
          if (((local_140 != (Object *)0x0) &&
              (cVar53 = RefCounted::unreference(), pOVar63 = local_140, cVar53 != '\0')) &&
             (cVar53 = predelete_handler(local_140), cVar53 != '\0')) {
            (**(code **)(*(long *)pOVar63 + 0x140))(pOVar63);
            Memory::free_static(pOVar63,false);
          }
        }
      }
      iVar68 = iVar68 + 1;
    }
    if (*(long *)(this + 8) == 0) goto LAB_0011033c;
    pcVar74 = "[gd_scene ";
  }
  local_228 = (String *)&local_138;
  local_248 = (CowData<char32_t> *)&local_118;
  local_138 = 0;
  String::parse_latin1(local_228,pcVar74);
  if (*(long *)(this + 8) == 0) {
    auVar27._8_8_ = 0;
    auVar27._0_8_ = local_f8._8_8_;
    local_f8 = auVar27 << 0x40;
    String::parse_latin1((String *)local_f8,"\" ");
    local_128 = (String *)0x0;
    Ref<Resource>::operator=((Ref<Resource> *)&local_128,*(Ref **)param_2);
    _resource_get_class(local_248,(Ref<Resource> *)&local_128);
    operator+((char *)local_108,(String *)"type=\"");
    String::operator+((String *)local_c8,(String *)local_108);
    String::operator+=(local_228,(String *)local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
    CowData<char32_t>::_unref(local_248);
    Ref<Resource>::unref((Ref<Resource> *)&local_128);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
    (**(code **)(**(long **)param_2 + 0x98))((Variant *)&local_58);
    lVar60 = Variant::get_validated_object();
    if (lVar60 == 0) {
LAB_001124f2:
      cVar53 = Variant::needs_deinit[(int)local_58];
    }
    else {
      pOVar63 = (Object *)__dynamic_cast(lVar60,&Object::typeinfo,&Script::typeinfo,0);
      if (pOVar63 != (Object *)0x0) {
        cVar53 = RefCounted::reference();
        if (cVar53 != '\0') {
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          (**(code **)(*(long *)pOVar63 + 0x1e0))((String *)local_c8);
          if (local_c8 != (undefined1  [8])0x0) {
            if ((*(long *)((long)local_c8 + 8) == 0) &&
               ((*(long *)((long)local_c8 + 0x10) == 0 ||
                (*(uint *)(*(long *)((long)local_c8 + 0x10) + -8) < 2)))) {
              if (StringName::configured != '\0') {
                StringName::unref();
              }
            }
            else {
              if (StringName::configured != '\0') {
                StringName::unref();
              }
              auVar44._8_8_ = 0;
              auVar44._0_8_ = local_f8._8_8_;
              local_f8 = auVar44 << 0x40;
              String::parse_latin1((String *)local_f8,"\" ");
              (**(code **)(*(long *)pOVar63 + 0x1e0))((Ref<Resource> *)&local_128,pOVar63);
              if (local_128 == (String *)0x0) {
                local_118 = 0;
              }
              else {
                local_118 = 0;
                if (*(char **)(local_128 + 8) == (char *)0x0) {
                  if (*(long *)(local_128 + 0x10) != 0) {
                    CowData<char32_t>::_ref(local_248,(CowData *)(local_128 + 0x10));
                  }
                }
                else {
                  String::parse_latin1((String *)local_248,*(char **)(local_128 + 8));
                }
              }
              operator+((char *)local_108,(String *)"script_class=\"");
              String::operator+((String *)local_c8,(String *)local_108);
              String::operator+=(local_228,(String *)local_c8);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
              CowData<char32_t>::_unref(local_248);
              if ((StringName::configured != '\0') && (local_128 != (String *)0x0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
            }
          }
          cVar53 = RefCounted::unreference();
          if (cVar53 != '\0') {
            cVar53 = predelete_handler(pOVar63);
            if (cVar53 != '\0') {
              (**(code **)(*(long *)pOVar63 + 0x140))(pOVar63);
              Memory::free_static(pOVar63,false);
            }
          }
          goto LAB_0010f6b4;
        }
        goto LAB_001124f2;
      }
      cVar53 = Variant::needs_deinit[(int)local_58];
    }
    if (cVar53 != '\0') {
      Variant::_clear_internal();
    }
  }
LAB_0010f6b4:
  iVar68 = 0;
  if (*(long *)(this + 0x58) != 0) {
    iVar68 = *(int *)(*(long *)(this + 0x58) + 0x10);
  }
  if (1 < iVar68 + *(int *)(this + 0x8c)) {
    auVar18._8_8_ = 0;
    auVar18._0_8_ = local_f8._8_8_;
    local_f8 = auVar18 << 0x40;
    String::parse_latin1((String *)local_f8," ");
    itos((long)local_248);
    operator+((char *)local_108,(String *)"load_steps=");
    String::operator+((String *)local_c8,(String *)local_108);
    String::operator+=(local_228,(String *)local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
    CowData<char32_t>::_unref(local_248);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  }
  local_f8._0_8_ = 0;
  String::parse_latin1((String *)local_f8,"");
  itos((long)local_248);
  operator+((char *)local_108,(String *)"format=");
  String::operator+((String *)local_c8,(String *)local_108);
  String::operator+=(local_228,(String *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
  CowData<char32_t>::_unref(local_248);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  lVar60 = ResourceSaver::get_resource_id_for_path((String *)this,true);
  if (lVar60 != -1) {
    local_f8._0_8_ = 0;
    String::parse_latin1((String *)local_f8,"\"");
    ResourceUID::id_to_text((long)local_248);
    operator+((char *)local_108,(String *)" uid=\"");
    String::operator+((String *)local_c8,(String *)local_108);
    String::operator+=(local_228,(String *)local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
    CowData<char32_t>::_unref(local_248);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  }
  (**(code **)(*(long *)local_1c8 + 0x2a8))(local_1c8,local_228);
  pRVar59 = local_1c8;
  pcVar4 = *(code **)(*(long *)local_1c8 + 0x2b0);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = pvStack_c0;
  _local_c8 = auVar19 << 0x40;
  String::parse_latin1((String *)local_c8,"]\n");
  (*pcVar4)(pRVar59,(String *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_228);
  local_f8 = (undefined1  [16])0x0;
  local_d8 = _LC8;
  local_e8 = (undefined1  [16])0x0;
  plVar69 = *(long **)(this + 0x78);
  if (plVar69 == (long *)0x0) {
LAB_00112196:
    local_130 = (long *)0x0;
  }
  else {
    do {
      Resource::get_id_for_path((String *)local_108);
      if ((local_108 == (undefined1  [8])0x0) || (*(uint *)((long)local_108 + -8) < 2)) {
LAB_0010f925:
        pCVar61 = (CowData<char32_t> *)(plVar69 + 3);
        iVar68 = String::find_char((wchar32)pCVar61,0x5f);
        if (iVar68 == -1) {
          String::parse_latin1((String *)pCVar61,"");
        }
        else {
          String::substr((int)(String *)local_c8,(wchar32)pCVar61);
          if ((undefined1  [8])plVar69[3] != local_c8) {
            CowData<char32_t>::_unref(pCVar61);
            plVar69[3] = (long)local_c8;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = pvStack_c0;
            _local_c8 = auVar20 << 0x40;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
        }
      }
      else {
        auVar21._12_4_ = 0;
        auVar21._0_12_ = stack0xffffffffffffff3c;
        _local_c8 = auVar21 << 0x20;
        cVar53 = HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::_lookup_pos
                           ((HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>> *
                            )local_f8,(String *)local_108,(uint *)local_c8);
        if (cVar53 != '\0') goto LAB_0010f925;
        if ((undefined1  [8])plVar69[3] != local_108) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(plVar69 + 3),(CowData *)local_108);
        }
        HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                  ((String *)local_c8);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
      plVar69 = (long *)*plVar69;
    } while (plVar69 != (long *)0x0);
    plVar69 = *(long **)(this + 0x78);
    if (plVar69 == (long *)0x0) goto LAB_00112196;
    do {
      while( true ) {
        pSVar1 = (String *)(plVar69 + 3);
        auVar22._12_4_ = 0;
        auVar22._0_12_ = stack0xffffffffffffff3c;
        _local_c8 = auVar22 << 0x20;
        cVar53 = HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::_lookup_pos
                           ((HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>> *
                            )local_f8,pSVar1,(uint *)local_c8);
        if (cVar53 != '\0') break;
        uVar51 = local_f8._0_8_;
        local_118 = 0;
LAB_0010fa15:
        Resource::generate_scene_unique_id();
        String::operator+((String *)local_c8,pSVar1);
        if ((undefined1  [8])local_118 != local_c8) {
          CowData<char32_t>::_unref(local_248);
          local_118 = (ulong)local_c8;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = pvStack_c0;
          _local_c8 = auVar23 << 0x40;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
        if ((uVar51 != 0) && (local_d8._4_4_ != 0)) {
          uVar55 = *(uint *)(hash_table_size_primes + (local_d8 & 0xffffffff) * 4);
          lVar60 = *(long *)(hash_table_size_primes_inv + (local_d8 & 0xffffffff) * 8);
          uVar57 = String::hash();
          uVar24 = CONCAT44(0,uVar55);
          uVar52 = local_e8._8_8_;
          uVar66 = 1;
          if (uVar57 != 0) {
            uVar66 = uVar57;
          }
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)uVar66 * lVar60;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar24;
          lVar67 = SUB168(auVar5 * auVar9,8);
          uVar57 = *(uint *)(local_e8._8_8_ + lVar67 * 4);
          if (uVar57 != 0) {
            uVar75 = 0;
            iVar68 = SUB164(auVar5 * auVar9,8);
            do {
              if (uVar57 == uVar66) {
                cVar53 = String::operator==((String *)
                                            (uVar51 + (ulong)*(uint *)(local_f8._8_8_ + lVar67 * 4)
                                                      * 8),(String *)local_248);
                if (cVar53 != '\0') goto LAB_0010fa15;
              }
              uVar75 = uVar75 + 1;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = (ulong)(iVar68 + 1) * lVar60;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = uVar24;
              lVar67 = SUB168(auVar6 * auVar10,8);
              uVar57 = *(uint *)(uVar52 + lVar67 * 4);
              iVar68 = SUB164(auVar6 * auVar10,8);
              if ((uVar57 == 0) ||
                 (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar57 * lVar60, auVar11._8_8_ = 0,
                 auVar11._0_8_ = uVar24, auVar8._8_8_ = 0,
                 auVar8._0_8_ = (ulong)((uVar55 + iVar68) - SUB164(auVar7 * auVar11,8)) * lVar60,
                 auVar12._8_8_ = 0, auVar12._0_8_ = uVar24, SUB164(auVar8 * auVar12,8) < uVar75))
              break;
            } while( true );
          }
        }
        HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                  ((String *)local_c8);
        if (plVar69[3] != local_118) {
          CowData<char32_t>::_ref((CowData<char32_t> *)pSVar1,(CowData *)local_248);
        }
        auVar41._8_8_ = 0;
        auVar41._0_8_ = pvStack_c0;
        _local_c8 = auVar41 << 0x40;
        Ref<Resource>::operator=((Ref<Resource> *)local_c8,(Ref *)plVar69[2]);
        Resource::set_id_for_path((String *)local_c8,(String *)this);
        Ref<Resource>::unref((Ref<Resource> *)local_c8);
        CowData<char32_t>::_unref(local_248);
        plVar69 = (long *)*plVar69;
        if (plVar69 == (long *)0x0) goto LAB_0010fc21;
      }
      plVar69 = (long *)*plVar69;
    } while (plVar69 != (long *)0x0);
LAB_0010fc21:
    local_130 = (long *)0x0;
    puVar76 = *(undefined8 **)(this + 0x78);
    if (puVar76 != (undefined8 *)0x0) {
      do {
        _local_108 = (undefined1  [16])0x0;
        Ref<Resource>::operator=((Ref<Resource> *)local_108,(Ref *)puVar76[2]);
        if (pNStack_100 != (NodePath *)puVar76[3]) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&pNStack_100,(CowData *)(puVar76 + 3));
        }
        auVar42._8_8_ = 0;
        auVar42._0_8_ = pvStack_c0;
        _local_c8 = auVar42 << 0x40;
        Ref<Resource>::operator=((Ref<Resource> *)local_c8,(Ref *)local_108);
        pvStack_c0 = (void *)0x0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&pvStack_c0,(CowData *)&pNStack_100);
        if (plVar69 == (long *)0x0) {
          lVar60 = 1;
        }
        else {
          lVar60 = plVar69[-1] + 1;
        }
        iVar68 = CowData<ResourceFormatSaverTextInstance::ResourceSort>::resize<false>
                           ((CowData<ResourceFormatSaverTextInstance::ResourceSort> *)&local_130,
                            lVar60);
        if (iVar68 == 0) {
          if (local_130 == (long *)0x0) {
            lVar67 = -1;
            lVar60 = 0;
          }
          else {
            lVar60 = local_130[-1];
            lVar67 = lVar60 + -1;
            if (-1 < lVar67) {
              CowData<ResourceFormatSaverTextInstance::ResourceSort>::_copy_on_write
                        ((CowData<ResourceFormatSaverTextInstance::ResourceSort> *)&local_130);
              this_00 = (Ref<Resource> *)(local_130 + lVar67 * 2);
              Ref<Resource>::operator=(this_00,(Ref *)local_c8);
              CowData<char32_t>::_ref((CowData<char32_t> *)(this_00 + 8),(CowData *)&pvStack_c0);
              goto LAB_0010fd73;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar67,lVar60,"p_index","size()","",
                     false,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
        }
LAB_0010fd73:
        CowData<char32_t>::_unref((CowData<char32_t> *)&pvStack_c0);
        auVar72 = local_c8;
        if (((local_c8 != (undefined1  [8])0x0) &&
            (cVar53 = RefCounted::unreference(), cVar53 != '\0')) &&
           (cVar53 = predelete_handler((Object *)auVar72), cVar53 != '\0')) {
          (**(code **)(*(long *)auVar72 + 0x140))(auVar72);
          Memory::free_static((void *)auVar72,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&pNStack_100);
        auVar72 = local_108;
        if (((local_108 == (undefined1  [8])0x0) ||
            (cVar53 = RefCounted::unreference(), cVar53 == '\0')) ||
           (cVar53 = predelete_handler((Object *)auVar72), cVar53 == '\0')) {
          puVar76 = (undefined8 *)*puVar76;
          plVar69 = local_130;
        }
        else {
          (**(code **)(*(long *)auVar72 + 0x140))(auVar72);
          Memory::free_static((void *)auVar72,false);
          puVar76 = (undefined8 *)*puVar76;
          plVar69 = local_130;
        }
        local_130 = plVar69;
      } while (puVar76 != (undefined8 *)0x0);
    }
  }
  Vector<ResourceFormatSaverTextInstance::ResourceSort>::
  sort_custom<_DefaultComparator<ResourceFormatSaverTextInstance::ResourceSort>,true>
            ((Vector<ResourceFormatSaverTextInstance::ResourceSort> *)local_228);
  plVar69 = local_130;
  if (local_130 != (long *)0x0) {
    plVar70 = local_130 + 1;
    for (lVar60 = 0; lVar60 < plVar69[-1]; lVar60 = lVar60 + 1) {
      Resource::get_path();
      auVar26._8_8_ = 0;
      auVar26._0_8_ = pNStack_100;
      _local_108 = auVar26 << 0x40;
      pvStack_c0 = (void *)0x1;
      local_c8 = (undefined1  [8])&_LC114;
      String::parse_latin1((StrRange *)local_108);
      lVar67 = plVar69[-1];
      if (lVar67 <= lVar60) goto LAB_0011011b;
      (**(code **)(*(long *)plVar70[-1] + 0x50))(local_248);
      operator+((char *)local_c8,(String *)"[ext_resource type=\"");
      String::operator+((String *)&local_150,(String *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      CowData<char32_t>::_unref(local_248);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
      lVar67 = ResourceSaver::get_resource_id_for_path((String *)&local_158,false);
      if (lVar67 != -1) {
        auVar25._8_8_ = 0;
        auVar25._0_8_ = pNStack_100;
        _local_108 = auVar25 << 0x40;
        String::parse_latin1((String *)local_108,"\"");
        ResourceUID::id_to_text((long)&local_128);
        operator+((char *)local_248,(String *)" uid=\"");
        String::operator+((String *)local_c8,(String *)local_248);
        String::operator+=((String *)&local_150,(String *)local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
        CowData<char32_t>::_unref(local_248);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
      }
      auVar43._8_8_ = 0;
      auVar43._0_8_ = pNStack_100;
      _local_108 = auVar43 << 0x40;
      pvStack_c0 = (void *)0x3;
      local_c8 = (undefined1  [8])&_LC199;
      String::parse_latin1((StrRange *)local_108);
      lVar67 = plVar69[-1];
      if (lVar67 <= lVar60) goto LAB_0011011b;
      local_140 = (Object *)0x0;
      pvStack_c0 = (void *)0x6;
      local_c8 = (undefined1  [8])"\" id=\"";
      String::parse_latin1((StrRange *)&local_140);
      operator+((char *)&local_148,(String *)" path=\"");
      String::operator+((String *)&local_128,(String *)&local_148);
      plVar70 = plVar70 + 2;
      String::operator+((String *)local_248,(String *)&local_128);
      String::operator+((String *)local_c8,(String *)local_248);
      String::operator+=((String *)&local_150,(String *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      CowData<char32_t>::_unref(local_248);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
      (**(code **)(*(long *)local_1c8 + 0x2a8))(local_1c8,(String *)&local_150);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
    }
  }
  if (*(int *)(this + 0x8c) != 0) {
    auVar45._8_8_ = 0;
    auVar45._0_8_ = pvStack_c0;
    _local_c8 = auVar45 << 0x40;
    (**(code **)(*(long *)local_1c8 + 0x2b0))(local_1c8,(String *)local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  }
  _local_c8 = (undefined1  [16])0x0;
  local_a8 = _LC8;
  local_b8 = (undefined1  [16])0x0;
  if ((*(long **)(this + 0x58) != (long *)0x0) &&
     (puVar76 = (undefined8 *)**(long **)(this + 0x58), puVar76 != (undefined8 *)0x0)) {
    do {
      local_128 = (String *)0x0;
      Ref<Resource>::operator=((Ref<Resource> *)&local_128,(Ref *)*puVar76);
      pSVar1 = local_128;
      if (puVar76[1] != 0) {
        if ((*(long *)(local_128 + 0x188) != 0) &&
           (1 < *(uint *)(*(long *)(local_128 + 0x188) + -8))) {
          pSVar2 = local_128 + 0x188;
          iVar68 = String::find((char *)pSVar2,0x117600);
          if ((iVar68 == -1) && (cVar53 = String::begins_with((char *)pSVar2), cVar53 == '\0'))
          goto LAB_00110690;
        }
        Resource::get_scene_unique_id();
        if ((local_108 == (undefined1  [8])0x0) ||
           (iVar68 = (int)*(undefined8 *)((long)local_108 + -8), iVar68 == 0)) {
LAB_00110688:
          CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
        }
        else {
          CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
          if (iVar68 != 1) {
            Resource::get_scene_unique_id();
            local_118 = local_118 & 0xffffffff00000000;
            cVar53 = HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::
                     _lookup_pos((HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>
                                  *)local_c8,(String *)local_108,(uint *)local_248);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
            if (cVar53 != '\0') {
              auVar28._8_8_ = 0;
              auVar28._0_8_ = pNStack_100;
              _local_108 = auVar28 << 0x40;
              String::parse_latin1((String *)local_108,"");
              Resource::set_scene_unique_id(pSVar1);
              goto LAB_00110688;
            }
            Resource::get_scene_unique_id();
            HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                      ((String *)local_108);
            CowData<char32_t>::_unref(local_248);
          }
        }
      }
LAB_00110690:
      Ref<Resource>::unref((Ref<Resource> *)&local_128);
      puVar76 = (undefined8 *)puVar76[1];
    } while (puVar76 != (undefined8 *)0x0);
    if ((*(long **)(this + 0x58) != (long *)0x0) &&
       (local_260 = (undefined8 *)**(long **)(this + 0x58), local_260 != (undefined8 *)0x0)) {
      do {
        local_178 = (Ref *)0x0;
        Ref<Resource>::operator=((Ref<Resource> *)&local_178,(Ref *)*local_260);
        pRVar49 = local_178;
        cVar53 = HashSet<Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>>
                 ::_lookup_pos((HashSet<Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>>
                                *)(this + 0x30),local_178,(uint *)local_108);
        pRVar59 = local_1c8;
        if (cVar53 == '\0') {
          _err_print_error(&_LC194,"scene/resources/resource_format_text.cpp",0x74d,
                           "Condition \"!resource_set.has(res)\" is true. Continuing.",0,0);
          Ref<Resource>::unref((Ref<Resource> *)&local_178);
        }
        else {
          if (local_260[1] == 0) {
            if (*(long *)(this + 8) != 0) {
              Ref<Resource>::unref((Ref<Resource> *)&local_178);
              break;
            }
            pcVar4 = *(code **)(*(long *)local_1c8 + 0x2b0);
            auVar38._8_8_ = 0;
            auVar38._0_8_ = pNStack_100;
            _local_108 = auVar38 << 0x40;
            String::parse_latin1((String *)local_108,"[resource]");
            (*pcVar4)(pRVar59,(CowData<char32_t> *)local_108);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
          }
          else {
            local_160 = 0;
            String::parse_latin1((String *)&local_160,"[sub_resource ");
            Resource::get_scene_unique_id();
            if ((local_108 == (undefined1  [8])0x0) ||
               (iVar68 = (int)*(undefined8 *)((long)local_108 + -8), iVar68 == 0)) {
              CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
LAB_00111e3d:
              local_158 = 0;
              do {
                local_270 = (CowData<char32_t> *)&local_158;
                Resource::generate_scene_unique_id();
                local_140 = (Object *)0x0;
                pNStack_100 = (NodePath *)0x1;
                local_108 = (undefined1  [8])&_LC189;
                String::parse_latin1((StrRange *)&local_140);
                local_150 = 0;
                Ref<Resource>::operator=((Ref<Resource> *)&local_150,pRVar49);
                _resource_get_class((CowData<char32_t> *)&local_148,(Ref<Resource> *)&local_150);
                String::operator+((String *)&local_128,(String *)&local_148);
                String::operator+((String *)local_108,(String *)&local_128);
                if ((undefined1  [8])local_158 != local_108) {
                  CowData<char32_t>::_unref(local_270);
                  local_158 = (long)local_108;
                  auVar36._8_8_ = 0;
                  auVar36._0_8_ = pNStack_100;
                  _local_108 = auVar36 << 0x40;
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
                Ref<Resource>::unref((Ref<Resource> *)&local_150);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
                CowData<char32_t>::_unref(local_248);
                auVar37._12_4_ = 0;
                auVar37._0_12_ = stack0xfffffffffffffefc;
                _local_108 = auVar37 << 0x20;
                cVar53 = HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::
                         _lookup_pos((HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>
                                      *)local_c8,(String *)local_270,(uint *)local_108);
              } while (cVar53 != '\0');
              Resource::set_scene_unique_id((String *)pRVar49);
              HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                        ((String *)local_108);
              CowData<char32_t>::_unref(local_270);
            }
            else {
              CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
              if (iVar68 == 1) goto LAB_00111e3d;
            }
            Resource::get_scene_unique_id();
            local_128 = (String *)0x0;
            String::parse_latin1((String *)&local_128,"\" id=\"");
            local_150 = 0;
            Ref<Resource>::operator=((Ref<Resource> *)&local_150,pRVar49);
            _resource_get_class((CowData<char32_t> *)&local_148,(Ref<Resource> *)&local_150);
            operator+((char *)&local_140,(String *)"type=\"");
            String::operator+((String *)local_248,(String *)&local_140);
            String::operator+((String *)local_108,(String *)local_248);
            String::operator+=((String *)&local_160,(String *)local_108);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
            CowData<char32_t>::_unref(local_248);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
            Ref<Resource>::unref((Ref<Resource> *)&local_150);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
            pRVar59 = local_1c8;
            pcVar4 = *(code **)(*(long *)local_1c8 + 0x2b0);
            local_118 = 0;
            String::parse_latin1((String *)local_248,"\"]");
            String::operator+((String *)local_108,(String *)&local_160);
            (*pcVar4)(pRVar59,(CowData<char32_t> *)local_108);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
            CowData<char32_t>::_unref(local_248);
            if (this[0x10] != (ResourceFormatSaverTextInstance)0x0) {
              pcVar4 = *(code **)(*(long *)pRVar49 + 0x188);
              local_128 = (String *)0x0;
              String::parse_latin1((String *)&local_128,"::");
              String::operator+((String *)local_248,param_1);
              String::operator+((String *)local_108,(String *)local_248);
              (*pcVar4)(pRVar49,(CowData<char32_t> *)local_108,1);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
              CowData<char32_t>::_unref(local_248);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
            }
            pCVar61 = (CowData<char32_t> *)
                      HashMap<Ref<Resource>,String,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,String>>>
                      ::operator[]((HashMap<Ref<Resource>,String,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,String>>>
                                    *)(this + 0x90),(Ref *)&local_178);
            if (*(long *)pCVar61 != local_158) {
              CowData<char32_t>::_ref(pCVar61,(CowData *)&local_158);
            }
            Object::set_edited(SUB81(pRVar49,0));
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
          }
          pcVar4 = *(code **)(*(long *)pRVar49 + 0xb8);
          Dictionary::Dictionary((Dictionary *)local_248);
          Variant::Variant((Variant *)local_78,(Dictionary *)local_248);
          StringName::StringName((StringName *)local_108,"_missing_resources",false);
          (*pcVar4)((Variant *)&local_58,pRVar49,(CowData<char32_t> *)local_108,(Variant *)local_78)
          ;
          Variant::operator_cast_to_Dictionary((Variant *)&local_170);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_108 != (undefined1  [8])0x0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          Dictionary::~Dictionary((Dictionary *)local_248);
          local_168 = (undefined8 *)0x0;
          Object::get_property_list
                    ((List *)pRVar49,SUB81((List<PropertyInfo,DefaultAllocator> *)&local_168,0));
          if ((local_168 != (undefined8 *)0x0) &&
             (piVar71 = (int *)*local_168, piVar71 != (int *)0x0)) {
LAB_001119e0:
            pSVar1 = (String *)(piVar71 + 2);
            if (((this[0x13] == (ResourceFormatSaverTextInstance)0x0) ||
                (cVar53 = String::begins_with((char *)pSVar1), cVar53 == '\0')) &&
               (cVar53 = String::operator==(pSVar1,"metadata/_missing_resources"), cVar53 == '\0'))
            {
              if ((*(byte *)(piVar71 + 10) & 2) == 0) {
                Variant::Variant((Variant *)&local_58,pSVar1);
                cVar53 = Dictionary::has((Variant *)&local_170);
                if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
                }
                if (cVar53 == '\0') goto LAB_001109ee;
              }
              local_160 = 0;
              if (*(long *)(piVar71 + 2) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_160,(CowData *)pSVar1);
              }
              pRVar59 = local_178;
              local_98 = 0;
              local_90 = (undefined1  [16])0x0;
              if ((*(byte *)((long)piVar71 + 0x2a) & 0x80) != 0) {
                _local_108 = (undefined1  [16])0x0;
                Ref<Resource>::operator=((Ref<Resource> *)local_108,local_178);
                StringName::StringName((StringName *)local_248,(String *)&local_160,false);
                if (pNStack_100 == (NodePath *)local_118) {
                  if ((StringName::configured != '\0') && (local_118 != 0)) {
                    StringName::unref();
                  }
                }
                else {
                  StringName::unref();
                  pNStack_100 = (NodePath *)local_118;
                }
                lVar60 = *(long *)(this + 0x20);
                if ((*(long *)(this + 0x18) != 0) &&
                   (lVar67 = *(long *)(*(long *)(this + 0x18) + 0x10), lVar60 != lVar67)) {
                  lVar64 = lVar67;
                  do {
                    while (local_108 == (undefined1  [8])*(ulong *)(lVar64 + 0x30)) {
                      if (*(ulong *)(lVar64 + 0x38) <= pNStack_100) {
                        if (*(ulong *)(lVar64 + 0x38) < pNStack_100) goto LAB_00111b11;
                        goto LAB_00111b49;
                      }
LAB_00111b00:
                      lVar64 = *(long *)(lVar64 + 0x10);
                      if (lVar64 == lVar60) goto LAB_001107af;
                    }
                    if ((ulong)local_108 < *(ulong *)(lVar64 + 0x30)) goto LAB_00111b00;
LAB_00111b11:
                    lVar64 = *(long *)(lVar64 + 8);
                  } while (lVar64 != lVar60);
                }
                goto LAB_001107af;
              }
              StringName::StringName((StringName *)local_108,(String *)&local_160,false);
              Object::get((StringName *)&local_58,(bool *)pRVar59);
              if (Variant::needs_deinit[(int)local_98] != '\0') {
                Variant::_clear_internal();
              }
              local_98 = CONCAT44(local_98._4_4_,(int)local_58);
              local_90 = local_50;
              if ((StringName::configured == '\0') || (local_108 == (undefined1  [8])0x0))
              goto LAB_001107d8;
              StringName::unref();
              iVar68 = *piVar71;
              goto joined_r0x001107dc;
            }
            goto LAB_001109ee;
          }
LAB_00110a03:
          if (local_260[1] != 0) {
            auVar29._8_8_ = 0;
            auVar29._0_8_ = pNStack_100;
            _local_108 = auVar29 << 0x40;
            (**(code **)(*(long *)local_1c8 + 0x2b0))(local_1c8,(CowData<char32_t> *)local_108);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
          }
          List<PropertyInfo,DefaultAllocator>::~List
                    ((List<PropertyInfo,DefaultAllocator> *)&local_168);
          Dictionary::~Dictionary((Dictionary *)&local_170);
          Ref<Resource>::unref((Ref<Resource> *)&local_178);
        }
        local_260 = (undefined8 *)local_260[1];
      } while (local_260 != (undefined8 *)0x0);
    }
  }
  if (*(long *)(this + 8) != 0) {
    PackedScene::get_state();
    for (iVar68 = 0; iVar56 = SceneState::get_node_count(), iVar68 < iVar56; iVar68 = iVar68 + 1) {
      SceneState::get_node_type((int)&local_1b0);
      SceneState::get_node_name((int)&local_1a8);
      iVar56 = SceneState::get_node_index((int)local_1b8);
      SceneState::get_node_path((int)local_1a0,SUB81(local_1b8,0));
      SceneState::get_node_owner_path((int)local_198);
      SceneState::get_node_instance((int)(Ref<PackedScene> *)&local_190);
      SceneState::get_node_instance_placeholder((int)(CowData<char32_t> *)&local_188);
      SceneState::get_node_groups((int)(Vector<StringName> *)&local_128);
      SceneState::get_node_deferred_nodepath_properties((int)local_248);
      local_180 = 0;
      String::parse_latin1((String *)&local_180,"[node");
      local_140 = (Object *)0x0;
      String::parse_latin1((String *)&local_140,"\"");
      if (local_1a8 == 0) {
        local_158 = 0;
      }
      else {
        local_158 = 0;
        if (*(char **)(local_1a8 + 8) == (char *)0x0) {
          if (*(long *)(local_1a8 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,(CowData *)(local_1a8 + 0x10));
          }
        }
        else {
          String::parse_latin1((String *)&local_158,*(char **)(local_1a8 + 8));
        }
      }
      local_280 = (CowData<char32_t> *)&local_158;
      String::c_escape();
      operator+((char *)&local_148,(String *)" name=\"");
      String::operator+((String *)local_108,(String *)&local_148);
      String::operator+=((String *)&local_180,(String *)local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
      CowData<char32_t>::_unref(local_280);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
      if (local_1b0 != 0) {
        local_140 = (Object *)0x0;
        String::parse_latin1((String *)&local_140,"\"");
        if (local_1b0 == 0) {
          local_150 = 0;
        }
        else {
          local_150 = 0;
          if (*(char **)(local_1b0 + 8) == (char *)0x0) {
            if (*(long *)(local_1b0 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_150,(CowData *)(local_1b0 + 0x10))
              ;
            }
          }
          else {
            String::parse_latin1((String *)&local_150,*(char **)(local_1b0 + 8));
          }
        }
        operator+((char *)&local_148,(String *)" type=\"");
        String::operator+((String *)local_108,(String *)&local_148);
        String::operator+=((String *)&local_180,(String *)local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
      }
      auVar46._8_8_ = 0;
      auVar46._0_8_ = pNStack_100;
      _local_108 = auVar46 << 0x40;
      cVar53 = NodePath::operator!=(local_1a0,(NodePath *)local_108);
      NodePath::~NodePath((NodePath *)local_108);
      if (cVar53 != '\0') {
        local_140 = (Object *)0x0;
        String::parse_latin1((String *)&local_140,"\"");
        NodePath::simplified();
        NodePath::operator_cast_to_String((NodePath *)local_280);
        String::c_escape();
        operator+((char *)&local_148,(String *)" parent=\"");
        String::operator+((String *)local_108,(String *)&local_148);
        String::operator+=((String *)&local_180,(String *)local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
        CowData<char32_t>::_unref(local_280);
        NodePath::~NodePath((NodePath *)&local_160);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
      }
      local_148 = 0;
      cVar53 = NodePath::operator!=(local_198,(NodePath *)&local_148);
      if (cVar53 == '\0') {
        NodePath::~NodePath((NodePath *)&local_148);
      }
      else {
        local_140 = (Object *)0x0;
        String::parse_latin1((String *)&local_140,".");
        NodePath::NodePath((NodePath *)local_108,(String *)&local_140);
        cVar53 = NodePath::operator!=(local_198,(NodePath *)local_108);
        NodePath::~NodePath((NodePath *)local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
        NodePath::~NodePath((NodePath *)&local_148);
        if (cVar53 != '\0') {
          local_140 = (Object *)0x0;
          String::parse_latin1((String *)&local_140,"\"");
          NodePath::simplified();
          NodePath::operator_cast_to_String((NodePath *)local_280);
          String::c_escape();
          operator+((char *)&local_148,(String *)" owner=\"");
          String::operator+((String *)local_108,(String *)&local_148);
          String::operator+=((String *)&local_180,(String *)local_108);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
          CowData<char32_t>::_unref(local_280);
          NodePath::~NodePath((NodePath *)&local_160);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
        }
      }
      if (-1 < iVar56) {
        local_140 = (Object *)0x0;
        String::parse_latin1((String *)&local_140,"\"");
        itos((long)&local_150);
        operator+((char *)&local_148,(String *)" index=\"");
        String::operator+((String *)local_108,(String *)&local_148);
        String::operator+=((String *)&local_180,(String *)local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
      }
      if ((local_110 != 0) && (*(long *)(local_110 + -8) != 0)) {
        Variant::Variant((Variant *)&local_58,(Vector *)local_248);
        Variant::get_construct_string();
        operator+((char *)local_108,(String *)" node_paths=");
        String::operator+=((String *)&local_180,(String *)local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
      }
      if ((local_120 != 0) && (*(long *)(local_120 + -8) != 0)) {
        lVar60 = 0;
        Vector<StringName>::sort_custom<StringName::AlphCompare,true>
                  ((Vector<StringName> *)&local_128);
        local_160 = 0;
        String::parse_latin1((String *)&local_160," groups=[");
        if ((local_120 != 0) && (0 < *(long *)(local_120 + -8))) {
          do {
            local_140 = (Object *)0x0;
            String::parse_latin1((String *)&local_140,"\"");
            if (local_120 == 0) {
              lVar67 = 0;
              goto LAB_0011011b;
            }
            lVar67 = *(long *)(local_120 + -8);
            if (lVar67 <= lVar60) goto LAB_0011011b;
            lVar67 = *(long *)(local_120 + lVar60 * 8);
            if (lVar67 == 0) {
              local_158 = 0;
            }
            else {
              local_158 = 0;
              if (*(char **)(lVar67 + 8) == (char *)0x0) {
                if (*(long *)(lVar67 + 0x10) != 0) {
                  CowData<char32_t>::_ref(local_280,(CowData *)(lVar67 + 0x10));
                }
              }
              else {
                String::parse_latin1((String *)local_280,*(char **)(lVar67 + 8));
              }
            }
            String::c_escape();
            operator+((char *)&local_148,(String *)&_LC114);
            String::operator+((String *)local_108,(String *)&local_148);
            String::operator+=((String *)&local_160,(String *)local_108);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
            CowData<char32_t>::_unref(local_280);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
          } while ((local_120 != 0) &&
                  (((*(long *)(local_120 + -8) + -1 <= lVar60 ||
                    (String::operator+=((String *)&local_160,", "), local_120 != 0)) &&
                   (lVar60 = lVar60 + 1, lVar60 < *(long *)(local_120 + -8)))));
        }
        String::operator+=((String *)&local_160,"]");
        String::operator+=((String *)&local_180,(String *)&local_160);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
      }
      (**(code **)(*(long *)local_1c8 + 0x2a8))(local_1c8,(String *)&local_180);
      pRVar59 = local_1c8;
      if ((local_188 != 0) && (1 < *(uint *)(local_188 + -8))) {
        local_140 = (Object *)0x0;
        pcVar4 = *(code **)(*(long *)local_1c8 + 0x2a8);
        auVar32._8_8_ = 0;
        auVar32._0_8_ = pNStack_100;
        _local_108 = auVar32 << 0x40;
        String::parse_latin1((String *)local_108," instance_placeholder=");
        (*pcVar4)(pRVar59,(CowData<char32_t> *)local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
        RVar3 = this[0xc0];
        Variant::Variant((Variant *)&local_58,(String *)&local_188);
        VariantWriter::write_to_string
                  ((Variant *)&local_58,(String *)&local_140,_write_resources,this,(bool)RVar3);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        (**(code **)(*(long *)local_1c8 + 0x2a8))(local_1c8,(String *)&local_140);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
      }
      pRVar59 = local_1c8;
      if (local_190 != (Object *)0x0) {
        local_140 = (Object *)0x0;
        pcVar4 = *(code **)(*(long *)local_1c8 + 0x2a8);
        auVar30._8_8_ = 0;
        auVar30._0_8_ = pNStack_100;
        _local_108 = auVar30 << 0x40;
        String::parse_latin1((String *)local_108," instance=");
        (*pcVar4)(pRVar59,(CowData<char32_t> *)local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
        RVar3 = this[0xc0];
        Variant::Variant((Variant *)&local_58,local_190);
        VariantWriter::write_to_string
                  ((Variant *)&local_58,(String *)&local_140,_write_resources,this,(bool)RVar3);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        (**(code **)(*(long *)local_1c8 + 0x2a8))(local_1c8,(String *)&local_140);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
      }
      pRVar59 = local_1c8;
      pcVar4 = *(code **)(*(long *)local_1c8 + 0x2b0);
      auVar47._8_8_ = 0;
      auVar47._0_8_ = pNStack_100;
      _local_108 = auVar47 << 0x40;
      String::parse_latin1((String *)local_108,"]");
      (*pcVar4)(pRVar59,(CowData<char32_t> *)local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
      for (iVar56 = 0; iVar58 = SceneState::get_node_property_count((int)local_1b8), iVar56 < iVar58
          ; iVar56 = iVar56 + 1) {
        local_178 = (Ref *)0x0;
        RVar3 = this[0xc0];
        SceneState::get_node_property_value((int)(Variant *)&local_58,(int)local_1b8);
        VariantWriter::write_to_string
                  ((Variant *)&local_58,(String *)&local_178,_write_resources,this,(bool)RVar3);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        pRVar59 = local_1c8;
        pcVar4 = *(code **)(*(long *)local_1c8 + 0x2a8);
        local_140 = (Object *)0x0;
        local_108 = (undefined1  [8])&_LC205;
        pNStack_100 = (NodePath *)0x1;
        String::parse_latin1((StrRange *)&local_140);
        local_158 = 0;
        pNStack_100 = (NodePath *)0x3;
        local_108 = (undefined1  [8])&_LC206;
        String::parse_latin1((StrRange *)local_280);
        SceneState::get_node_property_name((int)&local_170,(int)local_1b8);
        if (local_170 == 0) {
          local_168 = (undefined8 *)0x0;
        }
        else {
          local_168 = (undefined8 *)0x0;
          if (*(char **)(local_170 + 8) == (char *)0x0) {
            if (*(long *)(local_170 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_168,(CowData *)(local_170 + 0x10))
              ;
            }
          }
          else {
            String::parse_latin1((String *)&local_168,*(char **)(local_170 + 8));
          }
        }
        String::property_name_encode();
        String::operator+((String *)&local_150,(String *)&local_160);
        String::operator+((String *)&local_148,(String *)&local_150);
        String::operator+((String *)local_108,(String *)&local_148);
        (*pcVar4)(pRVar59,(CowData<char32_t> *)local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
        if ((StringName::configured != '\0') && (local_170 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref(local_280);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
      }
      iVar56 = SceneState::get_node_count();
      if (iVar68 < iVar56 + -1) {
        auVar31._8_8_ = 0;
        auVar31._0_8_ = pNStack_100;
        _local_108 = auVar31 << 0x40;
        (**(code **)(*(long *)local_1c8 + 0x2b0))(local_1c8,(CowData<char32_t> *)local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
      CowData<String>::_unref((CowData<String> *)&local_110);
      CowData<StringName>::_unref((CowData<StringName> *)&local_120);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
      Ref<PackedScene>::unref((Ref<PackedScene> *)&local_190);
      NodePath::~NodePath(local_198);
      NodePath::~NodePath(local_1a0);
      if ((StringName::configured != '\0') &&
         (((local_1a8 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
          (local_1b0 != 0)))) {
        StringName::unref();
      }
    }
    iVar68 = SceneState::get_connection_count();
    pRVar59 = local_1c8;
    if (0 < iVar68) {
      iVar68 = 0;
      pcVar4 = *(code **)(*(long *)local_1c8 + 0x2b0);
      auVar40._8_8_ = 0;
      auVar40._0_8_ = pNStack_100;
      _local_108 = auVar40 << 0x40;
      String::parse_latin1((String *)local_108,"");
      (*pcVar4)(pRVar59,(CowData<char32_t> *)local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
      do {
        local_160 = 0;
        String::parse_latin1((String *)&local_160,"[connection");
        local_118 = 0;
        String::parse_latin1((String *)local_248,"\"");
        iVar56 = (int)(NodePath *)&local_150;
        SceneState::get_connection_signal(iVar56);
        if (local_150 == 0) {
          local_148 = 0;
        }
        else {
          local_148 = 0;
          if (*(char **)(local_150 + 8) == (char *)0x0) {
            if (*(long *)(local_150 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)(local_150 + 0x10))
              ;
            }
          }
          else {
            String::parse_latin1((String *)&local_148,*(char **)(local_150 + 8));
          }
        }
        String::c_escape();
        operator+((char *)&local_128,(String *)" signal=\"");
        String::operator+((String *)local_108,(String *)&local_128);
        String::operator+=((String *)&local_160,(String *)local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
        if ((StringName::configured != '\0') && (local_150 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref(local_248);
        local_118 = 0;
        String::parse_latin1((String *)local_248,"\"");
        iVar58 = (int)(NodePath *)&local_158;
        SceneState::get_connection_source(iVar58);
        NodePath::simplified();
        NodePath::operator_cast_to_String((NodePath *)&local_148);
        String::c_escape();
        operator+((char *)&local_128,(String *)" from=\"");
        String::operator+((String *)local_108,(String *)&local_128);
        String::operator+=((String *)&local_160,(String *)local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
        NodePath::~NodePath((NodePath *)&local_150);
        NodePath::~NodePath((NodePath *)&local_158);
        CowData<char32_t>::_unref(local_248);
        local_118 = 0;
        String::parse_latin1((String *)local_248,"\"");
        SceneState::get_connection_target(iVar58);
        NodePath::simplified();
        NodePath::operator_cast_to_String((NodePath *)&local_148);
        String::c_escape();
        operator+((char *)&local_128,(String *)" to=\"");
        String::operator+((String *)local_108,(String *)&local_128);
        String::operator+=((String *)&local_160,(String *)local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
        NodePath::~NodePath((NodePath *)&local_150);
        NodePath::~NodePath((NodePath *)&local_158);
        CowData<char32_t>::_unref(local_248);
        local_118 = 0;
        String::parse_latin1((String *)local_248,"\"");
        SceneState::get_connection_method(iVar56);
        if (local_150 == 0) {
          local_148 = 0;
        }
        else {
          local_148 = 0;
          if (*(char **)(local_150 + 8) == (char *)0x0) {
            if (*(long *)(local_150 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)(local_150 + 0x10))
              ;
            }
          }
          else {
            String::parse_latin1((String *)&local_148,*(char **)(local_150 + 8));
          }
        }
        String::c_escape();
        operator+((char *)&local_128,(String *)" method=\"");
        String::operator+((String *)local_108,(String *)&local_128);
        String::operator+=((String *)&local_160,(String *)local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
        if ((StringName::configured != '\0') && (local_150 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref(local_248);
        iVar56 = SceneState::get_connection_flags((int)local_1b8);
        if (iVar56 != 2) {
          itos((long)local_248);
          operator+((char *)local_108,(String *)" flags=");
          String::operator+=((String *)&local_160,(String *)local_108);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
          CowData<char32_t>::_unref(local_248);
        }
        iVar56 = SceneState::get_connection_unbinds((int)local_1b8);
        if (0 < iVar56) {
          itos((long)local_248);
          operator+((char *)local_108,(String *)" unbinds=");
          String::operator+=((String *)&local_160,(String *)local_108);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
          CowData<char32_t>::_unref(local_248);
        }
        SceneState::get_connection_binds((int)(String *)&local_128);
        (**(code **)(*(long *)local_1c8 + 0x2a8))(local_1c8,(String *)&local_160);
        iVar56 = Array::size();
        if (iVar56 != 0) {
          local_118 = 0;
          RVar3 = this[0xc0];
          Variant::Variant((Variant *)&local_58,(Array *)&local_128);
          VariantWriter::write_to_string
                    ((Variant *)&local_58,(String *)local_248,_write_resources,this,(bool)RVar3);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          pRVar59 = local_1c8;
          pcVar4 = *(code **)(*(long *)local_1c8 + 0x2a8);
          operator+((char *)local_108,(String *)" binds= ");
          (*pcVar4)(pRVar59,(CowData<char32_t> *)local_108);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
          CowData<char32_t>::_unref(local_248);
        }
        pRVar59 = local_1c8;
        iVar68 = iVar68 + 1;
        pcVar4 = *(code **)(*(long *)local_1c8 + 0x2b0);
        auVar48._8_8_ = 0;
        auVar48._0_8_ = pNStack_100;
        _local_108 = auVar48 << 0x40;
        String::parse_latin1((String *)local_108,"]");
        (*pcVar4)(pRVar59,(CowData<char32_t> *)local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
        Array::~Array((Array *)&local_128);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
        iVar56 = SceneState::get_connection_count();
      } while (iVar68 < iVar56);
    }
    lVar60 = 0;
    SceneState::get_editable_instances();
    pRVar59 = local_1c8;
    while (local_1c8 = pRVar59, pNStack_100 != (NodePath *)0x0) {
      if (*(long *)((long)pNStack_100 + -8) <= lVar60) {
        LOCK();
        plVar69 = (long *)((long)pNStack_100 + -0x10);
        *plVar69 = *plVar69 + -1;
        UNLOCK();
        if (*plVar69 == 0) {
          pNVar50 = pNStack_100;
          if (pNStack_100 == (NodePath *)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          lVar60 = *(long *)(pNStack_100 + -8);
          lVar67 = 0;
          pNStack_100 = (NodePath *)0x0;
          this_01 = pNVar50;
          if (lVar60 != 0) {
            do {
              lVar67 = lVar67 + 1;
              NodePath::~NodePath(this_01);
              this_01 = this_01 + 8;
            } while (lVar60 != lVar67);
          }
          Memory::free_static(pNVar50 + -0x10,false);
        }
        break;
      }
      if (lVar60 == 0) {
        pcVar4 = *(code **)(*(long *)pRVar59 + 0x2b0);
        local_118 = 0;
        String::parse_latin1((String *)local_248,"");
        (*pcVar4)(pRVar59,local_248);
        CowData<char32_t>::_unref(local_248);
      }
      pRVar59 = local_1c8;
      pcVar4 = *(code **)(*(long *)local_1c8 + 0x2b0);
      local_128 = (String *)0x0;
      String::parse_latin1((String *)&local_128,"\"]");
      if (pNStack_100 == (NodePath *)0x0) {
        lVar67 = 0;
LAB_0011011b:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar60,lVar67,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar67 = *(long *)((long)pNStack_100 + -8);
      if (lVar67 <= lVar60) goto LAB_0011011b;
      lVar60 = lVar60 + 1;
      NodePath::operator_cast_to_String((NodePath *)&local_150);
      String::c_escape();
      operator+((char *)&local_140,(String *)"[editable path=\"");
      String::operator+((String *)local_248,(String *)&local_140);
      (*pcVar4)(pRVar59);
      CowData<char32_t>::_unref(local_248);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
      pRVar59 = local_1c8;
    }
    Ref<SceneState>::unref((Ref<SceneState> *)&local_1b8);
  }
  iVar68 = (**(code **)(*(long *)local_1c8 + 0x250))();
  if (iVar68 != 0) {
    iVar68 = (**(code **)(*(long *)local_1c8 + 0x250))();
    local_1f4 = 0x14;
    if (iVar68 == 0x12) {
      local_1f4 = local_1cc;
    }
  }
  auVar72 = local_c8;
  if (local_c8 != (undefined1  [8])0x0) {
    if (local_a8._4_4_ != 0) {
      if (*(uint *)(hash_table_size_primes + (local_a8 & 0xffffffff) * 4) != 0) {
        memset((void *)local_b8._8_8_,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_a8 & 0xffffffff) * 4) * 4);
      }
      lVar60 = 0;
      do {
        plVar69 = (long *)((long)auVar72 + lVar60 * 8);
        if (*plVar69 != 0) {
          LOCK();
          plVar70 = (long *)(*plVar69 + -0x10);
          *plVar70 = *plVar70 + -1;
          UNLOCK();
          if (*plVar70 == 0) {
            lVar67 = *plVar69;
            *plVar69 = 0;
            Memory::free_static((void *)(lVar67 + -0x10),false);
          }
          auVar72 = local_c8;
        }
        lVar60 = lVar60 + 1;
      } while ((uint)lVar60 < local_a8._4_4_);
      local_a8 = local_a8 & 0xffffffff;
      if (auVar72 == (undefined1  [8])0x0) goto LAB_00112403;
    }
    Memory::free_static((void *)auVar72,false);
    Memory::free_static((void *)local_b8._0_8_,false);
    Memory::free_static(pvStack_c0,false);
    Memory::free_static((void *)local_b8._8_8_,false);
  }
LAB_00112403:
  CowData<ResourceFormatSaverTextInstance::ResourceSort>::_unref
            ((CowData<ResourceFormatSaverTextInstance::ResourceSort> *)&local_130);
  pvVar73 = (void *)local_f8._0_8_;
  if ((void *)local_f8._0_8_ != (void *)0x0) {
    if (local_d8._4_4_ != 0) {
      if (*(uint *)(hash_table_size_primes + (local_d8 & 0xffffffff) * 4) != 0) {
        memset((void *)local_e8._8_8_,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_d8 & 0xffffffff) * 4) * 4);
      }
      lVar60 = 0;
      do {
        plVar69 = (long *)((long)pvVar73 + lVar60 * 8);
        if (*plVar69 != 0) {
          LOCK();
          plVar70 = (long *)(*plVar69 + -0x10);
          *plVar70 = *plVar70 + -1;
          UNLOCK();
          if (*plVar70 == 0) {
            lVar67 = *plVar69;
            *plVar69 = 0;
            Memory::free_static((void *)(lVar67 + -0x10),false);
          }
          pvVar73 = (void *)local_f8._0_8_;
        }
        lVar60 = lVar60 + 1;
      } while ((uint)lVar60 < local_d8._4_4_);
      local_d8 = local_d8 & 0xffffffff;
      if (pvVar73 == (void *)0x0) goto LAB_001124e0;
    }
    Memory::free_static(pvVar73,false);
    Memory::free_static((void *)local_e8._0_8_,false);
    Memory::free_static((void *)local_f8._8_8_,false);
    Memory::free_static((void *)local_e8._8_8_,false);
  }
LAB_001124e0:
  Ref<FileAccess>::unref((Ref<FileAccess> *)&local_1c0);
LAB_0011224e:
  Ref<FileAccess>::unref((Ref<FileAccess> *)&local_1c8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_1f4;
LAB_00111b49:
  do {
    if (local_108 == (undefined1  [8])*(ulong *)(lVar67 + 0x30)) {
      if (*(ulong *)(lVar67 + 0x38) <= pNStack_100) {
        if (*(ulong *)(lVar67 + 0x38) < pNStack_100) goto LAB_00111b55;
        goto LAB_00110796;
      }
LAB_00111b40:
      lVar67 = *(long *)(lVar67 + 0x10);
      if (lVar60 == lVar67) break;
      goto LAB_00111b49;
    }
    if ((ulong)local_108 < *(ulong *)(lVar67 + 0x30)) goto LAB_00111b40;
LAB_00111b55:
    lVar67 = *(long *)(lVar67 + 8);
  } while (lVar60 != lVar67);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  lVar67 = RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
           ::_insert((RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
                      *)(this + 0x18),(NonPersistentKey *)local_108,(Variant *)&local_58);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
LAB_00110796:
  Variant::operator=((Variant *)&local_98,(Variant *)(lVar67 + 0x40));
LAB_001107af:
  if ((StringName::configured != '\0') && (pNStack_100 != (NodePath *)0x0)) {
    StringName::unref();
  }
  Ref<Resource>::unref((Ref<Resource> *)local_108);
LAB_001107d8:
  iVar68 = *piVar71;
joined_r0x001107dc:
  if (iVar68 == 0x18) {
    local_268 = (Variant *)&local_98;
    Variant::Variant((Variant *)&local_58,pSVar1);
    cVar53 = Dictionary::has((Variant *)&local_170);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar53 != '\0') {
      auVar33._8_8_ = 0;
      auVar33._0_8_ = pNStack_100;
      _local_108 = auVar33 << 0x40;
      lVar60 = Variant::get_validated_object();
      if ((lVar60 == 0) ||
         (lVar60 = __dynamic_cast(lVar60,&Object::typeinfo,&Resource::typeinfo,0), lVar60 == 0)) {
LAB_00111d2e:
        Variant::Variant((Variant *)&local_58,pSVar1);
        pVVar65 = (Variant *)Dictionary::operator[]((Variant *)&local_170);
        Variant::operator=(local_268,pVVar65);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        local_108 = (undefined1  [8])lVar60;
        cVar53 = RefCounted::reference();
        if (cVar53 == '\0') {
          auVar34._8_8_ = 0;
          auVar34._0_8_ = pNStack_100;
          _local_108 = auVar34 << 0x40;
          goto LAB_00111d2e;
        }
      }
      Ref<Resource>::unref((Ref<Resource> *)local_108);
    }
  }
  local_268 = (Variant *)&local_98;
  StringName::StringName((StringName *)local_108,(String *)&local_160,false);
  (**(code **)(*(long *)pRVar59 + 0x48))((Ref<Resource> *)&local_128,pRVar59);
  StringName::StringName((StringName *)local_248,(String *)&local_128,false);
  ClassDB::class_get_default_property_value
            ((StringName *)local_78,(StringName *)local_248,(bool *)local_108);
  if ((StringName::configured != '\0') && (local_118 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((StringName::configured != '\0') && (local_108 != (undefined1  [8])0x0)) {
    StringName::unref();
  }
  if (local_78[0] == 0) {
LAB_00110878:
    if (((*piVar71 != 0x18) || (cVar53 = Variant::is_zero(), cVar53 == '\0')) ||
       ((*(byte *)((long)piVar71 + 0x29) & 0x20) != 0)) {
      local_158 = 0;
      VariantWriter::write_to_string
                (local_268,(String *)&local_158,_write_resources,this,(bool)this[0xc0]);
      pRVar59 = local_1c8;
      pcVar4 = *(code **)(*(long *)local_1c8 + 0x2a8);
      local_118 = 0;
      String::parse_latin1((String *)local_248,"\n");
      local_148 = 0;
      String::parse_latin1((String *)&local_148," = ");
      String::property_name_encode();
      String::operator+((String *)&local_140,(String *)&local_150);
      String::operator+((String *)&local_128,(String *)&local_140);
      String::operator+((String *)local_108,(String *)&local_128);
      (*pcVar4)(pRVar59,(CowData<char32_t> *)local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
      CowData<char32_t>::_unref(local_248);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
      cVar53 = Variant::needs_deinit[local_78[0]];
      goto joined_r0x00111e05;
    }
  }
  else {
    local_50 = (undefined1  [16])0x0;
    auVar35._12_4_ = 0;
    auVar35._0_12_ = stack0xfffffffffffffefc;
    _local_108 = auVar35 << 0x20;
    local_118 = CONCAT71(local_118._1_7_,1);
    local_58 = local_58 & 0xffffffff00000000;
    Variant::evaluate((Operator *)local_108,local_268,(Variant *)local_78,(Variant *)&local_58,
                      (bool *)local_248);
    bVar54 = Variant::operator_cast_to_bool((Variant *)&local_58);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    if (!bVar54) goto LAB_00110878;
  }
  cVar53 = Variant::needs_deinit[local_78[0]];
joined_r0x00111e05:
  if (cVar53 != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_98] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
LAB_001109ee:
  piVar71 = *(int **)(piVar71 + 0xc);
  if (piVar71 == (int *)0x0) goto LAB_00110a03;
  goto LAB_001119e0;
}



/* ResourceFormatSaverText::save(Ref<Resource> const&, String const&, unsigned int) */

undefined4 __thiscall
ResourceFormatSaverText::save
          (ResourceFormatSaverText *this,Ref *param_1,String *param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  Element *pEVar3;
  char cVar4;
  undefined4 uVar5;
  Object *pOVar6;
  long lVar7;
  Element *pEVar8;
  Element *pEVar9;
  Element *pEVar10;
  void *pvVar11;
  Element *pEVar12;
  long in_FS_OFFSET;
  ResourceFormatSaverTextInstance local_108 [8];
  Object *pOStack_100;
  undefined4 local_f8;
  Element *local_f0;
  Element *local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0 [2];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined1 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar4 = String::ends_with((char *)param_2);
  if (cVar4 != '\0') {
    if (*(long *)param_1 != 0) {
      pOVar6 = (Object *)__dynamic_cast(*(long *)param_1,&Object::typeinfo,&PackedScene::typeinfo,0)
      ;
      if (pOVar6 != (Object *)0x0) {
        cVar4 = RefCounted::reference();
        if (cVar4 != '\0') {
          cVar4 = RefCounted::unreference();
          if (cVar4 != '\0') {
            cVar4 = predelete_handler(pOVar6);
            if (cVar4 != '\0') {
              (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
              Memory::free_static(pOVar6,false);
            }
          }
          goto LAB_00113098;
        }
      }
    }
    uVar5 = 0xf;
    goto LAB_0011362d;
  }
LAB_00113098:
  local_e8 = (Element *)&_GlobalNilClass::_nil;
  local_f8 = 0;
  local_f0 = (Element *)0x0;
  local_e0 = 0;
  local_b8 = _LC8;
  local_b0[0] = 0;
  local_80 = _LC8;
  local_50 = _LC8;
  local_48 = 1;
  _local_108 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_a0 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  uVar5 = ResourceFormatSaverTextInstance::save(local_108,param_2,param_1,param_3);
  if ((void *)local_70._0_8_ != (void *)0x0) {
    pvVar11 = (void *)local_70._0_8_;
    if (local_50._4_4_ != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4);
      if (uVar2 == 0) {
        local_50 = local_50 & 0xffffffff;
        local_60 = (undefined1  [16])0x0;
      }
      else {
        lVar7 = 0;
        do {
          if (*(int *)(local_70._8_8_ + lVar7) != 0) {
            pvVar11 = *(void **)((long)pvVar11 + lVar7 * 2);
            *(int *)(local_70._8_8_ + lVar7) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar11 + 0x18));
            if (*(long *)((long)pvVar11 + 0x10) != 0) {
              cVar4 = RefCounted::unreference();
              if (cVar4 != '\0') {
                pOVar6 = *(Object **)((long)pvVar11 + 0x10);
                cVar4 = predelete_handler(pOVar6);
                if (cVar4 != '\0') {
                  (**(code **)(*(long *)pOVar6 + 0x140))();
                  Memory::free_static(pOVar6,false);
                }
              }
            }
            Memory::free_static(pvVar11,false);
            *(undefined8 *)(local_70._0_8_ + lVar7 * 2) = 0;
            pvVar11 = (void *)local_70._0_8_;
          }
          lVar7 = lVar7 + 4;
        } while ((ulong)uVar2 << 2 != lVar7);
        local_50 = local_50 & 0xffffffff;
        local_60 = (undefined1  [16])0x0;
        if (pvVar11 == (void *)0x0) goto LAB_00113203;
      }
    }
    Memory::free_static(pvVar11,false);
    Memory::free_static((void *)local_70._8_8_,false);
  }
LAB_00113203:
  if ((void *)local_a0._0_8_ != (void *)0x0) {
    pvVar11 = (void *)local_a0._0_8_;
    if (local_80._4_4_ != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4);
      if (uVar2 == 0) {
        local_80 = local_80 & 0xffffffff;
        local_90 = (undefined1  [16])0x0;
      }
      else {
        lVar7 = 0;
        do {
          if (*(int *)(local_a0._8_8_ + lVar7) != 0) {
            pvVar11 = *(void **)((long)pvVar11 + lVar7 * 2);
            *(int *)(local_a0._8_8_ + lVar7) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar11 + 0x18));
            if (*(long *)((long)pvVar11 + 0x10) != 0) {
              cVar4 = RefCounted::unreference();
              if (cVar4 != '\0') {
                pOVar6 = *(Object **)((long)pvVar11 + 0x10);
                cVar4 = predelete_handler(pOVar6);
                if (cVar4 != '\0') {
                  (**(code **)(*(long *)pOVar6 + 0x140))();
                  Memory::free_static(pOVar6,false);
                }
              }
            }
            Memory::free_static(pvVar11,false);
            *(undefined8 *)(local_a0._0_8_ + lVar7 * 2) = 0;
            pvVar11 = (void *)local_a0._0_8_;
          }
          lVar7 = lVar7 + 4;
        } while ((ulong)uVar2 << 2 != lVar7);
        local_80 = local_80 & 0xffffffff;
        local_90 = (undefined1  [16])0x0;
        if (pvVar11 == (void *)0x0) goto LAB_001132c6;
      }
    }
    Memory::free_static(pvVar11,false);
    Memory::free_static((void *)local_a0._8_8_,false);
  }
LAB_001132c6:
  List<Ref<Resource>,DefaultAllocator>::~List((List<Ref<Resource>,DefaultAllocator> *)local_b0);
  pvVar11 = (void *)local_d8._0_8_;
  if ((void *)local_d8._0_8_ != (void *)0x0) {
    if (local_b8._4_4_ != 0) {
      if (*(uint *)(hash_table_size_primes + (local_b8 & 0xffffffff) * 4) != 0) {
        memset((void *)local_c8._8_8_,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_b8 & 0xffffffff) * 4) << 2);
        if (local_b8._4_4_ == 0) goto LAB_0011337d;
      }
      lVar7 = 0;
      do {
        plVar1 = (long *)((long)pvVar11 + lVar7 * 8);
        if (*plVar1 != 0) {
          cVar4 = RefCounted::unreference();
          if (cVar4 != '\0') {
            pOVar6 = (Object *)*plVar1;
            cVar4 = predelete_handler(pOVar6);
            if (cVar4 != '\0') {
              (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
              Memory::free_static(pOVar6,false);
            }
          }
          pvVar11 = (void *)local_d8._0_8_;
        }
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < local_b8._4_4_);
      local_b8 = local_b8 & 0xffffffff;
      if (pvVar11 == (void *)0x0) goto LAB_001133ab;
    }
LAB_0011337d:
    Memory::free_static(pvVar11,false);
    Memory::free_static((void *)local_c8._0_8_,false);
    Memory::free_static((void *)local_d8._8_8_,false);
    Memory::free_static((void *)local_c8._8_8_,false);
  }
LAB_001133ab:
  if (local_f0 != (Element *)0x0) {
    pEVar3 = *(Element **)(local_f0 + 0x10);
    if (pEVar3 != local_e8) {
      pEVar8 = *(Element **)(pEVar3 + 0x10);
      if (local_e8 != pEVar8) {
        pEVar12 = *(Element **)(pEVar8 + 0x10);
        if (local_e8 != pEVar12) {
          pEVar9 = *(Element **)(pEVar12 + 0x10);
          if (local_e8 != pEVar9) {
            RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
            ::_cleanup_tree((RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
                             *)&local_f0,pEVar9);
            pEVar9 = local_e8;
          }
          if (*(Element **)(pEVar12 + 8) != pEVar9) {
            RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
            ::_cleanup_tree((RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
                             *)&local_f0,*(Element **)(pEVar12 + 8));
          }
          if (Variant::needs_deinit[*(int *)(pEVar12 + 0x40)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar12 + 0x38) != 0)) {
            StringName::unref();
          }
          Ref<Resource>::unref((Ref<Resource> *)(pEVar12 + 0x30));
          Memory::free_static(pEVar12,false);
          pEVar12 = local_e8;
        }
        pEVar9 = *(Element **)(pEVar8 + 8);
        if (pEVar9 != pEVar12) {
          if (*(Element **)(pEVar9 + 0x10) != pEVar12) {
            RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
            ::_cleanup_tree((RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
                             *)&local_f0,*(Element **)(pEVar9 + 0x10));
            pEVar12 = local_e8;
          }
          if (pEVar12 != *(Element **)(pEVar9 + 8)) {
            RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
            ::_cleanup_tree((RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
                             *)&local_f0,*(Element **)(pEVar9 + 8));
          }
          if (Variant::needs_deinit[*(int *)(pEVar9 + 0x40)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar9 + 0x38) != 0)) {
            StringName::unref();
          }
          Ref<Resource>::unref((Ref<Resource> *)(pEVar9 + 0x30));
          Memory::free_static(pEVar9,false);
        }
        memdelete_allocator<RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>::Element,DefaultAllocator>
                  (pEVar8);
        pEVar8 = local_e8;
      }
      pEVar12 = *(Element **)(pEVar3 + 8);
      if (pEVar8 != pEVar12) {
        pEVar9 = *(Element **)(pEVar12 + 0x10);
        if (pEVar8 != pEVar9) {
          pEVar10 = *(Element **)(pEVar9 + 0x10);
          if (pEVar8 != pEVar10) {
            RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
            ::_cleanup_tree((RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
                             *)&local_f0,pEVar10);
            pEVar10 = local_e8;
          }
          if (pEVar10 != *(Element **)(pEVar9 + 8)) {
            RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
            ::_cleanup_tree((RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
                             *)&local_f0,*(Element **)(pEVar9 + 8));
          }
          if (Variant::needs_deinit[*(int *)(pEVar9 + 0x40)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar9 + 0x38) != 0)) {
            StringName::unref();
          }
          Ref<Resource>::unref((Ref<Resource> *)(pEVar9 + 0x30));
          Memory::free_static(pEVar9,false);
          pEVar9 = local_e8;
        }
        pEVar8 = *(Element **)(pEVar12 + 8);
        if (pEVar9 != pEVar8) {
          pEVar10 = *(Element **)(pEVar8 + 0x10);
          if (pEVar9 != pEVar10) {
            RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
            ::_cleanup_tree((RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
                             *)&local_f0,pEVar10);
            pEVar10 = local_e8;
          }
          if (pEVar10 != *(Element **)(pEVar8 + 8)) {
            RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
            ::_cleanup_tree((RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
                             *)&local_f0,*(Element **)(pEVar8 + 8));
          }
          if (Variant::needs_deinit[*(int *)(pEVar8 + 0x40)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)(pEVar8 + 0x38) != 0)) {
            StringName::unref();
          }
          Ref<Resource>::unref((Ref<Resource> *)(pEVar8 + 0x30));
          Memory::free_static(pEVar8,false);
        }
        memdelete_allocator<RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>::Element,DefaultAllocator>
                  (pEVar12);
      }
      memdelete_allocator<RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>::Element,DefaultAllocator>
                (pEVar3);
    }
    *(Element **)(local_f0 + 0x10) = local_e8;
    local_e0 = 0;
    if (local_f0 != (Element *)0x0) {
      memdelete_allocator<RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>::Element,DefaultAllocator>
                (local_f0);
    }
  }
  if (pOStack_100 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar6 = pOStack_100;
      cVar4 = predelete_handler(pOStack_100);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
LAB_0011362d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x1224,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1224,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* RefCounted::_getv(StringName const&, Variant&) const */

undefined8 RefCounted::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_setv(StringName const&, Variant const&) */

undefined8 RefCounted::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_validate_propertyv(PropertyInfo&) const */

void RefCounted::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RefCounted::_property_can_revertv(StringName const&) const */

undefined8 RefCounted::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RefCounted::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_notificationv(int, bool) */

void RefCounted::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ResourceFormatLoader::is_class_ptr(void*) const */

uint __thiscall ResourceFormatLoader::is_class_ptr(ResourceFormatLoader *this,void *param_1)

{
  return (uint)CONCAT71(0x1224,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1224,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1224,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ResourceFormatLoader::_getv(StringName const&, Variant&) const */

undefined8 ResourceFormatLoader::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceFormatLoader::_setv(StringName const&, Variant const&) */

undefined8 ResourceFormatLoader::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceFormatLoader::_validate_propertyv(PropertyInfo&) const */

void ResourceFormatLoader::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ResourceFormatLoader::_property_can_revertv(StringName const&) const */

undefined8 ResourceFormatLoader::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ResourceFormatLoader::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ResourceFormatLoader::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceFormatLoader::_notificationv(int, bool) */

void ResourceFormatLoader::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ResourceFormatLoader::is_import_valid(String const&) const */

undefined8 ResourceFormatLoader::is_import_valid(String *param_1)

{
  return 1;
}



/* ResourceFormatLoader::is_imported(String const&) const */

undefined8 ResourceFormatLoader::is_imported(String *param_1)

{
  return 0;
}



/* ResourceFormatLoader::get_import_order(String const&) const */

undefined8 ResourceFormatLoader::get_import_order(String *param_1)

{
  return 0;
}



/* ResourceFormatSaver::is_class_ptr(void*) const */

uint __thiscall ResourceFormatSaver::is_class_ptr(ResourceFormatSaver *this,void *param_1)

{
  return (uint)CONCAT71(0x1224,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1224,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1224,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ResourceFormatSaver::_getv(StringName const&, Variant&) const */

undefined8 ResourceFormatSaver::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceFormatSaver::_setv(StringName const&, Variant const&) */

undefined8 ResourceFormatSaver::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceFormatSaver::_validate_propertyv(PropertyInfo&) const */

void ResourceFormatSaver::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ResourceFormatSaver::_property_can_revertv(StringName const&) const */

undefined8 ResourceFormatSaver::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ResourceFormatSaver::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ResourceFormatSaver::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceFormatSaver::_notificationv(int, bool) */

void ResourceFormatSaver::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomStaticMethodPointer<void, String const&, String const&, String
   const&>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<void,String_const&,String_const&,String_const&>::
~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<void,String_const&,String_const&,String_const&> *this)

{
  return;
}



/* CallableCustomStaticMethodPointer<void, String const&, String const&, String const&>::is_valid()
   const */

undefined8
CallableCustomStaticMethodPointer<void,String_const&,String_const&,String_const&>::is_valid(void)

{
  return 1;
}



/* CallableCustomStaticMethodPointer<void, String const&, String const&, String
   const&>::get_object() const */

undefined8
CallableCustomStaticMethodPointer<void,String_const&,String_const&,String_const&>::get_object(void)

{
  return 0;
}



/* CallableCustomStaticMethodPointer<void, String const&, String const&, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomStaticMethodPointer<void,String_const&,String_const&,String_const&>::
get_argument_count(CallableCustomStaticMethodPointer<void,String_const&,String_const&,String_const&>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomStaticMethodPointer<void, String const&, String const&, String
   const&>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<void,String_const&,String_const&,String_const&>::
~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<void,String_const&,String_const&,String_const&> *this)

{
  operator_delete(this,0x30);
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



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00121f40;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00121f40;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* SortArray<StringName, StringName::AlphCompare, true>::adjust_heap(long, long, long, StringName,
   StringName*) const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::adjust_heap
               (long param_1,long param_2,long param_3,StringName *param_4,long param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  StringName *pSVar13;
  StringName *this;
  long lVar14;
  long in_FS_OFFSET;
  StringName *local_50;
  long local_48;
  long local_40;
  
  lVar11 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar14 = param_2;
  if (lVar11 < param_3) {
    do {
      lVar9 = lVar11 + -1;
      this = (StringName *)(param_5 + (lVar9 + param_1) * 8);
      pSVar13 = (StringName *)(param_5 + (param_1 + lVar11) * 8);
      lVar6 = *(long *)this;
      lVar5 = *(long *)pSVar13;
      if (lVar5 == 0) {
        if (lVar6 != 0) {
          pbVar10 = *(byte **)(lVar6 + 8);
          uVar8 = 0;
          pbVar12 = &_LC0;
LAB_00113ccc:
          if (pbVar10 == (byte *)0x0) {
            lVar5 = 0;
            uVar3 = **(uint **)(lVar6 + 0x10);
            if (uVar3 != 0 || uVar8 != 0) {
              do {
                if (uVar8 == 0) goto LAB_00113c80;
                if (uVar3 == 0) break;
                if (uVar8 < uVar3) goto LAB_00113c80;
                if (uVar3 < uVar8) break;
                uVar8 = (uint)(char)pbVar12[lVar5 + 1];
                uVar3 = (*(uint **)(lVar6 + 0x10))[lVar5 + 1];
                lVar5 = lVar5 + 1;
              } while (uVar8 != 0 || uVar3 != 0);
            }
          }
          else {
            uVar3 = (uint)(char)*pbVar10;
            bVar4 = (byte)uVar8 | *pbVar10;
LAB_00113d1e:
            if (bVar4 != 0) {
              lVar6 = 1;
              do {
                if (uVar8 == 0) goto LAB_00113c80;
                if (uVar3 == 0) break;
                if (uVar8 < uVar3) goto LAB_00113c80;
                if (uVar3 < uVar8) break;
                pbVar1 = pbVar12 + lVar6;
                uVar8 = (uint)(char)*pbVar1;
                pbVar2 = pbVar10 + lVar6;
                uVar3 = (uint)(char)*pbVar2;
                lVar6 = lVar6 + 1;
              } while (*pbVar1 != 0 || *pbVar2 != 0);
            }
          }
        }
      }
      else {
        pbVar12 = *(byte **)(lVar5 + 8);
        if (lVar6 == 0) {
          if (pbVar12 != (byte *)0x0) {
            bVar4 = *pbVar12;
            uVar8 = (uint)(char)bVar4;
            pbVar10 = &_LC0;
            uVar3 = 0;
            goto LAB_00113d1e;
          }
          uVar8 = 0;
          pbVar10 = &_LC0;
        }
        else {
          pbVar10 = *(byte **)(lVar6 + 8);
          if (pbVar12 != (byte *)0x0) {
            uVar8 = (uint)(char)*pbVar12;
            goto LAB_00113ccc;
          }
          if (pbVar10 == (byte *)0x0) {
            lVar7 = 4;
            uVar8 = **(uint **)(lVar6 + 0x10);
            uVar3 = **(uint **)(lVar5 + 0x10);
            if (uVar8 != 0 || uVar3 != 0) {
              do {
                if (uVar3 == 0) goto LAB_00113c80;
                if (uVar8 == 0) break;
                if (uVar3 < uVar8) goto LAB_00113c80;
                if (uVar8 < uVar3) break;
                uVar3 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar7);
                uVar8 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
                lVar7 = lVar7 + 4;
              } while (uVar3 != 0 || uVar8 != 0);
            }
            goto LAB_00113ca8;
          }
          uVar8 = (uint)(char)*pbVar10;
        }
        lVar6 = 0;
        uVar3 = **(uint **)(lVar5 + 0x10);
        if (uVar3 != 0 || uVar8 != 0) {
          do {
            if (uVar3 == 0) goto LAB_00113c80;
            if (uVar8 == 0) break;
            if (uVar3 < uVar8) goto LAB_00113c80;
            if (uVar8 < uVar3) break;
            uVar3 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
            uVar8 = (uint)(char)pbVar10[lVar6 + 1];
            lVar6 = lVar6 + 1;
          } while (uVar3 != 0 || uVar8 != 0);
        }
      }
LAB_00113ca8:
      lVar9 = lVar11;
      this = pSVar13;
      lVar11 = lVar11 + 1;
LAB_00113c80:
      lVar11 = lVar11 * 2;
      StringName::operator=((StringName *)(param_5 + (lVar14 + param_1) * 8),this);
      lVar14 = lVar9;
    } while (lVar11 < param_3);
    pSVar13 = this;
    if (lVar11 == param_3) goto LAB_001140e8;
  }
  else {
    this = (StringName *)(param_5 + (param_2 + param_1) * 8);
    if (lVar11 != param_3) {
      StringName::StringName((StringName *)&local_48,param_4);
      goto LAB_00113ec2;
    }
LAB_001140e8:
    lVar9 = lVar11 + -1;
    pSVar13 = (StringName *)(param_5 + (param_1 + lVar9) * 8);
    StringName::operator=(this,pSVar13);
  }
  StringName::StringName((StringName *)&local_48,param_4);
  lVar11 = (lVar9 + -1) - (lVar9 + -1 >> 0x3f);
  this = pSVar13;
  while (param_2 < lVar9) {
    lVar14 = lVar11 >> 1;
    this = (StringName *)(param_5 + (param_1 + lVar14) * 8);
    lVar11 = *(long *)this;
    if (lVar11 == 0) {
      if (local_48 != 0) {
        pbVar10 = *(byte **)(local_48 + 8);
        uVar3 = 0;
        uVar8 = 0;
        pbVar12 = &_LC0;
        if (pbVar10 != (byte *)0x0) goto LAB_00113f83;
LAB_00113f25:
        uVar8 = **(uint **)(local_48 + 0x10);
        if (uVar8 != 0 || uVar3 != 0) {
          lVar11 = 0;
          while (uVar3 != 0) {
            if (uVar8 == 0) goto LAB_00113eb8;
            if (uVar3 < uVar8) break;
            if (uVar8 < uVar3) goto LAB_00113eb8;
            uVar3 = (uint)(char)pbVar12[lVar11 + 1];
            uVar8 = (*(uint **)(local_48 + 0x10))[lVar11 + 1];
            lVar11 = lVar11 + 1;
            if (uVar3 == 0 && uVar8 == 0) goto LAB_00113eb8;
          }
          goto LAB_00113e80;
        }
      }
LAB_00113eb8:
      this = (StringName *)(param_5 + (lVar9 + param_1) * 8);
      break;
    }
    pbVar12 = *(byte **)(lVar11 + 8);
    if (local_48 == 0) {
      uVar8 = 0;
      pbVar10 = &_LC0;
      if (pbVar12 != (byte *)0x0) {
        bVar4 = *pbVar12;
        uVar8 = (uint)(char)bVar4;
        pbVar10 = &_LC0;
        uVar3 = 0;
        goto LAB_00113f89;
      }
LAB_00113fea:
      uVar3 = **(uint **)(lVar11 + 0x10);
      if (uVar3 == 0 && uVar8 == 0) goto LAB_00113eb8;
      lVar6 = 0;
      while (uVar3 != 0) {
        if (uVar8 == 0) goto LAB_00113eb8;
        if (uVar3 < uVar8) break;
        if (uVar8 < uVar3) goto LAB_00113eb8;
        uVar3 = (*(uint **)(lVar11 + 0x10))[lVar6 + 1];
        uVar8 = (uint)(char)pbVar10[lVar6 + 1];
        lVar6 = lVar6 + 1;
        if (uVar3 == 0 && uVar8 == 0) goto LAB_00113eb8;
      }
    }
    else {
      pbVar10 = *(byte **)(local_48 + 8);
      if (pbVar12 == (byte *)0x0) {
        if (pbVar10 != (byte *)0x0) {
          uVar8 = (uint)(char)*pbVar10;
          goto LAB_00113fea;
        }
        uVar8 = **(uint **)(local_48 + 0x10);
        uVar3 = **(uint **)(lVar11 + 0x10);
        if (uVar8 == 0 && uVar3 == 0) goto LAB_00113eb8;
        lVar6 = 4;
        while (uVar3 != 0) {
          if (uVar8 == 0) goto LAB_00113eb8;
          if (uVar3 < uVar8) break;
          if (uVar8 < uVar3) goto LAB_00113eb8;
          uVar3 = *(uint *)((long)*(uint **)(lVar11 + 0x10) + lVar6);
          uVar8 = *(uint *)((long)*(uint **)(local_48 + 0x10) + lVar6);
          lVar6 = lVar6 + 4;
          if (uVar3 == 0 && uVar8 == 0) {
            this = (StringName *)(param_5 + (param_1 + lVar9) * 8);
            goto LAB_00113ec2;
          }
        }
      }
      else {
        uVar3 = (uint)(char)*pbVar12;
        uVar8 = uVar3;
        if (pbVar10 == (byte *)0x0) goto LAB_00113f25;
LAB_00113f83:
        uVar3 = (uint)(char)*pbVar10;
        bVar4 = (byte)uVar8 | *pbVar10;
LAB_00113f89:
        if (bVar4 == 0) goto LAB_00113eb8;
        lVar11 = 1;
        while (uVar8 != 0) {
          if (uVar3 == 0) goto LAB_00113eb8;
          if (uVar8 < uVar3) break;
          if (uVar3 < uVar8) goto LAB_00113eb8;
          pbVar1 = pbVar12 + lVar11;
          uVar8 = (uint)(char)*pbVar1;
          pbVar2 = pbVar10 + lVar11;
          uVar3 = (uint)(char)*pbVar2;
          lVar11 = lVar11 + 1;
          if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00113eb8;
        }
      }
    }
LAB_00113e80:
    StringName::operator=((StringName *)(param_5 + (lVar9 + param_1) * 8),this);
    lVar11 = (lVar14 + -1) - (lVar14 + -1 >> 0x3f);
    lVar9 = lVar14;
  }
LAB_00113ec2:
  local_50 = (StringName *)&local_48;
  StringName::operator=(this,local_50);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<StringName, StringName::AlphCompare, true>::unguarded_linear_insert(long, StringName,
   StringName*) const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::unguarded_linear_insert
               (long param_1,StringName *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  StringName *pSVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  pSVar3 = (StringName *)(param_3 + -8 + param_1 * 8);
  lVar6 = *(long *)pSVar3;
  lVar5 = *(long *)param_2;
  do {
    if (lVar5 == 0) {
      if (lVar6 == 0) goto LAB_0011438b;
      pbVar10 = *(byte **)(lVar6 + 8);
      uVar8 = 0;
      pbVar11 = &_LC0;
LAB_00114291:
      if (pbVar10 == (byte *)0x0) {
        uVar9 = **(uint **)(lVar6 + 0x10);
        if (uVar9 == 0 && uVar8 == 0) goto LAB_0011438b;
        lVar5 = 0;
        while (uVar8 != 0) {
          if (uVar9 == 0) goto LAB_0011438b;
          if (uVar8 < uVar9) break;
          if (uVar9 < uVar8) goto LAB_0011438b;
          uVar8 = (uint)(char)pbVar11[lVar5 + 1];
          uVar9 = (*(uint **)(lVar6 + 0x10))[lVar5 + 1];
          lVar5 = lVar5 + 1;
          if (uVar8 == 0 && uVar9 == 0) goto LAB_0011438b;
        }
      }
      else {
        uVar9 = (uint)(char)*pbVar10;
        bVar4 = (byte)uVar8 | *pbVar10;
LAB_001142ee:
        if (bVar4 == 0) goto LAB_0011438b;
        lVar6 = 1;
        while (uVar8 != 0) {
          if (uVar9 == 0) goto LAB_0011438b;
          if (uVar8 < uVar9) break;
          if (uVar9 < uVar8) goto LAB_0011438b;
          pbVar1 = pbVar11 + lVar6;
          uVar8 = (uint)(char)*pbVar1;
          pbVar2 = pbVar10 + lVar6;
          uVar9 = (uint)(char)*pbVar2;
          lVar6 = lVar6 + 1;
          if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_0011438b;
        }
      }
    }
    else {
      pbVar11 = *(byte **)(lVar5 + 8);
      if (lVar6 == 0) {
        if (pbVar11 != (byte *)0x0) {
          bVar4 = *pbVar11;
          uVar8 = (uint)(char)bVar4;
          pbVar10 = &_LC0;
          uVar9 = 0;
          goto LAB_001142ee;
        }
        uVar8 = 0;
        pbVar10 = &_LC0;
LAB_00114207:
        uVar9 = **(uint **)(lVar5 + 0x10);
        if (uVar9 == 0 && uVar8 == 0) goto LAB_0011438b;
        lVar6 = 0;
        while (uVar9 != 0) {
          if (uVar8 == 0) goto LAB_0011438b;
          if (uVar9 < uVar8) break;
          if (uVar8 < uVar9) goto LAB_0011438b;
          uVar9 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
          uVar8 = (uint)(char)pbVar10[lVar6 + 1];
          lVar6 = lVar6 + 1;
          if (uVar9 == 0 && uVar8 == 0) goto LAB_0011438b;
        }
      }
      else {
        pbVar10 = *(byte **)(lVar6 + 8);
        if (pbVar11 != (byte *)0x0) {
          uVar8 = (uint)(char)*pbVar11;
          goto LAB_00114291;
        }
        if (pbVar10 != (byte *)0x0) {
          uVar8 = (uint)(char)*pbVar10;
          goto LAB_00114207;
        }
        uVar8 = **(uint **)(lVar6 + 0x10);
        uVar9 = **(uint **)(lVar5 + 0x10);
        if (uVar8 == 0 && uVar9 == 0) goto LAB_0011438b;
        lVar7 = 4;
        while (uVar9 != 0) {
          if (uVar8 == 0) goto LAB_0011438b;
          if (uVar9 < uVar8) break;
          if (uVar8 < uVar9) goto LAB_0011438b;
          uVar9 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar7);
          uVar8 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
          lVar7 = lVar7 + 4;
          if (uVar9 == 0 && uVar8 == 0) goto LAB_0011438b;
        }
      }
    }
    param_1 = param_1 + -1;
    if (param_1 == 0) {
      param_1 = 1;
      _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                       "bad comparison function; sorting will be broken",0,0);
LAB_0011438b:
      StringName::operator=((StringName *)(param_3 + param_1 * 8),param_2);
      return;
    }
    StringName::operator=(pSVar3 + 8,pSVar3);
    lVar5 = *(long *)param_2;
    lVar6 = *(long *)(pSVar3 + -8);
    pSVar3 = pSVar3 + -8;
  } while( true );
}



/* SortArray<StringName, StringName::AlphCompare, true>::linear_insert(long, long, StringName*)
   const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::linear_insert
               (long param_1,long param_2,StringName *param_3)

{
  StringName *this;
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  StringName *this_00;
  byte *pbVar8;
  byte *pbVar9;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  this = param_3 + param_1 * 8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_50,param_3 + param_2 * 8);
  if (local_50 == 0) {
    lVar4 = *(long *)this;
    if (lVar4 != 0) {
      pbVar8 = *(byte **)(lVar4 + 8);
      uVar6 = 0;
      pbVar9 = &_LC0;
LAB_00114568:
      if (pbVar8 == (byte *)0x0) {
        uVar7 = **(uint **)(lVar4 + 0x10);
        if (uVar6 != 0 || uVar7 != 0) {
          lVar5 = 0;
          do {
            if (uVar6 == 0) goto LAB_001144c0;
            if (uVar7 == 0) break;
            if (uVar6 < uVar7) goto LAB_001144c0;
            if (uVar7 < uVar6) break;
            uVar6 = (uint)(char)pbVar9[lVar5 + 1];
            uVar7 = (*(uint **)(lVar4 + 0x10))[lVar5 + 1];
            lVar5 = lVar5 + 1;
          } while (uVar6 != 0 || uVar7 != 0);
        }
      }
      else {
        uVar7 = (uint)(char)*pbVar8;
        bVar3 = *pbVar8 | (byte)uVar6;
LAB_00114610:
        if (bVar3 != 0) {
          lVar4 = 1;
          do {
            if (uVar6 == 0) goto LAB_001144c0;
            if (uVar7 == 0) break;
            if (uVar6 < uVar7) goto LAB_001144c0;
            if (uVar7 < uVar6) break;
            pbVar1 = pbVar9 + lVar4;
            uVar6 = (uint)(char)*pbVar1;
            pbVar2 = pbVar8 + lVar4;
            uVar7 = (uint)(char)*pbVar2;
            lVar4 = lVar4 + 1;
          } while (*pbVar1 != 0 || *pbVar2 != 0);
        }
      }
    }
  }
  else {
    lVar4 = *(long *)this;
    pbVar9 = *(byte **)(local_50 + 8);
    if (lVar4 == 0) {
      if (pbVar9 != (byte *)0x0) {
        bVar3 = *pbVar9;
        uVar6 = (uint)(char)bVar3;
        pbVar8 = &_LC0;
        uVar7 = 0;
        goto LAB_00114610;
      }
      uVar6 = 0;
      pbVar8 = &_LC0;
    }
    else {
      pbVar8 = *(byte **)(lVar4 + 8);
      if (pbVar9 != (byte *)0x0) {
        uVar6 = (uint)(char)*pbVar9;
        goto LAB_00114568;
      }
      if (pbVar8 == (byte *)0x0) {
        uVar6 = **(uint **)(lVar4 + 0x10);
        uVar7 = **(uint **)(local_50 + 0x10);
        if (uVar6 != 0 || uVar7 != 0) {
          lVar5 = 4;
          do {
            if (uVar7 == 0) goto LAB_001144c0;
            if (uVar6 == 0) break;
            if (uVar7 < uVar6) goto LAB_001144c0;
            if (uVar6 < uVar7) break;
            uVar7 = *(uint *)((long)*(uint **)(local_50 + 0x10) + lVar5);
            uVar6 = *(uint *)((long)*(uint **)(lVar4 + 0x10) + lVar5);
            lVar5 = lVar5 + 4;
          } while (uVar7 != 0 || uVar6 != 0);
        }
        goto LAB_001145b8;
      }
      uVar6 = (uint)(char)*pbVar8;
    }
    uVar7 = **(uint **)(local_50 + 0x10);
    if (uVar6 != 0 || uVar7 != 0) {
      lVar4 = 0;
      do {
        if (uVar7 == 0) goto LAB_001144c0;
        if (uVar6 == 0) break;
        if (uVar7 < uVar6) goto LAB_001144c0;
        if (uVar6 < uVar7) break;
        uVar7 = (*(uint **)(local_50 + 0x10))[lVar4 + 1];
        uVar6 = (uint)(char)pbVar8[lVar4 + 1];
        lVar4 = lVar4 + 1;
      } while (uVar7 != 0 || uVar6 != 0);
    }
  }
LAB_001145b8:
  StringName::StringName((StringName *)&local_48,(StringName *)&local_50);
  unguarded_linear_insert(param_2,(StringName *)&local_48,param_3);
  if (StringName::configured == '\0') goto LAB_00114506;
  if (local_48 != 0) {
    StringName::unref();
    goto LAB_001144f2;
  }
  goto LAB_001144f6;
LAB_001144c0:
  this_00 = param_3 + param_2 * 8;
  if (param_1 < param_2) {
    do {
      param_2 = param_2 + -1;
      StringName::operator=(this_00,this_00 + -8);
      this_00 = this_00 + -8;
    } while (param_1 != param_2);
  }
  StringName::operator=(this,(StringName *)&local_50);
LAB_001144f2:
  if (StringName::configured == '\0') goto LAB_00114506;
LAB_001144f6:
  if (local_50 != 0) {
    StringName::unref();
  }
LAB_00114506:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SortArray<StringName, StringName::AlphCompare, true>::median_of_3(StringName const&, StringName
   const&, StringName const&) const [clone .isra.0] */

StringName *
SortArray<StringName,StringName::AlphCompare,true>::median_of_3
          (StringName *param_1,StringName *param_2,StringName *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  byte bVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  
  lVar8 = *(long *)param_1;
  lVar9 = *(long *)param_3;
  lVar13 = *(long *)param_2;
  if (lVar8 == 0) {
    pbVar15 = &_LC0;
    pbVar16 = &_LC0;
    if (lVar13 == 0) {
LAB_00114ff0:
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
LAB_001148be:
        uVar5 = (uint)(char)*pbVar16;
        uVar4 = uVar5;
        goto LAB_001148c4;
      }
      uVar5 = (uint)(char)*pbVar16;
      uVar6 = 0;
      uVar12 = 0;
      pbVar17 = &_LC0;
      if (*pbVar16 == 0) goto LAB_00114bb9;
LAB_00114a12:
      lVar8 = 1;
      do {
        if (uVar5 == 0) {
          return param_1;
        }
        if (uVar6 == 0) break;
        if (uVar5 < uVar6) {
          return param_1;
        }
        if (uVar6 < uVar5) break;
        pbVar2 = pbVar16 + lVar8;
        uVar5 = (uint)(char)*pbVar2;
        pbVar1 = pbVar17 + lVar8;
        uVar6 = (uint)(char)*pbVar1;
        lVar8 = lVar8 + 1;
      } while (*pbVar2 != 0 || *pbVar1 != 0);
    }
    else {
      pbVar15 = *(byte **)(lVar13 + 8);
      uVar4 = 0;
      pbVar16 = &_LC0;
LAB_00114842:
      if (pbVar15 != (byte *)0x0) {
        uVar12 = (uint)(char)*pbVar15;
        bVar11 = *pbVar15 | (byte)uVar4;
LAB_00114930:
        if (bVar11 != 0) {
          lVar14 = 1;
          do {
            if (uVar4 == 0) goto joined_r0x00114978;
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) goto joined_r0x00114978;
            if (uVar12 < uVar4) break;
            pbVar17 = pbVar16 + lVar14;
            uVar4 = (uint)(char)*pbVar17;
            pbVar2 = pbVar15 + lVar14;
            uVar12 = (uint)(char)*pbVar2;
            lVar14 = lVar14 + 1;
          } while (*pbVar17 != 0 || *pbVar2 != 0);
          goto LAB_001148a8;
        }
        goto LAB_00114ff0;
      }
      uVar12 = **(uint **)(lVar13 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar14 = 0;
        do {
          if (uVar4 == 0) goto joined_r0x00114978;
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) goto joined_r0x00114978;
          if (uVar12 < uVar4) break;
          uVar4 = (uint)(char)pbVar16[lVar14 + 1];
          uVar12 = (*(uint **)(lVar13 + 0x10))[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
        goto LAB_001148a8;
      }
      if (lVar9 == 0) goto LAB_00114c11;
      pbVar17 = *(byte **)(lVar9 + 8);
      uVar5 = 0;
LAB_001148c4:
      if (pbVar17 != (byte *)0x0) {
        uVar6 = (uint)(char)*pbVar17;
        bVar11 = (byte)uVar4 | *pbVar17;
        goto LAB_00114a09;
      }
      puVar10 = *(uint **)(lVar9 + 0x10);
      uVar4 = *puVar10;
      uVar6 = uVar4 | uVar5;
      if (uVar6 == 0) goto LAB_00114ef6;
      lVar8 = 0;
      do {
        if (uVar5 == 0) {
          return param_1;
        }
        if (uVar4 == 0) break;
        if (uVar5 < uVar4) {
          return param_1;
        }
        if (uVar4 < uVar5) break;
        uVar5 = (uint)(char)pbVar16[lVar8 + 1];
        uVar4 = puVar10[lVar8 + 1];
        lVar8 = lVar8 + 1;
      } while (uVar5 != 0 || uVar4 != 0);
    }
LAB_00114ba0:
    if (pbVar15 == (byte *)0x0) {
      if (pbVar17 == (byte *)0x0) {
        puVar10 = *(uint **)(lVar9 + 0x10);
LAB_00114eff:
        uVar4 = *puVar10;
        uVar12 = **(uint **)(lVar13 + 0x10);
        if (uVar12 == 0 && uVar4 == 0) {
          return param_2;
        }
        lVar8 = 4;
        while( true ) {
          if (uVar12 == 0) {
            return param_3;
          }
          if (uVar4 == 0) {
            return param_2;
          }
          if (uVar12 < uVar4) {
            return param_3;
          }
          if (uVar4 < uVar12) break;
          uVar12 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar8);
          uVar4 = *(uint *)((long)puVar10 + lVar8);
          lVar8 = lVar8 + 4;
          if (uVar12 == 0 && uVar4 == 0) {
            return param_2;
          }
        }
        return param_2;
      }
      uVar12 = (uint)(char)*pbVar17;
LAB_00114d86:
      uVar4 = **(uint **)(lVar13 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar8 = 0;
        do {
          if (uVar4 == 0) {
            return param_3;
          }
          if (uVar12 == 0) {
            return param_2;
          }
          if (uVar4 < uVar12) {
            return param_3;
          }
          if (uVar12 < uVar4) {
            return param_2;
          }
          uVar4 = (*(uint **)(lVar13 + 0x10))[lVar8 + 1];
          uVar12 = (uint)(char)pbVar17[lVar8 + 1];
          lVar8 = lVar8 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
      }
      return param_2;
    }
    if (pbVar17 == (byte *)0x0) {
      puVar10 = *(uint **)(lVar9 + 0x10);
      uVar6 = *puVar10;
LAB_00114de8:
      uVar4 = (uint)(char)*pbVar15;
      if (uVar4 == 0 && uVar6 == 0) {
        return param_2;
      }
      lVar8 = 0;
      while( true ) {
        if (uVar4 == 0) {
          return param_3;
        }
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar4 < uVar6) {
          return param_3;
        }
        if (uVar6 < uVar4) break;
        uVar4 = (uint)(char)pbVar15[lVar8 + 1];
        uVar6 = puVar10[lVar8 + 1];
        lVar8 = lVar8 + 1;
        if (uVar4 == 0 && uVar6 == 0) {
          return param_2;
        }
      }
      return param_2;
    }
    uVar12 = (uint)(char)*pbVar17;
    uVar5 = uVar12;
  }
  else {
    pbVar16 = *(byte **)(lVar8 + 8);
    if (lVar13 == 0) {
      if (pbVar16 != (byte *)0x0) {
        bVar11 = *pbVar16;
        uVar4 = (uint)(char)bVar11;
        uVar12 = 0;
        pbVar15 = &_LC0;
        goto LAB_00114930;
      }
      uVar4 = 0;
      pbVar15 = &_LC0;
LAB_00114729:
      uVar12 = **(uint **)(lVar8 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar14 = 0;
        do {
          if (uVar12 == 0) goto joined_r0x00114978;
          if (uVar4 == 0) break;
          if (uVar12 < uVar4) goto joined_r0x00114978;
          if (uVar4 < uVar12) break;
          uVar12 = (*(uint **)(lVar8 + 0x10))[lVar14 + 1];
          uVar4 = (uint)(char)pbVar15[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (uVar12 != 0 || uVar4 != 0);
      }
LAB_001148a8:
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
        if (pbVar16 != (byte *)0x0) goto LAB_001148be;
        puVar7 = *(uint **)(lVar8 + 0x10);
        uVar4 = *puVar7;
LAB_00114ca8:
        if (pbVar17 != (byte *)0x0) {
          uVar12 = (uint)(char)*pbVar17;
          uVar6 = uVar4 | uVar12;
          goto LAB_00114f63;
        }
        puVar10 = *(uint **)(lVar9 + 0x10);
        uVar12 = *puVar10;
        uVar6 = uVar12 | uVar4;
        if (uVar6 != 0) {
          lVar8 = 4;
          do {
            if (uVar4 == 0) {
              return param_1;
            }
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) {
              return param_1;
            }
            if (uVar12 < uVar4) break;
            uVar4 = *(uint *)((long)puVar7 + lVar8);
            uVar12 = *(uint *)((long)puVar10 + lVar8);
            lVar8 = lVar8 + 4;
          } while (uVar4 != 0 || uVar12 != 0);
          goto LAB_00114ba0;
        }
LAB_00114ef6:
        if (pbVar15 != (byte *)0x0) goto LAB_00114de8;
        goto LAB_00114eff;
      }
      if (pbVar16 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar8 + 0x10);
        goto LAB_00114fc1;
      }
LAB_00114c11:
      bVar11 = *pbVar16;
      uVar5 = (uint)(char)bVar11;
      uVar6 = 0;
      pbVar17 = &_LC0;
LAB_00114a09:
      uVar12 = uVar6;
      if (bVar11 != 0) goto LAB_00114a12;
    }
    else {
      pbVar15 = *(byte **)(lVar13 + 8);
      if (pbVar16 != (byte *)0x0) {
        uVar4 = (uint)(char)*pbVar16;
        goto LAB_00114842;
      }
      if (pbVar15 != (byte *)0x0) {
        uVar4 = (uint)(char)*pbVar15;
        goto LAB_00114729;
      }
      puVar7 = *(uint **)(lVar8 + 0x10);
      uVar12 = **(uint **)(lVar13 + 0x10);
      uVar4 = *puVar7;
      if (uVar12 != 0 || uVar4 != 0) {
        lVar14 = 4;
        do {
          if (uVar4 == 0) {
LAB_00114b18:
            pbVar16 = (byte *)0x0;
            goto joined_r0x00114978;
          }
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) goto LAB_00114b18;
          if (uVar12 < uVar4) break;
          uVar4 = *(uint *)((long)puVar7 + lVar14);
          uVar12 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar14);
          lVar14 = lVar14 + 4;
        } while (uVar4 != 0 || uVar12 != 0);
        pbVar16 = (byte *)0x0;
        goto LAB_001148a8;
      }
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
        uVar4 = 0;
        goto LAB_00114ca8;
      }
LAB_00114fc1:
      uVar4 = *puVar7;
      uVar12 = 0;
      pbVar17 = &_LC0;
      uVar6 = uVar4;
LAB_00114f63:
      if (uVar6 != 0) {
        lVar8 = 0;
        do {
          if (uVar4 == 0) {
            return param_1;
          }
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) {
            return param_1;
          }
          if (uVar12 < uVar4) break;
          uVar4 = puVar7[lVar8 + 1];
          uVar12 = (uint)(char)pbVar17[lVar8 + 1];
          lVar8 = lVar8 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
        goto LAB_00114ba0;
      }
    }
    uVar5 = uVar12;
    if (pbVar15 == (byte *)0x0) goto LAB_00114d86;
  }
LAB_00114bb9:
  bVar11 = *pbVar15;
  if (bVar11 == 0 && (char)uVar5 == '\0') {
    return param_2;
  }
  lVar8 = 1;
  while( true ) {
    uVar4 = (uint)(char)bVar11;
    if (uVar4 == 0) {
      return param_3;
    }
    if (uVar12 == 0) {
      return param_2;
    }
    if (uVar4 < uVar12) {
      return param_3;
    }
    if (uVar12 < uVar4) break;
    bVar11 = pbVar15[lVar8];
    pbVar16 = pbVar17 + lVar8;
    uVar12 = (uint)(char)*pbVar16;
    lVar8 = lVar8 + 1;
    if (bVar11 == 0 && *pbVar16 == 0) {
      return param_2;
    }
  }
  return param_2;
joined_r0x00114978:
  if (lVar9 == 0) {
    uVar4 = 0;
    uVar12 = 0;
    bVar11 = 0;
    pbVar17 = &_LC0;
    if (pbVar15 != (byte *)0x0) goto LAB_00114a67;
LAB_00114994:
    uVar6 = **(uint **)(lVar13 + 0x10);
    uVar4 = uVar6 | uVar12;
    if (uVar4 != 0) {
      lVar14 = 0;
      do {
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar12 == 0) break;
        if (uVar6 < uVar12) {
          return param_2;
        }
        if (uVar12 < uVar6) break;
        uVar6 = (*(uint **)(lVar13 + 0x10))[lVar14 + 1];
        uVar12 = (uint)(char)pbVar17[lVar14 + 1];
        lVar14 = lVar14 + 1;
      } while (uVar6 != 0 || uVar12 != 0);
      goto LAB_00114b30;
    }
LAB_00114ffe:
    bVar11 = (byte)uVar12;
    if (pbVar16 == (byte *)0x0) goto LAB_00114d1e;
  }
  else {
    pbVar17 = *(byte **)(lVar9 + 8);
    if (pbVar15 == (byte *)0x0) {
      if (pbVar17 != (byte *)0x0) {
        uVar12 = (uint)(char)*pbVar17;
        goto LAB_00114994;
      }
      puVar7 = *(uint **)(lVar9 + 0x10);
      uVar4 = *puVar7;
      uVar6 = **(uint **)(lVar13 + 0x10);
      uVar12 = uVar4 | uVar6;
      if (uVar12 == 0) goto LAB_00114e99;
      lVar14 = 4;
      do {
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar4 == 0) break;
        if (uVar6 < uVar4) {
          return param_2;
        }
        if (uVar4 < uVar6) break;
        uVar6 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar14);
        uVar4 = *(uint *)((long)puVar7 + lVar14);
        lVar14 = lVar14 + 4;
      } while (uVar6 != 0 || uVar4 != 0);
    }
    else {
      if (pbVar17 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar9 + 0x10);
        uVar6 = (uint)(char)*pbVar15;
        uVar4 = *puVar7;
        uVar12 = uVar4 | uVar6;
        if (uVar12 != 0) {
          lVar13 = 0;
          do {
            if (uVar6 == 0) {
              return param_2;
            }
            if (uVar4 == 0) break;
            if (uVar6 < uVar4) {
              return param_2;
            }
            if (uVar4 < uVar6) break;
            uVar6 = (uint)(char)pbVar15[lVar13 + 1];
            uVar4 = puVar7[lVar13 + 1];
            lVar13 = lVar13 + 1;
          } while (uVar6 != 0 || uVar4 != 0);
          goto LAB_00114b30;
        }
LAB_00114e99:
        if (pbVar16 == (byte *)0x0) goto LAB_00114e9e;
        goto LAB_00114e46;
      }
      bVar11 = *pbVar17;
      uVar4 = (uint)(char)bVar11;
LAB_00114a67:
      bVar3 = *pbVar15;
      uVar12 = (uint)(bVar11 | bVar3);
      if ((bVar11 | bVar3) == 0) goto LAB_00114ffe;
      lVar13 = 1;
      do {
        uVar12 = (uint)(char)bVar3;
        if (uVar12 == 0) {
          return param_2;
        }
        if (uVar4 == 0) break;
        if (uVar12 < uVar4) {
          return param_2;
        }
        if (uVar4 < uVar12) break;
        bVar3 = pbVar15[lVar13];
        pbVar2 = pbVar17 + lVar13;
        uVar4 = (uint)(char)*pbVar2;
        lVar13 = lVar13 + 1;
      } while (bVar3 != 0 || *pbVar2 != 0);
    }
LAB_00114b30:
    if (pbVar16 == (byte *)0x0) {
      if (pbVar17 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar9 + 0x10);
LAB_00114e9e:
        uVar4 = *puVar7;
        uVar12 = **(uint **)(lVar8 + 0x10);
        if (uVar12 == 0 && uVar4 == 0) {
          return param_1;
        }
        lVar9 = 4;
        while( true ) {
          if (uVar12 == 0) {
            return param_3;
          }
          if (uVar4 == 0) {
            return param_1;
          }
          if (uVar12 < uVar4) {
            return param_3;
          }
          if (uVar4 < uVar12) break;
          uVar12 = *(uint *)((long)*(uint **)(lVar8 + 0x10) + lVar9);
          uVar4 = *(uint *)((long)puVar7 + lVar9);
          lVar9 = lVar9 + 4;
          if (uVar12 == 0 && uVar4 == 0) {
            return param_1;
          }
        }
        return param_1;
      }
      uVar4 = (uint)(char)*pbVar17;
LAB_00114d1e:
      uVar12 = **(uint **)(lVar8 + 0x10);
      if (uVar12 == 0 && uVar4 == 0) {
        return param_1;
      }
      lVar9 = 0;
      while( true ) {
        if (uVar12 == 0) {
          return param_3;
        }
        if (uVar4 == 0) {
          return param_1;
        }
        if (uVar12 < uVar4) {
          return param_3;
        }
        if (uVar4 < uVar12) break;
        uVar12 = (*(uint **)(lVar8 + 0x10))[lVar9 + 1];
        uVar4 = (uint)(char)pbVar17[lVar9 + 1];
        lVar9 = lVar9 + 1;
        if (uVar12 == 0 && uVar4 == 0) {
          return param_1;
        }
      }
      return param_1;
    }
    if (pbVar17 == (byte *)0x0) {
      puVar7 = *(uint **)(lVar9 + 0x10);
      uVar12 = *puVar7;
LAB_00114e46:
      uVar4 = (uint)(char)*pbVar16;
      if (uVar4 == 0 && uVar12 == 0) {
        return param_1;
      }
      lVar8 = 0;
      while( true ) {
        if (uVar4 == 0) {
          return param_3;
        }
        if (uVar12 == 0) {
          return param_1;
        }
        if (uVar4 < uVar12) {
          return param_3;
        }
        if (uVar12 < uVar4) break;
        uVar4 = (uint)(char)pbVar16[lVar8 + 1];
        uVar12 = puVar7[lVar8 + 1];
        lVar8 = lVar8 + 1;
        if (uVar4 == 0 && uVar12 == 0) {
          return param_1;
        }
      }
      return param_1;
    }
    bVar11 = *pbVar17;
    uVar4 = (uint)(char)bVar11;
  }
  bVar3 = *pbVar16;
  if (bVar3 == 0 && bVar11 == 0) {
    return param_1;
  }
  lVar8 = 1;
  while( true ) {
    uVar12 = (uint)(char)bVar3;
    if (uVar12 == 0) {
      return param_3;
    }
    if (uVar4 == 0) {
      return param_1;
    }
    if (uVar12 < uVar4) {
      return param_3;
    }
    if (uVar4 < uVar12) break;
    bVar3 = pbVar16[lVar8];
    pbVar15 = pbVar17 + lVar8;
    uVar4 = (uint)(char)*pbVar15;
    lVar8 = lVar8 + 1;
    if (bVar3 == 0 && *pbVar15 == 0) {
      return param_1;
    }
  }
  return param_1;
}



/* SortArray<StringName, StringName::AlphCompare, true>::partitioner(long, long, StringName,
   StringName*) const [clone .isra.0] */

long SortArray<StringName,StringName::AlphCompare,true>::partitioner
               (long param_1,long param_2,long *param_3,long param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  byte bVar12;
  byte *pbVar13;
  long *plVar14;
  
  lVar10 = *param_3;
  lVar3 = *(long *)(param_4 + param_1 * 8);
  lVar9 = param_1;
  lVar8 = param_2;
joined_r0x0011509f:
  if (lVar3 == 0) {
    if (lVar10 == 0) goto LAB_001151c0;
    pbVar5 = *(byte **)(lVar10 + 8);
    uVar6 = 0;
    pbVar13 = &_LC0;
LAB_00115156:
    if (pbVar5 == (byte *)0x0) {
      uVar7 = **(uint **)(lVar10 + 0x10);
      if (uVar7 != 0 || uVar6 != 0) {
        lVar3 = 0;
        do {
          if (uVar6 == 0) goto LAB_00115120;
          if (uVar7 == 0) break;
          if (uVar6 < uVar7) goto LAB_00115120;
          if (uVar7 < uVar6) break;
          uVar6 = (uint)(char)pbVar13[lVar3 + 1];
          uVar7 = (*(uint **)(lVar10 + 0x10))[lVar3 + 1];
          lVar3 = lVar3 + 1;
        } while (uVar6 != 0 || uVar7 != 0);
      }
      goto LAB_001151c0;
    }
    uVar7 = (uint)(char)*pbVar5;
    bVar12 = (byte)uVar6 | *pbVar5;
LAB_00115496:
    if (bVar12 != 0) {
      lVar3 = 1;
      do {
        if (uVar6 == 0) goto LAB_00115120;
        if (uVar7 == 0) break;
        if (uVar6 < uVar7) goto LAB_00115120;
        if (uVar7 < uVar6) break;
        pbVar1 = pbVar13 + lVar3;
        uVar6 = (uint)(char)*pbVar1;
        pbVar2 = pbVar5 + lVar3;
        uVar7 = (uint)(char)*pbVar2;
        lVar3 = lVar3 + 1;
      } while (*pbVar1 != 0 || *pbVar2 != 0);
    }
  }
  else {
    pbVar13 = *(byte **)(lVar3 + 8);
    if (lVar10 == 0) {
      if (pbVar13 != (byte *)0x0) {
        bVar12 = *pbVar13;
        uVar6 = (uint)(char)bVar12;
        uVar7 = 0;
        pbVar5 = &_LC0;
        goto LAB_00115496;
      }
      uVar6 = 0;
      pbVar5 = &_LC0;
    }
    else {
      pbVar5 = *(byte **)(lVar10 + 8);
      if (pbVar13 != (byte *)0x0) {
        uVar6 = (uint)(char)*pbVar13;
        goto LAB_00115156;
      }
      if (pbVar5 == (byte *)0x0) {
        uVar6 = **(uint **)(lVar10 + 0x10);
        uVar7 = **(uint **)(lVar3 + 0x10);
        if (uVar6 != 0 || uVar7 != 0) {
          lVar4 = 4;
          do {
            if (uVar7 == 0) goto LAB_00115120;
            if (uVar6 == 0) break;
            if (uVar7 < uVar6) goto LAB_00115120;
            if (uVar6 < uVar7) break;
            uVar7 = *(uint *)((long)*(uint **)(lVar3 + 0x10) + lVar4);
            uVar6 = *(uint *)((long)*(uint **)(lVar10 + 0x10) + lVar4);
            lVar4 = lVar4 + 4;
          } while (uVar7 != 0 || uVar6 != 0);
        }
        goto LAB_001151c0;
      }
      uVar6 = (uint)(char)*pbVar5;
    }
    uVar7 = **(uint **)(lVar3 + 0x10);
    if (uVar7 != 0 || uVar6 != 0) {
      lVar4 = 0;
      do {
        if (uVar7 == 0) goto LAB_00115120;
        if (uVar6 == 0) break;
        if (uVar7 < uVar6) goto LAB_00115120;
        if (uVar6 < uVar7) break;
        uVar7 = (*(uint **)(lVar3 + 0x10))[lVar4 + 1];
        uVar6 = (uint)(char)pbVar5[lVar4 + 1];
        lVar4 = lVar4 + 1;
      } while (uVar7 != 0 || uVar6 != 0);
    }
  }
  goto LAB_001151c0;
LAB_00115120:
  if (param_2 + -1 == lVar9) {
    _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                     "bad comparison function; sorting will be broken",0,0);
    lVar10 = *param_3;
LAB_001151c0:
    plVar11 = (long *)(param_4 + -8 + lVar8 * 8);
LAB_001151d0:
    lVar8 = lVar8 + -1;
    lVar3 = *plVar11;
    if (lVar10 != 0) {
      pbVar13 = *(byte **)(lVar10 + 8);
      do {
        if (lVar3 == 0) {
          if (pbVar13 != (byte *)0x0) {
            bVar12 = *pbVar13;
            uVar7 = (uint)(char)bVar12;
            pbVar5 = &_LC0;
            uVar6 = 0;
            goto LAB_0011537e;
          }
          uVar6 = 0;
          pbVar5 = &_LC0;
LAB_0011529a:
          uVar7 = **(uint **)(lVar10 + 0x10);
          if (uVar7 == 0 && uVar6 == 0) goto LAB_001153f8;
          lVar3 = 0;
          while (uVar7 != 0) {
            if (uVar6 == 0) goto LAB_001153f8;
            if (uVar7 < uVar6) break;
            if (uVar6 < uVar7) goto LAB_001153f8;
            uVar7 = (*(uint **)(lVar10 + 0x10))[lVar3 + 1];
            uVar6 = (uint)(char)pbVar5[lVar3 + 1];
            lVar3 = lVar3 + 1;
            if (uVar7 == 0 && uVar6 == 0) goto LAB_001153f8;
          }
        }
        else {
          pbVar5 = *(byte **)(lVar3 + 8);
          if (pbVar13 != (byte *)0x0) goto LAB_001153c0;
          if (pbVar5 != (byte *)0x0) {
            uVar6 = (uint)(char)*pbVar5;
            goto LAB_0011529a;
          }
          uVar6 = **(uint **)(lVar3 + 0x10);
          uVar7 = **(uint **)(lVar10 + 0x10);
          if (uVar6 == 0 && uVar7 == 0) goto LAB_001153f8;
          lVar4 = 4;
          while (uVar7 != 0) {
            if (uVar6 == 0) goto LAB_001153f8;
            if (uVar7 < uVar6) break;
            if (uVar6 < uVar7) goto LAB_001153f8;
            uVar7 = *(uint *)((long)*(uint **)(lVar10 + 0x10) + lVar4);
            uVar6 = *(uint *)((long)*(uint **)(lVar3 + 0x10) + lVar4);
            lVar4 = lVar4 + 4;
            if (uVar7 == 0 && uVar6 == 0) goto LAB_001153f8;
          }
        }
        plVar14 = plVar11;
        if (param_1 == lVar8) goto LAB_001153d0;
        lVar3 = plVar11[-1];
        lVar8 = lVar8 + -1;
        plVar11 = plVar11 + -1;
      } while( true );
    }
    if (lVar3 != 0) {
      pbVar5 = *(byte **)(lVar3 + 8);
      uVar7 = 0;
      bVar12 = 0;
      pbVar13 = &_LC0;
      goto LAB_00115309;
    }
    goto LAB_001153f8;
  }
LAB_0011512e:
  lVar9 = lVar9 + 1;
  lVar3 = *(long *)(param_4 + lVar9 * 8);
  goto joined_r0x0011509f;
LAB_001153c0:
  bVar12 = *pbVar13;
  uVar7 = (uint)(char)bVar12;
LAB_00115309:
  if (pbVar5 == (byte *)0x0) {
    uVar6 = **(uint **)(lVar3 + 0x10);
    if (uVar6 == 0 && uVar7 == 0) goto LAB_001153f8;
    lVar4 = 0;
    while (plVar14 = plVar11, uVar7 != 0) {
      if (uVar6 == 0) goto LAB_001153f8;
      if (uVar7 < uVar6) break;
      if (uVar6 < uVar7) goto LAB_001153f8;
      uVar7 = (uint)(char)pbVar13[lVar4 + 1];
      uVar6 = (*(uint **)(lVar3 + 0x10))[lVar4 + 1];
      lVar4 = lVar4 + 1;
      if (uVar7 == 0 && uVar6 == 0) goto LAB_001153f8;
    }
  }
  else {
    uVar6 = (uint)(char)*pbVar5;
    bVar12 = bVar12 | *pbVar5;
LAB_0011537e:
    if (bVar12 == 0) goto LAB_001153f8;
    lVar3 = 1;
    while (plVar14 = plVar11, uVar7 != 0) {
      if (uVar6 == 0) goto LAB_001153f8;
      if (uVar7 < uVar6) break;
      if (uVar6 < uVar7) goto LAB_001153f8;
      pbVar1 = pbVar13 + lVar3;
      uVar7 = (uint)(char)*pbVar1;
      pbVar2 = pbVar5 + lVar3;
      uVar6 = (uint)(char)*pbVar2;
      lVar3 = lVar3 + 1;
      if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_001153f8;
    }
  }
  plVar11 = plVar14 + -1;
  if (param_1 == lVar8) goto LAB_001153d0;
  goto LAB_001151d0;
LAB_001153d0:
  plVar11 = plVar14;
  _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                   "bad comparison function; sorting will be broken",0,0);
LAB_001153f8:
  if (lVar8 <= lVar9) {
    return lVar9;
  }
  lVar3 = *(long *)(param_4 + lVar9 * 8);
  *(undefined8 *)(param_4 + lVar9 * 8) = 0;
  if (*plVar11 != 0) {
    StringName::unref();
    *(long *)(param_4 + lVar9 * 8) = *plVar11;
    *plVar11 = 0;
  }
  if (lVar3 != 0) {
    StringName::unref();
    *plVar11 = lVar3;
  }
  lVar10 = *param_3;
  goto LAB_0011512e;
}



/* SortArray<StringName, StringName::AlphCompare, true>::partial_sort(long, long, long, StringName*)
   const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::partial_sort
               (long param_1,long param_2,long param_3,StringName *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  bool bVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  StringName *pSVar13;
  long lVar14;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  lVar10 = param_3 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar10 < 2) {
    if (param_2 <= param_3) goto LAB_0011587b;
LAB_00115666:
    lVar14 = param_3;
LAB_001156a0:
    lVar6 = *(long *)(param_4 + lVar14 * 8);
    lVar5 = *(long *)(param_4 + param_1 * 8);
    if (lVar6 == 0) {
      if (lVar5 != 0) {
        pbVar11 = *(byte **)(lVar5 + 8);
        uVar8 = 0;
        pbVar12 = &_LC0;
LAB_001158b4:
        if (pbVar11 == (byte *)0x0) {
          uVar9 = **(uint **)(lVar5 + 0x10);
          if (uVar9 != 0 || uVar8 != 0) {
            lVar6 = 0;
            do {
              if (uVar8 == 0) goto LAB_00115720;
              if (uVar9 == 0) break;
              if (uVar8 < uVar9) goto LAB_00115720;
              if (uVar9 < uVar8) break;
              uVar8 = (uint)(char)pbVar12[lVar6 + 1];
              uVar9 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
              lVar6 = lVar6 + 1;
            } while (uVar8 != 0 || uVar9 != 0);
          }
        }
        else {
          uVar9 = (uint)(char)*pbVar11;
          bVar4 = (byte)uVar8 | *pbVar11;
LAB_00115916:
          if (bVar4 != 0) {
            lVar6 = 1;
            do {
              if (uVar8 == 0) goto LAB_00115720;
              if (uVar9 == 0) break;
              if (uVar8 < uVar9) goto LAB_00115720;
              if (uVar9 < uVar8) break;
              pbVar1 = pbVar12 + lVar6;
              uVar8 = (uint)(char)*pbVar1;
              pbVar2 = pbVar11 + lVar6;
              uVar9 = (uint)(char)*pbVar2;
              lVar6 = lVar6 + 1;
            } while (*pbVar1 != 0 || *pbVar2 != 0);
          }
        }
      }
    }
    else {
      pbVar12 = *(byte **)(lVar6 + 8);
      if (lVar5 == 0) {
        if (pbVar12 != (byte *)0x0) {
          bVar4 = *pbVar12;
          uVar8 = (uint)(char)bVar4;
          uVar9 = 0;
          pbVar11 = &_LC0;
          goto LAB_00115916;
        }
        uVar8 = 0;
        pbVar11 = &_LC0;
      }
      else {
        pbVar11 = *(byte **)(lVar5 + 8);
        if (pbVar12 != (byte *)0x0) {
          uVar8 = (uint)(char)*pbVar12;
          goto LAB_001158b4;
        }
        if (pbVar11 == (byte *)0x0) {
          uVar8 = **(uint **)(lVar5 + 0x10);
          uVar9 = **(uint **)(lVar6 + 0x10);
          if (uVar8 != 0 || uVar9 != 0) {
            lVar7 = 4;
            do {
              if (uVar9 == 0) goto LAB_00115720;
              if (uVar8 == 0) break;
              if (uVar9 < uVar8) goto LAB_00115720;
              if (uVar8 < uVar9) break;
              uVar9 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
              uVar8 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar7);
              lVar7 = lVar7 + 4;
            } while (uVar9 != 0 || uVar8 != 0);
          }
          goto LAB_001157a8;
        }
        uVar8 = (uint)(char)*pbVar11;
      }
      uVar9 = **(uint **)(lVar6 + 0x10);
      if (uVar9 != 0 || uVar8 != 0) {
        lVar5 = 0;
        do {
          if (uVar9 == 0) goto LAB_00115720;
          if (uVar8 == 0) break;
          if (uVar9 < uVar8) goto LAB_00115720;
          if (uVar8 < uVar9) break;
          uVar9 = (*(uint **)(lVar6 + 0x10))[lVar5 + 1];
          uVar8 = (uint)(char)pbVar11[lVar5 + 1];
          lVar5 = lVar5 + 1;
        } while (uVar9 != 0 || uVar8 != 0);
      }
    }
    goto LAB_001157a8;
  }
  lVar14 = lVar10 + -2 >> 1;
  pSVar13 = param_4 + (param_1 + lVar14) * 8;
  while( true ) {
    StringName::StringName((StringName *)&local_48,pSVar13);
    adjust_heap(param_1,lVar14,lVar10,(StringName *)&local_48,param_4);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    pSVar13 = pSVar13 + -8;
    if (lVar14 == 0) break;
    lVar14 = lVar14 + -1;
  }
  if (param_3 < param_2) goto LAB_00115666;
  goto LAB_001157db;
LAB_00115720:
  StringName::StringName((StringName *)&local_50,param_4 + lVar14 * 8);
  StringName::operator=(param_4 + lVar14 * 8,param_4 + param_1 * 8);
  StringName::StringName((StringName *)&local_48,(StringName *)&local_50);
  adjust_heap(param_1,0,lVar10,(StringName *)&local_48,param_4);
  if ((StringName::configured != '\0') &&
     (((local_48 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_50 != 0)))
     ) {
    StringName::unref();
  }
LAB_001157a8:
  lVar14 = lVar14 + 1;
  if (param_2 <= lVar14) goto code_r0x001157b5;
  goto LAB_001156a0;
code_r0x001157b5:
  if (lVar10 < 2) goto LAB_0011587b;
LAB_001157db:
  pSVar13 = param_4 + param_3 * 8 + -8;
  lVar10 = (param_3 + -1) - param_1;
  do {
    StringName::StringName((StringName *)&local_50,pSVar13);
    StringName::operator=(pSVar13,param_4 + param_1 * 8);
    StringName::StringName((StringName *)&local_48,(StringName *)&local_50);
    adjust_heap(param_1,0,lVar10,(StringName *)&local_48,param_4);
    if (((StringName::configured != '\0') &&
        ((local_48 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_50 != 0)) {
      StringName::unref();
    }
    pSVar13 = pSVar13 + -8;
    bVar3 = 1 < lVar10;
    lVar10 = lVar10 + -1;
  } while (bVar3);
LAB_0011587b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ResourceFormatSaver::_get_class_namev() const */

undefined8 * ResourceFormatSaver::_get_class_namev(void)

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
LAB_00115a63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00115a63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ResourceFormatSaver");
      goto LAB_00115ace;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ResourceFormatSaver");
LAB_00115ace:
  return &_get_class_namev()::_class_name_static;
}



/* ResourceFormatLoader::_get_class_namev() const */

undefined8 * ResourceFormatLoader::_get_class_namev(void)

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
LAB_00115b53:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00115b53;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ResourceFormatLoader");
      goto LAB_00115bbe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ResourceFormatLoader");
LAB_00115bbe:
  return &_get_class_namev()::_class_name_static;
}



/* RefCounted::_get_class_namev() const */

undefined8 * RefCounted::_get_class_namev(void)

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
LAB_00115c33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00115c33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00115c9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00115c9e:
  return &_get_class_namev()::_class_name_static;
}



/* ResourceFormatLoader::get_import_group_file(String const&) const */

String * ResourceFormatLoader::get_import_group_file(String *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  String::parse_latin1((StrRange *)param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<List<PropertyInfo, DefaultAllocator>::Element*, List<PropertyInfo,
   DefaultAllocator>::AuxiliaryComparator<Comparator<PropertyInfo> >, true>::introsort(long, long,
   List<PropertyInfo, DefaultAllocator>::Element**, long) const [clone .isra.0] */

void SortArray<List<PropertyInfo,DefaultAllocator>::Element*,List<PropertyInfo,DefaultAllocator>::AuxiliaryComparator<Comparator<PropertyInfo>>,true>
     ::introsort(long param_1,long param_2,Element **param_3,long param_4)

{
  Element **ppEVar1;
  Element *pEVar2;
  Element *pEVar3;
  char cVar4;
  Element **ppEVar5;
  long lVar6;
  long lVar7;
  Element **ppEVar8;
  long lVar9;
  Element **ppEVar10;
  long lVar11;
  long lVar12;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  Element **local_50;
  
  lVar9 = param_2 - param_1;
  if (lVar9 < 0x11) {
    return;
  }
  local_78 = param_2;
  if (param_4 != 0) {
    ppEVar8 = param_3 + param_1;
    local_68 = param_2;
    local_60 = param_4;
LAB_00115d91:
    local_60 = local_60 + -1;
    ppEVar1 = param_3 + (lVar9 >> 1) + param_1;
    ppEVar5 = param_3 + local_68 + -1;
    cVar4 = String::operator<((String *)(*ppEVar8 + 8),(String *)(*ppEVar1 + 8));
    if (cVar4 == '\0') {
      cVar4 = String::operator<((String *)(*ppEVar8 + 8),(String *)(*ppEVar5 + 8));
      ppEVar10 = ppEVar8;
      if (cVar4 != '\0') goto LAB_00115e0d;
      cVar4 = String::operator<((String *)(*ppEVar1 + 8),(String *)(*ppEVar5 + 8));
    }
    else {
      cVar4 = String::operator<((String *)(*ppEVar1 + 8),(String *)(*ppEVar5 + 8));
      ppEVar10 = ppEVar1;
      if (cVar4 != '\0') goto LAB_00115e0d;
      cVar4 = String::operator<((String *)(*ppEVar8 + 8),(String *)(*ppEVar5 + 8));
      ppEVar1 = ppEVar8;
    }
    ppEVar10 = ppEVar1;
    if (cVar4 != '\0') {
      ppEVar10 = ppEVar5;
    }
LAB_00115e0d:
    pEVar2 = *ppEVar10;
    lVar9 = local_68;
    local_78 = param_1;
    do {
      cVar4 = String::operator<((String *)(param_3[local_78] + 8),(String *)(pEVar2 + 8));
      if (cVar4 == '\0') {
LAB_00115e58:
        lVar9 = lVar9 + -1;
        ppEVar5 = param_3 + lVar9;
        while (cVar4 = String::operator<((String *)(pEVar2 + 8),(String *)(*ppEVar5 + 8)),
              cVar4 != '\0') {
          if (param_1 == lVar9) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          lVar9 = lVar9 + -1;
          ppEVar5 = ppEVar5 + -1;
        }
        if (lVar9 <= local_78) goto LAB_00115ed0;
        pEVar3 = param_3[local_78];
        param_3[local_78] = *ppEVar5;
        *ppEVar5 = pEVar3;
      }
      else if (local_68 + -1 == local_78) {
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                         "bad comparison function; sorting will be broken",0,0);
        goto LAB_00115e58;
      }
      local_78 = local_78 + 1;
    } while( true );
  }
LAB_00115fa2:
  lVar6 = lVar9 + -2 >> 1;
  local_50 = param_3 + param_1 + lVar6;
  local_58 = lVar6 * 2 + 2;
  do {
    pEVar2 = *local_50;
    lVar7 = local_58;
    local_70 = lVar6;
    if (local_58 < lVar9) {
      do {
        cVar4 = String::operator<((String *)(param_3[param_1 + lVar7] + 8),
                                  (String *)(param_3[param_1 + lVar7 + -1] + 8));
        ppEVar8 = param_3 + param_1 + lVar7 + -1;
        lVar11 = lVar7;
        lVar12 = lVar7 + -1;
        if (cVar4 == '\0') {
          lVar11 = lVar7 + 1;
          ppEVar8 = param_3 + param_1 + lVar7;
          lVar12 = lVar7;
        }
        lVar7 = lVar11 * 2;
        param_3[local_70 + param_1] = *ppEVar8;
        local_70 = lVar12;
      } while (lVar7 < lVar9);
      ppEVar5 = ppEVar8;
      if (lVar7 == lVar9) {
LAB_001162aa:
        lVar12 = lVar7 + -1;
        ppEVar8 = param_3 + param_1 + lVar12;
        *ppEVar5 = *ppEVar8;
      }
      if (lVar12 <= lVar6) goto LAB_001162fa;
      lVar7 = lVar12 + -1 >> 1;
      do {
        lVar11 = lVar7;
        ppEVar8 = param_3 + param_1 + lVar11;
        cVar4 = String::operator<((String *)(*ppEVar8 + 8),(String *)(pEVar2 + 8));
        if (cVar4 == '\0') {
          param_3[lVar12 + param_1] = pEVar2;
          goto joined_r0x00116142;
        }
        param_3[lVar12 + param_1] = *ppEVar8;
        lVar7 = (lVar11 + -1) / 2;
        lVar12 = lVar11;
      } while (lVar6 < lVar11);
      *ppEVar8 = pEVar2;
joined_r0x00116142:
      if (lVar6 == 0) goto LAB_00116144;
    }
    else {
      ppEVar5 = local_50;
      ppEVar8 = local_50;
      if (local_58 == lVar9) goto LAB_001162aa;
LAB_001162fa:
      *ppEVar8 = pEVar2;
    }
    local_50 = local_50 + -1;
    lVar6 = lVar6 + -1;
    local_58 = local_58 + -2;
  } while( true );
LAB_00115ed0:
  introsort(local_78,local_68,param_3,local_60);
  lVar9 = local_78 - param_1;
  if (lVar9 < 0x11) {
    return;
  }
  local_68 = local_78;
  if (local_60 == 0) goto LAB_00115fa2;
  goto LAB_00115d91;
LAB_00116144:
  ppEVar8 = param_3 + param_1;
  local_70 = (local_78 + -1) - param_1;
LAB_00116170:
  do {
    pEVar2 = ppEVar8[local_70];
    ppEVar8[local_70] = *ppEVar8;
    if (local_70 < 3) {
      if (local_70 != 2) {
        *ppEVar8 = pEVar2;
        return;
      }
      lVar9 = param_1 + 1;
      lVar6 = 0;
      *ppEVar8 = param_3[lVar9];
LAB_0011622a:
      while( true ) {
        ppEVar1 = param_3 + param_1 + lVar6;
        cVar4 = String::operator<((String *)(*ppEVar1 + 8),(String *)(pEVar2 + 8));
        ppEVar5 = param_3 + lVar9;
        if (cVar4 == '\0') break;
        *ppEVar5 = *ppEVar1;
        if (lVar6 == 0) {
          local_70 = local_70 + -1;
          *ppEVar1 = pEVar2;
          goto LAB_00116170;
        }
        lVar9 = param_1 + lVar6;
        lVar6 = (lVar6 + -1) / 2;
      }
    }
    else {
      local_78 = 0;
      lVar9 = 2;
      do {
        cVar4 = String::operator<((String *)(param_3[param_1 + lVar9] + 8),
                                  (String *)(param_3[param_1 + lVar9 + -1] + 8));
        lVar7 = lVar9 + -1;
        lVar6 = lVar9;
        ppEVar5 = param_3 + param_1 + lVar9 + -1;
        if (cVar4 == '\0') {
          lVar6 = lVar9 + 1;
          lVar7 = lVar9;
          ppEVar5 = param_3 + param_1 + lVar9;
        }
        lVar9 = lVar6 * 2;
        param_3[local_78 + param_1] = *ppEVar5;
        local_78 = lVar7;
      } while (lVar9 < local_70);
      if (lVar9 == local_70) {
        lVar9 = local_70 + -1 + param_1;
        lVar6 = local_70 + -2 >> 1;
        *ppEVar5 = param_3[lVar9];
        goto LAB_0011622a;
      }
      lVar9 = param_1 + lVar7;
      lVar6 = (lVar7 + -1) / 2;
      if (0 < lVar7) goto LAB_0011622a;
    }
    local_70 = local_70 + -1;
    *ppEVar5 = pEVar2;
  } while( true );
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



/* ResourceFormatSaverText::~ResourceFormatSaverText() */

void __thiscall ResourceFormatSaverText::~ResourceFormatSaverText(ResourceFormatSaverText *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Variant::_clear_internal;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00116461;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00116461;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00116461;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00116461;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00116461:
  *(undefined ***)this = &PTR__initialize_classv_00121f40;
  Object::~Object((Object *)this);
  return;
}



/* ResourceFormatSaverText::~ResourceFormatSaverText() */

void __thiscall ResourceFormatSaverText::~ResourceFormatSaverText(ResourceFormatSaverText *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Variant::_clear_internal;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00116531;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00116531;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00116531;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00116531;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00116531:
  *(undefined ***)this = &PTR__initialize_classv_00121f40;
  Object::~Object((Object *)this);
  operator_delete(this,0x1f8);
  return;
}



/* SortArray<StringName, StringName::AlphCompare, true>::introsort(long, long, StringName*, long)
   const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::introsort
               (long param_1,long param_2,StringName *param_3,long param_4)

{
  long lVar1;
  StringName *pSVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  long local_138;
  long local_120;
  long local_100;
  long local_f8;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
LAB_00116f8a:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    if (param_4 != 0) {
      lVar12 = param_2 * 8;
      lVar3 = param_2;
LAB_001165d2:
      param_4 = param_4 + -1;
      pSVar2 = (StringName *)
               median_of_3(param_3 + param_1 * 8,param_3 + ((lVar1 >> 1) + param_1) * 8,
                           param_3 + lVar12 + -8);
      StringName::StringName((StringName *)&local_48,pSVar2);
      param_2 = partitioner(param_1,lVar3,(StringName *)&local_48,param_3);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      lVar1 = lVar3 - param_2;
      if (0x10 < lVar1) {
        if (param_4 != 0) {
          lVar12 = param_4;
          lVar4 = lVar3;
LAB_00116691:
          do {
            lVar12 = lVar12 + -1;
            pSVar2 = (StringName *)
                     median_of_3(param_3 + param_2 * 8,param_3 + ((lVar1 >> 1) + param_2) * 8,
                                 param_3 + lVar4 * 8 + -8);
            StringName::StringName((StringName *)&local_48,pSVar2);
            lVar3 = partitioner(param_2,lVar4,(StringName *)&local_48,param_3);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            lVar1 = lVar4 - lVar3;
            if (0x10 < lVar1) {
              if (lVar12 != 0) {
                lVar13 = lVar12;
                local_138 = lVar4;
LAB_00116752:
                do {
                  lVar13 = lVar13 + -1;
                  pSVar2 = (StringName *)
                           median_of_3(param_3 + lVar3 * 8,param_3 + ((lVar1 >> 1) + lVar3) * 8,
                                       param_3 + local_138 * 8 + -8);
                  StringName::StringName((StringName *)&local_48,pSVar2);
                  lVar4 = partitioner(lVar3,local_138,(StringName *)&local_48,param_3);
                  if ((StringName::configured != '\0') && (local_48 != 0)) {
                    StringName::unref();
                  }
                  lVar1 = local_138 - lVar4;
                  if (0x10 < lVar1) {
                    if (lVar13 != 0) {
                      lVar11 = lVar13;
LAB_0011680c:
                      do {
                        lVar11 = lVar11 + -1;
                        lVar9 = local_138 * 8;
                        pSVar2 = (StringName *)
                                 median_of_3(param_3 + lVar4 * 8,
                                             param_3 + ((lVar1 >> 1) + lVar4) * 8,
                                             param_3 + lVar9 + -8);
                        StringName::StringName((StringName *)&local_48,pSVar2);
                        lVar5 = partitioner(lVar4,local_138,(StringName *)&local_48,param_3);
                        if ((StringName::configured != '\0') && (local_48 != 0)) {
                          StringName::unref();
                        }
                        lVar1 = local_138 - lVar5;
                        if (0x10 < lVar1) {
                          lVar6 = local_138;
                          if (lVar11 != 0) {
                            lVar7 = local_138;
                            local_100 = lVar11;
                            do {
                              local_100 = local_100 + -1;
                              pSVar2 = (StringName *)
                                       median_of_3(param_3 + lVar5 * 8,
                                                   param_3 + ((lVar1 >> 1) + lVar5) * 8,
                                                   param_3 + lVar9 + -8);
                              StringName::StringName((StringName *)&local_48,pSVar2);
                              lVar6 = partitioner(lVar5,lVar7,(StringName *)&local_48,param_3);
                              if ((StringName::configured != '\0') && (local_48 != 0)) {
                                StringName::unref();
                              }
                              lVar1 = lVar7 - lVar6;
                              if (0x10 < lVar1) {
                                if (local_100 != 0) {
                                  lVar8 = lVar7;
                                  local_120 = local_100;
                                  do {
                                    local_120 = local_120 + -1;
                                    pSVar2 = (StringName *)
                                             median_of_3(param_3 + lVar6 * 8,
                                                         param_3 + ((lVar1 >> 1) + lVar6) * 8,
                                                         param_3 + lVar9 + -8);
                                    StringName::StringName((StringName *)&local_48,pSVar2);
                                    lVar7 = partitioner(lVar6,lVar8,(StringName *)&local_48,param_3)
                                    ;
                                    if ((StringName::configured != '\0') && (local_48 != 0)) {
                                      StringName::unref();
                                    }
                                    lVar1 = lVar8 - lVar7;
                                    if (0x10 < lVar1) {
                                      if (local_120 == 0) {
LAB_00116d5e:
                                        partial_sort(lVar7,lVar8,lVar8,param_3);
                                      }
                                      else {
                                        lVar9 = lVar8;
                                        local_138 = local_120;
                                        do {
                                          while( true ) {
                                            local_138 = local_138 + -1;
                                            lVar14 = lVar9 * 8;
                                            pSVar2 = (StringName *)
                                                     median_of_3(param_3 + lVar7 * 8,
                                                                 param_3 + ((lVar1 >> 1) + lVar7) *
                                                                           8,param_3 + lVar14 + -8);
                                            StringName::StringName((StringName *)&local_48,pSVar2);
                                            lVar8 = partitioner(lVar7,lVar9,(StringName *)&local_48,
                                                                param_3);
                                            if ((StringName::configured != '\0') && (local_48 != 0))
                                            {
                                              StringName::unref();
                                            }
                                            lVar1 = lVar9 - lVar8;
                                            if (0x10 < lVar1) break;
LAB_00116cce:
                                            lVar1 = lVar8 - lVar7;
                                            if (lVar1 < 0x11) {
                                              lVar1 = lVar7 - lVar6;
                                              if (lVar1 < 0x11) goto LAB_00116c80;
                                              goto LAB_00116d29;
                                            }
                                            lVar9 = lVar8;
                                            if (local_138 == 0) goto LAB_00116d5e;
                                          }
                                          if (local_138 == 0) {
LAB_00116cbd:
                                            partial_sort(lVar8,lVar9,lVar9,param_3);
                                            goto LAB_00116cce;
                                          }
                                          lVar10 = lVar9;
                                          local_f8 = local_138;
                                          while( true ) {
                                            local_f8 = local_f8 + -1;
                                            pSVar2 = (StringName *)
                                                     median_of_3(param_3 + lVar8 * 8,
                                                                 param_3 + ((lVar1 >> 1) + lVar8) *
                                                                           8,param_3 + lVar14 + -8);
                                            StringName::StringName((StringName *)&local_48,pSVar2);
                                            lVar9 = partitioner(lVar8,lVar10,(StringName *)&local_48
                                                                ,param_3);
                                            if ((StringName::configured != '\0') && (local_48 != 0))
                                            {
                                              StringName::unref();
                                            }
                                            lVar1 = lVar10 - lVar9;
                                            if (0x10 < lVar1) {
                                              if (local_f8 != 0) {
                                                lVar14 = local_f8;
                                                lVar15 = lVar10;
                                                do {
                                                  lVar14 = lVar14 + -1;
                                                  pSVar2 = (StringName *)
                                                           median_of_3(param_3 + lVar9 * 8,
                                                                       param_3 + ((lVar1 >> 1) +
                                                                                 lVar9) * 8,
                                                                       param_3 + lVar15 * 8 + -8);
                                                  StringName::StringName
                                                            ((StringName *)&local_48,pSVar2);
                                                  lVar10 = partitioner(lVar9,lVar15,
                                                                       (StringName *)&local_48,
                                                                       param_3);
                                                  if ((StringName::configured != '\0') &&
                                                     (local_48 != 0)) {
                                                    StringName::unref();
                                                  }
                                                  introsort(lVar10,lVar15,param_3,lVar14);
                                                  lVar1 = lVar10 - lVar9;
                                                  if (lVar1 < 0x11) {
                                                    lVar1 = lVar9 - lVar8;
                                                    if (lVar1 < 0x11) goto LAB_00116cce;
                                                    goto LAB_00116c54;
                                                  }
                                                  lVar15 = lVar10;
                                                } while (lVar14 != 0);
                                              }
                                              partial_sort(lVar9,lVar10,lVar10,param_3);
                                            }
                                            lVar1 = lVar9 - lVar8;
                                            if (lVar1 < 0x11) break;
                                            if (local_f8 == 0) goto LAB_00116cbd;
LAB_00116c54:
                                            lVar14 = lVar9 * 8;
                                            lVar10 = lVar9;
                                          }
                                          lVar1 = lVar8 - lVar7;
                                          lVar9 = lVar8;
                                        } while (0x10 < lVar1);
                                      }
                                    }
                                    lVar1 = lVar7 - lVar6;
                                    if (lVar1 < 0x11) {
                                      lVar1 = lVar6 - lVar5;
                                      if (lVar1 < 0x11) goto LAB_00116da7;
                                      goto LAB_00116ca1;
                                    }
                                    if (local_120 == 0) break;
LAB_00116d29:
                                    lVar9 = lVar7 * 8;
                                    lVar8 = lVar7;
                                  } while( true );
                                }
                                partial_sort(lVar6,lVar7,lVar7,param_3);
                              }
LAB_00116c80:
                              lVar1 = lVar6 - lVar5;
                              if (lVar1 < 0x11) {
                                lVar1 = lVar5 - lVar4;
                                local_138 = lVar5;
                                if (lVar1 < 0x11) goto LAB_00116e60;
                                goto LAB_0011680c;
                              }
                              if (local_100 == 0) break;
LAB_00116ca1:
                              lVar9 = lVar6 * 8;
                              lVar7 = lVar6;
                            } while( true );
                          }
                          partial_sort(lVar5,lVar6,lVar6,param_3);
                        }
LAB_00116da7:
                        lVar1 = lVar5 - lVar4;
                        if (lVar1 < 0x11) {
                          lVar1 = lVar4 - lVar3;
                          local_138 = lVar4;
                          if (lVar1 < 0x11) goto LAB_00116ef1;
                          goto LAB_00116752;
                        }
                        local_138 = lVar5;
                      } while (lVar11 != 0);
                    }
                    partial_sort(lVar4,local_138,local_138,param_3);
                  }
LAB_00116e60:
                  lVar1 = lVar4 - lVar3;
                  if (lVar1 < 0x11) {
                    lVar1 = lVar3 - param_2;
                    lVar4 = lVar3;
                    if (lVar1 < 0x11) goto LAB_00116f7e;
                    goto LAB_00116691;
                  }
                  local_138 = lVar4;
                } while (lVar13 != 0);
              }
              partial_sort(lVar3,lVar4,lVar4,param_3);
            }
LAB_00116ef1:
            lVar1 = lVar3 - param_2;
            if (lVar1 < 0x11) goto LAB_00116f7e;
            lVar4 = lVar3;
            if (lVar12 == 0) break;
          } while( true );
        }
        partial_sort(param_2,lVar3,lVar3,param_3);
      }
      lVar1 = param_2 - param_1;
      if (0x10 < lVar1) {
        if (param_4 != 0) goto LAB_00116f5d;
        goto LAB_00116fbc;
      }
      goto LAB_00116f8a;
    }
LAB_00116fbc:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      partial_sort(param_1,param_2,param_2,param_3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00116f7e:
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) goto LAB_00116f8a;
LAB_00116f5d:
  lVar12 = param_2 * 8;
  lVar3 = param_2;
  goto LAB_001165d2;
}



/* RefCounted::get_class() const */

void RefCounted::get_class(void)

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



/* ResourceFormatLoader::get_class() const */

void ResourceFormatLoader::get_class(void)

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



/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */

void __thiscall Variant::operator=(Variant *this,Variant *param_1)

{
  undefined8 uVar1;
  
  if (this != param_1) {
    if (needs_deinit[*(int *)this] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)this = *(undefined4 *)param_1;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar1;
    *(undefined4 *)param_1 = 0;
    return;
  }
  return;
}



/* ResourceFormatLoader::~ResourceFormatLoader() */

void __thiscall ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::RefCounted;
  if (bVar1) {
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117473;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117473;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117473;
    }
    if (*(long *)(this + 0x228) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117473;
    }
    if (*(long *)(this + 0x210) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117473;
    }
    if (*(long *)(this + 0x1f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117473;
    }
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117473;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117473;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117473;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117473;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00117473:
  *(undefined ***)this = &PTR__initialize_classv_00121f40;
  Object::~Object((Object *)this);
  return;
}



/* ResourceFormatLoaderText::~ResourceFormatLoaderText() */

void __thiscall ResourceFormatLoaderText::~ResourceFormatLoaderText(ResourceFormatLoaderText *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001220a0;
  ResourceFormatLoader::~ResourceFormatLoader((ResourceFormatLoader *)this);
  return;
}



/* ResourceFormatLoaderText::~ResourceFormatLoaderText() */

void __thiscall ResourceFormatLoaderText::~ResourceFormatLoaderText(ResourceFormatLoaderText *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001220a0;
  ResourceFormatLoader::~ResourceFormatLoader((ResourceFormatLoader *)this);
  operator_delete(this,0x288);
  return;
}



/* ResourceFormatLoader::~ResourceFormatLoader() */

void __thiscall ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this)

{
  ~ResourceFormatLoader(this);
  operator_delete(this,0x288);
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



/* ResourceFormatSaver::get_class() const */

void ResourceFormatSaver::get_class(void)

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



/* Ref<Resource>::unref() */

void __thiscall Ref<Resource>::unref(Ref<Resource> *this)

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
    if (*in_RSI != 0) goto LAB_00117d0c;
  }
  else {
    iVar44 = *(int *)((long)in_RSI + 0x24);
LAB_00117d0c:
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
            if (*(long *)(lVar36 + (ulong)uVar42 * 8) == *(long *)in_RDX) goto LAB_00118158;
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
  if ((float)(iVar44 + 1) <= (float)uVar27 * __LC16) {
    lVar30 = *(long *)in_RDX;
    if (lVar30 != 0) goto LAB_00118035;
LAB_00118196:
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
      goto LAB_00118158;
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
    if (lVar30 == 0) goto LAB_00118196;
LAB_00118035:
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
LAB_00118158:
  *(uint *)(param_1 + 0xc) = uVar42;
  *(long *)param_1 = lVar36;
  *(int *)(param_1 + 8) = iVar44;
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<Ref<Resource>, HashMapHasherDefault, HashMapComparatorDefault<Ref<Resource> >
   >::insert(Ref<Resource> const&) */

undefined1  [16]
HashSet<Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>>::insert
          (Ref *param_1)

{
  Ref<Resource> *this;
  long lVar1;
  void *pvVar2;
  void *pvVar3;
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
  uint uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  long *in_RDX;
  long lVar34;
  ulong uVar35;
  uint uVar36;
  long *in_RSI;
  uint uVar37;
  uint uVar38;
  uint *puVar39;
  undefined4 uVar40;
  ulong uVar41;
  ulong uVar42;
  uint uVar43;
  undefined1 auVar44 [16];
  ulong uStack_98;
  
  lVar30 = *in_RSI;
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (lVar30 == 0) {
    uVar29 = (ulong)uVar28 * 4;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[3] = lVar30;
    lVar30 = Memory::alloc_static((ulong)uVar28 * 8,false);
    *in_RSI = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[2] = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[1] = lVar30;
    if (uVar28 != 0) {
      memset((void *)in_RSI[3],0,uVar29);
    }
    lVar32 = *in_RDX;
    uVar36 = *(uint *)((long)in_RSI + 0x24);
    lVar30 = *in_RSI;
    if (lVar30 != 0) goto LAB_0011830f;
  }
  else {
    lVar32 = *in_RDX;
    uVar36 = *(uint *)((long)in_RSI + 0x24);
LAB_0011830f:
    if (uVar36 != 0) {
      uVar35 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4));
      lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      uVar29 = lVar32 * 0x3ffff - 1;
      uVar29 = (uVar29 ^ uVar29 >> 0x1f) * 0x15;
      uVar29 = (uVar29 ^ uVar29 >> 0xb) * 0x41;
      uVar29 = uVar29 >> 0x16 ^ uVar29;
      uVar41 = uVar29 & 0xffffffff;
      if ((int)uVar29 == 0) {
        uVar41 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar41 * lVar1;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar35;
      lVar34 = SUB168(auVar4 * auVar16,8);
      uVar38 = *(uint *)(in_RSI[3] + lVar34 * 4);
      uVar29 = (ulong)uVar38;
      iVar33 = SUB164(auVar4 * auVar16,8);
      if (uVar38 != 0) {
        uVar38 = 0;
        do {
          if ((int)uVar41 == (int)uVar29) {
            uVar43 = *(uint *)(in_RSI[1] + lVar34 * 4);
            uStack_98 = (ulong)uVar43;
            if (*(long *)(lVar30 + uStack_98 * 8) == lVar32) goto LAB_00118426;
          }
          uVar38 = uVar38 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(iVar33 + 1) * lVar1;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar35;
          lVar34 = SUB168(auVar5 * auVar17,8);
          uVar43 = *(uint *)(in_RSI[3] + lVar34 * 4);
          uVar29 = (ulong)uVar43;
          iVar33 = SUB164(auVar5 * auVar17,8);
        } while ((uVar43 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar29 * lVar1, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar35, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(in_RSI + 4) * 4) + iVar33) -
                                      SUB164(auVar6 * auVar18,8)) * lVar1, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar35, uVar38 <= SUB164(auVar7 * auVar19,8)));
      }
    }
  }
  if ((float)uVar28 * __LC16 < (float)(uVar36 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar36 = *(uint *)((long)in_RSI + 0x24);
      lVar30 = *in_RSI;
      uVar43 = 0xffffffff;
      goto LAB_00118426;
    }
    uVar28 = (int)in_RSI[4] + 1;
    uVar29 = (ulong)uVar28;
    if (uVar28 < 2) {
      uVar29 = 2;
    }
    uVar28 = *(uint *)(hash_table_size_primes + uVar29 * 4);
    *(int *)(in_RSI + 4) = (int)uVar29;
    pvVar2 = (void *)in_RSI[3];
    uVar29 = (ulong)uVar28 * 4;
    pvVar3 = (void *)in_RSI[2];
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[3] = lVar30;
    lVar30 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar28 * 8,false);
    *in_RSI = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[2] = lVar30;
    lVar30 = Memory::realloc_static((void *)in_RSI[1],uVar29,false);
    in_RSI[1] = lVar30;
    if (uVar28 != 0) {
      memset((void *)in_RSI[3],0,uVar29);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar29 = 0;
      lVar32 = in_RSI[3];
      lVar1 = in_RSI[2];
      do {
        uVar42 = uVar29 & 0xffffffff;
        uVar40 = (undefined4)uVar29;
        uVar43 = 0;
        uVar28 = *(uint *)((long)pvVar2 + (ulong)*(uint *)((long)pvVar3 + uVar29 * 4) * 4);
        uVar35 = (ulong)uVar28;
        uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar41 = CONCAT44(0,uVar36);
        lVar31 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar35 * lVar31;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar41;
        lVar34 = SUB168(auVar8 * auVar20,8) * 4;
        iVar33 = SUB164(auVar8 * auVar20,8);
        puVar39 = (uint *)(lVar32 + lVar34);
        uVar38 = *puVar39;
        if (uVar38 == 0) {
          lVar31 = uVar29 * 4;
        }
        else {
          do {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar38 * lVar31;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar41;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar36 + iVar33) - SUB164(auVar9 * auVar21,8)) * lVar31;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar41;
            uVar28 = SUB164(auVar10 * auVar22,8);
            if (uVar28 < uVar43) {
              *(int *)(lVar1 + uVar42 * 4) = iVar33;
              uVar38 = *puVar39;
              *puVar39 = (uint)uVar35;
              uVar43 = *(uint *)(lVar34 + lVar30);
              uVar35 = (ulong)uVar38;
              *(uint *)(lVar34 + lVar30) = (uint)uVar42;
              uVar42 = (ulong)uVar43;
              uVar43 = uVar28;
            }
            uVar40 = (undefined4)uVar42;
            uVar28 = (uint)uVar35;
            uVar43 = uVar43 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar33 + 1) * lVar31;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar41;
            lVar34 = SUB168(auVar11 * auVar23,8) * 4;
            iVar33 = SUB164(auVar11 * auVar23,8);
            puVar39 = (uint *)(lVar32 + lVar34);
            uVar38 = *puVar39;
          } while (uVar38 != 0);
          lVar31 = uVar42 << 2;
        }
        *puVar39 = uVar28;
        uVar29 = uVar29 + 1;
        *(int *)(lVar1 + lVar31) = iVar33;
        *(undefined4 *)(lVar30 + lVar34) = uVar40;
      } while ((uint)uVar29 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar2,false);
    Memory::free_static(pvVar3,false);
    uVar36 = *(uint *)((long)in_RSI + 0x24);
    lVar30 = *in_RSI;
  }
  lVar32 = *in_RDX;
  this = (Ref<Resource> *)(lVar30 + (ulong)uVar36 * 8);
  *(undefined8 *)this = 0;
  uVar29 = lVar32 * 0x3ffff - 1;
  uVar29 = (uVar29 ^ uVar29 >> 0x1f) * 0x15;
  uVar29 = (uVar29 ^ uVar29 >> 0xb) * 0x41;
  uVar29 = uVar29 >> 0x16 ^ uVar29;
  uVar35 = uVar29 & 0xffffffff;
  if ((int)uVar29 == 0) {
    uVar35 = 1;
  }
  Ref<Resource>::operator=(this,(Ref *)*in_RDX);
  uVar43 = (uint)uVar35;
  lVar32 = in_RSI[3];
  uVar28 = *(uint *)((long)in_RSI + 0x24);
  uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar29 = CONCAT44(0,uVar36);
  lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar35 * lVar1;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar29;
  uStack_98 = SUB168(auVar12 * auVar24,8);
  lVar30 = uStack_98 * 4;
  iVar33 = SUB164(auVar12 * auVar24,8);
  puVar39 = (uint *)(lVar32 + lVar30);
  uVar38 = *puVar39;
  if (uVar38 == 0) {
    lVar34 = in_RSI[2];
    lVar31 = in_RSI[1];
  }
  else {
    uVar37 = 0;
    lVar34 = in_RSI[2];
    lVar31 = in_RSI[1];
    do {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar38 * lVar1;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar29;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)((uVar36 + iVar33) - SUB164(auVar13 * auVar25,8)) * lVar1;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar29;
      uVar38 = SUB164(auVar14 * auVar26,8);
      if (uVar38 < uVar37) {
        *(int *)(lVar34 + (ulong)uVar28 * 4) = iVar33;
        uVar43 = *puVar39;
        *puVar39 = (uint)uVar35;
        uVar37 = *(uint *)(lVar30 + lVar31);
        uVar35 = (ulong)uVar43;
        *(uint *)(lVar30 + lVar31) = uVar28;
        uVar28 = uVar37;
        uVar37 = uVar38;
      }
      uVar43 = (uint)uVar35;
      uVar37 = uVar37 + 1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = (ulong)(iVar33 + 1) * lVar1;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar29;
      uStack_98 = SUB168(auVar15 * auVar27,8);
      lVar30 = uStack_98 * 4;
      iVar33 = SUB164(auVar15 * auVar27,8);
      puVar39 = (uint *)(lVar32 + lVar30);
      uVar38 = *puVar39;
    } while (uVar38 != 0);
  }
  *puVar39 = uVar43;
  *(int *)(lVar34 + (ulong)uVar28 * 4) = iVar33;
  *(uint *)(lVar31 + lVar30) = uVar28;
  uVar43 = *(uint *)((long)in_RSI + 0x24);
  lVar30 = *in_RSI;
  uVar36 = uVar43 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar36;
LAB_00118426:
  *(uint *)(param_1 + 0xc) = uVar43;
  *(long *)param_1 = lVar30;
  *(uint *)(param_1 + 8) = uVar36;
  auVar44._8_8_ = uStack_98;
  auVar44._0_8_ = param_1;
  return auVar44;
}



/* List<Variant, DefaultAllocator>::~List() */

void __thiscall List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)this;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  do {
    piVar1 = (int *)*puVar2;
    if (piVar1 == (int *)0x0) {
      if (*(int *)(puVar2 + 2) != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(undefined8 **)(piVar1 + 10) == puVar2) {
      *puVar2 = *(undefined8 *)(piVar1 + 6);
      if (piVar1 == (int *)puVar2[1]) {
        puVar2[1] = *(undefined8 *)(piVar1 + 8);
      }
      if (*(long *)(piVar1 + 8) != 0) {
        *(undefined8 *)(*(long *)(piVar1 + 8) + 0x18) = *(undefined8 *)(piVar1 + 6);
      }
      if (*(long *)(piVar1 + 6) != 0) {
        *(undefined8 *)(*(long *)(piVar1 + 6) + 0x20) = *(undefined8 *)(piVar1 + 8);
      }
      if (Variant::needs_deinit[*piVar1] != '\0') {
        Variant::_clear_internal();
      }
      Memory::free_static(piVar1,false);
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



/* List<Ref<Resource>, DefaultAllocator>::~List() */

undefined8 __thiscall
List<Ref<Resource>,DefaultAllocator>::~List(List<Ref<Resource>,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uStack_28;
  
  plVar7 = *(long **)this;
  if (plVar7 == (long *)0x0) {
    return uStack_28;
  }
  do {
    plVar1 = (long *)*plVar7;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar7[2] != 0) {
        uVar6 = _err_print_error("~List","./core/templates/list.h",0x316,
                                 "Condition \"_data->size_cache\" is true.",0,0);
        return uVar6;
      }
      break;
    }
    if ((long *)plVar1[3] == plVar7) {
      lVar5 = plVar1[1];
      lVar2 = plVar1[2];
      *plVar7 = lVar5;
      if (plVar1 == (long *)plVar7[1]) {
        plVar7[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar5;
        lVar5 = plVar1[1];
      }
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x10) = lVar2;
      }
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
      }
      Memory::free_static(plVar1,false);
      *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar7 = *(long **)this;
  } while ((int)plVar7[2] != 0);
  uVar6 = Memory::free_static(plVar7,false);
  return uVar6;
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



/* WARNING: Removing unreachable block (ram,0x00118e68) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

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



/* WARNING: Removing unreachable block (ram,0x001191b0) */
/* String vformat<String, int, String>(String const&, String const, int const, String const) */

undefined8 *
vformat<String,int,String>
          (undefined8 *param_1,bool *param_2,String *param_3,int param_4,String *param_5)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_f8 [8];
  undefined8 local_f0 [9];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_a8,param_3);
  iVar4 = 0;
  Variant::Variant(local_90,param_4);
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar3 = (int)local_f8;
  Array::resize(iVar3);
  pVVar2 = local_a8;
  do {
    iVar4 = iVar4 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar3);
    Variant::operator=(pVVar1,pVVar2);
    pVVar2 = pVVar2 + 0x18;
  } while (iVar4 != 3);
  String::sprintf((Array *)local_f0,param_2);
  *param_1 = local_f0[0];
  local_f0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  pVVar2 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00119dc0) */
/* String vformat<char const*, String, int>(String const&, char const* const, String const, int
   const) */

undefined8 *
vformat<char_const*,String,int>
          (undefined8 *param_1,bool *param_2,char *param_3,String *param_4,int param_5)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_f8 [8];
  undefined8 local_f0 [9];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_a8,param_3);
  iVar4 = 0;
  Variant::Variant(local_90,param_4);
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar3 = (int)local_f8;
  Array::resize(iVar3);
  pVVar2 = local_a8;
  do {
    iVar4 = iVar4 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar3);
    Variant::operator=(pVVar1,pVVar2);
    pVVar2 = pVVar2 + 0x18;
  } while (iVar4 != 3);
  String::sprintf((Array *)local_f0,param_2);
  *param_1 = local_f0[0];
  local_f0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  pVVar2 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* ResourceLoader::notify_dependency_error(String const&, String const&, String const&) */

void ResourceLoader::notify_dependency_error(String *param_1,String *param_2,String *param_3)

{
  Variant *pVVar1;
  code *pcVar2;
  Callable *pCVar3;
  CallableCustom *this;
  Variant *pVVar4;
  long in_FS_OFFSET;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  Callable local_e8 [16];
  Callable local_d8 [16];
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  int local_a8 [2];
  undefined1 local_a0 [16];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (dep_err_notify != (code *)0x0) {
    if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
      Thread::caller_id();
    }
    pCVar3 = MessageQueue::main_singleton;
    pcVar2 = dep_err_notify;
    if (*(long *)(in_FS_OFFSET + lRam0000000000119fae) == 1) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00119fe9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*dep_err_notify)(param_1,param_2,param_3);
        return;
      }
      goto LAB_0011a202;
    }
    this = (CallableCustom *)operator_new(0x30,"");
    CallableCustom::CallableCustom(this);
    *(undefined **)(this + 0x20) = &_LC0;
    *(code **)(this + 0x28) = pcVar2;
    *(undefined ***)this = &PTR_hash_00122410;
    *(undefined8 *)(this + 0x10) = 0;
    CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
    *(char **)(this + 0x20) = "ep_err_notify";
    Callable::Callable(local_e8,this);
    local_f0 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)param_3);
    local_f8 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)param_2);
    local_100 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)param_1);
    Variant::Variant((Variant *)local_a8,(String *)&local_100);
    Variant::Variant(local_90,(String *)&local_f8);
    Variant::Variant(local_78,(String *)&local_f0);
    local_58 = (undefined1  [16])0x0;
    pVVar4 = local_48;
    local_60 = 0;
    local_c8 = (Variant *)local_a8;
    pVStack_c0 = local_90;
    local_b8 = local_78;
    Callable::bindp((Variant **)local_d8,(int)local_e8);
    do {
      pVVar1 = pVVar4 + -0x18;
      pVVar4 = pVVar4 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar4 != (Variant *)local_a8);
    local_a0 = (undefined1  [16])0x0;
    local_a8[0] = 0;
    local_a8[1] = 0;
    CallQueue::push_callablep(pCVar3,(Variant **)local_d8,0,false);
    if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable(local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    Callable::~Callable(local_e8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011a202:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, Ref<Resource>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Ref<Resource> > > >::operator[](String const&) */

Ref<Resource> * __thiscall
HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>
::operator[](HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>
             *this,String *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
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
  char cVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined8 *puVar42;
  void *pvVar43;
  ulong uVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  uint uVar51;
  long lVar52;
  uint uVar53;
  undefined8 *puVar54;
  uint uVar55;
  long in_FS_OFFSET;
  Ref<Resource> *local_90;
  long local_58;
  Ref *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_0011a900:
    uVar40 = (ulong)uVar55;
    uVar44 = uVar40 * 4;
    uVar48 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar44,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar43 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = pvVar43;
    if (uVar55 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar43 + uVar48)) && (pvVar43 < (void *)((long)pvVar3 + uVar44))
         ) {
        uVar44 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar44 * 4) = 0;
          *(undefined8 *)((long)pvVar43 + uVar44 * 8) = 0;
          uVar44 = uVar44 + 1;
        } while (uVar40 != uVar44);
        goto LAB_0011a7c2;
      }
      memset(pvVar3,0,uVar44);
      memset(pvVar43,0,uVar48);
      iVar45 = *(int *)(this + 0x2c);
LAB_0011a7c6:
      if (iVar45 != 0) {
LAB_0011a7ce:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar51 = String::hash();
        uVar40 = CONCAT44(0,uVar38);
        lVar52 = *(long *)(this + 0x10);
        uVar39 = 1;
        if (uVar51 != 0) {
          uVar39 = uVar51;
        }
        uVar53 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar39 * lVar4;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar40;
        lVar46 = SUB168(auVar17 * auVar33,8);
        uVar51 = *(uint *)(lVar52 + lVar46 * 4);
        uVar50 = SUB164(auVar17 * auVar33,8);
        if (uVar51 != 0) {
          do {
            if (uVar39 == uVar51) {
              cVar37 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),
                                          param_1);
              if (cVar37 != '\0') {
                Ref<Resource>::operator=
                          ((Ref<Resource> *)
                           (*(long *)(*(long *)(this + 8) + (ulong)uVar50 * 8) + 0x18),(Ref *)0x0);
                local_90 = (Ref<Resource> *)
                           (*(long *)(*(long *)(this + 8) + (ulong)uVar50 * 8) + 0x18);
                goto LAB_0011a698;
              }
              lVar52 = *(long *)(this + 0x10);
            }
            uVar53 = uVar53 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar50 + 1) * lVar4;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar40;
            lVar46 = SUB168(auVar18 * auVar34,8);
            uVar51 = *(uint *)(lVar52 + lVar46 * 4);
            uVar50 = SUB164(auVar18 * auVar34,8);
          } while ((uVar51 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar51 * lVar4, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar40, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar38 + uVar50) - SUB164(auVar19 * auVar35,8)) * lVar4,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar40, uVar53 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar45 = *(int *)(this + 0x2c);
      }
      uVar40 = (ulong)uVar55;
      goto LAB_0011a2d4;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar43 == (void *)0x0) goto LAB_0011a2d4;
    if (iVar45 != 0) goto LAB_0011a7ce;
LAB_0011a2fa:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_90 = (Ref<Resource> *)0x18;
      goto LAB_0011a698;
    }
    uVar40 = (ulong)(uVar55 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)uVar55 * 4);
    if (uVar55 + 1 < 2) {
      uVar40 = 2;
    }
    uVar55 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar48 = (ulong)uVar55;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar43 = *(void **)(this + 8);
    uVar40 = uVar48 * 4;
    uVar44 = uVar48 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar44,false);
    *(void **)(this + 8) = __s_00;
    if (uVar55 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar44)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar48);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar44);
      }
    }
    if (uVar38 != 0) {
      uVar40 = 0;
      do {
        uVar55 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar55 != 0) {
          lVar4 = *(long *)(this + 0x10);
          uVar50 = 0;
          uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar44 = CONCAT44(0,uVar39);
          lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)uVar55 * lVar52;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar44;
          lVar46 = SUB168(auVar5 * auVar21,8);
          puVar1 = (uint *)(lVar4 + lVar46 * 4);
          iVar45 = SUB164(auVar5 * auVar21,8);
          uVar51 = *puVar1;
          uVar41 = *(undefined8 *)((long)pvVar43 + uVar40 * 8);
          while (uVar51 != 0) {
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)uVar51 * lVar52;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar44;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)((uVar39 + iVar45) - SUB164(auVar6 * auVar22,8)) * lVar52;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar44;
            uVar53 = SUB164(auVar7 * auVar23,8);
            uVar49 = uVar41;
            if (uVar53 < uVar50) {
              *puVar1 = uVar55;
              puVar42 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar49 = *puVar42;
              *puVar42 = uVar41;
              uVar55 = uVar51;
              uVar50 = uVar53;
            }
            uVar50 = uVar50 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)(iVar45 + 1) * lVar52;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar44;
            lVar46 = SUB168(auVar8 * auVar24,8);
            puVar1 = (uint *)(lVar4 + lVar46 * 4);
            iVar45 = SUB164(auVar8 * auVar24,8);
            uVar41 = uVar49;
            uVar51 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar41;
          *puVar1 = uVar55;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar38 != uVar40);
      Memory::free_static(pvVar43,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    iVar45 = *(int *)(this + 0x2c);
    uVar40 = CONCAT44(0,uVar55);
    if (iVar45 != 0) {
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar39 = String::hash();
      lVar52 = *(long *)(this + 0x10);
      uVar38 = 1;
      if (uVar39 != 0) {
        uVar38 = uVar39;
      }
      uVar50 = 0;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar38 * lVar4;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar40;
      lVar46 = SUB168(auVar13 * auVar29,8);
      uVar39 = *(uint *)(lVar52 + lVar46 * 4);
      uVar51 = SUB164(auVar13 * auVar29,8);
      if (uVar39 != 0) {
        do {
          if (uVar38 == uVar39) {
            cVar37 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),param_1
                                       );
            if (cVar37 != '\0') {
              local_90 = (Ref<Resource> *)
                         (*(long *)(*(long *)(this + 8) + (ulong)uVar51 * 8) + 0x18);
              goto LAB_0011a698;
            }
            lVar52 = *(long *)(this + 0x10);
          }
          uVar50 = uVar50 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(uVar51 + 1) * lVar4;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar40;
          lVar46 = SUB168(auVar14 * auVar30,8);
          uVar39 = *(uint *)(lVar52 + lVar46 * 4);
          uVar51 = SUB164(auVar14 * auVar30,8);
        } while ((uVar39 != 0) &&
                (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar39 * lVar4, auVar31._8_8_ = 0,
                auVar31._0_8_ = uVar40, auVar16._8_8_ = 0,
                auVar16._0_8_ = (ulong)((uVar51 + uVar55) - SUB164(auVar15 * auVar31,8)) * lVar4,
                auVar32._8_8_ = 0, auVar32._0_8_ = uVar40, uVar50 <= SUB164(auVar16 * auVar32,8)));
      }
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (*(long *)(this + 8) == 0) goto LAB_0011a900;
LAB_0011a7c2:
      iVar45 = *(int *)(this + 0x2c);
      goto LAB_0011a7c6;
    }
LAB_0011a2d4:
    if ((float)uVar40 * __LC16 < (float)(iVar45 + 1)) goto LAB_0011a2fa;
  }
  local_58 = 0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
  }
  local_50[0] = (Ref *)0x0;
  Ref<Resource>::operator=((Ref<Resource> *)local_50,(Ref *)0x0);
  puVar42 = (undefined8 *)operator_new(0x20,"");
  puVar42[2] = 0;
  *puVar42 = 0;
  puVar42[1] = 0;
  if (local_58 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar42 + 2),(CowData *)&local_58);
  }
  puVar42[3] = 0;
  local_90 = (Ref<Resource> *)(puVar42 + 3);
  Ref<Resource>::operator=(local_90,local_50[0]);
  Ref<Resource>::unref((Ref<Resource> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  puVar54 = *(undefined8 **)(this + 0x20);
  if (puVar54 == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar42;
  }
  else {
    *puVar54 = puVar42;
    puVar42[1] = puVar54;
  }
  *(undefined8 **)(this + 0x20) = puVar42;
  uVar38 = String::hash();
  lVar4 = *(long *)(this + 0x10);
  uVar55 = 1;
  if (uVar38 != 0) {
    uVar55 = uVar38;
  }
  uVar51 = 0;
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (ulong)uVar55 * lVar52;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar40;
  lVar47 = SUB168(auVar9 * auVar25,8);
  lVar46 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar4 + lVar47 * 4);
  iVar45 = SUB164(auVar9 * auVar25,8);
  uVar39 = *puVar1;
  while (uVar39 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar39 * lVar52;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar40;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((uVar38 + iVar45) - SUB164(auVar10 * auVar26,8)) * lVar52;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar40;
    uVar50 = SUB164(auVar11 * auVar27,8);
    puVar54 = puVar42;
    if (uVar50 < uVar51) {
      *puVar1 = uVar55;
      puVar2 = (undefined8 *)(lVar46 + lVar47 * 8);
      puVar54 = (undefined8 *)*puVar2;
      *puVar2 = puVar42;
      uVar51 = uVar50;
      uVar55 = uVar39;
    }
    uVar51 = uVar51 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar45 + 1) * lVar52;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    lVar47 = SUB168(auVar12 * auVar28,8);
    puVar1 = (uint *)(lVar4 + lVar47 * 4);
    iVar45 = SUB164(auVar12 * auVar28,8);
    puVar42 = puVar54;
    uVar39 = *puVar1;
  }
  *(undefined8 **)(lVar46 + lVar47 * 8) = puVar42;
  *puVar1 = uVar55;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011a698:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_90;
}



/* ResourceLoaderText::_parse_sub_resource_dummys(void*, VariantParser::Stream*, Ref<Resource>&,
   int&, String&) */

void ResourceLoaderText::_parse_sub_resource_dummys
               (void *param_1,Stream *param_2,Ref *param_3,int *param_4,String *param_5)

{
  _parse_sub_resource_dummy((DummyReadData *)param_1,param_2,param_3,param_4,param_5);
  return;
}



/* ResourceLoaderText::_parse_ext_resource_dummys(void*, VariantParser::Stream*, Ref<Resource>&,
   int&, String&) */

void ResourceLoaderText::_parse_ext_resource_dummys
               (void *param_1,Stream *param_2,Ref *param_3,int *param_4,String *param_5)

{
  _parse_ext_resource_dummy((DummyReadData *)param_1,param_2,param_3,param_4,param_5);
  return;
}



/* ResourceLoaderText::_parse_sub_resources(void*, VariantParser::Stream*, Ref<Resource>&, int&,
   String&) */

void ResourceLoaderText::_parse_sub_resources
               (void *param_1,Stream *param_2,Ref *param_3,int *param_4,String *param_5)

{
  _parse_sub_resource((ResourceLoaderText *)param_1,param_2,param_3,param_4,param_5);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Ref<Resource>, String, HashMapHasherDefault, HashMapComparatorDefault<Ref<Resource> >,
   DefaultTypedAllocator<HashMapElement<Ref<Resource>, String> > >::operator[](Ref<Resource> const&)
    */

undefined8 * __thiscall
HashMap<Ref<Resource>,String,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,String>>>
::operator[](HashMap<Ref<Resource>,String,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,String>>>
             *this,Ref *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *__s;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
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
  ulong uVar25;
  undefined8 uVar26;
  void *__s_00;
  undefined8 *puVar27;
  void *pvVar28;
  int iVar29;
  long lVar30;
  long lVar31;
  uint uVar32;
  ulong uVar33;
  Ref *pRVar34;
  undefined8 uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 *puVar40;
  long in_FS_OFFSET;
  uint local_c8;
  uint local_78;
  uint local_74;
  undefined8 local_70;
  undefined1 local_68 [16];
  Ref *local_58;
  undefined8 local_50 [2];
  long local_40;
  
  pRVar34 = *(Ref **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 0;
  cVar24 = _lookup_pos(this,pRVar34,&local_78);
  if (cVar24 != '\0') {
    puVar27 = *(undefined8 **)(*(long *)(this + 8) + (ulong)local_78 * 8);
    goto LAB_0011aef9;
  }
  local_70 = 0;
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
      if ((pvVar4 < (void *)((long)pvVar28 + uVar39)) && (pvVar28 < (void *)((long)pvVar4 + uVar25))
         ) {
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
    pRVar34 = *(Ref **)param_1;
  }
  local_74 = 0;
  cVar24 = _lookup_pos(this,pRVar34,&local_74);
  if (cVar24 == '\0') {
    if ((float)uVar32 * __LC16 < (float)(*(int *)(this + 0x2c) + 1)) {
      uVar32 = *(uint *)(this + 0x28);
      if (uVar32 == 0x1c) {
        puVar27 = (undefined8 *)0x0;
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        goto LAB_0011aeed;
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
        pRVar34 = *(Ref **)param_1;
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
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar32 * lVar6;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar39;
            lVar30 = SUB168(auVar8 * auVar16,8);
            puVar1 = (uint *)(lVar5 + lVar30 * 4);
            iVar29 = SUB164(auVar8 * auVar16,8);
            uVar37 = *puVar1;
            uVar26 = *(undefined8 *)((long)pvVar28 + uVar25 * 8);
            while (uVar37 != 0) {
              auVar9._8_8_ = 0;
              auVar9._0_8_ = (ulong)uVar37 * lVar6;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar39;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = (ulong)((uVar38 + iVar29) - SUB164(auVar9 * auVar17,8)) * lVar6;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = uVar39;
              local_c8 = SUB164(auVar10 * auVar18,8);
              uVar35 = uVar26;
              if (local_c8 < uVar36) {
                *puVar1 = uVar32;
                puVar27 = (undefined8 *)((long)__s_00 + lVar30 * 8);
                uVar35 = *puVar27;
                *puVar27 = uVar26;
                uVar32 = uVar37;
                uVar36 = local_c8;
              }
              uVar36 = uVar36 + 1;
              auVar11._8_8_ = 0;
              auVar11._0_8_ = (ulong)(iVar29 + 1) * lVar6;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = uVar39;
              lVar30 = SUB168(auVar11 * auVar19,8);
              puVar1 = (uint *)(lVar5 + lVar30 * 4);
              iVar29 = SUB164(auVar11 * auVar19,8);
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
        pRVar34 = *(Ref **)param_1;
      }
    }
    local_58 = (Ref *)0x0;
    local_68 = (undefined1  [16])0x0;
    Ref<Resource>::operator=((Ref<Resource> *)&local_58,pRVar34);
    local_50[0] = 0;
    puVar27 = (undefined8 *)operator_new(0x20,"");
    puVar27[2] = 0;
    *puVar27 = local_68._0_8_;
    puVar27[1] = local_68._8_8_;
    Ref<Resource>::operator=((Ref<Resource> *)(puVar27 + 2),local_58);
    puVar27[3] = 0;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
    Ref<Resource>::unref((Ref<Resource> *)&local_58);
    puVar7 = *(undefined8 **)(this + 0x20);
    if (puVar7 == (undefined8 *)0x0) {
      *(undefined8 **)(this + 0x18) = puVar27;
    }
    else {
      *puVar7 = puVar27;
      puVar27[1] = puVar7;
    }
    lVar5 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar27;
    lVar6 = *(long *)(this + 0x10);
    uVar25 = lVar5 * 0x3ffff - 1;
    uVar25 = (uVar25 ^ uVar25 >> 0x1f) * 0x15;
    uVar25 = (uVar25 ^ uVar25 >> 0xb) * 0x41;
    uVar25 = uVar25 >> 0x16 ^ uVar25;
    uVar39 = uVar25 & 0xffffffff;
    if ((int)uVar25 == 0) {
      uVar39 = 1;
    }
    uVar37 = 0;
    lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar38 = (uint)uVar39;
    uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar25 = CONCAT44(0,uVar32);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar39 * lVar5;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar25;
    lVar31 = SUB168(auVar12 * auVar20,8);
    lVar30 = *(long *)(this + 8);
    puVar1 = (uint *)(lVar6 + lVar31 * 4);
    iVar29 = SUB164(auVar12 * auVar20,8);
    uVar3 = *puVar1;
    puVar7 = puVar27;
    while (uVar3 != 0) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar3 * lVar5;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar25;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)((uVar32 + iVar29) - SUB164(auVar13 * auVar21,8)) * lVar5;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar25;
      local_c8 = SUB164(auVar14 * auVar22,8);
      puVar40 = puVar7;
      if (local_c8 < uVar37) {
        *puVar1 = (uint)uVar39;
        uVar39 = (ulong)uVar3;
        puVar2 = (undefined8 *)(lVar30 + lVar31 * 8);
        puVar40 = (undefined8 *)*puVar2;
        *puVar2 = puVar7;
        uVar37 = local_c8;
      }
      uVar38 = (uint)uVar39;
      uVar37 = uVar37 + 1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = (ulong)(iVar29 + 1) * lVar5;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar25;
      lVar31 = SUB168(auVar15 * auVar23,8);
      puVar1 = (uint *)(lVar6 + lVar31 * 4);
      iVar29 = SUB164(auVar15 * auVar23,8);
      puVar7 = puVar40;
      uVar3 = *puVar1;
    }
    *(undefined8 **)(lVar30 + lVar31 * 8) = puVar7;
    *puVar1 = uVar38;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  else {
    uVar25 = (ulong)local_74;
    puVar27 = *(undefined8 **)(*(long *)(this + 8) + uVar25 * 8);
    if (puVar27[3] != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar27 + 3),(CowData *)&local_70);
      puVar27 = *(undefined8 **)(*(long *)(this + 8) + uVar25 * 8);
    }
  }
LAB_0011aeed:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_0011aef9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar27 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomStaticMethodPointer<void, String const&, String const&, String
   const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomStaticMethodPointer<void,String_const&,String_const&,String_const&>::call
          (CallableCustomStaticMethodPointer<void,String_const&,String_const&,String_const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  code *pcVar1;
  Variant *pVVar2;
  undefined8 uVar3;
  char cVar4;
  long in_FS_OFFSET;
  Variant aVStack_48 [8];
  Variant local_40 [8];
  Variant local_38 [8];
  long local_30;
  
  pcVar1 = *(code **)(this + 0x28);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((uint)param_2 < 4) {
    if (param_2 == 3) {
      pVVar2 = param_1[2];
      *(undefined4 *)param_4 = 0;
      cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar2,4);
      uVar3 = _LC62;
      if (cVar4 == '\0') {
        *(undefined4 *)param_4 = 2;
        *(undefined8 *)(param_4 + 4) = uVar3;
      }
      Variant::operator_cast_to_String(aVStack_48);
      cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],4);
      uVar3 = _LC63;
      if (cVar4 == '\0') {
        *(undefined4 *)param_4 = 2;
        *(undefined8 *)(param_4 + 4) = uVar3;
      }
      Variant::operator_cast_to_String(local_40);
      cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
      uVar3 = _LC64;
      if (cVar4 == '\0') {
        *(undefined4 *)param_4 = 2;
        *(undefined8 *)(param_4 + 4) = uVar3;
      }
      Variant::operator_cast_to_String(local_38);
      (*pcVar1)(local_38,local_40,aVStack_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_40);
      CowData<char32_t>::_unref((CowData<char32_t> *)aVStack_48);
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<ResourceFormatSaverTextInstance::ResourceSort,
   _DefaultComparator<ResourceFormatSaverTextInstance::ResourceSort>, true>::adjust_heap(long, long,
   long, ResourceFormatSaverTextInstance::ResourceSort,
   ResourceFormatSaverTextInstance::ResourceSort*) const [clone .isra.0] */

void SortArray<ResourceFormatSaverTextInstance::ResourceSort,_DefaultComparator<ResourceFormatSaverTextInstance::ResourceSort>,true>
     ::adjust_heap(long param_1,long param_2,long param_3,undefined8 *param_4,long param_5)

{
  Object *pOVar1;
  Object *pOVar2;
  Ref *pRVar3;
  char cVar4;
  long *plVar5;
  Ref<Resource> *pRVar6;
  Ref<Resource> *pRVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  long local_78;
  Ref *local_58;
  long local_50 [2];
  long local_40;
  
  lVar10 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = param_2;
  if (lVar10 < param_3) {
    do {
      pRVar7 = (Ref<Resource> *)(param_5 + (param_1 + lVar10) * 0x10);
      cVar4 = String::naturalnocasecmp_to((String *)(pRVar7 + 8));
      lVar8 = lVar10 + -1;
      lVar9 = lVar10;
      pRVar6 = (Ref<Resource> *)(param_5 + (lVar10 + -1 + param_1) * 0x10);
      if (-1 < cVar4) {
        lVar9 = lVar10 + 1;
        lVar8 = lVar10;
        pRVar6 = pRVar7;
      }
      pOVar1 = *(Object **)pRVar6;
      plVar5 = (long *)((local_78 + param_1) * 0x10 + param_5);
      pOVar2 = (Object *)*plVar5;
      if (pOVar1 != pOVar2) {
        *plVar5 = (long)pOVar1;
        if ((pOVar1 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
          *plVar5 = 0;
        }
        if (((pOVar2 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
           (cVar4 = predelete_handler(pOVar2), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      if (plVar5[1] != *(long *)(pRVar6 + 8)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(plVar5 + 1),(CowData *)(pRVar6 + 8));
      }
      lVar10 = lVar9 * 2;
      local_78 = lVar8;
    } while (lVar10 < param_3);
  }
  else {
    pRVar6 = (Ref<Resource> *)(param_5 + (param_2 + param_1) * 0x10);
    lVar8 = param_2;
  }
  pRVar7 = pRVar6;
  if (param_3 == lVar10) {
    lVar8 = param_3 + -1;
    pRVar7 = (Ref<Resource> *)((param_1 + lVar8) * 0x10 + param_5);
    Ref<Resource>::operator=(pRVar6,*(Ref **)pRVar7);
    CowData<char32_t>::_ref((CowData<char32_t> *)(pRVar6 + 8),(CowData *)(pRVar7 + 8));
  }
  local_58 = (Ref *)0x0;
  Ref<Resource>::operator=((Ref<Resource> *)&local_58,(Ref *)*param_4);
  local_50[0] = 0;
  if (param_4[1] != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_50,(CowData *)(param_4 + 1));
  }
  lVar10 = (lVar8 + -1) - (lVar8 + -1 >> 0x3f);
  while (param_2 < lVar8) {
    lVar9 = lVar10 >> 1;
    pRVar6 = (Ref<Resource> *)((param_1 + lVar9) * 0x10 + param_5);
    cVar4 = String::naturalnocasecmp_to((String *)(pRVar6 + 8));
    pRVar7 = (Ref<Resource> *)(param_5 + (param_1 + lVar8) * 0x10);
    if (-1 < cVar4) break;
    pOVar1 = *(Object **)pRVar6;
    pOVar2 = *(Object **)pRVar7;
    if (pOVar1 != pOVar2) {
      *(Object **)pRVar7 = pOVar1;
      if ((pOVar1 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        *(long *)pRVar7 = 0;
      }
      if (((pOVar2 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(pOVar2), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
    if (*(long *)(pRVar7 + 8) != *(long *)(pRVar6 + 8)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pRVar7 + 8),(CowData *)(pRVar6 + 8));
    }
    lVar10 = (lVar9 + -1) - (lVar9 + -1 >> 0x3f);
    lVar8 = lVar9;
    pRVar7 = pRVar6;
  }
  Ref<Resource>::operator=(pRVar7,local_58);
  if (*(long *)(pRVar7 + 8) != local_50[0]) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(pRVar7 + 8),(CowData *)local_50);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  if (((local_58 != (Ref *)0x0) &&
      (cVar4 = RefCounted::unreference(), pRVar3 = local_58, cVar4 != '\0')) &&
     (cVar4 = predelete_handler((Object *)local_58), cVar4 != '\0')) {
    (**(code **)(*(long *)pRVar3 + 0x140))(pRVar3);
    Memory::free_static(pRVar3,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011b68b;
  }
  cVar5 = String::operator==(param_1,"RefCounted");
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
      if (cVar5 != '\0') goto LAB_0011b68b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0011b68b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatSaver::is_class(String const&) const */

undefined8 __thiscall ResourceFormatSaver::is_class(ResourceFormatSaver *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0011b88b;
  }
  cVar4 = String::operator==(param_1,"ResourceFormatSaver");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011b88b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoader::is_class(String const&) const */

undefined8 __thiscall ResourceFormatLoader::is_class(ResourceFormatLoader *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0011b9db;
  }
  cVar4 = String::operator==(param_1,"ResourceFormatLoader");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011b9db:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<ResourceFormatSaverTextInstance::ResourceSort,
   _DefaultComparator<ResourceFormatSaverTextInstance::ResourceSort>, true>::introsort(long, long,
   ResourceFormatSaverTextInstance::ResourceSort*, long) const [clone .isra.0] */

void SortArray<ResourceFormatSaverTextInstance::ResourceSort,_DefaultComparator<ResourceFormatSaverTextInstance::ResourceSort>,true>
     ::introsort(long param_1,long param_2,ResourceSort_conflict *param_3,long param_4)

{
  String *pSVar1;
  Object *pOVar2;
  bool bVar3;
  char cVar4;
  Object *pOVar5;
  ResourceSort_conflict *pRVar6;
  ResourceSort_conflict *pRVar7;
  long lVar8;
  long *plVar9;
  String *pSVar10;
  long lVar11;
  Object *pOVar12;
  long in_FS_OFFSET;
  long local_c0;
  long local_b8;
  long local_a0;
  Object **local_90;
  Object *local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50 [2];
  long local_40;
  
  lVar8 = param_2 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar8) {
    local_c0 = param_2;
    if (param_4 != 0) {
      pRVar7 = param_3 + param_1 * 0x10;
      pSVar1 = (String *)(pRVar7 + 8);
      local_a0 = param_2;
LAB_0011bab6:
      param_4 = param_4 + -1;
      pRVar6 = param_3 + ((lVar8 >> 1) + param_1) * 0x10;
      pSVar10 = (String *)(pRVar6 + 8);
      cVar4 = String::naturalnocasecmp_to(pSVar1);
      if (cVar4 < '\0') {
        cVar4 = String::naturalnocasecmp_to(pSVar10);
        if (cVar4 < '\0') goto LAB_0011bb27;
        cVar4 = String::naturalnocasecmp_to(pSVar1);
        if (-1 < cVar4) goto LAB_0011bf45;
      }
      else {
        cVar4 = String::naturalnocasecmp_to(pSVar1);
        if (cVar4 < '\0') {
LAB_0011bf45:
          pSVar10 = (String *)(pRVar7 + 8);
          pRVar6 = pRVar7;
          goto LAB_0011bb27;
        }
        cVar4 = String::naturalnocasecmp_to(pSVar10);
        if (-1 < cVar4) goto LAB_0011bb27;
      }
      pSVar10 = (String *)(param_3 + local_a0 * 0x10 + -0x10 + 8);
      pRVar6 = param_3 + local_a0 * 0x10 + -0x10;
LAB_0011bb27:
      local_58 = (Object *)0x0;
      Ref<Resource>::operator=((Ref<Resource> *)&local_58,*(Ref **)pRVar6);
      local_50[0] = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)local_50,(CowData *)pSVar10);
      lVar8 = local_a0;
      pSVar10 = pSVar1;
      local_c0 = param_1;
      do {
        cVar4 = String::naturalnocasecmp_to(pSVar10);
        if (cVar4 < '\0') {
          if (local_a0 + -1 == local_c0) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                             "bad comparison function; sorting will be broken",0,0);
            goto LAB_0011bb88;
          }
        }
        else {
LAB_0011bb88:
          lVar8 = lVar8 + -1;
          pRVar6 = param_3 + lVar8 * 0x10;
          while( true ) {
            cVar4 = String::naturalnocasecmp_to((String *)local_50);
            if (-1 < cVar4) break;
            if (param_1 == lVar8) {
              _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                               "bad comparison function; sorting will be broken",0,0);
              break;
            }
            lVar8 = lVar8 + -1;
            pRVar6 = pRVar6 + -0x10;
          }
          if (lVar8 <= local_c0) goto LAB_0011bddb;
          pOVar12 = *(Object **)(pSVar10 + -8);
          if (pOVar12 == (Object *)0x0) {
            local_b8 = *(long *)pSVar10;
            lVar11 = *(long *)pRVar6;
            *(undefined8 *)pSVar10 = 0;
            if (lVar11 != 0) {
              *(long *)(pSVar10 + -8) = lVar11;
              pOVar5 = (Object *)0x0;
LAB_0011bd9c:
              cVar4 = RefCounted::reference();
              if (cVar4 == '\0') {
                *(undefined8 *)(pSVar10 + -8) = 0;
              }
              goto LAB_0011bc60;
            }
          }
          else {
            cVar4 = RefCounted::reference();
            pOVar5 = *(Object **)(pSVar10 + -8);
            pOVar2 = *(Object **)pRVar6;
            if (cVar4 == '\0') {
              pOVar12 = (Object *)0x0;
            }
            local_b8 = *(long *)pSVar10;
            *(undefined8 *)pSVar10 = 0;
            if (pOVar2 == pOVar5) {
              lVar11 = 0;
            }
            else {
              *(Object **)(pSVar10 + -8) = pOVar2;
              if (pOVar2 != (Object *)0x0) goto LAB_0011bd9c;
LAB_0011bc60:
              if (((pOVar5 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0'))
                 && (cVar4 = predelete_handler(pOVar5), cVar4 != '\0')) {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
              lVar11 = *(long *)pSVar10;
            }
          }
          if (*(long *)(pRVar6 + 8) != lVar11) {
            CowData<char32_t>::_unref((CowData<char32_t> *)pSVar10);
            *(long *)pSVar10 = *(long *)(pRVar6 + 8);
            *(long *)(pRVar6 + 8) = 0;
          }
          pOVar5 = *(Object **)pRVar6;
          if (pOVar12 != pOVar5) {
            *(Object **)pRVar6 = pOVar12;
            if ((pOVar12 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
              *(long *)pRVar6 = 0;
            }
            if (((pOVar5 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
               (cVar4 = predelete_handler(pOVar5), cVar4 != '\0')) {
              (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
              Memory::free_static(pOVar5,false);
            }
          }
          if (local_b8 == *(long *)(pRVar6 + 8)) {
            if (local_b8 != 0) {
              plVar9 = (long *)(local_b8 + -0x10);
              LOCK();
              *plVar9 = *plVar9 + -1;
              UNLOCK();
              if (*plVar9 == 0) {
                Memory::free_static(plVar9,false);
              }
            }
          }
          else {
            CowData<char32_t>::_unref((CowData<char32_t> *)(pRVar6 + 8));
            *(long *)(pRVar6 + 8) = local_b8;
          }
          if (((pOVar12 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
             (cVar4 = predelete_handler(pOVar12), cVar4 != '\0')) {
            (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
            Memory::free_static(pOVar12,false);
          }
        }
        local_c0 = local_c0 + 1;
        pSVar10 = pSVar10 + 0x10;
      } while( true );
    }
LAB_0011bfce:
    local_90 = &local_58;
    lVar11 = lVar8 + -2 >> 1;
    pRVar7 = param_3 + (param_1 + lVar11) * 0x10 + 8;
    while( true ) {
      local_58 = (Object *)0x0;
      if ((*(Object **)((CowData *)pRVar7 + -8) != (Object *)0x0) &&
         (local_58 = *(Object **)((CowData *)pRVar7 + -8), cVar4 = RefCounted::reference(),
         cVar4 == '\0')) {
        local_58 = (Object *)0x0;
      }
      local_50[0] = 0;
      if (*(long *)pRVar7 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_50,(CowData *)pRVar7);
      }
      adjust_heap(param_1,lVar11,lVar8,local_90,param_3);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
      pOVar12 = local_58;
      if (((local_58 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(pOVar12), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
        Memory::free_static(pOVar12,false);
      }
      if (lVar11 == 0) break;
      pRVar7 = (ResourceSort_conflict *)((CowData *)pRVar7 + -0x10);
      lVar11 = lVar11 + -1;
    }
    pRVar6 = param_3 + param_1 * 0x10;
    pRVar7 = param_3 + (local_c0 + -1) * 0x10 + 8;
    lVar8 = (local_c0 + -1) - param_1;
    do {
      local_68 = (Object *)0x0;
      pOVar12 = *(Object **)((CowData<char32_t> *)pRVar7 + -8);
      if ((pOVar12 != (Object *)0x0) &&
         (cVar4 = RefCounted::reference(), local_68 = pOVar12, cVar4 == '\0')) {
        local_68 = (Object *)0x0;
      }
      local_60 = 0;
      lVar11 = *(long *)pRVar7;
      if (*(long *)pRVar7 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)pRVar7);
        lVar11 = local_60;
      }
      pOVar12 = *(Object **)pRVar6;
      pOVar5 = *(Object **)((CowData<char32_t> *)pRVar7 + -8);
      if (pOVar12 != pOVar5) {
        *(Object **)((CowData<char32_t> *)pRVar7 + -8) = pOVar12;
        if ((pOVar12 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
          *(undefined8 *)((CowData<char32_t> *)pRVar7 + -8) = 0;
        }
        if (((pOVar5 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
           (cVar4 = predelete_handler(pOVar5), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
      if (*(long *)pRVar7 != *(long *)(pRVar6 + 8)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pRVar7,(CowData *)(pRVar6 + 8));
      }
      local_58 = (Object *)0x0;
      if (local_68 != (Object *)0x0) {
        local_58 = local_68;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          local_58 = (Object *)0x0;
        }
      }
      local_50[0] = 0;
      if (lVar11 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_50,(CowData *)&local_60);
      }
      adjust_heap(param_1,0,lVar8,local_90,param_3);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
      pOVar12 = local_58;
      if (((local_58 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(pOVar12), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
        Memory::free_static(pOVar12,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (((local_68 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(local_68), cVar4 != '\0')) {
        (**(code **)(*(long *)local_68 + 0x140))(local_68);
        Memory::free_static(local_68,false);
      }
      pRVar7 = (ResourceSort_conflict *)((CowData<char32_t> *)pRVar7 + -0x10);
      bVar3 = 1 < lVar8;
      lVar8 = lVar8 + -1;
    } while (bVar3);
  }
LAB_0011bf56:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_0011bddb:
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  if (((local_58 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar12 = local_58, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_58), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  introsort(local_c0,local_a0,param_3,param_4);
  lVar8 = local_c0 - param_1;
  if (lVar8 < 0x11) goto LAB_0011bf56;
  if (param_4 == 0) goto LAB_0011bfce;
  local_a0 = local_c0;
  goto LAB_0011bab6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, ResourceLoaderText::ExtResource, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   ResourceLoaderText::ExtResource> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,ResourceLoaderText::ExtResource,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoaderText::ExtResource>>>
::operator[](HashMap<String,ResourceLoaderText::ExtResource,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoaderText::ExtResource>>>
             *this,String *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  long lVar4;
  Object *pOVar5;
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
  undefined1 auVar37 [16];
  undefined1 (*pauVar38) [16];
  char cVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  undefined8 uVar43;
  void *__s_00;
  undefined1 (*pauVar44) [16];
  void *pvVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  ulong uVar49;
  undefined1 *puVar50;
  undefined8 uVar51;
  uint uVar52;
  uint uVar53;
  ulong uVar54;
  long lVar55;
  uint uVar56;
  uint uVar57;
  undefined1 (*pauVar58) [16];
  long in_FS_OFFSET;
  undefined1 local_98 [16];
  undefined8 local_88 [2];
  undefined1 local_78 [16];
  long local_68;
  undefined1 local_60 [16];
  undefined8 local_50 [2];
  long local_40;
  
  uVar57 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 8) == 0) {
LAB_0011ca41:
    local_88[0] = 0;
    local_98 = (undefined1  [16])0x0;
    uVar49 = (ulong)uVar57;
    uVar42 = uVar49 * 4;
    uVar54 = uVar49 * 8;
    uVar43 = Memory::alloc_static(uVar42,false);
    *(undefined8 *)(this + 0x10) = uVar43;
    pvVar45 = (void *)Memory::alloc_static(uVar54,false);
    *(void **)(this + 8) = pvVar45;
    if (uVar57 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar45 + uVar54)) && (pvVar45 < (void *)((long)pvVar3 + uVar42))
         ) {
        uVar42 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar42 * 4) = 0;
          *(undefined8 *)((long)pvVar45 + uVar42 * 8) = 0;
          uVar42 = uVar42 + 1;
        } while (uVar49 != uVar42);
      }
      else {
        memset(pvVar3,0,uVar42);
        memset(pvVar45,0,uVar54);
      }
LAB_0011c8fe:
      iVar46 = *(int *)(this + 0x2c);
      if (iVar46 != 0) {
LAB_0011c90e:
        uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar53 = String::hash();
        uVar42 = CONCAT44(0,uVar40);
        lVar55 = *(long *)(this + 0x10);
        uVar41 = 1;
        if (uVar53 != 0) {
          uVar41 = uVar53;
        }
        uVar56 = 0;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = (ulong)uVar41 * lVar4;
        auVar34._8_8_ = 0;
        auVar34._0_8_ = uVar42;
        lVar47 = SUB168(auVar18 * auVar34,8);
        uVar53 = *(uint *)(lVar55 + lVar47 * 4);
        uVar52 = SUB164(auVar18 * auVar34,8);
        if (uVar53 != 0) {
          do {
            if (uVar53 == uVar41) {
              cVar39 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar47 * 8) + 0x10),
                                          param_1);
              if (cVar39 != '\0') {
                lVar4 = *(long *)(*(long *)(this + 8) + (ulong)uVar52 * 8);
                pOVar5 = *(Object **)(lVar4 + 0x18);
                if (pOVar5 != (Object *)0x0) {
                  *(undefined8 *)(lVar4 + 0x18) = 0;
                  cVar39 = RefCounted::unreference();
                  if ((cVar39 != '\0') && (cVar39 = predelete_handler(pOVar5), cVar39 != '\0')) {
                    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                    Memory::free_static(pOVar5,false);
                  }
                }
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)(lVar4 + 0x20),(CowData *)(local_98 + 8));
                CowData<char32_t>::_ref((CowData<char32_t> *)(lVar4 + 0x28),(CowData *)local_88);
                pauVar44 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar52 * 8);
                goto LAB_0011c780;
              }
              lVar55 = *(long *)(this + 0x10);
            }
            uVar56 = uVar56 + 1;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = (ulong)(uVar52 + 1) * lVar4;
            auVar35._8_8_ = 0;
            auVar35._0_8_ = uVar42;
            lVar47 = SUB168(auVar19 * auVar35,8);
            uVar53 = *(uint *)(lVar55 + lVar47 * 4);
            uVar52 = SUB164(auVar19 * auVar35,8);
          } while ((uVar53 != 0) &&
                  (auVar20._8_8_ = 0, auVar20._0_8_ = (ulong)uVar53 * lVar4, auVar36._8_8_ = 0,
                  auVar36._0_8_ = uVar42, auVar21._8_8_ = 0,
                  auVar21._0_8_ = (ulong)((uVar40 + uVar52) - SUB164(auVar20 * auVar36,8)) * lVar4,
                  auVar37._8_8_ = 0, auVar37._0_8_ = uVar42, uVar56 <= SUB164(auVar21 * auVar37,8)))
          ;
        }
        iVar46 = *(int *)(this + 0x2c);
      }
      uVar49 = (ulong)uVar57;
      goto LAB_0011c350;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar45 == (void *)0x0) goto LAB_0011c350;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0011c90e;
LAB_0011c376:
    uVar57 = *(uint *)(this + 0x28);
    if (uVar57 == 0x1c) {
      pauVar44 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011c780;
    }
    uVar42 = (ulong)(uVar57 + 1);
    uVar40 = *(uint *)(hash_table_size_primes + (ulong)uVar57 * 4);
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar57 + 1 < 2) {
      uVar42 = 2;
    }
    uVar57 = *(uint *)(hash_table_size_primes + uVar42 * 4);
    *(int *)(this + 0x28) = (int)uVar42;
    pvVar45 = *(void **)(this + 8);
    uVar49 = (ulong)uVar57;
    uVar42 = uVar49 * 4;
    pvVar3 = *(void **)(this + 0x10);
    uVar54 = uVar49 * 8;
    uVar43 = Memory::alloc_static(uVar42,false);
    *(undefined8 *)(this + 0x10) = uVar43;
    __s_00 = (void *)Memory::alloc_static(uVar54,false);
    *(void **)(this + 8) = __s_00;
    if (uVar57 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar54)) && (__s_00 < (void *)((long)__s + uVar42))) {
        uVar42 = 0;
        do {
          *(undefined4 *)((long)__s + uVar42 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar42 * 8) = 0;
          uVar42 = uVar42 + 1;
        } while (uVar42 != uVar49);
      }
      else {
        memset(__s,0,uVar42);
        memset(__s_00,0,uVar54);
      }
    }
    uVar42 = 0;
    if (uVar40 != 0) {
      do {
        uVar57 = *(uint *)((long)pvVar3 + uVar42 * 4);
        if (uVar57 != 0) {
          uVar52 = 0;
          lVar4 = *(long *)(this + 0x10);
          uVar41 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar54 = CONCAT44(0,uVar41);
          lVar55 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)uVar57 * lVar55;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar54;
          lVar47 = SUB168(auVar6 * auVar22,8);
          puVar1 = (uint *)(lVar4 + lVar47 * 4);
          iVar46 = SUB164(auVar6 * auVar22,8);
          uVar53 = *puVar1;
          uVar43 = *(undefined8 *)((long)pvVar45 + uVar42 * 8);
          while (uVar53 != 0) {
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar53 * lVar55;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar54;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)((uVar41 + iVar46) - SUB164(auVar7 * auVar23,8)) * lVar55;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar54;
            uVar56 = SUB164(auVar8 * auVar24,8);
            uVar51 = uVar43;
            if (uVar56 < uVar52) {
              *puVar1 = uVar57;
              puVar2 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar51 = *puVar2;
              *puVar2 = uVar43;
              uVar57 = uVar53;
              uVar52 = uVar56;
            }
            uVar52 = uVar52 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)(iVar46 + 1) * lVar55;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar54;
            lVar47 = SUB168(auVar9 * auVar25,8);
            puVar1 = (uint *)(lVar4 + lVar47 * 4);
            iVar46 = SUB164(auVar9 * auVar25,8);
            uVar43 = uVar51;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar43;
          *puVar1 = uVar57;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar42 = uVar42 + 1;
      } while (uVar40 != uVar42);
      Memory::free_static(pvVar45,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      uVar42 = CONCAT44(0,uVar57);
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar41 = String::hash();
      uVar40 = 1;
      if (uVar41 != 0) {
        uVar40 = uVar41;
      }
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)uVar40 * lVar4;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar42;
      lVar47 = SUB168(auVar14 * auVar30,8);
      lVar55 = *(long *)(this + 0x10);
      uVar53 = SUB164(auVar14 * auVar30,8);
      uVar41 = *(uint *)(lVar55 + lVar47 * 4);
      if (uVar41 == 0) {
        lVar48 = *(long *)(this + 8);
      }
      else {
        uVar52 = 0;
        lVar48 = *(long *)(this + 8);
        do {
          if (uVar41 == uVar40) {
            cVar39 = String::operator==((String *)(*(long *)(lVar48 + lVar47 * 8) + 0x10),param_1);
            if (cVar39 != '\0') {
              puVar50 = (undefined1 *)(*(long *)(*(long *)(this + 8) + (ulong)uVar53 * 8) + 0x18);
              goto LAB_0011c7ae;
            }
            lVar55 = *(long *)(this + 0x10);
            lVar48 = *(long *)(this + 8);
          }
          uVar52 = uVar52 + 1;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = (ulong)(uVar53 + 1) * lVar4;
          auVar31._8_8_ = 0;
          auVar31._0_8_ = uVar42;
          lVar47 = SUB168(auVar15 * auVar31,8);
          uVar41 = *(uint *)(lVar55 + lVar47 * 4);
          uVar53 = SUB164(auVar15 * auVar31,8);
        } while ((uVar41 != 0) &&
                (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)uVar41 * lVar4, auVar32._8_8_ = 0,
                auVar32._0_8_ = uVar42, auVar17._8_8_ = 0,
                auVar17._0_8_ = (ulong)((uVar53 + uVar57) - SUB164(auVar16 * auVar32,8)) * lVar4,
                auVar33._8_8_ = 0, auVar33._0_8_ = uVar42, uVar52 <= SUB164(auVar17 * auVar33,8)));
      }
      local_88[0] = 0;
      local_98 = (undefined1  [16])0x0;
      uVar57 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar48 == 0) goto LAB_0011ca41;
      goto LAB_0011c8fe;
    }
    local_88[0] = 0;
    uVar49 = (ulong)uVar57;
    local_98 = (undefined1  [16])0x0;
    iVar46 = 0;
LAB_0011c350:
    if ((float)uVar49 * __LC16 < (float)(iVar46 + 1)) goto LAB_0011c376;
  }
  local_68 = 0;
  local_78 = (undefined1  [16])0x0;
  if (*(long *)param_1 == 0) {
    local_60 = (undefined1  [16])0x0;
    local_50[0] = 0;
    pauVar44 = (undefined1 (*) [16])operator_new(0x30,"");
    *(undefined8 *)pauVar44[1] = 0;
    *pauVar44 = (undefined1  [16])0x0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)param_1);
    lVar4 = local_68;
    uVar43 = local_78._0_8_;
    uVar51 = local_78._8_8_;
    local_50[0] = 0;
    local_60 = (undefined1  [16])0x0;
    pauVar44 = (undefined1 (*) [16])operator_new(0x30,"");
    *(undefined8 *)pauVar44[1] = 0;
    *(undefined8 *)*pauVar44 = uVar43;
    *(undefined8 *)(*pauVar44 + 8) = uVar51;
    if (lVar4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar44 + 1),(CowData *)&local_68);
    }
  }
  *(undefined8 *)(pauVar44[2] + 8) = 0;
  *(undefined1 (*) [16])(pauVar44[1] + 8) = (undefined1  [16])0x0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)(local_60 + 8));
  uVar43 = local_60._0_8_;
  if ((((Object *)local_60._0_8_ != (Object *)0x0) &&
      (cVar39 = RefCounted::unreference(), cVar39 != '\0')) &&
     (cVar39 = predelete_handler((Object *)uVar43), cVar39 != '\0')) {
    (**(code **)(*(long *)uVar43 + 0x140))(uVar43);
    Memory::free_static((void *)uVar43,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar44;
  }
  else {
    *puVar2 = pauVar44;
    *(undefined8 **)(*pauVar44 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar44;
  uVar40 = String::hash();
  lVar4 = *(long *)(this + 0x10);
  uVar57 = 1;
  if (uVar40 != 0) {
    uVar57 = uVar40;
  }
  uVar53 = 0;
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar42 = CONCAT44(0,uVar40);
  lVar55 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = (ulong)uVar57 * lVar55;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar42;
  lVar48 = SUB168(auVar10 * auVar26,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar4 + lVar48 * 4);
  iVar46 = SUB164(auVar10 * auVar26,8);
  uVar41 = *puVar1;
  pauVar38 = pauVar44;
  while (uVar41 != 0) {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)uVar41 * lVar55;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar42;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)((iVar46 + uVar40) - SUB164(auVar11 * auVar27,8)) * lVar55;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar42;
    uVar52 = SUB164(auVar12 * auVar28,8);
    pauVar58 = pauVar38;
    if (uVar52 < uVar53) {
      *puVar1 = uVar57;
      puVar2 = (undefined8 *)(lVar47 + lVar48 * 8);
      pauVar58 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar38;
      uVar53 = uVar52;
      uVar57 = uVar41;
    }
    uVar53 = uVar53 + 1;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)(iVar46 + 1) * lVar55;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar42;
    lVar48 = SUB168(auVar13 * auVar29,8);
    puVar1 = (uint *)(lVar4 + lVar48 * 4);
    iVar46 = SUB164(auVar13 * auVar29,8);
    pauVar38 = pauVar58;
    uVar41 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar47 + lVar48 * 8) = pauVar38;
  *puVar1 = uVar57;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011c780:
  puVar50 = pauVar44[1] + 8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)(local_98 + 8));
  uVar43 = local_98._0_8_;
  if ((((Object *)local_98._0_8_ != (Object *)0x0) &&
      (cVar39 = RefCounted::unreference(), cVar39 != '\0')) &&
     (cVar39 = predelete_handler((Object *)uVar43), cVar39 != '\0')) {
    (**(code **)(*(long *)uVar43 + 0x140))(uVar43);
    Memory::free_static((void *)uVar43,false);
  }
LAB_0011c7ae:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar50;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

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
    local_48 = "RefCounted";
    local_60 = 0;
    local_40 = 10;
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
    if ((code *)PTR__bind_methods_00126008 != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoader::_initialize_classv() */

void ResourceFormatLoader::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
      Object::initialize_class();
      local_68 = 0;
      local_50 = 6;
      local_58 = "Object";
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "RefCounted";
      local_70 = 0;
      local_50 = 10;
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
      if ((code *)PTR__bind_methods_00126018 != RefCounted::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_58 = "RefCounted";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ResourceFormatLoader";
    local_70 = 0;
    local_50 = 0x14;
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
    if ((code *)PTR__bind_methods_00126010 != RefCounted::_bind_methods) {
      ResourceFormatLoader::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ResourceFormatSaver::_initialize_classv() */

void ResourceFormatSaver::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
      Object::initialize_class();
      local_68 = 0;
      local_50 = 6;
      local_58 = "Object";
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "RefCounted";
      local_70 = 0;
      local_50 = 10;
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
      if ((code *)PTR__bind_methods_00126018 != RefCounted::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_58 = "RefCounted";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ResourceFormatSaver";
    local_70 = 0;
    local_50 = 0x13;
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
    if ((code *)PTR__bind_methods_00126020 != RefCounted::_bind_methods) {
      ResourceFormatSaver::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

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
  local_78 = "RefCounted";
  local_88 = 0;
  local_90 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
  local_98 = 0;
  local_70 = 10;
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
      goto LAB_0011d3ec;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d3ec:
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
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
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



/* ResourceFormatLoader::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ResourceFormatLoader::_get_property_listv(ResourceFormatLoader *this,List *param_1,bool param_2)

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
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ResourceFormatLoader";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ResourceFormatLoader";
  local_98 = 0;
  local_70 = 0x14;
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
      goto LAB_0011d771;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d771:
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
  StringName::StringName((StringName *)&local_78,"ResourceFormatLoader",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatSaver::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ResourceFormatSaver::_get_property_listv(ResourceFormatSaver *this,List *param_1,bool param_2)

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
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ResourceFormatSaver";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ResourceFormatSaver";
  local_98 = 0;
  local_70 = 0x13;
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
      goto LAB_0011da21;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011da21:
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
  StringName::StringName((StringName *)&local_78,"ResourceFormatSaver",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceLoaderText::_parse_ext_resources(void*, VariantParser::Stream*, Ref<Resource>&, int&,
   String&) */

void ResourceLoaderText::_parse_ext_resources
               (void *param_1,Stream *param_2,Ref *param_3,int *param_4,String *param_5)

{
  _parse_ext_resource((ResourceLoaderText *)param_1,param_2,param_3,param_4,param_5);
  return;
}



/* ResourceLoaderText::~ResourceLoaderText() */

void __thiscall ResourceLoaderText::~ResourceLoaderText(ResourceLoaderText *this)

{
  uint uVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  
  if (*(long *)(this + 0x2190) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0x2190);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  pvVar5 = *(void **)(this + 0x2140);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x2164) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x2160) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x2164) = 0;
        *(undefined1 (*) [16])(this + 0x2150) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x2148) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x2148) + lVar4) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x18));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x10));
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x2140);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar1 << 2 != lVar4);
        *(undefined4 *)(this + 0x2164) = 0;
        *(undefined1 (*) [16])(this + 0x2150) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0011dc50;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x2148),false);
  }
LAB_0011dc50:
  pvVar5 = *(void **)(this + 0x20e8);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x210c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x2108) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x210c) = 0;
        *(undefined1 (*) [16])(this + 0x20f8) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20f0) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x20f0) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x10));
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x20e8);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar1 << 2 != lVar4);
        *(undefined4 *)(this + 0x210c) = 0;
        *(undefined1 (*) [16])(this + 0x20f8) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0011dd1a;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20f0),false);
  }
LAB_0011dd1a:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20d8));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20d0));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20c8));
  pvVar5 = *(void **)(this + 0x2098);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x20bc) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20b8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x20bc) = 0;
        *(undefined1 (*) [16])(this + 0x20a8) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20a0) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x20a0) + lVar4) = 0;
            if (*(long *)((long)pvVar5 + 0x18) != 0) {
              cVar3 = RefCounted::unreference();
              if (cVar3 != '\0') {
                pOVar2 = *(Object **)((long)pvVar5 + 0x18);
                cVar3 = predelete_handler(pOVar2);
                if (cVar3 != '\0') {
                  (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                  Memory::free_static(pOVar2,false);
                }
              }
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x10));
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x2098);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x20bc) = 0;
        *(undefined1 (*) [16])(this + 0x20a8) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0011de00;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20a0),false);
  }
LAB_0011de00:
  pvVar5 = *(void **)(this + 0x2068);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x208c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x2088) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x208c) = 0;
        *(undefined1 (*) [16])(this + 0x2078) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x2070) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x2070) + lVar4) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x28));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x20));
            if (*(long *)((long)pvVar5 + 0x18) != 0) {
              cVar3 = RefCounted::unreference();
              if (cVar3 != '\0') {
                pOVar2 = *(Object **)((long)pvVar5 + 0x18);
                cVar3 = predelete_handler(pOVar2);
                if (cVar3 != '\0') {
                  (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                  Memory::free_static(pOVar2,false);
                }
              }
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x10));
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x2068);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x208c) = 0;
        *(undefined1 (*) [16])(this + 0x2078) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0011ded4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x2070),false);
  }
LAB_0011ded4:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x2050));
  *(code **)(this + 0x28) = Memory::realloc_static;
  if (*(long *)(this + 0x2040) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0x2040);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if (*(long *)(this + 0x20) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0x20);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x18));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x10));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
  return;
}



/* Ref<FileAccess>::unref() */

void __thiscall Ref<FileAccess>::unref(Ref<FileAccess> *this)

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



/* Ref<PackedScene>::unref() */

void __thiscall Ref<PackedScene>::unref(Ref<PackedScene> *this)

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



/* HashMap<String, Variant, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant> > >::_lookup_pos(String const&, unsigned
   int&) const */

undefined8 __thiscall
HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
::_lookup_pos(HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
              *this,String *param_1,uint *param_2)

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
    uVar11 = String::hash();
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
          uVar12 = String::operator==((String *)(*(long *)(*(long *)(this + 8) + lVar15 * 8) + 0x10)
                                      ,param_1);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, Variant, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant> > >::operator[](String const&) */

Variant * __thiscall
HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
::operator[](HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>
             *this,String *param_1)

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
  char cVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  undefined8 uVar27;
  void *__s_00;
  undefined8 *puVar28;
  void *pvVar29;
  int iVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  ulong uVar34;
  undefined8 uVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  undefined8 *puVar39;
  long in_FS_OFFSET;
  Variant *local_d0;
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
  cVar23 = _lookup_pos(this,param_1,&local_a0);
  if (cVar23 != '\0') {
    local_d0 = (Variant *)(*(long *)(*(long *)(this + 8) + (ulong)local_a0 * 8) + 0x18);
    goto LAB_0011e7e4;
  }
  local_98[0] = 0;
  local_98[1] = 0;
  uVar33 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  local_90 = (undefined1  [16])0x0;
  if (*(long *)(this + 8) == 0) {
    uVar34 = (ulong)uVar33;
    uVar26 = uVar34 * 4;
    uVar38 = uVar34 * 8;
    uVar27 = Memory::alloc_static(uVar26,false);
    *(undefined8 *)(this + 0x10) = uVar27;
    pvVar29 = (void *)Memory::alloc_static(uVar38,false);
    *(void **)(this + 8) = pvVar29;
    if (uVar33 != 0) {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)pvVar29 + uVar38)) && (pvVar29 < (void *)((long)pvVar4 + uVar26))
         ) {
        uVar26 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar26 * 4) = 0;
          *(undefined8 *)((long)pvVar29 + uVar26 * 8) = 0;
          uVar26 = uVar26 + 1;
        } while (uVar34 != uVar26);
      }
      else {
        memset(pvVar4,0,uVar26);
        memset(pvVar29,0,uVar38);
      }
    }
  }
  local_9c = 0;
  cVar23 = _lookup_pos(this,param_1,&local_9c);
  if (cVar23 == '\0') {
    if ((float)uVar33 * __LC16 < (float)(*(int *)(this + 0x2c) + 1)) {
      uVar33 = *(uint *)(this + 0x28);
      if (uVar33 == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        local_d0 = (Variant *)0x18;
        goto LAB_0011e7cb;
      }
      uVar26 = (ulong)(uVar33 + 1);
      *(undefined4 *)(this + 0x2c) = 0;
      uVar25 = *(uint *)(hash_table_size_primes + (ulong)uVar33 * 4);
      if (uVar33 + 1 < 2) {
        uVar26 = 2;
      }
      uVar33 = *(uint *)(hash_table_size_primes + uVar26 * 4);
      uVar34 = (ulong)uVar33;
      *(int *)(this + 0x28) = (int)uVar26;
      pvVar29 = *(void **)(this + 8);
      uVar26 = uVar34 * 4;
      uVar38 = uVar34 * 8;
      pvVar4 = *(void **)(this + 0x10);
      uVar27 = Memory::alloc_static(uVar26,false);
      *(undefined8 *)(this + 0x10) = uVar27;
      __s_00 = (void *)Memory::alloc_static(uVar38,false);
      *(void **)(this + 8) = __s_00;
      if (uVar33 != 0) {
        __s = *(void **)(this + 0x10);
        if ((__s < (void *)((long)__s_00 + uVar38)) && (__s_00 < (void *)((long)__s + uVar26))) {
          uVar26 = 0;
          do {
            *(undefined4 *)((long)__s + uVar26 * 4) = 0;
            *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
            uVar26 = uVar26 + 1;
          } while (uVar34 != uVar26);
        }
        else {
          memset(__s,0,uVar26);
          memset(__s_00,0,uVar38);
        }
      }
      if (uVar25 != 0) {
        uVar26 = 0;
        do {
          uVar33 = *(uint *)((long)pvVar4 + uVar26 * 4);
          if (uVar33 != 0) {
            lVar5 = *(long *)(this + 0x10);
            uVar36 = 0;
            uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
            uVar38 = CONCAT44(0,uVar3);
            lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar33 * lVar6;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar38;
            lVar31 = SUB168(auVar7 * auVar15,8);
            puVar1 = (uint *)(lVar5 + lVar31 * 4);
            iVar30 = SUB164(auVar7 * auVar15,8);
            uVar37 = *puVar1;
            uVar27 = *(undefined8 *)((long)pvVar29 + uVar26 * 8);
            while (uVar37 != 0) {
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (ulong)uVar37 * lVar6;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar38;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = (ulong)((uVar3 + iVar30) - SUB164(auVar8 * auVar16,8)) * lVar6;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar38;
              uVar24 = SUB164(auVar9 * auVar17,8);
              uVar35 = uVar27;
              if (uVar24 < uVar36) {
                *puVar1 = uVar33;
                puVar28 = (undefined8 *)((long)__s_00 + lVar31 * 8);
                uVar35 = *puVar28;
                *puVar28 = uVar27;
                uVar33 = uVar37;
                uVar36 = uVar24;
              }
              uVar36 = uVar36 + 1;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = (ulong)(iVar30 + 1) * lVar6;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = uVar38;
              lVar31 = SUB168(auVar10 * auVar18,8);
              puVar1 = (uint *)(lVar5 + lVar31 * 4);
              iVar30 = SUB164(auVar10 * auVar18,8);
              uVar27 = uVar35;
              uVar37 = *puVar1;
            }
            *(undefined8 *)((long)__s_00 + lVar31 * 8) = uVar27;
            *puVar1 = uVar33;
            *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
          }
          uVar26 = uVar26 + 1;
        } while (uVar25 != uVar26);
        Memory::free_static(pvVar29,false);
        Memory::free_static(pvVar4,false);
      }
    }
    local_68 = 0;
    local_78 = (undefined1  [16])0x0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)param_1);
    }
    Variant::Variant((Variant *)local_60,(Variant *)local_98);
    puVar28 = (undefined8 *)operator_new(0x30,"");
    puVar28[2] = 0;
    *puVar28 = local_78._0_8_;
    puVar28[1] = local_78._8_8_;
    if (local_68 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar28 + 2),(CowData *)&local_68);
    }
    local_d0 = (Variant *)(puVar28 + 3);
    Variant::Variant(local_d0,(Variant *)local_60);
    if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if (*(undefined8 **)(this + 0x20) == (undefined8 *)0x0) {
      *(undefined8 **)(this + 0x18) = puVar28;
    }
    else {
      **(undefined8 **)(this + 0x20) = puVar28;
      puVar28[1] = *(undefined8 *)(this + 0x20);
    }
    *(undefined8 **)(this + 0x20) = puVar28;
    uVar25 = String::hash();
    lVar5 = *(long *)(this + 0x10);
    uVar33 = 1;
    if (uVar25 != 0) {
      uVar33 = uVar25;
    }
    uVar37 = 0;
    uVar25 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar26 = CONCAT44(0,uVar25);
    lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)uVar33 * lVar6;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar26;
    lVar32 = SUB168(auVar11 * auVar19,8);
    lVar31 = *(long *)(this + 8);
    puVar1 = (uint *)(lVar5 + lVar32 * 4);
    iVar30 = SUB164(auVar11 * auVar19,8);
    uVar3 = *puVar1;
    while (uVar3 != 0) {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar3 * lVar6;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar26;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)((uVar25 + iVar30) - SUB164(auVar12 * auVar20,8)) * lVar6;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar26;
      uVar36 = SUB164(auVar13 * auVar21,8);
      puVar39 = puVar28;
      if (uVar36 < uVar37) {
        *puVar1 = uVar33;
        puVar2 = (undefined8 *)(lVar31 + lVar32 * 8);
        puVar39 = (undefined8 *)*puVar2;
        *puVar2 = puVar28;
        uVar37 = uVar36;
        uVar33 = uVar3;
      }
      uVar37 = uVar37 + 1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)(iVar30 + 1) * lVar6;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar26;
      lVar32 = SUB168(auVar14 * auVar22,8);
      puVar1 = (uint *)(lVar5 + lVar32 * 4);
      iVar30 = SUB164(auVar14 * auVar22,8);
      puVar28 = puVar39;
      uVar3 = *puVar1;
    }
    *(undefined8 **)(lVar31 + lVar32 * 8) = puVar28;
    *puVar1 = uVar33;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  else {
    uVar26 = (ulong)local_9c;
    Variant::operator=((Variant *)(*(long *)(*(long *)(this + 8) + uVar26 * 8) + 0x18),
                       (Variant *)local_98);
    local_d0 = (Variant *)(*(long *)(*(long *)(this + 8) + uVar26 * 8) + 0x18);
  }
LAB_0011e7cb:
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0011e7e4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_d0;
}



/* Ref<SceneState>::unref() */

void __thiscall Ref<SceneState>::unref(Ref<SceneState> *this)

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



/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::_lookup_pos(String const&, unsigned
   int&) const */

undefined8 __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::_lookup_pos(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
              *this,String *param_1,uint *param_2)

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
    uVar11 = String::hash();
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
          uVar12 = String::operator==((String *)(*(long *)(*(long *)(this + 8) + lVar15 * 8) + 0x10)
                                      ,param_1);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::operator[](HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
             *this,String *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *__s;
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
  char cVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 uVar33;
  void *__s_00;
  undefined1 (*pauVar34) [16];
  void *pvVar35;
  int iVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  undefined8 uVar40;
  uint *puVar41;
  uint uVar42;
  uint uVar43;
  ulong uVar44;
  long lVar45;
  uint uVar46;
  undefined1 (*pauVar47) [16];
  undefined1 (*pauVar48) [16];
  long in_FS_OFFSET;
  uint local_74;
  undefined8 local_70;
  undefined1 local_68 [16];
  long local_58;
  undefined8 local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar46 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_0011f0ec:
    local_70 = 0;
    uVar39 = (ulong)uVar46;
    uVar32 = uVar39 * 4;
    uVar44 = uVar39 * 8;
    uVar33 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(this + 0x10) = uVar33;
    pvVar35 = (void *)Memory::alloc_static(uVar44,false);
    *(void **)(this + 8) = pvVar35;
    if (uVar46 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar35 + uVar44)) && (pvVar35 < (void *)((long)pvVar2 + uVar32))
         ) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar32 * 4) = 0;
          *(undefined8 *)((long)pvVar35 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar39 != uVar32);
      }
      else {
        memset(pvVar2,0,uVar32);
        memset(pvVar35,0,uVar44);
      }
    }
  }
  else if (*(int *)(this + 0x2c) == 0) {
    local_70 = 0;
  }
  else {
    uVar32 = CONCAT44(0,uVar46);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar31 = String::hash();
    lVar45 = *(long *)(this + 0x10);
    uVar30 = 1;
    if (uVar31 != 0) {
      uVar30 = uVar31;
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)uVar30 * lVar3;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar32;
    lVar37 = SUB168(auVar12 * auVar24,8);
    uVar31 = *(uint *)(lVar45 + lVar37 * 4);
    uVar43 = SUB164(auVar12 * auVar24,8);
    if (uVar31 == 0) {
      lVar38 = *(long *)(this + 8);
    }
    else {
      lVar38 = *(long *)(this + 8);
      uVar42 = 0;
      do {
        if (uVar30 == uVar31) {
          cVar28 = String::operator==((String *)(*(long *)(lVar38 + lVar37 * 8) + 0x10),param_1);
          if (cVar28 != '\0') {
            pauVar34 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar43 * 8);
            goto LAB_0011efb8;
          }
          lVar45 = *(long *)(this + 0x10);
          lVar38 = *(long *)(this + 8);
        }
        uVar42 = uVar42 + 1;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)(uVar43 + 1) * lVar3;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = uVar32;
        lVar37 = SUB168(auVar13 * auVar25,8);
        uVar31 = *(uint *)(lVar45 + lVar37 * 4);
        uVar43 = SUB164(auVar13 * auVar25,8);
      } while ((uVar31 != 0) &&
              (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar31 * lVar3, auVar26._8_8_ = 0,
              auVar26._0_8_ = uVar32, auVar15._8_8_ = 0,
              auVar15._0_8_ = (ulong)((uVar43 + uVar46) - SUB164(auVar14 * auVar26,8)) * lVar3,
              auVar27._8_8_ = 0, auVar27._0_8_ = uVar32, uVar42 <= SUB164(auVar15 * auVar27,8)));
    }
    local_70 = 0;
    uVar46 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (lVar38 == 0) goto LAB_0011f0ec;
  }
  local_74 = 0;
  cVar28 = _lookup_pos(this,param_1,&local_74);
  if (cVar28 == '\0') {
    if ((float)uVar46 * __LC16 < (float)(*(int *)(this + 0x2c) + 1)) {
      uVar46 = *(uint *)(this + 0x28);
      if (uVar46 == 0x1c) {
        pauVar34 = (undefined1 (*) [16])0x0;
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        goto LAB_0011efac;
      }
      uVar32 = (ulong)(uVar46 + 1);
      *(undefined4 *)(this + 0x2c) = 0;
      uVar30 = *(uint *)(hash_table_size_primes + (ulong)uVar46 * 4);
      if (uVar46 + 1 < 2) {
        uVar32 = 2;
      }
      uVar46 = *(uint *)(hash_table_size_primes + uVar32 * 4);
      uVar39 = (ulong)uVar46;
      *(int *)(this + 0x28) = (int)uVar32;
      pvVar35 = *(void **)(this + 8);
      uVar32 = uVar39 * 4;
      uVar44 = uVar39 * 8;
      pvVar2 = *(void **)(this + 0x10);
      uVar33 = Memory::alloc_static(uVar32,false);
      *(undefined8 *)(this + 0x10) = uVar33;
      __s_00 = (void *)Memory::alloc_static(uVar44,false);
      *(void **)(this + 8) = __s_00;
      if (uVar46 != 0) {
        __s = *(void **)(this + 0x10);
        if ((__s < (void *)((long)__s_00 + uVar44)) && (__s_00 < (void *)((long)__s + uVar32))) {
          uVar32 = 0;
          do {
            *(undefined4 *)((long)__s + uVar32 * 4) = 0;
            *(undefined8 *)((long)__s_00 + uVar32 * 8) = 0;
            uVar32 = uVar32 + 1;
          } while (uVar32 != uVar39);
        }
        else {
          memset(__s,0,uVar32);
          memset(__s_00,0,uVar44);
        }
      }
      if (uVar30 != 0) {
        uVar32 = 0;
        do {
          uVar46 = *(uint *)((long)pvVar2 + uVar32 * 4);
          if (uVar46 != 0) {
            lVar3 = *(long *)(this + 0x10);
            uVar42 = 0;
            uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
            uVar44 = CONCAT44(0,uVar31);
            lVar45 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar46 * lVar45;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar44;
            lVar37 = SUB168(auVar4 * auVar16,8);
            puVar41 = (uint *)(lVar3 + lVar37 * 4);
            iVar36 = SUB164(auVar4 * auVar16,8);
            uVar43 = *puVar41;
            uVar33 = *(undefined8 *)((long)pvVar35 + uVar32 * 8);
            while (uVar43 != 0) {
              auVar5._8_8_ = 0;
              auVar5._0_8_ = (ulong)uVar43 * lVar45;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar44;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = (ulong)((uVar31 + iVar36) - SUB164(auVar5 * auVar17,8)) * lVar45;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = uVar44;
              uVar29 = SUB164(auVar6 * auVar18,8);
              uVar40 = uVar33;
              if (uVar29 < uVar42) {
                *puVar41 = uVar46;
                puVar1 = (undefined8 *)((long)__s_00 + lVar37 * 8);
                uVar40 = *puVar1;
                *puVar1 = uVar33;
                uVar46 = uVar43;
                uVar42 = uVar29;
              }
              uVar42 = uVar42 + 1;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)(iVar36 + 1) * lVar45;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = uVar44;
              lVar37 = SUB168(auVar7 * auVar19,8);
              puVar41 = (uint *)(lVar3 + lVar37 * 4);
              iVar36 = SUB164(auVar7 * auVar19,8);
              uVar33 = uVar40;
              uVar43 = *puVar41;
            }
            *(undefined8 *)((long)__s_00 + lVar37 * 8) = uVar33;
            *puVar41 = uVar46;
            *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
          }
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar30);
        Memory::free_static(pvVar35,false);
        Memory::free_static(pvVar2,false);
      }
    }
    local_58 = 0;
    local_68 = (undefined1  [16])0x0;
    if (*(long *)param_1 == 0) {
      local_50[0] = 0;
      pauVar34 = (undefined1 (*) [16])operator_new(0x20,"");
      *(undefined8 *)pauVar34[1] = 0;
      *pauVar34 = (undefined1  [16])0x0;
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
      lVar3 = local_58;
      uVar33 = local_68._0_8_;
      uVar40 = local_68._8_8_;
      local_50[0] = 0;
      pauVar34 = (undefined1 (*) [16])operator_new(0x20,"");
      *(undefined8 *)pauVar34[1] = 0;
      *(undefined8 *)*pauVar34 = uVar33;
      *(undefined8 *)(*pauVar34 + 8) = uVar40;
      if (lVar3 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar34 + 1),(CowData *)&local_58);
      }
    }
    *(undefined8 *)(pauVar34[1] + 8) = 0;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    puVar1 = *(undefined8 **)(this + 0x20);
    if (puVar1 == (undefined8 *)0x0) {
      *(undefined1 (**) [16])(this + 0x18) = pauVar34;
    }
    else {
      *puVar1 = pauVar34;
      *(undefined8 **)(*pauVar34 + 8) = puVar1;
    }
    *(undefined1 (**) [16])(this + 0x20) = pauVar34;
    uVar30 = String::hash();
    lVar3 = *(long *)(this + 0x10);
    uVar46 = 1;
    if (uVar30 != 0) {
      uVar46 = uVar30;
    }
    lVar45 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar32 = CONCAT44(0,uVar30);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)uVar46 * lVar45;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar32;
    lVar38 = SUB168(auVar8 * auVar20,8);
    lVar37 = *(long *)(this + 8);
    puVar41 = (uint *)(lVar3 + lVar38 * 4);
    iVar36 = SUB164(auVar8 * auVar20,8);
    uVar31 = *puVar41;
    pauVar48 = pauVar34;
    if (uVar31 != 0) {
      uVar43 = 0;
      pauVar47 = pauVar34;
      do {
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)uVar31 * lVar45;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar32;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)((uVar30 + iVar36) - SUB164(auVar9 * auVar21,8)) * lVar45;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar32;
        uVar42 = SUB164(auVar10 * auVar22,8);
        pauVar48 = pauVar47;
        if (uVar42 < uVar43) {
          *puVar41 = uVar46;
          puVar1 = (undefined8 *)(lVar37 + lVar38 * 8);
          pauVar48 = (undefined1 (*) [16])*puVar1;
          *puVar1 = pauVar47;
          uVar43 = uVar42;
          uVar46 = uVar31;
        }
        uVar43 = uVar43 + 1;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (ulong)(iVar36 + 1) * lVar45;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar32;
        lVar38 = SUB168(auVar11 * auVar23,8);
        puVar41 = (uint *)(lVar3 + lVar38 * 4);
        iVar36 = SUB164(auVar11 * auVar23,8);
        uVar31 = *puVar41;
        pauVar47 = pauVar48;
      } while (uVar31 != 0);
    }
    *(undefined1 (**) [16])(lVar37 + lVar38 * 8) = pauVar48;
    *puVar41 = uVar46;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  else {
    uVar32 = (ulong)local_74;
    pauVar34 = *(undefined1 (**) [16])(*(long *)(this + 8) + uVar32 * 8);
    if (*(long *)(pauVar34[1] + 8) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar34[1] + 8),(CowData *)&local_70);
      pauVar34 = *(undefined1 (**) [16])(*(long *)(this + 8) + uVar32 * 8);
    }
  }
LAB_0011efac:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_0011efb8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar34[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<Resource>::TEMPNAMEPLACEHOLDERVALUE(Resource*) */

void __thiscall Ref<Resource>::operator=(Ref<Resource> *this,Resource *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (param_1 != (Resource *)pOVar1) {
    *(Resource **)this = param_1;
    if (param_1 != (Resource *)0x0) {
      cVar2 = RefCounted::init_ref();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
  return;
}



/* Ref<MissingResource>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */

void __thiscall Ref<MissingResource>::operator=(Ref<MissingResource> *this,Variant *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar3 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)this;
  if (pOVar1 == pOVar3) {
    return;
  }
  if (pOVar3 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(pOVar3,&Object::typeinfo,&MissingResource::typeinfo,0);
    if (pOVar1 == pOVar3) {
      return;
    }
    *(Object **)this = pOVar3;
    if ((pOVar3 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)this = 0;
    }
    if (pOVar1 == (Object *)0x0) {
      return;
    }
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
    return;
  }
  return;
}



/* Ref<MissingResource>::unref() */

void __thiscall Ref<MissingResource>::unref(Ref<MissingResource> *this)

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



/* Ref<Resource>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */

void __thiscall Ref<Resource>::operator=(Ref<Resource> *this,Variant *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar3 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)this;
  if (pOVar1 == pOVar3) {
    return;
  }
  if (pOVar3 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(pOVar3,&Object::typeinfo,&Resource::typeinfo,0);
    if (pOVar1 == pOVar3) {
      return;
    }
    *(Object **)this = pOVar3;
    if ((pOVar3 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)this = 0;
    }
    if (pOVar1 == (Object *)0x0) {
      return;
    }
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
    return;
  }
  return;
}



/* void List<PropertyInfo, DefaultAllocator>::sort_custom<Comparator<PropertyInfo> >() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::sort_custom<Comparator<PropertyInfo>>
          (List<PropertyInfo,DefaultAllocator> *this)

{
  size_t __n;
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  Element *pEVar4;
  Element **__src;
  Element **ppEVar5;
  Element *pEVar6;
  Element **ppEVar7;
  long lVar8;
  Element *pEVar9;
  long lVar10;
  Element *pEVar11;
  
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
  }
  else {
    __src[-1] = pEVar4;
  }
  if (*(long **)this != (long *)0x0) {
    ppEVar5 = __src;
    for (pEVar9 = (Element *)**(long **)this; pEVar9 != (Element *)0x0;
        pEVar9 = *(Element **)(pEVar9 + 0x30)) {
      *ppEVar5 = pEVar9;
      ppEVar5 = ppEVar5 + 1;
    }
  }
  lVar8 = 0;
  pEVar9 = pEVar4;
  do {
    pEVar9 = (Element *)((long)pEVar9 >> 1);
    lVar8 = lVar8 + 1;
  } while (pEVar9 != (Element *)0x1);
  SortArray<List<PropertyInfo,DefaultAllocator>::Element*,List<PropertyInfo,DefaultAllocator>::AuxiliaryComparator<Comparator<PropertyInfo>>,true>
  ::introsort(0,(long)pEVar4,__src,lVar8 * 2);
  if ((long)pEVar4 < 0x11) {
    pEVar9 = (Element *)0x1;
    pEVar6 = *__src;
    do {
      while( true ) {
        pEVar11 = __src[(long)pEVar9];
        ppEVar5 = __src + (long)pEVar9;
        cVar3 = String::operator<((String *)(pEVar11 + 8),(String *)(pEVar6 + 8));
        if (cVar3 != '\0') break;
        while (cVar3 = String::operator<((String *)(pEVar11 + 8),(String *)(ppEVar5[-1] + 8)),
              cVar3 != '\0') {
          if (ppEVar5 == __src + 1) {
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          *ppEVar5 = ppEVar5[-1];
          ppEVar5 = ppEVar5 + -1;
        }
        *ppEVar5 = pEVar11;
        pEVar9 = pEVar9 + 1;
        pEVar11 = *__src;
        pEVar6 = pEVar11;
        if (pEVar4 == pEVar9) goto LAB_0011f879;
      }
      __n = (long)pEVar9 * 8;
      pEVar9 = pEVar9 + 1;
      memmove(__src + 1,__src,__n);
      *__src = pEVar11;
      pEVar6 = pEVar11;
    } while (pEVar4 != pEVar9);
  }
  else {
    lVar8 = 1;
    do {
      while( true ) {
        lVar10 = lVar8;
        pEVar9 = __src[lVar10];
        cVar3 = String::operator<((String *)(pEVar9 + 8),(String *)(*__src + 8));
        if (cVar3 != '\0') break;
        ppEVar5 = __src + lVar10;
        while (cVar3 = String::operator<((String *)(pEVar9 + 8),(String *)(ppEVar5[-1] + 8)),
              cVar3 != '\0') {
          if (ppEVar5 + -1 == __src) {
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          *ppEVar5 = ppEVar5[-1];
          ppEVar5 = ppEVar5 + -1;
        }
        *ppEVar5 = pEVar9;
        lVar8 = lVar10 + 1;
        if (lVar10 + 1 == 0x10) goto LAB_0011f6ee;
      }
      memmove(__src + 1,__src,lVar10 * 8);
      *__src = pEVar9;
      lVar8 = lVar10 + 1;
    } while (lVar10 + 1 != 0x10);
LAB_0011f6ee:
    pEVar9 = (Element *)(lVar10 + 1);
    do {
      pEVar6 = __src[(long)pEVar9];
      ppEVar5 = __src + (long)pEVar9;
      pEVar11 = pEVar9;
      while( true ) {
        pEVar11 = pEVar11 + -1;
        cVar3 = String::operator<((String *)(pEVar6 + 8),(String *)(ppEVar5[-1] + 8));
        if (cVar3 == '\0') break;
        if (pEVar11 == (Element *)0x0) {
          _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                           "bad comparison function; sorting will be broken",0,0);
          break;
        }
        *ppEVar5 = ppEVar5[-1];
        ppEVar5 = ppEVar5 + -1;
      }
      *ppEVar5 = pEVar6;
      pEVar9 = pEVar9 + 1;
    } while (pEVar4 != pEVar9);
    pEVar11 = *__src;
  }
LAB_0011f879:
  puVar2 = *(undefined8 **)this;
  *puVar2 = pEVar11;
  *(undefined8 *)(pEVar11 + 0x38) = 0;
  *(Element **)(*__src + 0x30) = __src[1];
  pEVar9 = __src[(long)(pEVar4 + -1)];
  puVar2[1] = pEVar9;
  *(Element **)(pEVar9 + 0x38) = __src[(long)(pEVar4 + -2)];
  *(undefined8 *)(__src[(long)(pEVar4 + -1)] + 0x30) = 0;
  if (iVar1 != 2) {
    ppEVar5 = __src;
    do {
      ppEVar7 = ppEVar5 + 1;
      *(Element **)(ppEVar5[1] + 0x38) = *ppEVar5;
      *(Element **)(*ppEVar7 + 0x30) = ppEVar5[2];
      ppEVar5 = ppEVar7;
    } while (__src + (iVar1 - 2) != ppEVar7);
  }
  Memory::free_static(__src,true);
  return;
}



/* RBMap<ResourceFormatSaverTextInstance::NonPersistentKey, Variant,
   Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,
   DefaultAllocator>::_Data::_create_root() */

void __thiscall
RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
::_Data::_create_root(_Data *this)

{
  undefined8 uVar1;
  Object *pOVar2;
  char cVar3;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined1 local_80 [16];
  Object *local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar4 = (undefined4 *)operator_new(0x58,DefaultAllocator::alloc);
  local_80 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = 0;
  local_68 = (Object *)0x0;
  StringName::StringName((StringName *)&local_60,(StringName *)(local_98 + 8));
  Variant::Variant((Variant *)local_58,(Variant *)&local_88);
  *puVar4 = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 10) = (undefined1  [16])0x0;
  if (local_68 != (Object *)0x0) {
    *(Object **)(puVar4 + 0xc) = local_68;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      *(undefined8 *)(puVar4 + 0xc) = 0;
    }
  }
  StringName::StringName((StringName *)(puVar4 + 0xe),(StringName *)&local_60);
  Variant::Variant((Variant *)(puVar4 + 0x10),(Variant *)local_58);
  *(undefined4 **)this = puVar4;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (((local_68 != (Object *)0x0) &&
      (cVar3 = RefCounted::unreference(), pOVar2 = local_68, cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_68), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
  if ((StringName::configured != '\0') && (local_98._8_8_ != 0)) {
    StringName::unref();
  }
  if ((local_98._0_8_ != 0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
    uVar1 = local_98._0_8_;
    cVar3 = predelete_handler((Object *)local_98._0_8_);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)uVar1 + 0x140))(uVar1);
      Memory::free_static((void *)uVar1,false);
      cVar3 = Variant::needs_deinit[(int)local_88];
      goto joined_r0x0011fa81;
    }
  }
  cVar3 = Variant::needs_deinit[(int)local_88];
joined_r0x0011fa81:
  if (cVar3 != '\0') {
    Variant::_clear_internal();
  }
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(*(long *)this + 8) = uVar1;
  *(undefined8 *)(*(long *)this + 0x10) = uVar1;
  *(undefined8 *)(*(long *)this + 0x18) = uVar1;
  **(undefined4 **)this = 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::_lookup_pos(String
   const&, unsigned int&) const */

undefined8 __thiscall
HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::_lookup_pos
          (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          String *param_1,uint *param_2)

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
  int iVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  
  if ((*(long *)this != 0) && (*(int *)(this + 0x24) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
    uVar11 = String::hash();
    uVar16 = CONCAT44(0,uVar1);
    lVar17 = *(long *)(this + 0x18);
    uVar13 = 1;
    if (uVar11 != 0) {
      uVar13 = uVar11;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(lVar17 + lVar15 * 4);
    iVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        if (uVar13 == uVar11) {
          uVar12 = String::operator==((String *)
                                      (*(long *)this +
                                      (ulong)*(uint *)(*(long *)(this + 8) + lVar15 * 4) * 8),
                                      param_1);
          if ((char)uVar12 != '\0') {
            *param_2 = *(uint *)(*(long *)(this + 8) + lVar15 * 4);
            return uVar12;
          }
          lVar17 = *(long *)(this + 0x18);
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar11 = *(uint *)(lVar17 + lVar15 * 4);
        iVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar11 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar11 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar14) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar18 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::insert(String const&)
    */

String * HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                   (String *param_1)

{
  CowData<char32_t> *this;
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
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
  char cVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  int iVar30;
  String *in_RDX;
  ulong uVar31;
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>> *in_RSI;
  uint uVar32;
  ulong uVar33;
  undefined4 uVar34;
  ulong uVar35;
  uint uVar36;
  uint *puVar37;
  long in_FS_OFFSET;
  uint local_98;
  long local_78;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x20) * 4);
  if (*(long *)in_RSI == 0) {
    uVar25 = (ulong)uVar23 * 4;
    uVar26 = Memory::alloc_static(uVar25,false);
    *(undefined8 *)(in_RSI + 0x18) = uVar26;
    uVar26 = Memory::alloc_static((ulong)uVar23 * 8,false);
    *(undefined8 *)in_RSI = uVar26;
    uVar26 = Memory::alloc_static(uVar25,false);
    *(undefined8 *)(in_RSI + 0x10) = uVar26;
    uVar26 = Memory::alloc_static(uVar25,false);
    *(undefined8 *)(in_RSI + 8) = uVar26;
    if (uVar23 != 0) {
      memset(*(void **)(in_RSI + 0x18),0,uVar25);
    }
  }
  local_44 = 0;
  cVar22 = _lookup_pos(in_RSI,in_RDX,&local_44);
  if (cVar22 == '\0') {
    if ((float)uVar23 * __LC16 < (float)(*(int *)(in_RSI + 0x24) + 1)) {
      if (*(int *)(in_RSI + 0x20) == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        iVar30 = *(int *)(in_RSI + 0x24);
        uVar23 = 0xffffffff;
        goto LAB_001200a3;
      }
      uVar23 = *(int *)(in_RSI + 0x20) + 1;
      uVar25 = (ulong)uVar23;
      if (uVar23 < 2) {
        uVar25 = 2;
      }
      uVar23 = *(uint *)(hash_table_size_primes + uVar25 * 4);
      *(int *)(in_RSI + 0x20) = (int)uVar25;
      pvVar2 = *(void **)(in_RSI + 0x18);
      uVar25 = (ulong)uVar23 * 4;
      pvVar3 = *(void **)(in_RSI + 0x10);
      uVar26 = Memory::alloc_static(uVar25,false);
      *(undefined8 *)(in_RSI + 0x18) = uVar26;
      uVar26 = Memory::realloc_static(*(void **)in_RSI,(ulong)uVar23 * 8,false);
      *(undefined8 *)in_RSI = uVar26;
      uVar26 = Memory::alloc_static(uVar25,false);
      *(undefined8 *)(in_RSI + 0x10) = uVar26;
      lVar27 = Memory::realloc_static(*(void **)(in_RSI + 8),uVar25,false);
      *(long *)(in_RSI + 8) = lVar27;
      if (uVar23 != 0) {
        memset(*(void **)(in_RSI + 0x18),0,uVar25);
      }
      if (*(int *)(in_RSI + 0x24) != 0) {
        uVar25 = 0;
        lVar4 = *(long *)(in_RSI + 0x18);
        lVar5 = *(long *)(in_RSI + 0x10);
        do {
          uVar35 = uVar25 & 0xffffffff;
          uVar34 = (undefined4)uVar25;
          uVar36 = 0;
          uVar23 = *(uint *)((long)pvVar2 + (ulong)*(uint *)((long)pvVar3 + uVar25 * 4) * 4);
          uVar31 = (ulong)uVar23;
          uVar24 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x20) * 4);
          uVar33 = CONCAT44(0,uVar24);
          lVar28 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x20) * 8);
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar31 * lVar28;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar33;
          lVar29 = SUB168(auVar6 * auVar14,8) * 4;
          iVar30 = SUB164(auVar6 * auVar14,8);
          puVar37 = (uint *)(lVar4 + lVar29);
          uVar1 = *puVar37;
          if (uVar1 == 0) {
            lVar28 = uVar25 * 4;
          }
          else {
            do {
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)uVar1 * lVar28;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = uVar33;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (ulong)((uVar24 + iVar30) - SUB164(auVar7 * auVar15,8)) * lVar28;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar33;
              local_98 = SUB164(auVar8 * auVar16,8);
              if (local_98 < uVar36) {
                *(int *)(lVar5 + uVar35 * 4) = iVar30;
                uVar23 = *puVar37;
                *puVar37 = (uint)uVar31;
                uVar1 = *(uint *)(lVar29 + lVar27);
                uVar31 = (ulong)uVar23;
                *(uint *)(lVar29 + lVar27) = (uint)uVar35;
                uVar35 = (ulong)uVar1;
                uVar36 = local_98;
              }
              uVar34 = (undefined4)uVar35;
              uVar23 = (uint)uVar31;
              uVar36 = uVar36 + 1;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = (ulong)(iVar30 + 1) * lVar28;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar33;
              lVar29 = SUB168(auVar9 * auVar17,8) * 4;
              iVar30 = SUB164(auVar9 * auVar17,8);
              puVar37 = (uint *)(lVar4 + lVar29);
              uVar1 = *puVar37;
            } while (uVar1 != 0);
            lVar28 = uVar35 << 2;
          }
          *puVar37 = uVar23;
          uVar25 = uVar25 + 1;
          *(int *)(lVar5 + lVar28) = iVar30;
          *(undefined4 *)(lVar27 + lVar29) = uVar34;
        } while ((uint)uVar25 < *(uint *)(in_RSI + 0x24));
      }
      Memory::free_static(pvVar2,false);
      Memory::free_static(pvVar3,false);
    }
    uVar24 = String::hash();
    uVar23 = 1;
    if (uVar24 != 0) {
      uVar23 = uVar24;
    }
    uVar25 = (ulong)uVar23;
    this = (CowData<char32_t> *)(*(long *)in_RSI + (ulong)*(uint *)(in_RSI + 0x24) * 8);
    *(undefined8 *)this = 0;
    CowData<char32_t>::_ref(this,(CowData *)in_RDX);
    uVar24 = *(uint *)(in_RSI + 0x24);
    lVar4 = *(long *)(in_RSI + 0x18);
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x20) * 4);
    uVar31 = CONCAT44(0,uVar1);
    lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x20) * 8);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar25 * lVar5;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar31;
    lVar27 = SUB168(auVar10 * auVar18,8) * 4;
    iVar30 = SUB164(auVar10 * auVar18,8);
    puVar37 = (uint *)(lVar4 + lVar27);
    uVar36 = *puVar37;
    if (uVar36 == 0) {
      local_78 = *(long *)(in_RSI + 0x10);
      lVar29 = *(long *)(in_RSI + 8);
    }
    else {
      uVar32 = 0;
      local_78 = *(long *)(in_RSI + 0x10);
      lVar29 = *(long *)(in_RSI + 8);
      do {
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (ulong)uVar36 * lVar5;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar31;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)((uVar1 + iVar30) - SUB164(auVar11 * auVar19,8)) * lVar5;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar31;
        local_98 = SUB164(auVar12 * auVar20,8);
        if (local_98 < uVar32) {
          *(int *)(local_78 + (ulong)uVar24 * 4) = iVar30;
          uVar23 = *puVar37;
          *puVar37 = (uint)uVar25;
          uVar36 = *(uint *)(lVar27 + lVar29);
          uVar25 = (ulong)uVar23;
          *(uint *)(lVar27 + lVar29) = uVar24;
          uVar24 = uVar36;
          uVar32 = local_98;
        }
        uVar23 = (uint)uVar25;
        uVar32 = uVar32 + 1;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)(iVar30 + 1) * lVar5;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar31;
        lVar27 = SUB168(auVar13 * auVar21,8) * 4;
        iVar30 = SUB164(auVar13 * auVar21,8);
        puVar37 = (uint *)(lVar4 + lVar27);
        uVar36 = *puVar37;
      } while (uVar36 != 0);
    }
    *puVar37 = uVar23;
    *(int *)(local_78 + (ulong)uVar24 * 4) = iVar30;
    *(uint *)(lVar29 + lVar27) = uVar24;
    uVar23 = *(uint *)(in_RSI + 0x24);
    iVar30 = uVar23 + 1;
    *(int *)(in_RSI + 0x24) = iVar30;
  }
  else {
    iVar30 = *(int *)(in_RSI + 0x24);
    uVar23 = local_44;
  }
LAB_001200a3:
  *(undefined8 *)param_1 = *(undefined8 *)in_RSI;
  *(int *)(param_1 + 8) = iVar30;
  *(uint *)(param_1 + 0xc) = uVar23;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<ResourceFormatSaverTextInstance::ResourceSort>::_copy_on_write() [clone .isra.0] [clone
   .cold] */

void CowData<ResourceFormatSaverTextInstance::ResourceSort>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ResourceFormatSaverTextInstance::save(String const&, Ref<Resource> const&, unsigned int) [clone
   .cold] */

void ResourceFormatSaverTextInstance::save(String *param_1,Ref *param_2,uint param_3)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
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
      lVar3 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
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



/* void Vector<StringName>::sort_custom<StringName::AlphCompare, true>() */

void __thiscall
Vector<StringName>::sort_custom<StringName::AlphCompare,true>(Vector<StringName> *this)

{
  long lVar1;
  code *pcVar2;
  StringName *pSVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  StringName *pSVar7;
  ulong uVar8;
  long lVar9;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = *(long *)(this + 8);
  if ((lVar9 == 0) || (lVar1 = *(long *)(lVar9 + -8), lVar1 == 0)) goto LAB_001203d2;
  if (*(ulong *)(lVar9 + -0x10) < 2) {
LAB_00120409:
    pSVar7 = *(StringName **)(this + 8);
  }
  else {
    if (*(long *)(this + 8) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar9 = *(long *)(*(long *)(this + 8) + -8);
    uVar8 = 0x10;
    if (lVar9 * 8 != 0) {
      uVar8 = lVar9 * 8 - 1;
      uVar8 = uVar8 | uVar8 >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      uVar8 = (uVar8 | uVar8 >> 0x20) + 0x11;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar8,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                       "Parameter \"mem_new\" is null.",0,0);
      goto LAB_00120409;
    }
    pSVar7 = (StringName *)(puVar4 + 2);
    lVar5 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar9;
    pSVar3 = pSVar7;
    if (lVar9 != 0) {
      do {
        lVar6 = lVar5 * 8;
        lVar5 = lVar5 + 1;
        StringName::StringName(pSVar3,(StringName *)(*(long *)(this + 8) + lVar6));
        pSVar3 = pSVar3 + 8;
      } while (lVar9 != lVar5);
    }
    CowData<StringName>::_unref((CowData<StringName> *)(this + 8));
    *(StringName **)(this + 8) = pSVar7;
  }
  if (lVar1 != 1) {
    lVar9 = 0;
    lVar5 = lVar1;
    do {
      lVar5 = lVar5 >> 1;
      lVar9 = lVar9 + 1;
    } while (lVar5 != 1);
    lVar9 = lVar9 * 2;
    lVar5 = 1;
    lVar6 = lVar1;
    if (lVar1 < 0x11) {
      do {
        lVar9 = lVar5 + 1;
        SortArray<StringName,StringName::AlphCompare,true>::linear_insert(0,lVar5,pSVar7);
        lVar5 = lVar9;
      } while (lVar1 != lVar9);
    }
    else {
      do {
        lVar9 = lVar9 + -1;
        pSVar3 = (StringName *)
                 SortArray<StringName,StringName::AlphCompare,true>::median_of_3
                           (pSVar7,pSVar7 + (lVar6 >> 1) * 8,pSVar7 + lVar6 * 8 + -8);
        StringName::StringName((StringName *)&local_48,pSVar3);
        lVar5 = SortArray<StringName,StringName::AlphCompare,true>::partitioner
                          (0,lVar6,(StringName *)&local_48,pSVar7);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        SortArray<StringName,StringName::AlphCompare,true>::introsort(lVar5,lVar6,pSVar7,lVar9);
        lVar6 = 1;
        if (lVar5 < 0x11) goto LAB_001204d0;
        lVar6 = lVar5;
      } while (lVar9 != 0);
      SortArray<StringName,StringName::AlphCompare,true>::partial_sort(0,lVar5,lVar5,pSVar7);
      lVar6 = 1;
LAB_001204d0:
      do {
        lVar9 = lVar6 + 1;
        SortArray<StringName,StringName::AlphCompare,true>::linear_insert(0,lVar6,pSVar7);
        lVar6 = lVar9;
      } while (lVar9 != 0x10);
      lVar9 = 0x10;
      do {
        StringName::StringName((StringName *)&local_48,pSVar7 + lVar9 * 8);
        SortArray<StringName,StringName::AlphCompare,true>::unguarded_linear_insert
                  (lVar9,(StringName *)&local_48,pSVar7);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
    }
  }
LAB_001203d2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<int>::_realloc(long) */

undefined8 __thiscall CowData<int>::_realloc(CowData<int> *this,long param_1)

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
/* Error CowData<int>::resize<false>(long) */

undefined8 __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

{
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
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
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
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_00120990:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
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
  if (lVar8 == 0) goto LAB_00120990;
  if (lVar9 < param_1) {
    if (lVar8 != lVar3) {
      if (lVar9 == 0) {
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar7 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar7;
        goto LAB_001208a1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_001208a1:
      puVar7[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar8 != lVar3) && (uVar6 = _realloc(this,lVar8), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* CowData<ResourceFormatSaverTextInstance::ResourceSort>::_unref() */

void __thiscall
CowData<ResourceFormatSaverTextInstance::ResourceSort>::_unref
          (CowData<ResourceFormatSaverTextInstance::ResourceSort> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  Object *pOVar5;
  code *pcVar6;
  char cVar7;
  long *plVar8;
  long lVar9;
  
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
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  lVar3 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar3 != 0) {
    lVar9 = 0;
    plVar8 = plVar1;
LAB_00120a4d:
    do {
      if (plVar8[1] != 0) {
        LOCK();
        plVar2 = (long *)(plVar8[1] + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          lVar4 = plVar8[1];
          plVar8[1] = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (*plVar8 != 0) {
        cVar7 = RefCounted::unreference();
        if (cVar7 != '\0') {
          pOVar5 = (Object *)*plVar8;
          cVar7 = predelete_handler(pOVar5);
          if (cVar7 != '\0') {
            lVar9 = lVar9 + 1;
            plVar8 = plVar8 + 2;
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
            if (lVar3 == lVar9) break;
            goto LAB_00120a4d;
          }
        }
      }
      lVar9 = lVar9 + 1;
      plVar8 = plVar8 + 2;
    } while (lVar3 != lVar9);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* void 
   Vector<ResourceFormatSaverTextInstance::ResourceSort>::sort_custom<_DefaultComparator<ResourceFormatSaverTextInstance::ResourceSort>,
   true>() */

void __thiscall
Vector<ResourceFormatSaverTextInstance::ResourceSort>::
sort_custom<_DefaultComparator<ResourceFormatSaverTextInstance::ResourceSort>,true>
          (Vector<ResourceFormatSaverTextInstance::ResourceSort> *this)

{
  CowData<char32_t> *this_00;
  CowData *pCVar1;
  long lVar2;
  Object *pOVar3;
  Object *pOVar4;
  Ref *pRVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  Ref<Resource> *pRVar9;
  ResourceSort_conflict *pRVar10;
  ResourceSort_conflict *pRVar11;
  CowData *pCVar12;
  long in_FS_OFFSET;
  long local_a0;
  Ref *local_68;
  undefined8 local_60;
  Ref *local_58;
  undefined8 local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 8) != 0) && (lVar2 = *(long *)(*(long *)(this + 8) + -8), lVar2 != 0)) {
    CowData<ResourceFormatSaverTextInstance::ResourceSort>::_copy_on_write
              ((CowData<ResourceFormatSaverTextInstance::ResourceSort> *)(this + 8));
    pRVar11 = *(ResourceSort_conflict **)(this + 8);
    if (lVar2 == 1) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        SortArray<ResourceFormatSaverTextInstance::ResourceSort,_DefaultComparator<ResourceFormatSaverTextInstance::ResourceSort>,true>
        ::introsort(0,1,pRVar11,0);
        return;
      }
      goto LAB_0012135e;
    }
    lVar7 = 0;
    lVar8 = lVar2;
    do {
      lVar8 = lVar8 >> 1;
      lVar7 = lVar7 + 1;
    } while (lVar8 != 1);
    SortArray<ResourceFormatSaverTextInstance::ResourceSort,_DefaultComparator<ResourceFormatSaverTextInstance::ResourceSort>,true>
    ::introsort(0,lVar2,pRVar11,lVar7 * 2);
    pRVar10 = pRVar11 + 0x18;
    this_00 = (CowData<char32_t> *)(pRVar11 + 8);
    if (lVar2 < 0x11) {
      lVar8 = 1;
      do {
        local_58 = (Ref *)0x0;
        Ref<Resource>::operator=((Ref<Resource> *)&local_58,*(Ref **)((CowData *)pRVar10 + -8));
        local_50[0] = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)local_50,(CowData *)pRVar10);
        cVar6 = String::naturalnocasecmp_to((String *)local_50);
        lVar7 = lVar8;
        pCVar12 = (CowData *)pRVar10;
        if (cVar6 < '\0') {
          do {
            pOVar3 = *(Object **)((CowData<char32_t> *)pCVar12 + -0x18);
            pOVar4 = *(Object **)((CowData<char32_t> *)pCVar12 + -8);
            if (pOVar3 != pOVar4) {
              *(Object **)((CowData<char32_t> *)pCVar12 + -8) = pOVar3;
              if ((pOVar3 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                *(undefined8 *)((CowData<char32_t> *)pCVar12 + -8) = 0;
              }
              if (((pOVar4 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0'))
                 && (cVar6 = predelete_handler(pOVar4), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                Memory::free_static(pOVar4,false);
              }
            }
            if (*(long *)pCVar12 != *(long *)((CowData<char32_t> *)pCVar12 + -0x10)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar12,
                         (CowData *)((CowData<char32_t> *)pCVar12 + -0x10));
            }
            lVar7 = lVar7 + -1;
            pCVar12 = (CowData *)((CowData<char32_t> *)pCVar12 + -0x10);
          } while (lVar7 != 0);
          Ref<Resource>::operator=((Ref<Resource> *)pRVar11,local_58);
          CowData<char32_t>::_ref(this_00,(CowData *)local_50);
        }
        else {
          local_68 = (Ref *)0x0;
          pRVar9 = (Ref<Resource> *)((CowData *)pRVar10 + -8);
          Ref<Resource>::operator=((Ref<Resource> *)&local_68,local_58);
          local_60 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)local_50);
          while( true ) {
            lVar7 = lVar7 + -1;
            cVar6 = String::naturalnocasecmp_to((String *)&local_60);
            if (-1 < cVar6) break;
            if (lVar7 == 0) {
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              break;
            }
            pOVar3 = *(Object **)(pRVar9 + -0x10);
            pOVar4 = *(Object **)pRVar9;
            if (pOVar3 != pOVar4) {
              *(Object **)pRVar9 = pOVar3;
              if ((pOVar3 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                *(undefined8 *)pRVar9 = 0;
              }
              if (((pOVar4 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0'))
                 && (cVar6 = predelete_handler(pOVar4), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                Memory::free_static(pOVar4,false);
              }
            }
            if (*(long *)(pRVar9 + 8) != *(long *)(pRVar9 + -8)) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(pRVar9 + 8),(CowData *)(pRVar9 + -8));
            }
            pRVar9 = pRVar9 + -0x10;
          }
          Ref<Resource>::operator=(pRVar9,local_68);
          CowData<char32_t>::_ref((CowData<char32_t> *)(pRVar9 + 8),(CowData *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          Ref<Resource>::unref((Ref<Resource> *)&local_68);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
        if (((local_58 != (Ref *)0x0) &&
            (cVar6 = RefCounted::unreference(), pRVar5 = local_58, cVar6 != '\0')) &&
           (cVar6 = predelete_handler((Object *)local_58), cVar6 != '\0')) {
          (**(code **)(*(long *)pRVar5 + 0x140))(pRVar5);
          Memory::free_static(pRVar5,false);
        }
        lVar8 = lVar8 + 1;
        pRVar10 = (ResourceSort_conflict *)((CowData *)pRVar10 + 0x10);
      } while (lVar2 != lVar8);
    }
    else {
      local_a0 = 1;
      do {
        local_58 = (Ref *)0x0;
        Ref<Resource>::operator=((Ref<Resource> *)&local_58,*(Ref **)((CowData *)pRVar10 + -8));
        local_50[0] = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)local_50,(CowData *)pRVar10);
        cVar6 = String::naturalnocasecmp_to((String *)local_50);
        pCVar12 = (CowData *)pRVar10;
        if (cVar6 < '\0') {
          do {
            pOVar3 = *(Object **)((CowData<char32_t> *)pCVar12 + -0x18);
            pOVar4 = *(Object **)((CowData<char32_t> *)pCVar12 + -8);
            if (pOVar3 != pOVar4) {
              *(Object **)((CowData<char32_t> *)pCVar12 + -8) = pOVar3;
              if ((pOVar3 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                *(undefined8 *)((CowData<char32_t> *)pCVar12 + -8) = 0;
              }
              if (((pOVar4 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0'))
                 && (cVar6 = predelete_handler(pOVar4), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                Memory::free_static(pOVar4,false);
              }
            }
            pCVar1 = (CowData *)((CowData<char32_t> *)pCVar12 + -0x10);
            if (*(long *)pCVar12 != *(long *)((CowData<char32_t> *)pCVar12 + -0x10)) {
              CowData<char32_t>::_ref((CowData<char32_t> *)pCVar12,pCVar1);
            }
            pCVar12 = pCVar1;
          } while (this_00 != (CowData<char32_t> *)pCVar1);
          Ref<Resource>::operator=((Ref<Resource> *)pRVar11,local_58);
          CowData<char32_t>::_ref(this_00,(CowData *)local_50);
        }
        else {
          local_68 = (Ref *)0x0;
          pRVar9 = (Ref<Resource> *)((CowData *)pRVar10 + -8);
          Ref<Resource>::operator=((Ref<Resource> *)&local_68,local_58);
          local_60 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)local_50);
          while( true ) {
            cVar6 = String::naturalnocasecmp_to((String *)&local_60);
            if (-1 < cVar6) break;
            if (pRVar11 + 0x10 == (ResourceSort_conflict *)pRVar9) {
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              break;
            }
            pOVar3 = *(Object **)(pRVar9 + -0x10);
            pOVar4 = *(Object **)pRVar9;
            if (pOVar3 != pOVar4) {
              *(Object **)pRVar9 = pOVar3;
              if ((pOVar3 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                *(undefined8 *)pRVar9 = 0;
              }
              if (((pOVar4 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0'))
                 && (cVar6 = predelete_handler(pOVar4), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                Memory::free_static(pOVar4,false);
              }
            }
            if (*(long *)(pRVar9 + 8) != *(long *)(pRVar9 + -8)) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(pRVar9 + 8),(CowData *)(pRVar9 + -8));
            }
            pRVar9 = pRVar9 + -0x10;
          }
          Ref<Resource>::operator=(pRVar9,local_68);
          CowData<char32_t>::_ref((CowData<char32_t> *)(pRVar9 + 8),(CowData *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          Ref<Resource>::unref((Ref<Resource> *)&local_68);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
        if (((local_58 != (Ref *)0x0) &&
            (cVar6 = RefCounted::unreference(), pRVar5 = local_58, cVar6 != '\0')) &&
           (cVar6 = predelete_handler((Object *)local_58), cVar6 != '\0')) {
          (**(code **)(*(long *)pRVar5 + 0x140))(pRVar5);
          Memory::free_static(pRVar5,false);
        }
        local_a0 = local_a0 + 1;
        pRVar10 = (ResourceSort_conflict *)((CowData *)pRVar10 + 0x10);
      } while (local_a0 != 0x10);
      pRVar11 = pRVar11 + 0x100;
      local_a0 = 0x10;
      do {
        local_58 = (Ref *)0x0;
        Ref<Resource>::operator=((Ref<Resource> *)&local_58,*(Ref **)pRVar11);
        local_50[0] = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)local_50,(CowData *)(pRVar11 + 8));
        pRVar10 = pRVar11;
        lVar8 = local_a0;
        while( true ) {
          lVar8 = lVar8 + -1;
          cVar6 = String::naturalnocasecmp_to((String *)local_50);
          if (-1 < cVar6) break;
          if (lVar8 == 0) {
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          pOVar3 = *(Object **)((Ref<Resource> *)pRVar10 + -0x10);
          pOVar4 = *(Object **)pRVar10;
          if (pOVar3 != pOVar4) {
            *(Object **)pRVar10 = pOVar3;
            if ((pOVar3 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
              *(undefined8 *)pRVar10 = 0;
            }
            if (((pOVar4 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
               (cVar6 = predelete_handler(pOVar4), cVar6 != '\0')) {
              (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
              Memory::free_static(pOVar4,false);
            }
          }
          if (*(long *)((Ref<Resource> *)pRVar10 + 8) != *(long *)((Ref<Resource> *)pRVar10 + -8)) {
            CowData<char32_t>::_ref
                      ((CowData<char32_t> *)((Ref<Resource> *)pRVar10 + 8),
                       (CowData *)((Ref<Resource> *)pRVar10 + -8));
          }
          pRVar10 = (ResourceSort_conflict *)((Ref<Resource> *)pRVar10 + -0x10);
        }
        Ref<Resource>::operator=((Ref<Resource> *)pRVar10,local_58);
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)((Ref<Resource> *)pRVar10 + 8),(CowData *)local_50);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
        if (((local_58 != (Ref *)0x0) &&
            (cVar6 = RefCounted::unreference(), pRVar5 = local_58, cVar6 != '\0')) &&
           (cVar6 = predelete_handler((Object *)local_58), cVar6 != '\0')) {
          (**(code **)(*(long *)pRVar5 + 0x140))(pRVar5);
          Memory::free_static(pRVar5,false);
        }
        local_a0 = local_a0 + 1;
        pRVar11 = pRVar11 + 0x10;
      } while (lVar2 != local_a0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0012135e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RBMap<ResourceFormatSaverTextInstance::NonPersistentKey, Variant,
   Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,
   DefaultAllocator>::_insert_rb_fix(RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,
   Variant, Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,
   DefaultAllocator>::Element*) */

void __thiscall
RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
::_insert_rb_fix(RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
                 *this,Element *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  
  iVar1 = *(int *)*(Element **)(param_1 + 0x18);
  pEVar6 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar7 = pEVar6;
      if (iVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar4 = *(Element **)(pEVar7 + 0x18);
      pEVar5 = *(Element **)(pEVar4 + 0x10);
      pEVar6 = pEVar7;
      if (pEVar5 == pEVar7) break;
      if (*(int *)pEVar5 == 0) goto LAB_0012146a;
      if (*(Element **)(pEVar7 + 0x10) == param_1) {
        lVar2 = *(long *)(param_1 + 8);
        *(long *)(pEVar7 + 0x10) = lVar2;
        pEVar6 = pEVar4;
        if (lVar2 != *(long *)(this + 8)) {
          *(Element **)(lVar2 + 0x18) = pEVar7;
          pEVar6 = *(Element **)(pEVar7 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar6;
        if (pEVar7 == *(Element **)(pEVar6 + 8)) {
          *(Element **)(pEVar6 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar6 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar7;
        *(Element **)(pEVar7 + 0x18) = param_1;
        pEVar5 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar6 = param_1;
        if (pEVar4 == pEVar5) goto LAB_00121588;
LAB_00121416:
        *(int *)pEVar4 = 0;
      }
      else {
        pEVar5 = *(Element **)(this + 8);
        *(int *)pEVar7 = 1;
        pEVar7 = param_1;
        if (pEVar4 != pEVar5) goto LAB_00121416;
LAB_00121588:
        _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      lVar2 = *(long *)(pEVar4 + 8);
      lVar3 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar4 + 8) = lVar3;
      if (lVar3 != *(long *)(this + 8)) {
        *(Element **)(lVar3 + 0x18) = pEVar4;
      }
      lVar3 = *(long *)(pEVar4 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar4 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar4;
      *(long *)(pEVar4 + 0x18) = lVar2;
LAB_00121450:
      iVar1 = *(int *)pEVar6;
      param_1 = pEVar7;
    }
    pEVar5 = *(Element **)(pEVar4 + 8);
    if (*(int *)pEVar5 != 0) {
      if (*(Element **)(pEVar7 + 8) == param_1) {
        lVar2 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar7 + 8) = lVar2;
        pEVar6 = pEVar4;
        if (lVar2 != *(long *)(this + 8)) {
          *(Element **)(lVar2 + 0x18) = pEVar7;
          pEVar6 = *(Element **)(pEVar7 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar6;
        if (pEVar7 == *(Element **)(pEVar6 + 0x10)) {
          *(Element **)(pEVar6 + 0x10) = param_1;
        }
        else {
          *(Element **)(pEVar6 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar7;
        *(Element **)(pEVar7 + 0x18) = param_1;
        pEVar5 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar6 = param_1;
        if (pEVar4 == pEVar5) goto LAB_00121650;
LAB_001214e0:
        *(int *)pEVar4 = 0;
      }
      else {
        pEVar5 = *(Element **)(this + 8);
        *(int *)pEVar7 = 1;
        pEVar7 = param_1;
        if (pEVar4 != pEVar5) goto LAB_001214e0;
LAB_00121650:
        _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      lVar2 = *(long *)(pEVar4 + 0x10);
      lVar3 = *(long *)(lVar2 + 8);
      *(long *)(pEVar4 + 0x10) = lVar3;
      if (lVar3 != *(long *)(this + 8)) {
        *(Element **)(lVar3 + 0x18) = pEVar4;
      }
      lVar3 = *(long *)(pEVar4 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar4 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar4;
      *(long *)(pEVar4 + 0x18) = lVar2;
      goto LAB_00121450;
    }
LAB_0012146a:
    pEVar6 = *(Element **)(this + 8);
    *(int *)pEVar7 = 1;
    *(int *)pEVar5 = 1;
    if (pEVar4 == pEVar6) {
      _err_print_error("_set_color","./core/templates/rb_map.h",0xed,
                       "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
    }
    else {
      *(int *)pEVar4 = 0;
    }
    iVar1 = *(int *)*(Element **)(pEVar4 + 0x18);
    pEVar6 = *(Element **)(pEVar4 + 0x18);
    param_1 = pEVar4;
  } while( true );
}



/* RBMap<ResourceFormatSaverTextInstance::NonPersistentKey, Variant,
   Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,
   DefaultAllocator>::_insert(ResourceFormatSaverTextInstance::NonPersistentKey const&, Variant
   const&) */

Element * __thiscall
RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
::_insert(RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>
          *this,NonPersistentKey *param_1,Variant *param_2)

{
  undefined8 uVar1;
  Ref *pRVar2;
  char cVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  long in_FS_OFFSET;
  bool bVar8;
  Ref *local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pEVar6 = *(Element **)this;
  if (*(Element **)(this + 8) != *(Element **)(pEVar6 + 0x10)) {
    pEVar4 = *(Element **)(pEVar6 + 0x10);
    do {
      pEVar6 = pEVar4;
      if (*(ulong *)param_1 == *(ulong *)(pEVar6 + 0x30)) {
        if (*(ulong *)(param_1 + 8) < *(ulong *)(pEVar6 + 0x38)) goto LAB_001216d8;
        if (*(ulong *)(param_1 + 8) <= *(ulong *)(pEVar6 + 0x38)) {
          Variant::operator=((Variant *)(pEVar6 + 0x40),param_2);
          goto LAB_001218a9;
        }
LAB_001216f0:
        pEVar4 = *(Element **)(pEVar6 + 8);
      }
      else {
        if (*(ulong *)(pEVar6 + 0x30) <= *(ulong *)param_1) goto LAB_001216f0;
LAB_001216d8:
        pEVar4 = *(Element **)(pEVar6 + 0x10);
      }
    } while (*(Element **)(this + 8) != pEVar4);
  }
  pEVar4 = (Element *)operator_new(0x58,DefaultAllocator::alloc);
  local_68 = (Ref *)0x0;
  Ref<Resource>::operator=((Ref<Resource> *)&local_68,*(Ref **)param_1);
  StringName::StringName((StringName *)&local_60,(StringName *)(param_1 + 8));
  Variant::Variant((Variant *)local_58,param_2);
  *(undefined4 *)pEVar4 = 0;
  *(undefined1 (*) [16])(pEVar4 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pEVar4 + 0x18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pEVar4 + 0x28) = (undefined1  [16])0x0;
  Ref<Resource>::operator=((Ref<Resource> *)(pEVar4 + 0x30),local_68);
  StringName::StringName((StringName *)(pEVar4 + 0x38),(StringName *)&local_60);
  Variant::Variant((Variant *)(pEVar4 + 0x40),(Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (((local_68 != (Ref *)0x0) &&
      (cVar3 = RefCounted::unreference(), pRVar2 = local_68, cVar3 != '\0')) &&
     (cVar3 = predelete_handler((Object *)local_68), cVar3 != '\0')) {
    (**(code **)(*(long *)pRVar2 + 0x140))(pRVar2);
    Memory::free_static(pRVar2,false);
  }
  *(Element **)(pEVar4 + 0x18) = pEVar6;
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(pEVar4 + 8) = uVar1;
  *(undefined8 *)(pEVar4 + 0x10) = uVar1;
  if (*(Element **)this == pEVar6) {
LAB_001217fb:
    *(Element **)(pEVar6 + 0x10) = pEVar4;
  }
  else {
    if (*(ulong *)param_1 == *(ulong *)(pEVar6 + 0x30)) {
      if (*(ulong *)(param_1 + 8) < *(ulong *)(pEVar6 + 0x38)) goto LAB_001217fb;
    }
    else if (*(ulong *)param_1 < *(ulong *)(pEVar6 + 0x30)) goto LAB_001217fb;
    *(Element **)(pEVar6 + 8) = pEVar4;
  }
  pEVar6 = pEVar4;
  pEVar7 = *(Element **)(pEVar4 + 8);
  if (*(Element **)(this + 8) == *(Element **)(pEVar4 + 8)) {
    do {
      pEVar5 = *(Element **)(pEVar6 + 0x18);
      bVar8 = pEVar6 == *(Element **)(pEVar5 + 8);
      pEVar6 = pEVar5;
    } while (bVar8);
    if (*(Element **)this == pEVar5) {
      pEVar5 = (Element *)0x0;
    }
  }
  else {
    do {
      pEVar6 = pEVar7 + 0x10;
      pEVar5 = pEVar7;
      pEVar7 = *(Element **)pEVar6;
    } while (*(Element **)(this + 8) != *(Element **)pEVar6);
  }
  *(Element **)(pEVar4 + 0x20) = pEVar5;
  pEVar7 = *(Element **)(pEVar4 + 0x10);
  pEVar6 = pEVar4;
  if (*(Element **)(this + 8) == *(Element **)(pEVar4 + 0x10)) {
    do {
      pEVar7 = pEVar6;
      pEVar6 = *(Element **)(pEVar7 + 0x18);
    } while (pEVar7 == *(Element **)(pEVar6 + 0x10));
    if (*(Element **)this != pEVar7) goto LAB_0012184c;
    *(undefined8 *)(pEVar4 + 0x28) = 0;
    if (pEVar5 == (Element *)0x0) goto LAB_00121866;
LAB_00121855:
    *(Element **)(pEVar5 + 0x28) = pEVar4;
    pEVar6 = *(Element **)(pEVar4 + 0x28);
    if (pEVar6 == (Element *)0x0) goto LAB_00121866;
  }
  else {
    do {
      pEVar6 = pEVar7;
      pEVar7 = *(Element **)(pEVar6 + 8);
    } while (*(Element **)(this + 8) != *(Element **)(pEVar6 + 8));
LAB_0012184c:
    *(Element **)(pEVar4 + 0x28) = pEVar6;
    if (pEVar5 != (Element *)0x0) goto LAB_00121855;
  }
  *(Element **)(pEVar6 + 0x20) = pEVar4;
LAB_00121866:
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  _insert_rb_fix(this,pEVar4);
  pEVar6 = pEVar4;
LAB_001218a9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pEVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<ResourceFormatSaverTextInstance::ResourceSort>::_realloc(long) */

undefined8 __thiscall
CowData<ResourceFormatSaverTextInstance::ResourceSort>::_realloc
          (CowData<ResourceFormatSaverTextInstance::ResourceSort> *this,long param_1)

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
/* Error CowData<ResourceFormatSaverTextInstance::ResourceSort>::resize<false>(long) */

undefined8 __thiscall
CowData<ResourceFormatSaverTextInstance::ResourceSort>::resize<false>
          (CowData<ResourceFormatSaverTextInstance::ResourceSort> *this,long param_1)

{
  long *plVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined1 (*pauVar14) [16];
  ulong uVar15;
  
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
    lVar9 = 0;
    lVar11 = 0;
  }
  else {
    lVar9 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar11 = lVar9 * 0x10;
    if (lVar11 != 0) {
      uVar12 = lVar11 - 1U | lVar11 - 1U >> 1;
      uVar12 = uVar12 | uVar12 >> 2;
      uVar12 = uVar12 | uVar12 >> 4;
      uVar12 = uVar12 | uVar12 >> 8;
      uVar12 = uVar12 | uVar12 >> 0x10;
      lVar11 = (uVar12 | uVar12 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_00121d20:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar12 = param_1 * 0x10 - 1;
  uVar12 = uVar12 >> 1 | uVar12;
  uVar12 = uVar12 | uVar12 >> 2;
  uVar12 = uVar12 | uVar12 >> 4;
  uVar12 = uVar12 | uVar12 >> 8;
  uVar12 = uVar12 | uVar12 >> 0x10;
  uVar12 = uVar12 | uVar12 >> 0x20;
  lVar13 = uVar12 + 1;
  if (lVar13 == 0) goto LAB_00121d20;
  uVar15 = param_1;
  if (param_1 <= lVar9) {
    while (lVar9 = *(long *)this, lVar9 != 0) {
      if (*(ulong *)(lVar9 + -8) <= uVar15) {
        if (lVar13 != lVar11) {
          uVar8 = _realloc(this,lVar13);
          if ((int)uVar8 != 0) {
            return uVar8;
          }
          lVar9 = *(long *)this;
          if (lVar9 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar9 + -8) = param_1;
        return 0;
      }
      plVar1 = (long *)(lVar9 + uVar15 * 0x10);
      CowData<char32_t>::_unref((CowData<char32_t> *)(plVar1 + 1));
      if ((*plVar1 != 0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
        pOVar2 = (Object *)*plVar1;
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      uVar15 = uVar15 + 1;
    }
    goto LAB_00121d76;
  }
  if (lVar13 == lVar11) {
LAB_00121c63:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
LAB_00121d76:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar9 = puVar10[-1];
    if (param_1 <= lVar9) goto LAB_00121bc0;
  }
  else {
    if (lVar9 != 0) {
      uVar8 = _realloc(this,lVar13);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      goto LAB_00121c63;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar12 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar10 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar10;
    lVar9 = 0;
  }
  pauVar14 = (undefined1 (*) [16])(puVar10 + param_1 * 2);
  pauVar7 = (undefined1 (*) [16])(puVar10 + lVar9 * 2);
  pauVar6 = pauVar7;
  if (((int)pauVar14 - (int)pauVar7 & 0x10U) != 0) {
    *pauVar7 = (undefined1  [16])0x0;
    pauVar6 = pauVar7 + 1;
    if (pauVar7 + 1 == pauVar14) goto LAB_00121bc0;
  }
  do {
    *pauVar6 = (undefined1  [16])0x0;
    pauVar7 = pauVar6 + 2;
    pauVar6[1] = (undefined1  [16])0x0;
    pauVar6 = pauVar7;
  } while (pauVar7 != pauVar14);
LAB_00121bc0:
  puVar10[-1] = param_1;
  return 0;
}



/* void memdelete_allocator<RBMap<ResourceFormatSaverTextInstance::NonPersistentKey, Variant,
   Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>, DefaultAllocator>::Element,
   DefaultAllocator>(RBMap<ResourceFormatSaverTextInstance::NonPersistentKey, Variant,
   Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>, DefaultAllocator>::Element*) */

void memdelete_allocator<RBMap<ResourceFormatSaverTextInstance::NonPersistentKey,Variant,Comparator<ResourceFormatSaverTextInstance::NonPersistentKey>,DefaultAllocator>::Element,DefaultAllocator>
               (Element *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  if (Variant::needs_deinit[*(int *)(param_1 + 0x40)] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (*(long *)(param_1 + 0x38) != 0)) {
    StringName::unref();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(param_1 + 0x30);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        Memory::free_static(param_1,false);
        return;
      }
    }
  }
  Memory::free_static(param_1,false);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomStaticMethodPointer<void, String const&, String const&, String
   const&>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<void,String_const&,String_const&,String_const&>::
~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<void,String_const&,String_const&,String_const&> *this)

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
/* ResourceLoaderText::~ResourceLoaderText() */

void __thiscall ResourceLoaderText::~ResourceLoaderText(ResourceLoaderText *this)

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
/* List<Ref<Resource>, DefaultAllocator>::~List() */

void __thiscall
List<Ref<Resource>,DefaultAllocator>::~List(List<Ref<Resource>,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Variant, DefaultAllocator>::~List() */

void __thiscall List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ResourceFormatLoaderText::~ResourceFormatLoaderText() */

void __thiscall ResourceFormatLoaderText::~ResourceFormatLoaderText(ResourceFormatLoaderText *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ResourceFormatLoader::~ResourceFormatLoader() */

void __thiscall ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ResourceFormatSaverText::~ResourceFormatSaverText() */

void __thiscall ResourceFormatSaverText::~ResourceFormatSaverText(ResourceFormatSaverText *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


